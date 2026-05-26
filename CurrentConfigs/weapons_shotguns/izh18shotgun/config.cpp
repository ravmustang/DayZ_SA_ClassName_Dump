class CfgPatches
{
	class DZ_Weapons_Shotguns_Izh18Shotgun
	{
		units[]=
		{
			"Izh18Shotgun",
			"Izh18Shotgun_Sawedoff"
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
class Mode_Single;
class Muzzle_Base;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Shotgun_Base;
	class Izh18Shotgun_Base: Shotgun_Base
	{
		scope=0;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag",
			"Mag_12gaSnaploader_2Rnd"
		};
		DisplayMagazine=0;
		magazines[]={};
		PPDOFProperties[]={1,0.5,10,155,4,10};
		WeaponLength=1.05;
		ObstructionDistance=0.70999998;
		barrelArmor=1.875;
		initSpeedMultiplier=1.25;
		ejectType=3;
		muzzles[]=
		{
			"this"
		};
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
				"IZH18_Shot_SoundSet",
				"IZH18_Tail_SoundSet",
				"IZH18_InteriorTail_SoundSet",
				"IZH18_Slapback_SoundSet",
				"IZH18_Tail_2D_SoundSet",
				"IZH18_Shot_Interior_SoundSet"
			};
			reloadTime=1;
			dispersion=0.0099999998;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
					muzzleIndex=0;
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp133_01";
					illuminateWorld=1;
					muzzleIndex=0;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
					onlyWithinHealthLabel[]={3,4};
					muzzleIndex=0;
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
					onlyWithinHealthLabel[]={3,4};
					muzzleIndex=0;
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
		weaponStateAnim="dz\anims\anm\player\reloads\IZH18Spartan\w_izh18Spartan_states.anm";
		boneRemap[]=
		{
			"release",
			"Weapon_Bone_02",
			"barrel",
			"Weapon_Bone_01",
			"trigger",
			"Weapon_Trigger",
			"ejector",
			"Weapon_Bone_03",
			"bullet",
			"Weapon_Bullet"
		};
	};
	class Izh18Shotgun: Izh18Shotgun_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Izh18Shotgun0";
		descriptionShort="$STR_cfgWeapons_Izh18Shotgun1";
		model="\dz\weapons\shotguns\Izh18Shotgun\Izh18Shotgun.p3d";
		attachments[]=
		{
			"weaponWrap"
		};
		itemSize[]={9,3};
		weight=3200;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,0.85000002};
		initSpeedMultiplier=1.25;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun.rvmat"
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
								"DZ\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SawedoffIzh18Shotgun: Izh18Shotgun_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_SawedoffIzh18Shotgun0";
		descriptionShort="$STR_cfgWeapons_SawedoffIzh18Shotgun1";
		model="\dz\weapons\shotguns\Izh18Shotgun\Izh18Shotgun_sawedoff.p3d";
		itemSize[]={5,2};
		weight=2600;
		firespreadangle=3;
		recoilModifier[]={2,2,1};
		swayModifier[]={1.5,1.5,0.69999999};
		WeaponLength=0.41;
		ObstructionDistance=0.44499999;
		ShoulderDistance=0.31999999;
		initSpeedMultiplier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun.rvmat"
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
								"DZ\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\shotguns\Izh18Shotgun\data\Izh18Shotgun_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"IZH18sawed_Shot_SoundSet",
				"IZH18sawed_Tail_SoundSet",
				"IZH18_InteriorTail_SoundSet",
				"IZH18_Slapback_SoundSet",
				"IZH18sawed_Tail_2D_SoundSet",
				"IZH18sawed_Shot_Interior_SoundSet"
			};
			reloadTime=1;
			dispersion=0.079999998;
			firespreadangle=1.5;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.15000001,-0.02,0};
				orientation[]={0,0,-13};
			};
			class Melee
			{
				position[]={-0.15000001,0,-0.02};
				orientation[]={0,0,-13};
			};
		};
	};
};
