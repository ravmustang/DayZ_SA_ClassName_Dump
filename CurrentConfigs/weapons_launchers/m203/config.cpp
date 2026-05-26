class CfgPatches
{
	class DZ_Weapons_Launchers_M203
	{
		units[]=
		{
			"M203"
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
	class M203Base: Rifle_Base
	{
		scope=1;
	};
	class M203: M203Base
	{
		scope=2;
		model="\DZ\weapons\launchers\m203\m203.p3d";
	};
	class M203_Standalone: M203Base
	{
		scope=2;
		model="\DZ\weapons\launchers\m203\m203.p3d";
	};
};
