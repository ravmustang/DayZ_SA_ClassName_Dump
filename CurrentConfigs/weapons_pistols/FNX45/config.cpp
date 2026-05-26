class CfgPatches
{
	class DZ_Pistols_FNX45
	{
		units[]=
		{
			"FNX45"
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
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class FNX45_Base: Pistol_Base
	{
		scope=0;
		weight=950;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,10,250,4,10};
		ironsightsExcludingOptics[]=
		{
			"FNP45_MRDSOptic"
		};
		WeaponLength=0.22;
		ShoulderDistance=0.40000001;
		ObstructionDistance=0.442;
		barrelArmor=1.7;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"Mag_FNX45_15Rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_45ACP"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.3,1.3,0.5};
		class NoiseShoot
		{
			strength=40;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"FNX45_Shot_SoundSet",
				"FNX45_Tail_2D_SoundSet",
				"FNX45_Shot_iterior_SoundSet",
				"FNX45_Tail_SoundSet",
				"FNX45_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNX45_silencer_SoundSet",
					"FNX45_silencerTail_SoundSet",
					"FNX45_silencerInteriorTail_SoundSet"
				},
				
				{
					"FNX45_silencerHomeMade_SoundSet",
					"FNX45_silencerHomeMadeTail_SoundSet",
					"FNX45_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.13;
			recoil="recoil_fnx";
			recoilProne="recoil_fnx_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		weaponStateAnim="dz\anims\anm\player\reloads\FNP45\w_fnp45_states.anm";
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
			"Weapon_Bone_01"
		};
	};
	class FNX45: FNX45_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_FNX450";
		descriptionShort="$STR_cfgWeapons_FNX451";
		model="\dz\weapons\pistols\fnx45\fnp45.p3d";
		attachments[]=
		{
			"pistolOptics",
			"pistolFlashlight",
			"pistolMuzzle"
		};
		itemSize[]={3,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\pistols\fnx45\data\herstal45.rvmat",
								"DZ\weapons\pistols\fnx45\data\herstal45_bolt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\fnx45\data\herstal45.rvmat",
								"DZ\weapons\pistols\fnx45\data\herstal45_bolt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\fnx45\data\herstal45_damage.rvmat",
								"DZ\weapons\pistols\fnx45\data\herstal45_bolt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\fnx45\data\herstal45_damage.rvmat",
								"DZ\weapons\pistols\fnx45\data\herstal45_bolt_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\fnx45\data\herstal45_destruct.rvmat",
								"DZ\weapons\pistols\fnx45\data\herstal45_bolt_destruct.rvmat"
							}
						}
					};
				};
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
	};
	class FNX45_arrow: FNX45
	{
		scope=2;
		displayName="$STR_cfgWeapons_FNX450";
		descriptionShort="$STR_cfgWeapons_FNX451";
		model="\dz\weapons\pistols\fnx45\fnp45.p3d";
		attachments[]=
		{
			"pistolMuzzle",
			"pistolOptics",
			"pistolFlashlight"
		};
		itemSize[]={3,2};
		chamberSize=1;
		chamberedRound="";
		dispersion=0.1;
		magazines[]=
		{
			"Mag_FNX45_15Rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_HuntingArrow",
			"Ammo_ImprovisedArrow"
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed=1;
					overrideParticle="weapon_shot_fnx_01";
				};
				class ChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFNP45: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistol";
		model="\dz\weapons\pistols\fnx45\fnp45.p3d";
	};
};
