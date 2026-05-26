class CfgPatches
{
	class DZ_Weapons_Shotguns_Izh43
	{
		units[]=
		{
			"ShotgunIzh43",
			"ShotgunIzh43_Sawedoff"
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
class Mode_Double;
class Muzzle_Base;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Shotgun_Base;
	class Izh43Shotgun_Base: Shotgun_Base
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
		PPDOFProperties[]={1,0.5,10,175,4,10};
		WeaponLength=1.1;
		ObstructionDistance=0.79000002;
		barrelArmor=1.3329999;
		initSpeedMultiplier=1.25;
		ejectType=3;
		muzzles[]=
		{
			"this",
			"SecondMuzzle"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		simpleHiddenSelections[]=
		{
			"bullet",
			"bullet2"
		};
		modes[]=
		{
			"Single",
			"Double"
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
				"IZH43_Shot_SoundSet",
				"IZH43_Tail_SoundSet",
				"IZH43_InteriorTail_SoundSet",
				"IZH43_Slapback_SoundSet",
				"IZH43_Tail_2D_SoundSet",
				"IZH43_Shot_Interior_SoundSet"
			};
			reloadTime=1;
			dispersion=0.0099999998;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class Double: Mode_Double
		{
			soundSetShot[]=
			{
				"IZH43Double_Shot_SoundSet",
				"IZH43dDouble_Tail_SoundSet",
				"IZH43Double_InteriorTail_SoundSet",
				"IZH43Double_Slapback_SoundSet",
				"IZH43Double_Tail_2D_SoundSet",
				"IZH43double_Shot_Interior_SoundSet"
			};
			reloadTime=0.1;
			dispersion=0.02;
			magazineSlot="magazine";
			firespreadangle=1.5;
		};
		class OpticsInfo: OpticsInfoShotgun
		{
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.029999999,0,0.0099999998};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.029999999,0,-0.029999999};
				orientation[]={0,0,0};
			};
		};
		class SecondMuzzle: Muzzle_Base
		{
			chamberSize=1;
			muzzlePos="usti hlavne_2";
			muzzleEnd="konec hlavne_2";
			cartridgePos="nabojnicestart_2";
			cartridgeVel="nabojniceend_2";
			magazines[]={};
			chamberableFrom[]=
			{
				"Ammo_12gaPellets",
				"Ammo_12gaSlug",
				"Ammo_12gaRubberSlug",
				"Mag_12gaSnaploader_2Rnd"
			};
			barrelArmor=1.3329999;
			initSpeedMultiplier=1.25;
			irDistance=0;
			irLaserPos="laser pos";
			irLaserEnd="laser dir";
			modes[]=
			{
				"Single",
				"Double"
			};
			class Single: Mode_Single
			{
				soundSetShot[]=
				{
					"IZH43_Shot_SoundSet",
					"IZH43_Tail_SoundSet",
					"IZH43_InteriorTail_SoundSet",
					"IZH43_Slapback_SoundSet",
					"IZH43_Tail_2D_SoundSet",
					"IZH43_Shot_Interior_SoundSet"
				};
				reloadTime=1;
				dispersion=0.0099999998;
				firespreadangle=1.5;
				magazineSlot="magazine";
			};
			class Double: Mode_Double
			{
				soundSetShot[]=
				{
					"IZH43Double_Shot_SoundSet",
					"IZH43dDouble_Tail_SoundSet",
					"IZH43Double_InteriorTail_SoundSet",
					"IZH43Double_Slapback_SoundSet",
					"IZH43Double_Tail_2D_SoundSet",
					"IZH43double_Shot_Interior_SoundSet"
				};
				reloadTime=0.1;
				dispersion=0.02;
				magazineSlot="magazine";
				firespreadangle=1.5;
			};
			class OpticsInfo: OpticsInfoShotgun
			{
			};
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
				class SmokeCloud_2: SmokeCloud
				{
					overridePoint="Usti hlavne_2";
					muzzleIndex=1;
				};
				class MuzzleFlash_2: MuzzleFlash
				{
					overridePoint="Usti hlavne_2";
					muzzleIndex=1;
				};
				class BadlyDamagedChamberSmoke_2: BadlyDamagedChamberSmoke
				{
					overridePoint="Nabojnicestart_2";
					muzzleIndex=1;
				};
				class BadlyDamagedChamberSmokeRaise_2: BadlyDamagedChamberSmokeRaise
				{
					overridePoint="Nabojnicestart_2";
					muzzleIndex=1;
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
		weaponStateAnim="dz\anims\anm\player\reloads\IZH43\w_IZH43_states.anm";
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
			"Weapon_Bullet",
			"bullet2",
			"Weapon_Bone_04",
			"snaploader",
			"Weapon_Bone_05",
			"trigger2",
			"Weapon_Bone_06"
		};
	};
	class Izh43Shotgun: Izh43Shotgun_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Izh43Shotgun0";
		descriptionShort="$STR_cfgWeapons_Izh43Shotgun1";
		model="\dz\weapons\shotguns\Izh43\izh43.p3d";
		attachments[]=
		{
			"weaponWrap"
		};
		itemSize[]={9,3};
		weight=3100;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,0.85000002};
		initSpeedMultiplier=1.25;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\shotguns\Izh43\data\izh43_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\shotguns\Izh43\data\izh43.rvmat"
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
								"DZ\weapons\shotguns\Izh43\data\izh43.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SawedoffIzh43Shotgun: Izh43Shotgun_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_SawedoffIzh43Shotgun0";
		descriptionShort="$STR_cfgWeapons_SawedoffIzh43Shotgun1";
		model="\dz\weapons\shotguns\Izh43\izh43_sawedoff.p3d";
		itemSize[]={5,2};
		weight=2600;
		firespreadangle=3;
		recoilModifier[]={2,2,1};
		swayModifier[]={1.5,1.5,0.69999999};
		WeaponLength=0.41999999;
		ObstructionDistance=0.44499999;
		ShoulderDistance=0.31999999;
		initSpeedMultiplier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\shotguns\Izh43\data\izh43_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\shotguns\Izh43\data\izh43.rvmat"
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
								"DZ\weapons\shotguns\Izh43\data\izh43.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\shotguns\Izh43\data\izh43_destruct.rvmat"
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
				"IZH43sawed_Shot_SoundSet",
				"IZH43sawed_Tail_SoundSet",
				"IZH43_InteriorTail_SoundSet",
				"IZH43_Slapback_SoundSet",
				"IZH43sawed_Tail_2D_SoundSet",
				"IZH43sawed_Shot_Interior_SoundSet"
			};
			reloadTime=1;
			dispersion=0.079999998;
			firespreadangle=1.5;
		};
		class Double: Mode_Double
		{
			soundSetShot[]=
			{
				"IZH43sawedDouble_Shot_SoundSet",
				"IZH43sawedDouble_Tail_SoundSet",
				"IZH43Double_InteriorTail_SoundSet",
				"IZH43Double_Slapback_SoundSet",
				"IZH43sawed3Double_Tail_2D_SoundSet",
				"IZH43sawedDouble_Shot_Interior_SoundSet"
			};
			reloadTime=0.1;
			dispersion=0.090000004;
			firespreadangle=1.5;
		};
		class SecondMuzzle: SecondMuzzle
		{
			chamberSize=1;
			muzzlePos="usti hlavne_2";
			muzzleEnd="konec hlavne_2";
			cartridgePos="nabojnicestart_2";
			cartridgeVel="nabojniceend_2";
			magazines[]={};
			chamberableFrom[]=
			{
				"Ammo_12gaPellets",
				"Ammo_12gaSlug",
				"Ammo_12gaRubberSlug",
				"Mag_12gaSnaploader_2Rnd"
			};
			barrelArmor=1.3329999;
			initSpeedMultiplier=0.89999998;
			irDistance=0;
			irLaserPos="laser pos";
			irLaserEnd="laser dir";
			modes[]=
			{
				"Single",
				"Double"
			};
			class Single: Mode_Single
			{
				soundSetShot[]=
				{
					"IZH43sawed_Shot_SoundSet",
					"IZH43sawed_Tail_SoundSet",
					"IZH43_InteriorTail_SoundSet",
					"IZH43_Slapback_SoundSet",
					"IZH43sawed_Tail_2D_SoundSet",
					"IZH43sawed_Shot_Interior_SoundSet"
				};
				reloadTime=1;
				dispersion=0.079999998;
				firespreadangle=1.5;
				magazineSlot="magazine";
			};
			class Double: Mode_Double
			{
				soundSetShot[]=
				{
					"IZH43Double_Shot_SoundSet",
					"IZH43dDouble_Tail_SoundSet",
					"IZH43Double_InteriorTail_SoundSet",
					"IZH43Double_Slapback_SoundSet",
					"IZH43Double_Tail_2D_SoundSet",
					"IZH43double_Shot_Interior_SoundSet"
				};
				reloadTime=0.1;
				dispersion=0.090000004;
				magazineSlot="magazine";
				firespreadangle=1.5;
			};
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
