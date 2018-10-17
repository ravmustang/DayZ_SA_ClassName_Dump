// AUTHOR: https://pp.userapi.com/c850636/v850636179/1807a/znUdrLcPrk4.jpg

override void OnInit()
{
	GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(NumPlayersOnServer, 30000, true);  // 30 seconds
}

void NumPlayersOnServer()
{
	ref array<Man> players = new array<Man>;
	GetGame().GetPlayers( players );
	int numPlayers = players.Count();
	
	for( int i=0; i < players.Count(); ++i )
	{
		Man player = players.Get(i);
		if( player )
		{
			string messPlayers = "Players on the server: " + numPlayers.ToString();
			Param1<string> m_MessageParam = new Param1<string>(messPlayers);
			GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam, true, player.GetIdentity());
		}
	}
}