class CfgPatches
{
	class DZ_Weapons_Firearms_AKM
	{
		units[]=
		{
			"AKM"
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
	class AKM_Base: Rifle_Base
	{
		scope=0;
		weight=2140;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		ironsightsExcludingOptics[]=
		{
			"KashtanOptic",
			"GrozaOptic",
			"KobraOptic"
		};
		WeaponLength=0.89999998;
		ObstructionDistance=0.61199999;
		barrelArmor=4.4439998;
		initSpeedMultiplier=0.89999998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		magazines[]=
		{
			"Mag_AKM_30Rnd",
			"Mag_AKM_Palm30Rnd",
			"Mag_AKM_Palm30Rnd_Black",
			"Mag_AKM_Palm30Rnd_Green",
			"Mag_AKM_Drum75Rnd",
			"Mag_AKM_Drum75Rnd_Green",
			"Mag_AKM_Drum75Rnd_Black",
			"Mag_AKM_Drum_TEST"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,0.85000002};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		modes[]=
		{
			"SemiAuto",
			"FullAuto"
		};
		class NoiseShoot
		{
			strength=80;
			type="shot";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AKM_Shot_1st_SoundSet",
				"AKM_Shot_1st_iterior_SoundSet",
				"AKM_Tail_SoundSet",
				"AKM_InteriorTail_SoundSet",
				"AKM_Slapback_SoundSet",
				"AKM_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AKM_1st_silencer_SoundSet",
					"AKM_silencerTail_SoundSet",
					"AKM_silencerInteriorTail_SoundSet"
				},
				
				{
					"AKM_1st_silencerHomeMade_SoundSet",
					"AKM_silencerHomeMadeTail_SoundSet",
					"AKM_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"AKM_Shot_1st_SoundSet",
				"AKM_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"AKM_Shot_SoundSet",
				"AKM_Shot_iterior_SoundSet",
				"AKM_Tail_SoundSet",
				"AKM_InteriorTail_SoundSet",
				"AKM_Slapback_SoundSet",
				"AKM_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"AKM_1st_silencer_SoundSet"
				},
				
				{
					"AKM_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"AKM_silencer_SoundSet",
					"AKM_silencerTail_SoundSet",
					"AKM_silencerInteriorTail_SoundSet"
				},
				
				{
					"AKM_silencerHomeMade_SoundSet",
					"AKM_silencerHomeMadeTail_SoundSet",
					"AKM_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.097999997;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,0,0.1};
				orientation[]={0,45,0};
			};
			class Melee
			{
				position[]={0,0,-0.1};
				orientation[]={0,-45,0};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
	};
	class AKM: AKM_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_AKM0";
		descriptionShort="$STR_cfgWeapons_AKM1";
		model="\dz\weapons\firearms\AKM\AKM.p3d";
		attachments[]=
		{
			"weaponButtstockAK",
			"WeaponHandguardAK",
			"weaponWrap",
			"weaponOpticsAK",
			"weaponFlashlight",
			"weaponMuzzleAK",
			"weaponBayonetAK"
		};
		itemSize[]={8,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\AKM\data\akm_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\AKM\data\AKM.rvmat"
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
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
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
				maxOverheatingValue=12;
				shotsToStartOverheating=4;
				overheatingDecayInterval=0.69999999;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.69999999};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.69999999,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class AKM_TESTBED: AKM
	{
		displayName="testing AKM";
		descriptionShort="you should not be reading this";
		model="\dz\weapons\firearms\AKM\akm_TESTBED.p3d";
	};
};
