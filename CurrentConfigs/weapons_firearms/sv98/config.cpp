class CfgPatches
{
	class DZ_Weapons_Firearms_SV98
	{
		units[]=
		{
			"SV98"
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
	class SV98_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		PPDOFProperties[]={1,0.1,20,200,10,10};
		WeaponLength=1.25;
		ObstructionDistance=1.2;
		barrelArmor=2;
		initSpeedMultiplier=1.15;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,0.85000002};
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
				"SV98_Shot_SoundSet",
				"SV98_Shot_interior_SoundSet",
				"SV98_Tail_SoundSet",
				"SV98_InteriorTail_SoundSet",
				"SV98_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"SV98_silencerHomeMade_SoundSet",
					"SV98_silencerHomeMadeTail_SoundSet",
					"SV98_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="SV98Recoil";
			dispersion=0.00050000002;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=600;
			discreteDistance[]={100,200,300,400,500,600};
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
		weaponStateAnim="dz\anims\anm\player\reloads\SSG82\w_SSG82_states.anm";
	};
	class SV98: SV98_Base
	{
		scope=2;
		displayName="$STR_cfgweapons_SV980";
		descriptionShort="$STR_cfgweapons_SV981";
		model="\dz\weapons\firearms\sv98\sv98.p3d";
		attachments[]=
		{
			"weaponWrap",
			"suppressorImpro",
			"weaponOptics"
		};
		spawnDamageRange[]={0,0.60000002};
		itemSize[]={9,3};
		weight=5800;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer"
		};
		magazines[]=
		{
			"Mag_SV98_10rnd"
		};
		magazineSwitchTime=0.44999999;
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo_wood",
			"camo_metal",
			"carryhandle"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\sv98\data\sv98_wood_co.paa",
			"dz\weapons\firearms\sv98\data\sv98_metal_co.paa",
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
								"DZ\weapons\firearms\sv98\data\sv98_wood.rvmat",
								"DZ\weapons\firearms\sv98\data\sv98_metal.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\sv98\data\sv98_wood.rvmat",
								"DZ\weapons\firearms\sv98\data\sv98_metal.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\sv98\data\sv98_wood_damage.rvmat",
								"DZ\weapons\firearms\sv98\data\sv98_metal_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\sv98\data\sv98_wood_damage.rvmat",
								"DZ\weapons\firearms\sv98\data\sv98_metal_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\sv98\data\sv98_wood_destruct.rvmat",
								"DZ\weapons\firearms\sv98\data\sv98_metal_destruct.rvmat"
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
	};
};
