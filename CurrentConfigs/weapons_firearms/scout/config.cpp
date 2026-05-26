class CfgPatches
{
	class DZ_Weapons_Firearms_Scout
	{
		units[]=
		{
			"Scout"
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
	class Scout_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		weight=3000;
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
		WeaponLength=0.98000002;
		ObstructionDistance=0.74000001;
		barrelArmor=1.1109999;
		initSpeedMultiplier=1.15;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"Mag_Scout_5Rnd"
		};
		magazineSwitchTime=0.38;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={0.89999998,0.89999998,0.60000002};
		dispersionModifier=-0.00025000001;
		dexterityModifier=-0.2;
		hiddenSelections[]=
		{
			"camo",
			"badge_cherno"
		};
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
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"SCOUT_Shot_SoundSet",
				"SCOUT_Shot_interior_SoundSet",
				"SCOUT_Tail_SoundSet",
				"SCOUT_InteriorTail_SoundSet",
				"SCOUT_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"SCOUT_silencer_SoundSet",
					"SCOUT_silencerTail_SoundSet",
					"SCOUT_silencerInteriorTail_SoundSet"
				},
				
				{
					"SCOUT_silencerHomeMade_SoundSet",
					"SCOUT_silencerHomeMadeTail_SoundSet",
					"SCOUT_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=2;
			recoil="recoil_scout";
			recoilProne="recoil_scout_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,-0.02,-0.050000001};
				orientation[]={0,-30,0};
			};
			class Melee
			{
				position[]={0,0,0.050000001};
				orientation[]={0,30,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mosin9130_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
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
		weaponStateAnim="dz\anims\anm\player\reloads\Scout\w_Scout_states.anm";
	};
	class Scout: Scout_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Scout0";
		descriptionShort="$STR_cfgWeapons_Scout1";
		model="\dz\weapons\firearms\scout\scout.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"weaponMuzzleM4"
		};
		itemSize[]={9,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\scout\data\scout_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\scout\data\scout.rvmat",
			""
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
								"DZ\weapons\firearms\scout\data\scout.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\scout\data\scout.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\scout\data\scout_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\scout\data\scout_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\scout\data\scout_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Scout_Chernarus: Scout
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\scout\data\scout_co.paa",
			"#(argb,8,8,3)color(0.2,0.2,0.2,1.0,co)"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\scout\data\scout.rvmat",
			"dz\weapons\firearms\scout\data\badge_cherno.rvmat"
		};
	};
	class Scout_Livonia: Scout
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\scout\data\scout_co.paa",
			"#(argb,8,8,3)color(0.2,0.2,0.2,1.0,co)"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\scout\data\scout.rvmat",
			"dz\weapons\firearms\scout\data\badge_livonia.rvmat"
		};
	};
};
