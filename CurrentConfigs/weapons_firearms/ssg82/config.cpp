class CfgPatches
{
	class DZ_Weapons_Firearms_SSG82
	{
		units[]=
		{
			"SSG82"
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
	class SSG82_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		animName="cz527";
		weight=4500;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.1,20,200,10,10};
		WeaponLength=1.05;
		ObstructionDistance=0.88999999;
		barrelArmor=0.80000001;
		initSpeedMultiplier=1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		magazines[]=
		{
			"Mag_SSG82_5rnd"
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
				"SSG82_Shot_SoundSet",
				"SSG82_Shot_interior_SoundSet",
				"SSG82_Tail_SoundSet",
				"SSG82_InteriorTail_SoundSet",
				"SSG82_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"SSG82_silencerHomeMade_SoundSet",
					"SSG82_silencerHomeMadeTail_SoundSet",
					"SSG82_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			dispersion=0.00075000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0.02,-0.02,-0.02};
				orientation[]={0,-30,0};
			};
			class Melee
			{
				position[]={0.02,0,0.0099999998};
				orientation[]={0,30,0};
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
		weaponStateAnim="dz\anims\anm\player\reloads\SSG82\w_SSG82_states.anm";
	};
	class SSG82: SSG82_Base
	{
		scope=2;
		displayName="$STR_cfgweapons_SSG820";
		descriptionShort="$STR_cfgweapons_SSG821";
		model="\dz\weapons\firearms\ssg82\ssg82.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsAug",
			"suppressorImpro"
		};
		itemSize[]={9,3};
		hiddenSelections[]=
		{
			"camo_01",
			"camo_02"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\ssg82\data\ssg82_01_co.paa",
			"dz\weapons\firearms\ssg82\data\ssg82_02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\ssg82\data\ssg82_01.rvmat",
			"dz\weapons\firearms\ssg82\data\ssg82_02.rvmat"
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
								"DZ\weapons\firearms\ssg82\data\ssg82_01.rvmat",
								"DZ\weapons\firearms\ssg82\data\ssg82_02.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\ssg82\data\ssg82_01.rvmat",
								"DZ\weapons\firearms\ssg82\data\ssg82_02.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\ssg82\data\ssg82_01_damage.rvmat",
								"DZ\weapons\firearms\ssg82\data\ssg82_02_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\ssg82\data\ssg82_01_damage.rvmat",
								"DZ\weapons\firearms\ssg82\data\ssg82_02_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\ssg82\data\ssg82_01_destruct.rvmat",
								"DZ\weapons\firearms\ssg82\data\ssg82_02_destruct.rvmat"
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
	};
	class SSG82Optic: ItemOptics
	{
		scope=2;
		model="\dz\weapons\firearms\ssg82\proxy\optic_SSG82.p3d";
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
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/4";
			opticsZoomInit="0.3926/4";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.25999999,0.085000001};
			PPLensProperties[]={0.75,0.75,0,0};
			PPBlurProperties=0.40000001;
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
		model="\dz\weapons\firearms\ssg82\proxy\optic_SSG82.p3d";
	};
};
