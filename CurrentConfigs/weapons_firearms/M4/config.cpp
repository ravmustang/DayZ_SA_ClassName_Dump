class CfgPatches
{
	class DZ_Weapons_Firearms_M4
	{
		units[]=
		{
			"M4A1",
			"M4A1_Green",
			"M4A1_Black"
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
	class Launcher_Base;
	class M4A1_Base: Rifle_Base
	{
		scope=0;
		weight=2276;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic"
		};
		WeaponLength=0.77999997;
		ObstructionDistance=0.52600002;
		ShoulderDistance=0.050000001;
		barrelArmor=2.5;
		initSpeedMultiplier=0.89999998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
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
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,0.75};
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
			strength=80;
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
				"M4A1_Shot_1st_SoundSet",
				"M4A1_Shot_1st_iterior_SoundSet",
				"M4A1_Tail_SoundSet",
				"M4A1_InteriorTail_SoundSet",
				"M4A1_Slapback_SoundSet",
				"M4A1_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"M4A1_1st_silencer_SoundSet",
					"M4A1_silencerTail_SoundSet",
					"M4A1_silencerInteriorTail_SoundSet"
				},
				
				{
					"M4A1_1st_silencerHomeMade_SoundSet",
					"M4A1_silencerHomeMadeTail_SoundSet",
					"M4A1_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"M4A1_Shot_1st_SoundSet",
				"M4A1_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"M4A1_Shot_SoundSet",
				"M4A1_Shot_iterior_SoundSet",
				"M4A1_Tail_SoundSet",
				"M4A1_InteriorTail_SoundSet",
				"M4A1_Slapback_SoundSet",
				"M4A1_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"M4A1_1st_silencer_SoundSet"
				},
				
				{
					"M4A1_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"M4A1_silencer_SoundSet",
					"M4A1_silencerTail_SoundSet",
					"M4A1_silencerInteriorTail_SoundSet"
				},
				
				{
					"M4A1_silencerHomeMade_SoundSet",
					"M4A1_silencerHomeMadeTail_SoundSet",
					"M4A1_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.064999998;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
		weaponStateAnim="dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.1,0,0.029999999};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.1,0,-0.039999999};
				orientation[]={0,0,0};
			};
		};
	};
	class M4A1: M4A1_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_M4A10";
		descriptionShort="$STR_cfgWeapons_M4A11";
		model="\dz\weapons\firearms\m4\m4a1.p3d";
		attachments[]=
		{
			"weaponButtstockM4",
			"WeaponHandguardM4",
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleM4",
			"weaponBayonet"
		};
		itemSize[]={8,3};
		spawnDamageRange[]={0,0.60000002};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\m4\data\m4_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\m4\data\m4_body.rvmat"
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
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"
							}
						}
					};
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
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed=1;
					overrideDirectionVector[]={0,45,0};
					positionOffset[]={0.0099999998,0,0};
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
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.69999999};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.69999999,1};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.34999999,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
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
	};
	class M4A1_Green: M4A1
	{
		scope=2;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\m4\data\m4_body_green_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\m4\data\m4_body_camo.rvmat"
		};
	};
	class M4A1_Black: M4A1
	{
		scope=2;
		color="Black";
	};
	class UnderSlugGrenadeM4: Launcher_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_UnderSlugGrenadeM40";
		descriptionShort="$STR_cfgWeapons_UnderSlugGrenadeM41";
		model="\DZ\weapons\firearms\ots14\ots14_launcher.p3d";
		handheld="true";
		armAction="Disarm";
		rotationFlags=12;
		inventorySlot[]=
		{
			"weaponUnderSlugM4"
		};
		simulation="undersluglauncher";
		weight=1954;
		itemSize[]={3,2};
		dispersionModifier=-0.00019999999;
		dispersionCondition="true";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\ots14\data\ots14_launcher_co.paa"
		};
		class Melee
		{
			range=1;
			swingTime=0.5;
			action="MeleeKnifeSlash";
			ammo="MeleeLightBlunt";
			useCursor=0;
		};
		chamberSize=1;
		chamberedRound="";
		magazines[]={};
		chamberableFrom[]=
		{
			"Ammo_GrenadeM4"
		};
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
};
