class CfgPatches
{
	class DZ_Pistols_CZ75
	{
		units[]=
		{
			"CZ75"
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
	class CZ75_Base: Pistol_Base
	{
		scope=0;
		weight=1000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.55000001,10,280,4,10};
		WeaponLength=0.20999999;
		ShoulderDistance=0.40000001;
		ObstructionDistance=0.43099999;
		barrelArmor=2;
		initSpeedMultiplier=1;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"Mag_CZ75_15Rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,0.55000001};
		hiddenSelections[]=
		{
			"camo"
		};
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
				"CZ75_Shot_SoundSet",
				"CZ75_Tail_2D_SoundSet",
				"CZ75_Shot_iterior_SoundSet",
				"CZ75_Tail_SoundSet",
				"CZ75_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"CZ75_silencer_SoundSet",
					"CZ75_silencerTail_SoundSet",
					"CZ75_silencerInteriorTail_SoundSet"
				},
				
				{
					"CZ75_silencerHomeMade_SoundSet",
					"CZ75_silencerHomeMadeTail_SoundSet",
					"CZ75_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.13;
			recoil="recoil_cz75";
			recoilProne="recoil_cz75_prone";
			dispersion=0.0044999998;
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
		weaponStateAnim="dz\anims\anm\player\reloads\CZ75\w_CZ75_states.anm";
	};
	class CZ75: CZ75_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_CZ750";
		descriptionShort="$STR_cfgWeapons_CZ751";
		model="\dz\weapons\pistols\CZ75\cz75.p3d";
		attachments[]=
		{
			"pistolOptics",
			"pistolFlashlight",
			"pistolMuzzle"
		};
		itemSize[]={3,2};
		hiddenSelectionsTextures[]=
		{
			"DZ\weapons\pistols\CZ75\data\cz75_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\pistols\CZ75\data\cz75.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=170;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\pistols\cz75\data\cz75.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\cz75\data\cz75.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\cz75\data\cz75_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\cz75\data\cz75_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\cz75\data\cz75_destruct.rvmat"
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
	class ProxyCZ75: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistol";
		model="\dz\weapons\pistols\CZ75\cz75.p3d";
	};
};
