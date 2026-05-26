class CfgPatches
{
	class DZ_Weapons_Firearms_M16A2
	{
		units[]=
		{
			"M16A2"
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
	class M4A1_Base;
	class M4A1;
	class M16A2_Base: Rifle_Base
	{
		scope=0;
		model="\dz\weapons\firearms\m16a2\m16a2.p3d";
		weight=2900;
		itemSize[]={9,3};
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.60000002,50,180,4,10};
		WeaponLength=1.03;
		ObstructionDistance=0.72100002;
		barrelArmor=2.5;
		initSpeedMultiplier=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,0.75};
		attachments[]=
		{
			"weaponWrap",
			"weaponMuzzleM4",
			"weaponBayonet"
		};
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
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\m16a2\data\m16a2_a_co.paa",
			"dz\weapons\firearms\m16a2\data\m16a2_b_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\m16a2\data\m16a2_a.rvmat",
			"dz\weapons\firearms\m16a2\data\m16a2_b.rvmat"
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
								"DZ\weapons\firearms\M16a2\Data\m16a2_a.rvmat",
								"DZ\weapons\firearms\M16a2\Data\m16a2_b.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\M16a2\Data\m16a2_a.rvmat",
								"DZ\weapons\firearms\M16a2\Data\m16a2_b.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\M16a2\Data\m16a2_a_damage.rvmat",
								"DZ\weapons\firearms\M16a2\Data\m16a2_b_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\M16a2\Data\m16a2_a_damage.rvmat",
								"DZ\weapons\firearms\M16a2\Data\m16a2_b_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\M16a2\Data\m16a2_a_destruct.rvmat",
								"DZ\weapons\firearms\M16a2\Data\m16a2_b_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class NoiseShoot
		{
			strength=80;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto",
			"Burst"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"M16A2_Shot_SoundSet",
				"M16A2_Shot_iterior_SoundSet",
				"M16A2_Tail_SoundSet",
				"M16A2_InteriorTail_SoundSet",
				"M16A2_Slapback_SoundSet",
				"M16A2_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"M16A2_silencer_SoundSet",
					"M16A2_silencerTail_SoundSet",
					"M16A2_silencerInteriorTail_SoundSet"
				},
				
				{
					"M16A2_silencerHomeMade_SoundSet",
					"M16A2_silencerHomeMadeTail_SoundSet",
					"M16A2_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[]=
			{
				"M16A2_Shot_SoundSet",
				"M16A2_Shot_iterior_SoundSet",
				"M16A2_Tail_SoundSet",
				"M16A2_InteriorTail_SoundSet",
				"M16A2_Slapback_SoundSet",
				"M16A2_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"M16A2_silencer_SoundSet",
					"M16A2_silencerTail_SoundSet",
					"M16A2_silencerInteriorTail_SoundSet"
				},
				
				{
					"M16A2_silencerHomeMade_SoundSet",
					"M16A2_silencerHomeMadeTail_SoundSet",
					"M16A2_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			burst=3;
			reloadTime=0.064999998;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,100,200};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=200;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.1,0,0.02};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.1,0,-0.050000001};
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
				maxOverheatingValue=8;
				shotsToStartOverheating=4;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.60000002};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.60000002,1};
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
		weaponStateAnim="dz\anims\anm\player\reloads\m16a2\w_m16a2_states.anm";
	};
	class M16A2: M16A2_Base
	{
		scope=2;
		displayName="$STR_M16A2_0";
		descriptionShort="$STR_M16A2_1";
	};
};
