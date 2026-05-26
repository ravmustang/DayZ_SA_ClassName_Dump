class CfgPatches
{
	class DZ_Weapons_Firearms_Famas
	{
		units[]=
		{
			"Famas"
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
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class Famas_Base: Rifle_Base
	{
		scope=0;
		weight=3600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.1,20,200,10,10};
		WeaponLength=0.75;
		ObstructionDistance=0.50999999;
		barrelArmor=2.3;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"Mag_FAMAS_25Rnd"
		};
		magazineSwitchTime=0.30000001;
		initSpeedMultiplier=1;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,1.1,0.69999999};
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
								"DZ\weapons\firearms\famas\data\famas_rifle1.rvmat",
								"DZ\weapons\firearms\famas\data\famas_rifle2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\famas\data\famas_rifle1.rvmat",
								"DZ\weapons\firearms\famas\data\famas_rifle2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\famas\data\famas_rifle1_damage.rvmat",
								"DZ\weapons\firearms\famas\data\famas_rifle2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\famas\data\famas_rifle1_damage.rvmat",
								"DZ\weapons\firearms\famas\data\famas_rifle2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat",
								"DZ\weapons\firearms\famas\data\famas_rifle2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\famas\data\famas_rifle1_co.paa",
			"dz\weapons\firearms\famas\data\famas_rifle2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\famas\data\famas_rifle1.rvmat",
			"dz\weapons\firearms\famas\data\famas_rifle2.rvmat"
		};
		class NoiseShoot
		{
			strength=80;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto",
			"Burst",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Famas_Shot_1st_SoundSet",
				"Famas_Shot_1st_iterior_SoundSet",
				"Famas_Tail_SoundSet",
				"Famas_InteriorTail_SoundSet",
				"Famas_Slapback_SoundSet",
				"Famas_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Famas_1st_silencer_SoundSet",
					"Famas_silencerTail_SoundSet",
					"Famas_silencerInteriorTail_SoundSet"
				},
				
				{
					"Famas_1st_silencerHomeMade_SoundSet",
					"Famas_silencerHomeMadeTail_SoundSet",
					"Famas_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[]=
			{
				"Famas_Shot_1st_SoundSet",
				"Famas_Shot_1st_iterior_SoundSet",
				"Famas_Tail_SoundSet",
				"Famas_InteriorTail_SoundSet",
				"Famas_Slapback_SoundSet",
				"Famas_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Famas_1st_silencer_SoundSet",
					"Famas_silencerTail_SoundSet",
					"Famas_silencerInteriorTail_SoundSet"
				},
				
				{
					"Famas_1st_silencerHomeMade_SoundSet",
					"Famas_silencerHomeMadeTail_SoundSet",
					"Famas_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			burst=3;
			reloadTime=0.064999998;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"Famas_Shot_1st_SoundSet",
				"Famas_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"Famas_Shot_SoundSet",
				"Famas_Shot_iterior_SoundSet",
				"Famas_Tail_SoundSet",
				"Famas_InteriorTail_SoundSet",
				"Famas_Slapback_SoundSet",
				"Famas_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"Famas_1st_silencer_SoundSet"
				},
				
				{
					"Famas_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"Famas_silencer_SoundSet",
					"Famas_silencerTail_SoundSet",
					"Famas_silencerInteriorTail_SoundSet"
				},
				
				{
					"Famas_silencerHomeMade_SoundSet",
					"Famas_silencerHomeMadeTail_SoundSet",
					"Famas_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.064999998;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,100,200};
			discreteDistanceInitIndex=0;
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=200;
			PPMaskProperties[]={0.5,0.5,0.1,0.050000001};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0.2;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.25,0.035,0};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.25,0.035,-0.029999999};
				orientation[]={0,0,0};
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
					overrideParticle="weapon_shot_ump45_01";
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
				maxOverheatingValue=8;
				shotsToStartOverheating=4;
				overheatingDecayInterval=0.69999999;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.69999999};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.69999999,1};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
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
		weaponStateAnim="dz\anims\anm\player\reloads\Famas\w_famas_states.anm";
	};
	class FAMAS: Famas_Base
	{
		scope=2;
		displayName="$STR_CfgWeapons_FAMAS0";
		descriptionShort="$STR_CfgWeapons_FAMAS1";
		model="\dz\weapons\firearms\famas\famas.p3d";
		attachments[]=
		{
			"weaponWrap",
			"suppressorImpro"
		};
		itemSize[]={6,3};
	};
	class SawedoffFAMAS: Famas_Base
	{
		scope=2;
		displayName="$STR_CfgWeapons_SawedoffFAMAS0";
		descriptionShort="$STR_CfgWeapons_SawedoffFAMAS1";
		model="\dz\weapons\firearms\famas\SawedoffFAMAS.p3d";
		attachments[]=
		{
			"weaponWrap",
			"suppressorImpro"
		};
		itemSize[]={6,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=180;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\famas\data\famas_rifle1.rvmat",
								"DZ\weapons\firearms\famas\data\famas_rifle2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\famas\data\famas_rifle1.rvmat",
								"DZ\weapons\firearms\famas\data\famas_rifle2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\famas\data\famas_rifle1_damage.rvmat",
								"DZ\weapons\firearms\famas\data\famas_rifle2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\famas\data\famas_rifle1_damage.rvmat",
								"DZ\weapons\firearms\famas\data\famas_rifle2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat",
								"DZ\weapons\firearms\famas\data\famas_rifle2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
