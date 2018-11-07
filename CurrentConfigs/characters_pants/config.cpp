////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:03:59 2018 : 'file' last modified on Wed Aug 22 15:52:53 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\characters_pants\config.bin{
class CfgPatches
{
	class DZ_Characters_Pants
	{
		units[] = {"bdu_pants_Woodland","Jeans_Black","Jeans_BlueDark","Jeans_Blue","Jeans_Brown","Jeans_Green","Jeans_Grey","MaleLegs","FemaleLegs"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class MaleLegs_Base: Inventory_Base
	{
		scope = 1;
		displayName = "$STR_MaleLegs_Base0";
		model = "\DZ\characters\pants\legs3_m.p3d";
		inventorySlot = "Legs";
		hiddenSelections[] = {"personality"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.843137,0.768627,0.658824,1.0,CO)"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\hhl_dummy_skin_material.rvmat"};
	};
	class MaleAdamLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"};
	};
	class MaleBorisLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved.rvmat"};
	};
	class MaleCyrilLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved.rvmat"};
	};
	class MaleDenisLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved.rvmat"};
	};
	class MaleEliasLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved.rvmat"};
	};
	class MaleFrancisLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved.rvmat"};
	};
	class MaleGuoLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved.rvmat"};
	};
	class MaleHassanLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved.rvmat"};
	};
	class MaleIndarLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved.rvmat"};
	};
	class MaleJoseLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved.rvmat"};
	};
	class MaleKaitoLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved.rvmat"};
	};
	class MaleLewisLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_bearded_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Lewis\hhl_m_Lewis_body_bearded.rvmat"};
	};
	class MaleManuaLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved.rvmat"};
	};
	class MaleNikiLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_bearded_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Niki_2\hhl_m_Niki_body_bearded.rvmat"};
	};
	class MaleOliverLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_bearded_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Oliver\hhl_m_Oliver_body_bearded.rvmat"};
	};
	class MalePeterLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved.rvmat"};
	};
	class MaleQuinnLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_bearded_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Quinn\hhl_m_Quinn_body_bearded.rvmat"};
	};
	class MaleRolfLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_bearded_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Rolf\hhl_m_Rolf_body_bearded.rvmat"};
	};
	class MaleSethLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_bearded_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Seth\hhl_m_Seth_body_bearded.rvmat"};
	};
	class MaleTaikiLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_bearded_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Taiki\hhl_m_Taiki_body_bearded.rvmat"};
	};
	class FemaleLegs_Base: Inventory_Base
	{
		scope = 1;
		displayName = "$STR_FemaleLegs_Base0";
		model = "\DZ\characters\pants\legs3_f.p3d";
		inventorySlot = "Legs";
		hiddenSelections[] = {"personality"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.843137,0.768627,0.658824,1.0,CO)"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\hhl_dummy_skin_material.rvmat"};
	};
	class FemaleEvaLegs: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Eva_2\hhl_f_Eva_body.rvmat"};
	};
	class FemaleFridaLegs: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Frida_2\hhl_f_frida_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Frida_2\hhl_f_frida_body.rvmat"};
	};
	class FemaleGabiLegs: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body.rvmat"};
	};
	class FemaleHelgaLegs: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Helga\hhl_f_Helga_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Helga\hhl_f_Helga_body.rvmat"};
	};
	class FemaleIrenaLegs: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body.rvmat"};
	};
	class FemaleJudyLegs: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Judy\hhl_f_Judy_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Judy\hhl_f_Judy_body.rvmat"};
	};
	class FemaleKeikoLegs: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body.rvmat"};
	};
	class FemaleLindaLegs: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body.rvmat"};
	};
	class FemaleMariaLegs: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body.rvmat"};
	};
	class FemaleNaomiLegs: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body.rvmat"};
	};
	class MaleAdamDecayedLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"};
	};
	class MaleAdamDecayedDarkLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed_dark.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"};
	};
	class MaleAdamDecayedLighterDarkLegs: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed_lighter_dark.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"};
	};
	class MaleBorisLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved.rvmat"};
	};
	class MaleCyrilLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved.rvmat"};
	};
	class MaleDenisLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved.rvmat"};
	};
	class MaleEliasLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved.rvmat"};
	};
	class MaleFrancisLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved.rvmat"};
	};
	class MaleGuoLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved.rvmat"};
	};
	class MaleHassanLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved.rvmat"};
	};
	class MaleIndarLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved.rvmat"};
	};
	class MaleJoseLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved.rvmat"};
	};
	class MaleKaitoLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved.rvmat"};
	};
	class MaleLewisLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Lewis\hhl_m_Lewis_body_bearded.rvmat"};
	};
	class MaleManuaLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved.rvmat"};
	};
	class MaleNikiLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Niki_2\hhl_m_Niki_body_bearded.rvmat"};
	};
	class MaleOliverLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Oliver\hhl_m_Oliver_body_bearded.rvmat"};
	};
	class MalePeterLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved.rvmat"};
	};
	class MaleQuinnLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Quinn\hhl_m_Quinn_body_bearded.rvmat"};
	};
	class MaleRolfLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Rolf\hhl_m_Rolf_body_bearded.rvmat"};
	};
	class MaleSethLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Seth\hhl_m_Seth_body_bearded.rvmat"};
	};
	class MaleTaikiLegsDecayed: MaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Taiki\hhl_m_Taiki_body_bearded.rvmat"};
	};
	class FemaleEvaLegsDecayed: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Eva_2\hhl_f_Eva_body.rvmat"};
	};
	class FemaleFridaLegsDecayed: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Frida_2\hhl_f_frida_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Frida_2\hhl_f_frida_body.rvmat"};
	};
	class FemaleGabiLegsDecayed: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body.rvmat"};
	};
	class FemaleHelgaLegsDecayed: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Helga\hhl_f_Helga_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Helga\hhl_f_Helga_body.rvmat"};
	};
	class FemaleIrenaLegsDecayed: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body.rvmat"};
	};
	class FemaleJudyLegsDecayed: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Judy\hhl_f_Judy_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Judy\hhl_f_Judy_body.rvmat"};
	};
	class FemaleKeikoLegsDecayed: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body.rvmat"};
	};
	class FemaleLindaLegsDecayed: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body.rvmat"};
	};
	class FemaleMariaLegsDecayed: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body.rvmat"};
	};
	class FemaleNaomiLegsDecayed: FemaleLegs_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body.rvmat"};
	};
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class Jeans_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_Jeans_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Jeans_ColorBase1";
		model = "\DZ\characters\pants\jeans_ground.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {3,3};
		weight = 470;
		absorbency = 0.7;
		heatIsolation = 2.6;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Civilian"};
		lootCategory = "Pants";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\jeans_m.p3d";
			female = "\DZ\characters\pants\jeans_f.p3d";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\Characters\pants\data\jeans.rvmat","DZ\Characters\pants\data\jeans_damage.rvmat","DZ\Characters\pants\data\jeans_destruct.rvmat","DZ\Characters\pants\data\Jeans_m_grd.rvmat","DZ\Characters\pants\data\Jeans_m_grd_damage.rvmat","DZ\Characters\pants\data\Jeans_m_grd_destruct.rvmat","DZ\Characters\pants\data\Jeans_f.rvmat","DZ\Characters\pants\data\Jeans_f_damage.rvmat","DZ\Characters\pants\data\Jeans_f_destruct.rvmat","DZ\Characters\pants\data\Jeans_f_grd.rvmat","DZ\Characters\pants\data\Jeans_f_grd_damage.rvmat","DZ\Characters\pants\data\Jeans_f_grd_destruct.rvmat"};
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\Jeans_m_grd.rvmat","DZ\characters\pants\Data\jeans.rvmat","DZ\characters\pants\Data\jeans_f.rvmat"}},{0.5,{"DZ\characters\pants\Data\Jeans_m_grd_damage.rvmat","DZ\characters\pants\Data\jeans_damage.rvmat","DZ\characters\pants\Data\jeans_f_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\Jeans_m_grd_destruct.rvmat","DZ\characters\pants\Data\jeans_destruct.rvmat","DZ\characters\pants\Data\jeans_f_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.85;
					Blood = 0.8;
					Shock = 0.9;
				};
				class Melee
				{
					Health = 0.85;
					Blood = 0.8;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.85;
					Blood = 0.8;
					Shock = 0.9;
				};
			};
		};
	};
	class Jeans_Black: Jeans_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Jeans_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\Jeans_m_grd_Black_co.paa","DZ\characters\pants\data\Jeans_Black_co.paa","DZ\characters\pants\data\Jeans_f_Black_co.paa"};
	};
	class Jeans_Blue: Jeans_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Jeans_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\Jeans_m_grd_Blue_co.paa","DZ\characters\pants\data\Jeans_Blue_co.paa","DZ\characters\pants\data\Jeans_f_Blue_co.paa"};
	};
	class Jeans_Brown: Jeans_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Jeans_Brown0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\Jeans_m_grd_Brown_co.paa","DZ\characters\pants\data\Jeans_Brown_co.paa","DZ\characters\pants\data\Jeans_f_Brown_co.paa"};
	};
	class Jeans_Green: Jeans_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Jeans_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\Jeans_m_grd_Green_co.paa","DZ\characters\pants\data\Jeans_Green_co.paa","DZ\characters\pants\data\Jeans_f_Green_co.paa"};
	};
	class Jeans_Grey: Jeans_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Jeans_Grey0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\Jeans_m_grd_Grey_co.paa","DZ\characters\pants\data\Jeans_Grey_co.paa","DZ\characters\pants\data\Jeans_f_Grey_co.paa"};
	};
	class Jeans_BlueDark: Jeans_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Jeans_BlueDark0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Jeans_m_grd_bluedark_co.paa","\dz\characters\pants\data\Jeans_bluedark_co.paa","\dz\characters\pants\data\Jeans_f_bluedark_co.paa"};
	};
	class CargoPants_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_CargoPants_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_CargoPants_ColorBase1";
		model = "\DZ\characters\pants\cargoPants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,4};
		weight = 530;
		absorbency = 0.6;
		heatIsolation = 2.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 2;
		lootTag[] = {"Work","Military_west","Military_east","Fishing"};
		lootCategory = "Pants";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\cargoPants_m.p3d";
			female = "\DZ\characters\pants\cargoPants_f.p3d";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\Characters\pants\data\CargoPants.rvmat","DZ\Characters\pants\data\CargoPants_damage.rvmat","DZ\Characters\pants\data\CargoPants_destruct.rvmat","DZ\Characters\pants\data\CargoPants_g.rvmat","DZ\Characters\pants\data\CargoPants_g_damage.rvmat","DZ\Characters\pants\data\CargoPants_g_destruct.rvmat"};
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},{0.5,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\CargoPants_destruct.rvmat","DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"}}};
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
	};
	class CargoPants_Beige: CargoPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CargoPants_Beige0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\CargoPants_g_Beige_co.paa","DZ\characters\pants\data\CargoPants_Beige_co.paa","DZ\characters\pants\data\CargoPants_Beige_co.paa"};
	};
	class CargoPants_Black: CargoPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CargoPants_Black0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\CargoPants_g_Black_co.paa","DZ\characters\pants\data\CargoPants_Black_co.paa","DZ\characters\pants\data\CargoPants_Black_co.paa"};
	};
	class CargoPants_Blue: CargoPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CargoPants_Blue0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\CargoPants_g_Blue_co.paa","DZ\characters\pants\data\CargoPants_Blue_co.paa","DZ\characters\pants\data\CargoPants_Blue_co.paa"};
	};
	class CargoPants_Green: CargoPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CargoPants_Green0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\CargoPants_g_Green_co.paa","DZ\characters\pants\data\CargoPants_Green_co.paa","DZ\characters\pants\data\CargoPants_Green_co.paa"};
	};
	class CargoPants_Grey: CargoPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CargoPants_Grey0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\CargoPants_g_Grey_co.paa","DZ\characters\pants\data\CargoPants_Grey_co.paa","DZ\characters\pants\data\CargoPants_Grey_co.paa"};
	};
	class TTSKOPants: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TTSKOPants0";
		descriptionShort = "$STR_CfgVehicles_TTSKOPants1";
		model = "\DZ\characters\pants\ttsko_pants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,4};
		weight = 2500;
		absorbency = 0.6;
		heatIsolation = 2.8;
		visibilityModifier = 0.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 2;
		lootTag[] = {"Military_west","Military_east"};
		lootCategory = "Pants";
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_556x45","Ammo_762x54","Ammo_545x39","Ammo_762x54x39","Mag_FNX45_15Rnd","Mag_CLIP762x39_10Rnd","Mag_CMAG_10Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"FlashGrenade","RGD5Grenade","RDG2SmokeGrenade_Black","RDG2SmokeGrenade_White","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\TTsKO_Pants_g_camo_co.paa","\dz\characters\pants\data\TTsKO_Pants_camo_co.paa","\dz\characters\pants\data\TTsKO_Pants_camo_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\ttsko_pants_m.p3d";
			female = "\DZ\characters\pants\ttsko_pants_f.p3d";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\Characters\pants\data\ttsko_pants.rvmat","DZ\Characters\pants\data\ttsko_pants_damage.rvmat","DZ\Characters\pants\data\ttsko_pants_destruct.rvmat","DZ\Characters\pants\data\ttsko_pants_g.rvmat","DZ\Characters\pants\data\ttsko_pants_g_damage.rvmat","DZ\Characters\pants\data\ttsko_pants_g_destruct.rvmat"};
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\ttsko_pants.rvmat","DZ\characters\pants\Data\ttsko_pants_g.rvmat"}},{0.5,{"DZ\characters\pants\Data\ttsko_pants_damage.rvmat","DZ\characters\pants\Data\ttsko_pants_g_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\ttsko_pants_destruct.rvmat","DZ\characters\pants\Data\ttsko_pants_g_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.85;
					Blood = 0.8;
					Shock = 0.9;
				};
				class Melee
				{
					Health = 0.85;
					Blood = 0.8;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.85;
					Blood = 0.8;
					Shock = 0.9;
				};
			};
		};
	};
	class HunterPants_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_HunterPants_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_HunterPants_ColorBase1";
		model = "\DZ\characters\pants\HunterPants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,4};
		weight = 630;
		absorbency = 0.6;
		heatIsolation = 3;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 2;
		lootTag[] = {"Hunting","Fishing"};
		lootCategory = "Pants";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Binoculars","Rangefinder","AmmoBox_308Win_20Rnd","Ammo_308Win","HuntingOptic","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\HunterPants_m.p3d";
			female = "\DZ\characters\pants\HunterPants_f.p3d";
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\HunterPants.rvmat"}},{0.5,{"DZ\characters\pants\Data\HunterPants_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\HunterPants_destruct.rvmat"}}};
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
	};
	class HunterPants_Autumn: HunterPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HunterPants_Autumn0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\HunterPants_Autumn_co.paa","DZ\characters\pants\data\HunterPants_Autumn_co.paa","DZ\characters\pants\data\HunterPants_Autumn_co.paa"};
	};
	class HunterPants_Brown: HunterPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HunterPants_Brown0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\HunterPants_Brown_co.paa","DZ\characters\pants\data\HunterPants_Brown_co.paa","DZ\characters\pants\data\HunterPants_Brown_co.paa"};
	};
	class HunterPants_Spring: HunterPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HunterPants_Spring0";
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\HunterPants_Spring_co.paa","DZ\characters\pants\data\HunterPants_Spring_co.paa","DZ\characters\pants\data\HunterPants_Spring_co.paa"};
	};
	class HunterPants_Summer: HunterPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HunterPants_Summer0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\HunterPants_Summer_co.paa","DZ\characters\pants\data\HunterPants_Summer_co.paa","DZ\characters\pants\data\HunterPants_Summer_co.paa"};
	};
	class HunterPants_Winter: HunterPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HunterPants_Winter0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\HunterPants_Winter_co.paa","DZ\characters\pants\data\HunterPants_Winter_co.paa","DZ\characters\pants\data\HunterPants_Winter_co.paa"};
	};
	class CanvasPants_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_CanvasPants_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_CanvasPants_ColorBase1";
		model = "\DZ\characters\pants\CanvasPants_Long_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		weight = 370;
		ragQuantity = 3;
		absorbency = 0.6;
		heatIsolation = 2.6;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Civilian","Camping"};
		lootCategory = "Pants";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\CanvasPants_Long_m.p3d";
			female = "\DZ\characters\pants\CanvasPants_Long_f.p3d";
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\CanvasPants.rvmat"}},{0.5,{"DZ\characters\pants\Data\CanvasPants_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\CanvasPants_destruct.rvmat"}}};
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
	};
	class CanvasPants_Beige: CanvasPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CanvasPants_Beige0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\CanvasPants_Beige_co.paa","DZ\characters\pants\data\CanvasPants_Beige_co.paa","DZ\characters\pants\data\CanvasPants_Beige_co.paa"};
	};
	class CanvasPants_Blue: CanvasPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CanvasPants_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\CanvasPants_Blue_co.paa","DZ\characters\pants\data\CanvasPants_Blue_co.paa","DZ\characters\pants\data\CanvasPants_Blue_co.paa"};
	};
	class CanvasPants_Grey: CanvasPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CanvasPants_Grey0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\CanvasPants_Grey_co.paa","DZ\characters\pants\data\CanvasPants_Grey_co.paa","DZ\characters\pants\data\CanvasPants_Grey_co.paa"};
	};
	class CanvasPants_Red: CanvasPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CanvasPants_Red0";
		visibilityModifier = 1.0;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\CanvasPants_Red_co.paa","DZ\characters\pants\data\CanvasPants_Red_co.paa","DZ\characters\pants\data\CanvasPants_Red_co.paa"};
	};
	class CanvasPants_Violet: CanvasPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CanvasPants_Violet0";
		visibilityModifier = 1.0;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\CanvasPants_Violet_co.paa","DZ\characters\pants\data\CanvasPants_Violet_co.paa","DZ\characters\pants\data\CanvasPants_Violet_co.paa"};
	};
	class CanvasPantsMidi_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_CanvasPantsMidi_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_CanvasPantsMidi_ColorBase1";
		model = "\DZ\characters\pants\CanvasPants_Midi_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		weight = 370;
		ragQuantity = 3;
		absorbency = 0.6;
		heatIsolation = 2.3;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Civilian","Camping"};
		lootCategory = "Pants";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","personality"};
		hiddenSelectionsTextures[] = {};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\CanvasPants_Midi_m.p3d";
			female = "\DZ\characters\pants\CanvasPants_Midi_f.p3d";
		};
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
	};
	class CanvasPantsMidi_Beige: CanvasPantsMidi_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CanvasPantsMidi_Beige0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\CanvasPants_beige_co.paa","\dz\characters\pants\data\CanvasPants_beige_co.paa","\dz\characters\pants\data\CanvasPants_beige_co.paa"};
	};
	class CanvasPantsMidi_Blue: CanvasPantsMidi_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CanvasPantsMidi_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\CanvasPants_blue_co.paa","\dz\characters\pants\data\CanvasPants_blue_co.paa","\dz\characters\pants\data\CanvasPants_blue_co.paa"};
	};
	class CanvasPantsMidi_Grey: CanvasPantsMidi_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CanvasPantsMidi_Grey0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\CanvasPants_grey_co.paa","\dz\characters\pants\data\CanvasPants_grey_co.paa","\dz\characters\pants\data\CanvasPants_grey_co.paa"};
	};
	class CanvasPantsMidi_Red: CanvasPantsMidi_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CanvasPantsMidi_Red0";
		visibilityModifier = 1.0;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\CanvasPants_red_co.paa","\dz\characters\pants\data\CanvasPants_red_co.paa","\dz\characters\pants\data\CanvasPants_red_co.paa"};
	};
	class CanvasPantsMidi_Violet: CanvasPantsMidi_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_CanvasPantsMidi_Violet0";
		visibilityModifier = 1.0;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\CanvasPants_violet_co.paa","\dz\characters\pants\data\CanvasPants_violet_co.paa","\dz\characters\pants\data\CanvasPants_violet_co.paa"};
	};
	class TrackSuitPants_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_TrackSuitPants_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_TrackSuitPants_ColorBase1";
		model = "\DZ\characters\pants\TrackSuit_Pants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {3,2};
		weight = 490;
		ragQuantity = 3;
		absorbency = 0.8;
		heatIsolation = 2.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Civilian","School"};
		lootCategory = "Pants";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\TrackSuit_Pants_m.p3d";
			female = "\DZ\characters\pants\TrackSuit_Pants_f.p3d";
		};
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
					healthLevels[] = {{1.0,{"DZ\Characters\pants\data\TrackSuit_Pants.rvmat"}},{0.5,{"DZ\Characters\pants\data\TrackSuit_Pants_damage.rvmat"}},{0.0,{"DZ\Characters\pants\data\TrackSuit_Pants_destruct.rvmat"}}};
				};
			};
		};
	};
	class TrackSuitPants_Black: TrackSuitPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TrackSuitPants_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\TrackSuit_Pants_Black_co.paa","DZ\characters\pants\data\TrackSuit_Pants_Black_co.paa","DZ\characters\pants\data\TrackSuit_Pants_Black_co.paa"};
	};
	class TrackSuitPants_Blue: TrackSuitPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TrackSuitPants_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\TrackSuit_Pants_Blue_co.paa","DZ\characters\pants\data\TrackSuit_Pants_Blue_co.paa","DZ\characters\pants\data\TrackSuit_Pants_Blue_co.paa"};
	};
	class TrackSuitPants_Green: TrackSuitPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TrackSuitPants_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\TrackSuit_Pants_Green_co.paa","DZ\characters\pants\data\TrackSuit_Pants_Green_co.paa","DZ\characters\pants\data\TrackSuit_Pants_Green_co.paa"};
	};
	class TrackSuitPants_Red: TrackSuitPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TrackSuitPants_Red0";
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\TrackSuit_Pants_Red_co.paa","DZ\characters\pants\data\TrackSuit_Pants_Red_co.paa","DZ\characters\pants\data\TrackSuit_Pants_Red_co.paa"};
	};
	class TrackSuitPants_LightBlue: TrackSuitPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TrackSuitPants_LightBlue0";
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\TrackSuit_Pants_LightBlue_co.paa","DZ\characters\pants\data\TrackSuit_Pants_LightBlue_co.paa","DZ\characters\pants\data\TrackSuit_Pants_LightBlue_co.paa"};
	};
	class GorkaPants_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_GorkaPants_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_GorkaPants_ColorBase1";
		model = "\DZ\characters\pants\gorka_pants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {6,3};
		weight = 400;
		absorbency = 0.2;
		heatIsolation = 3.2;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 2;
		lootTag[] = {"Military_east"};
		lootCategory = "Pants";
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_556x45","Ammo_762x54","Ammo_545x39","Ammo_762x54x39","Mag_FNX45_15Rnd","Mag_CLIP762x39_10Rnd","Mag_CMAG_10Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"FlashGrenade","RGD5Grenade","RDG2SmokeGrenade_Black","RDG2SmokeGrenade_White","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\gorka_pants_m.p3d";
			female = "\DZ\characters\pants\gorka_pants_f.p3d";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\Characters\pants\data\GorkaEPants.rvmat","DZ\Characters\pants\data\GorkaEPants_damage.rvmat","DZ\Characters\pants\data\GorkaEPants_destruct.rvmat","DZ\Characters\pants\data\GorkaEPants_dropped.rvmat","DZ\Characters\pants\data\GorkaEPants_dropped_damage.rvmat","DZ\Characters\pants\data\GorkaEPants_dropped_destruct.rvmat"};
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\GorkaEPants.rvmat","DZ\characters\pants\Data\GorkaEPants_dropped.rvmat"}},{0.5,{"DZ\characters\pants\Data\GorkaEPants_damage.rvmat","DZ\characters\pants\Data\GorkaEPants_dropped_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\GorkaEPants_destruct.rvmat","DZ\characters\pants\Data\GorkaEPants_dropped_destruct.rvmat"}}};
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
	};
	class GorkaPants_Summer: GorkaPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaPants_Summer0";
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\gorka_pants_summer_CO.paa","DZ\characters\pants\data\gorka_pants_summer_CO.paa","DZ\characters\pants\data\gorka_pants_summer_CO.paa"};
	};
	class GorkaPants_Autumn: GorkaPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaPants_Autumn0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\gorka_pants_autumn_CO.paa","DZ\characters\pants\data\gorka_pants_autumn_CO.paa","DZ\characters\pants\data\gorka_pants_autumn_CO.paa"};
	};
	class GorkaPants_Flat: GorkaPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaPants_Flat0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\gorka_pants_flat_CO.paa","DZ\characters\pants\data\gorka_pants_flat_CO.paa","DZ\characters\pants\data\gorka_pants_flat_CO.paa"};
	};
	class GorkaPants_PautRev: GorkaPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_GorkaPants_PautRev0";
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\gorka_pants_PautRev_CO.paa","DZ\characters\pants\data\gorka_pants_PautRev_CO.paa","DZ\characters\pants\data\gorka_pants_PautRev_CO.paa"};
	};
	class PolicePants: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PolicePants0";
		descriptionShort = "$STR_CfgVehicles_PolicePants1";
		model = "\DZ\characters\pants\PolicePants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		weight = 510;
		ragQuantity = 3;
		absorbency = 0.6;
		heatIsolation = 3.2;
		visibilityModifier = 0.9;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Police"};
		lootCategory = "Pants";
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"DZ\characters\pants\data\PolicePants_co.paa","DZ\characters\pants\data\PolicePants_co.paa","DZ\characters\pants\data\PolicePants_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\PolicePants_m.p3d";
			female = "\DZ\characters\pants\PolicePants_f.p3d";
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\PolicePants.rvmat"}},{0.5,{"DZ\characters\pants\Data\PolicePants_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\PolicePants_destruct.rvmat"}}};
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
	};
	class PolicePantsOrel: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PolicePantsOrel0";
		descriptionShort = "$STR_CfgVehicles_PolicePantsOrel1";
		model = "\DZ\characters\pants\ttsko_pants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		weight = 520;
		absorbency = 0.1;
		heatIsolation = 3.6;
		visibilityModifier = 0.9;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 2;
		lootTag[] = {"Police"};
		lootCategory = "Pants";
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","personality"};
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\TTsKO_Pants_g_KamyshCamo_co.paa","\dz\characters\pants\data\TTsKO_Pants_KamyshCamo_co.paa","\dz\characters\pants\data\TTsKO_Pants_KamyshCamo_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\ttsko_pants_m.p3d";
			female = "\DZ\characters\pants\ttsko_pants_f.p3d";
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\ttsko_pants.rvmat","DZ\characters\pants\Data\ttsko_pants_g.rvmat"}},{0.5,{"DZ\characters\pants\Data\ttsko_pants_damage.rvmat","DZ\characters\pants\Data\ttsko_pants_g_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\ttsko_pants_destruct.rvmat","DZ\characters\pants\Data\ttsko_pants_g_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.9;
					Blood = 0.85;
					Shock = 0.9;
				};
				class Melee
				{
					Health = 0.9;
					Blood = 0.85;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.85;
					Shock = 0.9;
				};
			};
		};
	};
	class ParamedicPants_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_ParamedicPants_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_ParamedicPants_ColorBase1";
		model = "\DZ\characters\pants\ParaMedic_Pants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		weight = 390;
		absorbency = 0.2;
		heatIsolation = 2.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Medic"};
		lootCategory = "Pants";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"BandageDressing","BloodBagEmpty","BloodTestKit","CharcoalTablets","Epinephrine","Morphine","SalineBag","TetracyclineAntibiotics","VitaminBottle","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\ParaMedic_Pants_m.p3d";
			female = "\DZ\characters\pants\ParaMedic_Pants_f.p3d";
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\Paramedic_Pants.rvmat"}},{0.5,{"DZ\characters\pants\Data\Paramedic_Pants_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\Paramedic_Pants_destruct.rvmat"}}};
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
	};
	class ParamedicPants_Blue: ParamedicPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ParamedicPants_Blue0";
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Paramedic_Pants_blue_co.paa","\dz\characters\pants\data\Paramedic_Pants_blue_co.paa","\dz\characters\pants\data\Paramedic_Pants_blue_co.paa"};
	};
	class ParamedicPants_Crimson: ParamedicPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ParamedicPants_Crimson0";
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Paramedic_Pants_crimson_co.paa","\dz\characters\pants\data\Paramedic_Pants_crimson_co.paa","\dz\characters\pants\data\Paramedic_Pants_crimson_co.paa"};
	};
	class ParamedicPants_Green: ParamedicPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_ParamedicPants_Green0";
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Paramedic_Pants_green_co.paa","\dz\characters\pants\data\Paramedic_Pants_green_co.paa","\dz\characters\pants\data\Paramedic_Pants_green_co.paa"};
	};
	class FirefightersPants_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_FirefightersPants_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_FirefightersPants_ColorBase1";
		model = "\DZ\characters\pants\Firefighter_Pants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		weight = 2500;
		absorbency = 0;
		heatIsolation = 3;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Firefighters"};
		lootCategory = "Pants";
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"BandageDressing","BloodBagEmpty","BloodTestKit","CharcoalTablets","Epinephrine","Morphine","SalineBag","TetracyclineAntibiotics","VitaminBottle","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\Firefighter_Pants_m.p3d";
			female = "\DZ\characters\pants\Firefighter_Pants_f.p3d";
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\Firefighter_Pants.rvmat"}},{0.5,{"DZ\characters\pants\Data\Firefighter_Pants_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\Firefighter_Pants_destruct.rvmat"}}};
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
	};
	class FirefightersPants_Beige: FirefightersPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FirefightersPants_Beige0";
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Firefighter_pants_beige_co.paa","\dz\characters\pants\data\Firefighter_pants_beige_co.paa","\dz\characters\pants\data\Firefighter_pants_beige_co.paa"};
	};
	class FirefightersPants_Black: FirefightersPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FirefightersPants_Black0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Firefighter_pants_black_co.paa","\dz\characters\pants\data\Firefighter_pants_black_co.paa","\dz\characters\pants\data\Firefighter_pants_black_co.paa"};
	};
	class PrisonUniformPants: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PrisonUniformPants0";
		descriptionShort = "$STR_CfgVehicles_PrisonUniformPants1";
		model = "\DZ\characters\pants\prison_pants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {3,2};
		weight = 310;
		absorbency = 0.6;
		heatIsolation = 2;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Prison"};
		lootCategory = "Pants";
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\prison_pants_g_co.paa","\dz\characters\pants\data\prison_pants_co.paa","\dz\characters\pants\data\prison_pants_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\prison_pants_m.p3d";
			female = "\DZ\characters\pants\prison_pants_f.p3d";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\Characters\pants\data\prison_pants.rvmat","DZ\Characters\pants\data\prison_pants_damage.rvmat","DZ\Characters\pants\data\prison_pants_destruct.rvmat","DZ\Characters\pants\data\prison_pants_g.rvmat","DZ\Characters\pants\data\prison_pants_g_damage.rvmat","DZ\Characters\pants\data\prison_pants_g_destruct.rvmat"};
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\prison_pants.rvmat","DZ\characters\pants\Data\prison_pants_g.rvmat"}},{0.5,{"DZ\characters\pants\Data\prison_pants_damage.rvmat","DZ\characters\pants\Data\prison_pants_g_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\prison_pants_destruct.rvmat","DZ\characters\pants\Data\prison_pants_g_destruct.rvmat"}}};
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
	};
	class LeatherPants_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_LeatherPants_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_LeatherPants_ColorBase1";
		model = "\DZ\characters\pants\Pants_LeatherPants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		lootCategory = "Crafted";
		itemSize[] = {3,2};
		itemsCargoSize[] = {3,2};
		weight = 590;
		absorbency = 0.7;
		heatIsolation = 2.6;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		rotationFlags = 16;
		quickBarBonus = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\Pants_LeatherPants_m.p3d";
			female = "\DZ\characters\pants\Pants_LeatherPants_f.p3d";
		};
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
	};
	class LeatherPants_Natural: LeatherPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherPants_Natural0";
		visibilityModifier = 0.85;
		color = "Natural";
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\Characters\pants\data\Pants_LeatherPants_Natural.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Natural_damage.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Natural_destruct.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Natural.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Natural_damage.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Natural_destruct.rvmat"};
		};
		hiddenSelectionsMaterials[] = {"DZ\Characters\pants\data\Pants_LeatherPants_g_Natural.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Natural.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Natural.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\pants\data\Pants_LeatherPants_g_Natural.rvmat","DZ\characters\pants\data\Pants_LeatherPants_natural.rvmat"}},{0.5,{"DZ\characters\pants\Data\Pants_LeatherPants_g_natural_damage.rvmat","DZ\characters\pants\Data\Pants_LeatherPants_natural_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\Pants_LeatherPants_g_natural_destruct.rvmat","DZ\characters\pants\Data\Pants_LeatherPants_natural_destruct.rvmat"}}};
				};
			};
			class GlobalArmor: GlobalArmor{};
		};
	};
	class LeatherPants_Beige: LeatherPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherPants_Beige0";
		visibilityModifier = 0.9;
		color = "Beige";
		hiddenSelectionsMaterials[] = {"DZ\Characters\pants\data\Pants_LeatherPants_g_Natural.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Beige.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Beige.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\Characters\pants\data\Pants_LeatherPants_Natural.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Beige_damage.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Beige_destruct.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Natural.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Beige_damage.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Beige_destruct.rvmat"};
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\pants\data\Pants_LeatherPants_g_Natural.rvmat","DZ\characters\pants\data\Pants_LeatherPants_natural.rvmat"}},{0.5,{"DZ\characters\pants\Data\Pants_LeatherPants_g_Beige_damage.rvmat","DZ\characters\pants\Data\Pants_LeatherPants_beige_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\Pants_LeatherPants_g_Beige_destruct.rvmat","DZ\characters\pants\Data\Pants_LeatherPants_beige_destruct.rvmat"}}};
				};
			};
			class GlobalArmor: GlobalArmor{};
		};
	};
	class LeatherPants_Brown: LeatherPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherPants_Brown0";
		visibilityModifier = 0.85;
		color = "Brown";
		hiddenSelectionsMaterials[] = {"DZ\Characters\pants\data\Pants_LeatherPants_g_brown.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Brown.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Brown.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\Characters\pants\data\Pants_LeatherPants_Natural.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Brown_damage.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Brown_destruct.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Natural.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Brown_damage.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Brown_destruct.rvmat"};
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\pants\data\Pants_LeatherPants_g_Natural.rvmat","DZ\characters\pants\data\Pants_LeatherPants_natural.rvmat"}},{0.5,{"DZ\characters\pants\Data\Pants_LeatherPants_g_brown_damage.rvmat","DZ\characters\pants\Data\Pants_LeatherPants_brown_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\Pants_LeatherPants_g_brown_destruct.rvmat","DZ\characters\pants\Data\Pants_LeatherPants_brown_destruct.rvmat"}}};
				};
			};
			class GlobalArmor: GlobalArmor{};
		};
	};
	class LeatherPants_Black: LeatherPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherPants_Black0";
		visibilityModifier = 0.85;
		color = "Black";
		hiddenSelectionsMaterials[] = {"DZ\Characters\pants\data\Pants_LeatherPants_g_black.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Black.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Black.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\Characters\pants\data\Pants_LeatherPants_Natural.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Black_damage.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_Black_destruct.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Natural.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Black_damage.rvmat","DZ\Characters\pants\data\Pants_LeatherPants_g_Black_destruct.rvmat"};
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\pants\data\Pants_LeatherPants_g_Natural.rvmat","DZ\characters\pants\data\Pants_LeatherPants_natural.rvmat"}},{0.5,{"DZ\characters\pants\Data\Pants_LeatherPants_g_black_damage.rvmat","DZ\characters\pants\Data\Pants_LeatherPants_black_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\Pants_LeatherPants_g_black_destruct.rvmat","DZ\characters\pants\Data\Pants_LeatherPants_black_destruct.rvmat"}}};
				};
			};
			class GlobalArmor: GlobalArmor{};
		};
	};
	class MedicalScrubsPants_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_MedicalScrubsPants_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsPants_ColorBase1";
		model = "\DZ\characters\pants\MedicalScrubs_Pants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {2,1};
		itemsCargoSize[] = {3,2};
		weight = 500;
		absorbency = 0.9;
		heatIsolation = 3;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Medic"};
		lootCategory = "Pants";
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"BandageDressing","BloodBagEmpty","BloodTestKit","CharcoalTablets","Epinephrine","Morphine","SalineBag","TetracyclineAntibiotics","VitaminBottle","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\MedicalScrubs_Pants_m.p3d";
			female = "\DZ\characters\pants\MedicalScrubs_Pants_f.p3d";
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\MedicalScrubs_Pants.rvmat"}},{0.5,{"DZ\characters\pants\Data\MedicalScrubs_Pants_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\MedicalScrubs_Pants_destruct.rvmat"}}};
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
	};
	class MedicalScrubsPants_Blue: MedicalScrubsPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsPants_Blue0";
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\MedicalScrubs_Pants_blue_co.paa","\dz\characters\pants\data\MedicalScrubs_Pants_blue_co.paa","\dz\characters\pants\data\MedicalScrubs_Pants_blue_co.paa"};
	};
	class MedicalScrubsPants_Green: MedicalScrubsPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsPants_Green0";
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\MedicalScrubs_Pants_green_co.paa","\dz\characters\pants\data\MedicalScrubs_Pants_green_co.paa","\dz\characters\pants\data\MedicalScrubs_Pants_green_co.paa"};
	};
	class MedicalScrubsPants_White: MedicalScrubsPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MedicalScrubsPants_White0";
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\MedicalScrubs_Pants_white_co.paa","\dz\characters\pants\data\MedicalScrubs_Pants_white_co.paa","\dz\characters\pants\data\MedicalScrubs_Pants_white_co.paa"};
	};
	class USMCPants_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_USMCPants_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_USMCPants_ColorBase1";
		model = "\dz\characters\pants\USMC_pants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {6,3};
		weight = 872;
		absorbency = 0.15;
		heatIsolation = 3.4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 2;
		lootTag[] = {"Military_west"};
		lootCategory = "Pants";
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_556x45","Ammo_762x54","Ammo_545x39","Ammo_762x54x39","Mag_FNX45_15Rnd","Mag_CLIP762x39_10Rnd","Mag_CMAG_10Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"FlashGrenade","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "\dz\characters\pants\USMC_pants_m.p3d";
			female = "\dz\characters\pants\USMC_pants_f.p3d";
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\USMC_Pants.rvmat"}},{0.5,{"DZ\characters\pants\Data\USMC_Pants_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\USMC_Pants_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.9;
					Blood = 0.85;
					Shock = 0.9;
				};
				class Melee
				{
					Health = 0.9;
					Blood = 0.85;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.85;
					Shock = 0.9;
				};
			};
		};
	};
	class USMCPants_Desert: USMCPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_USMCPants_Desert0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\USMC_Pants_MarpatDesert_co.paa","\dz\characters\pants\data\USMC_Pants_MarpatDesert_co.paa","\dz\characters\pants\data\USMC_Pants_MarpatDesert_co.paa"};
	};
	class USMCPants_Woodland: USMCPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_USMCPants_Woodland0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\USMC_Pants_MarpatWoodland_co.paa","\dz\characters\pants\data\USMC_Pants_MarpatWoodland_co.paa","\dz\characters\pants\data\USMC_Pants_MarpatWoodland_co.paa"};
	};
	class SlacksPants_ColorBase: Clothing
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_SlacksPants_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_SlacksPants_ColorBase1";
		model = "\DZ\characters\pants\Slacks_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		weight = 184;
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 1;
		absorbency = 0.8;
		heatIsolation = 2.8;
		lootTag[] = {"Civilian"};
		lootCategory = "Pants";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\Slacks_m.p3d";
			female = "\DZ\characters\pants\Slacks_f.p3d";
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\Slacks.rvmat"}},{0.5,{"DZ\characters\pants\Data\Slacks_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\Slacks_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 1;
					Blood = 0.9;
					Shock = 1;
				};
				class Melee
				{
					Health = 1;
					Blood = 0.9;
					Shock = 1;
				};
				class Infected
				{
					Health = 1;
					Blood = 0.9;
					Shock = 1;
				};
			};
		};
	};
	class SlacksPants_Beige: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SlacksPants_Beige0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Slacks_beige_co.paa","\dz\characters\pants\data\Slacks_beige_co.paa","\dz\characters\pants\data\Slacks_beige_co.paa"};
	};
	class SlacksPants_Black: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SlacksPants_Black0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Slacks_black_co.paa","\dz\characters\pants\data\Slacks_black_co.paa","\dz\characters\pants\data\Slacks_black_co.paa"};
	};
	class SlacksPants_Blue: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SlacksPants_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Slacks_blue_co.paa","\dz\characters\pants\data\Slacks_blue_co.paa","\dz\characters\pants\data\Slacks_blue_co.paa"};
	};
	class SlacksPants_Brown: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SlacksPants_Brown0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Slacks_brown_co.paa","\dz\characters\pants\data\Slacks_brown_co.paa","\dz\characters\pants\data\Slacks_brown_co.paa"};
	};
	class SlacksPants_DarkGrey: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SlacksPants_DarkGrey0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Slacks_darkGrey_co.paa","\dz\characters\pants\data\Slacks_darkGrey_co.paa","\dz\characters\pants\data\Slacks_darkGrey_co.paa"};
	};
	class SlacksPants_Khaki: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SlacksPants_Khaki0";
		visibilityModifier = 0.78;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Slacks_khaki_co.paa","\dz\characters\pants\data\Slacks_khaki_co.paa","\dz\characters\pants\data\Slacks_khaki_co.paa"};
	};
	class SlacksPants_LightGrey: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SlacksPants_LightGrey0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Slacks_LightGrey_co.paa","\dz\characters\pants\data\Slacks_LightGrey_co.paa","\dz\characters\pants\data\Slacks_LightGrey_co.paa"};
	};
	class SlacksPants_White: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_SlacksPants_White0";
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Slacks_white_co.paa","\dz\characters\pants\data\Slacks_white_co.paa","\dz\characters\pants\data\Slacks_white_co.paa"};
	};
	class BDUPants: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BDUPants0";
		descriptionShort = "$STR_CfgVehicles_BDUPants1";
		model = "\DZ\characters\pants\bdu_pants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {6,3};
		weight = 1361;
		absorbency = 0.15;
		heatIsolation = 3.4;
		visibilityModifier = 0.7;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 2;
		lootTag[] = {"Military_west","Military_west"};
		lootCategory = "Pants";
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_556x45","Ammo_762x54","Ammo_545x39","Ammo_762x54x39","Mag_FNX45_15Rnd","Mag_CLIP762x39_10Rnd","Mag_CMAG_10Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"FlashGrenade","RGD5Grenade","RDG2SmokeGrenade_Black","RDG2SmokeGrenade_White","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\bdu_pants_woodland_co.paa","\dz\characters\pants\data\bdu_pants_woodland_co.paa","\dz\characters\pants\data\bdu_pants_woodland_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\bdu_pants_m.p3d";
			female = "\DZ\characters\pants\bdu_pants_f.p3d";
		};
		class DamageArmor
		{
			bleed = "0.15 - ((30 * 0.15) / 100)";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\bdu_pants.rvmat"}},{0.5,{"DZ\characters\pants\Data\bdu_pants_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\bdu_pants_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.9;
					Blood = 0.85;
					Shock = 0.9;
				};
				class Melee
				{
					Health = 0.9;
					Blood = 0.85;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.9;
					Blood = 0.85;
					Shock = 0.9;
				};
			};
		};
	};
	class NBCPantsBase: Clothing
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_NBCPantsBase0";
		descriptionShort = "$STR_CfgVehicles_NBCPantsBase1";
		model = "\DZ\characters\pants\NBC_Pants_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		weight = 520;
		absorbency = 0.1;
		heatIsolation = 3.6;
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Pants";
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_556x45","Ammo_762x54","Ammo_545x39","Ammo_762x54x39","Mag_FNX45_15Rnd","Mag_CLIP762x39_10Rnd","Mag_CMAG_10Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"FlashGrenade","RGD5Grenade","RDG2SmokeGrenade_Black","RDG2SmokeGrenade_White","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\NBC_Pants_m.p3d";
			female = "\DZ\characters\pants\NBC_Pants_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\NBC_Pants.rvmat"}},{0.5,{"DZ\characters\pants\Data\NBC_Pants_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\NBC_Pants_destruct.rvmat"}}};
				};
			};
		};
	};
	class NBCPantsGray: NBCPantsBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_NBCPantsGray0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\NBC_Pants_grey_co.paa","\dz\characters\pants\data\NBC_Pants_grey_co.paa","\dz\characters\pants\data\NBC_Pants_grey_co.paa"};
	};
	class Breeches_ColorBase: Clothing
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_Breeches_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Breeches_ColorBase1";
		model = "\DZ\characters\pants\BreechesF_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {3,3};
		weight = 470;
		absorbency = 0.7;
		heatIsolation = 2.6;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Civilian"};
		lootCategory = "Pants";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","personality"};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {"dz\characters\pants\data\BreechesF.rvmat","dz\characters\pants\data\BreechesF.rvmat","dz\characters\pants\data\BreechesF.rvmat","dz\characters\heads\data\hhl_m_white01_medium_002.rvmat"};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\BreechesF_m.p3d";
			female = "\DZ\characters\pants\BreechesF_f.p3d";
		};
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
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\BreechesF.rvmat"}},{0.5,{"DZ\characters\pants\Data\BreechesF_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\BreechesF_destruct.rvmat"}}};
				};
			};
		};
	};
	class Breeches_Pink: Breeches_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\BreechesF_pink_co.paa","\dz\characters\pants\data\BreechesF_pink_co.paa","\dz\characters\pants\data\BreechesF_pink_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class Breeches_Red: Breeches_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\BreechesF_red_co.paa","\dz\characters\pants\data\BreechesF_red_co.paa","\dz\characters\pants\data\BreechesF_red_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class Breeches_White: Breeches_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\BreechesF_white_co.paa","\dz\characters\pants\data\BreechesF_white_co.paa","\dz\characters\pants\data\BreechesF_white_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class Breeches_Green: Breeches_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\BreechesF_green_co.paa","\dz\characters\pants\data\BreechesF_green_co.paa","\dz\characters\pants\data\BreechesF_green_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class Breeches_Browncheck: Breeches_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\BreechesF_browncheck_co.paa","\dz\characters\pants\data\BreechesF_browncheck_co.paa","\dz\characters\pants\data\BreechesF_browncheck_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class Breeches_Blue: Breeches_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\BreechesF_blue_co.paa","\dz\characters\pants\data\BreechesF_blue_co.paa","\dz\characters\pants\data\BreechesF_blue_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class Breeches_Blackcheck: Breeches_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\BreechesF_blackcheck_co.paa","\dz\characters\pants\data\BreechesF_blackcheck_co.paa","\dz\characters\pants\data\BreechesF_blackcheck_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class Breeches_Black: Breeches_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\BreechesF_black_co.paa","\dz\characters\pants\data\BreechesF_black_co.paa","\dz\characters\pants\data\BreechesF_black_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class Breeches_Beige: Breeches_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\BreechesF_beige_co.paa","\dz\characters\pants\data\BreechesF_beige_co.paa","\dz\characters\pants\data\BreechesF_beige_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class Breeches_Beetcheck: Breeches_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\BreechesF_beetcheck_co.paa","\dz\characters\pants\data\BreechesF_beetcheck_co.paa","\dz\characters\pants\data\BreechesF_beetcheck_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class ShortJeans_ColorBase: Clothing
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_ShortJeans_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_ShortJeans_ColorBase1";
		model = "\DZ\characters\pants\ShortJeans_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {3,3};
		weight = 470;
		absorbency = 0.7;
		heatIsolation = 2.6;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Civilian"};
		lootCategory = "Pants";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","personality"};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {"dz\characters\pants\data\ShortJeans.rvmat","dz\characters\pants\data\ShortJeans.rvmat","dz\characters\pants\data\ShortJeans.rvmat","dz\characters\heads\data\hhl_m_white01_medium_002.rvmat"};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\ShortJeans_m.p3d";
			female = "\DZ\characters\pants\ShortJeans_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\ShortJeans.rvmat"}},{0.5,{"DZ\characters\pants\Data\ShortJeans_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\ShortJeans_destruct.rvmat"}}};
				};
			};
		};
	};
	class ShortJeans_Black: ShortJeans_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\ShortJeans_black_co.paa","\dz\characters\pants\data\ShortJeans_black_co.paa","\dz\characters\pants\data\ShortJeans_black_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class ShortJeans_Blue: ShortJeans_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.98;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\ShortJeans_blue_co.paa","\dz\characters\pants\data\ShortJeans_blue_co.paa","\dz\characters\pants\data\ShortJeans_blue_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class ShortJeans_Brown: ShortJeans_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.98;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\ShortJeans_brown_co.paa","\dz\characters\pants\data\ShortJeans_brown_co.paa","\dz\characters\pants\data\ShortJeans_brown_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class ShortJeans_Darkblue: ShortJeans_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.98;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\ShortJeans_darkblue_co.paa","\dz\characters\pants\data\ShortJeans_darkblue_co.paa","\dz\characters\pants\data\ShortJeans_darkblue_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class ShortJeans_Green: ShortJeans_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.98;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\ShortJeans_green_co.paa","\dz\characters\pants\data\ShortJeans_green_co.paa","\dz\characters\pants\data\ShortJeans_green_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class ShortJeans_Red: ShortJeans_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\ShortJeans_red_co.paa","\dz\characters\pants\data\ShortJeans_red_co.paa","\dz\characters\pants\data\ShortJeans_red_co.paa","dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"};
	};
	class Skirt_ColorBase: Clothing
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_Skirt_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Skirt_ColorBase1";
		model = "\DZ\characters\pants\Skirt_g.p3d";
		ContinuouActions[] = {190};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {3,3};
		weight = 470;
		absorbency = 0.7;
		heatIsolation = 2.6;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus = 1;
		lootTag[] = {"Civilian"};
		lootCategory = "Pants";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","personality"};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {"dz\characters\pants\data\Skirt.rvmat","dz\characters\pants\data\Skirt.rvmat","dz\characters\pants\data\Skirt.rvmat","dz\characters\heads\data\hhl_m_white_06.rvmat"};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\pants\Skirt_m.p3d";
			female = "\DZ\characters\pants\Skirt_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\pants\Data\Skirt.rvmat"}},{0.5,{"DZ\characters\pants\Data\Skirt_damage.rvmat"}},{0.0,{"DZ\characters\pants\Data\Skirt_destruct.rvmat"}}};
				};
			};
		};
	};
	class Skirt_Blue: Skirt_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Skirt_blue_co.paa","\dz\characters\pants\data\Skirt_blue_co.paa","\dz\characters\pants\data\Skirt_blue_co.paa","dz\characters\heads\data\hhl_m_white_06_co.paa"};
	};
	class Skirt_Red: Skirt_ColorBase
	{
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Skirt_red_co.paa","\dz\characters\pants\data\Skirt_red_co.paa","\dz\characters\pants\data\Skirt_red_co.paa","dz\characters\heads\data\hhl_m_white_06_co.paa"};
	};
	class Skirt_White: Skirt_ColorBase
	{
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Skirt_white_co.paa","\dz\characters\pants\data\Skirt_white_co.paa","\dz\characters\pants\data\Skirt_white_co.paa","dz\characters\heads\data\hhl_m_white_06_co.paa"};
	};
	class Skirt_Yellow: Skirt_ColorBase
	{
		hiddenSelectionsTextures[] = {"\dz\characters\pants\data\Skirt_yellow_co.paa","\dz\characters\pants\data\Skirt_yellow_co.paa","\dz\characters\pants\data\Skirt_yellow_co.paa","dz\characters\heads\data\hhl_m_white_06_co.paa"};
	};
	class MaleLegsAbove: MaleLegs_Base
	{
		displayName = "$STR_CfgVehicles_MaleLegsAbove0";
		model = "\dz\characters\pants\legs3_m.p3d";
	};
	class FemaleLegsAbove: MaleLegs_Base
	{
		displayName = "$STR_CfgVehicles_FemaleLegsAbove0";
		model = "\dz\characters\pants\legs3_f.p3d";
	};
};
//};
