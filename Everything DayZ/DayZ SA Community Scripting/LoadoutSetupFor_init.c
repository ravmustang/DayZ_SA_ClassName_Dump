// AUTHOR: u/muffin80r Joe Bandit @DayZ SA reddit

/*init.c file to spawn with one of 9 random starting loadouts for RP or survival servers
For ages I've thought it would add flavour if you had a starting loadout that suggested some back story, to make you care about your character a bit more. This is my first prototype using the init.c file. There's a lot of improvements needed since a lot of loot isn't in the game yet - eventually I'd like to have at least 20 classes and the existing ones have better gear, like the cop really needs handcuffs. I based it on u/teaearlgraycold s great example and got invaluable help with syntax from r00tz on discord.*/


void main()
{
Hive ce = CreateHive();
if ( ce )
	ce.InitOffline();

Weather weather = g_Game.GetWeather();

weather.GetOvercast().SetLimits( 0.0 , 1.0 );
weather.GetRain().SetLimits( 0.0 , 1.0 );
weather.GetFog().SetLimits( 0.0 , 0.25 );

weather.GetOvercast().SetForecastChangeLimits( 0.0, 0.2 );
weather.GetRain().SetForecastChangeLimits( 0.0, 0.1 );
weather.GetFog().SetForecastChangeLimits( 0.15, 0.45 );

weather.GetOvercast().SetForecastTimeLimits( 1800 , 1800 );
weather.GetRain().SetForecastTimeLimits( 600 , 600 );
weather.GetFog().SetForecastTimeLimits( 1800 , 1800 );

weather.GetOvercast().Set( Math.RandomFloatInclusive(0.0, 0.3), 0, 0);
weather.GetRain().Set( Math.RandomFloatInclusive(0.0, 0.2), 0, 0);
weather.GetFog().Set( Math.RandomFloatInclusive(0.0, 0.1), 0, 0);

weather.SetWindMaximumSpeed(15);
weather.SetWindFunctionParams(0.1, 0.3, 50);
}

class CustomMission: MissionServer
{	
void SetRandomHealth(EntityAI itemEnt)
{
	int rndHlt = Math.RandomInt(60,100);
	itemEnt.SetHealth("","",rndHlt);
}

override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
{
	Entity playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");
	Class.CastTo(m_player, playerEnt);
	GetGame().SelectPlayer(identity, m_player);

	return m_player;
}

override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
{
	player.RemoveAllItems();

	EntityAI itemEnt;
	ItemBase itemBs;

	switch (Math.RandomInt(0, 9)) { 
	case 0:
	// Soldier
	player.GetInventory().CreateInInventory("TTSKOPants");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("TShirt_Green");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("CombatBoots_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("CombatKnife");itemBs = ItemBase.Cast(itemEnt); 
	break; 
	case 1: 
	// Paramedic
	player.GetInventory().CreateInInventory("ParamedicPants_Green");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("ParamedicJacket_Green");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("SalineBagIV");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("BandageDressing");itemBs = ItemBase.Cast(itemEnt); 
	break; 
	case 2: 
	// Office worker
	player.GetInventory().CreateInInventory("SlacksPants_Black");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("WoolCoat_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Paper");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("SodaCan_Cola");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("ThinFramesGlasses");itemBs = ItemBase.Cast(itemEnt);
	break; 
			case 3: 
	// Biker
	player.GetInventory().CreateInInventory("Jeans_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("RidersJacket_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MotoHelmet_Red");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("HikingBootsLow_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Matchbox");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Pipe");itemBs = ItemBase.Cast(itemEnt);
	break; 
			case 4: 
	// Hiker
	player.GetInventory().CreateInInventory("HikingJacket_Red");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("CargoPants_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("HikingBootsLow_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MountainBag_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Compass");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("WaterBottle");itemBs = ItemBase.Cast(itemEnt);
	break; 
			case 5: 
	// Cop
	player.GetInventory().CreateInInventory("PoliceJacket");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("PolicePants");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("CombatBoots_Grey");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Flashlight");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Battery9V");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("PersonalRadio");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Apple");itemBs = ItemBase.Cast(itemEnt);
	
	break; 
			case 6: 
	// Lumberjack
	player.GetInventory().CreateInInventory("Shirt_RedCheck");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Jeans_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("WoodAxe");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("WorkingBoots_Brown");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Ushanka_Green");itemBs = ItemBase.Cast(itemEnt);
	break; 
			case 7: 
	// Hood
	player.GetInventory().CreateInInventory("TrackSuitPants_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("TrackSuitJacket_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("KitchenKnife");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("SodaCan_Kvass");itemBs = ItemBase.Cast(itemEnt);
	
	break; 
			case 8: 
	// Fireman
	player.GetInventory().CreateInInventory("FirefighterJacket_Beige");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("FirefightersPants_Beige");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("FirefightersHelmet_White");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("WorkingBoots_Yellow");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("FirefighterAxe");itemBs = ItemBase.Cast(itemEnt);
	
	break; 
									}
//   Give universal gear
	itemEnt = player.GetInventory().CreateInInventory("Rag");
	itemBs = ItemBase.Cast(itemEnt);
	itemBs.SetQuantity(4);
//		SetRandomHealth(itemEnt);
//		player.GetInventory().CreateInInventory("HuntingKnife");
}
};
Mission CreateCustomMission(string path)
{
return new CustomMission();
}