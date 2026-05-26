class CfgPatches
{
	class DZ_Weapons_Firearms_M14
	{
		units[]=
		{
			"M14"
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
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Launcher_Base;
	class M14_Base: Rifle_Base
	{
		scope=0;
		weight=2700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.86000001,50,170,4,10};
		WeaponLength=1.118;
		ObstructionDistance=0.81999999;
		barrelArmor=2.2;
		initSpeedMultiplier=1.23;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"Mag_M14_10Rnd",
			"Mag_M14_20Rnd"
		};
		magazineSwitchTime=0.44999999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.4000001,2.4000001,0.89999998};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"M14_Shot_SoundSet",
				"M14_Shot_iterior_SoundSet",
				"M14_Tail_SoundSet",
				"M14_InteriorTail_SoundSet",
				"M14_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"M14_silencerHomeMade_SoundSet",
					"M14_silencerHomeMadeTail_SoundSet",
					"M14_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			envShootingDecrease=0.80000001;
			envShootingDecreaseExt[]={0.050000001,0.050000001};
			reloadTime=0.12;
			recoil="recoil_m14";
			recoilProne="recoil_m14";
			dispersion=0.00044999999;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={50,100,200,300,400,500,600,700,800,900,1000,1100};
			discreteDistanceInitIndex=0;
		};
		weaponStateAnim="dz\anims\anm\player\reloads\M14\w_M14_states.anm";
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
	class M14: M14_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_M140";
		descriptionShort="$STR_cfgWeapons_M141";
		model="\dz\weapons\firearms\m14\m14.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"suppressorImpro"
		};
		itemSize[]={9,3};
		spawnDamageRange[]={0,0.60000002};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\m14\data\m14_metal_co.paa",
			"dz\weapons\firearms\m14\data\m14_synth_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\m14\data\m14_metal.rvmat",
			"dz\weapons\firearms\m14\data\m14_synth.rvmat"
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
								"DZ\weapons\firearms\M14\Data\m14_metal.rvmat",
								"DZ\weapons\firearms\M14\Data\m14_synth.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\M14\Data\m14_metal.rvmat",
								"DZ\weapons\firearms\M14\Data\m14_synth.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\M14\Data\m14_metal_damage.rvmat",
								"DZ\weapons\firearms\M14\Data\m14_synth_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\M14\Data\m14_metal_damage.rvmat",
								"DZ\weapons\firearms\M14\Data\m14_synth_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\M14\Data\m14_metal_destruct.rvmat",
								"DZ\weapons\firearms\M14\Data\m14_synth_destruct.rvmat"
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
					overrideParticle="weapon_shot_mosin9130_01";
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
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
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
};
