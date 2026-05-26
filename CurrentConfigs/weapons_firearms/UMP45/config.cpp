class CfgPatches
{
	class DZ_Weapons_Firearms_UMP
	{
		units[]=
		{
			"UMP45"
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
	class UMP45_Base: Rifle_Base
	{
		scope=0;
		weight=2500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.75,20,170,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic"
		};
		WeaponLength=0.66352999;
		ObstructionDistance=0.46399999;
		barrelArmor=0.89999998;
		initSpeedMultiplier=1.05;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_45ACP"
		};
		magazines[]=
		{
			"Mag_UMP_25Rnd"
		};
		magazineSwitchTime=0.44999999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,0.69999999};
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
				"UMP45_Shot_1st_SoundSet",
				"UMP45_Shot_1st_iterior_SoundSet",
				"UMP45_Tail_SoundSet",
				"UMP45_InteriorTail_SoundSet",
				"UMP45_Slapback_SoundSet",
				"UMP45_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"UMP45_1st_silencer_SoundSet",
					"UMP45_silencerTail_SoundSet",
					"UMP45_silencerInteriorTail_SoundSet"
				},
				
				{
					"UMP45_1st_silencerHomeMade_SoundSet",
					"UMP45_silencerHomeMadeTail_SoundSet",
					"UMP45_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_auto_primary_7outof10";
			recoilProne="recoil_auto_primary_prone_7outof10";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"UMP45_Shot_1st_SoundSet",
				"UMP45_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"UMP45_Shot_SoundSet",
				"UMP45_Shot_iterior_SoundSet",
				"UMP45_Tail_SoundSet",
				"UMP45_InteriorTail_SoundSet",
				"UMP45_Slapback_SoundSet",
				"UMP45_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"UMP45_1st_silencer_SoundSet"
				},
				
				{
					"UMP45_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"UMP45_silencer_SoundSet",
					"UMP45_silencerTail_SoundSet",
					"UMP45_silencerInteriorTail_SoundSet"
				},
				
				{
					"UMP45_silencerHomeMade_SoundSet",
					"UMP45_silencerHomeMadeTail_SoundSet",
					"UMP45_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.097999997;
			recoil="recoil_auto_primary_7outof10";
			recoilProne="recoil_auto_primary_prone_7outof10";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.1,0.0099999998,0};
				orientation[]={0,-8,0};
			};
			class Melee
			{
				position[]={-0.1,0.0099999998,-0.050000001};
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
		weaponStateAnim="dz\anims\anm\player\reloads\UMP45\w_UMP45_states.anm";
	};
	class UMP45: UMP45_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_UMP450";
		descriptionShort="$STR_cfgWeapons_UMP451";
		model="\dz\weapons\firearms\UMP45\ump.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"pistolMuzzle"
		};
		itemSize[]={6,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\UMP45\data\ump45_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
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
								"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
