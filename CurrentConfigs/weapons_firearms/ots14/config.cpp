class CfgPatches
{
	class DZ_Weapons_Firearms_groza
	{
		units[]=
		{
			"Groza"
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
	class Groza_Base: Rifle_Base
	{
		scope=0;
		weight=2700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		magazines[]=
		{
			"Mag_Groza_20Rnd",
			"Mag_VSS_10Rnd"
		};
		magazineSwitchTime=0.38;
		ejectType=1;
		recoilModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camo"
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"ots14_Shot_SoundSet",
				"ots14_Tail_SoundSet",
				"ots14_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"ots14_silencerPro_SoundSet",
					"ots14_silencerTail_SoundSet",
					"ots14_silencerInteriorTail_SoundSet"
				},
				
				{
					"ots14_silencerHomeMade_SoundSet",
					"ots14_silencerHomeMadeTail_SoundSet",
					"ots14_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.1;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0020999999;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"ots14_Shot_SoundSet",
				"ots14_Tail_SoundSet",
				"ots14_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"ots14_silencerPro_SoundSet",
					"ots14_silencerTail_SoundSet",
					"ots14_silencerInteriorTail_SoundSet"
				},
				
				{
					"ots14_silencerHomeMade_SoundSet",
					"ots14_silencerHomeMadeTail_SoundSet",
					"ots14_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.085000001;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0020999999;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
		};
	};
	class Groza: Groza_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Groza0";
		descriptionShort="$STR_cfgWeapons_Groza1";
		model="\dz\weapons\firearms\ots14\ots14.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\ots14\data\ots14_co.paa"
		};
		attachments[]=
		{
			"weaponButtstockAK",
			"weaponOpticsAK",
			"weaponMuzzleAK"
		};
		itemSize[]={5,3};
		spawnDamageRange[]={0,0.60000002};
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
								"DZ\weapons\firearms\ots14\Data\ots14.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\ots14\Data\ots14.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\ots14\Data\ots14_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\ots14\Data\ots14_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\ots14\Data\ots14_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
