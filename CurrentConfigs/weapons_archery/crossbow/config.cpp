class CfgPatches
{
	class DZ_Weapons_Archery_Crossbow
	{
		units[]=
		{
			"Crossbow"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Archery"
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
	class Archery_Base;
	class Crossbow_Base: Archery_Base
	{
		scope=0;
		displayName="$STR_cfgWeapons_Crossbow0";
		descriptionShort="$STR_cfgWeapons_Crossbow1";
		model="\dz\weapons\archery\crossbow\crossbow.p3d";
		animName="Crossbow";
		animClass="";
		rotationFlags=34;
		weight=2700;
		repairableWithKits[]={8};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.1,4.5,145,6,25};
		WeaponLength=0.94;
		ObstructionDistance=0.73900002;
		barrelArmor=1.7;
		itemSize[]={9,5};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_HuntingBolt",
			"Ammo_ImprovisedBolt_1",
			"Ammo_ImprovisedBolt_2",
			"Ammo_CupidsBolt"
		};
		magazines[]={};
		DisplayMagazine=0;
		ejectType=4;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.3,1.3,0.80000001};
		attachments[]=
		{
			"weaponOptics"
		};
		distanceZoomMin=30;
		distanceZoomMax=30;
		discreteDistance[]={30};
		discreteDistanceInitIndex=1;
		hiddenSelections[]=
		{
			"camo"
		};
		simpleHiddenSelections[]=
		{
			"bullet",
			"bullet2",
			"bullet3",
			"bullet4",
			"bullet5",
			"hide_barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\archery\crossbow\data\crossbow_leaves_co.paa"
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
								"DZ\weapons\archery\crossbow\data\crossbow.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\archery\crossbow\data\crossbow.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\archery\crossbow\data\crossbow_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\archery\crossbow\data\crossbow_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\archery\crossbow\data\crossbow_destruct.rvmat"
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
				"Crossbow_Shot_SoundSet",
				"Crossbow_InteriorTail_SoundSet"
			};
			reloadTime=5.3333001;
			recoil="recoil_crossbow";
			recoilProne="recoil_crossbow";
			dispersion=0.00075000001;
			magazineSlot="";
		};
		class NoiseShoot
		{
			strength=2;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,75};
			discreteDistanceInitIndex=0;
			discreteDistanceClampOpticsMax=100;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,0.07,-0.050000001};
				orientation[]={0,-80,0};
			};
			class Melee
			{
				position[]={0,0.1,0.029999999};
				orientation[]={0,80,0};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\Crossbow\w_crossbow_states.anm";
		boneRemap[]=
		{
			"bullet",
			"Weapon_Bullet",
			"trigger",
			"Weapon_Trigger",
			"chord",
			"Weapon_Bone_01",
			"shutter",
			"Weapon_Bolt"
		};
	};
	class Crossbow: Crossbow_Base
	{
		scope=2;
	};
	class Crossbow_Autumn: Crossbow_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\archery\crossbow\data\crossbow_autumn_co.paa"
		};
	};
	class Crossbow_Black: Crossbow_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\archery\crossbow\data\crossbow_black_co.paa"
		};
	};
	class Crossbow_Summer: Crossbow_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\archery\crossbow\data\crossbow_summer_co.paa"
		};
	};
	class Crossbow_Wood: Crossbow_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\archery\crossbow\data\crossbow_wood_co.paa"
		};
	};
};
