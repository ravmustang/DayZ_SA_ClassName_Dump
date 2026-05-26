class CfgPatches
{
	class DZ_Weapons_Firearms_Repeater
	{
		units[]=
		{
			"Repeater"
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
	class Rifle_Base;
	class Repeater_Base: Rifle_Base
	{
		scope=0;
		animName="Repeater";
		weight=2720;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,165,4,10};
		DisplayMagazine=0;
		WeaponLength=0.89999998;
		ObstructionDistance=0.54000002;
		barrelArmor=0.54000002;
		initSpeedMultiplier=1.25;
		chamberSize=7;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_357"
		};
		magazines[]={};
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,0.85000002};
		hiddenSelections[]=
		{
			"camo"
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
								"DZ\weapons\firearms\repeater\Data\repeater.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\repeater\Data\repeater.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\repeater\Data\repeater_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\repeater\Data\repeater_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\repeater\Data\repeater_destruct.rvmat"
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
				"Repeater_Shot_SoundSet",
				"Repeater_Shot_iterior_SoundSet",
				"Repeater_Tail_SoundSet",
				"Repeater_InteriorTail_SoundSet",
				"Repeater_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Repeater_silencerHomeMade_SoundSet",
					"Repeater_silencerHomeMadeTail_SoundSet",
					"Repeater_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_repeater";
			recoilProne="recoil_repeater_prone";
			dispersion=0.001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={50,100,200,300};
			discreteDistanceInitIndex=1;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,-0.029999999,0};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={0,-0.015,-0.02};
				orientation[]={0,0,0};
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
					positionOffset[]={-0.050000001,0,0};
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
		weaponStateAnim="dz\anims\anm\player\reloads\Repeater\w_repeater_states.anm";
	};
	class Repeater: Repeater_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Repeater0";
		descriptionShort="$STR_cfgWeapons_Repeater1";
		model="\dz\weapons\firearms\repeater\repeater.p3d";
		attachments[]=
		{
			"weaponWrap",
			"suppressorImpro"
		};
		itemSize[]={9,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\repeater\data\repeater_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\repeater\data\repeater.rvmat"
		};
	};
};
