class CfgPatches
{
	class DZ_Pistols_p1
	{
		units[]=
		{
			"P1"
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
	class P1_Base: Pistol_Base
	{
		scope=0;
		weight=960;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.55000001,10,240,4,10};
		WeaponLength=0.2;
		ShoulderDistance=0.40000001;
		ObstructionDistance=0.43099999;
		barrelArmor=2;
		initSpeedMultiplier=0.89999998;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"Mag_P1_8Rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,1.1,0.44999999};
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
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"WaltherP1_Shot_SoundSet",
				"WaltherP1_Shot_iterior_SoundSet",
				"WaltherP1_Tail_SoundSet",
				"WaltherP1_InteriorTail_SoundSet",
				"WaltherP1_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"WaltherP1_silencer_SoundSet",
					"WaltherP1_silencerTail_SoundSet",
					"WaltherP1_silencerInteriorTail_SoundSet"
				},
				
				{
					"WaltherP1_silencerHomeMade_SoundSet",
					"WaltherP1_silencerHomeMadeTail_SoundSet",
					"WaltherP1_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.13;
			recoil="recoil_p1";
			recoilProne="recoil_p1_prone";
			dispersion=0.011;
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
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\P1\w_states_p1.anm";
	};
	class P1: P1_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_P10";
		descriptionShort="$STR_cfgWeapons_P11";
		model="\dz\weapons\pistols\p1\p1.p3d";
		hiddenSelectionsTextures[]=
		{
			"DZ\weapons\pistols\p1\data\p38_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\pistols\p1\data\p38.rvmat"
		};
		attachments[]=
		{
			"suppressorImpro"
		};
		itemSize[]={3,2};
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
								"DZ\weapons\pistols\p1\data\p38.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\p1\data\p38.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\p1\data\p38_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\p1\data\p38_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\p1\data\p38_destruct.rvmat"
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
	class ProxyP1: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistol";
		model="\dz\weapons\pistols\p1\p1.p3d";
	};
};
