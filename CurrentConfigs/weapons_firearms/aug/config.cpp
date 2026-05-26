class CfgPatches
{
	class DZ_Weapons_Firearms_aug
	{
		units[]=
		{
			"AugSteyr"
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
	class Aug_Base: Rifle_Base
	{
		scope=0;
		weight=3600;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazineSwitchTime=0.38;
		initSpeedMultiplier=1;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,1.1,0.69999999};
		PPDOFProperties[]={1,0.1,20,200,10,10};
		WeaponLength=0.80000001;
		barrelArmor=2.3;
		class NoiseShoot
		{
			strength=80;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto",
			"Burst",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AUG_Shot_1st_SoundSet",
				"AUG_Shot_1st_iterior_SoundSet",
				"AUG_Tail_SoundSet",
				"AUG_InteriorTail_SoundSet",
				"AUG_Slapback_SoundSet",
				"AUG_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AUG_1st_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AUG_1st_silencerHomeMade_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.085000001;
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[]=
			{
				"AUG_Shot_1st_SoundSet",
				"AUG_Shot_1st_iterior_SoundSet",
				"AUG_Tail_SoundSet",
				"AUG_InteriorTail_SoundSet",
				"AUG_Slapback_SoundSet",
				"AUG_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AUG_1st_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AUG_1st_silencerHomeMade_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			burst=3;
			reloadTime=0.097999997;
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"AUG_Shot_1st_SoundSet",
				"AUG_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"AUG_Shot_SoundSet",
				"AUG_Shot_iterior_SoundSet",
				"AUG_Tail_SoundSet",
				"AUG_InteriorTail_SoundSet",
				"AUG_Slapback_SoundSet",
				"AUG_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"AUG_1st_silencer_SoundSet"
				},
				
				{
					"AUG_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"AUG_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AUG_silencerHomeMade_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.090000004;
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			modelOptics="-";
			opticsZoomMin=0.28;
			opticsZoomMax=0.28;
			opticsZoomInit=0.28;
			discreteDistance[]={50,100,200};
			discreteDistanceInitIndex=1;
			distanceZoomMin=300;
			distanceZoomMax=300;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.2,0,0};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.15000001,0,-0.02};
				orientation[]={0,0,0};
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
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0.31999999,0,0};
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
					positionOffset[]={0.43000001,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.69999999};
					positionOffset[]={0.43000001,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.69999999,1};
					positionOffset[]={0.43000001,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.43000001,0,0};
					onlyWithinRainLimits[]={0.2,0.60000002};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.43000001,0,0};
					onlyWithinRainLimits[]={0.60000002,1};
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
		weaponStateAnim="dz\anims\anm\player\reloads\AUG\w_aug_states.anm";
	};
	class Aug: Aug_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_AugSteyr0";
		descriptionShort="$STR_cfgWeapons_AugSteyr1";
		model="\dz\weapons\firearms\aug\aug.p3d";
		ObstructionDistance=0.51200002;
		weight=3600;
		magazines[]=
		{
			"Mag_Aug_30Rnd",
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black"
		};
		attachments[]=
		{
			"weaponWrap",
			"weaponMuzzleM4",
			"weaponOptics",
			"weaponFlashlight"
		};
		hiddenSelections[]=
		{
			"camo_stock",
			"camo_rails",
			"camo_barrel"
		};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\aug\data\aug_stock_co.paa",
			"dz\weapons\firearms\aug\data\rail_co.paa",
			"dz\weapons\firearms\aug\data\aug_barrel_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\aug\data\aug_stock.rvmat",
			"dz\weapons\firearms\aug\data\rail.rvmat",
			"dz\weapons\firearms\aug\data\aug_barrel.rvmat"
		};
		itemSize[]={8,3};
		spawnDamageRange[]={0,0.60000002};
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
								"DZ\weapons\firearms\aug\data\aug_barrel.rvmat",
								"DZ\weapons\firearms\aug\data\aug_stock.rvmat",
								"DZ\weapons\firearms\aug\data\rail.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\aug\data\aug_barrel.rvmat",
								"DZ\weapons\firearms\aug\data\aug_stock.rvmat",
								"DZ\weapons\firearms\aug\data\rail.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\aug\data\aug_barrel_damage.rvmat",
								"DZ\weapons\firearms\aug\data\aug_stock_damage.rvmat",
								"DZ\weapons\firearms\aug\data\rail_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\aug\data\aug_barrel_damage.rvmat",
								"DZ\weapons\firearms\aug\data\aug_stock_damage.rvmat",
								"DZ\weapons\firearms\aug\data\rail_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\aug\data\aug_barrel_destruct.rvmat",
								"DZ\weapons\firearms\aug\data\aug_stock_destruct.rvmat",
								"DZ\weapons\firearms\aug\data\rail_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class AugShort: Aug_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_AugSteyr_Short0";
		descriptionShort="$STR_cfgWeapons_AugSteyr_Short1";
		model="\dz\weapons\firearms\aug\aug_short.p3d";
		weight=3200;
		WeaponLength=0.73000002;
		ObstructionDistance=0.40900001;
		magazines[]=
		{
			"Mag_Aug_30Rnd"
		};
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsAug",
			"suppressorImpro"
		};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		initSpeedMultiplier=0.85000002;
		hiddenSelections[]=
		{
			"camo_stock",
			"camo_scope",
			"camo_scope2",
			"camo_barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\aug\data\aug_stock_tan_co.paa",
			"dz\weapons\firearms\aug\data\scope_co.paa",
			"dz\weapons\firearms\aug\data\scope_ca.paa",
			"dz\weapons\firearms\aug\data\aug_barrel_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\aug\data\aug_stock.rvmat",
			"dz\weapons\firearms\aug\data\scope.rvmat",
			"dz\weapons\firearms\aug\data\scope.rvmat",
			"dz\weapons\firearms\aug\data\aug_barrel.rvmat"
		};
		itemSize[]={6,3};
		spawnDamageRange[]={0,0.60000002};
		modes[]=
		{
			"SemiAuto",
			"Burst",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AUG_Shot_1st_BarrelShort_SoundSet",
				"AUG_Shot_1st_iterior_BarrelShort_SoundSet",
				"AUG_Tail_BarrelShort_SoundSet",
				"AUG_InteriorTail_BarrelShort_SoundSet",
				"AUG_Slapback_SoundSet",
				"AUG_Tail_2D_BarrelShort_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AUG_1st_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AUG_1st_silencerHomeMade_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.085000001;
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[]=
			{
				"AUG_Shot_1st_BarrelShort_SoundSet",
				"AUG_Shot_1st_iterior_BarrelShort_SoundSet",
				"AUG_Tail_BarrelShort_SoundSet",
				"AUG_InteriorTail_BarrelShort_SoundSet",
				"AUG_Slapback_SoundSet",
				"AUG_Tail_2D_BarrelShort_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AUG_1st_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AUG_1st_silencerHomeMade_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			burst=3;
			reloadTime=0.097999997;
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"AUG_Shot_1st_BarrelShort_SoundSet",
				"AUG_Shot_1st_iterior_BarrelShort_SoundSet"
			};
			soundSetShot[]=
			{
				"AUG_Shot_BarrelShort_SoundSet",
				"AUG_Shot_iterior_BarrelShort_SoundSet",
				"AUG_Tail_BarrelShort_SoundSet",
				"AUG_InteriorTail_BarrelShort_SoundSet",
				"AUG_Slapback_SoundSet",
				"AUG_Tail_2D_BarrelShort_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"AUG_1st_silencer_SoundSet"
				},
				
				{
					"AUG_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"AUG_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AUG_silencerHomeMade_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.090000004;
			dispersion=0.0015;
			magazineSlot="magazine";
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
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0.0015,0,0};
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
				overheatingDecayInterval=0.69999999;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.69999999};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0.30000001,1};
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
								"DZ\weapons\firearms\aug\data\aug_barrel.rvmat",
								"DZ\weapons\firearms\aug\data\aug_stock.rvmat",
								"DZ\weapons\firearms\aug\data\scope.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\aug\data\aug_barrel.rvmat",
								"DZ\weapons\firearms\aug\data\aug_stock.rvmat",
								"DZ\weapons\firearms\aug\data\scope.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\aug\data\aug_barrel_damage.rvmat",
								"DZ\weapons\firearms\aug\data\aug_stock_damage.rvmat",
								"DZ\weapons\firearms\aug\data\scope_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\aug\data\aug_barrel_damage.rvmat",
								"DZ\weapons\firearms\aug\data\aug_stock_damage.rvmat",
								"DZ\weapons\firearms\aug\data\scope_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\aug\data\aug_barrel_destruct.rvmat",
								"DZ\weapons\firearms\aug\data\aug_stock_destruct.rvmat",
								"DZ\weapons\firearms\aug\data\scope_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics: Inventory_Base
	{
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet="PSO11Optic_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="PSO11Optic_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class AugOptic: ItemOptics
	{
		scope=2;
		model="\dz\weapons\firearms\aug\proxy\scope.p3d";
		weight=1;
		inventorySlot[]=
		{
			"weaponOpticsAug"
		};
		reversed=0;
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticsZoomMin="0.5236/1.5";
			opticsZoomMax="0.5236/1.5";
			opticsZoomInit="0.5236/1.5";
			distanceZoomMin=50;
			distanceZoomMax=400;
			discreteDistance[]={50,100,150,200,300,400};
			discreteDistanceInitIndex=1;
			PPMaskProperties[]={0.5,0.5,0.185,0.0099999998};
			PPLensProperties[]={0.5,0.15000001,0,0};
			PPBlurProperties=0.1;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera="eyeIronsights";
			cameraDir="cameraDirIronsights";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=50;
			distanceZoomMax=400;
			discreteDistance[]={50,100,150,200,300,400};
			discreteDistanceInitIndex=1;
			PPDOFProperties[]={1,0.1,20,200,4,10};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyscope: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsAug";
		model="\dz\weapons\firearms\aug\proxy\scope.p3d";
	};
};
