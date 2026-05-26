class CfgPatches
{
	class DZ_Weapons_Firearms_FAL
	{
		units[]=
		{
			"FAL"
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
	class FAL_Base: Rifle_Base
	{
		scope=0;
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		WeaponLength=1.1;
		ObstructionDistance=0.80699998;
		barrelArmor=2.2;
		initSpeedMultiplier=0.89999998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"Mag_FAL_20Rnd"
		};
		magazineSwitchTime=0.44999999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.3,2.3,0.89999998};
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
			"SemiAuto",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"FAL_Shot_1st_SoundSet",
				"FAL_Shot_1st_iterior_SoundSet",
				"FAL_Tail_SoundSet",
				"FAL_InteriorTail_SoundSet",
				"FAL_Slapback_SoundSet",
				"FAL_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FAL_1st_silencerHomeMade_SoundSet",
					"FAL_silencerHomeMadeTail_SoundSet",
					"FAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"FAL_Shot_1st_SoundSet",
				"FAL_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"FAL_Shot_SoundSet",
				"FAL_Shot_iterior_SoundSet",
				"FAL_Tail_SoundSet",
				"FAL_InteriorTail_SoundSet",
				"FAL_Slapback_SoundSet",
				"FAL_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"FAL_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"FAL_silencerHomeMade_SoundSet",
					"FAL_silencerHomeMadeTail_SoundSet",
					"FAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.097999997;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			discreteDistance[]={200,300,400,500,600};
			discreteDistanceInitIndex=0;
			distanceZoomMin=200;
			distanceZoomMax=600;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.050000001,0,0.02};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.050000001,0,-0.050000001};
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
					overrideParticle="weapon_shot_mosin9130_01";
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
				maxOverheatingValue=8;
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
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
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
		weaponStateAnim="dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
	};
	class FAL: FAL_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_FAL0";
		descriptionShort="$STR_cfgWeapons_FAL1";
		model="\dz\weapons\firearms\fal\fal.p3d";
		attachments[]=
		{
			"weaponButtstockFal",
			"weaponWrap",
			"weaponOptics",
			"suppressorImpro"
		};
		itemSize[]={8,3};
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
								"DZ\weapons\firearms\fal\Data\fal.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\fal\Data\fal.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\fal\Data\fal_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
