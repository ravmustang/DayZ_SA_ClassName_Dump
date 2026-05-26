class CfgPatches
{
	class DZ_Pistols_pb6p9
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Weapons"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Mode_Safe: Mode_SemiAuto
{
	magazines[]={};
};
class cfgWeapons
{
	class DefaultWeapon;
	class PistolCore;
	class Pistol_Base;
	class MakarovPB_Base: Pistol_Base
	{
		scope=0;
		weight=760;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		ObstructionDistance=0.31999999;
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		value=0;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"Mag_MakarovPB_8Rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_380"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Makarov_Shot_SoundSet",
				"Makarov_Tail_SoundSet",
				"Makarov_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"PB6P9_silencerPro_SoundSet",
					"PB6P9_silencerTail_SoundSet",
					"PB6P9_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.13;
			recoil="recoil_ij70";
			recoilProne="recoil_if70_prone";
			dispersion=0.012;
			magazineSlot="magazine";
		};
	};
	class MakarovPB: MakarovPB_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_MakarovPB0";
		descriptionShort="$STR_cfgWeapons_MakarovPB1";
		model="\DZ\weapons\pistols\pb6p9\pb6p9.p3d";
		attachments[]=
		{
			"pistolMuzzle"
		};
		itemSize[]={2,2};
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
								"DZ\weapons\pistols\pb6p9\data\pb6p9.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\pb6p9\data\pb6p9.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\pb6p9\data\pb6p9_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\pb6p9\data\pb6p9_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\pb6p9\data\pb6p9_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyPB6P9: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistol";
		model="\dz\weapons\pistols\pb6p9\pb6p9.p3d";
	};
};
