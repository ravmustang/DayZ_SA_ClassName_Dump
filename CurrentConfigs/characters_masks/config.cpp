////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:03:56 2018 : 'file' last modified on Wed Aug 22 15:50:19 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\characters_masks\config.bin{
class CfgPatches
{
	class DZ_Characters_Masks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class GasMask: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_GasMask0";
		descriptionShort = "$STR_CfgVehicles_GasMask1";
		model = "\DZ\characters\masks\GasMask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 730;
		itemSize[] = {2,3};
		heatIsolation = 0.8;
		visibilityModifier = 0.9;
		noHelmet = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\masks\data\GasMask_co.paa","\dz\characters\masks\data\GasMask_co.paa","\dz\characters\masks\data\GasMask_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\masks\data\GasMask.rvmat","DZ\characters\masks\data\GasMask_damage.rvmat","DZ\characters\masks\data\GasMask_destruct.rvmat"};
		};
		class DamageArmor
		{
			biological = 1;
			bleed = 0.3;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\masks\GasMask_m.p3d";
			female = "\DZ\characters\masks\GasMask_f.p3d";
		};
	};
	class BandanaMask_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_BandanaMask_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_BandanaMask_ColorBase1";
		model = "\DZ\characters\masks\BandanaFace_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		weight = 510;
		itemSize[] = {2,1};
		ragQuantity = 1;
		absorbency = 0.9;
		heatIsolation = 0.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
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
	};
	class BandanaMask_RedPattern: BandanaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BandanaMask_RedPattern0";
		color = "redpattern";
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaF_redpattern_co.paa","DZ\characters\headgear\data\BandanaF_redpattern_co.paa","DZ\characters\headgear\data\BandanaF_redpattern_co.paa"};
	};
	class BandanaMask_BlackPattern: BandanaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BandanaMask_BlackPattern0";
		color = "blackpattern";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaF_blackpattern_co.paa","DZ\characters\headgear\data\BandanaF_blackpattern_co.paa","DZ\characters\headgear\data\BandanaF_blackpattern_co.paa"};
	};
	class BandanaMask_PolkaPattern: BandanaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BandanaMask_PolkaPattern0";
		color = "polkapattern";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaF_karkulka_co.paa","DZ\characters\headgear\data\BandanaF_karkulka_co.paa","DZ\characters\headgear\data\BandanaF_karkulka_co.paa"};
	};
	class BandanaMask_GreenPattern: BandanaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BandanaMask_GreenPattern0";
		color = "greenpattern";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaFHG_olive_co.paa","DZ\characters\headgear\data\BandanaFHG_olive_co.paa","DZ\characters\headgear\data\BandanaFHG_olive_co.paa"};
	};
	class BandanaMask_CamoPattern: BandanaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BandanaMask_CamoPattern0";
		color = "camopattern";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa","DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa","DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa"};
	};
	class NioshFaceMask: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_NioshFaceMask0";
		descriptionShort = "$STR_CfgVehicles_NioshFaceMask1";
		model = "\DZ\characters\masks\NioshFaceMask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 16;
		weight = 340;
		itemSize[] = {2,1};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\NioshFaceMask_co.paa","\DZ\characters\masks\data\NioshFaceMask_co.paa","\DZ\characters\masks\data\NioshFaceMask_co.paa"};
		class DamageArmor
		{
			biological = 0.8;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\masks\data\NioshFaceMask.rvmat"}},{0.5,{"DZ\characters\masks\data\NioshFaceMask_damage.rvmat"}},{0.0,{"DZ\characters\masks\data\NioshFaceMask_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\masks\NioshFaceMask_m.p3d";
			female = "\DZ\characters\masks\NioshFaceMask_f.p3d";
		};
	};
	class BalaclavaMask_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_BalaclavaMask_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_BalaclavaMask_ColorBase1";
		model = "\DZ\characters\masks\Balaclava_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 1;
		weight = 130;
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
			mat[] = {"DZ\characters\masks\data\Balaclava.rvmat","DZ\characters\masks\data\Balaclava_damage.rvmat","DZ\characters\masks\data\Balaclava_destruct.rvmat"};
		};
		class DamageArmor
		{
			biological = 0.5;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\masks\Balaclava_m.p3d";
			female = "\DZ\characters\masks\Balaclava_f.p3d";
		};
	};
	class BalaclavaMask_Black: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BalaclavaMask_Black0";
		color = "black";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\Balaclava_black_co.paa","\DZ\characters\masks\data\Balaclava_black_co.paa","\DZ\characters\masks\data\Balaclava_black_co.paa"};
	};
	class BalaclavaMask_Blackskull: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BalaclavaMask_Blackskull0";
		color = "blackskull";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\Balaclava_blackskull_co.paa","\DZ\characters\masks\data\Balaclava_blackskull_co.paa","\DZ\characters\masks\data\Balaclava_blackskull_co.paa"};
	};
	class BalaclavaMask_Beige: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BalaclavaMask_Beige0";
		color = "beige";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\Balaclava_beige_co.paa","\DZ\characters\masks\data\Balaclava_beige_co.paa","\DZ\characters\masks\data\Balaclava_beige_co.paa"};
	};
	class BalaclavaMask_Blue: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BalaclavaMask_Blue0";
		color = "blue";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\Balaclava_blue_co.paa","\DZ\characters\masks\data\Balaclava_blue_co.paa","\DZ\characters\masks\data\Balaclava_blue_co.paa"};
	};
	class BalaclavaMask_Green: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BalaclavaMask_Green0";
		color = "green";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\Balaclava_green_co.paa","\DZ\characters\masks\data\Balaclava_green_co.paa","\DZ\characters\masks\data\Balaclava_green_co.paa"};
	};
	class BalaclavaMask_Pink: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BalaclavaMask_Pink0";
		color = "pink";
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\Balaclava_pink_co.paa","\DZ\characters\masks\data\Balaclava_pink_co.paa","\DZ\characters\masks\data\Balaclava_pink_co.paa"};
	};
	class BalaclavaMask_White: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BalaclavaMask_White0";
		color = "white";
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\Balaclava_white_co.paa","\DZ\characters\masks\data\Balaclava_white_co.paa","\DZ\characters\masks\data\Balaclava_white_co.paa"};
	};
	class DallasMask: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_DallasMask0";
		descriptionShort = "$STR_CfgVehicles_DallasMask1";
		model = "\DZ\characters\masks\DallasMask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 16;
		weight = 350;
		itemSize[] = {2,3};
		noHelmet = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\Dallas_Mask_co.paa","\DZ\characters\masks\data\Dallas_Mask_co.paa","\DZ\characters\masks\data\Dallas_Mask_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\masks\data\Dallas_Mask.rvmat","DZ\characters\masks\data\Dallas_Mask_damage.rvmat","DZ\characters\masks\data\Dallas_Mask_destruct.rvmat","DZ\characters\masks\data\Dallas_Mask_inside.rvmat","DZ\characters\masks\data\Dallas_Mask_inside_damage.rvmat","DZ\characters\masks\data\Dallas_Mask_inside_destruct.rvmat"};
		};
		class DamageArmor
		{
			biological = 0.2;
			bleed = 0.1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\masks\data\Dallas_mask.rvmat","DZ\characters\masks\data\Dallas_mask_inside.rvmat"}},{0.5,{"DZ\characters\masks\data\Dallas_mask_damage.rvmat","DZ\characters\masks\data\Dallas_mask_inside_damage.rvmat"}},{0.0,{"DZ\characters\masks\data\Dallas_mask_destruct.rvmat","DZ\characters\masks\data\Dallas_mask_inside_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\masks\DallasMask_m.p3d";
			female = "\DZ\characters\masks\DallasMask_f.p3d";
		};
	};
	class HoxtonMask: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_HoxtonMask0";
		descriptionShort = "$STR_CfgVehicles_HoxtonMask1";
		model = "\DZ\characters\masks\HoxtonMask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		weight = 320;
		itemSize[] = {2,3};
		noHelmet = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\Hoxton_Mask_co.paa","\DZ\characters\masks\data\Hoxton_Mask_co.paa","\DZ\characters\masks\data\Hoxton_Mask_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\masks\data\Hoxton_Mask.rvmat","DZ\characters\masks\data\Hoxton_Mask_damage.rvmat","DZ\characters\masks\data\Hoxton_Mask_destruct.rvmat","DZ\characters\masks\data\Dallas_Mask_inside.rvmat","DZ\characters\masks\data\Dallas_Mask_inside_damage.rvmat","DZ\characters\masks\data\Dallas_Mask_inside_destruct.rvmat"};
		};
		class DamageArmor
		{
			biological = 0.2;
			bleed = 0.1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\masks\data\Hoxton_Mask.rvmat","DZ\characters\masks\data\Dallas_mask_inside.rvmat"}},{0.5,{"DZ\characters\masks\data\Hoxton_Mask_damage.rvmat","DZ\characters\masks\data\Dallas_mask_inside_damage.rvmat"}},{0.0,{"DZ\characters\masks\data\Hoxton_Mask_destruct.rvmat","DZ\characters\masks\data\Dallas_mask_inside_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\masks\HoxtonMask_m.p3d";
			female = "\DZ\characters\masks\HoxtonMask_f.p3d";
		};
	};
	class WolfMask: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WolfMask0";
		descriptionShort = "$STR_CfgVehicles_WolfMask1";
		model = "\DZ\characters\masks\WolfMask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		weight = 360;
		itemSize[] = {2,3};
		noHelmet = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\masks\data\Wolf_Mask_co.paa","\DZ\characters\masks\data\Wolf_Mask_co.paa","\DZ\characters\masks\data\Wolf_Mask_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\masks\data\Wolf_Mask.rvmat","DZ\characters\masks\data\Wolf_Mask_damage.rvmat","DZ\characters\masks\data\Wolf_Mask_destruct.rvmat","DZ\characters\masks\data\Dallas_Mask_inside.rvmat","DZ\characters\masks\data\Dallas_Mask_inside_damage.rvmat","DZ\characters\masks\data\Dallas_Mask_inside_destruct.rvmat"};
		};
		class DamageArmor
		{
			biological = 0.2;
			bleed = 0.1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\masks\data\Wolf_Mask.rvmat","DZ\characters\masks\data\Dallas_mask_inside.rvmat"}},{0.5,{"DZ\characters\masks\data\Wolf_Mask_damage.rvmat","DZ\characters\masks\data\Dallas_mask_inside_damage.rvmat"}},{0.0,{"DZ\characters\masks\data\Wolf_Mask_destruct.rvmat","DZ\characters\masks\data\Dallas_mask_inside_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\masks\WolfMask_m.p3d";
			female = "\DZ\characters\masks\WolfMask_f.p3d";
		};
	};
	class GP5GasMask: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_GP5GasMask0";
		descriptionShort = "$STR_CfgVehicles_GP5GasMask1";
		model = "\DZ\characters\masks\GP5GasMask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 1;
		weight = 1090;
		itemSize[] = {2,3};
		absorbency = 0;
		heatIsolation = 0.8;
		visibilityModifier = 0.95;
		noHelmet = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\masks\data\GP5GasMask_white_co.paa","\dz\characters\masks\data\GP5GasMask_white_co.paa","\dz\characters\masks\data\GP5GasMask_white_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\masks\data\GP5GasMask.rvmat","DZ\characters\masks\data\GP5GasMask_damage.rvmat","DZ\characters\masks\data\GP5GasMask_destruct.rvmat"};
		};
		class DamageArmor
		{
			biological = 1;
			bleed = 0.3;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\masks\GP5GasMask_m.p3d";
			female = "\DZ\characters\masks\GP5GasMask_f.p3d";
		};
	};
};
//};
