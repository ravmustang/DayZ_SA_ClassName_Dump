class CfgPatches
{
	class DZ_Pistols_Encore
	{
		units[]=
		{
			"LongHorn"
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
class OpticsInfoRifle;
class cfgWeapons
{
	class Pistol_Base;
	class LongHorn_Base: Pistol_Base
	{
		scope=0;
		weight=2050;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		WeaponLength=0.44;
		ShoulderDistance=0.41;
		ObstructionDistance=0.66900003;
		initSpeedMultiplier=0.80000001;
		barrelArmor=2;
		PPDOFProperties[]={1,0.89999998,10,150,5,10};
		distanceZoomMin=100;
		distanceZoomMax=100;
		hiddenSelections[]=
		{
			"camo"
		};
		chamberSize=1;
		chamberedRound="";
		magazines[]={};
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		ejectType=2;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.45,1.45,0.60000002};
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
				"longhorn_Shot_SoundSet",
				"longhorn_Tail_2D_SoundSet",
				"longhorn_Shot_iterior_SoundSet",
				"longhorn_Tail_SoundSet",
				"longhorn_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"longhorn_silencerHomeMade_SoundSet",
					"longhorn_silencerHomeMadeTail_SoundSet",
					"longhorn_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_longhorn";
			recoilProne="recoil_longhorn_prone";
			dispersion=0.003;
			magazineSlot="magazine";
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
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\LongHorn\w_longhorn_states.anm";
		boneRemap[]=
		{
			"latch",
			"Weapon_Bone_01",
			"hammer",
			"Weapon_Bone_02",
			"reload",
			"Weapon_Bolt",
			"trigger",
			"Weapon_Trigger",
			"bullet",
			"Weapon_Bullet"
		};
	};
	class LongHorn: LongHorn_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_LongHorn0";
		descriptionShort="$STR_cfgWeapons_LongHorn1";
		model="\dz\weapons\pistols\LongHorn\LongHorn.p3d";
		hiddenSelectionsTextures[]=
		{
			"DZ\weapons\pistols\LongHorn\data\longhorn_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\pistols\LongHorn\data\longhorn.rvmat"
		};
		attachments[]=
		{
			"weaponOpticsCrossbow",
			"suppressorImpro"
		};
		DisplayMagazine=0;
		itemSize[]={5,2};
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
								"DZ\weapons\pistols\LongHorn\data\LongHorn.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\LongHorn\data\LongHorn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\LongHorn\data\LongHorn_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\LongHorn\data\LongHorn_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\LongHorn\data\LongHorn_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyLongHorn: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistol";
		model="\dz\weapons\pistols\LongHorn\LongHorn.p3d";
	};
};
