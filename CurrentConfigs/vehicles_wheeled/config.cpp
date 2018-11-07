////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:42:45 2018 : 'file' last modified on Wed Aug 22 20:59:00 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\vehicles_wheeled\config.bin{
class CfgPatches
{
	class DZ_Vehicles_Wheeled
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class CarWheel: Inventory_Base
	{
		SingleUseActions[] = {548};
		simulation = "carwheel";
	};
	class CarDoor: Inventory_Base
	{
		scope = 1;
		InteractActions[] = {1043,"",1042};
		SingleUseActions[] = {548};
		class AnimationSources
		{
			class DoorsSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
		};
	};
	class Car;
	class CarScript: Car
	{
		InteractActions[] = {1035};
		rotationFlags = 64;
		storageCategory = 4;
		insideSoundCoef = 0.9;
		fuelCapacity = 50;
		brakeFluidCapacity = 1;
		oilCapacity = 4;
		coolantCapacity = 6;
		brakeFluidLeakDebit[] = {0.0,0.0};
		oilLeakDebit[] = {0.0,0.0};
		coolantLeakDebit[] = {0.0,0.0};
		brakeFluidForceCoef[] = {0.0,1.0,1.0,1.0};
		damageFromOil[] = {0.0,0.0,1.0,0.0};
		damageFromCoolant[] = {0.0,0.0,1.0,0.0};
		engineBeltSlot = "EngineBelt";
		batterySlot = "CarBattery";
		electricPowerResName = "power";
		electricConsumptionIgnition = 3001;
		electricConsumptionEngine = 0.0;
		electricConsumptionLights = 0.0;
		electricOutputEngine = 5.0;
		selectionDashboard = "light_dashboard";
		selectionLightFrontL = "lights_left";
		selectionLightFrontR = "lights_right";
		selectionShowDamage = "poskozeni";
		selectionBackLights = "light_back";
		selectionBrakeLights = "light_break";
		class Crew
		{
			class Driver
			{
				actionSel = "seat_driver";
				proxyPos = "crewDriver";
				getInPos = "pos_driver";
				getInDir = "pos_driver_dir";
				isDriver = 1;
			};
			class CoDriver
			{
				actionSel = "seat_coDriver";
				proxyPos = "crewCoDriver";
				getInPos = "pos_coDriver";
				getInDir = "pos_coDriver_dir";
			};
		};
		class SimulationModule
		{
			class Axles
			{
				class Front
				{
					isDrive = 1;
					isSteering = 1;
					forceRatio = 0.5;
					finalRatio = 4.1;
					brakeForce = 75;
					steerType = 0;
					wheelHubRadius = 0.15;
					class Steering
					{
						maxAngle = 30.0;
						increaseSpeed[] = {0,45};
						decreaseSpeed[] = {0,45};
						centeringSpeed[] = {0,90};
					};
					class Suspension
					{
						stiffness = 25.0;
						compression = 1.9;
						damping = 1.0;
						restLength = 0.2;
						compLength = 0.362;
						travelMax = 0.2;
						forceMax = 2000;
					};
					class Wheels
					{
						class Left
						{
							inventorySlot = "";
							animTurn = "turnfrontleft";
							animRotation = "wheelfrontleft";
							animDamper = "damperfrontleft";
							wheelHub = "wheel_1_1_damper_land";
						};
						class Right
						{
							inventorySlot = "";
							animTurn = "turnfrontright";
							animRotation = "wheelfrontright";
							animDamper = "damperfrontright";
							wheelHub = "wheel_2_1_damper_land";
						};
					};
				};
				class Rear
				{
					finalRatio = 4.1;
					forceRatio = 0.5;
					brakeForce = 50;
					wheelHubRadius = 0.15;
					class Suspension
					{
						stiffness = 25.0;
						compression = 1.9;
						damping = 1.0;
						restLength = 0.2;
						compLength = 0.362;
						travelMax = 0.2;
						forceMax = 2000;
					};
					class Wheels
					{
						class Left
						{
							inventorySlot = "";
							animTurn = "turnbackleft";
							animRotation = "wheelbackleft";
							animDamper = "damperbackleft";
							wheelHub = "wheel_1_2_damper_land";
						};
						class Right
						{
							inventorySlot = "";
							animTurn = "turnbacktright";
							animRotation = "wheelbackright";
							animDamper = "damperbackright";
							wheelHub = "wheel_2_2_damper_land";
						};
					};
				};
			};
		};
		attachments[] = {"CarBattery","LightBulb","SparkPlug","V3SWheel_1_1","V3SWheel_2_1"};
		engineVitalParts[] = {"SparkPlug","CarBattery"};
		electricalVitalParts[] = {"CarBattery","HeadlightH7"};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		class ViewPilot
		{
			initFov = 0.769;
			minFov = 0.4143;
			maxFov = 1.192;
			initFovEXT = 0.73;
			minFovEXT = 0.4143;
			maxFovEXT = 0.95;
			initAngleX = 0;
			minAngleX = -85;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class AnimationSources
		{
			class DoorsHood
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class DoorsTrunk
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class DoorsDriver
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class DoorsCoDriver
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class HideDestroyed_1_1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class HideDestroyed_1_2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class HideDestroyed_2_1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class HideDestroyed_2_2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class AnimHitWheel_1_1
			{
				source = "Hit";
				hitpoint = "HitWheel_1_1";
				raw = 1;
			};
			class AnimHitWheel_1_2: AnimHitWheel_1_1
			{
				hitpoint = "HitWheel_1_2";
			};
			class AnimHitWheel_2_1: AnimHitWheel_1_1
			{
				hitpoint = "HitWheel_2_1";
			};
			class AnimHitWheel_2_2: AnimHitWheel_1_1
			{
				hitpoint = "HitWheel_2_2";
			};
			class HitDoorsHood: AnimHitWheel_1_1
			{
				hitpoint = "HitDoorsHood";
			};
			class HitDoorsTrunk: AnimHitWheel_1_1
			{
				hitpoint = "HitDoorsTrunk";
			};
			class HitDoorsDrivers: AnimHitWheel_1_1
			{
				hitpoint = "HitDoorsDriver";
			};
			class HitDoorsCoDrivers: AnimHitWheel_1_1
			{
				hitpoint = "HitDoorsCoDriver";
			};
			class HitDoorsCargo: AnimHitWheel_1_1
			{
				hitpoint = "HitDoorsCargo";
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
		};
		class HitPoints
		{
			class HitGlass1
			{
				armor = 0.05;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			class HitGlass2
			{
				armor = 0.05;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			class HitGlass3
			{
				armor = 0.05;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			class HitGlass4
			{
				armor = 0.05;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			class HitLeftLight
			{
				armor = 0.05;
				material = -1;
				name = "lights_left";
				visual = "";
				passThrough = 1;
			};
			class HitRightLight
			{
				armor = 0.05;
				material = -1;
				name = "lights_right";
				visual = "";
				passThrough = 1;
			};
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "hull";
				visual = "";
				passThrough = 1;
			};
			class HitFuel
			{
				armor = 0.1;
				material = -1;
				name = "fuel_tank";
				visual = "";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 0.6;
				material = -1;
				name = "engine";
				visual = "engine";
				passThrough = 0;
			};
			class HitOil
			{
				armor = 0.4;
				material = -1;
				name = "oil";
				visual = "oil";
				passThrough = 1;
			};
			class HitCoolant
			{
				armor = 0.4;
				material = -1;
				name = "radiator";
				visual = "radiator";
				passThrough = 1;
			};
			class HitBrakes
			{
				armor = 0.4;
				material = -1;
				name = "brakes";
				visual = "breaks";
				passThrough = 1;
			};
			class HitDoorsHood
			{
				armor = 0.3;
				material = -1;
				name = "doors_hood";
				visual = "";
				passThrough = 0;
			};
			class HitDoorsTrunk
			{
				armor = 0.3;
				material = -1;
				name = "doors_trunk";
				visual = "";
				passThrough = 0;
			};
			class HitDoorsDriver
			{
				armor = 0.3;
				material = -1;
				name = "doors_driver";
				visual = "";
				passThrough = 0;
			};
			class HitDoorsCoDriver
			{
				armor = 0.3;
				material = -1;
				name = "doors_coDriver";
				visual = "";
				passThrough = 0;
			};
			class HitBattery
			{
				armor = 0.1;
				material = -1;
				name = "battery";
				visual = "";
				passThrough = 0.25;
			};
			class HitWheel_1_1
			{
				armor = 0.1;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "";
				passThrough = 0;
			};
			class HitWheel_1_2
			{
				armor = 0.1;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "";
				passThrough = 0;
			};
			class HitWheel_1_3
			{
				armor = 0.1;
				material = -1;
				name = "wheel_1_3_steering";
				visual = "";
				passThrough = 0;
			};
			class HitWheel_1_4
			{
				armor = 0.1;
				material = -1;
				name = "wheel_1_4_steering";
				visual = "";
				passThrough = 0;
			};
			class HitWheel_2_1
			{
				armor = 0.1;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "";
				passThrough = 0;
			};
			class HitWheel_2_2
			{
				armor = 0.1;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "";
				passThrough = 0;
			};
			class HitWheel_2_3
			{
				armor = 0.1;
				material = -1;
				name = "wheel_2_3_steering";
				visual = "";
				passThrough = 0;
			};
			class HitWheel_2_4
			{
				armor = 0.1;
				material = -1;
				name = "wheel_2_4_steering";
				visual = "";
				passThrough = 0;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_start";
				direction = "exhaust_end";
				effect = "ExhaustsEffect";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1.0,0.8,0.6,1.0};
				brightness = 1.0;
				radius = 50;
				angle = 120;
				angleInnerRatio = 0.25;
				dayLight = 1;
				flareAngleBias = 40.0;
				position = "light_left";
				direction = "light_left_dir";
				hitpoint = "lights_left";
				selection = "light_left";
			};
			class Right: Left
			{
				position = "light_right";
				direction = "light_right_dir";
				hitpoint = "lights_right";
				selection = "light_right";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\vehicles\wheeled\data\auta_skla.rvmat","dz\vehicles\wheeled\data\auta_skla_damage.rvmat","dz\vehicles\wheeled\data\auta_skla_damage.rvmat","dz\vehicles\wheeled\data\auta_skla_in.rvmat","dz\vehicles\wheeled\data\auta_skla_in_damage.rvmat","dz\vehicles\wheeled\data\auta_skla_in_damage.rvmat"};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class DamageZones
			{
				class Engine
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"engine"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {"hull"};
				};
				class Hull
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = -1;
					};
					componentNames[] = {"hull"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				class FuelTank
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = -1;
					};
					componentNames[] = {"fuel_tank"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"hull"};
				};
			};
		};
	};
	class V3SWheel: CarWheel
	{
		scope = 2;
		displayName = "$STR_V3SWheel0";
		model = "\DZ\vehicles\wheeled\V3S\proxy\v3s_wheel.p3d";
		weight = 30000;
		itemSize[] = {7,7};
		inventorySlot[] = {"V3SWheel_1_1","V3SWheel_2_1","V3SWheel_Spare_1","V3SWheel_Spare_2"};
		rotationFlags = 12;
		physLayer = "item_large";
		radiusByDamage[] = {0,0.465,0.3,0.38,0.9998,0.35,0.9999,0.28};
		radius = 0.465;
		friction = 0.99;
		width = 0.2;
	};
	class V3SWheel_Ruined: CarWheel
	{
		scope = 2;
		displayName = "$STR_V3SWheel_Ruined0";
		model = "\DZ\vehicles\wheeled\V3S\proxy\v3s_wheel_new_burst.p3d";
		itemSize[] = {6,6};
		weight = 25000;
		physLayer = "item_large";
		inventorySlot[] = {"V3SWheel_1_1","V3SWheel_2_1","V3SWheel_Spare_1","V3SWheel_Spare_2"};
		rotationFlags = 12;
		radius = 0.465;
		friction = -1;
		width = 0.2;
	};
	class V3SWheelDouble: V3SWheel
	{
		displayName = "$STR_V3SWheelDouble0";
		model = "\DZ\vehicles\wheeled\V3S\proxy\v3s_wheel_double.p3d";
		inventorySlot[] = {"V3SWheel_1_2","V3SWheel_1_3","V3SWheel_2_2","V3SWheel_2_3"};
		width = 0.4;
	};
	class V3SWheelDouble_Ruined: V3SWheel_Ruined
	{
		displayName = "$STR_V3SWheelDouble_Ruined0";
		model = "\DZ\vehicles\wheeled\V3S\proxy\v3s_wheel_burst_double.p3d";
		inventorySlot[] = {"V3SWheel_1_2","V3SWheel_1_3","V3SWheel_2_2","V3SWheel_2_3"};
		width = 0.4;
	};
	class V3SDoors_Driver: CarDoor
	{
		scope = 2;
		displayName = "$STR_V3SDoors_Driver0";
		model = "\DZ\vehicles\wheeled\V3S\proxy\v3s_doors_Driver.p3d";
		weight = 15000;
		itemSize[] = {10,8};
		inventorySlot = "V3SDriverDoors";
		rotationFlags = 8;
		physLayer = "item_large";
		hiddenSelections[] = {"camo_Door"};
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_door_co.paa"};
	};
	class V3SDoors_CoDriver: V3SDoors_Driver
	{
		displayName = "$STR_V3SDoors_CoDriver0";
		model = "\DZ\vehicles\wheeled\V3S\proxy\v3s_doors_coDriver.p3d";
		inventorySlot = "V3SCoDriverDoors";
		rotationFlags = 4;
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_door_co.paa"};
	};
	class V3SDoors_Driver_Orange: V3SDoors_Driver
	{
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_door_orange_co.paa"};
	};
	class V3SDoors_CoDriver_Orange: V3SDoors_CoDriver
	{
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_door_orange_co.paa"};
	};
	class V3SDoors_Driver_Blue: V3SDoors_Driver
	{
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_door_blue_co.paa"};
	};
	class V3SDoors_CoDriver_Blue: V3SDoors_CoDriver
	{
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_door_blue_co.paa"};
	};
	class V3SDoors_Driver_Grey: V3SDoors_Driver
	{
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_door_grey_co.paa"};
	};
	class V3SDoors_CoDriver_Grey: V3SDoors_CoDriver
	{
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_door_grey_co.paa"};
	};
	class V3SHood: CarDoor
	{
		scope = 2;
		displayName = "$STR_V3SHood0";
		model = "\DZ\vehicles\wheeled\V3S\proxy\v3s_hood.p3d";
		weight = 15000;
		itemSize[] = {12,10};
		inventorySlot = "V3SHood";
		rotationFlags = 2;
		physLayer = "item_large";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_hood_green_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\vehicles\wheeled\V3S\data\v3s_hood_green.rvmat","DZ\vehicles\wheeled\V3S\data\v3s_hood_green_damage.rvmat","DZ\vehicles\wheeled\V3S\data\v3s_hood_green_destruct.rvmat"};
		};
	};
	class V3SHood_Orange: V3SHood
	{
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_hood_orange_co.paa"};
	};
	class V3SHood_Blue: V3SHood
	{
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_hood_Blue_co.paa"};
	};
	class V3SHood_Grey: V3SHood
	{
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_hood_Grey_co.paa"};
	};
	class V3S_Chassis: CarScript
	{
		scope = 2;
		displayName = "V3S Chassis";
		model = "\dz\vehicles\wheeled\V3S\V3S_chassis.p3d";
		InteractActions[] = {1047,"",1048,"",1035};
		attachments[] = {"TruckBattery","LightBulb","EngineBelt","V3SDriverDoors","V3SCoDriverDoors","V3SHood","V3SWheel_1_1","V3SWheel_1_2","V3SWheel_1_3","V3SWheel_2_1","V3SWheel_2_2","V3SWheel_2_3","V3SWheel_Spare_1","V3SWheel_Spare_2"};
		extCameraPosition[] = {0,1.5,-8.5};
		dashboardMatOn = "dz\vehicles\wheeled\v3s\data\v3s_dashboard_light.rvmat";
		dashboardMatOff = "dz\vehicles\wheeled\v3s\data\v3s_dashboard.rvmat";
		frontReflectorMatOn = "dz\vehicles\wheeled\v3s\data\v3s_cab_lights.rvmat";
		frontReflectorMatOff = "dz\vehicles\wheeled\v3s\data\v3s_cab_chrome.rvmat";
		frontReflectorMatDamaged = "dz\vehicles\wheeled\v3s\data\v3s_cab_damage.rvmat";
		frontReflectorMatRuined = "dz\vehicles\wheeled\v3s\data\v3s_cab_destruct.rvmat";
		fuelCapacity = 120;
		fuelConsumption = 20;
		class SimulationModule: SimulationModule
		{
			class Throttle
			{
				reactionTime = 1.0;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 3.0;
				gentleCoef = 0.5;
			};
			class Engine
			{
				torqueMax = 144;
				torqueRpm = 1900;
				rpmMin = 800;
				rpmMax = 2200;
			};
			class Gearbox
			{
				reverse = 6.28;
				ratios[] = {6.19,3.13,1.75,1.0};
				timeToUncoupleClutch = 0.4;
				timeToCoupleClutch = 0.1;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					forceRatio = 0.2;
					finalRatio = 2.15;
					brakeForce = 90;
					wheelHubRadius = 0.2;
					class Steering: Steering
					{
						maxAngle = 35.0;
						increaseSpeed[] = {0,35,50,5};
						decreaseSpeed[] = {0,70};
						centeringSpeed[] = {0.5,5,15.0,20,45.0,40};
					};
					class Suspension: Suspension
					{
						stiffness = 22.0;
						compression = 2.2;
						damping = 1.1;
						restLength = 0.5;
						compLength = 0.465;
						travelMax = 0.4;
						forceMax = 6500;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "V3SWheel_1_1";
						};
						class Right: Right
						{
							inventorySlot = "V3SWheel_2_1";
						};
					};
				};
				class Middle: Rear
				{
					finalRatio = 2.14;
					isDrive = 1;
					class Suspension: Suspension
					{
						stiffness = 20.0;
						compression = 2.8;
						damping = 1.2;
						restLength = 0.5;
						compLength = 0.465;
						travelMax = 0.4;
						forceMax = 6500;
					};
					class Wheels: Wheels
					{
						class Left
						{
							inventorySlot = "V3SWheel_1_3";
							animTurn = "turnmiddleleft";
							animRotation = "wheelmiddleleft";
							animDamper = "dampermiddleleft";
							wheelHub = "wheel_1_3_damper_land";
						};
						class Right
						{
							inventorySlot = "V3SWheel_2_3";
							animTurn = "turnmiddletright";
							animRotation = "wheelmiddleright";
							animDamper = "dampermiddleright";
							wheelHub = "wheel_2_3_damper_land";
						};
					};
				};
				class Rear: Rear
				{
					finalRatio = 3.9;
					isDrive = 1;
					class Suspension: Suspension
					{
						stiffness = 20.0;
						compression = 2.8;
						damping = 1.2;
						restLength = 0.5;
						compLength = 0.465;
						travelMax = 0.4;
						forceMax = 6500;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "V3SWheel_1_2";
						};
						class Right: Right
						{
							inventorySlot = "V3SWheel_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {7,8};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class AnimationSources: AnimationSources
		{
			class AnimHitWheel_1_1;
			class AnimHitWheel_1_3: AnimHitWheel_1_1
			{
				hitpoint = "HitWheel_1_3";
			};
			class AnimHitWheel_2_3: AnimHitWheel_1_1
			{
				hitpoint = "HitWheel_2_3";
			};
			class HideDestroyed_1_3
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class HideDestroyed_2_3
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class WheelSidePlate1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.3;
			};
			class WheelSidePlate2: WheelSidePlate1{};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\vehicles\wheeled\v3s\data\v3s_glass.rvmat","dz\vehicles\wheeled\data\auta_skla_damage.rvmat","dz\vehicles\wheeled\data\auta_skla_damage.rvmat"};
		};
		class Sounds
		{
			soundSetsInt[] = {"Truck_01_Engine_RPM0_INT_SoundSet","Truck_01_Engine_RPM1_INT_SoundSet","Truck_01_Engine_RPM2_INT_SoundSet","Truck_01_Engine_RPM3_INT_SoundSet","Truck_01_Engine_RPM4_INT_SoundSet","Truck_01_Tires_Rock_Fast_INT_SoundSet","Truck_01_Tires_Grass_Fast_INT_SoundSet","Truck_01_Tires_Sand_Fast_INT_SoundSet","Truck_01_Tires_Gravel_Fast_INT_SoundSet","Truck_01_Tires_Mud_Fast_INT_SoundSet","Truck_01_Tires_Asphalt_Fast_INT_SoundSet","Truck_01_Tires_Water_Fast_INT_SoundSet","Truck_01_Tires_Rock_Slow_INT_SoundSet","Truck_01_Tires_Grass_Slow_INT_SoundSet","Truck_01_Tires_Sand_Slow_INT_SoundSet","Truck_01_Tires_Gravel_Slow_INT_SoundSet","Truck_01_Tires_Mud_Slow_INT_SoundSet","Truck_01_Tires_Asphalt_Slow_INT_SoundSet","Truck_01_Tires_Water_Slow_INT_SoundSet","Truck_01_Tires_Turn_Hard_INT_SoundSet","Truck_01_Tires_Turn_Soft_INT_SoundSet","Truck_01_Tires_Brake_Hard_INT_SoundSet","Truck_01_Tires_Brake_Soft_INT_SoundSet"};
			soundSetsExt[] = {"Truck_01_Engine_RPM0_EXT_SoundSet","Truck_01_Engine_RPM1_EXT_SoundSet","Truck_01_Engine_RPM2_EXT_SoundSet","Truck_01_Engine_RPM3_EXT_SoundSet","Truck_01_Engine_RPM4_EXT_SoundSet","Truck_01_Tires_Rock_Fast_EXT_SoundSet","Truck_01_Tires_Grass_Fast_EXT_SoundSet","Truck_01_Tires_Sand_Fast_EXT_SoundSet","Truck_01_Tires_Gravel_Fast_EXT_SoundSet","Truck_01_Tires_Mud_Fast_EXT_SoundSet","Truck_01_Tires_Asphalt_Fast_EXT_SoundSet","Truck_01_Tires_Water_Fast_EXT_SoundSet","Truck_01_Tires_Rock_Slow_EXT_SoundSet","Truck_01_Tires_Grass_Slow_EXT_SoundSet","Truck_01_Tires_Sand_Slow_EXT_SoundSet","Truck_01_Tires_Gravel_Slow_EXT_SoundSet","Truck_01_Tires_Mud_Slow_EXT_SoundSet","Truck_01_Tires_Asphalt_Slow_EXT_SoundSet","Truck_01_Tires_Water_Slow_EXT_SoundSet","Truck_01_Tires_Turn_Hard_EXT_SoundSet","Truck_01_Tires_Turn_Soft_EXT_SoundSet","Truck_01_Tires_Brake_Hard_EXT_SoundSet","Truck_01_Tires_Brake_Soft_EXT_SoundSet"};
		};
		class ObstacleGenerator
		{
			carve = 1;
			timeToStationary = 5.0;
			moveThreshold = 0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,1.5};
					};
					class Cyl2
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,0};
					};
					class Cyl3
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,-1.5};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name = "Engine";
				description = "";
				attachmentSlots[] = {"TruckBattery","EngineBelt"};
				icon = "missing";
			};
			class Body
			{
				name = "Body";
				description = "";
				attachmentSlots[] = {"LightBulb","V3SDriverDoors","V3SCoDriverDoors","V3SHood"};
				icon = "missing";
			};
			class Chassis
			{
				name = "Chassis";
				description = "";
				attachmentSlots[] = {"V3SWheel_1_1","V3SWheel_1_2","V3SWheel_1_3","V3SWheel_2_1","V3SWheel_2_2","V3SWheel_2_3","V3SWheel_Spare_1","V3SWheel_Spare_2"};
				icon = "missing";
			};
		};
	};
	class V3S_Chassis_Blue: V3S_Chassis
	{
		scope = 2;
		displayName = "V3S Chassis Blue";
		randomAttachments[] = {{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"TruckBattery"},{"HeadlightH7"},{"V3SHood_Blue"},{"V3SDoors_Driver_Blue"},{"V3SDoors_CoDriver_Blue"}};
		hiddenSelections[] = {"hood","cabin","doors_Driver","doors_coDriver"};
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_hood_blue_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_cab_blue_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_blue_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_blue_CO.paa"};
	};
	class V3S_Chassis_Orange: V3S_Chassis
	{
		scope = 2;
		displayName = "V3S Chassis Orange";
		randomAttachments[] = {{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"TruckBattery"},{"HeadlightH7"},{"V3SHood_Orange"},{"V3SDoors_Driver_Orange"},{"V3SDoors_CoDriver_Orange"}};
		hiddenSelections[] = {"spare_wheels","hood","cabin","doors_Driver","doors_coDriver"};
		hiddenSelectionsTextures[] = {"","\dz\vehicles\wheeled\V3S\data\v3s_hood_orange_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_cab_orange_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_orange_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_orange_CO.paa"};
	};
	class V3S_Chassis_Grey: V3S_Chassis
	{
		scope = 2;
		displayName = "V3S Chassis Grey";
		randomAttachments[] = {{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"TruckBattery"},{"HeadlightH7"},{"V3SHood_Grey"},{"V3SDoors_Driver_Grey"},{"V3SDoors_CoDriver_Grey"}};
		hiddenSelections[] = {"hood","cabin","doors_Driver","doors_coDriver"};
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_hood_grey_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_cab_grey_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_grey_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_grey_CO.paa"};
	};
	class V3S_Cargo: V3S_Chassis
	{
		displayName = "V3S Cargo";
		model = "\dz\vehicles\wheeled\V3S\V3S_cargo.p3d";
		transportSoldier = 9;
		class Cargo
		{
			itemsCargoSize[] = {7,20};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class AnimationSources: AnimationSources
		{
			class DoorsTrunk
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.3;
			};
			class WheelSidePlate1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.3;
			};
			class WheelSidePlate2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.3;
			};
		};
	};
	class V3S_Cargo_Blue: V3S_Cargo
	{
		scope = 2;
		displayName = "V3S Cargo Blue";
		randomAttachments[] = {{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"TruckBattery"},{"HeadlightH7"},{"V3SHood_Blue"},{"V3SDoors_Driver_Blue"},{"V3SDoors_CoDriver_Blue"}};
		hiddenSelections[] = {"hood","cabin","doors_Driver","doors_coDriver"};
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_hood_blue_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_cab_blue_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_blue_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_blue_CO.paa"};
	};
	class V3S_Cargo_Orange: V3S_Cargo
	{
		scope = 2;
		displayName = "V3S Cargo Orange";
		randomAttachments[] = {{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"TruckBattery"},{"HeadlightH7"},{"V3SHood_Orange"},{"V3SDoors_Driver_Orange"},{"V3SDoors_CoDriver_Orange"}};
		hiddenSelections[] = {"hood","cabin","doors_Driver","doors_coDriver"};
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_hood_orange_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_cab_orange_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_orange_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_orange_CO.paa"};
	};
	class V3S_Cargo_Grey: V3S_Cargo
	{
		scope = 2;
		displayName = "V3S Cargo Grey";
		randomAttachments[] = {{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheel"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"V3SWheelDouble"},{"TruckBattery"},{"HeadlightH7"},{"V3SHood_Grey"},{"V3SDoors_Driver_Grey"},{"V3SDoors_CoDriver_Grey"}};
		hiddenSelections[] = {"hood","cabin","doors_Driver","doors_coDriver"};
		hiddenSelectionsTextures[] = {"\dz\vehicles\wheeled\V3S\data\v3s_hood_grey_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_cab_grey_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_grey_CO.paa","\dz\vehicles\wheeled\V3S\data\v3s_door_grey_CO.paa"};
	};
	class TransitBusWheel: CarWheel
	{
		scope = 2;
		model = "\DZ\vehicles\wheeled\TransitBus\proxy\ikarusWheel.p3d";
		displayName = "$STR_TransitBusWheel0";
		itemSize[] = {6,6};
		weight = 25000;
		physLayer = "item_large";
		rotationFlags = 12;
		inventorySlot[] = {"BusWheel_1_1","BusWheel_2_1"};
		simulation = "carwheel";
		radiusByDamage[] = {0,0.51,0.3,0.45,0.9998,0.38,0.9999,0.3};
		radius = 0.51;
		friction = 0.999;
		width = 0.213;
	};
	class TransitBusWheel_Ruined: CarWheel
	{
		scope = 2;
		model = "\DZ\vehicles\wheeled\TransitBus\proxy\ikarusWheel_destroyed.p3d";
		displayName = "$STR_TransitBusWheel_Ruined0";
		itemSize[] = {6,6};
		weight = 25000;
		physLayer = "item_large";
		rotationFlags = 12;
		inventorySlot[] = {"BusWheel_1_1","BusWheel_2_1"};
		simulation = "carwheel";
		radius = 0.3;
		friction = -1.0;
		width = 0.213;
	};
	class TransitBusWheelDouble: TransitBusWheel
	{
		model = "\DZ\vehicles\wheeled\TransitBus\proxy\ikarusWheel_rear.p3d";
		displayName = "$STR_TransitBusWheelDouble0";
		width = 0.426;
		inventorySlot[] = {"BusWheel_1_2","BusWheel_2_2"};
	};
	class TransitBusWheelDouble_Ruined: TransitBusWheel_Ruined
	{
		model = "\DZ\vehicles\wheeled\TransitBus\proxy\ikarusWheel_rear_destroyed.p3d";
		displayName = "$STR_TransitBusWheelDouble_Ruined0";
		width = 0.426;
		inventorySlot[] = {"BusWheel_1_2","BusWheel_2_2"};
	};
	class BusDoors_Left: Inventory_Base
	{
		scope = 2;
		model = "\DZ\vehicles\wheeled\TransitBus\proxy\IkarusDoors_Left.p3d";
		displayName = "$STR_BusDoors_Left0";
		itemSize[] = {8,12};
		weight = 15000;
		physLayer = "item_large";
		inventorySlot[] = {"BusLeftDoors_1","BusLeftDoors_2","BusLeftDoors_3"};
		rotationFlags = 4;
	};
	class BusDoors_Right: BusDoors_Left
	{
		model = "\DZ\vehicles\wheeled\TransitBus\proxy\IkarusDoors_Right.p3d";
		displayName = "$STR_BusDoors_Right0";
		rotationFlags = 8;
		inventorySlot[] = {"BusRightDoors_1","BusRightDoors_2","BusRightDoors_3"};
	};
	class BusHood: Inventory_Base
	{
		scope = 2;
		model = "\DZ\vehicles\wheeled\TransitBus\proxy\ikarusHood.p3d";
		displayName = "$STR_BusHood0";
		itemSize[] = {8,8};
		weight = 15000;
		physLayer = "item_large";
		inventorySlot = "BusHood";
		rotationFlags = 8;
	};
	class TransitBus: CarScript
	{
		scope = 2;
		displayName = "$STR_TransitBus0";
		model = "\dz\vehicles\wheeled\TransitBus\TransitBus.p3d";
		dashboardMatOn = "dz\vehicles\wheeled\transitbus\data\ikarus_dashboarde.rvmat";
		dashboardMatOff = "dz\vehicles\wheeled\transitbus\data\ikarus_dashboard.rvmat";
		frontReflectorMatOn = "dz\vehicles\wheeled\transitbus\data\ikarus_ext_details_lights.rvmat";
		frontReflectorMatOff = "dz\vehicles\wheeled\transitbus\data\ikarus_ext_details_cr.rvmat";
		frontReflectorMatDamaged = "dz\vehicles\wheeled\transitbus\data\ikarus_ext_details_damage.rvmat";
		frontReflectorMatRuined = "dz\vehicles\wheeled\transitbus\data\ikarus_ext_details_destruct.rvmat";
		fuelCapacity = 180;
		fuelConsumption = 25;
		attachments[] = {"TruckBattery","TruckRadiator","LightBulb","EngineBelt","GlowPlug","BusLeftDoors_1","BusLeftDoors_2","BusLeftDoors_3","BusRightDoors_1","BusRightDoors_2","BusRightDoors_3","BusHood","BusWheel_1_1","BusWheel_1_2","BusWheel_2_1","BusWheel_2_2"};
		class SimulationModule: SimulationModule
		{
			class Throttle
			{
				reactionTime = 1.0;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 3.0;
				gentleCoef = 0.5;
			};
			class Engine
			{
				torqueMax = 114;
				torqueRpm = 1700;
				rpmMin = 800;
				rpmMax = 2500;
			};
			class Gearbox
			{
				reverse = -39.44;
				ratios[] = {38.87,19.66,10.99,6.28};
				timeToUncoupleClutch = 0.5;
				timeToCoupleClutch = 0.4;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					finalRatio = 1.0;
					brakeForce = 60;
					class Steering: Steering
					{
						maxAngle = 55.0;
						increaseSpeed[] = {0,45,50,5};
						decreaseSpeed[] = {0,70};
						centeringSpeed[] = {0.5,0,5.0,20,25.0,70};
					};
					class Suspension: Suspension
					{
						stiffness = 39.0;
						compression = 1.5;
						damping = 0.95;
						restLength = 0.16;
						compLength = 0.51;
						travelMax = 0.1;
						forceMax = 6000;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "BusWheel_1_1";
						};
						class Right: Right
						{
							inventorySlot = "BusWheel_2_1";
						};
					};
				};
				class Rear: Rear
				{
					brakeForce = 140;
					class Suspension: Suspension
					{
						stiffness = 39.0;
						compression = 1.5;
						damping = 0.95;
						restLength = 0.16;
						compLength = 0.51;
						travelMax = 0.1;
						forceMax = 6000;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "BusWheel_1_2";
						};
						class Right: Right
						{
							inventorySlot = "BusWheel_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {7,15};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class HitPoints: HitPoints
		{
			class HitDoorsMiddle
			{
				armor = 0.2;
				material = -1;
				name = "doors_Middle";
				visual = "";
				passThrough = 0.0;
			};
			class HitDoorsRear
			{
				armor = 0.2;
				material = -1;
				name = "doors_Rear";
				visual = "";
				passThrough = 0.0;
			};
			class HitGlass5
			{
				armor = 0.05;
				material = -1;
				name = "glass5";
				visual = "glass4";
				passThrough = 0;
			};
			class HitGlass6
			{
				armor = 0.05;
				material = -1;
				name = "glass6";
				visual = "glass4";
				passThrough = 0;
			};
		};
		class AnimationSources: AnimationSources
		{
			class DoorsHood: DoorsDriver
			{
				animPeriod = 0.8;
				initPhase = 1;
			};
			class Doors_Front: DoorsDriver
			{
				animPeriod = 0.8;
			};
			class HitGlass5
			{
				source = "Hit";
				raw = 1;
				hitpoint = "HitGlass5";
			};
			class HitGlass6
			{
				source = "Hit";
				raw = 1;
				hitpoint = "HitGlass6";
			};
			class Doors_Middle: Doors_Front{};
			class Doors_Rear: Doors_Front{};
		};
		class Sounds
		{
			soundSetsInt[] = {"Truck_01_Engine_RPM0_INT_SoundSet","Truck_01_Engine_RPM1_INT_SoundSet","Truck_01_Engine_RPM2_INT_SoundSet","Truck_01_Engine_RPM3_INT_SoundSet","Truck_01_Engine_RPM4_INT_SoundSet","Truck_01_Tires_Rock_Fast_INT_SoundSet","Truck_01_Tires_Grass_Fast_INT_SoundSet","Truck_01_Tires_Sand_Fast_INT_SoundSet","Truck_01_Tires_Gravel_Fast_INT_SoundSet","Truck_01_Tires_Mud_Fast_INT_SoundSet","Truck_01_Tires_Asphalt_Fast_INT_SoundSet","Truck_01_Tires_Water_Fast_INT_SoundSet","Truck_01_Tires_Rock_Slow_INT_SoundSet","Truck_01_Tires_Grass_Slow_INT_SoundSet","Truck_01_Tires_Sand_Slow_INT_SoundSet","Truck_01_Tires_Gravel_Slow_INT_SoundSet","Truck_01_Tires_Mud_Slow_INT_SoundSet","Truck_01_Tires_Asphalt_Slow_INT_SoundSet","Truck_01_Tires_Water_Slow_INT_SoundSet","Truck_01_Tires_Turn_Hard_INT_SoundSet","Truck_01_Tires_Turn_Soft_INT_SoundSet","Truck_01_Tires_Brake_Hard_INT_SoundSet","Truck_01_Tires_Brake_Soft_INT_SoundSet"};
			soundSetsExt[] = {"Truck_01_Engine_RPM0_EXT_SoundSet","Truck_01_Engine_RPM1_EXT_SoundSet","Truck_01_Engine_RPM2_EXT_SoundSet","Truck_01_Engine_RPM3_EXT_SoundSet","Truck_01_Engine_RPM4_EXT_SoundSet","Truck_01_Tires_Rock_Fast_EXT_SoundSet","Truck_01_Tires_Grass_Fast_EXT_SoundSet","Truck_01_Tires_Sand_Fast_EXT_SoundSet","Truck_01_Tires_Gravel_Fast_EXT_SoundSet","Truck_01_Tires_Mud_Fast_EXT_SoundSet","Truck_01_Tires_Asphalt_Fast_EXT_SoundSet","Truck_01_Tires_Water_Fast_EXT_SoundSet","Truck_01_Tires_Rock_Slow_EXT_SoundSet","Truck_01_Tires_Grass_Slow_EXT_SoundSet","Truck_01_Tires_Sand_Slow_EXT_SoundSet","Truck_01_Tires_Gravel_Slow_EXT_SoundSet","Truck_01_Tires_Mud_Slow_EXT_SoundSet","Truck_01_Tires_Asphalt_Slow_EXT_SoundSet","Truck_01_Tires_Water_Slow_EXT_SoundSet","Truck_01_Tires_Turn_Hard_EXT_SoundSet","Truck_01_Tires_Turn_Soft_EXT_SoundSet","Truck_01_Tires_Brake_Hard_EXT_SoundSet","Truck_01_Tires_Brake_Soft_EXT_SoundSet"};
		};
		class ObstacleGenerator
		{
			carve = 1;
			timeToStationary = 5.0;
			moveThreshold = 0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius = 1.2;
						height = 1.5;
						center[] = {0,0,1.7};
					};
					class Cyl2
					{
						radius = 1.2;
						height = 1.5;
						center[] = {0,0,0};
					};
					class Cyl3
					{
						radius = 1.2;
						height = 1.5;
						center[] = {0,0,-1.7};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name = "Engine";
				description = "";
				attachmentSlots[] = {"TruckBattery","TruckRadiator","EngineBelt","GlowPlug"};
				icon = "missing";
			};
			class Body
			{
				name = "Body";
				description = "";
				attachmentSlots[] = {"LightBulb","BusLeftDoors_1","BusLeftDoors_2","BusLeftDoors_3","BusRightDoors_1","BusRightDoors_2","BusRightDoors_3","BusHood"};
				icon = "missing";
			};
			class Chassis
			{
				name = "Chassis";
				description = "";
				attachmentSlots[] = {"BusWheel_1_1","BusWheel_1_2","BusWheel_2_1","BusWheel_2_2"};
				icon = "missing";
			};
		};
	};
	class CivSedanWheel: CarWheel
	{
		scope = 2;
		displayName = "$STR_CivSedanWheel0";
		model = "\DZ\vehicles\wheeled\civiliansedan\proxy\sedanwheel.p3d";
		weight = 12000;
		itemSize[] = {6,6};
		inventorySlot[] = {"CivSedanWheel_1_1","CivSedanWheel_1_2","CivSedanWheel_2_1","CivSedanWheel_2_2"};
		rotationFlags = 4;
		physLayer = "item_large";
		radiusByDamage[] = {0,0.34,0.3,0.3,0.9998,0.25,0.9999,0.2};
		radius = 0.34;
		friction = 0.96;
		width = 0.16;
	};
	class CivSedanWheel_Ruined: CarWheel
	{
		scope = 2;
		displayName = "$STR_CivSedanWheel_Ruined0";
		model = "\DZ\vehicles\wheeled\civiliansedan\proxy\sedanwheel_destroyed.p3d";
		weight = 12000;
		itemSize[] = {6,6};
		inventorySlot[] = {"CivSedanWheel_1_1","CivSedanWheel_1_2","CivSedanWheel_2_1","CivSedanWheel_2_2"};
		rotationFlags = 4;
		physLayer = "item_large";
		radius = 0.15;
		friction = -1.0;
		width = 0.2;
	};
	class CivSedanDoors_Driver: CarDoor
	{
		scope = 2;
		displayName = "$STR_CivSedanDoors_Driver0";
		model = "\DZ\vehicles\wheeled\civilianSedan\proxy\sedanDoors_Driver.p3d";
		weight = 15000;
		itemSize[] = {10,8};
		inventorySlot = "CivSedanDriverDoors";
		rotationFlags = 8;
		physLayer = "item_large";
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\vehicles\wheeled\civiliansedan\data\civiliansedan.rvmat","dz\vehicles\wheeled\civiliansedan\data\civiliansedan_damage.rvmat","dz\vehicles\wheeled\civiliansedan\data\civiliansedan_destruct.rvmat","dz\vehicles\wheeled\civiliansedan\data\glass.rvmat","dz\vehicles\wheeled\data\auta_skla_damage.rvmat","dz\vehicles\wheeled\data\auta_skla_damage.rvmat"};
		};
	};
	class CivSedanDoors_CoDriver: CivSedanDoors_Driver
	{
		displayName = "$STR_CivSedanDoors_CoDriver0";
		model = "\DZ\vehicles\wheeled\civilianSedan\proxy\sedanDoors_coDriver.p3d";
		inventorySlot = "CivSedanCoDriverDoors";
		rotationFlags = 4;
	};
	class CivSedanDoors_BackLeft: CivSedanDoors_Driver
	{
		displayName = "$STR_CivSedanDoors_BackLeft0";
		model = "\DZ\vehicles\wheeled\civilianSedan\proxy\sedanDoors_cargo1.p3d";
		inventorySlot = "CivSedanCargo1Doors";
	};
	class CivSedanDoors_BackRight: CivSedanDoors_Driver
	{
		displayName = "$STR_CivSedanDoors_BackRight0";
		model = "\DZ\vehicles\wheeled\civilianSedan\proxy\sedanDoors_cargo2.p3d";
		inventorySlot = "CivSedanCargo2Doors";
		rotationFlags = 4;
	};
	class CivSedanHood: CarDoor
	{
		scope = 2;
		displayName = "$STR_CivSedanHood0";
		model = "\DZ\vehicles\wheeled\civilianSedan\proxy\sedanhood.p3d";
		weight = 15000;
		itemSize[] = {12,10};
		inventorySlot = "CivSedanHood";
		rotationFlags = 4;
		physLayer = "item_large";
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\vehicles\wheeled\civiliansedan\data\civiliansedan.rvmat","DZ\vehicles\wheeled\civiliansedan\data\civiliansedan_damage.rvmat","DZ\vehicles\wheeled\civiliansedan\data\civiliansedan_destruct.rvmat"};
		};
	};
	class CivSedanTrunk: CarDoor
	{
		scope = 2;
		displayName = "$STR_CivSedanTrunk0";
		model = "\DZ\vehicles\wheeled\civilianSedan\proxy\sedanTrunk.p3d";
		weight = 15000;
		itemSize[] = {12,10};
		inventorySlot = "CivSedanTrunk";
		rotationFlags = 4;
		physLayer = "item_large";
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\vehicles\wheeled\civiliansedan\data\civiliansedan.rvmat","DZ\vehicles\wheeled\civiliansedan\data\civiliansedan_damage.rvmat","DZ\vehicles\wheeled\civiliansedan\data\civiliansedan_destruct.rvmat"};
		};
	};
	class CivilianSedan: CarScript
	{
		scope = 2;
		displayName = "$STR_CivilianSedan0";
		model = "\DZ\vehicles\wheeled\civiliansedan\CivilianSedan.p3d";
		attachments[] = {"CarBattery","CarRadiator","LightBulb","EngineBelt","SparkPlug","CivSedanHood","CivSedanTrunk","CivSedanDriverDoors","CivSedanCoDriverDoors","CivSedanCargo1Doors","CivSedanCargo2Doors","CivSedanWheel_1_1","CivSedanWheel_1_2","CivSedanWheel_2_1","CivSedanWheel_2_2"};
		dashboardMatOn = "dz\vehicles\wheeled\civiliansedan\data\civiliansedan_int2e_.rvmat";
		dashboardMatOff = "dz\vehicles\wheeled\civiliansedan\data\civiliansedan_int2e_off.rvmat";
		frontReflectorMatOn = "dz\vehicles\wheeled\civiliansedan\data\civiliansedan_lights.rvmat";
		frontReflectorMatOff = "dz\vehicles\wheeled\civiliansedan\data\civiliansedan_cr.rvmat";
		frontReflectorMatDamaged = "dz\vehicles\wheeled\civiliansedan\data\civiliansedan_damage.rvmat";
		frontReflectorMatRuined = "dz\vehicles\wheeled\civiliansedan\data\civiliansedan_destruct.rvmat";
		fuelCapacity = 55;
		fuelConsumption = 15;
		class Crew: Crew
		{
			class Driver: Driver{};
			class CoDriver: CoDriver{};
			class Cargo1
			{
				actionSel = "seat_cargo1";
				proxyPos = "crewCargo1";
				getInPos = "pos_cargo1";
				getInDir = "pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel = "seat_cargo2";
				proxyPos = "crewCargo2";
				getInPos = "pos_cargo2";
				getInDir = "pos_cargo2_dir";
			};
		};
		class SimulationModule: SimulationModule
		{
			class Throttle
			{
				reactionTime = 1.0;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 3.0;
				gentleCoef = 0.5;
			};
			class Engine
			{
				torqueMax = 186;
				torqueRpm = 3800;
				rpmMin = 800;
				rpmMax = 4500;
			};
			class Gearbox
			{
				reverse = 3.54;
				ratios[] = {3.5,2.26,1.45,1.0};
				timeToUncoupleClutch = 0.2;
				timeToCoupleClutch = 0.1;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					forceRatio = 0.05;
					finalRatio = 1.0;
					brakeForce = 90;
					class Steering: Steering
					{
						increaseSpeed[] = {0,45,30,30,60,20,120,5};
						decreaseSpeed[] = {0,45,60,20,120,8};
						centeringSpeed[] = {0,90,60,60,100,30};
					};
					class Suspension: Suspension
					{
						stiffness = 28.0;
						compression = 2.2;
						damping = 0.9;
						restLength = 0.35;
						compLength = 0.362;
						travelMax = 0.15;
						forceMax = 3000;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "CivSedanWheel_1_1";
						};
						class Right: Right
						{
							inventorySlot = "CivSedanWheel_2_1";
						};
					};
				};
				class Rear: Rear
				{
					forceRatio = 0.95;
					brakeForce = 50;
					finalRatio = 4.1;
					isDrive = 1;
					class Suspension: Suspension
					{
						stiffness = 28.0;
						compression = 2.2;
						damping = 0.9;
						restLength = 0.35;
						compLength = 0.362;
						travelMax = 0.15;
						forceMax = 3000;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "CivSedanWheel_1_2";
						};
						class Right: Right
						{
							inventorySlot = "CivSedanWheel_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {7,12};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class AnimationSources: AnimationSources
		{
			class DoorsCargo1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class DoorsCargo2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\vehicles\wheeled\civiliansedan\data\civiliansedan.rvmat","dz\vehicles\wheeled\civiliansedan\data\civiliansedan_damage.rvmat","dz\vehicles\wheeled\civiliansedan\data\civiliansedan_destruct.rvmat","dz\vehicles\wheeled\civiliansedan\data\gaz_wheel.rvmat","dz\vehicles\wheeled\civiliansedan\data\gaz_wheel_damage.rvmat","dz\vehicles\wheeled\civiliansedan\data\gaz_wheel_destruct.rvmat","dz\vehicles\wheeled\civiliansedan\data\civiliansedan_int1.rvmat","dz\vehicles\wheeled\civiliansedan\data\civiliansedan_int1_damage.rvmat","dz\vehicles\wheeled\civiliansedan\data\civiliansedan_int1_destruct.rvmat","dz\vehicles\wheeled\civiliansedan\data\civiliansedan_int2.rvmat","dz\vehicles\wheeled\civiliansedan\data\civiliansedan_int2_damage.rvmat","dz\vehicles\wheeled\civiliansedan\data\civiliansedan_int2_destruct.rvmat","dz\vehicles\wheeled\civiliansedan\data\glass.rvmat","dz\vehicles\wheeled\data\auta_skla_damage.rvmat","dz\vehicles\wheeled\data\auta_skla_damage.rvmat"};
		};
		attenuationEffectType = "CarAttenuation";
		soundGear[] = {"DZ\sounds\vehicles\gear_shift\gear_shift_1",0.5011872,1,30};
		soundGetIn[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Exit",0.4466836,1};
		soundGetOut[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Exit",0.4466836,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Int_Start",0.70794576,1};
		soundEngineOffInt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Int_Stop",0.70794576,1};
		soundEngineOnExt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Ext_Start",1.9952624,1,50};
		soundEngineOffExt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Ext_Stop",1.9952624,1,50};
		class Sounds
		{
			soundSetsInt[] = {"Hatchback_01_Engine_RPM0_INT_SoundSet","Hatchback_01_Engine_RPM1_INT_SoundSet","Hatchback_01_Engine_RPM2_INT_SoundSet","Hatchback_01_Engine_RPM3_INT_SoundSet","Hatchback_01_Engine_RPM4_INT_SoundSet","Hatchback_01_Tires_Rock_Fast_INT_SoundSet","Hatchback_01_Tires_Grass_Fast_INT_SoundSet","Hatchback_01_Tires_Sand_Fast_INT_SoundSet","Hatchback_01_Tires_Gravel_Fast_INT_SoundSet","Hatchback_01_Tires_Mud_Fast_INT_SoundSet","Hatchback_01_Tires_Asphalt_Fast_INT_SoundSet","Hatchback_01_Tires_Water_Fast_INT_SoundSet","Hatchback_01_Tires_Rock_Slow_INT_SoundSet","Hatchback_01_Tires_Grass_Slow_INT_SoundSet","Hatchback_01_Tires_Sand_Slow_INT_SoundSet","Hatchback_01_Tires_Gravel_Slow_INT_SoundSet","Hatchback_01_Tires_Mud_Slow_INT_SoundSet","Hatchback_01_Tires_Asphalt_Slow_INT_SoundSet","Hatchback_01_Tires_Water_Slow_INT_SoundSet","Hatchback_01_Tires_Turn_Hard_INT_SoundSet","Hatchback_01_Tires_Turn_Soft_INT_SoundSet","Hatchback_01_Tires_Brake_Hard_INT_SoundSet","Hatchback_01_Tires_Brake_Soft_INT_SoundSet"};
			soundSetsExt[] = {"Hatchback_01_Engine_RPM0_EXT_SoundSet","Hatchback_01_Engine_RPM1_EXT_SoundSet","Hatchback_01_Engine_RPM2_EXT_SoundSet","Hatchback_01_Engine_RPM3_EXT_SoundSet","Hatchback_01_Engine_RPM4_EXT_SoundSet","Hatchback_01_Tires_Rock_Fast_EXT_SoundSet","Hatchback_01_Tires_Grass_Fast_EXT_SoundSet","Hatchback_01_Tires_Sand_Fast_EXT_SoundSet","Hatchback_01_Tires_Gravel_Fast_EXT_SoundSet","Hatchback_01_Tires_Mud_Fast_EXT_SoundSet","Hatchback_01_Tires_Asphalt_Fast_EXT_SoundSet","Hatchback_01_Tires_Water_Fast_EXT_SoundSet","Hatchback_01_Tires_Rock_Slow_EXT_SoundSet","Hatchback_01_Tires_Grass_Slow_EXT_SoundSet","Hatchback_01_Tires_Sand_Slow_EXT_SoundSet","Hatchback_01_Tires_Gravel_Slow_EXT_SoundSet","Hatchback_01_Tires_Mud_Slow_EXT_SoundSet","Hatchback_01_Tires_Asphalt_Slow_EXT_SoundSet","Hatchback_01_Tires_Water_Slow_EXT_SoundSet","Hatchback_01_Tires_Turn_Hard_EXT_SoundSet","Hatchback_01_Tires_Turn_Soft_EXT_SoundSet","Hatchback_01_Tires_Brake_Hard_EXT_SoundSet","Hatchback_01_Tires_Brake_Soft_EXT_SoundSet"};
		};
		class ObstacleGenerator
		{
			carve = 1;
			timeToStationary = 5.0;
			moveThreshold = 0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,0.8};
					};
					class Cyl3
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,-0.8};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name = "Engine";
				description = "";
				attachmentSlots[] = {"CarBattery","EngineBelt","CarRadiator","SparkPlug"};
				icon = "missing";
			};
			class Body
			{
				name = "Body";
				description = "";
				attachmentSlots[] = {"CarRadiator","LightBulb","CivSedanHood","CivSedanTrunk","CivSedanDriverDoors","CivSedanCoDriverDoors","CivSedanCargo1Doors","CivSedanCargo2Doors"};
				icon = "missing";
			};
			class Chassis
			{
				name = "Chassis";
				description = "";
				attachmentSlots[] = {"CivSedanWheel_1_1","CivSedanWheel_1_2","CivSedanWheel_2_1","CivSedanWheel_2_2","CivSedanWheel_Spare_1"};
				icon = "missing";
			};
		};
	};
	class CivVanWheel: CarWheel
	{
		scope = 2;
		model = "\DZ\vehicles\wheeled\civilianVan\proxy\CivilianVan_wheel.p3d";
		displayName = "$STR_CivVanWheel0";
		descriptionShort = "$STR_CivVanWheel1";
		itemSize[] = {6,6};
		weight = 12000;
		physLayer = "item_large";
		rotationFlags = 4;
		inventorySlot[] = {"CivVanWheel_1_1","CivVanWheel_1_2","CivVanWheel_2_1","CivVanWheel_2_2"};
		SingleUseActions[] = {548};
		simulation = "carwheel";
		radiusByDamage[] = {0,0.34,0.3,0.3,0.9998,0.25,0.9999,0.2};
		radius = 0.34;
		friction = 0.96;
		width = 0.16;
	};
	class CivVanWheel_Ruined: CarWheel
	{
		scope = 2;
		model = "\DZ\vehicles\wheeled\civilianVan\proxy\CivilianVan_wheel_dam.p3d";
		displayName = "$STR_CivVanWheel_Ruined0";
		descriptionShort = "$STR_CivVanWheel_Ruined1";
		itemSize[] = {6,6};
		weight = 12000;
		physLayer = "item_large";
		rotationFlags = 4;
		inventorySlot[] = {"CivVanWheel_1_1","CivVanWheel_1_2","CivVanWheel_2_1","CivVanWheel_2_2"};
		simulation = "carwheel";
		radius = 0.15;
		friction = -1.0;
		width = 0.2;
	};
	class CivVanDoors_Driver: Inventory_Base
	{
		scope = 2;
		model = "\DZ\vehicles\wheeled\civilianVan\proxy\CivilianVanDoors_Driver.p3d";
		displayName = "$STR_CivVanDoors_Driver0";
		descriptionShort = "$STR_CivVanDoors_Driver1";
		itemSize[] = {10,8};
		weight = 15000;
		physLayer = "item_large";
		inventorySlot = "CivVanDriverDoors";
		rotationFlags = 2;
	};
	class CivVanDoors_CoDriver: CivVanDoors_Driver
	{
		model = "\DZ\vehicles\wheeled\civilianVan\proxy\CivilianVanDoors_CoDriver.p3d";
		displayName = "$STR_CivVanDoors_CoDriver0";
		inventorySlot = "CivVanCoDriverDoors";
		rotationFlags = 2;
	};
	class CivVanDoors_BackRight: CivVanDoors_Driver
	{
		model = "\DZ\vehicles\wheeled\civilianVan\proxy\CivilianVanDoors_Cargo1.p3d";
		displayName = "$STR_CivVanDoors_BackRight0";
		inventorySlot = "CivVanCargo1Doors";
	};
	class CivVanDoors_TrunkDown: CivVanDoors_Driver
	{
		model = "\DZ\vehicles\wheeled\civilianVan\proxy\CivilianVanDoors_Cargo2.p3d";
		displayName = "$STR_CivVanDoors_TrunkDown0";
		inventorySlot = "CivVanTrunkDown";
		rotationFlags = 2;
	};
	class CivVanDoors_TrunkUp: CivVanDoors_Driver
	{
		model = "\DZ\vehicles\wheeled\civilianVan\proxy\CivilianVanDoors_Cargo3.p3d";
		displayName = "$STR_CivVanDoors_TrunkUp0";
		inventorySlot = "CivVanTrunkUp";
		rotationFlags = 2;
	};
	class CivVanTrunk: Inventory_Base
	{
		scope = 2;
		model = "\DZ\vehicles\wheeled\civilianVan\proxy\CivilianVanDoors_Cargo3.p3d";
		displayName = "$STR_CivVanTrunk0";
		descriptionShort = "$STR_CivVanTrunk1";
		itemSize[] = {12,10};
		weight = 15000;
		physLayer = "item_large";
		inventorySlot = "CivVanTrunk";
		rotationFlags = 4;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\vehicles\wheeled\civiliansedan\data\civiliansedan.rvmat","DZ\vehicles\wheeled\civiliansedan\data\civiliansedan_damage.rvmat","DZ\vehicles\wheeled\civiliansedan\data\civiliansedan_destruct.rvmat"};
		};
	};
	class CivilianVan: CarScript
	{
		scope = 2;
		displayName = "$STR_CivilianVan0";
		model = "\dz\vehicles\wheeled\CivilianVan\CivilianVan.p3d";
		InteractActions[] = {1035,1046,"",1043};
		dashboardMatOn = "dz\vehicles\wheeled\CivilianVan\data\niva_dashboard_light.rvmat";
		dashboardMatOff = "dz\vehicles\wheeled\CivilianVan\data\niva_dashboard.rvmat";
		frontReflectorMatOn = "dz\vehicles\wheeled\CivilianVan\data\niva_lights.rvmat";
		frontReflectorMatOff = "dz\vehicles\wheeled\CivilianVan\data\niva.rvmat";
		frontReflectorMatDamaged = "dz\vehicles\wheeled\CivilianVan\data\niva_damage.rvmat";
		frontReflectorMatRuined = "dz\vehicles\wheeled\CivilianVan\data\niva_destruct.rvmat";
		fuelCapacity = 42;
		fuelConsumption = 11;
		attachments[] = {"CarBattery","LightBulb","CarRadiator","EngineBelt","SparkPlug","CivVanDriverDoors","CivVanCoDriverDoors","CivVanCargo1Doors","CivVanTrunkDown","CivVanTrunkUp","CivVanWheel_1_1","CivVanWheel_1_2","CivVanWheel_2_1","CivVanWheel_2_2"};
		class SimulationModule: SimulationModule
		{
			class Throttle
			{
				reactionTime = 1.0;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 3.0;
				gentleCoef = 0.5;
			};
			class Engine
			{
				torqueMax = 114;
				torqueRpm = 3400;
				rpmMin = 900;
				rpmMax = 5400;
			};
			class Gearbox
			{
				reverse = 3.526;
				ratios[] = {3.667,2.1,1.361,1.0};
				timeToUncoupleClutch = 0.4;
				timeToCoupleClutch = 0.3;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					forceRatio = 0.5;
					finalRatio = 4.1;
					brakeForce = 75;
					wheelHubRadius = 0.12;
					class Steering: Steering
					{
						increaseSpeed[] = {0,45,60,25,100,15};
						decreaseSpeed[] = {0,45,60,25,100,15};
						centeringSpeed[] = {0,90,60,50,90,30};
					};
					class Suspension: Suspension
					{
						restLength = 0.25;
						compLength = 0.34;
						travelMax = 0.3;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "CivVanwheel_1_1";
						};
						class Right: Right
						{
							inventorySlot = "CivVanwheel_2_1";
						};
					};
				};
				class Rear: Rear
				{
					class Suspension: Suspension
					{
						restLength = 0.25;
						compLength = 0.34;
						travelMax = 0.3;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "CivVanWheel_1_2";
						};
						class Right: Right
						{
							inventorySlot = "CivVanWheel_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {7,10};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class DamageZones
			{
				class Front
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"dmgZone_front"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class Back
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"dmgZone_back"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class Roof
				{
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"dmgZone_roof"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class Fender_LF
				{
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"dmgZone_fenderLF"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class Fender_LR: Fender_LF
				{
					componentNames[] = {"dmgZone_fenderLR"};
				};
				class Fender_RF: Fender_LF
				{
					componentNames[] = {"dmgZone_fenderRF"};
				};
				class Fender_RR: Fender_LF
				{
					componentNames[] = {"dmgZone_fenderRR"};
				};
				class Engine
				{
					class Health
					{
						hitpoints = 400;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"dmgZone_engine"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {"hull"};
				};
				class Chassis
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = -1;
					};
					componentNames[] = {"dmgZone_chassis"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				class FuelTank
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = -1;
					};
					componentNames[] = {"dmgZone_fuelTank"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"hull"};
				};
			};
		};
		attenuationEffectType = "CarAttenuation";
		soundGear[] = {"DZ\sounds\vehicles\gear_shift\gear_shift_1",0.5011872,1,30};
		soundGetIn[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Exit",0.4466836,1};
		soundGetOut[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Exit",0.4466836,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Int_Start",0.70794576,1};
		soundEngineOffInt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Int_Stop",0.70794576,1};
		soundEngineOnExt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Ext_Start",1.9952624,1,50};
		soundEngineOffExt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Ext_Stop",1.9952624,1,50};
		class Sounds
		{
			soundSetsInt[] = {"Hatchback_01_Engine_RPM0_INT_SoundSet","Hatchback_01_Engine_RPM1_INT_SoundSet","Hatchback_01_Engine_RPM2_INT_SoundSet","Hatchback_01_Engine_RPM3_INT_SoundSet","Hatchback_01_Engine_RPM4_INT_SoundSet","Hatchback_01_Tires_Rock_Fast_INT_SoundSet","Hatchback_01_Tires_Grass_Fast_INT_SoundSet","Hatchback_01_Tires_Sand_Fast_INT_SoundSet","Hatchback_01_Tires_Gravel_Fast_INT_SoundSet","Hatchback_01_Tires_Mud_Fast_INT_SoundSet","Hatchback_01_Tires_Asphalt_Fast_INT_SoundSet","Hatchback_01_Tires_Water_Fast_INT_SoundSet","Hatchback_01_Tires_Rock_Slow_INT_SoundSet","Hatchback_01_Tires_Grass_Slow_INT_SoundSet","Hatchback_01_Tires_Sand_Slow_INT_SoundSet","Hatchback_01_Tires_Gravel_Slow_INT_SoundSet","Hatchback_01_Tires_Mud_Slow_INT_SoundSet","Hatchback_01_Tires_Asphalt_Slow_INT_SoundSet","Hatchback_01_Tires_Water_Slow_INT_SoundSet","Hatchback_01_Tires_Turn_Hard_INT_SoundSet","Hatchback_01_Tires_Turn_Soft_INT_SoundSet","Hatchback_01_Tires_Brake_Hard_INT_SoundSet","Hatchback_01_Tires_Brake_Soft_INT_SoundSet"};
			soundSetsExt[] = {"Hatchback_01_Engine_RPM0_EXT_SoundSet","Hatchback_01_Engine_RPM1_EXT_SoundSet","Hatchback_01_Engine_RPM2_EXT_SoundSet","Hatchback_01_Engine_RPM3_EXT_SoundSet","Hatchback_01_Engine_RPM4_EXT_SoundSet","Hatchback_01_Tires_Rock_Fast_EXT_SoundSet","Hatchback_01_Tires_Grass_Fast_EXT_SoundSet","Hatchback_01_Tires_Sand_Fast_EXT_SoundSet","Hatchback_01_Tires_Gravel_Fast_EXT_SoundSet","Hatchback_01_Tires_Mud_Fast_EXT_SoundSet","Hatchback_01_Tires_Asphalt_Fast_EXT_SoundSet","Hatchback_01_Tires_Water_Fast_EXT_SoundSet","Hatchback_01_Tires_Rock_Slow_EXT_SoundSet","Hatchback_01_Tires_Grass_Slow_EXT_SoundSet","Hatchback_01_Tires_Sand_Slow_EXT_SoundSet","Hatchback_01_Tires_Gravel_Slow_EXT_SoundSet","Hatchback_01_Tires_Mud_Slow_EXT_SoundSet","Hatchback_01_Tires_Asphalt_Slow_EXT_SoundSet","Hatchback_01_Tires_Water_Slow_EXT_SoundSet","Hatchback_01_Tires_Turn_Hard_EXT_SoundSet","Hatchback_01_Tires_Turn_Soft_EXT_SoundSet","Hatchback_01_Tires_Brake_Hard_EXT_SoundSet","Hatchback_01_Tires_Brake_Soft_EXT_SoundSet"};
		};
		class ObstacleGenerator
		{
			carve = 1;
			timeToStationary = 5.0;
			moveThreshold = 0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,0.7};
					};
					class Cyl3
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,-0.7};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name = "Engine";
				description = "";
				attachmentSlots[] = {"CarBattery","EngineBelt","CarRadiator","SparkPlug"};
				icon = "missing";
			};
			class Body
			{
				name = "Body";
				description = "";
				attachmentSlots[] = {"CarRadiator","LightBulb","CivVanDriverDoors","CivVanCoDriverDoors","CivVanCargo1Doors","CivVanTrunkDown","CivVanTrunkUp"};
				icon = "missing";
			};
			class Chassis
			{
				name = "Chassis";
				description = "";
				attachmentSlots[] = {"CivVanWheel_1_1","CivVanWheel_1_2","CivVanWheel_2_1","CivVanWheel_2_2"};
				icon = "missing";
			};
		};
	};
	class HatchbackWheel: CarWheel
	{
		scope = 2;
		displayName = "$STR_HatchbackWheel0";
		model = "\DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaWheel.p3d";
		weight = 10000;
		itemSize[] = {6,6};
		inventorySlot[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","NivaWheel_Spare_1"};
		rotationFlags = 4;
		physLayer = "item_large";
		radiusByDamage[] = {0,0.362,0.3,0.3,0.9998,0.25,0.9999,0.15};
		radius = 0.362;
		friction = 0.98;
		width = 0.18;
	};
	class HatchbackWheel_Ruined: CarWheel
	{
		scope = 2;
		displayName = "$STR_HatchbackWheel_Ruined0";
		model = "\DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaWheel_destroyed.p3d";
		weight = 10000;
		itemSize[] = {6,6};
		inventorySlot[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","NivaWheel_Spare_1"};
		rotationFlags = 4;
		physLayer = "item_large";
		radius = 0.15;
		friction = -1.0;
		width = 0.17;
	};
	class HatchbackDoors_Driver: CarDoor
	{
		scope = 2;
		displayName = "$STR_HatchbackDoors_Driver0";
		model = "\DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaDoors_Driver.p3d";
		weight = 15000;
		itemSize[] = {10,8};
		inventorySlot = "NivaDriverDoors";
		rotationFlags = 8;
		physLayer = "item_large";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
				};
			};
			class DamageZones
			{
				class Window
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"}},{0.5,{"dz\vehicles\wheeled\data\auta_skla_damage.rvmat"}},{0.0,{""}}};
					};
					componentNames[] = {"dmgZone_window"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class Doors
				{
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 1;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_door.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\niva_door_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_door_destruct.rvmat"}}};
					};
					componentNames[] = {"dmgZone_doors"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
			};
		};
	};
	class HatchbackDoors_CoDriver: HatchbackDoors_Driver
	{
		displayName = "$STR_HatchbackDoors_CoDriver0";
		model = "\DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaDoors_coDriver.p3d";
		inventorySlot = "NivaCoDriverDoors";
		rotationFlags = 4;
	};
	class HatchbackHood: CarDoor
	{
		scope = 2;
		displayName = "$STR_HatchbackHood0";
		model = "\DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaDoors_Hood.p3d";
		weight = 15000;
		itemSize[] = {12,10};
		inventorySlot = "NivaHood";
		rotationFlags = 2;
		physLayer = "item_large";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_hood.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\niva_hood_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_hood_destruct.rvmat"}}};
				};
				componentNames[] = {"dmgZone_hood"};
			};
		};
	};
	class HatchbackTrunk: CarDoor
	{
		scope = 2;
		displayName = "$STR_HatchbackTrunk0";
		model = "\DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaDoors_Trunk.p3d";
		weight = 15000;
		itemSize[] = {12,10};
		inventorySlot = "NivaTrunk";
		rotationFlags = 1;
		physLayer = "item_large";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
				};
			};
			class DamageZones
			{
				class Window
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"}},{0.5,{"dz\vehicles\wheeled\data\auta_skla_damage.rvmat"}},{0.0,{""}}};
					};
					componentNames[] = {"dmgZone_window"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class Doors
				{
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 1;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_backdoor.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\niva_backdoor_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_backdoor_destruct.rvmat"}}};
					};
					componentNames[] = {"dmgZone_doors"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
			};
		};
	};
	class OffroadHatchback: CarScript
	{
		scope = 2;
		displayName = "$STR_OffroadHatchback0";
		model = "\dz\vehicles\wheeled\OffroadHatchback\OffroadHatchback.p3d";
		attachments[] = {"CarBattery","LightBulb","CarRadiator","EngineBelt","SparkPlug","NivaHood","NivaTrunk","NivaDriverDoors","NivaCoDriverDoors","NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","NivaWheel_Spare_1"};
		dashboardMatOn = "dz\vehicles\wheeled\offroadhatchback\data\niva_dashboard_light.rvmat";
		dashboardMatOff = "dz\vehicles\wheeled\offroadhatchback\data\niva_dashboard.rvmat";
		frontReflectorMatOn = "dz\vehicles\wheeled\offroadhatchback\data\niva_lights.rvmat";
		frontReflectorMatOff = "dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat";
		frontReflectorMatDamaged = "dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat";
		frontReflectorMatRuined = "dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat";
		fuelCapacity = 42;
		fuelConsumption = 11;
		hiddenSelections[] = {"brake_lights","rear_lights","reflector_L","reflector_R"};
		hiddenSelectionsTextures[] = {"dz\vehicles\wheeled\offroadhatchback\data\niva_co","dz\vehicles\wheeled\offroadhatchback\data\niva_co","dz\vehicles\wheeled\offroadhatchback\data\niva_co","dz\vehicles\wheeled\offroadhatchback\data\niva_co"};
		hiddenSelectionsMaterials[] = {"dz\vehicles\wheeled\OffroadHatchback\data\niva.rvmat","dz\vehicles\wheeled\OffroadHatchback\data\niva.rvmat","dz\vehicles\wheeled\OffroadHatchback\data\niva.rvmat","dz\vehicles\wheeled\OffroadHatchback\data\niva.rvmat"};
		class SimulationModule: SimulationModule
		{
			class Throttle
			{
				reactionTime = 1.0;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 3.0;
				gentleCoef = 0.5;
			};
			class Engine
			{
				torqueMax = 114;
				torqueRpm = 3400;
				rpmMin = 900;
				rpmMax = 5400;
			};
			class Gearbox
			{
				reverse = 3.526;
				ratios[] = {3.667,2.1,1.361,1.0};
				timeToUncoupleClutch = 0.4;
				timeToCoupleClutch = 0.3;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					class Steering: Steering
					{
						increaseSpeed[] = {0,45,60,25,100,15};
						decreaseSpeed[] = {0,45,60,25,100,15};
						centeringSpeed[] = {0,90,60,50,90,30};
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "NivaWheel_1_1";
						};
						class Right: Right
						{
							inventorySlot = "NivaWheel_2_1";
						};
					};
				};
				class Rear: Rear
				{
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "NivaWheel_1_2";
						};
						class Right: Right
						{
							inventorySlot = "NivaWheel_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {7,10};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class AnimationSources: AnimationSources
		{
			class SeatDriver
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.8;
			};
			class SeatCoDriver
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.8;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class DamageZones
			{
				class Front
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat"}}};
					};
					componentNames[] = {"dmgZone_front"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class Back
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat"}}};
					};
					componentNames[] = {"dmgZone_back"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class Roof
				{
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat"}}};
					};
					componentNames[] = {"dmgZone_roof"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class Fender_LF
				{
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat"}}};
					};
					componentNames[] = {"dmgZone_fenderLF"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class Fender_LR: Fender_LF
				{
					componentNames[] = {"dmgZone_fenderLR"};
				};
				class Fender_RF: Fender_LF
				{
					componentNames[] = {"dmgZone_fenderRF"};
				};
				class Fender_RR: Fender_LF
				{
					componentNames[] = {"dmgZone_fenderRR"};
				};
				class WindowLR
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = -1;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"}},{0.5,{"dz\vehicles\wheeled\data\auta_skla_damage.rvmat"}},{0.0,{""}}};
					};
					componentNames[] = {"dmgZone_windowLR"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class WindowRR: WindowLR
				{
					componentNames[] = {"dmgZone_windowRR"};
				};
				class Chassis
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = -1;
					};
					componentNames[] = {"dmgZone_chassis"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				class Engine
				{
					class Health
					{
						hitpoints = 400;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"dmgZone_engine"};
					fatalInjuryCoef = 1;
					inventorySlots[] = {};
				};
				class FuelTank
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = -1;
					};
					componentNames[] = {"dmgZone_fuelTank"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				class Lights
				{
					class Health
					{
						hitpoints = 30;
						transferToGlobalCoef = -1;
					};
					componentNames[] = {"dmgZone_lightsLF","dmgZone_lightsRF"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
			};
		};
		attenuationEffectType = "CarAttenuation";
		soundGear[] = {"DZ\sounds\vehicles\gear_shift\gear_shift_1",0.5011872,1,30};
		soundGetIn[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Exit",0.4466836,1};
		soundGetOut[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Exit",0.4466836,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Int_Start",0.70794576,1};
		soundEngineOffInt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Int_Stop",0.70794576,1};
		soundEngineOnExt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Ext_Start",1.9952624,1,50};
		soundEngineOffExt[] = {"DZ\sounds\vehicles\soft\Hatchback_01\Hatchback_01_Engine_Ext_Stop",1.9952624,1,50};
		class Sounds
		{
			soundSetsInt[] = {"Hatchback_01_Engine_RPM0_INT_SoundSet","Hatchback_01_Engine_RPM1_INT_SoundSet","Hatchback_01_Engine_RPM2_INT_SoundSet","Hatchback_01_Engine_RPM3_INT_SoundSet","Hatchback_01_Engine_RPM4_INT_SoundSet","Hatchback_01_Tires_Rock_Fast_INT_SoundSet","Hatchback_01_Tires_Grass_Fast_INT_SoundSet","Hatchback_01_Tires_Sand_Fast_INT_SoundSet","Hatchback_01_Tires_Gravel_Fast_INT_SoundSet","Hatchback_01_Tires_Mud_Fast_INT_SoundSet","Hatchback_01_Tires_Asphalt_Fast_INT_SoundSet","Hatchback_01_Tires_Water_Fast_INT_SoundSet","Hatchback_01_Tires_Rock_Slow_INT_SoundSet","Hatchback_01_Tires_Grass_Slow_INT_SoundSet","Hatchback_01_Tires_Sand_Slow_INT_SoundSet","Hatchback_01_Tires_Gravel_Slow_INT_SoundSet","Hatchback_01_Tires_Mud_Slow_INT_SoundSet","Hatchback_01_Tires_Asphalt_Slow_INT_SoundSet","Hatchback_01_Tires_Water_Slow_INT_SoundSet","Hatchback_01_Tires_Turn_Hard_INT_SoundSet","Hatchback_01_Tires_Turn_Soft_INT_SoundSet","Hatchback_01_Tires_Brake_Hard_INT_SoundSet","Hatchback_01_Tires_Brake_Soft_INT_SoundSet"};
			soundSetsExt[] = {"Hatchback_01_Engine_RPM0_EXT_SoundSet","Hatchback_01_Engine_RPM1_EXT_SoundSet","Hatchback_01_Engine_RPM2_EXT_SoundSet","Hatchback_01_Engine_RPM3_EXT_SoundSet","Hatchback_01_Engine_RPM4_EXT_SoundSet","Hatchback_01_Tires_Rock_Fast_EXT_SoundSet","Hatchback_01_Tires_Grass_Fast_EXT_SoundSet","Hatchback_01_Tires_Sand_Fast_EXT_SoundSet","Hatchback_01_Tires_Gravel_Fast_EXT_SoundSet","Hatchback_01_Tires_Mud_Fast_EXT_SoundSet","Hatchback_01_Tires_Asphalt_Fast_EXT_SoundSet","Hatchback_01_Tires_Water_Fast_EXT_SoundSet","Hatchback_01_Tires_Rock_Slow_EXT_SoundSet","Hatchback_01_Tires_Grass_Slow_EXT_SoundSet","Hatchback_01_Tires_Sand_Slow_EXT_SoundSet","Hatchback_01_Tires_Gravel_Slow_EXT_SoundSet","Hatchback_01_Tires_Mud_Slow_EXT_SoundSet","Hatchback_01_Tires_Asphalt_Slow_EXT_SoundSet","Hatchback_01_Tires_Water_Slow_EXT_SoundSet","Hatchback_01_Tires_Turn_Hard_EXT_SoundSet","Hatchback_01_Tires_Turn_Soft_EXT_SoundSet","Hatchback_01_Tires_Brake_Hard_EXT_SoundSet","Hatchback_01_Tires_Brake_Soft_EXT_SoundSet"};
		};
		class ObstacleGenerator
		{
			carve = 1;
			timeToStationary = 5.0;
			moveThreshold = 0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,0.7};
					};
					class Cyl3
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,-0.7};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name = "Engine";
				description = "";
				attachmentSlots[] = {"CarBattery","EngineBelt","CarRadiator","SparkPlug"};
				icon = "missing";
			};
			class Body
			{
				name = "Body";
				description = "";
				attachmentSlots[] = {"CarRadiator","LightBulb","NivaHood","NivaTrunk","NivaDriverDoors","NivaCoDriverDoors"};
				icon = "missing";
			};
			class Chassis
			{
				name = "Chassis";
				description = "";
				attachmentSlots[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","NivaWheel_Spare_1"};
				icon = "missing";
			};
		};
	};
};
class CfgDestroy
{
	class EngineHit
	{
		sound[] = {};
	};
};
class CfgNonAIVehicles
{
	class ProxyFlag;
	class ProxyDriver;
	class ProxyCargo;
	class ProxyAttachment;
	class ProxyFlag_Auto: ProxyFlag{};
	class ProxyFlag_Alone: ProxyFlag{};
	class ProxyV3S_Driver: ProxyDriver{};
	class ProxyV3S_CargoA: ProxyCargo{};
	class ProxyCivilianSedan_Driver: ProxyDriver{};
	class ProxyCivilianSedan_Cargo: ProxyCargo{};
	class ProxyBus_Driver: ProxyDriver{};
	class ProxyBus_Cargo: ProxyCargo{};
	class ProxyHatchback_Cargo: ProxyCargo{};
	class ProxyEnduro_Driver: ProxyDriver{};
	class ProxyEnduro_Cargo: ProxyCargo{};
	class ProxyVehiclePart: ProxyAttachment
	{
		scope = 2;
		simulation = "ProxyInventory";
		autocenter = 0;
		animated = 0;
		shadow = 1;
		reversed = 0;
	};
	class Proxyv3s_wheel: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\V3S\proxy\v3s_wheel.p3d";
		inventorySlot[] = {"V3SWheel_1_1","V3SWheel_2_1","V3SWheel_Spare_1","V3SWheel_Spare_2"};
	};
	class Proxyv3s_wheel_new_burst: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\V3S\proxy\v3s_wheel_new_burst.p3d";
		inventorySlot[] = {"V3SWheel_1_1","V3SWheel_2_1","V3SWheel_Spare_1","V3SWheel_Spare_2"};
	};
	class Proxyv3s_wheel_double: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\V3S\proxy\v3s_wheel_double.p3d";
		inventorySlot[] = {"V3SWheel_1_2","V3SWheel_1_3","V3SWheel_2_2","V3SWheel_2_3"};
	};
	class Proxyv3s_wheel_burst_double: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\V3S\proxy\v3s_wheel_burst_double.p3d";
		inventorySlot[] = {"V3SWheel_1_2","V3SWheel_1_3","V3SWheel_2_2","V3SWheel_2_3"};
	};
	class Proxyv3s_doors_Driver: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\V3S\proxy\v3s_doors_Driver.p3d";
		inventorySlot = "V3SDriverDoors";
	};
	class Proxyv3s_doors_coDriver: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\V3S\proxy\v3s_doors_coDriver.p3d";
		inventorySlot = "V3SCoDriverDoors";
	};
	class Proxyv3s_hood: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\V3S\proxy\v3s_hood.p3d";
		inventorySlot = "V3Shood";
	};
	class ProxySedanWheel: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\civiliansedan\proxy\sedanWheel.p3d";
		inventorySlot[] = {"CivSedanWheel_1_1","CivSedanWheel_1_2","CivSedanWheel_2_1","CivSedanWheel_2_2"};
	};
	class ProxySedanWheel_destroyed: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\civiliansedan\proxy\sedanWheel_destroyed.p3d";
		inventorySlot[] = {"CivSedanWheel_1_1","CivSedanWheel_1_2","CivSedanWheel_2_1","CivSedanWheel_2_2"};
	};
	class ProxySedanHood: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianSedan\proxy\sedanhood.p3d";
		inventorySlot = "CivSedanHood";
	};
	class ProxySedanTrunk: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianSedan\proxy\sedanTrunk.p3d";
		inventorySlot = "CivSedanTrunk";
	};
	class ProxysedanDoors_Driver: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianSedan\proxy\sedanDoors_Driver.p3d";
		inventorySlot = "CivSedanDriverDoors";
	};
	class ProxysedanDoors_coDriver: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianSedan\proxy\sedanDoors_coDriver.p3d";
		inventorySlot = "CivSedanCoDriverDoors";
	};
	class ProxysedanDoors_cargo1: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianSedan\proxy\sedanDoors_cargo1.p3d";
		inventorySlot = "CivSedanCargo1Doors";
	};
	class ProxysedanDoors_cargo2: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianSedan\proxy\sedanDoors_cargo2.p3d";
		inventorySlot = "CivSedanCargo2Doors";
	};
	class ProxyNivaWheel: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaWheel.p3d";
		inventorySlot[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","NivaWheel_Spare_1"};
	};
	class ProxyNivaWheel_destroyed: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaWheel_destroyed.p3d";
		inventorySlot[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","NivaWheel_Spare_1"};
	};
	class ProxyNivaDoors_Hood: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaDoors_Hood.p3d";
		inventorySlot = "NivaHood";
	};
	class ProxyNivaDoors_Trunk: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaDoors_Trunk.p3d";
		inventorySlot = "NivaTrunk";
	};
	class ProxynivaDoors_Driver: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaDoors_Driver.p3d";
		inventorySlot = "NivaDriverDoors";
	};
	class ProxynivaDoors_coDriver: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaDoors_coDriver.p3d";
		inventorySlot = "NivaCoDriverDoors";
	};
	class ProxyIkarusWheel: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\TransitBus\proxy\IkarusWheel.p3d";
		inventorySlot[] = {"BusWheel_1_1","BusWheel_2_1"};
	};
	class ProxyIkarusWheel_destroyed: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\TransitBus\proxy\ikarusWheel_destroyed.p3d";
		inventorySlot[] = {"BusWheel_1_1","BusWheel_2_1"};
	};
	class ProxyIkarusWheel_rear: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\TransitBus\proxy\ikarusWheel_rear.p3d";
		inventorySlot[] = {"BusWheel_1_2","BusWheel_2_2"};
	};
	class ProxyIkarusWheel_rear_destroyed: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\TransitBus\proxy\ikarusWheel_rear_destroyed.p3d";
		inventorySlot[] = {"BusWheel_1_2","BusWheel_2_2"};
	};
	class ProxyikarusHood: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\TransitBus\proxy\ikarusHood.p3d";
		inventorySlot = "BusHood";
	};
	class ProxyIkarusDoors_Left: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\TransitBus\proxy\IkarusDoors_Left.p3d";
		inventorySlot[] = {"BusLeftDoors_1","BusLeftDoors_2","BusLeftDoors_3"};
	};
	class ProxyIkarusDoors_Right: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\TransitBus\proxy\IkarusDoors_Right.p3d";
		inventorySlot[] = {"BusRightDoors_1","BusRightDoors_2","BusRightDoors_3"};
	};
	class ProxyCivilianVan_wheel: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianVan\proxy\CivilianVan_wheel.p3d";
		inventorySlot[] = {"CivVanWheel_1_1","CivVanWheel_1_2","CivVanWheel_2_1","CivVanWheel_2_2"};
	};
	class ProxyCivilianVan_wheel_dam: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianVan\proxy\CivilianVan_wheel_dam.p3d";
		inventorySlot[] = {"CivVanWheel_1_1","CivVanWheel_1_2","CivVanWheel_2_1","CivVanWheel_2_2"};
	};
	class ProxyCivilianVanDoors_Driver: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianVan\proxy\CivilianVanDoors_Driver.p3d";
		inventorySlot = "CivVanDriverDoors";
	};
	class ProxyCivilianVanDoors_CoDriver: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianVan\proxy\CivilianVanDoors_CoDriver.p3d";
		inventorySlot = "CivVanCoDriverDoors";
	};
	class ProxyCivilianVanDoors_Cargo1: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianVan\proxy\CivilianVanDoors_Cargo1.p3d";
		inventorySlot = "CivVanCargo1Doors";
	};
	class ProxyCivilianVanDoors_Cargo2: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianVan\proxy\CivilianVanDoors_Cargo2.p3d";
		inventorySlot = "CivVanTrunkDown";
	};
	class ProxyCivilianVanDoors_Cargo3: ProxyVehiclePart
	{
		model = "DZ\vehicles\wheeled\CivilianVan\proxy\CivilianVanDoors_Cargo3.p3d";
		inventorySlot = "CivVanTrunkUp";
	};
};
//};
