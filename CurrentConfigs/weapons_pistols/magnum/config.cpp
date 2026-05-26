class CfgPatches
{
	class DZ_Pistols_Magnum
	{
		units[]=
		{
			"magnum"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class Magnum_Base: Pistol_Base
	{
		scope=0;
		weight=1400;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.89999998,10,250,4,10};
		WeaponLength=0.28;
		ShoulderDistance=0.44;
		ObstructionDistance=0.528;
		barrelArmor=1.758;
		initSpeedMultiplier=0.89999998;
		DisplayMagazine=0;
		attachments[]=
		{
			"RevolverCylinder",
			"RevolverEjector"
		};
		chamberSize=1;
		chamberedRound="";
		magazines[]={};
		chamberableFrom[]=
		{
			"Ammo_357",
			"Mag_357Speedloader_6Rnd"
		};
		ejectType=8;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.15,1.15,0.60000002};
		class NoiseShoot
		{
			strength=80;
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
				"Magnum_Shot_SoundSet",
				"Magnum_Tail_2D_SoundSet",
				"Magnum_Shot_iterior_SoundSet",
				"Magnum_Tail_SoundSet",
				"Magnum_InteriorTail_SoundSet"
			};
			reloadTime=0.13;
			dispersion=0.0044999998;
			magazineSlot="magazine";
		};
		class OpticsInfoMagnumBase: OpticsInfoPistol
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class OpticsInfo: OpticsInfoMagnumBase
		{
		};
		muzzles[]=
		{
			"this",
			"SecondMuzzle",
			"ThirdMuzzle",
			"FourthMuzzle",
			"FifthMuzzle",
			"SixthMuzzle"
		};
		class SecondMuzzle: Muzzle_Base
		{
			chamberSize=1;
			muzzlePos="usti hlavne";
			muzzleEnd="konec hlavne";
			cartridgePos="nabojnicestart_2";
			cartridgeVel="nabojniceend_2";
			modes[]=
			{
				"Single"
			};
			magazines[]={};
			chamberableFrom[]=
			{
				"Ammo_357"
			};
			barrelArmor=1.758;
			initSpeedMultiplier=0.89999998;
			class Single: Mode_Single
			{
				soundSetShot[]=
				{
					"Magnum_Shot_SoundSet",
					"Magnum_Tail_2D_SoundSet",
					"Magnum_Shot_iterior_SoundSet",
					"Magnum_Tail_SoundSet",
					"Magnum_InteriorTail_SoundSet"
				};
				reloadTime=0.079999998;
				dispersion=0.0044999998;
				magazineSlot="magazine";
			};
			class OpticsInfo: OpticsInfoMagnumBase
			{
			};
		};
		class ThirdMuzzle: SecondMuzzle
		{
			cartridgePos="nabojnicestart_3";
			cartridgeVel="nabojniceend_3";
		};
		class FourthMuzzle: SecondMuzzle
		{
			cartridgePos="nabojnicestart_4";
			cartridgeVel="nabojniceend_4";
		};
		class FifthMuzzle: SecondMuzzle
		{
			cartridgePos="nabojnicestart_5";
			cartridgeVel="nabojniceend_5";
		};
		class SixthMuzzle: SecondMuzzle
		{
			cartridgePos="nabojnicestart_6";
			cartridgeVel="nabojniceend_6";
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
					overrideParticle="weapon_shot_fnx_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=8;
				shotsToStartOverheating=8;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,1};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,1};
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
		weaponStateAnim="dz\anims\anm\player\reloads\Magnum\w_magnum_states.anm";
		boneRemap[]=
		{
			"bolt",
			"Weapon_Bolt",
			"magazine",
			"Weapon_Magazine",
			"bullet",
			"Weapon_Bullet",
			"trigger",
			"Weapon_Trigger",
			"hammer",
			"Weapon_Bone_01",
			"cylinder_arm",
			"Weapon_Bone_03",
			"ejector",
			"Weapon_Bone_04"
		};
	};
	class Magnum: Magnum_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Magnum0";
		descriptionShort="$STR_cfgWeapons_Magnum1";
		model="\dz\weapons\pistols\magnum\magnum.p3d";
		itemSize[]={4,2};
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
								"DZ\weapons\pistols\magnum\data\magnum.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SawedoffMagnum: Magnum_Base
	{
		scope=2;
		displayName="$STR_SawedoffMagnum0";
		descriptionShort="$STR_SawedoffMagnum1";
		model="\dz\weapons\pistols\magnum\magnum_sawn.p3d";
		weight=1000;
		initSpeedMultiplier=0.80000001;
		itemSize[]={2,2};
		WeaponLength=0.20999999;
		ShoulderDistance=0.44999999;
		recoilModifier[]={1.5,1.5,1};
		class Single: Single
		{
			soundSetShot[]=
			{
				"Magnum_sawedoff_Shot_SoundSet",
				"Magnum_Tail_2D_SoundSet",
				"Magnum_sawedoff_Shot_iterior_SoundSet",
				"Magnum_sawedoff_Tail_SoundSet",
				"Magnum_sawedoff_InteriorTail_SoundSet"
			};
			initSpeedMultiplier=0.80000001;
			dispersion=0.0089999996;
		};
		class SecondMuzzle: SecondMuzzle
		{
			initSpeedMultiplier=0.80000001;
			class Single: Single
			{
				soundSetShot[]=
				{
					"Magnum_sawedoff_Shot_SoundSet",
					"Magnum_Tail_2D_SoundSet",
					"Magnum_sawedoff_Shot_iterior_SoundSet",
					"Magnum_sawedoff_Tail_SoundSet",
					"Magnum_sawedoff_InteriorTail_SoundSet"
				};
				dispersion=0.0089999996;
			};
		};
		class ThirdMuzzle: SecondMuzzle
		{
			initSpeedMultiplier=0.80000001;
		};
		class FourthMuzzle: SecondMuzzle
		{
			initSpeedMultiplier=0.80000001;
		};
		class FifthMuzzle: SecondMuzzle
		{
			initSpeedMultiplier=0.80000001;
		};
		class SixthMuzzle: SecondMuzzle
		{
			initSpeedMultiplier=0.80000001;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=180;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_destruct.rvmat"
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
	class Magnum_Cylinder: Inventory_Base
	{
		scope=2;
		model="\dz\weapons\pistols\magnum\proxy\magnum_cylinder.p3d";
		weight=1;
		inventorySlot[]=
		{
			"RevolverCylinder"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class Rotate_Cylinder
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Rotate_Cylinder_Back
			{
				source="user";
				animPeriod=9.9999997e-05;
				initPhase=0;
			};
			class bullet
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class bullet_2
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class bullet_3
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class bullet_4
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class bullet_5
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class bullet_6
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class bullet_nose
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class bullet_nose_2
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class bullet_nose_3
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class bullet_nose_4
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class bullet_nose_5
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class bullet_nose_6
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
		};
	};
	class Magnum_Ejector: Inventory_Base
	{
		scope=2;
		model="\dz\weapons\pistols\magnum\proxy\magnum_ejector.p3d";
		weight=1;
		inventorySlot[]=
		{
			"RevolverEjector"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\magnum\data\magnum_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class Rotate_Ejector
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymagnum: ProxyAttachment
	{
		scope=2;
	};
	class Proxymagnum_cylinder: ProxyAttachment
	{
		scope=2;
		inventorySlot="RevolverCylinder";
		model="\dz\weapons\pistols\magnum\proxy\magnum_cylinder.p3d";
	};
	class Proxymagnum_ejector: ProxyAttachment
	{
		scope=2;
		inventorySlot="RevolverEjector";
		model="\dz\weapons\pistols\magnum\proxy\magnum_ejector.p3d";
	};
};
