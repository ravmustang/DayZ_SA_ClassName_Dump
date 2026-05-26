class CfgPatches
{
	class DZ_Weapons_Firearms_CZ550
	{
		units[]=
		{
			"cz550"
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
	class CZ550_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		animName="cz527";
		weight=3300;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		opticsFlare=0;
		winchesterTypeOpticsMount=1;
		ironsightsExcludingOptics[]=
		{
			"HuntingOptic"
		};
		WeaponLength=1.1;
		ObstructionDistance=0.92500001;
		barrelArmor=1.6;
		initSpeedMultiplier=1.15;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"Mag_CZ550_4rnd",
			"Mag_CZ550_10rnd"
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
				"CZ550_Shot_SoundSet",
				"CZ550_Shot_iterior_SoundSet",
				"CZ550_Tail_SoundSet",
				"CZ550_InteriorTail_SoundSet",
				"CZ550_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"CZ550_silencerHomeMade_SoundSet",
					"CZ550_silencerHomeMadeTail_SoundSet",
					"CZ550_silencerInteriorHomeMadeTail_SoundSet"
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
			distanceZoomMin=200;
			distanceZoomMax=200;
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,-0.02,-0.029999999};
				orientation[]={0,-30,0};
			};
			class Melee
			{
				position[]={0,-0.029999999,0.02};
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
		weaponStateAnim="dz\anims\anm\player\reloads\cz550\w_cz550_states.anm";
	};
	class CZ550: CZ550_Base
	{
		scope=2;
		displayName="$STR_cfgweapons_cz5500";
		descriptionShort="$STR_cfgweapons_cz5501";
		model="\dz\weapons\firearms\cz550\cz550.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"suppressorImpro"
		};
		itemSize[]={10,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\cz550\data\cz550_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\cz550\data\cz550.rvmat"
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
								"DZ\weapons\firearms\cz550\Data\cz550.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\cz550\Data\cz550.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\cz550\Data\cz550_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\cz550\Data\cz550_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\cz550\Data\cz550_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
