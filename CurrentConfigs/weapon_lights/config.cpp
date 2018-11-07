////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:42:53 2018 : 'file' last modified on Wed Aug 22 21:40:52 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapon_lights\config.bin{
class CfgPatches
{
	class DZ_Weapons_Lights
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgRecipes{};
class cfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class UniversalLight: Switchable_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_UniversalLight0";
		descriptionShort = "$STR_cfgVehicles_UniversalLight1";
		model = "\DZ\weapons\attachments\light\weaponlight_universal.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {2,1};
		lootTag[] = {"Military_west","Military_east","Police"};
		lootCategory = "Attachments";
		inventorySlot = "weaponFlashlight";
		energyResources[] = {{"power",0.1}};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\m4_flashlight.rvmat","DZ\weapons\attachments\data\m4_flashlight_damage.rvmat","DZ\weapons\attachments\data\m4_flashlight_destruct.rvmat"};
		};
		class Reflectors
		{
			class Beam
			{
				color[] = {1.0,0.9,0.8,1.0};
				brightness = 1.0;
				radius = 30;
				angle = 50;
				angleInnerRatio = 0.25;
				dayLight = 1;
				flareAngleBias = 40.0;
				position = "beamStart";
				direction = "beamEnd";
				hitpoint = "bulb";
				selection = "bulb";
			};
		};
	};
	class TLRLight: Switchable_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_TLRLight0";
		descriptionShort = "$STR_cfgVehicles_TLRLight1";
		model = "\DZ\weapons\attachments\light\weaponlight_TLR.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 17;
		reversed = 1;
		weight = 118;
		itemSize[] = {2,1};
		lootTag[] = {"Military_east","Military_east","Police"};
		lootCategory = "Attachments";
		inventorySlot = "pistolFlashlight";
		energyResources[] = {{"power",0.1}};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\tls3.rvmat","DZ\weapons\attachments\data\tls3_damage.rvmat","DZ\weapons\attachments\data\tls3_destruct.rvmat"};
		};
		class Reflectors
		{
			class Beam
			{
				color[] = {1.0,0.9,0.8,1.0};
				brightness = 1.0;
				radius = 20;
				angle = 50;
				angleInnerRatio = 0.25;
				dayLight = 1;
				flareAngleBias = 40.0;
				position = "beamStart";
				direction = "beamEnd";
				hitpoint = "bulb";
				selection = "bulb";
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyWeaponlight_universal: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponFlashlight";
		model = "\dz\weapons\attachments\light\weaponlight_universal.p3d";
	};
	class ProxyWeaponlight_TLR: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistolFlashlight";
		model = "\dz\weapons\attachments\light\weaponlight_TLR.p3d";
	};
};
//};
