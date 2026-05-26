class CfgPatches
{
	class DZ_Weapons_Launchers_GP25
	{
		units[]=
		{
			"GP25"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Rifle_Base;
	class GP25Base: Rifle_Base
	{
		scope=1;
	};
	class GP25: GP25Base
	{
		scope=2;
		model="\DZ\weapons\launchers\gp25\ubgl_gp25.p3d";
	};
	class GP25_Standalone: GP25Base
	{
		scope=2;
		model="\DZ\weapons\launchers\gp25\ubgl_gp25.p3d";
	};
};
