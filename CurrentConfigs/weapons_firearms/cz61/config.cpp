class CfgPatches
{
	class DZ_Weapons_Firearms_cz61
	{
		units[]=
		{
			"cz61"
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
	class CZ61_Base: Rifle_Base
	{
		scope=0;
		weight=1280;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,10,190,4,10};
		WeaponLength=0.55000001;
		ObstructionDistance=0.27500001;
		barrelArmor=1.9;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_380"
		};
		magazines[]=
		{
			"Mag_CZ61_20Rnd"
		};
		magazineSwitchTime=0.30000001;
		initSpeedMultiplier=1.15;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={0.94999999,0.94999999,0.69999999};
		hiddenSelections[]=
		{
			"camo"
		};
		class NoiseShoot
		{
			strength=60;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"CZ61_Shot_1st_SoundSet",
				"CZ61_Shot_1st_iterior_SoundSet",
				"CZ61_Tail_SoundSet",
				"CZ61_InteriorTail_SoundSet",
				"CZ61_Slapback_SoundSet",
				"CZ61_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"CZ61_1st_silencer_SoundSet",
					"CZ61_silencerTail_SoundSet",
					"CZ61_silencerInteriorTail_SoundSet"
				},
				
				{
					"CZ61_1st_silencerHomeMade_SoundSet",
					"CZ61_silencerHomeMadeTail_SoundSet",
					"CZ61_silencerHomeMadeInteriorTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.0044999998;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"CZ61_Shot_1st_SoundSet",
				"CZ61_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"CZ61_Shot_SoundSet",
				"CZ61_Shot_iterior_SoundSet",
				"CZ61_Tail_SoundSet",
				"CZ61_InteriorTail_SoundSet",
				"CZ61_Slapback_SoundSet",
				"CZ61_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"CZ61_1st_silencer_SoundSet"
				},
				
				{
					"CZ61_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"CZ61_silencer_SoundSet",
					"CZ61_silencerTail_SoundSet",
					"CZ61_silencerInteriorTail_SoundSet"
				},
				
				{
					"CZ61_silencerHomeMade_SoundSet",
					"CZ61_silencerHomeMadeTail_SoundSet",
					"CZ61_silencerHomeMadeInteriorTail_SoundSet"
				}
			};
			reloadTime=0.064999998;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.0044999998;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={75,150};
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
					onlyWithinOverheatLimits[]={0,1};
					positionOffset[]={0,0,0};
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
		weaponStateAnim="dz\anims\anm\player\reloads\CZ61\w_CZ61_states.anm";
	};
	class CZ61: CZ61_Base
	{
		scope=2;
		displayName="$STR_CfgWeapons_CZ610";
		descriptionShort="$STR_CfgWeapons_CZ611";
		model="\dz\weapons\firearms\cz61\CZ61.p3d";
		attachments[]=
		{
			"pistolMuzzle"
		};
		itemSize[]={4,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\cz61\data\cz61_main_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\cz61\data\cz61.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\cz61\data\cz61.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\cz61\data\cz61.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\cz61\data\cz61_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\cz61\data\cz61_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\cz61\data\cz61_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
