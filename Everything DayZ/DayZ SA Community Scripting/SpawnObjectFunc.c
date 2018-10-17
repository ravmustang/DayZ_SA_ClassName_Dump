//AUTHOR: COBALT @DAYZSA DISCORD

//USAGE: spawnThingy("Land_Misc_Well_Pump_Blue", "3692.43 402.35 5971.08", "0.0 0.0 0.0"); 

void spawnThingy(string objName, vector objPos, vector objRot)
{
    Object TestSpawn;
    TestSpawn = GetGame().CreateObject( objName, objPos, false, true );
    TestSpawn.SetOrientation( objRot );
}