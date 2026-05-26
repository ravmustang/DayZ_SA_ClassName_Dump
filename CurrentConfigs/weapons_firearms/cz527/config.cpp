class CfgPatches
{
	class DZ_Weapons_Firearms_CZ527
	{
		units[]=
		{
			"cz527",
			"cz527_Black",
			"cz527_Green",
			"cz527_Green_Black",
			"cz527_Black_Green"
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
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class CZ527_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		animName="cz527";
		weight=2720;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		PPDOFProperties[]={1,0.5,50,160,4,10};
		opticsFlare=0;
		winchesterTypeOpticsMount=1;
		ironsightsExcludingOptics[]=
		{
			"HuntingOptic"
		};
		WeaponLength=0.94999999;
		ObstructionDistance=0.70899999;
		barrelArmor=1.1109999;
		initSpeedMultiplier=1.2;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		magazines[]=
		{
			"Mag_CZ527_5rnd"
		};
		magazineSwitchTime=0.38;
		ejectType=0;
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
			strength=100;
			type="shot";
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"CR527_Shot_SoundSet",
				"CR527_Shot_iterior_SoundSet",
				"CR527_Tail_SoundSet",
				"CR527_InteriorTail_SoundSet",
				"CR527_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"CR527_silencerHomeMade_SoundSet",
					"CR527_silencerHomeMadeTail_SoundSet",
					"CR527_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=0.001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=200;
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.07,0,-0.07};
				orientation[]={-7,-55,5};
			};
			class Melee
			{
				position[]={-0.07,0,0.050000001};
				orientation[]={2,55,-5};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_cz527_01";
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
				maxOverheatingValue=1;
				shotsToStartOverheating=1;
				overheatingDecayInterval=0.5;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0.1,1};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,0.2};
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
		weaponStateAnim="dz\anims\anm\player\reloads\cz527\w_cz527_states.anm";
	};
	class CZ527: CZ527_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_CZ5270";
		descriptionShort="$STR_cfgWeapons_CZ5271";
		model="\dz\weapons\firearms\cz527\cz527.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"suppressorImpro"
		};
		itemSize[]={9,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\cz527\data\cz527_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\cz527\data\cz527.rvmat"
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
								"DZ\weapons\firearms\cz527\Data\cz527.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\cz527\Data\cz527.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\cz527\Data\cz527_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\cz527\Data\cz527_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\cz527\Data\cz527_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class CZ527_Black: CZ527
	{
		scope=2;
		descriptionShort="$STR_cfgWeapons_CZ527_Black0";
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
	};
	class CZ527_Green: CZ527
	{
		scope=2;
		descriptionShort="$STR_cfgWeapons_CZ527_Green0";
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
	class CZ527_Camo: CZ527
	{
		scope=2;
		descriptionShort="$STR_cfgWeapons_CZ527_Camo0";
		color="Camo";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\cz527\data\cz527_camo_co.paa"
		};
	};
};
