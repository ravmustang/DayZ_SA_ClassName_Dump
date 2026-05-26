class CfgPatches
{
	class DZ_Weapons_Firearms_Winchester70
	{
		units[]=
		{
			"Winchester70",
			"Winchester70_Black",
			"Winchester70_Green"
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
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope=0;
		animName="Winchester70";
		weight=2721;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		WeaponLength=1.15;
		barrelArmor=3.125;
		winchesterTypeOpticsMount=1;
		initSpeedMultiplier=1.15;
		chamberSize=5;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]={};
		DisplayMagazine=0;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,0.85000002};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		class NoiseShoot
		{
			strength=100;
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
				"Winchester70_Shot_SoundSet",
				"Winchester70_Shot_iterior_SoundSet",
				"Winchester70_Tail_SoundSet",
				"Winchester70_InteriorTail_SoundSet",
				"Winchester70_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Winchester70_silencerHomeMade_SoundSet",
					"Winchester70_silencerHomeMadeTail_SoundSet",
					"Winchester70_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_Winchester";
			recoilProne="recoil_Winchester_prone";
			dispersion=0.00050000002;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;
			distanceZoomMin=200;
			distanceZoomMax=200;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,-0.02,-0.029999999};
				orientation[]={0,-30,0};
			};
			class Melee
			{
				position[]={0,-0.02,0.0099999998};
				orientation[]={0,30,0};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\Winchester70\w_winchester70_states.anm";
	};
	class Winchester70: Winchester70_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Winchester700";
		descriptionShort="$STR_cfgWeapons_Winchester701";
		model="\dz\weapons\firearms\winchester70\winchester70.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"suppressorImpro"
		};
		itemSize[]={10,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\winchester70\data\winchester70_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\winchester70\data\winchester70.rvmat"
		};
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
								"DZ\weapons\firearms\winchester70\data\winchester70.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\winchester70\data\winchester70.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\winchester70\data\winchester70_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\winchester70\data\winchester70_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\winchester70\data\winchester70_destruct.rvmat"
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
					overrideParticle="weapon_shot_mosin9130_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0.1,0,0};
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
	};
	class Winchester70_Black: Winchester70
	{
		scope=2;
		descriptionShort="$STR_cfgWeapons_Winchester70_Black0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
	};
	class Winchester70_Green: Winchester70
	{
		scope=2;
		descriptionShort="$STR_cfgWeapons_Winchester70_Green0";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
};
