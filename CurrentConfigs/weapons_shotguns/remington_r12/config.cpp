class CfgPatches
{
	class DZ_Weapons_Shotguns_RemingtonR12
	{
		units[]=
		{
			"R12"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Weapons"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Shotgun_Base;
	class R12_Base: Shotgun_Base
	{
		scope=0;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=7;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		magazines[]={};
		DisplayMagazine=0;
		PPDOFProperties[]={1,0.5,10,140,4,10};
		WeaponLength=1.0352499;
		ObstructionDistance=0.80699998;
		barrelArmor=2;
		initSpeedMultiplier=1.25;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.3,2.3,0.85000002};
		hiddenSelections[]=
		{
			"camo"
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
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"R12_Shot_SoundSet",
				"R12_Tail_SoundSet",
				"R12_InteriorTail_SoundSet",
				"R12_Slapback_SoundSet",
				"R12_Tail_2D_SoundSet",
				"R12_Shot_Interior_SoundSet"
			};
			reloadTime=0.18000001;
			recoil="recoil_R12";
			recoilProne="recoil_R12_prone";
			dispersion=0.0060000001;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.029999999,-0.0099999998,0.0099999998};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.029999999,0,-0.029999999};
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
					overrideParticle="weapon_shot_mp133_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
					onlyWithinHealthLabel[]={3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
					onlyWithinHealthLabel[]={3,4};
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
		weaponStateAnim="dz\anims\anm\player\reloads\R12\w_R12_states.anm";
		boneRemap[]=
		{
			"bolt",
			"Weapon_Bolt",
			"bolt_link",
			"Weapon_Bone_01",
			"loading",
			"Weapon_Bone_02",
			"trigger",
			"Weapon_Trigger",
			"bullet",
			"Weapon_Bullet"
		};
	};
	class R12: R12_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_R120";
		descriptionShort="$STR_cfgWeapons_R121";
		model="\dz\weapons\shotguns\Remington_r12\R12.p3d";
		animName="ShotgunR12";
		attachments[]=
		{
			"weaponOptics",
			"weaponWrap",
			"weaponFlashlight"
		};
		itemSize[]={9,3};
		weight=3260;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\shotguns\Remington_r12\data\remington_r12_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\shotguns\Remington_r12\data\Remington_r12.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=225;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\shotguns\Remington_r12\data\Remington_r12.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\shotguns\Remington_r12\data\Remington_r12.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\shotguns\Remington_r12\data\Remington_r12_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\shotguns\Remington_r12\data\Remington_r12_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\shotguns\Remington_r12\data\Remington_r12_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
