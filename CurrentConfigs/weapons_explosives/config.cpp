////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:44:50 2018 : 'file' last modified on Wed Aug 22 21:48:53 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_explosives\config.bin{
class CfgPatches
{
	class DZ_Weapons_Explosives
	{
		units[] = {"SmokeGrenade","FlashGrenade","Grenade","GrenadeRDG5","smokegrenade_rdg2"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgAmmo
{
	class DefaultAmmo;
	class HandGrenade_Base: DefaultAmmo
	{
		hit = 60;
		indirectHit = 28;
		indirectHitRange = 7;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		fuseDistance = 1;
		cost = 40;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundSetExplosion[] = {"Grenade_explosion_SoundSet","Grenade_Tail_SoundSet"};
		soundHit[] = {"DZ\sounds\weapons\grenades\hand_grenade_1",10.0,1};
		soundFly[] = {"dz\sounds\Weapons\explosions\noise",3.162277e-005,1};
		soundEngine[] = {"",9.999998e-005,4};
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 0;
		class DamageApplied
		{
			type = "Projectile";
			Health = 99;
			Blood = 500;
			Shock = 500;
		};
	};
	class HandGrenade_Frag: HandGrenade_Base
	{
		typicalspeed = 20;
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		explosionTime = 0;
	};
	class HandGrenade_Smoke: HandGrenade_Base
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 60;
		cost = 40;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundHit[] = {"DZ\sounds\weapons\grenades\smoke_grenade_1",1,1,200};
		soundEngine[] = {"",0.0001,4};
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 0;
	};
	class HandGrenade_Flash: HandGrenade_Base
	{
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		soundHit[] = {"DZ\sounds\weapons\grenades\flash_grenade_1",1,1,500};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Grenade_Base;
	class ItemGrenade: Grenade_Base{};
	class RGD5Grenade: ItemGrenade
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_RGD5Grenade0";
		descriptionShort = "$STR_CfgVehicles_RGD5Grenade1";
		model = "\dz\weapons\explosives\frag_RGD5.p3d";
		weight = 310;
		lootTag[] = {"Military_east"};
		ammoType = "HandGrenade_Frag";
		simulation = "handGrenade";
		fuseDelay = 5;
		timeToLive = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\explosives\data\frag_RGD5_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\explosives\data\frag_RGD5.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\explosives\data\frag_RGD5.rvmat","DZ\weapons\explosives\data\frag_RGD5_damage.rvmat","DZ\weapons\explosives\data\frag_RGD5_destruct.rvmat"};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet = "Grenade_unpin_SoundSet";
					id = 201;
				};
			};
		};
	};
	class M67Grenade: ItemGrenade
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_M67Grenade0";
		descriptionShort = "$STR_CfgVehicles_M67Grenade1";
		model = "\dz\weapons\explosives\grenade.p3d";
		weight = 397;
		lootTag[] = {"Military_west"};
		ammoType = "HandGrenade_Frag";
		simulation = "handGrenade";
		fuseDelay = 5;
		timeToLive = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\explosives\data\grenade_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\explosives\data\grenade.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\explosives\data\grenade.rvmat","DZ\weapons\explosives\data\grenade_damage.rvmat","DZ\weapons\explosives\data\grenade_destruct.rvmat"};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet = "Grenade_unpin_SoundSet";
					id = 201;
				};
			};
		};
	};
	class M18SmokeGrenade_ColorBase: ItemGrenade
	{
		displayName = "$STR_CfgVehicles_M18SmokeGrenade_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_M18SmokeGrenade_ColorBase1";
		model = "\dz\weapons\explosives\smokegrenade.p3d";
		rotationFlags = 17;
		lootTag[] = {"Military_west"};
		ammoType = "HandGrenade_Smoke";
		simulation = "handGrenade";
		fuseDelay = 3;
		timeToLive = 60;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"dz\weapons\explosives\data\smokegrenade.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\explosives\data\smokegrenade.rvmat","DZ\weapons\explosives\data\smokegrenade_damage.rvmat","DZ\weapons\explosives\data\smokegrenade_destruct.rvmat"};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet = "Grenade_unpin_SoundSet";
					id = 201;
				};
			};
		};
	};
	class M18SmokeGrenade_Red: M18SmokeGrenade_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_M18SmokeGrenade_Red0";
		hiddenSelectionsTextures[] = {"dz\weapons\explosives\data\smokegrenade_red_co.paa"};
	};
	class M18SmokeGrenade_Green: M18SmokeGrenade_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_M18SmokeGrenade_Green0";
		hiddenSelectionsTextures[] = {"dz\weapons\explosives\data\smokegrenade_green_co.paa"};
	};
	class M18SmokeGrenade_Yellow: M18SmokeGrenade_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_M18SmokeGrenade_Yellow0";
		hiddenSelectionsTextures[] = {"dz\weapons\explosives\data\smokegrenade_yellow_co.paa"};
	};
	class M18SmokeGrenade_Purple: M18SmokeGrenade_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_M18SmokeGrenade_Purple0";
		hiddenSelectionsTextures[] = {"dz\weapons\explosives\data\smokegrenade_violet_co.paa"};
	};
	class M18SmokeGrenade_White: M18SmokeGrenade_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_M18SmokeGrenade_White0";
		hiddenSelectionsTextures[] = {"dz\weapons\explosives\data\smokegrenade_white_co.paa"};
	};
	class RDG2SmokeGrenade_ColorBase: ItemGrenade
	{
		displayName = "$STR_CfgVehicles_RDG2SmokeGrenade_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_RDG2SmokeGrenade_ColorBase1";
		model = "\dz\weapons\explosives\smokegrenade_rdg2.p3d";
		rotationFlags = 17;
		havePin = 0;
		lootTag[] = {"Military_east","Police"};
		ammoType = "HandGrenade_Smoke";
		simulation = "handGrenade";
		fuseDelay = 3;
		timeToLive = 60;
		effectsSmoke = "SmokeShellWhite";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"dz\weapons\explosives\data\smokegrenade_rdg2.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\explosives\data\smokegrenade_rdg2.rvmat","DZ\weapons\explosives\data\smokegrenade_rdg2_damage.rvmat","DZ\weapons\explosives\data\smokegrenade_rdg2_destruct.rvmat"};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet = "Grenade_unpin_SoundSet";
					id = 201;
				};
			};
		};
	};
	class RDG2SmokeGrenade_Black: RDG2SmokeGrenade_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_RDG2SmokeGrenade_Black0";
		SingleUseActions[] = {509};
		hiddenSelectionsTextures[] = {"dz\weapons\explosives\data\smokegrenade_rdg2_black_co.paa"};
		hit = 60;
		indirectHit = 28;
		indirectHitRange = 7;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		ammoType = "HandGrenade_Frag";
		class EnergyManager
		{
			energyAtSpawn = 6;
			energyUsagePerSecond = 1;
			wetnessExposure = 0.1;
		};
	};
	class RDG2SmokeGrenade_White: RDG2SmokeGrenade_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_RDG2SmokeGrenade_White0";
		hiddenSelectionsTextures[] = {"dz\weapons\explosives\data\smokegrenade_rdg2_white_co.paa"};
	};
	class FlashGrenade: ItemGrenade
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_FlashGrenade0";
		descriptionShort = "$STR_CfgVehicles_FlashGrenade1";
		model = "\dz\weapons\explosives\flashbang.p3d";
		rotationFlags = 17;
		weight = 236;
		lootTag[] = {"Military_east","Military_west","Police"};
		simulation = "handGrenade";
		ammoType = "HandGrenade_Flash";
		fuseDelay = 5;
		timeToLive = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\explosives\data\flashbang_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\explosives\data\flashbang.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\explosives\data\flashbang.rvmat","DZ\weapons\explosives\data\flashbang_damage.rvmat","DZ\weapons\explosives\data\flashbang_destruct.rvmat"};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet = "Grenade_unpin_SoundSet";
					id = 201;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyfrag_RGD5: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "tripWireAttachment";
		model = "\dz\weapons\explosives\frag_RGD5.p3d";
	};
	class Proxygrenade: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "tripWireAttachment";
		model = "\dz\weapons\explosives\grenade.p3d";
	};
	class Proxysmokegrenade: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "tripWireAttachment";
		model = "\dz\weapons\explosives\smokegrenade.p3d";
	};
	class Proxysmokegrenade_rdg2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "tripWireAttachment";
		model = "\dz\weapons\explosives\smokegrenade_rdg2.p3d";
	};
	class Proxyflashbang: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "tripWireAttachment";
		model = "\dz\weapons\explosives\flashbang.p3d";
	};
};
//};
