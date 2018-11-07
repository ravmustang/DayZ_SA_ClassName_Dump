////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:04:07 2018 : 'file' last modified on Wed Aug 22 16:05:15 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\characters_tops\config.bin{
class CfgPatches
{
	class DZ_Characters_Tops
	{
		units[] = {"Shirt_CheckRed","Hoodie_Blue","Hoodie_Black","Hoodie_Brown","Hoodie_Green","Hoodie_Grey","Hoodie_Red","MaleTorso","FemaleTorso"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class MaleTorso_Base: Inventory_Base
	{
		scope = 1;
		displayName = "$STR_MaleTorso_Base0";
		model = "\DZ\characters\tops\torso3_m.p3d";
		inventorySlot = "Body";
		hiddenSelections[] = {"personality"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.843137,0.768627,0.658824,1.0,CO)"};
	};
	class MaleAdamTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved_co.paa"};
	};
	class MaleBorisTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved_co.paa"};
	};
	class MaleCyrilTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved_co.paa"};
	};
	class MaleDenisTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved_co.paa"};
	};
	class MaleEliasTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved_co.paa"};
	};
	class MaleFrancisTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved_co.paa"};
	};
	class MaleGuoTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved_co.paa"};
	};
	class MaleHassanTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved_co.paa"};
	};
	class MaleIndarTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved_co.paa"};
	};
	class MaleJoseTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved_co.paa"};
	};
	class MaleKaitoTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved_co.paa"};
	};
	class MaleLewisTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_co.paa"};
	};
	class MaleManuaTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_co.paa"};
	};
	class MaleNikiTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_co.paa"};
	};
	class MaleOliverTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_co.paa"};
	};
	class MalePeterTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved_co.paa"};
	};
	class MaleQuinnTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_co.paa"};
	};
	class MaleRolfTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_co.paa"};
	};
	class MaleSethTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_co.paa"};
	};
	class MaleTaikiTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_co.paa"};
	};
	class FemaleTorso_Base: Inventory_Base
	{
		scope = 1;
		displayName = "$STR_FemaleTorso_Base0";
		model = "\DZ\characters\tops\torso3_f.p3d";
		inventorySlot = "Body";
		hiddenSelections[] = {"personality"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.843137,0.768627,0.658824,1.0,CO)"};
	};
	class FemaleEvaTorso: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_co.paa"};
	};
	class FemaleFridaTorso: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Frida_2\hhl_f_frida_body_co.paa"};
	};
	class FemaleGabiTorso: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body_co.paa"};
	};
	class FemaleHelgaTorso: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Helga\hhl_f_Helga_body_co.paa"};
	};
	class FemaleIrenaTorso: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body_co.paa"};
	};
	class FemaleJudyTorso: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Judy\hhl_f_Judy_body_co.paa"};
	};
	class FemaleKeikoTorso: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body_co.paa"};
	};
	class FemaleLindaTorso: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body_co.paa"};
	};
	class FemaleMariaTorso: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body_co.paa"};
	};
	class FemaleNaomiTorso: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body_co.paa"};
	};
	class MaleAdamDecayedTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed.paa"};
	};
	class MaleAdamDecayedDarkTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed_dark.paa"};
	};
	class MaleAdamDecayedLighterDarkTorso: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed_lighter_dark.paa"};
	};
	class MaleBorisTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved_decayed_co.paa"};
	};
	class MaleCyrilTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved_decayed_co.paa"};
	};
	class MaleDenisTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved_decayed_co.paa"};
	};
	class MaleEliasTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved_decayed_co.paa"};
	};
	class MaleFrancisTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved_decayed_co.paa"};
	};
	class MaleGuoTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved_decayed_co.paa"};
	};
	class MaleHassanTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved_decayed_co.paa"};
	};
	class MaleIndarTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved_decayed_co.paa"};
	};
	class MaleJoseTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved_decayed_co.paa"};
	};
	class MaleKaitoTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved_decayed_co.paa"};
	};
	class MaleLewisTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_decayed_co.paa"};
	};
	class MaleManuaTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_decayed_co.paa"};
	};
	class MaleNikiTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_decayed_co.paa"};
	};
	class MaleOliverTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_decayed_co.paa"};
	};
	class MalePeterTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved_decayed_co.paa"};
	};
	class MaleQuinnTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_decayed_co.paa"};
	};
	class MaleRolfTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_decayed_co.paa"};
	};
	class MaleSethTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_decayed_co.paa"};
	};
	class MaleTaikiTorsoDecayed: MaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_decayed_co.paa"};
	};
	class FemaleEvaTorsoDecayed: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_decayed_co.paa"};
	};
	class FemaleFridaTorsoDecayed: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Frida_2\hhl_f_frida_body_decayed_co.paa"};
	};
	class FemaleGabiTorsoDecayed: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body_decayed_co.paa"};
	};
	class FemaleHelgaTorsoDecayed: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Helga\hhl_f_Helga_body_decayed_co.paa"};
	};
	class FemaleIrenaTorsoDecayed: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body_decayed_co.paa"};
	};
	class FemaleJudyTorsoDecayed: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Judy\hhl_f_Judy_body_decayed_co.paa"};
	};
	class FemaleKeikoTorsoDecayed: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body_decayed_co.paa"};
	};
	class FemaleLindaTorsoDecayed: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body_decayed_co.paa"};
	};
	class FemaleMariaTorsoDecayed: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body_decayed_co.paa"};
	};
	class FemaleNaomiTorsoDecayed: FemaleTorso_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body_decayed_co.paa"};
	};
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class Armband_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_Armband_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Armband_ColorBase1";
		model = "\DZ\characters\tops\armbend_g.p3d";
		rotationFlags = 34;
		ContinuousActions[] = {190};
		inventorySlot = "Armband";
		itemInfo[] = {"Clothing","Armband"};
		weight = 80;
		itemSize[] = {2,1};
		ragQuantity = 1;
		canBeSplit = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 5;
		heatIsolation = 0.2;
		absorbency = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","camoMaleBig","camoFemaleBig"};
		class DamageArmor
		{
			bleed = 0.1;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\armbend_dynamic_m.p3d";
			female = "\DZ\characters\tops\armbend_dynamic_f.p3d";
		};
	};
	class Armband_Dyed: Armband_ColorBase
	{
		scope = 1;
		descriptionShort = "$STR_CfgVehicles_Armband_Dyed0";
		color = "Dyed";
		hiddenSelectionsTextures[] = {"","","","",""};
	};
	class Armband_White: Armband_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Armband_White0";
		color = "White";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\armbend_white_g_co.paa","\dz\characters\tops\data\armbend_small_white_co.paa","\dz\characters\tops\data\armbend_small_white_co.paa","\dz\characters\tops\Data\armbend_big_white_co.paa","\dz\characters\tops\Data\armbend_big_white_co.paa"};
	};
	class Armband_Yellow: Armband_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Armband_Yellow0";
		color = "Yellow";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\armbend_yellow_g_co.paa","\dz\characters\tops\data\armbend_small_yellow_co.paa","\dz\characters\tops\data\armbend_small_yellow_co.paa","\dz\characters\tops\Data\armbend_big_yellow_co.paa","\dz\characters\tops\Data\armbend_big_yellow_co.paa"};
	};
	class Armband_Orange: Armband_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Armband_Orange0";
		color = "Orange";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\armbend_g_co.paa","\dz\characters\tops\data\armbend_small_co.paa","\dz\characters\tops\data\armbend_small_co.paa","\dz\characters\tops\Data\armbend_big_co.paa","\dz\characters\tops\Data\armbend_big_co.paa"};
	};
	class Armband_Red: Armband_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Armband_Red0";
		color = "Red";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\armbends_red_co.paa","\dz\characters\tops\data\armbend_small_red_co.paa","\dz\characters\tops\data\armbend_small_red_co.paa","\dz\characters\tops\Data\armbend_big_red_co.paa","\dz\characters\tops\Data\armbend_big_red_co.paa"};
	};
	class Armband_Green: Armband_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Armband_Green0";
		visibilityModifier = 0.9;
		color = "Green";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\armbend_green_g_co.paa","\dz\characters\tops\data\armbend_small_green_co.paa","\dz\characters\tops\data\armbend_small_green_co.paa","\dz\characters\tops\Data\armbend_big_green_co.paa","\dz\characters\tops\Data\armbend_big_green_co.paa"};
	};
	class Armband_Pink: Armband_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Armband_Pink0";
		color = "Pink";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\armbends_pink_co.paa","\dz\characters\tops\data\armbend_small_pink_co.paa","\dz\characters\tops\data\armbend_small_pink_co.paa","\dz\characters\tops\Data\armbend_big_pink_co.paa","\dz\characters\tops\Data\armbend_big_pink_co.paa"};
	};
	class Armband_Blue: Armband_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Armband_Blue0";
		visibilityModifier = 0.95;
		color = "Blue";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\armbend_blue_g_co.paa","\dz\characters\tops\data\armbend_small_blue_co.paa","\dz\characters\tops\data\armbend_small_blue_co.paa","\dz\characters\tops\Data\armbend_big_blue_co.paa","\dz\characters\tops\Data\armbend_big_blue_co.paa"};
	};
	class Armband_Black: Armband_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Armband_Black0";
		visibilityModifier = 0.85;
		color = "Black";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\armbends_black_co.paa","\dz\characters\tops\data\armbends_black_co.paa","\dz\characters\tops\data\armbends_black_co.paa","\dz\characters\tops\data\armbends_black_co.paa","\dz\characters\tops\data\armbends_black_co.paa"};
	};
	class Sweater_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_Sweater_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Sweater_ColorBase1";
		model = "\DZ\characters\tops\sweater_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 1320;
		itemSize[] = {3,2};
		itemsCargoSize[] = {3,2};
		quickBarBonus = 1;
		ragQuantity = 4;
		absorbency = 1;
		heatIsolation = 12;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\sweater.rvmat","DZ\characters\tops\Data\sweater_g.rvmat"}},{0.5,{"DZ\characters\tops\Data\sweater_damage.rvmat","DZ\characters\tops\Data\sweater_g_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\sweater_destruct.rvmat","DZ\characters\tops\Data\sweater_g_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\sweater_m.p3d";
			female = "\DZ\characters\tops\sweater_f.p3d";
		};
	};
	class Sweater_Gray: Sweater_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Sweater_Gray0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\sweater_chalk_g_co.paa","\dz\characters\tops\data\sweater_chalkstone_co.paa","\dz\characters\tops\data\sweater_chalkstone_co.paa"};
	};
	class Sweater_Blue: Sweater_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Sweater_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\sweater_navy_g_co.paa","\dz\characters\tops\data\sweater_navy_co.paa","\dz\characters\tops\data\sweater_navy_co.paa"};
	};
	class Sweater_Green: Sweater_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Sweater_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\sweater_loden_g_co.paa","\dz\characters\tops\data\sweater_loden_co.paa","\dz\characters\tops\data\sweater_loden_co.paa"};
	};
	class Sweater_Red: Sweater_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Sweater_Red0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\sweater_red_g_co.paa","\dz\characters\tops\data\sweater_red_co.paa","\dz\characters\tops\data\sweater_red_co.paa"};
	};
	class Shirt_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_Shirt_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Shirt_ColorBase1";
		model = "\DZ\characters\tops\Shirt_ground.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 270;
		itemSize[] = {2,2};
		itemsCargoSize[] = {3,2};
		quickBarBonus = 1;
		ragQuantity = 4;
		absorbency = 0.8;
		heatIsolation = 5.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\Shirt.rvmat","DZ\characters\tops\Data\Shirt_ground.rvmat"}},{0.5,{"DZ\characters\tops\Data\Shirt_damage.rvmat","DZ\characters\tops\Data\Shirt_ground_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\Shirt_destruct.rvmat","DZ\characters\tops\Data\Shirt_ground_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\shirt_m.p3d";
			female = "\DZ\characters\tops\shirt_f.p3d";
		};
	};
	class Shirt_BlueCheck: Shirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Shirt_BlueCheck0";
		visibilityModifier = 0.98;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Shirt_ground_checkBlue_co.paa","\dz\characters\tops\data\shirt_checkBlue_co.paa","\dz\characters\tops\data\shirt_checkBlue_co.paa"};
	};
	class Shirt_BlueCheckBright: Shirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Shirt_BlueCheckBright0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Shirt_ground_checkBlueBright_co.paa","\dz\characters\tops\data\shirt_checkBlueBright_co.paa","\dz\characters\tops\data\shirt_checkBlueBright_co.paa"};
	};
	class Shirt_GreenCheck: Shirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Shirt_GreenCheck0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Shirt_ground_checkGreen_co.paa","\dz\characters\tops\data\shirt_checkGreen_co.paa","\dz\characters\tops\data\shirt_checkGreen_co.paa"};
	};
	class Shirt_RedCheck: Shirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Shirt_RedCheck0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Shirt_ground_checkRed_co.paa","\dz\characters\tops\data\shirt_checkRed_co.paa","\dz\characters\tops\data\shirt_checkRed_co.paa"};
	};
	class Shirt_WhiteCheck: Shirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Shirt_WhiteCheck0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Shirt_ground_checkWhite_co.paa","\dz\characters\tops\data\shirt_checkWhite_co.paa","\dz\characters\tops\data\shirt_checkWhite_co.paa"};
	};
	class Shirt_PlaneBlack: Shirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Shirt_PlaneBlack0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Shirt_ground_planeBlack_co.paa","\dz\characters\tops\data\shirt_planeBlack_co.paa","\dz\characters\tops\data\shirt_planeBlack_co.paa"};
	};
	class TShirt_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_TShirt_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_TShirt_ColorBase1";
		model = "\DZ\characters\tops\tshirt_ground.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 310;
		itemSize[] = {2,2};
		absorbency = 0.8;
		heatIsolation = 5.2;
		ragQuantity = 2;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.05;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\tshirt.rvmat","DZ\characters\tops\Data\tshirt_ground.rvmat"}},{0.5,{"DZ\characters\tops\Data\tshirt_damage.rvmat","DZ\characters\tops\Data\tshirt_ground_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\tshirt_destruct.rvmat","DZ\characters\tops\Data\tshirt_ground_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\tshirt_m.p3d";
			female = "\DZ\characters\tops\tshirt_f.p3d";
		};
	};
	class TShirt_Beige: TShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TShirt_Beige0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\tops\Data\tshirt_ground_beige_co.paa","\DZ\characters\tops\Data\tshirt_beige_co.paa","\DZ\characters\tops\Data\tshirt_beige_co.paa"};
	};
	class TShirt_Black: TShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TShirt_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\tops\Data\tshirt_ground_black_co.paa","\DZ\characters\tops\Data\tshirt_black_co.paa","\DZ\characters\tops\Data\tshirt_black_co.paa"};
	};
	class TShirt_Blue: TShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TShirt_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\DZ\characters\tops\Data\tshirt_ground_blue_co.paa","\DZ\characters\tops\Data\tshirt_blue_co.paa","\DZ\characters\tops\Data\tshirt_blue_co.paa"};
	};
	class TShirt_Dyed: TShirt_ColorBase
	{
		scope = 1;
		displayName = "$STR_CfgVehicles_TShirt_Dyed0";
		descriptionShort = "$STR_CfgVehicles_TShirt_Dyed1";
		color = "Dyed";
		hiddenSelectionsTextures[] = {"","",""};
	};
	class TShirt_Green: TShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TShirt_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\DZ\characters\tops\Data\tshirt_ground_green_co.paa","\DZ\characters\tops\Data\tshirt_green_co.paa","\DZ\characters\tops\Data\tshirt_green_co.paa"};
	};
	class TShirt_OrangeWhiteStripes: TShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TShirt_OrangeWhiteStripes0";
		hiddenSelectionsTextures[] = {"\DZ\characters\tops\Data\tshirt_ground_orangeWhiteStripes_co.paa","\DZ\characters\tops\Data\tshirt_orangeWhiteStripes_co.paa","\DZ\characters\tops\Data\tshirt_orangeWhiteStripes_co.paa"};
	};
	class TShirt_Red: TShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TShirt_Red0";
		visibilityModifier = 1.0;
		hiddenSelectionsTextures[] = {"\DZ\characters\tops\Data\tshirt_ground_red_co.paa","\DZ\characters\tops\Data\tshirt_red_co.paa","\DZ\characters\tops\Data\tshirt_red_co.paa"};
	};
	class TShirt_RedBlackStripes: TShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TShirt_RedBlackStripes0";
		visibilityModifier = 0.98;
		hiddenSelectionsTextures[] = {"\DZ\characters\tops\Data\tshirt_ground_redBlackStripes_co.paa","\DZ\characters\tops\Data\tshirt_redBlackStripes_co.paa","\DZ\characters\tops\Data\tshirt_redBlackStripes_co.paa"};
	};
	class TShirt_White: TShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TShirt_White0";
		hiddenSelectionsTextures[] = {"\DZ\characters\tops\Data\tshirt_ground_white_co.paa","\DZ\characters\tops\Data\tshirt_white_co.paa","\DZ\characters\tops\Data\tshirt_white_co.paa"};
	};
	class TShirt_Grey: TShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TShirt_Grey0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\DZ\characters\tops\Data\tshirt_ground_grey_co.paa","\DZ\characters\tops\Data\tshirt_grey_co.paa","\DZ\characters\tops\Data\tshirt_grey_co.paa"};
	};
	class Hoodie_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_Hoodie_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Hoodie_ColorBase1";
		model = "\DZ\characters\tops\hoodie_ground.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 850;
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 1;
		absorbency = 0.65;
		heatIsolation = 10;
		ragQuantity = 4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"injury_body","injury_hand_l","injury_hand_r","injury_hands","camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\hoodie.rvmat","DZ\characters\tops\Data\Hoodie_m_grd.rvmat"}},{0.5,{"DZ\characters\tops\Data\hoodie_damage.rvmat","DZ\characters\tops\Data\Hoodie_m_grd_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\hoodie_destruct.rvmat","DZ\characters\tops\Data\Hoodie_m_grd_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\hoodie_m.p3d";
			female = "\DZ\characters\tops\hoodie_f.p3d";
		};
	};
	class Hoodie_Blue: Hoodie_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Hoodie_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"","","","","\dz\characters\tops\data\hoodie_m_grd_blue_co.paa","\dz\characters\tops\data\hoodie_blue_co.paa","\dz\characters\tops\data\hoodie_f_blue_co.paa"};
	};
	class Hoodie_Black: Hoodie_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Hoodie_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"","","","","\dz\characters\tops\data\hoodie_m_grd_black_co.paa","\dz\characters\tops\data\hoodie_black_co.paa","\dz\characters\tops\data\hoodie_f_black_co.paa"};
	};
	class Hoodie_Brown: Hoodie_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Hoodie_Brown0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"","","","","\dz\characters\tops\data\hoodie_m_grd_brown_co.paa","\dz\characters\tops\data\hoodie_brown_co.paa","\dz\characters\tops\data\hoodie_f_brown_co.paa"};
	};
	class Hoodie_Green: Hoodie_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Hoodie_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"","","","","\dz\characters\tops\data\hoodie_m_grd_green_co.paa","\dz\characters\tops\data\hoodie_green_co.paa","\dz\characters\tops\data\hoodie_f_green_co.paa"};
	};
	class Hoodie_Grey: Hoodie_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Hoodie_Grey0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"","","","","\dz\characters\tops\data\hoodie_m_grd_grey_co.paa","\dz\characters\tops\data\hoodie_grey_co.paa","\dz\characters\tops\data\hoodie_f_grey_co.paa"};
	};
	class Hoodie_Red: Hoodie_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Hoodie_Red0";
		hiddenSelectionsTextures[] = {"","","","","\dz\characters\tops\data\Hoodie_m_grd_red_co.paa","\dz\characters\tops\data\hoodie_red_co.paa","\dz\characters\tops\data\hoodie_f_red_co.paa"};
	};
	class TacticalShirt_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_TacticalShirt_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_TacticalShirt_ColorBase1";
		model = "\DZ\characters\tops\pcu5jacket_ground.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 270;
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 1;
		absorbency = 0.25;
		heatIsolation = 8;
		ragQuantity = 4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.25;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\PCU5Jacket.rvmat","DZ\characters\tops\Data\PCU5Jacket_ground.rvmat"}},{0.5,{"DZ\characters\tops\Data\PCU5Jacket_damage.rvmat","DZ\characters\tops\Data\PCU5Jacket_ground_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\PCU5Jacket_destruct.rvmat","DZ\characters\tops\Data\PCU5Jacket_ground_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.85;
					Blood = 0.85;
					Shock = 0.85;
				};
				class Melee
				{
					Health = 0.85;
					Blood = 0.85;
					Shock = 0.85;
				};
				class Infected
				{
					Health = 0.85;
					Blood = 0.85;
					Shock = 0.85;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\pcu5jacket_m.p3d";
			female = "\DZ\characters\tops\pcu5jacket_f.p3d";
		};
	};
	class TacticalShirt_Grey: TacticalShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TacticalShirt_Grey0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\PCU5Jacket_ground_grey_co.paa","\dz\characters\tops\data\PCU5Jacket_grey_co.paa","\dz\characters\tops\data\PCU5Jacket_grey_co.paa"};
	};
	class TacticalShirt_Black: TacticalShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TacticalShirt_Black0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\PCU5Jacket_ground_black_co.paa","\dz\characters\tops\data\PCU5Jacket_black_co.paa","\dz\characters\tops\data\PCU5Jacket_black_co.paa"};
	};
	class TacticalShirt_Olive: TacticalShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TacticalShirt_Olive0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\PCU5Jacket_ground_Olive_co.paa","\dz\characters\tops\data\PCU5Jacket_Olive_co.paa","\dz\characters\tops\data\PCU5Jacket_Olive_co.paa"};
	};
	class TacticalShirt_Tan: TacticalShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TacticalShirt_Tan0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\PCU5Jacket_ground_Tan_co.paa","\dz\characters\tops\data\PCU5Jacket_Tan_co.paa","\dz\characters\tops\data\PCU5Jacket_Tan_co.paa"};
	};
	class HikingJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_HikingJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_HikingJacket_ColorBase1";
		model = "\DZ\characters\tops\pcu5jacket_ground.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 270;
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 1;
		absorbency = 0.2;
		heatIsolation = 8;
		ragQuantity = 4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.25;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\PCU5Jacket_nopatches.rvmat","DZ\characters\tops\Data\PCU5Jacket_ground.rvmat"}},{0.5,{"DZ\characters\tops\Data\PCU5Jacket_nopatches_damage.rvmat","DZ\characters\tops\Data\PCU5Jacket_ground_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\PCU5Jacket_nopatches_destruct.rvmat","DZ\characters\tops\Data\PCU5Jacket_ground_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.85;
					Blood = 0.85;
					Shock = 0.85;
				};
				class Melee
				{
					Health = 0.85;
					Blood = 0.85;
					Shock = 0.85;
				};
				class Infected
				{
					Health = 0.85;
					Blood = 0.85;
					Shock = 0.85;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\pcu5jacket_m_nopatches.p3d";
			female = "\DZ\characters\tops\pcu5jacket_f_nopatches.p3d";
		};
	};
	class HikingJacket_Black: HikingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HikingJacket_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\PCU5Jacket_g_nopatches_v1_co.paa","\dz\characters\tops\data\PCU5Jacket_nopatches_v1_co.paa","\dz\characters\tops\data\PCU5Jacket_nopatches_v1_co.paa"};
	};
	class HikingJacket_Blue: HikingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HikingJacket_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\PCU5Jacket_g_nopatches_v2_co.paa","\dz\characters\tops\data\PCU5Jacket_nopatches_v2_co.paa","\dz\characters\tops\data\PCU5Jacket_nopatches_v2_co.paa"};
	};
	class HikingJacket_Red: HikingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HikingJacket_Red0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\PCU5Jacket_g_nopatches_v3_co.paa","\dz\characters\tops\data\PCU5Jacket_nopatches_v3_co.paa","\dz\characters\tops\data\PCU5Jacket_nopatches_v3_co.paa"};
	};
	class HikingJacket_Green: HikingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HikingJacket_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\PCU5Jacket_g_nopatches_v4_co.paa","\dz\characters\tops\data\PCU5Jacket_nopatches_v4_co.paa","\dz\characters\tops\data\PCU5Jacket_nopatches_v4_co.paa"};
	};
	class Raincoat_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_Raincoat_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Raincoat_ColorBase1";
		model = "\DZ\characters\tops\raincoat_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 1700;
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 1;
		ragQuantity = 5;
		heatIsolation = 15;
		absorbency = 0;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\raincoat.rvmat","DZ\characters\tops\Data\raincoat_g.rvmat"}},{0.5,{"DZ\characters\tops\Data\raincoat_damage.rvmat","DZ\characters\tops\Data\raincoat_g_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\raincoat_destruct.rvmat","DZ\characters\tops\Data\raincoat_g_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\raincoat_m.p3d";
			female = "\DZ\characters\tops\raincoat_f.p3d";
		};
	};
	class Raincoat_Orange: Raincoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Raincoat_Orange0";
		color = "Orange";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\raincoat_g_orange_co.paa","\dz\characters\tops\data\raincoat_orange_co.paa","\dz\characters\tops\data\raincoat_orange_co.paa"};
	};
	class Raincoat_Green: Raincoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Raincoat_Green0";
		visibilityModifier = 0.7;
		color = "Green";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\raincoat_g_green_co.paa","\dz\characters\tops\data\raincoat_green_co.paa","\dz\characters\tops\data\raincoat_green_co.paa"};
	};
	class Raincoat_Yellow: Raincoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Raincoat_Yellow0";
		color = "Yellow";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\raincoat_g_yellow_co.paa","\dz\characters\tops\data\raincoat_yellow_co.paa","\dz\characters\tops\data\raincoat_yellow_co.paa"};
	};
	class Raincoat_Pink: Raincoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Raincoat_Pink0";
		color = "Pink";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\raincoat_g_pink_co.paa","\dz\characters\tops\data\raincoat_pink_co.paa","\dz\characters\tops\data\raincoat_pink_co.paa"};
	};
	class Raincoat_Red: Raincoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Raincoat_Red0";
		color = "Red";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\raincoat_g_red_co.paa","\dz\characters\tops\data\raincoat_red_co.paa","\dz\characters\tops\data\raincoat_red_co.paa"};
	};
	class Raincoat_Blue: Raincoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Raincoat_Blue0";
		visibilityModifier = 0.9;
		color = "Blue";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\raincoat_g_blue_co.paa","\dz\characters\tops\data\raincoat_blue_co.paa","\dz\characters\tops\data\raincoat_blue_co.paa"};
	};
	class Raincoat_Black: Raincoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Raincoat_Black0";
		visibilityModifier = 0.8;
		color = "Black";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\raincoat_g_black_co.paa","\dz\characters\tops\data\raincoat_black_co.paa","\dz\characters\tops\data\raincoat_black_co.paa"};
	};
	class M65Jacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_M65Jacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_M65Jacket_ColorBase1";
		model = "\DZ\characters\tops\M65_Jacket_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 1630;
		itemSize[] = {4,3};
		itemsCargoSize[] = {8,3};
		quickBarBonus = 3;
		absorbency = 0.2;
		heatIsolation = 10;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\M65_Jacket.rvmat"}},{0.5,{"DZ\characters\tops\Data\M65_Jacket_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\M65_Jacket_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.9;
					Blood = 0.8;
					Shock = 0.9;
				};
				class Melee
				{
					Health = 0.9;
					Blood = 0.8;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.8;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\M65_Jacket_m.p3d";
			female = "\DZ\characters\tops\M65_Jacket_f.p3d";
		};
	};
	class M65Jacket_Black: M65Jacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_M65Jacket_Black0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\M65_Jacket_black_co.paa","\dz\characters\tops\data\M65_Jacket_black_co.paa","\dz\characters\tops\data\M65_Jacket_black_co.paa"};
	};
	class M65Jacket_Khaki: M65Jacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_M65Jacket_Khaki0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\M65_Jacket_khaki_co.paa","\dz\characters\tops\data\M65_Jacket_khaki_co.paa","\dz\characters\tops\data\M65_Jacket_khaki_co.paa"};
	};
	class M65Jacket_Tan: M65Jacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_M65Jacket_Tan0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\M65_Jacket_tan_co.paa","\dz\characters\tops\data\M65_Jacket_tan_co.paa","\dz\characters\tops\data\M65_Jacket_tan_co.paa"};
	};
	class M65Jacket_Olive: M65Jacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_M65Jacket_Olive0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\M65_Jacket_olive_co.paa","\dz\characters\tops\data\M65_Jacket_olive_co.paa","\dz\characters\tops\data\M65_Jacket_olive_co.paa"};
	};
	class TTsKOJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_TTsKOJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_TTsKOJacket_ColorBase1";
		model = "\DZ\characters\tops\TTsKO_Jacket_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 1510;
		itemSize[] = {4,3};
		itemsCargoSize[] = {7,3};
		quickBarBonus = 2;
		absorbency = 0.6;
		heatIsolation = 15;
		visibilityModifier = 0.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\TTsKO_Jacket.rvmat","DZ\characters\tops\Data\TTsKO_Jacket_g.rvmat"}},{0.5,{"DZ\characters\tops\Data\TTsKO_Jacket_damage.rvmat","DZ\characters\tops\Data\TTsKO_Jacket_g_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\TTsKO_Jacket_destruct.rvmat","DZ\characters\tops\Data\TTsKO_Jacket_g_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.85;
					Blood = 0.8;
					Shock = 0.85;
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
			male = "\DZ\characters\tops\TTsKO_Jacket_m.p3d";
			female = "\DZ\characters\tops\TTsKO_Jacket_f.p3d";
		};
	};
	class TTsKOJacket_Camo: TTsKOJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TTsKOJacket_Camo0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\TTsKO_Jacket_g_camo_co.paa","\dz\characters\tops\data\TTsKO_Jacket_camo_co.paa","\dz\characters\tops\data\TTsKO_Jacket_camo_co.paa"};
	};
	class GorkaEJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_GorkaEJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_GorkaEJacket_ColorBase1";
		model = "\DZ\characters\tops\gorka_up_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 2100;
		itemSize[] = {4,3};
		itemsCargoSize[] = {7,3};
		quickBarBonus = 2;
		absorbency = 0.05;
		heatIsolation = 12;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.4;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\GorkaUpper.rvmat","DZ\characters\tops\Data\GorkaUpper_g.rvmat"}},{0.5,{"DZ\characters\tops\Data\GorkaUpper_damage.rvmat","DZ\characters\tops\Data\GorkaUpper_g_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\GorkaUpper_destruct.rvmat","DZ\characters\tops\Data\GorkaUpper_g_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\gorka_up_m.p3d";
			female = "\DZ\characters\tops\gorka_up_f.p3d";
		};
	};
	class GorkaEJacket_Summer: GorkaEJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaEJacket_Summer0";
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\gorka_up_g_summer_co.paa","\dz\characters\tops\data\gorka_upper_summer_co.paa","\dz\characters\tops\data\gorka_upper_summer_co.paa"};
	};
	class GorkaEJacket_Flat: GorkaEJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaEJacket_Flat0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\gorka_up_g_flat_co.paa","\dz\characters\tops\data\gorka_upper_flat_co.paa","\dz\characters\tops\data\gorka_upper_flat_co.paa"};
	};
	class GorkaEJacket_Autumn: GorkaEJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaEJacket_Autumn0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\gorka_up_g_autumn_co.paa","\dz\characters\tops\data\gorka_upper_autumn_co.paa","\dz\characters\tops\data\gorka_upper_autumn_co.paa"};
	};
	class GorkaEJacket_PautRev: GorkaEJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaEJacket_PautRev0";
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\gorka_up_g_PautRev_co.paa","\dz\characters\tops\data\gorka_upper_PautRev_co.paa","\dz\characters\tops\data\gorka_upper_PautRev_co.paa"};
	};
	class RidersJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_RidersJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_RidersJacket_ColorBase1";
		model = "\DZ\characters\tops\riders_jacket_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 12;
		weight = 2800;
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,2};
		quickBarBonus = 1;
		absorbency = 0.1;
		heatIsolation = 11;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			ballistic = 0.2;
			bleed = 0.7;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\Riders_Jacket.rvmat"}},{0.5,{"DZ\characters\tops\Data\Riders_Jacket_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\Riders_Jacket_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.8;
					Blood = 0.8;
					Shock = 0.85;
				};
				class Melee
				{
					Health = 0.7;
					Blood = 0.7;
					Shock = 0.85;
				};
				class Infected
				{
					Health = 0.7;
					Blood = 0.7;
					Shock = 0.85;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\riders_jacket_m.p3d";
			female = "\DZ\characters\tops\riders_jacket_f.p3d";
		};
	};
	class RidersJacket_Black: RidersJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_RidersJacket_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Riders_Jacket_black_co.paa","\dz\characters\tops\data\Riders_Jacket_black_co.paa","\dz\characters\tops\data\Riders_Jacket_black_co.paa"};
	};
	class WoolCoat_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_WoolCoat_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_WoolCoat_ColorBase1";
		model = "\DZ\characters\tops\WoolCoat_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 3200;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 1;
		heatIsolation = 15;
		absorbency = 0.35;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\WoolCoat.rvmat"}},{0.5,{"DZ\characters\tops\Data\WoolCoat_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\WoolCoat_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\WoolCoat_m.p3d";
			female = "\DZ\characters\tops\WoolCoat_f.p3d";
		};
	};
	class WoolCoat_Black: WoolCoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WoolCoat_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\WoolCoat_black_co.paa","\dz\characters\tops\data\WoolCoat_black_co.paa","\dz\characters\tops\data\WoolCoat_black_co.paa"};
	};
	class WoolCoat_Red: WoolCoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WoolCoat_Red0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\WoolCoat_red_co.paa","\dz\characters\tops\data\WoolCoat_red_co.paa","\dz\characters\tops\data\WoolCoat_red_co.paa"};
	};
	class WoolCoat_Blue: WoolCoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WoolCoat_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\WoolCoat_blue_co.paa","\dz\characters\tops\data\WoolCoat_blue_co.paa","\dz\characters\tops\data\WoolCoat_blue_co.paa"};
	};
	class WoolCoat_Green: WoolCoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WoolCoat_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\WoolCoat_green_co.paa","\dz\characters\tops\data\WoolCoat_green_co.paa","\dz\characters\tops\data\WoolCoat_green_co.paa"};
	};
	class WoolCoat_Beige: WoolCoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WoolCoat_Beige0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\WoolCoat_beige_co.paa","\dz\characters\tops\data\WoolCoat_beige_co.paa","\dz\characters\tops\data\WoolCoat_beige_co.paa"};
	};
	class WoolCoat_RedCheck: WoolCoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WoolCoat_RedCheck0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\WoolCoat_red_ckeck_co.paa","\dz\characters\tops\data\WoolCoat_red_ckeck_co.paa","\dz\characters\tops\data\WoolCoat_red_ckeck_co.paa"};
	};
	class WoolCoat_BlackCheck: WoolCoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WoolCoat_BlackCheck0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\WoolCoat_black_check_co.paa","\dz\characters\tops\data\WoolCoat_black_check_co.paa","\dz\characters\tops\data\WoolCoat_black_check_co.paa"};
	};
	class WoolCoat_BlueCheck: WoolCoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WoolCoat_BlueCheck0";
		visibilityModifier = 0.98;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\WoolCoat_blue_check_co.paa","\dz\characters\tops\data\WoolCoat_blue_check_co.paa","\dz\characters\tops\data\WoolCoat_blue_check_co.paa"};
	};
	class WoolCoat_GreyCheck: WoolCoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WoolCoat_GreyCheck0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\WoolCoat_grey_check_co.paa","\dz\characters\tops\data\WoolCoat_grey_check_co.paa","\dz\characters\tops\data\WoolCoat_grey_check_co.paa"};
	};
	class WoolCoat_BrownCheck: WoolCoat_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WoolCoat_BrownCheck0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\WoolCoat_brown_check_co.paa","\dz\characters\tops\data\WoolCoat_brown_check_co.paa","\dz\characters\tops\data\WoolCoat_brown_check_co.paa"};
	};
	class TrackSuitJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_TrackSuitJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_TrackSuitJacket_ColorBase1";
		model = "\DZ\characters\tops\TrackSuit_Jacket_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 940;
		itemSize[] = {3,2};
		itemsCargoSize[] = {3,2};
		quickBarBonus = 1;
		heatIsolation = 13;
		absorbency = 0.6;
		ragQuantity = 3;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\TrackSuit_Jacket.rvmat","DZ\characters\tops\Data\TrackSuit_Jacket_g.rvmat"}},{0.5,{"DZ\characters\tops\Data\TrackSuit_Jacket_damage.rvmat","DZ\characters\tops\Data\TrackSuit_Jacket_g_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\TrackSuit_Jacket_destruct.rvmat","DZ\characters\tops\Data\TrackSuit_Jacket_g_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\TrackSuit_Jacket_m.p3d";
			female = "\DZ\characters\tops\TrackSuit_Jacket_f.p3d";
		};
	};
	class TrackSuitJacket_Black: TrackSuitJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TrackSuitJacket_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\TrackSuit_Jacket_Black_co.paa","\dz\characters\tops\data\TrackSuit_Jacket_Black_co.paa","\dz\characters\tops\data\TrackSuit_Jacket_Black_co.paa"};
	};
	class TrackSuitJacket_Blue: TrackSuitJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TrackSuitJacket_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\TrackSuit_Jacket_Blue_co.paa","\dz\characters\tops\data\TrackSuit_Jacket_Blue_co.paa","\dz\characters\tops\data\TrackSuit_Jacket_Blue_co.paa"};
	};
	class TrackSuitJacket_Green: TrackSuitJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TrackSuitJacket_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\TrackSuit_Jacket_Green_co.paa","\dz\characters\tops\data\TrackSuit_Jacket_Green_co.paa","\dz\characters\tops\data\TrackSuit_Jacket_Green_co.paa"};
	};
	class TrackSuitJacket_LightBlue: TrackSuitJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TrackSuitJacket_LightBlue0";
		visibilityModifier = 0.98;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\TrackSuit_Jacket_LightBlue_co.paa","\dz\characters\tops\data\TrackSuit_Jacket_LightBlue_co.paa","\dz\characters\tops\data\TrackSuit_Jacket_LightBlue_co.paa"};
	};
	class TrackSuitJacket_Red: TrackSuitJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TrackSuitJacket_Red0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\TrackSuit_Jacket_Red_co.paa","\dz\characters\tops\data\TrackSuit_Jacket_Red_co.paa","\dz\characters\tops\data\TrackSuit_Jacket_Red_co.paa"};
	};
	class PoliceJacket: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PoliceJacket0";
		descriptionShort = "$STR_CfgVehicles_PoliceJacket1";
		model = "\DZ\characters\tops\PoliceJacket_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 2100;
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 1;
		heatIsolation = 15;
		absorbency = 0.2;
		visibilityModifier = 0.9;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\PoliceJacket_g_co.paa","\dz\characters\tops\data\PoliceJacket_co.paa","\dz\characters\tops\data\PoliceJacket_co.paa"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\PoliceJacket.rvmat","DZ\characters\tops\Data\PoliceJacket_g.rvmat"}},{0.5,{"DZ\characters\tops\Data\PoliceJacket_damage.rvmat","DZ\characters\tops\Data\PoliceJacket_g_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\PoliceJacket_destruct.rvmat","DZ\characters\tops\Data\PoliceJacket_g_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\PoliceJacket_m.p3d";
			female = "\DZ\characters\tops\PoliceJacket_f.p3d";
		};
	};
	class PoliceJacketOrel: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PoliceJacketOrel0";
		descriptionShort = "$STR_CfgVehicles_PoliceJacketOrel1";
		model = "\DZ\characters\tops\PoliceJacket_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 2700;
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 1;
		heatIsolation = 15;
		absorbency = 0.2;
		visibilityModifier = 0.9;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\PoliceJacket_g_KamyshCamo_co.paa","\dz\characters\tops\data\PoliceJacket_KamyshCamo_co.paa","\dz\characters\tops\data\PoliceJacket_KamyshCamo_co.paa"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\PoliceJacket.rvmat","DZ\characters\tops\Data\PoliceJacket_g.rvmat"}},{0.5,{"DZ\characters\tops\Data\PoliceJacket_damage.rvmat","DZ\characters\tops\Data\PoliceJacket_g_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\PoliceJacket_destruct.rvmat","DZ\characters\tops\Data\PoliceJacket_g_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\PoliceJacket_m.p3d";
			female = "\DZ\characters\tops\PoliceJacket_f.p3d";
		};
	};
	class ParamedicJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_ParamedicJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_ParamedicJacket_ColorBase1";
		model = "\DZ\characters\tops\ParaMedic_Jacket_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 1100;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 1;
		heatIsolation = 15;
		absorbency = 0.2;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\Paramedic_Jacket.rvmat","DZ\characters\tops\Data\Paramedic_Jacket_g.rvmat"}},{0.5,{"DZ\characters\tops\Data\Paramedic_Jacket_damage.rvmat","DZ\characters\tops\Data\Paramedic_Jacket_g_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\Paramedic_Jacket_destruct.rvmat","DZ\characters\tops\Data\Paramedic_Jacket_g_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\ParaMedic_Jacket_m.p3d";
			female = "\DZ\characters\tops\ParaMedic_Jacket_f.p3d";
		};
	};
	class ParamedicJacket_Blue: ParamedicJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ParamedicJacket_Blue0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Paramedic_Jacket_blue_co.paa","\dz\characters\tops\data\Paramedic_Jacket_blue_co.paa","\dz\characters\tops\data\Paramedic_Jacket_blue_co.paa"};
	};
	class ParamedicJacket_Crimson: ParamedicJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ParamedicJacket_Crimson0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Paramedic_Jacket_crimson_co.paa","\dz\characters\tops\data\Paramedic_Jacket_crimson_co.paa","\dz\characters\tops\data\Paramedic_Jacket_crimson_co.paa"};
	};
	class ParamedicJacket_Green: ParamedicJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ParamedicJacket_Green0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Paramedic_Jacket_green_co.paa","\dz\characters\tops\data\Paramedic_Jacket_green_co.paa","\dz\characters\tops\data\Paramedic_Jacket_green_co.paa"};
	};
	class FirefighterJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_FirefighterJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_FirefighterJacket_ColorBase1";
		model = "\DZ\characters\tops\Firefighter_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 1;
		weight = 7400;
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,3};
		quickBarBonus = 2;
		heatIsolation = 15;
		absorbency = 0;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\Firefighter_jacket.rvmat"}},{0.5,{"DZ\characters\tops\Data\Firefighter_jacket_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\Firefighter_jacket_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\Firefighter_m.p3d";
			female = "\DZ\characters\tops\Firefighter_f.p3d";
		};
	};
	class FirefighterJacket_Beige: FirefighterJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FirefighterJacket_Beige0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\FireFighter_Jacket_beige_co.paa","\dz\characters\tops\data\FireFighter_Jacket_beige_co.paa","\dz\characters\tops\data\FireFighter_Jacket_beige_co.paa"};
	};
	class FirefighterJacket_Black: FirefighterJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FirefighterJacket_Black0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\FireFighter_Jacket_black_co.paa","\dz\characters\tops\data\FireFighter_Jacket_black_co.paa","\dz\characters\tops\data\FireFighter_Jacket_black_co.paa"};
	};
	class PrisonUniformJacket: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PrisonUniformJacket0";
		descriptionShort = "$STR_CfgVehicles_PrisonUniformJacket1";
		model = "\DZ\characters\tops\prison_top_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 410;
		itemSize[] = {2,1};
		itemsCargoSize[] = {3,2};
		quickBarBonus = 1;
		heatIsolation = 9;
		absorbency = 0.3;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\prison_top_g_co.paa","\dz\characters\tops\data\prison_top_co.paa","\dz\characters\tops\data\prison_top_co.paa"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\prison_top.rvmat","DZ\characters\tops\Data\prison_top_g.rvmat"}},{0.5,{"DZ\characters\tops\Data\prison_top_damage.rvmat","DZ\characters\tops\Data\prison_top_g_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\prison_top_destruct.rvmat","DZ\characters\tops\Data\prison_top_g_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\prison_top_m.p3d";
			female = "\DZ\characters\tops\prison_top_f.p3d";
		};
	};
	class MiniDress_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_MiniDress_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_MiniDress_ColorBase1";
		model = "\DZ\characters\tops\MiniDress_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 520;
		itemSize[] = {2,1};
		itemsCargoSize[] = {3,2};
		quickBarBonus = 1;
		heatIsolation = 6.5;
		absorbency = 0.9;
		ragQuantity = 6;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\MiniDress.rvmat"}},{0.5,{"DZ\characters\tops\Data\MiniDress_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\MiniDress_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\MiniDress_m.p3d";
			female = "\DZ\characters\tops\MiniDress_f.p3d";
		};
	};
	class MiniDress_Pink: MiniDress_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MiniDress_Pink0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\MiniDress_Pink_co.paa","\dz\characters\tops\data\MiniDress_Pink_co.paa","\dz\characters\tops\data\MiniDress_Pink_co.paa"};
	};
	class MiniDress_PinkChecker: MiniDress_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MiniDress_PinkChecker0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\MiniDress_PinkCheck_co.paa","\dz\characters\tops\data\MiniDress_PinkCheck_co.paa","\dz\characters\tops\data\MiniDress_PinkCheck_co.paa"};
	};
	class MiniDress_RedChecker: MiniDress_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MiniDress_RedChecker0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\MiniDress_RedCheck_co.paa","\dz\characters\tops\data\MiniDress_RedCheck_co.paa","\dz\characters\tops\data\MiniDress_RedCheck_co.paa"};
	};
	class MiniDress_WhiteChecker: MiniDress_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MiniDress_WhiteChecker0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\MiniDress_WhiteCheck_co.paa","\dz\characters\tops\data\MiniDress_WhiteCheck_co.paa","\dz\characters\tops\data\MiniDress_WhiteCheck_co.paa"};
	};
	class MiniDress_GreenChecker: MiniDress_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MiniDress_GreenChecker0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\MiniDress_GreenCheck_co.paa","\dz\characters\tops\data\MiniDress_GreenCheck_co.paa","\dz\characters\tops\data\MiniDress_GreenCheck_co.paa"};
	};
	class MiniDress_BrownChecker: MiniDress_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MiniDress_BrownChecker0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\MiniDress_BrownCheck_co.paa","\dz\characters\tops\data\MiniDress_BrownCheck_co.paa","\dz\characters\tops\data\MiniDress_BrownCheck_co.paa"};
	};
	class MiniDress_BlueChecker: MiniDress_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MiniDress_BlueChecker0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\MiniDress_BlueCheck_co.paa","\dz\characters\tops\data\MiniDress_BlueCheck_co.paa","\dz\characters\tops\data\MiniDress_BlueCheck_co.paa"};
	};
	class MiniDress_BlueWithDots: MiniDress_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MiniDress_BlueWithDots0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\MiniDress_BlueCircle_co.paa","\dz\characters\tops\data\MiniDress_BlueCircle_co.paa","\dz\characters\tops\data\MiniDress_BlueCircle_co.paa"};
	};
	class QuiltedJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_QuiltedJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_QuiltedJacket_ColorBase1";
		model = "\DZ\characters\tops\QuiltedJacket_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 2010;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 1;
		heatIsolation = 17;
		absorbency = 0.4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		rotationFlags = 17;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\QuiltedJacket.rvmat"}},{0.5,{"DZ\characters\tops\Data\QuiltedJacket_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\QuiltedJacket_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\QuiltedJacket_m.p3d";
			female = "\DZ\characters\tops\QuiltedJacket_f.p3d";
		};
	};
	class QuiltedJacket_Black: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_QuiltedJacket_Black0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\QuiltedJacket_black_co.paa","\dz\characters\tops\data\QuiltedJacket_black_co.paa","\dz\characters\tops\data\QuiltedJacket_black_co.paa"};
	};
	class QuiltedJacket_Green: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_QuiltedJacket_Green0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\QuiltedJacket_green_co.paa","\dz\characters\tops\data\QuiltedJacket_green_co.paa","\dz\characters\tops\data\QuiltedJacket_green_co.paa"};
	};
	class QuiltedJacket_Blue: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_QuiltedJacket_Blue0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\QuiltedJacket_blue_co.paa","\dz\characters\tops\data\QuiltedJacket_blue_co.paa","\dz\characters\tops\data\QuiltedJacket_blue_co.paa"};
	};
	class QuiltedJacket_Red: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_QuiltedJacket_Red0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\QuiltedJacket_red_co.paa","\dz\characters\tops\data\QuiltedJacket_red_co.paa","\dz\characters\tops\data\QuiltedJacket_red_co.paa"};
	};
	class QuiltedJacket_Grey: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_QuiltedJacket_Grey0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\QuiltedJacket_grey_co.paa","\dz\characters\tops\data\QuiltedJacket_grey_co.paa","\dz\characters\tops\data\QuiltedJacket_grey_co.paa"};
	};
	class QuiltedJacket_Orange: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_QuiltedJacket_Orange0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\QuiltedJacket_orange_co.paa","\dz\characters\tops\data\QuiltedJacket_orange_co.paa","\dz\characters\tops\data\QuiltedJacket_orange_co.paa"};
	};
	class QuiltedJacket_Yellow: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_QuiltedJacket_Yellow0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\QuiltedJacket_yellow_co.paa","\dz\characters\tops\data\QuiltedJacket_yellow_co.paa","\dz\characters\tops\data\QuiltedJacket_yellow_co.paa"};
	};
	class QuiltedJacket_Violet: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_QuiltedJacket_Violet0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\QuiltedJacket_violet_co.paa","\dz\characters\tops\data\QuiltedJacket_violet_co.paa","\dz\characters\tops\data\QuiltedJacket_violet_co.paa"};
	};
	class BomberJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_BomberJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_BomberJacket_ColorBase1";
		model = "\DZ\characters\tops\BomberJacket_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 3200;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 1;
		heatIsolation = 12;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\BomberJacket.rvmat"}},{0.5,{"DZ\characters\tops\Data\BomberJacket_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\BomberJacket_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\BomberJacket_m.p3d";
			female = "\DZ\characters\tops\BomberJacket_f.p3d";
		};
	};
	class BomberJacket_Black: BomberJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BomberJacket_Black0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\BomberJacket_black_co.paa","\dz\characters\tops\data\BomberJacket_black_co.paa","\dz\characters\tops\data\BomberJacket_black_co.paa"};
	};
	class BomberJacket_Brown: BomberJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BomberJacket_Brown0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\BomberJacket_brown_co.paa","\dz\characters\tops\data\BomberJacket_brown_co.paa","\dz\characters\tops\data\BomberJacket_brown_co.paa"};
	};
	class BomberJacket_Blue: BomberJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BomberJacket_Blue0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\BomberJacket_blue_co.paa","\dz\characters\tops\data\BomberJacket_blue_co.paa","\dz\characters\tops\data\BomberJacket_blue_co.paa"};
	};
	class BomberJacket_Grey: BomberJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BomberJacket_Grey0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\BomberJacket_grey_co.paa","\dz\characters\tops\data\BomberJacket_grey_co.paa","\dz\characters\tops\data\BomberJacket_grey_co.paa"};
	};
	class BomberJacket_Maroon: BomberJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BomberJacket_Maroon0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\BomberJacket_maroon_co.paa","\dz\characters\tops\data\BomberJacket_maroon_co.paa","\dz\characters\tops\data\BomberJacket_maroon_co.paa"};
	};
	class BomberJacket_Olive: BomberJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BomberJacket_Olive0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\BomberJacket_olive_co.paa","\dz\characters\tops\data\BomberJacket_olive_co.paa","\dz\characters\tops\data\BomberJacket_olive_co.paa"};
	};
	class BomberJacket_SkyBlue: BomberJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BomberJacket_SkyBlue0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\BomberJacket_skyblue_co.paa","\dz\characters\tops\data\BomberJacket_skyblue_co.paa","\dz\characters\tops\data\BomberJacket_skyblue_co.paa"};
	};
	class LeatherJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_LeatherJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_LeatherJacket_ColorBase1";
		model = "\DZ\characters\tops\Top_LeatherJacket_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 3100;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 12;
		durability = 0.5;
		armor = 8;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.5;
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
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.75;
					Blood = 0.65;
					Shock = 0.8;
				};
				class Melee
				{
					Health = 0.7;
					Blood = 0.6;
					Shock = 0.8;
				};
				class Infected
				{
					Health = 0.7;
					Blood = 0.6;
					Shock = 0.8;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\Top_LeatherJacket_m.p3d";
			female = "\DZ\characters\tops\Top_LeatherJacket_f.p3d";
		};
	};
	class LeatherJacket_Natural: LeatherJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherJacket_Natural0";
		visibilityModifier = 0.85;
		hiddenSelectionsMaterials[] = {"DZ\characters\tops\data\Top_LeatherJacket_g_natural.rvmat","DZ\characters\tops\data\Top_LeatherJacket_natural.rvmat","DZ\characters\tops\data\Top_LeatherJacket_natural.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\data\Top_LeatherJacket_g_natural.rvmat","DZ\characters\tops\data\Top_LeatherJacket_natural.rvmat"}},{0.5,{"DZ\characters\tops\Data\Top_LeatherJacket_g_natural_damage.rvmat","DZ\characters\tops\Data\Top_LeatherJacket_natural_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\Top_LeatherJacket_g_natural_destruct.rvmat","DZ\characters\tops\Data\Top_LeatherJacket_natural_destruct.rvmat"}}};
				};
			};
			class GlobalArmor: GlobalArmor{};
		};
	};
	class LeatherJacket_Beige: LeatherJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherJacket_Beige0";
		visibilityModifier = 0.9;
		hiddenSelectionsMaterials[] = {"DZ\characters\tops\data\Top_LeatherJacket_g_beige.rvmat","DZ\characters\tops\data\Top_LeatherJacket_beige.rvmat","DZ\characters\tops\data\Top_LeatherJacket_beige.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\data\Top_LeatherJacket_g_natural.rvmat","DZ\characters\tops\data\Top_LeatherJacket_natural.rvmat"}},{0.5,{"DZ\characters\tops\Data\Top_LeatherJacket_g_beige_damage.rvmat","DZ\characters\tops\Data\Top_LeatherJacket_beige_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\Top_LeatherJacket_g_beige_destruct.rvmat","DZ\characters\tops\Data\Top_LeatherJacket_beige_destruct.rvmat"}}};
				};
			};
			class GlobalArmor: GlobalArmor{};
		};
	};
	class LeatherJacket_Brown: LeatherJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherJacket_Brown0";
		visibilityModifier = 0.85;
		hiddenSelectionsMaterials[] = {"DZ\characters\tops\data\Top_LeatherJacket_g_brown.rvmat","DZ\characters\tops\data\Top_LeatherJacket_brown.rvmat","DZ\characters\tops\data\Top_LeatherJacket_brown.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\data\Top_LeatherJacket_g_natural.rvmat","DZ\characters\tops\data\Top_LeatherJacket_natural.rvmat"}},{0.5,{"DZ\characters\tops\Data\Top_LeatherJacket_g_brown_damage.rvmat","DZ\characters\tops\Data\Top_LeatherJacket_brown_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\Top_LeatherJacket_g_brown_destruct.rvmat","DZ\characters\tops\Data\Top_LeatherJacket_brown_destruct.rvmat"}}};
				};
			};
			class GlobalArmor: GlobalArmor{};
		};
	};
	class LeatherJacket_Black: LeatherJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherJacket_Black0";
		visibilityModifier = 0.9;
		hiddenSelectionsMaterials[] = {"DZ\characters\tops\data\Top_LeatherJacket_g_black.rvmat","DZ\characters\tops\data\Top_LeatherJacket_black.rvmat","DZ\characters\tops\data\Top_LeatherJacket_black.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\data\Top_LeatherJacket_g_natural.rvmat","DZ\characters\tops\data\Top_LeatherJacket_natural.rvmat"}},{0.5,{"DZ\characters\tops\Data\Top_LeatherJacket_g_black_damage.rvmat","DZ\characters\tops\Data\Top_LeatherJacket_black_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\Top_LeatherJacket_g_black_destruct.rvmat","DZ\characters\tops\Data\Top_LeatherJacket_black_destruct.rvmat"}}};
				};
			};
			class GlobalArmor: GlobalArmor{};
		};
	};
	class HuntingJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_HuntingJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_HuntingJacket_ColorBase1";
		model = "\DZ\characters\tops\Hunting_jacket_G.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 12;
		weight = 3200;
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,3};
		quickBarBonus = 2;
		heatIsolation = 15;
		absorbency = 0.2;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.5,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\Hunting_jacket_destruct.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\Hunting_jacket_m.p3d";
			female = "\DZ\characters\tops\Hunting_jacket_F.p3d";
		};
	};
	class HuntingJacket_Autumn: HuntingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HuntingJacket_Autumn0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Hunting_jacket_autumn_G_CO.paa","\dz\characters\tops\data\Hunting_jacket_autumn_CO.paa","\dz\characters\tops\data\Hunting_jacket_autumn_CO.paa"};
	};
	class HuntingJacket_Brown: HuntingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HuntingJacket_Brown0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Hunting_jacket_brown_G_CO.paa","\dz\characters\tops\data\Hunting_jacket_brown_CO.paa","\dz\characters\tops\data\Hunting_jacket_brown_CO.paa"};
	};
	class HuntingJacket_Spring: HuntingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HuntingJacket_Spring0";
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Hunting_jacket_Spring_G_CO.paa","\dz\characters\tops\data\Hunting_jacket_Spring_CO.paa","\dz\characters\tops\data\Hunting_jacket_Spring_CO.paa"};
	};
	class HuntingJacket_Summer: HuntingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HuntingJacket_Summer0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Hunting_jacket_summer_G_CO.paa","\dz\characters\tops\data\Hunting_jacket_summer_CO.paa","\dz\characters\tops\data\Hunting_jacket_summer_CO.paa"};
	};
	class HuntingJacket_Winter: HuntingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HuntingJacket_Winter0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\Hunting_jacket_winter_G_CO.paa","\dz\characters\tops\data\Hunting_jacket_winter_CO.paa","\dz\characters\tops\data\Hunting_jacket_winter_CO.paa"};
	};
	class MedicalScrubsShirt_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_MedicalScrubsShirt_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsShirt_ColorBase1";
		model = "\DZ\characters\tops\MedicalScrubs_Shirt_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 500;
		itemSize[] = {2,1};
		itemsCargoSize[] = {3,2};
		quickBarBonus = 1;
		heatIsolation = 7;
		absorbency = 0.9;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\MedicalScrubs_Shirt.rvmat"}},{0.5,{"DZ\characters\tops\Data\MedicalScrubs_Shirt_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\MedicalScrubs_Shirt_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\MedicalScrubs_Shirt_m.p3d";
			female = "\DZ\characters\tops\MedicalScrubs_Shirt_f.p3d";
		};
	};
	class MedicalScrubsShirt_Blue: MedicalScrubsShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsShirt_Blue0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\MedicalScrubs_Shirt_blue_co.paa","\dz\characters\tops\data\MedicalScrubs_Shirt_blue_co.paa","\dz\characters\tops\data\MedicalScrubs_Shirt_blue_co.paa"};
	};
	class MedicalScrubsShirt_Green: MedicalScrubsShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsShirt_Green0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\MedicalScrubs_Shirt_green_co.paa","\dz\characters\tops\data\MedicalScrubs_Shirt_green_co.paa","\dz\characters\tops\data\MedicalScrubs_Shirt_green_co.paa"};
	};
	class MedicalScrubsShirt_White: MedicalScrubsShirt_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsShirt_White0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\MedicalScrubs_Shirt_white_co.paa","\dz\characters\tops\data\MedicalScrubs_Shirt_white_co.paa","\dz\characters\tops\data\MedicalScrubs_Shirt_white_co.paa"};
	};
	class LabCoat: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_LabCoat0";
		descriptionShort = "$STR_CfgVehicles_LabCoat1";
		model = "\dz\characters\tops\LabCoat_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 17;
		weight = 370;
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,2};
		quickBarBonus = 1;
		heatIsolation = 8;
		absorbency = 0.9;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\LabCoat_White_co.paa","\dz\characters\tops\data\LabCoat_White_co.paa","\dz\characters\tops\data\LabCoat_White_co.paa"};
		class DamageArmor
		{
			bleed = 0.15;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\LabCoat.rvmat"}},{0.5,{"DZ\characters\tops\Data\LabCoat_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\LabCoat_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\dz\characters\tops\LabCoat_m.p3d";
			female = "\dz\characters\tops\LabCoat_f.p3d";
		};
	};
	class NurseDress_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_NurseDress_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_NurseDress_ColorBase1";
		model = "\dz\characters\tops\NurseDress_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 4;
		weight = 200;
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,2};
		quickBarBonus = 1;
		heatIsolation = 8;
		absorbency = 0.9;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.15;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\NurseDress.rvmat"}},{0.5,{"DZ\characters\tops\Data\NurseDress_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\NurseDress_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\dz\characters\tops\NurseDress_m.p3d";
			female = "\dz\characters\tops\NurseDress_f.p3d";
		};
	};
	class NurseDress_White: NurseDress_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_NurseDress_White0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\Data\NurseDress_white_co.paa","\dz\characters\tops\Data\NurseDress_white_co.paa","\dz\characters\tops\Data\NurseDress_white_co.paa"};
	};
	class NurseDress_Blue: NurseDress_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_NurseDress_Blue0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\Data\NurseDress_blue_co.paa","\dz\characters\tops\Data\NurseDress_blue_co.paa","\dz\characters\tops\Data\NurseDress_blue_co.paa"};
	};
	class USMCJacket_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_USMCJacket_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_USMCJacket_ColorBase1";
		model = "\dz\characters\tops\USMC_Jacket_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 1500;
		itemSize[] = {4,3};
		itemsCargoSize[] = {8,3};
		quickBarBonus = 3;
		heatIsolation = 13;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
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
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\USMC_Jacket.rvmat"}},{0.5,{"DZ\characters\tops\Data\USMC_Jacket_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\USMC_Jacket_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\dz\characters\tops\USMC_Jacket_m.p3d";
			female = "\dz\characters\tops\USMC_Jacket_f.p3d";
		};
	};
	class USMCJacket_Desert: USMCJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_USMCJacket_Desert0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\Data\USMC_Jacket_MarpatDesert_co.paa","\dz\characters\tops\Data\USMC_Jacket_MarpatDesert_co.paa","\dz\characters\tops\Data\USMC_Jacket_MarpatDesert_co.paa"};
	};
	class USMCJacket_Woodland: USMCJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_USMCJacket_Woodland0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\Data\USMC_Jacket_MarpatWoodland_co.paa","\dz\characters\tops\Data\USMC_Jacket_MarpatWoodland_co.paa","\dz\characters\tops\Data\USMC_Jacket_MarpatWoodland_co.paa"};
	};
	class Blouse_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_Blouse_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Blouse_ColorBase1";
		model = "\DZ\characters\tops\blouse_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 105;
		itemSize[] = {2,2};
		itemsCargoSize[] = {3,2};
		quickBarBonus = 1;
		ragQuantity = 4;
		absorbency = 0.8;
		heatIsolation = 5.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageArmor
		{
			bleed = 0.1;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\blouse_m.p3d";
			female = "\DZ\characters\tops\blouse_f.p3d";
		};
	};
	class Blouse_Blue: Blouse_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Blouse_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\blouse_blue_CO.paa","\dz\characters\tops\data\blouse_blue_CO.paa","\dz\characters\tops\data\blouse_blue_CO.paa"};
	};
	class Blouse_Green: Blouse_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Blouse_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\blouse_green_CO.paa","\dz\characters\tops\data\blouse_green_CO.paa","\dz\characters\tops\data\blouse_green_CO.paa"};
	};
	class Blouse_Violet: Blouse_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Blouse_Violet0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\blouse_violet_CO.paa","\dz\characters\tops\data\blouse_violet_CO.paa","\dz\characters\tops\data\blouse_violet_CO.paa"};
	};
	class Blouse_White: Blouse_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Blouse_White0";
		hiddenSelectionsTextures[] = {"\dz\characters\tops\data\blouse_white_CO.paa","\dz\characters\tops\data\blouse_white_CO.paa","\dz\characters\tops\data\blouse_white_CO.paa"};
	};
	class NBCJacketBase: Clothing
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_NBCJacketBase0";
		descriptionShort = "$STR_CfgVehicles_NBCJacketBase1";
		model = "\DZ\characters\tops\NBC_Jacket_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 1500;
		itemSize[] = {4,3};
		itemsCargoSize[] = {8,3};
		quickBarBonus = 3;
		heatIsolation = 13;
		absorbency = 0.1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\tops\Data\NBC_Jacket.rvmat","DZ\characters\tops\Data\NBC_Jacket_g.rvmat"}},{0.5,{"DZ\characters\tops\Data\NBC_Jacket_damage.rvmat","DZ\characters\tops\Data\NBC_Jacket_g_damage.rvmat"}},{0.0,{"DZ\characters\tops\Data\NBC_Jacket_destruct.rvmat","DZ\characters\tops\Data\NBC_Jacket_g_destruct.rvmat"}}};
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
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\tops\NBC_Jacket_m.p3d";
			female = "\DZ\characters\tops\NBC_Jacket_f.p3d";
		};
	};
	class NBCJacketGray: NBCJacketBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_NBCJacketGray0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\Data\NBC_Jacket_g_grey_co.paa","\dz\characters\tops\Data\NBC_Jacket_grey_co.paa","\dz\characters\tops\Data\NBC_Jacket_grey_co.paa"};
	};
	class TShirtAbove: TShirt_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TShirtAbove0";
		visibilityModifier = 0.98;
		class ClothingTypes
		{
			male = "\DZ\characters\tops\tshirt_m_above0.p3d";
			female = "\DZ\characters\tops\tshirt_m_above0.p3d";
		};
	};
};
//};
