////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:03:50 2018 : 'file' last modified on Wed Aug 22 15:12:07 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\characters_headgear\config.bin{
class CfgPatches
{
	class DZ_Characters_Headgear
	{
		units[] = {"BaseballCap_Blue","BaseballCap_Beige","BaseballCap_Black","BaseballCap_Olive","BaseballCap_Pink","BaseballCap_Red","BaseballCap_Camo","BaseballCap_CMMG_Black","BaseballCap_CMMG_Pink","MotoHelmet_Black","MotoHelmet_Blue","MotoHelmet_Green","MotoHelmet_Red","MotoHelmet_White","Headtorch_Grey","CowboyHat_Brown","CowboyHat_black","CowboyHat_darkBrown","CowboyHat_green","BoonieHat_black","BoonieHat_Blue","BoonieHat_DPM","BoonieHat_dubok","BoonieHat_flecktran","BoonieHat_NavyBlue","BoonieHat_olive","BoonieHat_orange","BoonieHat_red","BoonieHat_Tan","FlatCap_Black","FlatCap_Grey","FlatCap_Brown","FlatCap_Blue","FlatCap_Red","FlatCap_Check_Black","FlatCap_Check_Brown","FlatCap_Check_Grey","GhillieHoodWoodland"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class DefaultAction;
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class Switchable_Base;
	class BallisticHelmet_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_BallisticHelmet_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_BallisticHelmet_ColorBase1";
		model = "\DZ\characters\headgear\HelmetMich_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 1000;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 0.13;
		noMask = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.5,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\HelmetMich_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.5;
					Blood = 0.5;
					Shock = 0.5;
				};
				class Melee
				{
					Health = 0.6;
					Blood = 0.5;
					Shock = 0.5;
				};
				class Infected
				{
					Health = 0.6;
					Blood = 0.5;
					Shock = 0.5;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\HelmetMich.p3d";
			female = "\DZ\characters\headgear\HelmetMich.p3d";
		};
	};
	class BallisticHelmet_Green: BallisticHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BallisticHelmet_Green0";
		visibilityModifier = 0.7;
		color = "Green";
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\helmetmich_co.paa","dz\characters\headgear\data\helmetmich_co.paa","dz\characters\headgear\data\helmetmich_co.paa"};
	};
	class BallisticHelmet_Black: BallisticHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BallisticHelmet_Black0";
		visibilityModifier = 0.7;
		color = "Black";
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\helmetmich_bk_co.paa","dz\characters\headgear\data\helmetmich_bk_co.paa","dz\characters\headgear\data\helmetmich_bk_co.paa"};
	};
	class BallisticHelmet_UN: BallisticHelmet_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BallisticHelmet_UN0";
		descriptionShort = "$STR_CfgVehicles_BallisticHelmet_UN1";
		visibilityModifier = 0.9;
		weight = 980;
		lootTag[] = {"Military_west"};
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\helmetmich_un_co.paa","dz\characters\headgear\data\helmetmich_un_co.paa","dz\characters\headgear\data\helmetmich_un_co.paa"};
	};
	class BaseballCap_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_BaseballCap_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_BaseballCap_ColorBase1";
		model = "\DZ\characters\headgear\BaseballCap_ground.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 110;
		itemSize[] = {2,1};
		absorbency = 0.8;
		heatIsolation = 1.04;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\BaseballCapII.rvmat","DZ\characters\headgear\data\BaseballCapII_damage.rvmat","DZ\characters\headgear\data\BaseballCapII_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\BaseballCap_m.p3d";
			female = "\DZ\characters\headgear\BaseballCap_f.p3d";
		};
	};
	class BaseballCap_Blue: BaseballCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BaseballCap_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\headgear\data\baseballcapii_blue_co.paa","\dz\characters\headgear\data\baseballcapii_blue_co.paa","\dz\characters\headgear\data\baseballcapii_blue_co.paa"};
	};
	class BaseballCap_Beige: BaseballCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BaseballCap_Beige0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\headgear\data\baseballcapii_beige_co.paa","\dz\characters\headgear\data\baseballcapii_beige_co.paa","\dz\characters\headgear\data\baseballcapii_beige_co.paa"};
	};
	class BaseballCap_Black: BaseballCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BaseballCap_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\headgear\data\baseballcapii_black_co.paa","\dz\characters\headgear\data\baseballcapii_black_co.paa","\dz\characters\headgear\data\baseballcapii_black_co.paa"};
	};
	class BaseballCap_Olive: BaseballCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BaseballCap_Olive0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"\dz\characters\headgear\data\baseballcapii_olive_co.paa","\dz\characters\headgear\data\baseballcapii_olive_co.paa","\dz\characters\headgear\data\baseballcapii_olive_co.paa"};
	};
	class BaseballCap_Pink: BaseballCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BaseballCap_Pink0";
		hiddenSelectionsTextures[] = {"\dz\characters\headgear\data\baseballcapii_pink_co.paa","\dz\characters\headgear\data\baseballcapii_pink_co.paa","\dz\characters\headgear\data\baseballcapii_pink_co.paa"};
	};
	class BaseballCap_Red: BaseballCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BaseballCap_Red0";
		hiddenSelectionsTextures[] = {"\dz\characters\headgear\data\baseballcapii_red_co.paa","\dz\characters\headgear\data\baseballcapii_red_co.paa","\dz\characters\headgear\data\baseballcapii_red_co.paa"};
	};
	class BaseballCap_Camo: BaseballCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BaseballCap_Camo0";
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\dz\characters\headgear\data\baseballcapii_camo_co.paa","\dz\characters\headgear\data\baseballcapii_camo_co.paa","\dz\characters\headgear\data\baseballcapii_camo_co.paa"};
	};
	class BaseballCap_CMMG_Black: BaseballCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BaseballCap_CMMG_Black0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa","\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa","\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa"};
	};
	class BaseballCap_CMMG_Pink: BaseballCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BaseballCap_CMMG_Pink0";
		hiddenSelectionsTextures[] = {"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa","\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa","\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa"};
	};
	class ZSh3PilotHelmet: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ZSh3PilotHelmet0";
		descriptionShort = "$STR_CfgVehicles_ZSh3PilotHelmet1";
		model = "\DZ\characters\headgear\HeloHelmet_ground.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 1450;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 1.1;
		noMask = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\HeloHelmet_co.paa","\DZ\characters\headgear\data\HeloHelmet_co.paa","\DZ\characters\headgear\data\HeloHelmet_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\HeloHelmet.rvmat"}},{0.5,{"DZ\characters\headgear\data\HeloHelmet_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\HeloHelmet_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.6;
					Blood = 0.6;
					Shock = 0.6;
				};
				class Melee
				{
					Health = 0.7;
					Blood = 0.6;
					Shock = 0.6;
				};
				class Infected
				{
					Health = 0.7;
					Blood = 0.6;
					Shock = 0.6;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\HeloHelmet.p3d";
			female = "\DZ\characters\headgear\HeloHelmet.p3d";
		};
	};
	class ZSh3PilotHelmet_Green: ZSh3PilotHelmet
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ZSh3PilotHelmet_Green0";
		visibilityModifier = 0.9;
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\HeloHelmet_green_co.paa","\DZ\characters\headgear\data\HeloHelmet_green_co.paa","\DZ\characters\headgear\data\HeloHelmet_green_co.paa"};
	};
	class ZSh3PilotHelmet_Black: ZSh3PilotHelmet
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ZSh3PilotHelmet_Black0";
		visibilityModifier = 0.85;
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\HeloHelmet_black_co.paa","\DZ\characters\headgear\data\HeloHelmet_black_co.paa","\DZ\characters\headgear\data\HeloHelmet_black_co.paa"};
	};
	class ConstructionHelmet_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_ConstructionHelmet_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_ConstructionHelmet_ColorBase1";
		model = "\DZ\characters\headgear\ConstructionHelmet_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 470;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 0.9;
		noMask = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\ConstructionHelmet.rvmat"}},{0.5,{"DZ\characters\headgear\data\ConstructionHelmet_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\ConstructionHelmet_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.5;
					Blood = 0.5;
					Shock = 0.5;
				};
				class Melee
				{
					Health = 0.6;
					Blood = 0.5;
					Shock = 0.5;
				};
				class Infected
				{
					Health = 0.6;
					Blood = 0.5;
					Shock = 0.5;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\ConstructionHelmet.p3d";
			female = "\DZ\characters\headgear\ConstructionHelmet.p3d";
		};
	};
	class ConstructionHelmet_Blue: ConstructionHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ConstructionHelmet_Blue0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ConstructionHelmet_blue_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_blue_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_blue_co.paa"};
	};
	class ConstructionHelmet_Lime: ConstructionHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ConstructionHelmet_Lime0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ConstructionHelmet_lime_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_lime_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_lime_co.paa"};
	};
	class ConstructionHelmet_Orange: ConstructionHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ConstructionHelmet_Orange0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ConstructionHelmet_orange_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_orange_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_orange_co.paa"};
	};
	class ConstructionHelmet_Red: ConstructionHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ConstructionHelmet_Red0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ConstructionHelmet_red_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_red_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_red_co.paa"};
	};
	class ConstructionHelmet_White: ConstructionHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ConstructionHelmet_White0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ConstructionHelmet_white_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_white_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_white_co.paa"};
	};
	class ConstructionHelmet_Yellow: ConstructionHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ConstructionHelmet_Yellow0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ConstructionHelmet_yellow_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_yellow_co.paa","\DZ\characters\headgear\data\ConstructionHelmet_yellow_co.paa"};
	};
	class BurlapSackCover: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BurlapSackCover0";
		descriptionShort = "$STR_CfgVehicles_BurlapSackCover1";
		model = "\dz\characters\headgear\Head_sack_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		handheld = "false";
		rotationFlags = 1;
		weight = 510;
		itemSize[] = {2,2};
		absorbency = 1;
		heatIsolation = 2;
		lootCategory = "Headgear";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\head_sack_co.paa","dz\characters\headgear\data\head_sack_co.paa","dz\characters\headgear\data\head_sack_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\Head_Sack.rvmat"}},{0.5,{"DZ\characters\headgear\data\Head_Sack_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\Head_Sack_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\Head_sack.p3d";
			female = "\DZ\characters\headgear\Head_sack.p3d";
		};
	};
	class BeanieHat_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_BeanieHat_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_BeanieHat_ColorBase1";
		model = "\DZ\characters\headgear\BeanieHat_ground.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 90;
		itemSize[] = {2,1};
		absorbency = 0.8;
		heatIsolation = 1.04;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\BeanieHat.rvmat","DZ\characters\headgear\data\BeanieHat_damage.rvmat","DZ\characters\headgear\data\BeanieHat_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\BeanieHat_m.p3d";
			female = "\DZ\characters\headgear\BeanieHat_f.p3d";
		};
	};
	class BeanieHat_Beige: BeanieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BeanieHat_Beige0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\BeanieHat_beige_co.paa","\DZ\characters\headgear\data\BeanieHat_beige_co.paa","\DZ\characters\headgear\data\BeanieHat_beige_co.paa"};
	};
	class BeanieHat_Black: BeanieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BeanieHat_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\BeanieHat_black_co.paa","\DZ\characters\headgear\data\BeanieHat_black_co.paa","\DZ\characters\headgear\data\BeanieHat_black_co.paa"};
	};
	class BeanieHat_Blue: BeanieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BeanieHat_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\BeanieHat_blue_co.paa","\DZ\characters\headgear\data\BeanieHat_blue_co.paa","\DZ\characters\headgear\data\BeanieHat_blue_co.paa"};
	};
	class BeanieHat_Brown: BeanieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BeanieHat_Brown0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\BeanieHat_brown_co.paa","\DZ\characters\headgear\data\BeanieHat_brown_co.paa","\DZ\characters\headgear\data\BeanieHat_brown_co.paa"};
	};
	class BeanieHat_Green: BeanieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BeanieHat_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\BeanieHat_green_co.paa","\DZ\characters\headgear\data\BeanieHat_green_co.paa","\DZ\characters\headgear\data\BeanieHat_green_co.paa"};
	};
	class BeanieHat_Grey: BeanieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BeanieHat_Grey0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\BeanieHat_grey_co.paa","\DZ\characters\headgear\data\BeanieHat_grey_co.paa","\DZ\characters\headgear\data\BeanieHat_grey_co.paa"};
	};
	class BeanieHat_Pink: BeanieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BeanieHat_Pink0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\BeanieHat_pink_co.paa","\DZ\characters\headgear\data\BeanieHat_pink_co.paa","\DZ\characters\headgear\data\BeanieHat_pink_co.paa"};
	};
	class BeanieHat_Red: BeanieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BeanieHat_Red0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\BeanieHat_red_co.paa","\DZ\characters\headgear\data\BeanieHat_red_co.paa","\DZ\characters\headgear\data\BeanieHat_red_co.paa"};
	};
	class Ushanka_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_Ushanka_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Ushanka_ColorBase1";
		model = "\DZ\characters\headgear\ushanka_ground.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 320;
		itemSize[] = {2,1};
		absorbency = 0.8;
		heatIsolation = 1.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\Ushanka.rvmat"}},{0.5,{"DZ\characters\headgear\data\Ushanka_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\Ushanka_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\ushanka_m.p3d";
			female = "\DZ\characters\headgear\ushanka_f.p3d";
		};
	};
	class Ushanka_Black: Ushanka_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Ushanka_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\Ushanka_black_co.paa","\DZ\characters\headgear\data\Ushanka_black_co.paa","\DZ\characters\headgear\data\Ushanka_black_co.paa"};
	};
	class Ushanka_Blue: Ushanka_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Ushanka_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\Ushanka_blue_co.paa","\DZ\characters\headgear\data\Ushanka_blue_co.paa","\DZ\characters\headgear\data\Ushanka_blue_co.paa"};
	};
	class Ushanka_Green: Ushanka_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Ushanka_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\Ushanka_green_co.paa","\DZ\characters\headgear\data\Ushanka_green_co.paa","\DZ\characters\headgear\data\Ushanka_green_co.paa"};
	};
	class MotoHelmet_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_MotoHelmet_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_MotoHelmet_ColorBase1";
		model = "\DZ\characters\headgear\MotoHelmet_ground.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 1210;
		itemSize[] = {5,5};
		absorbency = 0;
		heatIsolation = 1.2;
		noMask = 1;
		hiddenSelections[] = {"camoGround"};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\MotoHelmet.p3d";
			female = "\DZ\characters\headgear\MotoHelmet.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\MotoHelmet.rvmat"}},{0.5,{"DZ\characters\headgear\data\MotoHelmet_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.8;
					Blood = 0.7;
					Shock = 0.7;
				};
				class Melee
				{
					Health = 0.6;
					Blood = 0.6;
					Shock = 0.4;
				};
				class Infected
				{
					Health = 0.6;
					Blood = 0.6;
					Shock = 0.4;
				};
			};
		};
	};
	class MotoHelmet_Black: MotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MotoHelmet_Black0";
		visibilityModifier = 0.85;
		color = "Black";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_black_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"};
		};
	};
	class MotoHelmet_Grey: MotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MotoHelmet_Grey0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_grey_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"};
		};
	};
	class MotoHelmet_Green: MotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MotoHelmet_Green0";
		visibilityModifier = 0.9;
		color = "Green";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_green_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"};
		};
	};
	class MotoHelmet_Lime: MotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MotoHelmet_Lime0";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_lime_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"};
		};
	};
	class MotoHelmet_Blue: MotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MotoHelmet_Blue0";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_blue_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"};
		};
	};
	class MotoHelmet_Red: MotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MotoHelmet_Red0";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_red_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"};
		};
	};
	class MotoHelmet_White: MotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MotoHelmet_White0";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_white_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"};
		};
	};
	class DarkMotoHelmet_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_DarkMotoHelmet_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_DarkMotoHelmet_ColorBase1";
		model = "\DZ\characters\headgear\MotoHelmet_ground.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 1210;
		itemSize[] = {5,5};
		absorbency = 0;
		heatIsolation = 1.2;
		noMask = 1;
		hiddenSelections[] = {"camoGround","Camo1"};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\MotoHelmet.p3d";
			female = "\DZ\characters\headgear\MotoHelmet.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\MotoHelmet.rvmat"}},{0.5,{"DZ\characters\headgear\data\MotoHelmet_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.8;
					Blood = 0.8;
					Shock = 0.7;
				};
				class Melee
				{
					Health = 0.6;
					Blood = 0.6;
					Shock = 0.4;
				};
				class Infected
				{
					Health = 0.6;
					Blood = 0.6;
					Shock = 0.4;
				};
			};
		};
	};
	class DarkMotoHelmet_Black: DarkMotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DarkMotoHelmet_Black0";
		visibilityModifier = 0.85;
		color = "Black";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_black_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"};
		};
	};
	class DarkMotoHelmet_Grey: DarkMotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DarkMotoHelmet_Grey0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_grey_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"};
		};
	};
	class DarkMotoHelmet_Green: DarkMotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DarkMotoHelmet_Green0";
		visibilityModifier = 0.9;
		color = "Green";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_green_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"};
		};
	};
	class DarkMotoHelmet_Lime: DarkMotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DarkMotoHelmet_Lime0";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_lime_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"};
		};
	};
	class DarkMotoHelmet_Blue: DarkMotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DarkMotoHelmet_Blue0";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_blue_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"};
		};
	};
	class DarkMotoHelmet_Red: DarkMotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DarkMotoHelmet_Red0";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_red_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"};
		};
	};
	class DarkMotoHelmet_White: DarkMotoHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DarkMotoHelmet_White0";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\MotoHelmet_white_co.paa","DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MotoHelmet.rvmat","DZ\characters\headgear\data\MotoHelmet_damage.rvmat","DZ\characters\headgear\data\MotoHelmet_destruct.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat","DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"};
		};
	};
	class Headtorch_ColorBase: Switchable_Base
	{
		displayName = "$STR_CfgVehicles_Headtorch_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Headtorch_ColorBase1";
		model = "\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		SingleUseActions[] = {509,510};
		rotationFlags = 1;
		weight = 200;
		itemSize[] = {2,1};
		absorbency = 0;
		lootCategory = "Headgear";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","bulb","reflector","glass","reflector_far"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\HeadTorch.rvmat","DZ\characters\headgear\data\HeadTorch_damage.rvmat","DZ\characters\headgear\data\HeadTorch_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\HeadTorch_m.p3d";
			female = "\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
		};
		class Reflectors
		{
			class Beam
			{
				color[] = {0.8,0.9,1.0,1.0};
				brightness = 1.0;
				radius = 25;
				angle = 130;
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
	class Headtorch_Grey: Headtorch_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Headtorch_Grey0";
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\headtorch_Grey_co.paa","dz\characters\headgear\data\headtorch_Grey_co.paa","dz\characters\headgear\data\headtorch_Grey_co.paa","dz\data\data\light_flare2_ca.paa","dz\characters\headgear\data\headtorch_Grey_co.paa","#(argb,8,8,3)color(0.0745098,0.141176,0.184314,0.3,ca)","dz\characters\headgear\data\headtorch_Grey_co.paa"};
	};
	class Headtorch_Black: Headtorch_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Headtorch_Black0";
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\headtorch_Black_co.paa","dz\characters\headgear\data\headtorch_Black_co.paa","dz\characters\headgear\data\headtorch_Black_co.paa","dz\data\data\light_flare2_ca.paa","dz\characters\headgear\data\headtorch_Black_co.paa","#(argb,8,8,3)color(0.0745098,0.141176,0.184314,0.3,ca)","dz\characters\headgear\data\headtorch_Black_co.paa"};
		class Reflectors
		{
			class Beam
			{
				color[] = {0.8,0.1,0.1,1.0};
				brightness = 1.0;
				radius = 25;
				angle = 130;
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
	class BandanaUntieable_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_BandanaUntieable_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_BandanaUntieable_ColorBase1";
		model = "\DZ\characters\headgear\BandanaHead_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 120;
		itemSize[] = {2,1};
		ragQuantity = 1;
		absorbency = 0.9;
		heatIsolation = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\BandanaH.rvmat","DZ\characters\headgear\data\BandanaH_damage.rvmat","DZ\characters\headgear\data\BandanaH_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\BandanaHead_m.p3d";
			female = "\DZ\characters\headgear\BandanaHead_f.p3d";
		};
	};
	class BandanaUntieable_RedPattern: BandanaUntieable_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BandanaUntieable_RedPattern0";
		color = "redpattern";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaH_redpattern_co.paa","DZ\characters\headgear\data\BandanaH_redpattern_co.paa","DZ\characters\headgear\data\BandanaH_redpattern_co.paa"};
	};
	class BandanaUntieable_BlackPattern: BandanaUntieable_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BandanaUntieable_BlackPattern0";
		visibilityModifier = 0.9;
		color = "blackpattern";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaH_blackpattern_co.paa","DZ\characters\headgear\data\BandanaH_blackpattern_co.paa","DZ\characters\headgear\data\BandanaH_blackpattern_co.paa"};
	};
	class BandanaUntieable_PolkaPattern: BandanaUntieable_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BandanaUntieable_PolkaPattern0";
		color = "polkapattern";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaH_karkulka_co.paa","DZ\characters\headgear\data\BandanaH_karkulka_co.paa","DZ\characters\headgear\data\BandanaH_karkulka_co.paa"};
	};
	class BandanaUntieable_Greenpattern: BandanaUntieable_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BandanaUntieable_Greenpattern0";
		visibilityModifier = 0.9;
		color = "greenpattern";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaFHG_olive_co.paa","DZ\characters\headgear\data\BandanaFHG_olive_co.paa","DZ\characters\headgear\data\BandanaFHG_olive_co.paa"};
	};
	class BandanaUntieable_CamoPattern: BandanaUntieable_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BandanaUntieable_CamoPattern0";
		visibilityModifier = 0.85;
		color = "camopattern";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa","DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa","DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa"};
	};
	class RadarCap_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_RadarCap_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_RadarCap_ColorBase1";
		model = "\DZ\characters\headgear\RadarCap_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 160;
		itemSize[] = {3,2};
		absorbency = 0.6;
		heatIsolation = 0.95;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\RadarCap.rvmat","DZ\characters\headgear\data\RadarCap_damage.rvmat","DZ\characters\headgear\data\RadarCap_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\RadarCap_m.p3d";
			female = "\DZ\characters\headgear\RadarCap_f.p3d";
		};
	};
	class RadarCap_Black: RadarCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_RadarCap_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\RadarCap_black_co.paa","DZ\characters\headgear\data\RadarCap_black_co.paa","DZ\characters\headgear\data\RadarCap_black_co.paa"};
	};
	class RadarCap_Blue: RadarCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_RadarCap_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\RadarCap_blue_co.paa","DZ\characters\headgear\data\RadarCap_blue_co.paa","DZ\characters\headgear\data\RadarCap_blue_co.paa"};
	};
	class RadarCap_Brown: RadarCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_RadarCap_Brown0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\RadarCap_brown_co.paa","DZ\characters\headgear\data\RadarCap_brown_co.paa","DZ\characters\headgear\data\RadarCap_brown_co.paa"};
	};
	class RadarCap_Green: RadarCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_RadarCap_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\RadarCap_green_co.paa","DZ\characters\headgear\data\RadarCap_green_co.paa","DZ\characters\headgear\data\RadarCap_green_co.paa"};
	};
	class RadarCap_Red: RadarCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_RadarCap_Red0";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\RadarCap_red_co.paa","DZ\characters\headgear\data\RadarCap_red_co.paa","DZ\characters\headgear\data\RadarCap_red_co.paa"};
	};
	class MilitaryBeret_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_MilitaryBeret_ColorBase0";
		model = "\DZ\characters\headgear\RadarCap_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 230;
		itemSize[] = {2,1};
		absorbency = 0.7;
		heatIsolation = 0.95;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\MilitaryBeret.rvmat"}},{0.5,{"DZ\characters\headgear\data\MilitaryBeret_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\MilitaryBeret_destruct.rvmat"}}};
				};
			};
		};
	};
	class MilitaryBeret_Red: MilitaryBeret_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_MilitaryBeret_Red0";
		descriptionShort = "$STR_CfgVehicles_MilitaryBeret_Red1";
		model = "\DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\MilitaryBeret_m.p3d";
			female = "\DZ\characters\headgear\MilitaryBeret_f.p3d";
		};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MilitaryBeret_red_co.paa","\DZ\characters\headgear\data\MilitaryBeret_red_co.paa","\DZ\characters\headgear\data\MilitaryBeret_red_co.paa"};
	};
	class MilitaryBeret_UN: MilitaryBeret_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MilitaryBeret_UN0";
		model = "\DZ\characters\headgear\MilitaryBeret_UN_g.p3d";
		lootTag[] = {"Military_west"};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\MilitaryBeret_UN_m.p3d";
			female = "\DZ\characters\headgear\MilitaryBeret_UN_f.p3d";
		};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MilitaryBeret_blue_co.paa","\DZ\characters\headgear\data\MilitaryBeret_blue_co.paa","\DZ\characters\headgear\data\MilitaryBeret_blue_co.paa"};
	};
	class MilitaryBeret_NZ: MilitaryBeret_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MilitaryBeret_NZ0";
		visibilityModifier = 0.9;
		model = "\DZ\characters\headgear\MilitaryBeret_NZ_g.p3d";
		lootTag[] = {"Military_west"};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\MilitaryBeret_NZ_m.p3d";
			female = "\DZ\characters\headgear\MilitaryBeret_NZ_f.p3d";
		};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa","\DZ\characters\headgear\data\MilitaryBeret_green_co.paa","\DZ\characters\headgear\data\MilitaryBeret_green_co.paa"};
	};
	class MilitaryBeret_ChDKZ: MilitaryBeret_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MilitaryBeret_ChDKZ0";
		visibilityModifier = 0.9;
		model = "\DZ\characters\headgear\MilitaryBeret_ChDKZ_g.p3d";
		lootTag[] = {"Military_east"};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\MilitaryBeret_ChDKZ_m.p3d";
			female = "\DZ\characters\headgear\MilitaryBeret_ChDKZ_f.p3d";
		};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MilitaryBeret_black_co.paa","\DZ\characters\headgear\data\MilitaryBeret_black_co.paa","\DZ\characters\headgear\data\MilitaryBeret_black_co.paa"};
	};
	class MilitaryBeret_CDF: MilitaryBeret_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MilitaryBeret_CDF0";
		visibilityModifier = 0.9;
		model = "\DZ\characters\headgear\MilitaryBeret_CDF_g.p3d";
		lootTag[] = {"Military_east"};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\MilitaryBeret_CDF_m.p3d";
			female = "\DZ\characters\headgear\MilitaryBeret_CDF_f.p3d";
		};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa","\DZ\characters\headgear\data\MilitaryBeret_green_co.paa","\DZ\characters\headgear\data\MilitaryBeret_green_co.paa"};
	};
	class FlatCap_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_FlatCap_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_FlatCap_ColorBase1";
		model = "\DZ\characters\headgear\FlatCap_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 240;
		itemSize[] = {2,1};
		absorbency = 0.7;
		heatIsolation = 0.95;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\FlatCap.rvmat","DZ\characters\headgear\data\FlatCap_damage.rvmat","DZ\characters\headgear\data\FlatCap_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\FlatCap.p3d";
			female = "\DZ\characters\headgear\FlatCap.p3d";
		};
	};
	class FlatCap_Black: FlatCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FlatCap_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\FlatCap_black_co.paa","\DZ\characters\headgear\data\FlatCap_black_co.paa","\DZ\characters\headgear\data\FlatCap_black_co.paa"};
	};
	class FlatCap_Blue: FlatCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FlatCap_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\FlatCap_blue_co.paa","\DZ\characters\headgear\data\FlatCap_blue_co.paa","\DZ\characters\headgear\data\FlatCap_blue_co.paa"};
	};
	class FlatCap_Red: FlatCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FlatCap_Red0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\FlatCap_red_co.paa","\DZ\characters\headgear\data\FlatCap_red_co.paa","\DZ\characters\headgear\data\FlatCap_red_co.paa"};
	};
	class FlatCap_Brown: FlatCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FlatCap_Brown0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\FlatCap_brown_co.paa","\DZ\characters\headgear\data\FlatCap_brown_co.paa","\DZ\characters\headgear\data\FlatCap_brown_co.paa"};
	};
	class FlatCap_Grey: FlatCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FlatCap_Grey0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\FlatCap_grey_co.paa","\DZ\characters\headgear\data\FlatCap_grey_co.paa","\DZ\characters\headgear\data\FlatCap_grey_co.paa"};
	};
	class FlatCap_BrownCheck: FlatCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FlatCap_BrownCheck0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\FlatCap_brown_check_co.paa","\DZ\characters\headgear\data\FlatCap_brown_check_co.paa","\DZ\characters\headgear\data\FlatCap_brown_check_co.paa"};
	};
	class FlatCap_GreyCheck: FlatCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FlatCap_GreyCheck0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\FlatCap_grey_check_co.paa","\DZ\characters\headgear\data\FlatCap_grey_check_co.paa","\DZ\characters\headgear\data\FlatCap_grey_check_co.paa"};
	};
	class FlatCap_BlackCheck: FlatCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FlatCap_BlackCheck0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\FlatCap_black_check_co.paa","\DZ\characters\headgear\data\FlatCap_black_check_co.paa","\DZ\characters\headgear\data\FlatCap_black_check_co.paa"};
	};
	class ZmijovkaCap_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_ZmijovkaCap_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_ZmijovkaCap_ColorBase1";
		model = "\DZ\characters\headgear\ZmijovkaCap_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 17;
		weight = 110;
		itemSize[] = {2,1};
		absorbency = 0.8;
		heatIsolation = 1.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\ZmijovkaCap.rvmat","DZ\characters\headgear\data\ZmijovkaCap_damage.rvmat","DZ\characters\headgear\data\ZmijovkaCap_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\ZmijovkaCap_m.p3d";
			female = "\DZ\characters\headgear\ZmijovkaCap_f.p3d";
		};
	};
	class ZmijovkaCap_Black: ZmijovkaCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ZmijovkaCap_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ZmijovkaCap_black_co.paa","\DZ\characters\headgear\data\ZmijovkaCap_black_co.paa","\DZ\characters\headgear\data\ZmijovkaCap_black_co.paa"};
	};
	class ZmijovkaCap_Blue: ZmijovkaCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ZmijovkaCap_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ZmijovkaCap_blue_co.paa","\DZ\characters\headgear\data\ZmijovkaCap_blue_co.paa","\DZ\characters\headgear\data\ZmijovkaCap_blue_co.paa"};
	};
	class ZmijovkaCap_Brown: ZmijovkaCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ZmijovkaCap_Brown0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ZmijovkaCap_brown_co.paa","\DZ\characters\headgear\data\ZmijovkaCap_brown_co.paa","\DZ\characters\headgear\data\ZmijovkaCap_brown_co.paa"};
	};
	class ZmijovkaCap_Green: ZmijovkaCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ZmijovkaCap_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ZmijovkaCap_green_co.paa","\DZ\characters\headgear\data\ZmijovkaCap_green_co.paa","\DZ\characters\headgear\data\ZmijovkaCap_green_co.paa"};
	};
	class ZmijovkaCap_Red: ZmijovkaCap_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ZmijovkaCap_Red0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ZmijovkaCap_red_co.paa","\DZ\characters\headgear\data\ZmijovkaCap_red_co.paa","\DZ\characters\headgear\data\ZmijovkaCap_red_co.paa"};
	};
	class CowboyHat_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_CowboyHat_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_CowboyHat_ColorBase1";
		model = "\DZ\characters\headgear\CowboyHat_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 370;
		itemSize[] = {4,3};
		absorbency = 0.3;
		heatIsolation = 1.08;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\CowboyHat.rvmat"}},{0.5,{"DZ\characters\headgear\data\CowboyHat_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\CowboyHat_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Melee
				{
					Health = 0.85;
					Blood = 0.8;
					Shock = 0.85;
				};
				class Infected
				{
					Health = 0.85;
					Blood = 0.8;
					Shock = 0.85;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\CowboyHat.p3d";
			female = "\DZ\characters\headgear\CowboyHat.p3d";
		};
	};
	class CowboyHat_Brown: CowboyHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CowboyHat_Brown0";
		color = "Brown";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\CowboyHat_Brown_co.paa","DZ\characters\headgear\data\CowboyHat_Brown_co.paa","DZ\characters\headgear\data\CowboyHat_Brown_co.paa"};
	};
	class CowboyHat_black: CowboyHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CowboyHat_black0";
		color = "black";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\CowboyHat_black_co.paa","DZ\characters\headgear\data\CowboyHat_black_co.paa","DZ\characters\headgear\data\CowboyHat_black_co.paa"};
	};
	class CowboyHat_darkBrown: CowboyHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CowboyHat_darkBrown0";
		color = "darkBrown";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa","DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa","DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa"};
	};
	class CowboyHat_green: CowboyHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CowboyHat_green0";
		color = "green";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\CowboyHat_green_co.paa","DZ\characters\headgear\data\CowboyHat_green_co.paa","DZ\characters\headgear\data\CowboyHat_green_co.paa"};
	};
	class BoonieHat_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_BoonieHat_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_BoonieHat_ColorBase1";
		model = "\DZ\characters\headgear\BoonieHat_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 170;
		itemSize[] = {2,1};
		attachments[] = {"Hook"};
		absorbency = 0.7;
		heatIsolation = 1.04;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\BoonieHat.rvmat"}},{0.5,{"DZ\characters\headgear\data\BoonieHat_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\BoonieHat_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\BoonieHat.p3d";
			female = "\DZ\characters\headgear\BoonieHat.p3d";
		};
	};
	class BoonieHat_Black: BoonieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BoonieHat_Black0";
		color = "black";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BoonieHat_black_co.paa","DZ\characters\headgear\data\BoonieHat_black_co.paa","DZ\characters\headgear\data\BoonieHat_black_co.paa"};
	};
	class BoonieHat_Blue: BoonieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BoonieHat_Blue0";
		color = "Blue";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BoonieHat_Blue_co.paa","DZ\characters\headgear\data\BoonieHat_Blue_co.paa","DZ\characters\headgear\data\BoonieHat_Blue_co.paa"};
	};
	class BoonieHat_DPM: BoonieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BoonieHat_DPM0";
		color = "DPM";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BoonieHat_DPM_co.paa","DZ\characters\headgear\data\BoonieHat_DPM_co.paa","DZ\characters\headgear\data\BoonieHat_DPM_co.paa"};
	};
	class BoonieHat_Dubok: BoonieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BoonieHat_Dubok0";
		color = "dubok";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BoonieHat_dubok_co.paa","DZ\characters\headgear\data\BoonieHat_dubok_co.paa","DZ\characters\headgear\data\BoonieHat_dubok_co.paa"};
	};
	class BoonieHat_Flecktran: BoonieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BoonieHat_Flecktran0";
		color = "flecktran";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BoonieHat_flecktran_co.paa","DZ\characters\headgear\data\BoonieHat_flecktran_co.paa","DZ\characters\headgear\data\BoonieHat_flecktran_co.paa"};
	};
	class BoonieHat_NavyBlue: BoonieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BoonieHat_NavyBlue0";
		color = "NavyBlue";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BoonieHat_NavyBlue_co.paa","DZ\characters\headgear\data\BoonieHat_NavyBlue_co.paa","DZ\characters\headgear\data\BoonieHat_NavyBlue_co.paa"};
	};
	class BoonieHat_Olive: BoonieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BoonieHat_Olive0";
		color = "olive";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BoonieHat_olive_co.paa","DZ\characters\headgear\data\BoonieHat_olive_co.paa","DZ\characters\headgear\data\BoonieHat_olive_co.paa"};
	};
	class BoonieHat_Orange: BoonieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BoonieHat_Orange0";
		color = "orange";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BoonieHat_orange_co.paa","DZ\characters\headgear\data\BoonieHat_orange_co.paa","DZ\characters\headgear\data\BoonieHat_orange_co.paa"};
	};
	class BoonieHat_Red: BoonieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BoonieHat_Red0";
		color = "red";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BoonieHat_red_co.paa","DZ\characters\headgear\data\BoonieHat_red_co.paa","DZ\characters\headgear\data\BoonieHat_red_co.paa"};
	};
	class BoonieHat_Tan: BoonieHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BoonieHat_Tan0";
		color = "Tan";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BoonieHat_Tan_co.paa","DZ\characters\headgear\data\BoonieHat_Tan_co.paa","DZ\characters\headgear\data\BoonieHat_Tan_co.paa"};
	};
	class OfficerHat: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_OfficerHat0";
		descriptionShort = "$STR_CfgVehicles_OfficerHat1";
		model = "\DZ\characters\headgear\Officerhat_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 340;
		itemSize[] = {3,2};
		absorbency = 0.5;
		heatIsolation = 1.04;
		visibilityModifier = 0.98;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\Officerhat_co.paa","dz\characters\headgear\data\Officerhat_co.paa","dz\characters\headgear\data\Officerhat_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\Officerhat.rvmat","DZ\characters\headgear\data\Officerhat_damage.rvmat","DZ\characters\headgear\data\Officerhat_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\Officerhat_m.p3d";
			female = "\DZ\characters\headgear\Officerhat_f.p3d";
		};
	};
	class PoliceCap: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PoliceCap0";
		descriptionShort = "$STR_CfgVehicles_PoliceCap1";
		model = "\DZ\characters\headgear\PoliceCap_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 320;
		itemSize[] = {3,2};
		absorbency = 0.4;
		heatIsolation = 1.04;
		visibilityModifier = 0.98;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\PoliceCap_co.paa","dz\characters\headgear\data\PoliceCap_co.paa","dz\characters\headgear\data\PoliceCap_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\PoliceCap.rvmat","DZ\characters\headgear\data\PoliceCap_damage.rvmat","DZ\characters\headgear\data\PoliceCap_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\PoliceCap_m.p3d";
			female = "\DZ\characters\headgear\PoliceCap_f.p3d";
		};
	};
	class PilotkaCap: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PilotkaCap0";
		descriptionShort = "$STR_CfgVehicles_PilotkaCap1";
		model = "\DZ\characters\headgear\pilotka_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 140;
		itemSize[] = {2,1};
		absorbency = 0.5;
		heatIsolation = 0.7;
		visibilityModifier = 0.98;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\Pilotka_co.paa","dz\characters\headgear\data\Pilotka_co.paa","dz\characters\headgear\data\Pilotka_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\pilotka_m.p3d";
			female = "\DZ\characters\headgear\pilotka_f.p3d";
		};
	};
	class TankerHelmet: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TankerHelmet0";
		descriptionShort = "$STR_CfgVehicles_TankerHelmet1";
		model = "\DZ\characters\headgear\TankerHelmet_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 17;
		weight = 980;
		itemSize[] = {4,3};
		absorbency = 0.4;
		heatIsolation = 1.1;
		visibilityModifier = 0.98;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\TankerHelmet_black_co.paa","\DZ\characters\headgear\data\TankerHelmet_black_co.paa","\DZ\characters\headgear\data\TankerHelmet_black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\TankerHelmet.rvmat"}},{0.5,{"DZ\characters\headgear\data\TankerHelmet_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\TankerHelmet_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\TankerHelmet.p3d";
			female = "\DZ\characters\headgear\TankerHelmet.p3d";
		};
	};
	class GorkaHelmet: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_GorkaHelmet0";
		descriptionShort = "$STR_CfgVehicles_GorkaHelmet1";
		model = "\DZ\characters\headgear\Maska_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 1100;
		itemSize[] = {4,3};
		color = "Green";
		absorbency = 0;
		heatIsolation = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\maska_co.paa","\DZ\characters\headgear\data\maska_co.paa","\DZ\characters\headgear\data\maska_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\maska.rvmat","DZ\characters\headgear\data\maska_damage.rvmat","DZ\characters\headgear\data\maska_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\Maska.p3d";
			female = "\DZ\characters\headgear\Maska.p3d";
		};
	};
	class GorkaHelmet_Green: GorkaHelmet
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaHelmet_Green0";
		visibilityModifier = 0.7;
		color = "Green";
		lootCategory = "Crafted";
	};
	class GorkaHelmet_Black: GorkaHelmet
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaHelmet_Black0";
		visibilityModifier = 0.7;
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\maska_black_co.paa","\DZ\characters\headgear\data\maska_black_co.paa","\DZ\characters\headgear\data\maska_black_co.paa"};
	};
	class GorkaHelmetComplete: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_GorkaHelmetComplete0";
		descriptionShort = "$STR_CfgVehicles_GorkaHelmetComplete1";
		model = "\DZ\characters\headgear\Maska_complete_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		color = "Green";
		weight = 1100;
		itemSize[] = {4,3};
		attachments[] = {"Glass"};
		absorbency = 0;
		heatIsolation = 1;
		noMask = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\maska_co.paa","\DZ\characters\headgear\data\maska_co.paa","\DZ\characters\headgear\data\maska_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\maska.rvmat","DZ\characters\headgear\data\maska_damage.rvmat","DZ\characters\headgear\data\maska_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\Maska_complete.p3d";
			female = "\DZ\characters\headgear\Maska_complete.p3d";
		};
	};
	class GorkaHelmetComplete_Green: GorkaHelmetComplete
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaHelmetComplete_Green0";
		visibilityModifier = 0.7;
		color = "Green";
		lootCategory = "Crafted";
	};
	class GorkaHelmetComplete_Black: GorkaHelmetComplete
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaHelmetComplete_Black0";
		visibilityModifier = 0.7;
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\maska_black_co.paa","\DZ\characters\headgear\data\maska_black_co.paa","\DZ\characters\headgear\data\maska_black_co.paa"};
	};
	class FirefightersHelmet_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_FirefightersHelmet_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_FirefightersHelmet_ColorBase1";
		model = "\DZ\characters\headgear\FireHelmet_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 870;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\FireHelmet.rvmat"}},{0.5,{"DZ\characters\headgear\data\FireHelmet_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\FireHelmet_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.8;
					Blood = 0.85;
					Shock = 0.85;
				};
				class Melee
				{
					Health = 0.8;
					Blood = 0.8;
					Shock = 0.8;
				};
				class Infected
				{
					Health = 0.8;
					Blood = 0.8;
					Shock = 0.8;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\FireHelmet.p3d";
			female = "\DZ\characters\headgear\FireHelmet.p3d";
		};
	};
	class FirefightersHelmet_Red: FirefightersHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FirefightersHelmet_Red0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\FireHelmet_red_co.paa","\DZ\characters\headgear\data\FireHelmet_red_co.paa","\DZ\characters\headgear\data\FireHelmet_red_co.paa"};
	};
	class FirefightersHelmet_White: FirefightersHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FirefightersHelmet_White0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\FireHelmet_white_co.paa","\DZ\characters\headgear\data\FireHelmet_white_co.paa","\DZ\characters\headgear\data\FireHelmet_white_co.paa"};
	};
	class FirefightersHelmet_Yellow: FirefightersHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FirefightersHelmet_Yellow0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\FireHelmet_yellow_co.paa","\DZ\characters\headgear\data\FireHelmet_yellow_co.paa","\DZ\characters\headgear\data\FireHelmet_yellow_co.paa"};
	};
	class SkateHelmet_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_SkateHelmet_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_SkateHelmet_ColorBase1";
		model = "\DZ\characters\headgear\ProtecSkateHelmet2_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 460;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 0.5;
		noMask = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\ProtecSkateHelmet2.rvmat"}},{0.5,{"DZ\characters\headgear\data\ProtecSkateHelmet2_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\ProtecSkateHelmet2_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.9;
					Blood = 0.8;
					Shock = 0.8;
				};
				class Melee
				{
					Health = 0.8;
					Blood = 0.8;
					Shock = 0.8;
				};
				class Infected
				{
					Health = 0.8;
					Blood = 0.8;
					Shock = 0.8;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\ProtecSkateHelmet2_f.p3d";
			female = "\DZ\characters\headgear\ProtecSkateHelmet2_m.p3d";
		};
	};
	class SkateHelmet_Black: SkateHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SkateHelmet_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ProtecSkateHelmet2_black_CO.paa","\DZ\characters\headgear\data\ProtecSkateHelmet2_black_CO.paa","\DZ\characters\headgear\data\ProtecSkateHelmet2_black_CO.paa"};
	};
	class SkateHelmet_Blue: SkateHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SkateHelmet_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ProtecSkateHelmet2_blue_CO.paa","\DZ\characters\headgear\data\ProtecSkateHelmet2_blue_CO.paa","\DZ\characters\headgear\data\ProtecSkateHelmet2_blue_CO.paa"};
	};
	class SkateHelmet_Gray: SkateHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SkateHelmet_Gray0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ProtecSkateHelmet2_gray_CO.paa","\DZ\characters\headgear\data\ProtecSkateHelmet2_gray_CO.paa","\DZ\characters\headgear\data\ProtecSkateHelmet2_gray_CO.paa"};
	};
	class SkateHelmet_Green: SkateHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SkateHelmet_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ProtecSkateHelmet2_green_CO.paa","\DZ\characters\headgear\data\ProtecSkateHelmet2_green_CO.paa","\DZ\characters\headgear\data\ProtecSkateHelmet2_green_CO.paa"};
	};
	class SkateHelmet_Red: SkateHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SkateHelmet_Red0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\ProtecSkateHelmet2_red_CO.paa","\DZ\characters\headgear\data\ProtecSkateHelmet2_red_CO.paa","\DZ\characters\headgear\data\ProtecSkateHelmet2_red_CO.paa"};
	};
	class WeldingMask: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WeldingMask0";
		descriptionShort = "$STR_CfgVehicles_WeldingMask1";
		model = "\DZ\characters\masks\Welding_Mask_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 2200;
		itemSize[] = {2,3};
		absorbency = 0;
		heatIsolation = 0.5;
		visibilityModifier = 0.85;
		noMask = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\Welding_Mask_CO.paa","\DZ\characters\masks\data\Welding_Mask_CO.paa","\DZ\characters\masks\data\Welding_Mask_CO.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\masks\data\Welding_Mask.rvmat","DZ\characters\masks\data\Welding_Mask_damage.rvmat","DZ\characters\masks\data\Welding_Mask_destruct.rvmat","DZ\characters\masks\data\Welding_Mask_2.rvmat","DZ\characters\masks\data\Welding_Mask_2_damage.rvmat","DZ\characters\masks\data\Welding_Mask_2_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\masks\Welding_Mask_m.p3d";
			female = "\DZ\characters\masks\Welding_Mask_f.p3d";
		};
	};
	class PrisonerCap: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PrisonerCap0";
		descriptionShort = "$STR_CfgVehicles_PrisonerCap1";
		model = "\DZ\characters\headgear\prison_cap_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 17;
		weight = 80;
		itemSize[] = {3,2};
		absorbency = 0.9;
		heatIsolation = 0.3;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\prison_cap_co.paa","\DZ\characters\headgear\data\prison_cap_co.paa","\DZ\characters\headgear\data\prison_cap_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\prison_cap.rvmat"}},{0.5,{"DZ\characters\headgear\data\prison_cap_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\prison_cap_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\prison_cap_m.p3d";
			female = "\DZ\characters\headgear\prison_cap_f.p3d";
		};
	};
	class GhillieHood_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_GhillieHood_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_GhillieHood_ColorBase1";
		model = "\DZ\characters\headgear\GhillieHood_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 2;
		weight = 410;
		itemSize[] = {4,3};
		absorbency = 0.9;
		heatIsolation = 2;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camo","camo_backlight","dmg_all"};
		hiddenSelectionsMaterials[] = {"dz\characters\backpacks\data\ghillie.rvmat","dz\characters\backpacks\data\ghillie_backlit.rvmat","dz\characters\backpacks\data\ghillie.rvmat"};
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
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\GhillieHood.p3d";
			female = "\DZ\characters\headgear\GhillieHood.p3d";
		};
	};
	class GhillieHood_Tan: GhillieHood_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GhillieHood_Tan0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_tan_co.paa","\dz\characters\backpacks\data\ghillie_tan_co.paa","\dz\characters\backpacks\data\ghillie_tan_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\backpacks\data\ghillie_green_co.paa"}},{0.5,{"DZ\characters\backpacks\data\ghillie_tan_damage_co.paa"}},{0.0,{"DZ\characters\backpacks\data\ghillie_tan_destruct_co.paa"}}};
				};
				class GlobalArmor
				{
					class Projectile
					{
						Health = 0.9;
						Blood = 0.9;
						Shock = 1;
					};
					class Melee
					{
						Health = 0.9;
						Blood = 0.9;
						Shock = 1;
					};
					class Infected
					{
						Health = 0.9;
						Blood = 0.9;
						Shock = 1;
					};
				};
				componentNames[] = {"dmg_all"};
			};
		};
	};
	class GhillieHood_Woodland: GhillieHood_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GhillieHood_Woodland0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_green_co.paa","\dz\characters\backpacks\data\ghillie_green_co.paa","\dz\characters\backpacks\data\ghillie_green_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_green_co.paa","DZ\characters\backpacks\data\ghillie_green_damage_co.paa","DZ\characters\backpacks\data\ghillie_green_destruct_co.paa"};
			mat[] = {};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\backpacks\data\ghillie_green_co.paa"}},{0.5,{"DZ\characters\backpacks\data\ghillie_green_damage_co.paa"}},{0.0,{"DZ\characters\backpacks\data\ghillie_green_destruct_co.paa"}}};
				};
				class GlobalArmor
				{
					class Projectile
					{
						Health = 0.9;
						Blood = 0.9;
						Shock = 1;
					};
					class Melee
					{
						Health = 0.9;
						Blood = 0.9;
						Shock = 1;
					};
					class Infected
					{
						Health = 0.9;
						Blood = 0.9;
						Shock = 1;
					};
				};
				componentNames[] = {"dmg_all"};
			};
		};
	};
	class GhillieHood_Mossy: GhillieHood_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GhillieHood_Mossy0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_mossy_co.paa","\dz\characters\backpacks\data\ghillie_mossy_co.paa","\dz\characters\backpacks\data\ghillie_mossy_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\backpacks\data\ghillie_green_co.paa"}},{0.5,{"DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa"}},{0.0,{"DZ\characters\backpacks\data\ghillie_mossy_destruct_co.paa"}}};
				};
			};
		};
	};
	class LeatherHat_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_LeatherHat_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_LeatherHat_ColorBase1";
		model = "\DZ\characters\headgear\Hat_Leather_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 320;
		itemSize[] = {2,1};
		absorbency = 0;
		heatIsolation = 0.13;
		lootCategory = "Crafted";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		noMask = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\Hat_Leather_CO.paa","dz\characters\headgear\data\Hat_Leather_CO.paa","dz\characters\headgear\data\Hat_Leather_CO.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\Hat_Leather.p3d";
			female = "\DZ\characters\headgear\Hat_Leather.p3d";
		};
	};
	class LeatherHat_Natural: LeatherHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherHat_Natural0";
		visibilityModifier = 0.8;
		hiddenSelectionsMaterials[] = {"dz\characters\headgear\data\Hat_Leather_natural.rvmat","dz\characters\headgear\data\Hat_Leather_natural.rvmat","dz\characters\headgear\data\Hat_Leather_natural.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\characters\headgear\data\Hat_Leather_natural.rvmat","dz\characters\headgear\data\Hat_Leather_natural_damage.rvmat","dz\characters\headgear\data\Hat_Leather_natural_destruct.rvmat"};
		};
	};
	class LeatherHat_Beige: LeatherHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherHat_Beige0";
		visibilityModifier = 0.85;
		hiddenSelectionsMaterials[] = {"dz\characters\headgear\data\Hat_Leather_beige.rvmat","dz\characters\headgear\data\Hat_Leather_beige.rvmat","dz\characters\headgear\data\Hat_Leather_beige.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\characters\headgear\data\Hat_Leather_natural.rvmat","dz\characters\headgear\data\Hat_Leather_beige_damage.rvmat","dz\characters\headgear\data\Hat_Leather_beige_destruct.rvmat"};
		};
	};
	class LeatherHat_Brown: LeatherHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherHat_Brown0";
		visibilityModifier = 0.9;
		hiddenSelectionsMaterials[] = {"dz\characters\headgear\data\Hat_Leather_brown.rvmat","dz\characters\headgear\data\Hat_Leather_brown.rvmat","dz\characters\headgear\data\Hat_Leather_brown.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\characters\headgear\data\Hat_Leather_natural.rvmat","dz\characters\headgear\data\Hat_Leather_brown_damage.rvmat","dz\characters\headgear\data\Hat_Leather_brown_destruct.rvmat"};
		};
	};
	class LeatherHat_Black: LeatherHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherHat_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsMaterials[] = {"dz\characters\headgear\data\Hat_Leather_black.rvmat","dz\characters\headgear\data\Hat_Leather_black.rvmat","dz\characters\headgear\data\Hat_Leather_black.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\characters\headgear\data\Hat_Leather_natural.rvmat","dz\characters\headgear\data\Hat_Leather_black_damage.rvmat","dz\characters\headgear\data\Hat_Leather_black_destruct.rvmat"};
		};
	};
	class MedicalScrubsHat_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_MedicalScrubsHat_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsHat_ColorBase1";
		model = "\DZ\characters\headgear\MedicalScrubs_Hat_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 460;
		itemSize[] = {2,1};
		absorbency = 0;
		heatIsolation = 0.5;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\MedicalScrubs_Hat.rvmat","DZ\characters\headgear\data\MedicalScrubs_Hat_damage.rvmat","DZ\characters\headgear\data\MedicalScrubs_Hat_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\MedicalScrubs_Hat_f.p3d";
			female = "\DZ\characters\headgear\MedicalScrubs_Hat_m.p3d";
		};
	};
	class MedicalScrubsHat_Blue: MedicalScrubsHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsHat_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MedicalScrubs_Hat_blue_co.paa","\DZ\characters\headgear\data\MedicalScrubs_Hat_blue_co.paa","\DZ\characters\headgear\data\MedicalScrubs_Hat_blue_co.paa"};
	};
	class MedicalScrubsHat_White: MedicalScrubsHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsHat_White0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MedicalScrubs_Hat_white_co.paa","\DZ\characters\headgear\data\MedicalScrubs_Hat_white_co.paa","\DZ\characters\headgear\data\MedicalScrubs_Hat_white_co.paa"};
	};
	class MedicalScrubsHat_Green: MedicalScrubsHat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsHat_Green0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MedicalScrubs_Hat_green_co.paa","\DZ\characters\headgear\data\MedicalScrubs_Hat_green_co.paa","\DZ\characters\headgear\data\MedicalScrubs_Hat_green_co.paa"};
	};
	class GreatHelm: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_GreatHelm0";
		descriptionShort = "$STR_CfgVehicles_GreatHelm1";
		model = "\DZ\characters\headgear\greathelm_g.p3d";
		inventorySlot = "Headgear";
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 2000;
		itemSize[] = {3,4};
		absorbency = 0;
		heatIsolation = 0.2;
		noMask = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\greathelm_CO.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\greathelm.rvmat"}},{0.5,{"DZ\characters\headgear\data\greathelm_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\greathelm_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.7;
					Blood = 0.6;
					Shock = 0.6;
				};
				class Melee
				{
					Health = 0.4;
					Blood = 0.4;
					Shock = 0.5;
				};
				class Infected
				{
					Health = 0.4;
					Blood = 0.4;
					Shock = 0.5;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\greathelm.p3d";
			female = "\DZ\characters\headgear\greathelm.p3d";
		};
	};
	class Ssh68Helmet: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Ssh68Helmet0";
		descriptionShort = "$STR_CfgVehicles_Ssh68Helmet1";
		model = "\DZ\characters\headgear\Ssh68Helmet_g.p3d";
		inventorySlot = "Headgear";
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 1500;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 0.13;
		visibilityModifier = 0.7;
		noMask = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\SSH68Helmet_olive_co.paa","\DZ\characters\headgear\data\SSH68Helmet_olive_co.paa","\DZ\characters\headgear\data\SSH68Helmet_olive_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\SSH68Helmet.rvmat"}},{0.5,{"DZ\characters\headgear\data\SSH68Helmet_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\SSH68Helmet_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.5;
					Blood = 0.5;
					Shock = 0.5;
				};
				class Melee
				{
					Health = 0.6;
					Blood = 0.5;
					Shock = 0.5;
				};
				class Infected
				{
					Health = 0.6;
					Blood = 0.5;
					Shock = 0.5;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\Ssh68Helmet.p3d";
			female = "\DZ\characters\headgear\Ssh68Helmet.p3d";
		};
	};
	class DirtBikeHelmet_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_DirtBikeHelmet_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_DirtBikeHelmet_ColorBase1";
		model = "\DZ\characters\headgear\MxHelmet_g.p3d";
		inventorySlot = "Headgear";
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 1600;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 0.13;
		noMask = 1;
		attachments[] = {"DBHelmetVisor","DBHelmetMouth"};
		randomAttachments[] = {{"DirtBikeHelmet_Visor",""},{"DirtBikeHelmet_Mouthguard",""}};
		hiddenSelections[] = {"camo"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\MxHelmet.rvmat"}},{0.5,{"DZ\characters\headgear\data\MxHelmet_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\MxHelmet_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.8;
					Blood = 0.8;
					Shock = 0.8;
				};
				class Melee
				{
					Health = 0.7;
					Blood = 0.7;
					Shock = 0.6;
				};
				class Infected
				{
					Health = 0.7;
					Blood = 0.7;
					Shock = 0.6;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\MxHelmet.p3d";
			female = "\DZ\characters\headgear\MxHelmet.p3d";
		};
	};
	class DirtBikeHelmet_Green: DirtBikeHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DirtBikeHelmet_Green0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MxHelmet_green_co.paa"};
	};
	class DirtBikeHelmet_Chernarus: DirtBikeHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DirtBikeHelmet_Chernarus0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MxHelmet_chernarus_co.paa"};
	};
	class DirtBikeHelmet_Khaki: DirtBikeHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DirtBikeHelmet_Khaki0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MxHelmet_khaki_co.paa"};
	};
	class DirtBikeHelmet_Police: DirtBikeHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DirtBikeHelmet_Police0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MxHelmet_police_co.paa"};
	};
	class DirtBikeHelmet_Red: DirtBikeHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DirtBikeHelmet_Red0";
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MxHelmet_red_co.paa"};
	};
	class DirtBikeHelmet_Black: DirtBikeHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DirtBikeHelmet_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MxHelmet_black_co.paa"};
	};
	class DirtBikeHelmet_Blue: DirtBikeHelmet_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_DirtBikeHelmet_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\MxHelmet_blue_co.paa"};
	};
	class DirtBikeHelmet_Visor: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_DirtBikeHelmet_Visor0";
		descriptionShort = "$STR_CfgVehicles_DirtBikeHelmet_Visor1";
		model = "\dz\characters\headgear\MxHelmet_visor.p3d";
		rotationFlags = 16;
		itemSize[] = {3,2};
		inventorySlot = "DBHelmetVisor";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\MxHelmet.rvmat"}},{0.5,{"DZ\characters\headgear\data\MxHelmet_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\MxHelmet_destruct.rvmat"}}};
				};
			};
		};
	};
	class DirtBikeHelmet_Mouthguard: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_DirtBikeHelmet_Mouthguard0";
		descriptionShort = "$STR_CfgVehicles_DirtBikeHelmet_Mouthguard1";
		model = "\dz\characters\headgear\MxHelmet_mouthguard.p3d";
		rotationFlags = 17;
		itemSize[] = {3,2};
		inventorySlot = "DBHelmetMouth";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\MxHelmet.rvmat"}},{0.5,{"DZ\characters\headgear\data\MxHelmet_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\MxHelmet_destruct.rvmat"}}};
				};
			};
		};
	};
	class NBCHoodBase: Clothing
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_NBCHoodBase0";
		descriptionShort = "$STR_CfgVehicles_NBCHoodBase1";
		model = "\DZ\characters\headgear\NBC_Hood_g.p3d";
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 460;
		itemSize[] = {2,1};
		absorbency = 0;
		heatIsolation = 0.5;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "\DZ\characters\headgear\NBC_Hood_m.p3d";
			female = "\DZ\characters\headgear\NBC_Hood_f.p3d";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\NBC_Hood.rvmat","DZ\characters\headgear\data\NBC_Hood_damage.rvmat","DZ\characters\headgear\data\NBC_Hood_destruct.rvmat"};
		};
	};
	class NBCHoodGray: NBCHoodBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_NBCHoodGray0";
		hiddenSelectionsTextures[] = {"\dz\characters\headgear\data\NBC_Hood_grey_co.paa","\dz\characters\headgear\data\NBC_Hood_grey_co.paa","\dz\characters\headgear\data\NBC_Hood_grey_co.paa"};
	};
	class Universal_Bandana_Redpattern: Clothing_Base
	{
		scope = 2;
		displayName = "$STR_Universal_Bandana_Redpattern0";
		descriptionShort = "$STR_Universal_Bandana_Redpattern1";
		model = "\dz\characters\headgear\Bandana_Staged.p3d";
		color = "redpattern";
		armAction = "Disarm";
		inventorySlot = "Headgear";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Headgear","Mask"};
		weight = 119;
		itemSize[] = {2,1};
		absorbency = 0.3;
		ragQuantity = 1;
		rotationFlags = 17;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		noMask = 1;
		proxySelections[] = {"CS_Ground","CS_Mask","CS_Head_Male","CS_Head_Female"};
		class AnimationSources
		{
			class CS_Ground
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class CS_Mask
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class CS_Head_Male
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class CS_Head_Female
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
		class Staging
		{
			class Stage_1
			{
				displayName = "$STR_Universal_Bandana_Redpattern_Staging_Stage_10";
				descriptionShort = "$STR_Universal_Bandana_Redpattern_Staging_Stage_11";
				ContinuousActions[] = {113,112};
				varQuantityInit = 1.0;
				varQuantityMin = 0.0;
				varQuantityMax = 1.0;
				varQuantityDestroyOnMin = 1;
				class Damage
				{
					tex[] = {};
					mat[] = {"DZ\gear\consumables\data\duct_tape.rvmat","DZ\gear\consumables\data\duct_tape_damage.rvmat","DZ\gear\consumables\data\duct_tape_destruct.rvmat"};
				};
				hiddenSelectionsTextures[] = {"dz\characters\headgear\data\BandanaFH_ground_redpattern_co.paa","",""};
			};
			class Stage_2
			{
				displayName = "$STR_Universal_Bandana_Redpattern_Staging_Stage_20";
				descriptionShort = "$STR_Universal_Bandana_Redpattern_Staging_Stage_21";
				armAction = "OneHanded";
				absorbency = 0.9;
				heatIsolation = 0.5;
				class Damage
				{
					tex[] = {};
					mat[] = {"DZ\characters\headgear\data\BandanaF.rvmat","DZ\characters\headgear\data\BandanaF_damage.rvmat","DZ\characters\headgear\data\BandanaF_destruct.rvmat"};
				};
				class DamageArmor
				{
					biological = 0.8;
				};
				class ClothingTypes
				{
					male = "\DZ\characters\masks\BandanaFace_m.p3d";
					female = "\DZ\characters\masks\BandanaFace_f.p3d";
				};
				hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaF_redpattern_co.paa","DZ\characters\headgear\data\BandanaF_redpattern_co.paa","DZ\characters\headgear\data\BandanaF_redpattern_co.paa"};
			};
			class Stage_3
			{
				displayName = "$STR_Universal_Bandana_Redpattern_Staging_Stage_30";
				descriptionShort = "$STR_Universal_Bandana_Redpattern_Staging_Stage_31";
				armAction = "OneHanded";
				rotationFlags = 16;
				absorbency = 0.9;
				heatIsolation = 0.8;
				class Damage
				{
					tex[] = {};
					mat[] = {"DZ\characters\headgear\data\BandanaH.rvmat","DZ\characters\headgear\data\BandanaH_damage.rvmat","DZ\characters\headgear\data\BandanaH_destruct.rvmat"};
				};
				class DamageArmor
				{
					bleed = 0.1;
				};
				class ClothingTypes
				{
					male = "\DZ\characters\headgear\BandanaHead_m.p3d";
					female = "\DZ\characters\headgear\BandanaHead_f.p3d";
				};
				hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaH_redpattern_co.paa","DZ\characters\headgear\data\BandanaH_redpattern_co.paa","DZ\characters\headgear\data\BandanaH_redpattern_co.paa"};
			};
		};
	};
	class CfgNonAIVehicles
	{
		class ProxyAttachment;
		class ProxyBandana_Staged: ProxyAttachment
		{
			scope = 2;
			model = "\dz\characters\headgear\Bandana_Staged.p3d";
		};
		class ProxyHeadgear;
		class BandanaHead_m: ProxyHeadgear
		{
			model = "\DZ\characters\headgear\BandanaHead_m.p3d";
		};
		class ProxyMask;
		class BandanaFace_m: ProxyMask
		{
			model = "\DZ\characters\masks\BandanaFace_m.p3d";
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMxHelmet_visor: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "DBHelmetVisor";
		model = "\dz\characters\headgear\MxHelmet_visor.p3d";
	};
	class ProxyMxHelmet_mouthguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "DBHelmetMouth";
		model = "\dz\characters\headgear\MxHelmet_mouthguard.p3d";
	};
};
//};
