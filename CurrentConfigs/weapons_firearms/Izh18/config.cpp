class CfgPatches
{
	class DZ_Weapons_Firearms_IZH18
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
			"DZ_Weapons_Firearms"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Izh18_Base: Rifle_Base
	{
		scope=0;
		weight=3200;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,10,170,4,10};
		ironsightsExcludingOptics[]=
		{
			"HuntingOptic"
		};
		DisplayMagazine=0;
		WeaponLength=1;
		ObstructionDistance=0.69999999;
		barrelArmor=1.875;
		initSpeedMultiplier=1.05;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		magazines[]={};
		ejectType=3;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.25,2.25,0.85000002};
		hiddenSelections[]=
		{
			"camo"
		};
		class NoiseShoot
		{
			strength=100;
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
				"IZH18_Rifle_Shot_SoundSet",
				"Mosin9130_Tail_SoundSet",
				"Mosin9130_InteriorTail_SoundSet",
				"Mosin9130_Tail_2D_SoundSet",
				"IZH18_Rifle_Shot_Interior_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"BK18_silencerHomeMade_SoundSet",
					"BK18_silencerHomeMadeTail_SoundSet",
					"BK18_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_izh18";
			recoilProne="recoil_izh18_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=200;
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					overridePoint="Usti hlavne";
				};
				class ChamberFlash
				{
					overridePoint="dust_point";
					overrideParticle="weapon_dust_izh18_01";
				};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\IZH18\w_izh18_states.anm";
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
	class Izh18: Izh18_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Izh180";
		descriptionShort="$STR_cfgWeapons_Izh181";
		model="\dz\weapons\firearms\Izh18\Izh18.p3d";
		attachments[]=
		{
			"weaponWrap",
			"suppressorImpro"
		};
		itemSize[]={9,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\Izh18\data\Izh18_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\Izh18\data\Izh18.rvmat"
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_izh18_01";
					illuminateWorld=1;
					ignoreIfSuppressed=1;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.029999999,-0.02,0.015};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.029999999,0,-0.039999999};
				orientation[]={0,0,0};
			};
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
								"DZ\weapons\firearms\Izh18\data\Izh18.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\Izh18\data\Izh18.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\Izh18\data\Izh18_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\Izh18\data\Izh18_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\Izh18\data\Izh18_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SawedoffIzh18: Izh18
	{
		scope=2;
		displayName="$STR_cfgWeapons_SawedoffIzh180";
		descriptionShort="$STR_cfgWeapons_SawedoffIzh181";
		model="\dz\weapons\firearms\Izh18\Izh18_sawedoff.p3d";
		itemSize[]={5,2};
		weight=2800;
		attachments[]={};
		recoilModifier[]={1,1,1};
		swayModifier[]={1.5,1.5,0.69999999};
		firespreadangle=3;
		WeaponLength=0.44999999;
		ObstructionDistance=0.44499999;
		ShoulderDistance=0.30000001;
		initSpeedMultiplier=0.75;
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"IZH18sawed_Rifle_Shot_SoundSet",
				"IZH18sawed_Rifle_Tail_Sawedoff_SoundSet",
				"IZH18sawed_Rifle_InteriorTail_SoundSet",
				"Mosin9130_Tail_2D_Sawedoff_SoundSet",
				"IZH18sawed_Rifle_Shot_Interior_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"BK18_silencerHomeMade_SoundSet",
					"BK18_silencerHomeMadeTail_SoundSet",
					"BK18_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			dispersion=0.045000002;
			recoil="recoil_izh18sawedoff";
			recoilProne="recoil_izh18sawedoff";
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
