class CfgPatches
{
	class DZ_Weapons_Firearms_MosinNagant
	{
		units[]=
		{
			"Mosin9130",
			"Mosin9130_Black",
			"Mosin9130_Green",
			"Mosin9130_Green_Black",
			"Mosin9130_Black_Green"
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
	class BoltActionRifle_InnerMagazine_Base;
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope=0;
		displayName="$STR_cfgWeapons_Mosin91300";
		descriptionShort="$STR_cfgWeapons_Mosin91301";
		animName="Mosin9130";
		weight=4000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		DisplayMagazine=0;
		WeaponLength=1.235;
		ObstructionDistance=1.013;
		barrelArmor=2;
		initSpeedMultiplier=1.02;
		chamberSize=5;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer",
			"Mag_CLIP762x54_5Rnd"
		};
		magazines[]={};
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.5,2.5,0.89999998};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\mosin9130\data\mosin_9130.rvmat"
		};
		class NoiseShoot
		{
			strength=100;
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
								"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_9130_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_9130_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_9130_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"Mosin9130_Shot_SoundSet",
				"Mosin9130_Shot_iterior_SoundSet",
				"Mosin9130_Tail_SoundSet",
				"Mosin9130_InteriorTail_SoundSet",
				"Mosin9130_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Mosin9130_silencerHomeMade_SoundSet",
					"Mosin9130_silencerHomeMadeTail_SoundSet",
					"Mosin9130_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_mosin";
			recoilProne="recoil_mosin_prone";
			dispersion=0.0012000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,0,-0.059999999};
				orientation[]={0,-40,0};
			};
			class Melee
			{
				position[]={0,0,0.039999999};
				orientation[]={0,40,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mosin9130_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.029999999,0,0};
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
				maxOverheatingValue=1;
				shotsToStartOverheating=1;
				overheatingDecayInterval=0.5;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0.1,1};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,0.2};
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
		weaponStateAnim="dz\anims\anm\player\reloads\Mosin_1903\w_mosin1903_states.anm";
	};
	class SawedoffMosin9130_Base: Mosin9130_Base
	{
		scope=0;
		displayName="$STR_cfgWeapons_SawedoffMosin91300";
		descriptionShort="$STR_cfgWeapons_SawedoffMosin91301";
		animName="Mosin9130";
		weight=3000;
		absorbency=0.1;
		repairableWithKits[]={1};
		repairCosts[]={25};
		WeaponLength=0.5;
		ObstructionDistance=0.46900001;
		ShoulderDistance=0.30000001;
		initSpeedMultiplier=0.75;
		chamberSize=5;
		chamberedRound="";
		magazines[]={};
		chamberableFrom[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer",
			"Mag_CLIP762x54_5Rnd"
		};
		ejectType=0;
		recoilModifier[]={2,2,1};
		swayModifier[]={1.5,1.5,1};
		DisplayMagazine=0;
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Mosin9130_Shot_Sawedoff_SoundSet",
				"Mosin9130_Shot_iterior_SoundSet",
				"Mosin9130_Tail_Sawedoff_SoundSet",
				"Mosin9130_InteriorTail_SoundSet",
				"Mosin9130_Tail_2D_Sawedoff_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Mosin9130_silencerHomeMade_SoundSet",
					"Mosin9130_silencerHomeMadeTail_SoundSet",
					"Mosin9130_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_mosin";
			recoilProne="recoil_mosin_prone";
			dispersion=0.003;
		};
		class OpticsInfo: OpticsInfo
		{
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={50};
			discreteDistanceInitIndex=0;
		};
	};
	class Mosin9130: Mosin9130_Base
	{
		scope=2;
		model="\dz\weapons\firearms\mosin9130\mosin9130.p3d";
		itemSize[]={10,3};
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsMosin",
			"suppressorImpro",
			"weaponMuzzleMosin",
			"weaponBayonetMosin"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\mosin9130\data\mosin_9130_co.paa"
		};
	};
	class Mosin9130_Black: Mosin9130
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\mosin9130\data\mosin_9130_bk.rvmat"
		};
	};
	class Mosin9130_Green: Mosin9130
	{
		scope=2;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
	class Mosin9130_Camo: Mosin9130
	{
		scope=2;
		color="Camo";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\mosin9130\data\mosin_nagant_camo_co.paa"
		};
	};
	class SawedoffMosin9130: SawedoffMosin9130_Base
	{
		scope=2;
		model="\dz\weapons\firearms\mosin9130\mosin_sawn.p3d";
		attachments[]=
		{
			"weaponOpticsMosin"
		};
		itemSize[]={5,2};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\mosin9130\data\mosin_sawn_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\mosin9130\data\mosin_sawn.rvmat"
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
								"DZ\weapons\firearms\mosin9130\Data\mosin_sawn.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_sawn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_sawn_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_sawn_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_sawn_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.050000001,-0.025,0.0099999998};
				orientation[]={0,0,-10};
			};
			class Melee
			{
				position[]={-0.050000001,-0.025,-0.029999999};
				orientation[]={0,0,-10};
			};
		};
	};
	class SawedoffMosin9130_Black: SawedoffMosin9130
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\mosin9130\data\mosin_sawn_bk.rvmat"
		};
	};
	class SawedoffMosin9130_Green: SawedoffMosin9130
	{
		scope=2;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
	class SawedoffMosin9130_Camo: SawedoffMosin9130
	{
		scope=2;
		color="Camo";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\mosin9130\data\mosin_nagant_camo_co.paa"
		};
	};
};
