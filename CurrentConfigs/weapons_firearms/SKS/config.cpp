class CfgPatches
{
	class DZ_Weapons_Firearms_SKS
	{
		units[]=
		{
			"SKS",
			"SKS_Black",
			"SKS_Green"
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
	class SKS_Base: Rifle_Base
	{
		scope=0;
		weight=3850;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.60000002,50,160,4,10};
		DisplayMagazine=0;
		WeaponLength=1.0599999;
		ObstructionDistance=0.87599999;
		barrelArmor=1.6670001;
		initSpeedMultiplier=1.1;
		chamberSize=10;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Mag_CLIP762x39_10Rnd",
			"Ammo_762x39Tracer"
		};
		magazines[]={};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.4000001,2.4000001,0.89999998};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		cursor="aimBowGhost";
		hiddenSelections[]=
		{
			"camoGround",
			"Clip_rounds",
			"clip"
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"SKS_Shot_SoundSet",
				"SKS_Shot_iterior_SoundSet",
				"SKS_Tail_SoundSet",
				"SKS_InteriorTail_SoundSet",
				"SKS_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"SKS_silencerHomeMade_SoundSet",
					"SKS_silencerHomeMadeTail_SoundSet",
					"SKS_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			envShootingDecrease=0.80000001;
			envShootingDecreaseExt[]={0.050000001,0.050000001};
			reloadTime=0.12;
			recoil="recoil_sks";
			recoilProne="recoil_sks_prone";
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
				position[]={0,0,-0.050000001};
				orientation[]={0,-40,0};
			};
			class Melee
			{
				position[]={0,0,0.050000001};
				orientation[]={0,40,0};
			};
		};
		class AnimationSources
		{
			class Clip_rounds
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Clip
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
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
					overrideParticle="weapon_shot_sks_01";
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
		weaponStateAnim="dz\anims\anm\player\reloads\SKS\w_SKS_states.anm";
		boneRemap[]=
		{
			"bolt",
			"Weapon_Bolt",
			"trigger",
			"Weapon_Trigger",
			"bullet",
			"Weapon_Bullet",
			"follower",
			"Weapon_Bone_02",
			"clip",
			"Weapon_Magazine",
			"cliprounds",
			"Weapon_Bone_01"
		};
	};
	class SKS: SKS_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_SKS0";
		descriptionShort="$STR_cfgWeapons_SKS1";
		model="\dz\weapons\firearms\SKS\SKS.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsMosin",
			"suppressorImpro",
			"weaponBayonetSKS"
		};
		itemSize[]={9,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\SKS\data\sks_co.paa",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\SKS\data\sks.rvmat",
			"",
			""
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
								"DZ\weapons\firearms\SKS\data\sks.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\SKS\data\sks.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\SKS\data\sks_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\SKS\data\sks_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\SKS\data\sks_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SKS_Black: SKS
	{
		scope=2;
		descriptionShort="$STR_cfgWeapons_SKS_Black0";
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\SKS\data\sks_black_co.paa",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\SKS\data\sks_painted.rvmat",
			"",
			""
		};
	};
	class SKS_Green: SKS
	{
		scope=2;
		descriptionShort="$STR_cfgWeapons_SKS_Green0";
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\SKS\data\sks_green_co.paa",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\SKS\data\sks_painted.rvmat",
			"",
			""
		};
	};
};
