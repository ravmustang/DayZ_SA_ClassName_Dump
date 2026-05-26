class CfgPatches
{
	class DZ_Pistols_Derringer
	{
		units[]=
		{
			"Derringer_Black",
			"Derringer_Grey",
			"Derringer_Pink"
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
class Mode_Single;
class Mode_Double;
class Muzzle_Base;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class Derringer_Base: Pistol_Base
	{
		scope=0;
		displayName="$STR_cfgweapons_derringer_base0";
		descriptionShort="$STR_cfgWeapons_Derringer_Base1";
		model="\dz\weapons\pistols\derringer\derringer.p3d";
		weight=350;
		itemSize[]={2,1};
		repairableWithKits[]={1};
		repairCosts[]={25};
		attachments[]={};
		modelOptics="-";
		PPDOFProperties[]={1,1,10,200,10,1};
		WeaponLength=0.15000001;
		ShoulderDistance=0.41999999;
		ObstructionDistance=0.39500001;
		barrelArmor=1.3329999;
		initSpeedMultiplier=0.80000001;
		muzzles[]=
		{
			"this",
			"SecondMuzzle"
		};
		chamberSize=1;
		chamberedRound="";
		magazines[]={};
		chamberableFrom[]=
		{
			"Ammo_357"
		};
		DisplayMagazine=0;
		ejectType=2;
		recoilModifier[]={1,1,1};
		swayModifier[]={0.64999998,0.64999998,0.40000001};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\pistols\derringer\data\derringer_1.rvmat"
		};
		class NoiseShoot
		{
			strength=80;
			type="shot";
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
								"DZ\weapons\pistols\derringer\data\derringer_1.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\derringer\data\derringer_1.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\derringer\data\derringer_1_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\derringer\data\derringer_1_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\derringer\data\derringer_1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"derringer_Shot_SoundSet",
				"derringer_Tail_2D_SoundSet",
				"derringer_Shot_iterior_SoundSet",
				"derringer_Tail_SoundSet",
				"derringer_InteriorTail_SoundSet"
			};
			recoil="recoil_derringer";
			recoilProne="recoil_derringer_prone";
			dispersion=0.0060000001;
			magazineSlot="magazine";
		};
		class SecondMuzzle: Muzzle_Base
		{
			chamberSize=1;
			muzzlePos="usti hlavne";
			muzzleEnd="konec hlavne";
			modes[]=
			{
				"Single"
			};
			magazines[]={};
			chamberableFrom[]=
			{
				"Ammo_357"
			};
			barrelArmor=1.3329999;
			initSpeedMultiplier=0.80000001;
			class Single: Mode_Single
			{
				soundSetShot[]=
				{
					"derringer_Shot_SoundSet",
					"derringer_Tail_2D_SoundSet",
					"derringer_Shot_iterior_SoundSet",
					"derringer_Tail_SoundSet",
					"derringer_InteriorTail_SoundSet"
				};
				reloadTime=1;
				dispersion=0.0060000001;
				magazineSlot="magazine";
			};
			class OpticsInfo: OpticsInfoPistol
			{
				memoryPointCamera="eye";
				modelOptics="-";
				distanceZoomMin=25;
				distanceZoomMax=25;
				discreteDistance[]={25};
				discreteDistanceInitIndex=0;
			};
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
			discreteDistance[]={25};
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
					overrideParticle="weapon_shot_cz75_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
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
		weaponStateAnim="dz\anims\anm\player\reloads\Derringer\w_derringer_states.anm";
		boneRemap[]=
		{
			"release",
			"Weapon_Bone_02",
			"barrel",
			"Weapon_Bone_01",
			"trigger",
			"Weapon_Trigger",
			"hammer",
			"Weapon_Bone_03",
			"bullet",
			"Weapon_Bullet",
			"bullet2",
			"Weapon_Bone_04",
			"snaploader",
			"Weapon_Bone_05"
		};
	};
	class Derringer_Black: Derringer_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\pistols\derringer\data\derringer_black_co.paa"
		};
	};
	class Derringer_Pink: Derringer_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\pistols\derringer\data\derringer_pink_co.paa"
		};
	};
	class Derringer_Grey: Derringer_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\pistols\derringer\data\derringer_grey_co.paa"
		};
	};
};
