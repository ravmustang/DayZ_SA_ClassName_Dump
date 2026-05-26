class CfgPatches
{
	class DZ_Weapons_Firearms_PP19
	{
		units[]=
		{
			"PP19"
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
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class PP19_Base: Rifle_Base
	{
		scope=0;
		displayName="$STR_cfgWeapons_PP19_0";
		descriptionShort="$STR_cfgWeapons_PP19_1";
		model="\dz\weapons\firearms\PP19\PP19.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsAK",
			"pistolMuzzle",
			"weaponButtstockPP19"
		};
		weight=2900;
		itemSize[]={6,3};
		repairableWithKits[]={1};
		repairCosts[]={25};
		WeaponLength=0.63999999;
		ObstructionDistance=0.43099999;
		barrelArmor=1.35;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_380"
		};
		magazines[]=
		{
			"Mag_PP19_64Rnd"
		};
		magazineSwitchTime=0.30000001;
		initSpeedMultiplier=1.25;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,0.80000001};
		PPDOFProperties[]={1,0.5,10,130,4,10};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\PP19\data\PP19_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\PP19\data\PP_19.rvmat"
		};
		class NoiseShoot
		{
			strength=60;
			type="shot";
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
								"DZ\weapons\firearms\PP19\Data\PP_19.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\PP19\Data\PP_19.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\PP19\Data\PP_19_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\PP19\Data\PP_19_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\PP19\Data\PP_19_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		modes[]=
		{
			"SemiAuto",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"PP19_Shot_1st_SoundSet",
				"PP19_Shot_1st_iterior_SoundSet",
				"PP19_Tail_SoundSet",
				"PP19_InteriorTail_SoundSet",
				"PP19_Slapback_SoundSet",
				"PP19_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"PP19_1st_silencer_SoundSet",
					"PP19_silencerTail_SoundSet",
					"PP19_silencerInteriorTail_SoundSet"
				},
				
				{
					"PP19_1st_silencerHomeMade_SoundSet",
					"PP19_silencerHomeMadeTail_SoundSet",
					"PP19_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"PP19_Shot_1st_SoundSet",
				"PP19_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"PP19_Shot_SoundSet",
				"PP19_Shot_iterior_SoundSet",
				"PP19_Tail_SoundSet",
				"PP19_InteriorTail_SoundSet",
				"PP19_Slapback_SoundSet",
				"PP19_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"PP19_1st_silencer_SoundSet"
				},
				
				{
					"PP19_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"PP19_silencer_SoundSet",
					"PP19_silencerTail_SoundSet",
					"PP19_silencerInteriorTail_SoundSet"
				},
				
				{
					"PP19_silencerHomeMade_SoundSet",
					"PP19_silencerHomeMadeTail_SoundSet",
					"PP19_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.097999997;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={75,150};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.059999999,-0.02,0.029999999};
				orientation[]={0,15,0};
			};
			class Melee
			{
				position[]={-0.059999999,-0.02,-0.050000001};
				orientation[]={0,-15,0};
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
				class ChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=12;
				shotsToStartOverheating=4;
				overheatingDecayInterval=0.69999999;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0.1,1};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0,0};
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
		weaponStateAnim="dz\anims\anm\player\reloads\Bizon\w_bizon_states.anm";
	};
	class PP19: PP19_Base
	{
		scope=2;
	};
};
