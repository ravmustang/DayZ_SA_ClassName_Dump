class CfgPatches
{
	class DZ_Weapons_Firearms_B95
	{
		units[]=
		{
			"b95",
			"b95_Black",
			"b95_Green"
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
class Mode_Double;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class B95_Base: Rifle_Base
	{
		scope=0;
		weight=2820;
		itemSize[]={9,3};
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer",
			"Mag_308WinSnaploader_2Rnd"
		};
		magazines[]={};
		DisplayMagazine=0;
		winchesterTypeOpticsMount=1;
		PPDOFProperties[]={1,0.5,50,160,4,10};
		WeaponLength=1.05;
		ObstructionDistance=0.70700002;
		barrelArmor=1.6;
		initSpeedMultiplier=1.05;
		muzzles[]=
		{
			"this",
			"SecondMuzzle"
		};
		ejectType=3;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,0.69999999};
		hiddenSelections[]=
		{
			"camoGround"
		};
		simpleHiddenSelections[]=
		{
			"bullet",
			"bullet2",
			"hide_barrel"
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		modes[]=
		{
			"Single",
			"Double"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"B95_Shot_SoundSet",
				"B95_Shot_iterior_SoundSet",
				"B95_Tail_SoundSet",
				"B95_InteriorTail_SoundSet",
				"B95_Tail_2D_SoundSet"
			};
			reloadTime=0.1;
			dispersion=0.00075000001;
			magazineSlot="magazine";
		};
		class Double: Mode_Double
		{
			soundSetShot[]=
			{
				"B95_Shot_double_SoundSet",
				"B95_Shot_iterior_double_SoundSet",
				"B95_Tail_double_SoundSet",
				"B95_InteriorTail_double_SoundSet",
				"B95_Tail_2D_double_SoundSet"
			};
			reloadTime=0.1;
			dispersion=0.0015;
			magazineSlot="magazine";
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
				"Ammo_308Win",
				"Ammo_308WinTracer",
				"Mag_308WinSnaploader_2Rnd"
			};
			barrelArmor=1.6;
			initSpeedMultiplier=1.05;
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
					"B95_Shot_SoundSet",
					"B95_Shot_iterior_SoundSet",
					"B95_Tail_SoundSet",
					"B95_InteriorTail_SoundSet",
					"B95_Tail_2D_SoundSet"
				};
				reloadTime=0.1;
				dispersion=0.00075000001;
				magazineSlot="magazine";
			};
			class Double: Mode_Double
			{
				soundSetShot[]=
				{
					"B95_Shot_SoundSet",
					"B95_Shot_iterior_SoundSet",
					"B95_Tail_SoundSet",
					"B95_InteriorTail_SoundSet",
					"B95_Tail_2D_SoundSet"
				};
				reloadTime=0.1;
				dispersion=0.0015;
				magazineSlot="magazine";
			};
			class OpticsInfo: OpticsInfoRifle
			{
				memoryPointCamera="eye";
				modelOptics="-";
				distanceZoomMin=50;
				distanceZoomMax=200;
				discreteDistance[]={50,100,200};
				discreteDistanceInitIndex=0;
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=50;
			distanceZoomMax=200;
			discreteDistance[]={50,100,200};
			discreteDistanceInitIndex=0;
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
					overrideParticle="weapon_shot_winch70_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class MuzzleFlash2
				{
					overrideParticle="weapon_shot_winch70_01";
					overridePoint="Usti hlavne_2";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
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
		weaponStateAnim="dz\anims\anm\player\reloads\B95\w_B95_states.anm";
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
			"Weapon_Bone_05"
		};
	};
	class B95: B95_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_B950";
		descriptionShort="$STR_cfgWeapons_B951";
		model="\dz\weapons\firearms\B95\b95.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\B95\data\b95_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\B95\data\b95.rvmat"
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
								"DZ\weapons\firearms\B95\Data\b95.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\B95\Data\b95.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\B95\Data\b95_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\B95\Data\b95_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\B95\Data\b95_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,0.0099999998,-0.029999999};
				orientation[]={0,-30,0};
			};
			class Melee
			{
				position[]={0,0,0};
				orientation[]={0,30,0};
			};
		};
	};
	class B95_Black: B95
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\B95\data\b95_painted.rvmat"
		};
	};
	class B95_Green: B95
	{
		scope=2;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\B95\data\b95_painted.rvmat"
		};
	};
	class SawedoffB95: B95_Base
	{
		scope=2;
		displayName="$STR_SawedoffB950";
		descriptionShort="$STR_SawedoffB951";
		model="\dz\weapons\firearms\B95\b95_sawn.p3d";
		weight=2000;
		itemSize[]={5,2};
		initSpeedMultiplier=0.75;
		WeaponLength=0.66000003;
		ObstructionDistance=0.41800001;
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
								"DZ\weapons\firearms\B95\Data\b95.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\B95\Data\b95.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\B95\Data\b95_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\B95\Data\b95_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\B95\Data\b95_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Single: Single
		{
			soundSetShot[]=
			{
				"B95Sawedoff_Shot_SoundSet",
				"B95_Shot_iterior_SoundSet",
				"B95Sawedoff_Tail_SoundSet",
				"B95_InteriorTail_SoundSet",
				"B95Sawedoff_Tail_2D_SoundSet"
			};
			dispersion=0.0024999999;
		};
		class Double: Double
		{
			soundSetShot[]=
			{
				"B95Sawedoff_Shot_double_SoundSet",
				"B95_Shot_iterior_double_SoundSet",
				"B95_Tail_double_SoundSet",
				"B95_InteriorTail_double_SoundSet",
				"B95_Tail_2D_double_SoundSet"
			};
			dispersion=0.003;
		};
		class SecondMuzzle: SecondMuzzle
		{
			initSpeedMultiplier=0.75;
			class Single: Single
			{
				soundSetShot[]=
				{
					"B95Sawedoff_Shot_SoundSet",
					"B95_Shot_iterior_SoundSet",
					"B95Sawedoff_Tail_SoundSet",
					"B95_InteriorTail_SoundSet",
					"B95Sawedoff_Tail_2D_SoundSet"
				};
				dispersion=0.0024999999;
			};
			class Double: Double
			{
				soundSetShot[]=
				{
					"B95Sawedoff_Shot_SoundSet",
					"B95_Shot_iterior_SoundSet",
					"B95Sawedoff_Tail_SoundSet",
					"B95_InteriorTail_SoundSet",
					"B95Sawedoff_Tail_2D_SoundSet"
				};
				dispersion=0.003;
			};
		};
		attachments[]=
		{
			"weaponOpticsHunting"
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.050000001,-0.0099999998,0.0099999998};
				orientation[]={0,0,-10};
			};
			class Melee
			{
				position[]={-0.050000001,-0.0099999998,-0.029999999};
				orientation[]={0,0,-10};
			};
		};
	};
};
