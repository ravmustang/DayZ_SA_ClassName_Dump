/*
	AUTHOR: DayZ SA Dev Team and Community Developers/Codes/Awesome People
	Utilizes released script: Number of Players on Server by u/SilvioDoMine @REDDIT DAYZSA
	Original pic link https://pp.userapi.com/c850636/v850636179/1807a/znUdrLcPrk4.jpg
	
	Created a Server Messaging System to utilize for many msg types.
	Included:
	
	-Custom Server Messages
	-Number of Players on Server Messages
	-Join and Disconnect Messaging without duplicate Disconnect messages
	-Survivor Named Players custom annoying "Change Name Messages"
	-Survivor Named Players extreme annoyance "Remove in Hand Object" every 2 second(OFF by default)
	-full debugging system for easy to follow learning/troubleshooting
	
	install:
	To install ServerMessagingSystem add this to your init.c in the CustomMission section
	- #include "$CurrentDir:\mpmissions\dayzOffline.chernarusplus\serverMessagingSystem.c"
*/

	//Debugging
	bool debugServerMsgSys = false;
	bool debugCustomServerMsgs = false;
	bool debugJoinMsg = false;
	bool debugNumPlyrMsg = false;
	bool debugNameWarningMsg = false;
	bool debugInvokeOnConnect = true;
	bool debugDisconnectMonitor = true;
	//Join messages
	string joinedServer = "false";
	ref array<Man> clients = new array<Man>;
	ref array<string> clientNames = new array<string>;
	//Number of players on server
	string msg = "";
	string playerCountMsg = "";
	//survivors name warning
	ref array<Man> survivors = new array<Man>;
	
	override void OnInit()
	{
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(NumPlayersOnServer, 60 * 1000, true);  // 60 seconds
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(CustomServerMessages, 1800 * 1000, true);  // 30 Min = 1800
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(CustomServerMessages, 150 * 1000, false);	// 2.5 mins dont repeat
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(SurvivorNameChange, 30 * 1000, true);  // 30 seconds
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(DisconnectMonitor, 2 * 1000, true);  // 2 seconds
		
		
		//GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(SurvivorNameGoFuckYourself, 2 * 1000, true);  // 2 seconds
	}
	
	void ServerMessagingSystem(string ServerMsg)
	{
		ref array<Man> players = new array<Man>;
		GetGame().GetPlayers( players );
		for ( int i = 0; i < players.Count(); ++i )
		{
			Man player = players.Get(i);
			if( player )
			{
				Param1<string> m_MessageParam = new Param1<string>(ServerMsg);
				GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam, true, player.GetIdentity());
			}
		}
		if(debugServerMsgSys) PrintFormat("[DonkeyDebug] init.c ServerMessagingSystem ServerMsg:%1 players.Count:%2 players:%", ServerMsg, players.Count(), players);
	}
	
	void CustomServerMessages()
	{
		string messages[6] = {"Welcome to DonkeyPunch Community Gaming.", "Discord at https://discord.me/eXpoch", "Go there for a Free Customized Loadout(limited time)", "If you need help join the discord and chime an admin","",""};
		for ( int m = 0; m < 6; ++m )
		{
			ServerMessagingSystem(messages[m]);
			if(debugCustomServerMsgs) PrintFormat("[DonkeyDebug] init.c CustomServerMessages msg:%1", messages[m]);
		}
		
	}
	
	void NumPlayersOnServer()
	{
		ref array<Man> players = new array<Man>;
		GetGame().GetPlayers( players );
		msg = "Players on the server: " + players.Count().ToString();
		ServerMessagingSystem(msg);
		if(debugNumPlyrMsg) PrintFormat("[DonkeyDebug] init.c NumPlayersOnServer count:%1 msg:%2", players.Count(), msg);
	}
	
	void SurvivorNameChange()
	{
		for ( int s = 0; s < survivors.Count(); ++s )
		{
			Man player = survivors.Get(s);
			if(player)
			{
				msg = "Please change your name by adding -name=YourGamerName in your steam dayz sa startup parameters";
				Param1<string> m_MessageParam = new Param1<string>(msg);
				GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam, true, player.GetIdentity());
			}
			else
			{
				survivors.Remove(s);
			}
			if(debugNameWarningMsg) PrintFormat("[DonkeyDebug] init.c SurvivorNameChange survivors:%1", survivors);
		}
	}
	
	override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
	{
		Debug.Log("InvokeOnConnect:"+this.ToString(),"Connect");

		if( player ) player.OnConnect();

		// Send list of players at all clients
		SyncEvents.SendPlayerList();
		
		string identityName = identity.GetName();
		string identityID = identity.GetId();
		string msg = "DirtyS JoinFeed: " + identityName + " just logged on!";
		g_Game.GetProfileString("joinedServerMessageStatus"+identityID, joinedServer);
		if(debugInvokeOnConnect) PrintFormat("[DonkeyDebug] init.c InvokeOnConnect1 name:%1 joinedServer:%2", identityName, joinedServer);
		if( joinedServer == "false") 
		{
			ServerMessagingSystem(msg);
			g_Game.SetProfileString("joinedServerMessageStatus"+identityID, "true");
			g_Game.SaveProfile();
			if( identityName == "Survivor" ) survivors.Insert(player);
			g_Game.GetProfileString("joinedServerMessageStatus"+identityID, joinedServer);
			if(debugInvokeOnConnect) PrintFormat("[DonkeyDebug] init.c InvokeOnConnect2 name:%1 msg:%2", identityName, msg);
		}
		if((clientNames.Find(identityName) != -1)||(joinedServer == "true"))
			return;
		clients.Insert(player);
		clientNames.Insert(identityName);
		if(debugInvokeOnConnect) PrintFormat("[DonkeyDebug] init.c InvokeOnConnect3 clients:%1 clientNames:%2 survivors:%3", clients, clientNames, survivors);
	}
	
	void DisconnectMonitor()
	{
		ref array<Man> players = new array<Man>;
		GetGame().GetPlayers( players );
		if(clientNames.Count() <= players.Count())
			return;
		for ( int cc = 0; cc < clients.Count(); ++cc )
		{
			Man client = clients.Get(cc);
			string clientName = clientNames.Get(cc);
			if(debugDisconnectMonitor) PrintFormat("[DonkeyDebug] init.c DisconnectMonitor1 client:%1 clientName:%2 players.Find(player):%3",client, clientName, players.Find(client) );
			if(( client == NULL )||( players.Find(client) == -1 ))
			{
				msg = "Looks like " + clientName + " has left the server";
				ServerMessagingSystem(msg);
				if(debugDisconnectMonitor) PrintFormat("[DonkeyDebug] init.c DisconnectMonitor2 msg:%1 ", msg);
				clients.Remove(cc);
				clientNames.Remove(cc);
			}
		}
		if(debugDisconnectMonitor) PrintFormat("[DonkeyDebug] init.c DisconnectMonitor3 players:%1 clients:%2 clientNames:%3", players, clients, clientNames);
	}
	
	override void InvokeOnDisconnect( PlayerBase player )
	{
		Debug.Log("InvokeOnDisconnect:"+this.ToString(),"Connect");
		g_Game.SetProfileString("joinedServerMessageStatus"+player.GetIdentity().GetId(), "false");
		g_Game.SaveProfile();
		if( player ) player.OnDisconnect();
		
		// Send list of players at all clients
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater( SyncEvents.SendPlayerList, 500 );

		if( player.GetIdentity().GetName() == "Survivor" )
		{
			int indexS = survivors.Find(player);
			survivors.Remove(indexS);
		}
	}
	
	
/*  //This is optional annoyance for players with Survivor Name
	//This will remove whatever is in their hands every (default:2 second check)
	void SurvivorNameGoFuckYourself()
	{
		for ( int s = 0; s < survivors.Count(); ++s )
		{
			Man douche = survivors.Get(s);
			EntityAI CurrentInHands = douche.GetHumanInventory().GetEntityInHands();
			if(CurrentInHands)
			{
				string displayName = CurrentInHands.ConfigGetString("displayName");
				GetGame().ObjectDelete(CurrentInHands);
				PrintFormat( "[DonkeyAdminLog] - init.c %1 had his %2 removed from his hands", douche, displayName );
				msg = "Don't you want to have fun? Change your name and you will stop losing your"+displayName;
				Param1<string> m_MessageParam = new Param1<string>(msg);
				GetGame().RPCSingleParam(douche, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam, true, douche.GetIdentity());
			}
		}
	}
*/
