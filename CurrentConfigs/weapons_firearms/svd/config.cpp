class CfgPatches
{
	class DZ_Weapons_Firearms_SVD
	{
		units[]=
		{
			"SVD"
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
	class SVD_Base: Rifle_Base
	{
		scope=0;
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		ironsightsExcludingOptics[]=
		{
			"GrozaOptic",
			"KobraOptic"
		};
		WeaponLength=1.15;
		ObstructionDistance=0.92000002;
		barrelArmor=1.6;
		initSpeedMultiplier=1;
		chamberedRound="";
		chamberSize=1;
		chamberableFrom[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer"
		};
		magazines[]=
		{
			"Mag_SVD_10Rnd"
		};
		magazineSwitchTime=0.25;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,0.69999999};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"SVD_Shot_SoundSet",
				"SVD_Shot_iterior_SoundSet",
				"SVD_Tail_SoundSet",
				"SVD_InteriorTail_SoundSet",
				"SVD_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"SVD_silencer_SoundSet",
					"SVD_silencerTail_SoundSet",
					"SVD_silencerInteriorTail_SoundSet"
				},
				
				{
					"SVD_silencerHomeMade_SoundSet",
					"SVD_silencerHomeMadeTail_SoundSet",
					"SVD_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			envShootingDecrease=0.80000001;
			envShootingDecreaseExt[]={0.050000001,0.050000001};
			reloadTime=0.12;
			recoil="recoil_svd";
			recoilProne="recoil_svd_prone";
			dispersion=0.00085000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,-0.02,-0.02};
				orientation[]={0,-30,0};
			};
			class Melee
			{
				position[]={0,-0.02,0};
				orientation[]={0,30,0};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=1;
				};
				class walkErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id=2;
				};
				class runErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=3;
				};
				class runErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_R_SoundSet";
					id=4;
				};
				class sprintErc_L
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=5;
				};
				class sprintErc_R
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=6;
				};
				class walkCro_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=21;
				};
				class walkCro_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=22;
				};
				class runCro_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=23;
				};
				class runCro_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=24;
				};
				class walkProne_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=31;
				};
				class walkProne_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=32;
				};
				class runProne_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=33;
				};
				class runProne_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=34;
				};
				class jumpErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=35;
				};
				class jumpErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=36;
				};
				class landFootErc_L
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=37;
				};
				class landFootErc_R
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=38;
				};
				class walkRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=51;
				};
				class walkRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=52;
				};
				class runRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=53;
				};
				class runRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=54;
				};
				class HandStep_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=61;
				};
				class HandStep_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=62;
				};
				class HandStep_Hard_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=63;
				};
				class HandStep_Hard_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=64;
				};
				class landFeetErc
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet="Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id=892;
				};
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
					overrideParticle="weapon_shot_mosin9130_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					overridePoint="StarFlash";
					ignoreIfSuppressed=1;
				};
				class GasPistonBurstR
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
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
				maxOverheatingValue=8;
				shotsToStartOverheating=4;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.40000001};
					positionOffset[]={0.050000001,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.40000001,0.80000001};
					positionOffset[]={0.050000001,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.050000001,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.44999999,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.44999999,0,0};
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
		weaponStateAnim="dz\anims\anm\player\reloads\SVD\w_SVD_states.anm";
	};
	class SVD: SVD_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_SVD0";
		descriptionShort="$STR_cfgWeapons_SVD1";
		model="\dz\weapons\firearms\svd\svd.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsAK",
			"weaponMuzzleAK"
		};
		itemSize[]={10,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SVD_Wooden: SVD_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_SVD0";
		descriptionShort="$STR_cfgWeapons_SVD1";
		model="\dz\weapons\firearms\svd\svd_old.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsAK",
			"weaponMuzzleAK"
		};
		itemSize[]={10,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_old.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_old.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_old_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_old_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_old_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
