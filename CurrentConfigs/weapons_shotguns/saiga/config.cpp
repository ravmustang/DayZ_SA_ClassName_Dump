class CfgPatches
{
	class DZ_Weapons_Firearms_SaigaK
	{
		units[]=
		{
			"Saiga12K"
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
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Rifle_Base;
	class Saiga_Base: Rifle_Base
	{
		scope=0;
		weight=3600;
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
			"Ammo_12gaBeanbag"
		};
		magazines[]=
		{
			"Mag_Saiga_5Rnd",
			"Mag_Saiga_8Rnd",
			"Mag_Saiga_Drum20Rnd"
		};
		magazineSwitchTime=0.2;
		PPDOFProperties[]={1,0.5,10,140,4,10};
		WeaponLength=0.93000001;
		ObstructionDistance=0.65100002;
		barrelArmor=1.6799999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.5,2.5,0.89999998};
		hiddenSelections[]=
		{
			"camo"
		};
		modes[]=
		{
			"SemiAuto",
			"FullAuto"
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Saiga12_Shot_SoundSet",
				"Saiga12_Tail_SoundSet",
				"Saiga12_InteriorTail_SoundSet",
				"Saiga_Slapback_SoundSet",
				"Saiga_Tail_2D_SoundSet",
				"Saiga12_Shot_Interior_SoundSet"
			};
			reloadTime=0.34999999;
			recoil="recoil_Saiga12";
			recoilProne="recoil_Saiga12_prone";
			dispersion=0.0099999998;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"Saiga12_Shot_1st_SoundSet",
				"Saiga12_Shot_Interior_1st_SoundSet"
			};
			soundSetShot[]=
			{
				"Saiga12_Shot_SoundSet",
				"Saiga12_Tail_SoundSet",
				"Saiga12_InteriorTail_SoundSet",
				"Saiga_Slapback_SoundSet",
				"Saiga_Tail_2D_SoundSet",
				"Saiga12_Shot_Interior_SoundSet"
			};
			reloadTime=0.18000001;
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.02,0.029999999,0.1};
				orientation[]={0,60,0};
			};
			class Melee
			{
				position[]={-0.02,0.02,-0.12};
				orientation[]={0,-60,0};
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
					overrideParticle="weapon_shot_mp133_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
					onlyWithinHealthLabel[]={3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
					onlyWithinHealthLabel[]={3,4};
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
					onlyWithinOverheatLimits[]={0,0.2};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,1};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0.2,1};
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
		weaponStateAnim="dz\anims\anm\player\reloads\Saiga\w_Saiga_states.anm";
	};
	class Saiga: Saiga_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Saiga12KShotgun0";
		descriptionShort="$STR_cfgWeapons_Saiga12KShotgun1";
		model="\dz\weapons\shotguns\saiga\saiga.p3d";
		itemSize[]={7,3};
		attachments[]=
		{
			"weaponButtstockSaiga",
			"weaponWrap",
			"weaponOpticsAK"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\weapons\shotguns\saiga\data\saiga_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\shotguns\saiga\data\saiga.rvmat"
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
								"DZ\weapons\shotguns\saiga\data\saiga.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\shotguns\saiga\data\saiga.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\shotguns\saiga\data\saiga_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\shotguns\saiga\data\saiga_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\shotguns\saiga\data\saiga_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
