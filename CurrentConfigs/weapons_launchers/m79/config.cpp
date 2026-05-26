class CfgPatches
{
	class DZ_Weapons_Launchers_M79
	{
		units[]=
		{
			"M79"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Launchers"
		};
	};
};
class Mode_Single;
class Mode_SemiAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class M79_Base: Rifle_Base
	{
		scope=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,10,170,4,10};
		WeaponLength=0.69999999;
		ObstructionDistance=0.523;
		barrelArmor=1.875;
		initSpeedMultiplier=1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_40mm_Explosive",
			"Ammo_40mm_ChemGas",
			"Ammo_40mm_Smoke_Red",
			"Ammo_40mm_Smoke_Green",
			"Ammo_40mm_Smoke_White",
			"Ammo_40mm_Smoke_Black"
		};
		magazines[]={};
		DisplayMagazine=0;
		ejectType=3;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		class NoiseShoot
		{
			strength=40;
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
				"M79_Shot_SoundSet",
				"M79_Tail_SoundSet",
				"M79_InteriorTail_SoundSet",
				"M79_Slapback_SoundSet",
				"M79_Tail_2D_SoundSet",
				"M79_Shot_Interior_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"IZH18_silencerHomeMade_SoundSet",
					"IZH18_silencerHomeMadeTail_SoundSet",
					"IZH18_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			envShootingDecrease=0.050000001;
			reloadTime=1;
			dispersion=0.025;
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={75};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=75;
			distanceZoomMax=75;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.15000001,0.079999998,0.015};
				orientation[]={0,0,-5};
			};
			class Melee
			{
				position[]={-0.15000001,0.1,-0.029999999};
				orientation[]={0,0,-5};
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
					illuminateWorld=0;
					positionOffset[]={-0.029999999,0,0};
				};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\M79\w_m79_states.anm";
		boneRemap[]=
		{
			"release",
			"Weapon_Bone_02",
			"barrel",
			"Weapon_Bone_01",
			"trigger",
			"Weapon_Trigger",
			"extractor",
			"Weapon_Bone_03",
			"bullet",
			"Weapon_Bullet",
			"charging",
			"Weapon_Bone_04"
		};
	};
	class M79: M79_Base
	{
		scope=2;
		displayName="$STR_M790";
		descriptionShort="$STR_M791";
		model="\dz\weapons\launchers\m79\m79.p3d";
		weight=2700;
		itemSize[]={6,3};
		attachments[]=
		{
			"weaponOpticsAug"
		};
		WeaponLiftCheckVerticalOffset=-0.1;
		hiddenSelections[]=
		{
			"camo_a",
			"camo_b"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\weapons\launchers\m79\data\m79_a_co.paa",
			"\dz\weapons\launchers\m79\data\m79_b_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\launchers\m79\data\m79_a.rvmat",
			"dz\weapons\launchers\m79\data\m79_b.rvmat"
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
								"DZ\weapons\launchers\m79\data\m79_a.rvmat",
								"DZ\weapons\launchers\m79\data\m79_b.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\launchers\m79\data\m79_a.rvmat",
								"DZ\weapons\launchers\m79\data\m79_b.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\launchers\m79\data\m79_a_damage.rvmat",
								"DZ\weapons\launchers\m79\data\m79_b_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\launchers\m79\data\m79_a_damage.rvmat",
								"DZ\weapons\launchers\m79\data\m79_b_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\launchers\m79\data\m79_a_destruct.rvmat",
								"DZ\weapons\launchers\m79\data\m79_b_destruct.rvmat"
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet="PSO11Optic_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="PSO11Optic_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class M79DummyOptics: ItemOptics
	{
		scope=2;
		model="\dz\weapons\launchers\m79\proxy\dummyscope.p3d";
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
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=75;
			distanceZoomMax=75;
			discreteDistance[]={75};
			discreteDistanceInitIndex=0;
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxydummyscope: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsAug";
		model="\dz\weapons\firearms\aug\proxy\dummyscope.p3d";
	};
};
