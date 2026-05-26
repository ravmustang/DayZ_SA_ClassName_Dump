class CfgPatches
{
	class DZ_Weapons_Firearms_VSS
	{
		units[]=
		{
			"VSS"
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
	class VSS_Base: Rifle_Base
	{
		scope=0;
		weight=2600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,150,4,10};
		barrelArmor=2.4000001;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		magazines[]=
		{
			"Mag_VSS_10Rnd",
			"Mag_VAL_20Rnd",
			"Mag_Vikhr_30Rnd"
		};
		magazineSwitchTime=0.38;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,0.85000002};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		class NoiseShoot
		{
			strength=5;
			type="sound";
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
				"VSS_1st_silencer_SoundSet",
				"VSS_silencerTail_SoundSet",
				"VSS_silencerInteriorTail_SoundSet"
			};
			envShootingDecrease=0.050000001;
			reloadTime=0.12;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"VSS_1st_silencer_SoundSet",
				"VSS_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"VSS_silencer_SoundSet",
				"VSS_silencerTail_SoundSet",
				"VSS_silencerInteriorTail_SoundSet"
			};
			reloadTime=0.064999998;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			discreteDistance[]={100,200,300,400};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.1,0,0};
				orientation[]={0,-17,0};
			};
			class Melee
			{
				position[]={-0.1,-0.0099999998,0};
				orientation[]={0,20,0};
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
					overrideParticle="weapon_shot_vss_01";
					ignoreIfSuppressed=1;
					illuminateWorld=0;
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
				maxOverheatingValue=8;
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
					onlyWithinOverheatLimits[]={0.5,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.1,0,0};
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
		weaponStateAnim="dz\anims\anm\player\reloads\VSS\w_VSS_states.anm";
	};
	class VSS: VSS_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_VSS0";
		descriptionShort="$STR_cfgWeapons_VSS1";
		model="\dz\weapons\firearms\VSS\VSS.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsAK"
		};
		itemSize[]={8,3};
		WeaponLength=0.87;
		ObstructionDistance=0.69599998;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\VSS\data\vss_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\VSS\data\vss.rvmat"
		};
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
								"DZ\weapons\firearms\VSS\data\vss.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\VSS\data\vss.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\VSS\data\vss_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\VSS\data\vss_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\VSS\data\vss_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class ASVAL: VSS_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_ASVAL0";
		descriptionShort="$STR_cfgWeapons_ASVAL1";
		model="\dz\weapons\firearms\VSS\VAL.p3d";
		PPDOFProperties[]={1,0.5,50,180.10001,4,10};
		attachments[]=
		{
			"weaponWrap",
			"WeaponOptics",
			"weaponFlashlight"
		};
		magazines[]=
		{
			"Mag_VSS_10Rnd",
			"Mag_VAL_20Rnd",
			"Mag_Vikhr_30Rnd"
		};
		WeaponLength=0.89999998;
		ObstructionDistance=0.67799997;
		itemSize[]={8,3};
		hiddenSelections[]=
		{
			"camo",
			"camo_rails"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\VSS\data\val_co.paa",
			"dz\weapons\firearms\VSS\data\val_rails_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\VSS\data\val.rvmat",
			"dz\weapons\firearms\VSS\data\val_rails.rvmat"
		};
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
								"dz\weapons\firearms\VSS\data\val.rvmat",
								"dz\weapons\firearms\VSS\data\val_rails.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\weapons\firearms\VSS\data\val.rvmat",
								"dz\weapons\firearms\VSS\data\val_rails.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\weapons\firearms\VSS\data\val_damage.rvmat",
								"dz\weapons\firearms\VSS\data\val_rails_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\weapons\firearms\VSS\data\val_damage.rvmat",
								"dz\weapons\firearms\VSS\data\val_rails_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\weapons\firearms\VSS\data\val_destruct.rvmat",
								"dz\weapons\firearms\VSS\data\val_rails_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			discreteDistance[]={50,100,200};
			discreteDistanceInitIndex=1;
			modelOptics="-";
			distanceZoomMin=160;
			distanceZoomMax=160;
		};
		weaponStateAnim="dz\anims\anm\player\reloads\VSS\w_VSS_states.anm";
	};
	class Vikhr: VSS_Base
	{
		scope=2;
		weight=2200;
		displayName="$STR_cfgWeapons_Vikhr0";
		descriptionShort="$STR_cfgWeapons_Vikhr1";
		model="\dz\weapons\firearms\VSS\Vikhr.p3d";
		WeaponLength=0.63999999;
		ObstructionDistance=0.41999999;
		PPDOFProperties[]={1,0.5,50,180.10001,4,10};
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsAK",
			"suppressorImpro"
		};
		magazines[]=
		{
			"Mag_VSS_10Rnd",
			"Mag_VAL_20Rnd",
			"Mag_Vikhr_30Rnd"
		};
		itemSize[]={6,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\VSS\data\vikhr_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\VSS\data\vikhr.rvmat"
		};
		class NoiseShoot
		{
			strength=60;
			type="shot";
		};
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
								"DZ\weapons\firearms\VSS\data\vikhr.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\VSS\data\vikhr.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\VSS\data\vikhr_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\VSS\data\vikhr_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\VSS\data\vikhr_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			discreteDistance[]={100,200};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=160;
			distanceZoomMax=160;
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Vikhr_Shot_1st_SoundSet",
				"Vikhr_Shot_1st_iterior_SoundSet",
				"Vikhr_Tail_SoundSet",
				"Vikhr_InteriorTail_SoundSet",
				"Vikhr_Slapback_SoundSet",
				"Vikhr_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Vikhr_1st_silencerHomeMade_SoundSet",
					"Vikhr_silencerHomeMadeTail_SoundSet",
					"Vikhr_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			envShootingDecrease=0.050000001;
			reloadTime=0.12;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"Vikhr_Shot_1st_SoundSet",
				"Vikhr_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"Vikhr_Shot_SoundSet",
				"Vikhr_Shot_iterior_SoundSet",
				"Vikhr_Tail_SoundSet",
				"Vikhr_InteriorTail_SoundSet",
				"Vikhr_Slapback_SoundSet",
				"Vikhr_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"Vikhr_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"Vikhr_silencerHomeMade_SoundSet",
					"Vikhr_silencerHomeMadeTail_SoundSet",
					"Vikhr_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.064999998;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0022;
			magazineSlot="magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
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
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,1};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0,0};
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
		weaponStateAnim="dz\anims\anm\player\reloads\VSS\w_VSS_states.anm";
	};
};
