class CfgPatches
{
	class DZ_Weapons_Firearms_M249Para
	{
		units[]=
		{
			"M249Para"
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
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class M249_Base: Rifle_Base
	{
		scope=0;
		weight=7500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"Mag_M249_Box200Rnd"
		};
		magazineSwitchTime=6.5;
		ejectType=1;
		recoilModifier[]={1,1,1};
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4_single_1",
				1.7782794,
				1,
				1000
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4_single_2",
				1.7782794,
				1,
				1000
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4_single_3",
				1.7782794,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin2",
				0.33333001
			};
			reloadTime="60/800";
			recoil="recoil_m249";
			recoilProne="recoil_m249_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
			beginSilenced_Pro1[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4Silenced",
				1,
				1,
				75
			};
			beginSilenced_Pro2[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4Silenced2",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"ddz\sounds\weapons\firearms\m4a1\m4Silenced",
				1,
				1,
				150
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro1",
					0.5,
					"beginSilenced_Pro2",
					0.5
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
		};
	};
	class M249: M249_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_M2490";
		descriptionShort="$STR_cfgWeapons_M2491";
		model="\dz\weapons\firearms\m249\m249.p3d";
		attachments[]=
		{
			"weaponOptics",
			"weaponMuzzleM4",
			"weaponHandguardM249",
			"Att_Handguard_M249_Ris"
		};
		itemSize[]={9,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\m249\Data\m249.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\m249\Data\m249.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\m249\Data\m249_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\m249\Data\m249_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\m249\Data\m249_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
