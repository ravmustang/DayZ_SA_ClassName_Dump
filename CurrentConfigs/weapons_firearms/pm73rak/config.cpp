class CfgPatches
{
	class DZ_Weapons_Firearms_pm73rak
	{
		units[]=
		{
			"PM73Rak"
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
class CfgWeapons
{
	class Rifle_Base;
	class PM73Rak_Base: Rifle_Base
	{
		scope=0;
		weight=1600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.75,40,180,4,10};
		WeaponLength=0.60000002;
		ObstructionDistance=0.38800001;
		barrelArmor=2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_380"
		};
		magazines[]=
		{
			"Mag_PM73_25Rnd",
			"Mag_PM73_15Rnd"
		};
		magazineSwitchTime=0.34999999;
		initSpeedMultiplier=1.075;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={0.94999999,0.94999999,0.69999999};
		hiddenSelections[]=
		{
			"camo"
		};
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"pm63rak_Shot_1st_SoundSet",
				"pm63rak_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"pm63rak_Shot_SoundSet",
				"pm63rak_Shot_iterior_SoundSet",
				"pm63rak_Tail_SoundSet",
				"pm63rak_InteriorTail_SoundSet",
				"pm63rak_Slapback_SoundSet",
				"pm63rak_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"pm63rak_1st_silencer_SoundSet"
				},
				
				{
					"pm63rak_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"pm63rak_silencer_SoundSet",
					"pm63rak_silencerTail_SoundSet",
					"pm63rak_silencerInteriorTail_SoundSet"
				},
				
				{
					"pm63rak_silencerHomeMade_SoundSet",
					"pm63rak_silencerHomeMadeTail_SoundSet",
					"pm63rak_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.092;
			recoil="recoil_rak";
			recoilProne="recoil_rak_prone";
			dispersion=0.0060000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={50};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.15000001,-0.02,0};
				orientation[]={0,0,-13};
			};
			class Melee
			{
				position[]={-0.15000001,0,-0.02};
				orientation[]={0,0,-13};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=10;
				shotsToStartOverheating=2;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0.1,0.60000002};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.60000002,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
		weaponStateAnim="DZ\anims\anm\player\reloads\PM73\PM73_states.anm";
	};
	class PM73Rak: PM73Rak_Base
	{
		scope=2;
		displayName="$STR_CfgWeapons_PM73Rak0";
		descriptionShort="$STR_CfgWeapons_PM73Rak1";
		model="\dz\weapons\firearms\pm73rak\pm73rak.p3d";
		attachments[]={};
		itemSize[]={4,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\pm73rak\data\pm73_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\pm73rak\data\pm73.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\pm73rak\Data\pm73.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\pm73rak\Data\pm73.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\pm73rak\Data\pm73_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\pm73rak\Data\pm73_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\pm73rak\Data\pm73_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
