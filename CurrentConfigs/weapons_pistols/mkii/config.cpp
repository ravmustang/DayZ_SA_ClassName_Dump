class CfgPatches
{
	class DZ_Pistols_mkii
	{
		units[]=
		{
			"mkii"
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
	class MKII_Base: Pistol_Base
	{
		scope=0;
		weight=1300;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,10,280,4,10};
		WeaponLength=0.33000001;
		ShoulderDistance=0.40000001;
		ObstructionDistance=0.54000002;
		barrelArmor=3.2049999;
		initSpeedMultiplier=0.85000002;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"Mag_MKII_10Rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_22"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,0.44999999};
		class NoiseShoot
		{
			strength=5;
			type="sound";
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AmphibianS_silencer_SoundSet",
				"AmphibianS_silencerTail_SoundSet",
				"AmphibianS_silencerInteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AmphibianS_silencerHomeMade_SoundSet",
					"AmphibianS_silencerHomeMadeTail_SoundSet",
					"AmphibianS_InteriorTail_SoundSet"
				}
			};
			envShootingDecrease=0.050000001;
			envShootingDecreaseExt[]={0.050000001,0.050000001};
			reloadTime=0.13;
			recoil="recoil_mkii";
			recoilProne="recoil_mkii_prone";
			dispersion=0.0060000001;
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
		weaponStateAnim="dz\anims\anm\player\reloads\RugerMK2\w_MK2_states.anm";
	};
	class MKII: MKII_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_MKII0";
		descriptionShort="$STR_cfgWeapons_MKII1";
		model="\dz\weapons\pistols\mkii\rugerMKII.p3d";
		attachments[]={};
		itemSize[]={4,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\pistols\mkii\data\ruger_metal_1.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\mkii\data\ruger_metal_1.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\mkii\data\ruger_metal_1_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\mkii\data\ruger_metal_1_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\mkii\data\ruger_metal_1_destruct.rvmat"
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
					overrideParticle="weapon_shot_fnx_02";
					ignoreIfSuppressed=1;
					illuminateWorld=0;
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
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymkii: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistol";
		model="\dz\weapons\pistols\mkii\rugerMKII.p3d";
	};
};
