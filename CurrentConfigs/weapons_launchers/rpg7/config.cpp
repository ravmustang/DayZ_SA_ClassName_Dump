class CfgPatches
{
	class DZ_Weapons_Launchers_RPG7
	{
		units[]=
		{
			"RPG7"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Launchers"
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
	class Launcher_Base;
	class RPG7Base: Launcher_Base
	{
		cursorAim="";
		cursor="";
		cursorSize=1;
		autoAimEnabled=0;
		opticsDisablePeripherialVision=1;
		magazineReloadTime=12;
		reloadTime=0;
		initSpeed=30;
		canLock=0;
		aiRateOfFire=10;
		aiRateOfFireDistance=500;
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.5;
		minRange=20;
		minRangeProbab=0.30000001;
		midRange=150;
		midRangeProbab=0.57999998;
		maxRange=500;
		maxRangeProbab=0.039999999;
		scope=1;
		weight=7000;
		itemSize[]={4,1};
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		modelOptics="-";
		cameraDir="look";
		memoryPointCamera="eye";
		distanceZoomMin=100;
		distanceZoomMax=100;
		primary=1;
		value=0;
		model="\DZ\weapons\launchers\rpg7\rpg7.p3d";
		autoReload=0;
		chamberSize=1;
		chamberedRound="";
		magazines[]={};
		chamberableFrom[]=
		{
			"Ammo_RPG7_HE",
			"Ammo_RPG7_AP"
		};
		barrelArmor=2000;
		ejectType=2;
		recoilModifier[]={1,1,1};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"dz\sounds\weapons\firearms\CZ75\CZ75_single_0",
				3.1622777,
				1,
				1000
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\CZ75\CZ75_single_1",
				3.1622777,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin1",
				0.33333001,
				"begin2",
				0.33333001
			};
			reloadTime=0.13;
			recoil="recoil_flaregun";
			recoilProne="recoil_flaregun_prone";
			dispersion=0.029999999;
			magazineSlot="magazine";
		};
	};
	class RPG7: RPG7Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_RPG70";
		descriptionShort="$STR_cfgWeapons_RPG71";
		model="\DZ\weapons\launchers\rpg7\rpg7.p3d";
		attachments[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\launchers\rpg7\data\rpg7.rvmat",
				"DZ\weapons\launchers\rpg7\data\rpg7_damage.rvmat",
				"DZ\weapons\launchers\rpg7\data\rpg7_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class rearsight
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
		};
	};
};
