class CfgPatches
{
	class DZ_Weapons_Shotguns_MP133
	{
		units[]=
		{
			"ShotgunMp133",
			"ShotgunMp133_Pistol_Grip"
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
	class Mp133Shotgun_Base: Shotgun_Base
	{
		scope=0;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=6;
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
		barrelArmor=2.25;
		initSpeedMultiplier=1.25;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.3,2.3,0.85000002};
		cartridgeCreateTime[]={0.55000001,0.81999999};
		hiddenSelections[]=
		{
			"camo"
		};
		modes[]=
		{
			"Single"
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"Mp133_Shot_SoundSet",
				"Mp133_Tail_SoundSet",
				"Mp133_InteriorTail_SoundSet",
				"Mp133_Slapback_SoundSet",
				"Mp133_Tail_2D_SoundSet",
				"Mp133_Shot_Interior_SoundSet"
			};
			reloadTime=1;
			recoil="recoil_Mp133";
			recoilProne="recoil_Mp133_prone";
			dispersion=0.0099999998;
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
		weaponStateAnim="dz\anims\anm\player\reloads\mp133\w_mp133_states.anm";
		boneRemap[]=
		{
			"bolt",
			"Weapon_Bolt",
			"pump",
			"Weapon_Bone_01",
			"feedRamp",
			"Weapon_Bone_02",
			"trigger",
			"Weapon_Trigger",
			"bullet",
			"Weapon_Bullet",
			"boltrelease",
			"Weapon_Bone_03"
		};
	};
	class Mp133Shotgun: Mp133Shotgun_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Mp133Shotgun0";
		descriptionShort="$STR_cfgWeapons_Mp133Shotgun1";
		model="\dz\weapons\shotguns\mp133\mp133.p3d";
		animName="ShotgunMp133";
		attachments[]=
		{
			"pistolOptics"
		};
		itemSize[]={9,3};
		weight=3300;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\shotguns\mp133\data\mp133_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\shotguns\mp133\data\mp133.rvmat"
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
								"DZ\weapons\shotguns\Mp133\data\mp133.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Mp133Shotgun_PistolGrip: Mp133Shotgun_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Mp133Shotgun_PistolGrip0";
		descriptionShort="$STR_cfgWeapons_Mp133Shotgun_PistolGrip1";
		model="\dz\weapons\shotguns\mp133\mp133_pistol_grip.p3d";
		animName="ShotgunMp133_Pistol_Grip";
		attachments[]=
		{
			"pistolOptics"
		};
		itemSize[]={8,3};
		weight=2800;
		chamberSize=4;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.5,1.5,1};
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
								"DZ\weapons\shotguns\Mp133\data\mp133_pistol_grip.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133_pistol_grip.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133_pistol_grip_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133_pistol_grip_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133_pistol_grip_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
