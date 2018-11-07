////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:53:16 2018 : 'file' last modified on Wed Aug 22 22:06:59 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_projectiles\config.bin{
class CfgPatches
{
	class DZ_Weapons_Projectiles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgAmmo
{
	class ShotgunCore;
	class DefaultAmmo;
	class BulletCore;
	class Bullet_Base: BulletCore
	{
		scope = 0;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "";
		soundFly[] = {"",9.999997e-009,1};
		soundDefault1[] = {"dz\sounds\weapons\hits\bullet\soft_ground_1",0.75,1,40};
		soundDefault2[] = {"dz\sounds\weapons\hits\bullet\soft_ground_2",0.75,1,40};
		soundDefault3[] = {"dz\sounds\weapons\hits\bullet\soft_ground_3",0.75,1,40};
		soundDefault4[] = {"dz\sounds\weapons\hits\bullet\soft_ground_4",0.75,1,40};
		soundDefault5[] = {"dz\sounds\weapons\hits\bullet\soft_ground_5",0.75,1,40};
		soundDefault6[] = {"dz\sounds\weapons\hits\bullet\soft_ground_6",0.75,1,40};
		soundDefault7[] = {"dz\sounds\weapons\hits\bullet\soft_ground_7",0.75,1,40};
		soundDefault8[] = {"dz\sounds\weapons\hits\bullet\soft_ground_8",0.75,1,40};
		soundGroundSoft1[] = {"dz\sounds\weapons\hits\bullet\soft_ground_1",0.75,1,40};
		soundGroundSoft2[] = {"dz\sounds\weapons\hits\bullet\soft_ground_2",0.75,1,40};
		soundGroundSoft3[] = {"dz\sounds\weapons\hits\bullet\soft_ground_3",0.75,1,40};
		soundGroundSoft4[] = {"dz\sounds\weapons\hits\bullet\soft_ground_4",0.75,1,40};
		soundGroundSoft5[] = {"dz\sounds\weapons\hits\bullet\soft_ground_5",0.75,1,40};
		soundGroundSoft6[] = {"dz\sounds\weapons\hits\bullet\soft_ground_6",0.75,1,40};
		soundGroundSoft7[] = {"dz\sounds\weapons\hits\bullet\soft_ground_7",0.75,1,40};
		soundGroundSoft8[] = {"dz\sounds\weapons\hits\bullet\soft_ground_8",0.75,1,40};
		soundGroundHard1[] = {"dz\sounds\weapons\hits\bullet\hard_ground_1",0.75,1,40};
		soundGroundHard2[] = {"dz\sounds\weapons\hits\bullet\hard_ground_2",0.75,1,40};
		soundGroundHard3[] = {"dz\sounds\weapons\hits\bullet\hard_ground_3",0.75,1,40};
		soundGroundHard4[] = {"dz\sounds\weapons\hits\bullet\hard_ground_4",0.75,1,40};
		soundGroundHard5[] = {"dz\sounds\weapons\hits\bullet\hard_ground_5",0.75,1,40};
		soundGroundHard6[] = {"dz\sounds\weapons\hits\bullet\hard_ground_6",0.75,1,40};
		soundGroundHard7[] = {"dz\sounds\weapons\hits\bullet\hard_ground_7",0.75,1,40};
		soundGroundHard8[] = {"dz\sounds\weapons\hits\bullet\hard_ground_8",0.75,1,40};
		soundMetal1[] = {"dz\sounds\weapons\hits\bullet\metal_1",0.75,1,40};
		soundMetal2[] = {"dz\sounds\weapons\hits\bullet\metal_2",0.75,1,40};
		soundMetal3[] = {"dz\sounds\weapons\hits\bullet\metal_3",0.75,1,40};
		soundMetal4[] = {"dz\sounds\weapons\hits\bullet\metal_4",0.75,1,40};
		soundMetal5[] = {"dz\sounds\weapons\hits\bullet\metal_5",0.75,1,40};
		soundMetal6[] = {"dz\sounds\weapons\hits\bullet\metal_6",0.75,1,40};
		soundMetal7[] = {"dz\sounds\weapons\hits\bullet\metal_7",0.75,1,40};
		soundMetal8[] = {"dz\sounds\weapons\hits\bullet\metal_8",0.75,1,40};
		soundGlass1[] = {"dz\sounds\weapons\hits\bullet\glass_1",0.75,1,40};
		soundGlass2[] = {"dz\sounds\weapons\hits\bullet\glass_2",0.75,1,40};
		soundGlass3[] = {"dz\sounds\weapons\hits\bullet\glass_3",0.75,1,40};
		soundGlass4[] = {"dz\sounds\weapons\hits\bullet\glass_4",0.75,1,40};
		soundGlass5[] = {"dz\sounds\weapons\hits\bullet\glass_5",0.75,1,40};
		soundGlass6[] = {"dz\sounds\weapons\hits\bullet\glass_6",0.75,1,40};
		soundGlass7[] = {"dz\sounds\weapons\hits\bullet\glass_7",0.75,1,40};
		soundGlass8[] = {"dz\sounds\weapons\hits\bullet\glass_8",0.75,1,40};
		soundGlassArmored1[] = {"dz\sounds\weapons\hits\bullet\glass_arm_1",0.75,1,40};
		soundGlassArmored2[] = {"dz\sounds\weapons\hits\bullet\glass_arm_2",0.75,1,40};
		soundGlassArmored3[] = {"dz\sounds\weapons\hits\bullet\glass_arm_3",0.75,1,40};
		soundGlassArmored4[] = {"dz\sounds\weapons\hits\bullet\glass_arm_4",0.75,1,40};
		soundGlassArmored5[] = {"dz\sounds\weapons\hits\bullet\glass_arm_5",0.75,1,40};
		soundGlassArmored6[] = {"dz\sounds\weapons\hits\bullet\glass_arm_6",0.75,1,40};
		soundGlassArmored7[] = {"dz\sounds\weapons\hits\bullet\glass_arm_7",0.75,1,40};
		soundGlassArmored8[] = {"dz\sounds\weapons\hits\bullet\glass_arm_8",0.75,1,40};
		soundVehiclePlate1[] = {"dz\sounds\weapons\hits\bullet\metal_plate_1",0.75,1,40};
		soundVehiclePlate2[] = {"dz\sounds\weapons\hits\bullet\metal_plate_2",0.75,1,40};
		soundVehiclePlate3[] = {"dz\sounds\weapons\hits\bullet\metal_plate_3",0.75,1,40};
		soundVehiclePlate4[] = {"dz\sounds\weapons\hits\bullet\metal_plate_4",0.75,1,40};
		soundVehiclePlate5[] = {"dz\sounds\weapons\hits\bullet\metal_plate_5",0.75,1,40};
		soundVehiclePlate6[] = {"dz\sounds\weapons\hits\bullet\metal_plate_6",0.75,1,40};
		soundVehiclePlate7[] = {"dz\sounds\weapons\hits\bullet\metal_plate_7",0.75,1,40};
		soundVehiclePlate8[] = {"dz\sounds\weapons\hits\bullet\metal_plate_8",0.75,1,40};
		soundWood1[] = {"dz\sounds\weapons\hits\bullet\wood_1",0.75,1,40};
		soundWood2[] = {"dz\sounds\weapons\hits\bullet\wood_2",0.75,1,40};
		soundWood3[] = {"dz\sounds\weapons\hits\bullet\wood_3",0.75,1,40};
		soundWood4[] = {"dz\sounds\weapons\hits\bullet\wood_4",0.75,1,40};
		soundWood5[] = {"dz\sounds\weapons\hits\bullet\wood_5",0.75,1,40};
		soundWood6[] = {"dz\sounds\weapons\hits\bullet\wood_6",0.75,1,40};
		soundWood7[] = {"dz\sounds\weapons\hits\bullet\wood_7",0.75,1,40};
		soundWood8[] = {"dz\sounds\weapons\hits\bullet\wood_8",0.75,1,40};
		soundHitBody1[] = {"dz\sounds\weapons\hits\bullet\body_1",1,1,20};
		soundHitBody2[] = {"dz\sounds\weapons\hits\bullet\body_2",1,1,20};
		soundHitBody3[] = {"dz\sounds\weapons\hits\bullet\body_3",1,1,20};
		soundHitBody4[] = {"dz\sounds\weapons\hits\bullet\body_4",1,1,20};
		soundHitBody5[] = {"dz\sounds\weapons\hits\bullet\body_5",1,1,20};
		soundHitBody6[] = {"dz\sounds\weapons\hits\bullet\body_6",1,1,20};
		soundHitBody7[] = {"dz\sounds\weapons\hits\bullet\body_7",1,1,20};
		soundHitBody8[] = {"dz\sounds\weapons\hits\bullet\body_8",1,1,20};
		soundHitBuilding1[] = {"dz\sounds\weapons\hits\bullet\building_1",0.75,1,40};
		soundHitBuilding2[] = {"dz\sounds\weapons\hits\bullet\building_2",0.75,1,40};
		soundHitBuilding3[] = {"dz\sounds\weapons\hits\bullet\building_3",0.75,1,40};
		soundHitBuilding4[] = {"dz\sounds\weapons\hits\bullet\building_4",0.75,1,40};
		soundHitBuilding5[] = {"dz\sounds\weapons\hits\bullet\building_5",0.75,1,40};
		soundHitBuilding6[] = {"dz\sounds\weapons\hits\bullet\building_6",0.75,1,40};
		soundHitBuilding7[] = {"dz\sounds\weapons\hits\bullet\building_7",0.75,1,40};
		soundHitBuilding8[] = {"dz\sounds\weapons\hits\bullet\building_8",0.75,1,40};
		soundHitFoliage1[] = {"dz\sounds\weapons\hits\bullet\foliage_1",1,1,20};
		soundHitFoliage2[] = {"dz\sounds\weapons\hits\bullet\foliage_2",1,1,20};
		soundHitFoliage3[] = {"dz\sounds\weapons\hits\bullet\foliage_3",1,1,20};
		soundHitFoliage4[] = {"dz\sounds\weapons\hits\bullet\foliage_4",1,1,20};
		soundHitFoliage5[] = {"dz\sounds\weapons\hits\bullet\foliage_5",1,1,20};
		soundHitFoliage6[] = {"dz\sounds\weapons\hits\bullet\foliage_6",1,1,20};
		soundHitFoliage7[] = {"dz\sounds\weapons\hits\bullet\foliage_7",1,1,20};
		soundHitFoliage8[] = {"dz\sounds\weapons\hits\bullet\foliage_8",1,1,20};
		soundPlastic1[] = {"dz\sounds\weapons\hits\bullet\plastic_1",0.75,1,40};
		soundPlastic2[] = {"dz\sounds\weapons\hits\bullet\plastic_2",0.75,1,40};
		soundPlastic3[] = {"dz\sounds\weapons\hits\bullet\plastic_3",0.75,1,40};
		soundPlastic4[] = {"dz\sounds\weapons\hits\bullet\plastic_4",0.75,1,40};
		soundPlastic5[] = {"dz\sounds\weapons\hits\bullet\plastic_5",0.75,1,40};
		soundPlastic6[] = {"dz\sounds\weapons\hits\bullet\plastic_6",0.75,1,40};
		soundPlastic7[] = {"dz\sounds\weapons\hits\bullet\plastic_7",0.75,1,40};
		soundPlastic8[] = {"dz\sounds\weapons\hits\bullet\plastic_8",0.75,1,40};
		soundConcrete1[] = {"dz\sounds\weapons\hits\bullet\concrete_1",0.75,1,40};
		soundConcrete2[] = {"dz\sounds\weapons\hits\bullet\concrete_2",0.75,1,40};
		soundConcrete3[] = {"dz\sounds\weapons\hits\bullet\concrete_3",0.75,1,40};
		soundConcrete4[] = {"dz\sounds\weapons\hits\bullet\concrete_4",0.75,1,40};
		soundConcrete5[] = {"dz\sounds\weapons\hits\bullet\concrete_5",0.75,1,40};
		soundConcrete6[] = {"dz\sounds\weapons\hits\bullet\concrete_6",0.75,1,40};
		soundConcrete7[] = {"dz\sounds\weapons\hits\bullet\concrete_7",0.75,1,40};
		soundConcrete8[] = {"dz\sounds\weapons\hits\bullet\concrete_8",0.75,1,40};
		soundRubber1[] = {"dz\sounds\weapons\hits\bullet\tyre_1",0.75,1,40};
		soundRubber2[] = {"dz\sounds\weapons\hits\bullet\tyre_2",0.75,1,40};
		soundRubber3[] = {"dz\sounds\weapons\hits\bullet\tyre_3",0.75,1,40};
		soundRubber4[] = {"dz\sounds\weapons\hits\bullet\tyre_4",0.75,1,40};
		soundRubber5[] = {"dz\sounds\weapons\hits\bullet\tyre_5",0.75,1,40};
		soundRubber6[] = {"dz\sounds\weapons\hits\bullet\tyre_6",0.75,1,40};
		soundRubber7[] = {"dz\sounds\weapons\hits\bullet\tyre_7",0.75,1,40};
		soundRubber8[] = {"dz\sounds\weapons\hits\bullet\tyre_8",0.75,1,40};
		soundWater1[] = {"dz\sounds\weapons\hits\bullet\water_1",0.75,1,40};
		soundWater2[] = {"dz\sounds\weapons\hits\bullet\water_2",0.75,1,40};
		soundWater3[] = {"dz\sounds\weapons\hits\bullet\water_3",0.75,1,40};
		soundWater4[] = {"dz\sounds\weapons\hits\bullet\water_4",0.75,1,40};
		soundWater5[] = {"dz\sounds\weapons\hits\bullet\water_5",0.75,1,40};
		soundWater6[] = {"dz\sounds\weapons\hits\bullet\water_6",0.75,1,40};
		soundWater7[] = {"dz\sounds\weapons\hits\bullet\water_7",0.75,1,40};
		soundWater8[] = {"dz\sounds\weapons\hits\bullet\water_8",0.75,1,40};
		hitGroundSoft[] = {"soundGroundSoft1",0.125,"soundGroundSoft2",0.125,"soundGroundSoft3",0.125,"soundGroundSoft4",0.125,"soundGroundSoft5",0.125,"soundGroundSoft6",0.125,"soundGroundSoft7",0.125,"soundGroundSoft8",0.125};
		hitGroundHard[] = {"soundGroundHard1",0.125,"soundGroundHard2",0.125,"soundGroundHard3",0.125,"soundGroundHard4",0.125,"soundGroundHard5",0.125,"soundGroundHard6",0.125,"soundGroundHard7",0.125,"soundGroundHard8",0.125};
		hitMan[] = {"soundHitBody1",0.125,"soundHitBody2",0.125,"soundHitBody3",0.125,"soundHitBody4",0.125,"soundHitBody5",0.125,"soundHitBody6",0.125,"soundHitBody7",0.125,"soundHitBody8",0.125};
		hitArmor[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitBuilding[] = {"soundHitBuilding1",0.125,"soundHitBuilding2",0.125,"soundHitBuilding3",0.125,"soundHitBuilding4",0.125,"soundHitBuilding5",0.125,"soundHitBuilding6",0.125,"soundHitBuilding7",0.125,"soundHitBuilding8",0.125};
		hitFoliage[] = {"soundHitFoliage1",0.125,"soundHitFoliage2",0.125,"soundHitFoliage3",0.125,"soundHitFoliage4",0.125,"soundHitFoliage5",0.125,"soundHitFoliage6",0.125,"soundHitFoliage7",0.125,"soundHitFoliage8",0.125};
		hitWood[] = {"soundWood1",0.125,"soundWood2",0.125,"soundWood3",0.125,"soundWood4",0.125,"soundWood5",0.125,"soundWood6",0.125,"soundWood7",0.125,"soundWood8",0.125};
		hitGlass[] = {"soundGlass1",0.125,"soundGlass2",0.125,"soundGlass3",0.125,"soundGlass4",0.125,"soundGlass5",0.125,"soundGlass6",0.125,"soundGlass7",0.125,"soundGlass8",0.125};
		hitGlassArmored[] = {"soundGlassArmored1",0.125,"soundGlassArmored2",0.125,"soundGlassArmored3",0.125,"soundGlassArmored4",0.125,"soundGlassArmored5",0.125,"soundGlassArmored6",0.125,"soundGlassArmored7",0.125,"soundGlassArmored8",0.125};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitRubber[] = {"soundRubber1",0.25,"soundRubber2",0.25,"soundRubber3",0.25,"soundRubber4",0.25};
		hitPlastic[] = {"soundPlastic1",0.125,"soundPlastic2",0.125,"soundPlastic3",0.125,"soundPlastic4",0.125,"soundPlastic5",0.125,"soundPlastic6",0.125,"soundPlastic7",0.125,"soundPlastic8",0.125};
		hitDefault[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		hitMetal[] = {"soundMetal1",0.125,"soundMetal2",0.125,"soundMetal3",0.125,"soundMetal4",0.125,"soundMetal5",0.125,"soundMetal6",0.125,"soundMetal7",0.125,"soundMetal8",0.125};
		hitMetalplate[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitWater[] = {"soundWater1",0.125,"soundWater2",0.125,"soundWater3",0.125,"soundWater4",0.125,"soundWater5",0.125,"soundWater6",0.125,"soundWater7",0.125,"soundWater8",0.125};
		soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
		soundSetSuperSonic[] = {"SuperSonicCrack_SoundSet","SuperSonicCrackTail_SoundSet"};
		cartridge = "FxCartridge_556";
		cost = 0.7;
		timeToLive = 6;
		deflecting = 10;
		tracerStartTime = -1;
		muzzleEffect = "BIS_Effects_Rifle";
		maxLeadSpeed = 23;
		typicalSpeed = 900;
		initSpeed = 900;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			Health = 99;
			Blood = 100;
			Shock = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
			};
		};
	};
	class Shotgun_Base: ShotgunCore
	{
		scope = 0;
		waterEffectOffset = -0.8;
		soundDefault1[] = {"dz\sounds\weapons\hits\bullet\soft_ground_1",0.75,1,40};
		soundDefault2[] = {"dz\sounds\weapons\hits\bullet\soft_ground_2",0.75,1,40};
		soundDefault3[] = {"dz\sounds\weapons\hits\bullet\soft_ground_3",0.75,1,40};
		soundDefault4[] = {"dz\sounds\weapons\hits\bullet\soft_ground_4",0.75,1,40};
		soundDefault5[] = {"dz\sounds\weapons\hits\bullet\soft_ground_5",0.75,1,40};
		soundDefault6[] = {"dz\sounds\weapons\hits\bullet\soft_ground_6",0.75,1,40};
		soundDefault7[] = {"dz\sounds\weapons\hits\bullet\soft_ground_7",0.75,1,40};
		soundDefault8[] = {"dz\sounds\weapons\hits\bullet\soft_ground_8",0.75,1,40};
		soundGroundSoft1[] = {"dz\sounds\weapons\hits\bullet\soft_ground_1",0.75,1,40};
		soundGroundSoft2[] = {"dz\sounds\weapons\hits\bullet\soft_ground_2",0.75,1,40};
		soundGroundSoft3[] = {"dz\sounds\weapons\hits\bullet\soft_ground_3",0.75,1,40};
		soundGroundSoft4[] = {"dz\sounds\weapons\hits\bullet\soft_ground_4",0.75,1,40};
		soundGroundSoft5[] = {"dz\sounds\weapons\hits\bullet\soft_ground_5",0.75,1,40};
		soundGroundSoft6[] = {"dz\sounds\weapons\hits\bullet\soft_ground_6",0.75,1,40};
		soundGroundSoft7[] = {"dz\sounds\weapons\hits\bullet\soft_ground_7",0.75,1,40};
		soundGroundSoft8[] = {"dz\sounds\weapons\hits\bullet\soft_ground_8",0.75,1,40};
		soundGroundHard1[] = {"dz\sounds\weapons\hits\bullet\hard_ground_1",0.75,1,40};
		soundGroundHard2[] = {"dz\sounds\weapons\hits\bullet\hard_ground_2",0.75,1,40};
		soundGroundHard3[] = {"dz\sounds\weapons\hits\bullet\hard_ground_3",0.75,1,40};
		soundGroundHard4[] = {"dz\sounds\weapons\hits\bullet\hard_ground_4",0.75,1,40};
		soundGroundHard5[] = {"dz\sounds\weapons\hits\bullet\hard_ground_5",0.75,1,40};
		soundGroundHard6[] = {"dz\sounds\weapons\hits\bullet\hard_ground_6",0.75,1,40};
		soundGroundHard7[] = {"dz\sounds\weapons\hits\bullet\hard_ground_7",0.75,1,40};
		soundGroundHard8[] = {"dz\sounds\weapons\hits\bullet\hard_ground_8",0.75,1,40};
		soundMetal1[] = {"dz\sounds\weapons\hits\bullet\metal_1",0.75,1,40};
		soundMetal2[] = {"dz\sounds\weapons\hits\bullet\metal_2",0.75,1,40};
		soundMetal3[] = {"dz\sounds\weapons\hits\bullet\metal_3",0.75,1,40};
		soundMetal4[] = {"dz\sounds\weapons\hits\bullet\metal_4",0.75,1,40};
		soundMetal5[] = {"dz\sounds\weapons\hits\bullet\metal_5",0.75,1,40};
		soundMetal6[] = {"dz\sounds\weapons\hits\bullet\metal_6",0.75,1,40};
		soundMetal7[] = {"dz\sounds\weapons\hits\bullet\metal_7",0.75,1,40};
		soundMetal8[] = {"dz\sounds\weapons\hits\bullet\metal_8",0.75,1,40};
		soundGlass1[] = {"dz\sounds\weapons\hits\bullet\glass_1",0.75,1,40};
		soundGlass2[] = {"dz\sounds\weapons\hits\bullet\glass_2",0.75,1,40};
		soundGlass3[] = {"dz\sounds\weapons\hits\bullet\glass_3",0.75,1,40};
		soundGlass4[] = {"dz\sounds\weapons\hits\bullet\glass_4",0.75,1,40};
		soundGlass5[] = {"dz\sounds\weapons\hits\bullet\glass_5",0.75,1,40};
		soundGlass6[] = {"dz\sounds\weapons\hits\bullet\glass_6",0.75,1,40};
		soundGlass7[] = {"dz\sounds\weapons\hits\bullet\glass_7",0.75,1,40};
		soundGlass8[] = {"dz\sounds\weapons\hits\bullet\glass_8",0.75,1,40};
		soundGlassArmored1[] = {"dz\sounds\weapons\hits\bullet\glass_arm_1",0.75,1,40};
		soundGlassArmored2[] = {"dz\sounds\weapons\hits\bullet\glass_arm_2",0.75,1,40};
		soundGlassArmored3[] = {"dz\sounds\weapons\hits\bullet\glass_arm_3",0.75,1,40};
		soundGlassArmored4[] = {"dz\sounds\weapons\hits\bullet\glass_arm_4",0.75,1,40};
		soundGlassArmored5[] = {"dz\sounds\weapons\hits\bullet\glass_arm_5",0.75,1,40};
		soundGlassArmored6[] = {"dz\sounds\weapons\hits\bullet\glass_arm_6",0.75,1,40};
		soundGlassArmored7[] = {"dz\sounds\weapons\hits\bullet\glass_arm_7",0.75,1,40};
		soundGlassArmored8[] = {"dz\sounds\weapons\hits\bullet\glass_arm_8",0.75,1,40};
		soundVehiclePlate1[] = {"dz\sounds\weapons\hits\bullet\metal_plate_1",0.75,1,40};
		soundVehiclePlate2[] = {"dz\sounds\weapons\hits\bullet\metal_plate_2",0.75,1,40};
		soundVehiclePlate3[] = {"dz\sounds\weapons\hits\bullet\metal_plate_3",0.75,1,40};
		soundVehiclePlate4[] = {"dz\sounds\weapons\hits\bullet\metal_plate_4",0.75,1,40};
		soundVehiclePlate5[] = {"dz\sounds\weapons\hits\bullet\metal_plate_5",0.75,1,40};
		soundVehiclePlate6[] = {"dz\sounds\weapons\hits\bullet\metal_plate_6",0.75,1,40};
		soundVehiclePlate7[] = {"dz\sounds\weapons\hits\bullet\metal_plate_7",0.75,1,40};
		soundVehiclePlate8[] = {"dz\sounds\weapons\hits\bullet\metal_plate_8",0.75,1,40};
		soundWood1[] = {"dz\sounds\weapons\hits\bullet\wood_1",0.75,1,40};
		soundWood2[] = {"dz\sounds\weapons\hits\bullet\wood_2",0.75,1,40};
		soundWood3[] = {"dz\sounds\weapons\hits\bullet\wood_3",0.75,1,40};
		soundWood4[] = {"dz\sounds\weapons\hits\bullet\wood_4",0.75,1,40};
		soundWood5[] = {"dz\sounds\weapons\hits\bullet\wood_5",0.75,1,40};
		soundWood6[] = {"dz\sounds\weapons\hits\bullet\wood_6",0.75,1,40};
		soundWood7[] = {"dz\sounds\weapons\hits\bullet\wood_7",0.75,1,40};
		soundWood8[] = {"dz\sounds\weapons\hits\bullet\wood_8",0.75,1,40};
		soundHitBody1[] = {"dz\sounds\weapons\hits\bullet\body_1",1,1,20};
		soundHitBody2[] = {"dz\sounds\weapons\hits\bullet\body_2",1,1,20};
		soundHitBody3[] = {"dz\sounds\weapons\hits\bullet\body_3",1,1,20};
		soundHitBody4[] = {"dz\sounds\weapons\hits\bullet\body_4",1,1,20};
		soundHitBody5[] = {"dz\sounds\weapons\hits\bullet\body_5",1,1,20};
		soundHitBody6[] = {"dz\sounds\weapons\hits\bullet\body_6",1,1,20};
		soundHitBody7[] = {"dz\sounds\weapons\hits\bullet\body_7",1,1,20};
		soundHitBody8[] = {"dz\sounds\weapons\hits\bullet\body_8",1,1,20};
		soundHitBuilding1[] = {"dz\sounds\weapons\hits\bullet\building_1",0.75,1,40};
		soundHitBuilding2[] = {"dz\sounds\weapons\hits\bullet\building_2",0.75,1,40};
		soundHitBuilding3[] = {"dz\sounds\weapons\hits\bullet\building_3",0.75,1,40};
		soundHitBuilding4[] = {"dz\sounds\weapons\hits\bullet\building_4",0.75,1,40};
		soundHitBuilding5[] = {"dz\sounds\weapons\hits\bullet\building_5",0.75,1,40};
		soundHitBuilding6[] = {"dz\sounds\weapons\hits\bullet\building_6",0.75,1,40};
		soundHitBuilding7[] = {"dz\sounds\weapons\hits\bullet\building_7",0.75,1,40};
		soundHitBuilding8[] = {"dz\sounds\weapons\hits\bullet\building_8",0.75,1,40};
		soundHitFoliage1[] = {"dz\sounds\weapons\hits\bullet\foliage_1",1,1,20};
		soundHitFoliage2[] = {"dz\sounds\weapons\hits\bullet\foliage_2",1,1,20};
		soundHitFoliage3[] = {"dz\sounds\weapons\hits\bullet\foliage_3",1,1,20};
		soundHitFoliage4[] = {"dz\sounds\weapons\hits\bullet\foliage_4",1,1,20};
		soundHitFoliage5[] = {"dz\sounds\weapons\hits\bullet\foliage_5",1,1,20};
		soundHitFoliage6[] = {"dz\sounds\weapons\hits\bullet\foliage_6",1,1,20};
		soundHitFoliage7[] = {"dz\sounds\weapons\hits\bullet\foliage_7",1,1,20};
		soundHitFoliage8[] = {"dz\sounds\weapons\hits\bullet\foliage_8",1,1,20};
		soundPlastic1[] = {"dz\sounds\weapons\hits\bullet\plastic_1",0.75,1,40};
		soundPlastic2[] = {"dz\sounds\weapons\hits\bullet\plastic_2",0.75,1,40};
		soundPlastic3[] = {"dz\sounds\weapons\hits\bullet\plastic_3",0.75,1,40};
		soundPlastic4[] = {"dz\sounds\weapons\hits\bullet\plastic_4",0.75,1,40};
		soundPlastic5[] = {"dz\sounds\weapons\hits\bullet\plastic_5",0.75,1,40};
		soundPlastic6[] = {"dz\sounds\weapons\hits\bullet\plastic_6",0.75,1,40};
		soundPlastic7[] = {"dz\sounds\weapons\hits\bullet\plastic_7",0.75,1,40};
		soundPlastic8[] = {"dz\sounds\weapons\hits\bullet\plastic_8",0.75,1,40};
		soundConcrete1[] = {"dz\sounds\weapons\hits\bullet\concrete_1",0.75,1,40};
		soundConcrete2[] = {"dz\sounds\weapons\hits\bullet\concrete_2",0.75,1,40};
		soundConcrete3[] = {"dz\sounds\weapons\hits\bullet\concrete_3",0.75,1,40};
		soundConcrete4[] = {"dz\sounds\weapons\hits\bullet\concrete_4",0.75,1,40};
		soundConcrete5[] = {"dz\sounds\weapons\hits\bullet\concrete_5",0.75,1,40};
		soundConcrete6[] = {"dz\sounds\weapons\hits\bullet\concrete_6",0.75,1,40};
		soundConcrete7[] = {"dz\sounds\weapons\hits\bullet\concrete_7",0.75,1,40};
		soundConcrete8[] = {"dz\sounds\weapons\hits\bullet\concrete_8",0.75,1,40};
		soundRubber1[] = {"dz\sounds\weapons\hits\bullet\tyre_1",0.75,1,40};
		soundRubber2[] = {"dz\sounds\weapons\hits\bullet\tyre_2",0.75,1,40};
		soundRubber3[] = {"dz\sounds\weapons\hits\bullet\tyre_3",0.75,1,40};
		soundRubber4[] = {"dz\sounds\weapons\hits\bullet\tyre_4",0.75,1,40};
		soundRubber5[] = {"dz\sounds\weapons\hits\bullet\tyre_5",0.75,1,40};
		soundRubber6[] = {"dz\sounds\weapons\hits\bullet\tyre_6",0.75,1,40};
		soundRubber7[] = {"dz\sounds\weapons\hits\bullet\tyre_7",0.75,1,40};
		soundRubber8[] = {"dz\sounds\weapons\hits\bullet\tyre_8",0.75,1,40};
		soundWater1[] = {"dz\sounds\weapons\hits\bullet\water_1",0.75,1,40};
		soundWater2[] = {"dz\sounds\weapons\hits\bullet\water_2",0.75,1,40};
		soundWater3[] = {"dz\sounds\weapons\hits\bullet\water_3",0.75,1,40};
		soundWater4[] = {"dz\sounds\weapons\hits\bullet\water_4",0.75,1,40};
		soundWater5[] = {"dz\sounds\weapons\hits\bullet\water_5",0.75,1,40};
		soundWater6[] = {"dz\sounds\weapons\hits\bullet\water_6",0.75,1,40};
		soundWater7[] = {"dz\sounds\weapons\hits\bullet\water_7",0.75,1,40};
		soundWater8[] = {"dz\sounds\weapons\hits\bullet\water_8",0.75,1,40};
		hitGroundSoft[] = {"soundGroundSoft1",0.125,"soundGroundSoft2",0.125,"soundGroundSoft3",0.125,"soundGroundSoft4",0.125,"soundGroundSoft5",0.125,"soundGroundSoft6",0.125,"soundGroundSoft7",0.125,"soundGroundSoft8",0.125};
		hitGroundHard[] = {"soundGroundHard1",0.125,"soundGroundHard2",0.125,"soundGroundHard3",0.125,"soundGroundHard4",0.125,"soundGroundHard5",0.125,"soundGroundHard6",0.125,"soundGroundHard7",0.125,"soundGroundHard8",0.125};
		hitMan[] = {"soundHitBody1",0.125,"soundHitBody2",0.125,"soundHitBody3",0.125,"soundHitBody4",0.125,"soundHitBody5",0.125,"soundHitBody6",0.125,"soundHitBody7",0.125,"soundHitBody8",0.125};
		hitArmor[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitBuilding[] = {"soundHitBuilding1",0.125,"soundHitBuilding2",0.125,"soundHitBuilding3",0.125,"soundHitBuilding4",0.125,"soundHitBuilding5",0.125,"soundHitBuilding6",0.125,"soundHitBuilding7",0.125,"soundHitBuilding8",0.125};
		hitFoliage[] = {"soundHitFoliage1",0.125,"soundHitFoliage2",0.125,"soundHitFoliage3",0.125,"soundHitFoliage4",0.125,"soundHitFoliage5",0.125,"soundHitFoliage6",0.125,"soundHitFoliage7",0.125,"soundHitFoliage8",0.125};
		hitWood[] = {"soundWood1",0.125,"soundWood2",0.125,"soundWood3",0.125,"soundWood4",0.125,"soundWood5",0.125,"soundWood6",0.125,"soundWood7",0.125,"soundWood8",0.125};
		hitGlass[] = {"soundGlass1",0.125,"soundGlass2",0.125,"soundGlass3",0.125,"soundGlass4",0.125,"soundGlass5",0.125,"soundGlass6",0.125,"soundGlass7",0.125,"soundGlass8",0.125};
		hitGlassArmored[] = {"soundGlassArmored1",0.125,"soundGlassArmored2",0.125,"soundGlassArmored3",0.125,"soundGlassArmored4",0.125,"soundGlassArmored5",0.125,"soundGlassArmored6",0.125,"soundGlassArmored7",0.125,"soundGlassArmored8",0.125};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitRubber[] = {"soundRubber1",0.25,"soundRubber2",0.25,"soundRubber3",0.25,"soundRubber4",0.25};
		hitPlastic[] = {"soundPlastic1",0.125,"soundPlastic2",0.125,"soundPlastic3",0.125,"soundPlastic4",0.125,"soundPlastic5",0.125,"soundPlastic6",0.125,"soundPlastic7",0.125,"soundPlastic8",0.125};
		hitDefault[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		hitMetal[] = {"soundMetal1",0.125,"soundMetal2",0.125,"soundMetal3",0.125,"soundMetal4",0.125,"soundMetal5",0.125,"soundMetal6",0.125,"soundMetal7",0.125,"soundMetal8",0.125};
		hitMetalplate[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitWater[] = {"soundWater1",0.125,"soundWater2",0.125,"soundWater3",0.125,"soundWater4",0.125,"soundWater5",0.125,"soundWater6",0.125,"soundWater7",0.125,"soundWater8",0.125};
		soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.2;
			Health = 99;
			Blood = 100;
			Shock = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
			};
		};
	};
	class Bullet_12GaugePellets: Shotgun_Base
	{
		scope = 2;
		proxyShape = "\dz\weapons\projectiles\shotgunshell_pellets.p3d";
		lootCategory = "Crafted";
		cartridge = "FxCartridge_12Pellet";
		spawnPileType = "Ammo_12gaPellets";
		hit = 6;
		indirectHit = 0;
		indirectHitRange = 0;
		hitShockHead = 20000;
		hitShock = 400;
		hitBlood = -200;
		hitHealth = -200;
		bleedChance = 2;
		cost = 5;
		typicalSpeed = 404;
		visibleFire = 18;
		audibleFire = 18;
		airFriction = -0.00096;
		caliber = 0.5;
		initSpeed = 404;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.2;
			Health = 70;
			Blood = 100;
			Shock = 10;
		};
	};
	class Bullet_12GaugeSlug: Bullet_Base
	{
		scope = 2;
		proxyShape = "\dz\weapons\projectiles\shotgunshell_slug.p3d";
		lootCategory = "Crafted";
		cartridge = "FxCartridge_12Slug";
		spawnPileType = "Ammo_12gaSlug";
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 5;
		typicalSpeed = 404;
		visibleFire = 18;
		audibleFire = 18;
		airFriction = -0.005;
		caliber = 0.5;
		initSpeed = 404;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.2;
			Health = 70;
			Blood = 100;
			Shock = 0;
		};
	};
	class Bullet_556x45: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		spawnPileType = "Ammo_556x45";
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.00024;
		caliber = 0.5;
		audibleFire = 16;
		visibleFire = 16;
		visibleFireTime = 3;
		deflecting = 10;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		nvgOnly = 1;
		damageBarrel = 3;
		damageBarrelDestroyed = 30;
		typicalSpeed = 960;
		initSpeed = 960;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.6;
			Health = 90;
			Blood = 100;
			Shock = 15;
		};
	};
	class Bullet_545x39: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		spawnPileType = "Ammo_545x39";
		hit = 7.2;
		airFriction = -0.00027;
		typicalSpeed = 880;
		initSpeed = 880;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.55;
			Health = 85;
			Blood = 100;
			Shock = 0;
		};
	};
	class Bullet_762x54: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_762";
		spawnPileType = "Ammo_762x54";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 860;
		caliber = 1;
		airFriction = -0.0013;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		initSpeed = 860;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.7;
			Health = 100;
			Blood = 100;
			Shock = 25;
		};
	};
	class Bullet_762x54Tracer: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\projectiles\tracer_red.p3d";
		lootCategory = "Crafted";
		cartridge = "FxCartridge_762";
		spawnPileType = "Ammo_762x54Tracer";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 860;
		caliber = 1;
		airFriction = -0.0013;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		initSpeed = 860;
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.7;
			Health = 100;
			Blood = 100;
			Shock = 0;
		};
	};
	class Bullet_308Win: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_762";
		spawnPileType = "Ammo_308Win";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 860;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		caliber = 1;
		airFriction = -0.00018;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		initSpeed = 860;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.75;
			Health = 100;
			Blood = 100;
			Shock = 0;
		};
	};
	class Bullet_762x39: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_762x39";
		spawnPileType = "Ammo_762x39";
		hit = 9.5;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 18;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1;
		airLock = 1;
		typicalSpeed = 730;
		tracerColor[] = {0.2,0.8,0.1,0.04};
		tracerColorR[] = {0,0,0,0};
		airFriction = -0.00163;
		caliber = 0.83;
		damageBarrel = 3;
		damageBarrelDestroyed = 30;
		initSpeed = 730;
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.65;
			Health = 100;
			Blood = 100;
			Shock = 20;
		};
	};
	class Bullet_45ACP: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_9mm";
		spawnPileType = "Ammo_45ACP";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.85;
		deflecting = 45;
		visibleFire = 5;
		audibleFire = 9;
		typicalSpeed = 260;
		airFriction = -0.00119;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		initSpeed = 260;
		weight = 0.0149;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.4;
			Health = 75;
			Blood = 100;
			Shock = 20;
		};
	};
	class Bullet_357: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_9mm";
		spawnPileType = "Ammo_357";
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.9;
		deflecting = 45;
		visibleFire = 20;
		audibleFire = 13;
		airFriction = -0.000599;
		typicalSpeed = 440;
		initSpeed = 440;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.7;
			Health = 80;
			Blood = 100;
			Shock = 0;
		};
	};
	class Bullet_9x19: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_9mm";
		spawnPileType = "Ammo_9x19";
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.85;
		deflecting = 35;
		visibleFire = 4;
		audibleFire = 7;
		typicalSpeed = 350;
		airFriction = -0.00155;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		initSpeed = 350;
		muzzleFlashParticle = "weapon_shot_mp5k_01";
		weight = 0.008;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.3;
			Health = 60;
			Blood = 100;
			Shock = 10;
		};
	};
	class Bullet_380: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_9mm";
		spawnPileType = "Ammo_380";
		hit = 5.5;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		caliber = 0.75;
		deflecting = 32;
		visibleFire = 3.5;
		audibleFire = 5;
		typicalSpeed = 320;
		airFriction = -0.0016;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		initSpeed = 320;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.3;
			Health = 50;
			Blood = 100;
			Shock = 10;
		};
	};
	class Bullet_22: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_22";
		spawnPileType = "Ammo_22";
		hit = 4.5;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 2;
		audibleFire = 3.5;
		visibleFireTime = 3;
		cost = 1.0;
		tracerScale = 0.6;
		tracerStartTime = -1;
		tracerEndTime = 1;
		deflecting = 30;
		caliber = 0.7;
		airFriction = -0.000769;
		typicalSpeed = 380;
		initSpeed = 380;
		soundFly[] = {"",9.999997e-009,1};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.2;
			Health = 45;
			Blood = 100;
			Shock = 0;
		};
	};
	class Bullet_9x39: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_762x39";
		spawnPileType = "Ammo_9x39";
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		deflecting = 45;
		visibleFire = 5;
		audibleFire = 7;
		typicalSpeed = 300;
		airFriction = -0.00015;
		initSpeed = 300;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.7;
			Health = 90;
			Blood = 100;
			Shock = 0;
		};
	};
	class Arrow_Composite: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\projectiles\arrow_composite_flying.p3d";
		lootCategory = "Crafted";
		spawnPileType = "Ammo_ArrowComposite";
		proxyShape = "\dz\weapons\projectiles\arrow_composite.p3d";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 1;
		audibleFire = 1;
		visibleFireTime = 3;
		cost = 1.0;
		deflecting = 20;
		caliber = 0.5;
		airFriction = -0.00215;
		typicalSpeed = 90;
		soundFly[] = {};
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		initSpeed = 90;
		tracerScale = 1;
		tracerStartTime = 1e-005;
		tracerEndTime = -1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			Health = 50;
			Blood = 100;
			Shock = 0;
		};
	};
	class Arrow_Target: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\projectiles\arrow_target.p3d";
		lootCategory = "Crafted";
		proxyShape = "\dz\weapons\projectiles\arrow_target.p3d";
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 1;
		audibleFire = 1;
		visibleFireTime = 3;
		cost = 1.0;
		deflecting = 20;
		caliber = 0.5;
		airFriction = -0.00215;
		typicalSpeed = 100;
		soundFly[] = {};
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		initSpeed = 30;
		tracerScale = 1;
		tracerStartTime = 1e-005;
		tracerEndTime = -1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			Health = 50;
			Blood = 100;
			Shock = 0;
		};
	};
	class Arrow_Hunting: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\projectiles\arrow_hunting.p3d";
		lootCategory = "Crafted";
		proxyShape = "\dz\weapons\projectiles\arrow_hunting.p3d";
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 1;
		audibleFire = 1;
		visibleFireTime = 3;
		cost = 1.0;
		deflecting = 20;
		caliber = 0.5;
		airFriction = -0.00215;
		typicalSpeed = 100;
		soundFly[] = {};
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		initSpeed = 30;
		tracerScale = 1;
		tracerStartTime = 1e-005;
		tracerEndTime = -1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			Health = 50;
			Blood = 100;
			Shock = 0;
		};
	};
	class Arrow_Bolt: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\projectiles\arrow_hunting_flying.p3d";
		lootCategory = "Crafted";
		spawnPileType = "Ammo_ArrowBolt";
		proxyShape = "\dz\weapons\projectiles\arrow_hunting.p3d";
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 1;
		audibleFire = 1;
		visibleFireTime = 3;
		cost = 1.0;
		deflecting = 0;
		caliber = 0.55;
		airFriction = -0.00215;
		typicalSpeed = 100;
		soundFly[] = {};
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		initSpeed = 100;
		tracerScale = 1;
		tracerStartTime = 1e-005;
		tracerEndTime = -1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			Health = 50;
			Blood = 100;
			Shock = 0;
		};
	};
	class Arrow_Boned: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\projectiles\arrow_hunting_flying.p3d";
		lootCategory = "Crafted";
		spawnPileType = "Ammo_ArrowBoned";
		proxyShape = "\dz\weapons\projectiles\arrow_crafted_advanced.p3d";
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 1;
		audibleFire = 1;
		visibleFireTime = 3;
		cost = 1.0;
		deflecting = 20;
		caliber = 0.5;
		airFriction = -0.00215;
		typicalSpeed = 80;
		initSpeed = 80;
		soundFly[] = {};
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			Health = 50;
			Blood = 100;
			Shock = 0;
		};
	};
	class Arrow_Primitive: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\projectiles\arrow_hunting_flying.p3d";
		lootCategory = "Crafted";
		spawnPileType = "Ammo_ArrowPrimitive";
		proxyShape = "\dz\weapons\projectiles\arrow_crafted_simple.p3d";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 1;
		audibleFire = 1;
		visibleFireTime = 3;
		cost = 1.0;
		deflecting = 20;
		caliber = 0.5;
		airFriction = -0.00215;
		typicalSpeed = 70;
		initSpeed = 70;
		soundFly[] = {};
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			Health = 50;
			Blood = 100;
			Shock = 0;
		};
	};
	class Arrow_Crude: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\projectiles\arrow_hunting_flying.p3d";
		lootCategory = "Crafted";
		spawnPileType = "Ammo_SharpStick";
		proxyShape = "\dz\weapons\projectiles\arrow_crude_simple.p3d";
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 1;
		audibleFire = 1;
		visibleFireTime = 3;
		cost = 1.0;
		deflecting = 20;
		caliber = 0.5;
		airFriction = -0.00255;
		typicalSpeed = 50;
		initSpeed = 50;
		soundFly[] = {};
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			Health = 50;
			Blood = 100;
			Shock = 0;
		};
	};
	class Dart_Syringe: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\projectiles\dart_syringe.p3d";
		lootCategory = "Crafted";
		spawnPileType = "Ammo_DartSyringe";
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 1;
		audibleFire = 1;
		visibleFireTime = 3;
		cost = 1.0;
		deflecting = 20;
		caliber = 0.5;
		airFriction = -0.00215;
		typicalSpeed = 100;
		soundFly[] = {};
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		initSpeed = 30;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.9;
			Health = 35;
			Blood = 100;
			Shock = 0;
		};
	};
	class Bullet_Flare: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\projectiles\tracer_red.p3d";
		lootCategory = "Crafted";
		spawnPileType = "Ammo_Flare";
		cartridge = "-";
		visibleFire = 15;
		audibleFire = 15;
		visibleFireTime = 3;
		cost = 1.0;
		caliber = 1;
		airFriction = -0.00215;
		typicalSpeed = 180;
		initSpeed = 180;
		soundFly[] = {"dz\sounds\weapons\effects\bullet_crack_mid",9.999997e-009,1};
		supersonicCrackNear[] = {"-",1,1,150};
		supersonicCrackFar[] = {"-",1,1,250};
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		simulation = "shotIlluminating";
		simulationStep = 0.05;
		explosive = 0;
		soundHit[] = {"",0,1};
		deflecting = 90;
		timeToLive = 40;
		explosionTime = 40;
		radius = 300;
		soundEngine[] = {"dz\sounds\effects\crafting\fire\flare_1",0.099999994,1,100};
		class PointLight
		{
			color[] = {1,0.4,0.3,1.0};
			brightness = 1.0;
			radius = 100;
			dayLight = 1;
			position = "";
			hitpoint = "";
			selection = "";
			heatHazeRadius = 0.2;
			heatHazePower = 0.01;
			fireEffect = 1;
			fireEffectOctaves = 4;
			fireEffectPersistence = 0.99;
			fireEffectFract = 0.33;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0;
			Health = 10;
			Blood = 100;
			Shock = 0;
		};
	};
	class GrenadeM4: Bullet_Base
	{
		scope = 2;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundFly[] = {"dz\sounds\weapons\effects\bullet_crack_mid",9.999997e-009,1};
		model = "\dz\weapons\ammunition\rocket_rpg7_inflight.p3d";
		proxyShape = "\dz\weapons\projectiles\rocket_rpg7_inflight.p3d";
		spawnPileType = "Ammo_GrenadeM4";
		hit = 60;
		indirectHit = 28;
		indirectHitRange = 7;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		fuseDistance = 5;
		whistleDist = 4;
		soundHit[] = {"",10.0,1};
		soundEngine[] = {"",9.999998e-005,4};
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 0;
		timeToLive = 20;
		deflecting = 60;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.75;
			Health = 99;
			Blood = 100;
			Shock = 0;
		};
	};
	class Rocket_RPG7_Base: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\ammunition\rocket_rpg7_inflight.p3d";
		proxyShape = "\dz\weapons\projectiles\rocket_rpg7_inflight.p3d";
		lootCategory = "Crafted";
		cartridge = "-";
		caliber = 0.2;
		airFriction = -0.00215;
		typicalSpeed = 180;
		initSpeed = 180;
		soundFly[] = {"dz\sounds\weapons\effects\bullet_crack_mid",9.999997e-009,1};
		supersonicCrackNear[] = {"-",1,1,150};
		supersonicCrackFar[] = {"-",1,1,250};
		simulationStep = 0.05;
		soundHit[] = {"",0,1};
		soundEngine[] = {"dz\sounds\effects\crafting\fire\flare_1",0.099999994,1,100};
		explosive = 1;
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2;
		maxSpeed = 1;
		initTime = 0;
		thrustTime = 0.2;
		thrust = 2000;
		timeToLive = 20;
		explosionTime = 20;
		maneuvrability = 0;
		maxControlRange = 0;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 20;
		cost = 2000;
		deflecting = 5;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.8;
			Health = 150;
			Blood = 100;
			Shock = 0;
		};
	};
	class Rocket_RPG7_HE: Rocket_RPG7_Base
	{
		hit = 208;
		indirectHit = 20;
		indirectHitRange = 2;
		model = "\dz\weapons\ammunition\rocket_rpg7_inflight.p3d";
		spawnPileType = "Ammo_RPG7_HE";
		cost = 100;
		initTime = 0.1;
		thrust = 280;
		thrustTime = 1;
		maxSpeed = 295;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.8;
			Health = 150;
			Blood = 100;
			Shock = 0;
		};
	};
	class Rocket_RPG7_AP: Rocket_RPG7_Base
	{
		hit = 128;
		indirectHit = 80;
		indirectHitRange = 30;
		model = "\dz\weapons\ammunition\rocket_rpg7_inflight.p3d";
		spawnPileType = "Ammo_RPG7_AP";
		cost = 100;
		initTime = 0.1;
		thrust = 280;
		thrustTime = 1;
		maxSpeed = 295;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.8;
			Health = 150;
			Blood = 100;
			Shock = 0;
		};
	};
	class Rocket_LAW_Base: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\ammunition\rocket_rpg7_inflight.p3d";
		proxyShape = "\dz\weapons\projectiles\rocket_rpg7_inflight.p3d";
		lootCategory = "Crafted";
		cartridge = "-";
		caliber = 0.2;
		airFriction = -0.00215;
		typicalSpeed = 145;
		initSpeed = 145;
		soundFly[] = {"dz\sounds\weapons\effects\bullet_crack_mid",9.999997e-009,1};
		supersonicCrackNear[] = {"-",1,1,150};
		supersonicCrackFar[] = {"-",1,1,250};
		simulationStep = 0.05;
		soundHit[] = {"",0,1};
		soundEngine[] = {"dz\sounds\effects\crafting\fire\flare_1",0.099999994,1,100};
		explosive = 1;
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2;
		maxSpeed = 1;
		initTime = 0;
		thrustTime = 0.2;
		thrust = 2000;
		timeToLive = 20;
		explosionTime = 20;
		maneuvrability = 0;
		maxControlRange = 0;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 20;
		cost = 2000;
		deflecting = 5;
		explosionEffects = "VehicleExplosionEffects";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.8;
			Health = 150;
			Blood = 100;
			Shock = 0;
		};
	};
	class Rocket_LAW_HE: Rocket_LAW_Base
	{
		hit = 208;
		indirectHit = 20;
		indirectHitRange = 2;
		model = "\dz\weapons\ammunition\rocket_rpg7_inflight.p3d";
		spawnPileType = "Ammo_LAW_HE";
		cost = 100;
		initTime = 0.1;
		thrust = 280;
		thrustTime = 1;
		maxSpeed = 295;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.8;
			Health = 150;
			Blood = 100;
			Shock = 0;
		};
	};
};
class CfgVehicles
{
	class All;
	class Strategic;
	class ThingEffect;
	class FxCartridge: ThingEffect
	{
		model = "\dz\weapons\projectiles\nabojnice_556.p3d";
		displayName = "$STR_DN_FX_CARTRIDGE";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
		airRotation = 1.5;
	};
	class FxCartridge_Small: ThingEffect
	{
		model = "\dz\weapons\projectiles\nabojnice_small.p3d";
		displayName = "$STR_DN_FX_CARTRIDGE";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
		airRotation = 1.5;
	};
	class FxCartridge_9mm: FxCartridge_Small{};
	class FxCartridge_556: FxCartridge{};
	class FxCartridge_762: FxCartridge
	{
		model = "\dz\weapons\projectiles\nabojnice_762.p3d";
	};
	class FxCartridge_762x39: FxCartridge
	{
		model = "\dz\weapons\projectiles\nabojnice_762x39.p3d";
	};
	class FxCartridge_12Pellet: FxCartridge
	{
		model = "\dz\weapons\projectiles\shotgunshell_pellets.p3d";
	};
	class FxCartridge_12Slug: FxCartridge
	{
		model = "\dz\weapons\projectiles\shotgunshell_slug.p3d";
	};
	class FxCartridge_22: FxCartridge
	{
		model = "\dz\weapons\projectiles\nabojnice_22.p3d";
	};
};
//};
