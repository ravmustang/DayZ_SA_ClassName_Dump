////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:03:48 2018 : 'file' last modified on Wed Aug 22 15:10:33 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\characters_gloves\config.bin{
class CfgPatches
{
	class DZ_Characters_Gloves
	{
		units[] = {"MaleHands","FemaleHands"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class MaleHands_Base: Inventory_Base
	{
		scope = 1;
		displayName = "Bare hands";
		model = "\DZ\characters\gloves\hands3_m.p3d";
		inventorySlot = "Gloves";
		hiddenSelections[] = {"personality"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.843137,0.768627,0.658824,1.0,CO)"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\hhl_dummy_skin_material.rvmat"};
	};
	class MaleAdamHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"};
	};
	class MaleBorisHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved.rvmat"};
	};
	class MaleCyrilHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved.rvmat"};
	};
	class MaleDenisHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved.rvmat"};
	};
	class MaleEliasHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved.rvmat"};
	};
	class MaleFrancisHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved.rvmat"};
	};
	class MaleGuoHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved.rvmat"};
	};
	class MaleHassanHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved.rvmat"};
	};
	class MaleIndarHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved.rvmat"};
	};
	class MaleJoseHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved.rvmat"};
	};
	class MaleKaitoHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved.rvmat"};
	};
	class MaleLewisHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved.rvmat"};
	};
	class MaleManuaHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved.rvmat"};
	};
	class MaleNikiHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved.rvmat"};
	};
	class MaleOliverHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved.rvmat"};
	};
	class MalePeterHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved.rvmat"};
	};
	class MaleQuinnHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved.rvmat"};
	};
	class MaleRolfHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved.rvmat"};
	};
	class MaleSethHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved.rvmat"};
	};
	class MaleTaikiHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved.rvmat"};
	};
	class FemaleHands_Base: Inventory_Base
	{
		scope = 1;
		displayName = "Bare hands";
		model = "\DZ\characters\gloves\hands3_f.p3d";
		inventorySlot = "Gloves";
		hiddenSelections[] = {"personality"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.843137,0.768627,0.658824,1.0,CO)"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\hhl_dummy_skin_material.rvmat"};
	};
	class FemaleEvaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Eva_2\hhl_f_Eva_body.rvmat"};
	};
	class FemaleFridaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Frida_2\hhl_f_frida_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Frida_2\hhl_f_frida_body.rvmat"};
	};
	class FemaleGabiHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body.rvmat"};
	};
	class FemaleHelgaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Helga\hhl_f_Helga_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Helga\hhl_f_Helga_body.rvmat"};
	};
	class FemaleIrenaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body.rvmat"};
	};
	class FemaleJudyHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Judy\hhl_f_Judy_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Judy\hhl_f_Judy_body.rvmat"};
	};
	class FemaleKeikoHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body.rvmat"};
	};
	class FemaleLindaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body.rvmat"};
	};
	class FemaleMariaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body.rvmat"};
	};
	class FemaleNaomiHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body.rvmat"};
	};
	class MaleAdamDecayedHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"};
	};
	class MaleAdamDecayedDarkHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed_dark.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"};
	};
	class MaleAdamDecayedLighterDarkHands: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed_lighter_dark.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"};
	};
	class MaleBorisHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved.rvmat"};
	};
	class MaleCyrilHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved.rvmat"};
	};
	class MaleDenisHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved.rvmat"};
	};
	class MaleEliasHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved.rvmat"};
	};
	class MaleFrancisHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved.rvmat"};
	};
	class MaleGuoHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved.rvmat"};
	};
	class MaleHassanHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved.rvmat"};
	};
	class MaleIndarHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved.rvmat"};
	};
	class MaleJoseHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved.rvmat"};
	};
	class MaleKaitoHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved.rvmat"};
	};
	class MaleLewisHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved.rvmat"};
	};
	class MaleManuaHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved.rvmat"};
	};
	class MaleNikiHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved.rvmat"};
	};
	class MaleOliverHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved.rvmat"};
	};
	class MalePeterHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved.rvmat"};
	};
	class MaleQuinnHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved.rvmat"};
	};
	class MaleRolfHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved.rvmat"};
	};
	class MaleSethHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved.rvmat"};
	};
	class MaleTaikiHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved.rvmat"};
	};
	class FemaleEvaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Eva_2\hhl_f_Eva_body.rvmat"};
	};
	class FemaleFridaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Frida_2\hhl_f_frida_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Frida_2\hhl_f_frida_body.rvmat"};
	};
	class FemaleGabiHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"\DZ\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body.rvmat"};
	};
	class FemaleHelgaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Helga\hhl_f_Helga_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Helga\hhl_f_Helga_body.rvmat"};
	};
	class FemaleIrenaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body.rvmat"};
	};
	class FemaleJudyHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Judy\hhl_f_Judy_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Judy\hhl_f_Judy_body.rvmat"};
	};
	class FemaleKeikoHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body.rvmat"};
	};
	class FemaleLindaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body.rvmat"};
	};
	class FemaleMariaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body.rvmat"};
	};
	class FemaleNaomiHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[] = {"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body_decayed_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body.rvmat"};
	};
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class WorkingGloves_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_WorkingGloves_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_WorkingGloves_ColorBase1";
		model = "\DZ\characters\gloves\working_gloves_g.p3d";
		inventorySlot = "Gloves";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Gloves"};
		armAction = "OneHanded";
		rotationFlags = 17;
		weight = 130;
		itemSize[] = {2,1};
		absorbency = 0.4;
		heatIsolation = 0.26;
		lootTag[] = {"Work","Military_east","Military_west","Firefighters"};
		lootCategory = "Gloves";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","personality"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\gloves\data\WorkingGloves.rvmat","DZ\characters\gloves\data\WorkingGloves_damage.rvmat","DZ\characters\gloves\data\WorkingGloves_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\gloves\working_gloves_m.p3d";
			female = "\DZ\characters\gloves\working_gloves_f.p3d";
		};
		class DamageArmor
		{
			biological = 0.3;
		};
	};
	class WorkingGloves_Black: WorkingGloves_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WorkingGloves_Black0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\gloves\data\WorkingGloves_black_co.paa","DZ\characters\gloves\data\WorkingGloves_black_co.paa","DZ\characters\gloves\data\WorkingGloves_black_co.paa"};
	};
	class WorkingGloves_Beige: WorkingGloves_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WorkingGloves_Beige0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\gloves\data\WorkingGloves_beige_co.paa","DZ\characters\gloves\data\WorkingGloves_beige_co.paa","DZ\characters\gloves\data\WorkingGloves_beige_co.paa"};
	};
	class WorkingGloves_Brown: WorkingGloves_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WorkingGloves_Brown0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\gloves\data\WorkingGloves_brown_co.paa","DZ\characters\gloves\data\WorkingGloves_brown_co.paa","DZ\characters\gloves\data\WorkingGloves_brown_co.paa"};
	};
	class WorkingGloves_Yellow: WorkingGloves_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WorkingGloves_Yellow0";
		hiddenSelectionsTextures[] = {"DZ\characters\gloves\data\WorkingGloves_yellow_co.paa","DZ\characters\gloves\data\WorkingGloves_yellow_co.paa","DZ\characters\gloves\data\WorkingGloves_yellow_co.paa"};
	};
	class TacticalGloves_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_TacticalGloves_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_TacticalGloves_ColorBase1";
		model = "\DZ\characters\gloves\tactical_gloves_g.p3d";
		inventorySlot = "Gloves";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Gloves"};
		armAction = "OneHanded";
		weight = 454;
		itemSize[] = {2,1};
		absorbency = 0.4;
		heatIsolation = 0.26;
		lootTag[] = {"Work","Military_east","Military_west","Firefighters"};
		lootCategory = "Gloves";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","personality"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\gloves\data\TacticalGloves.rvmat","DZ\characters\gloves\data\TacticalGloves_damage.rvmat","DZ\characters\gloves\data\TacticalGloves_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\gloves\tactical_gloves_m.p3d";
			female = "\DZ\characters\gloves\tactical_gloves_f.p3d";
		};
		class DamageArmor
		{
			biological = 0.3;
			bleed = 0.15;
		};
	};
	class TacticalGloves_Black: TacticalGloves_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TacticalGloves_Black0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"DZ\characters\gloves\data\TacticalGloves_black_co.paa","DZ\characters\gloves\data\TacticalGloves_black_co.paa","DZ\characters\gloves\data\TacticalGloves_black_co.paa"};
	};
	class TacticalGloves_Beige: TacticalGloves_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TacticalGloves_Beige0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"DZ\characters\gloves\data\TacticalGloves_beige_co.paa","DZ\characters\gloves\data\TacticalGloves_beige_co.paa","DZ\characters\gloves\data\TacticalGloves_beige_co.paa"};
	};
	class TacticalGloves_Green: TacticalGloves_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_TacticalGloves_Green0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"DZ\characters\gloves\data\TacticalGloves_green_co.paa","DZ\characters\gloves\data\TacticalGloves_green_co.paa","DZ\characters\gloves\data\TacticalGloves_green_co.paa"};
	};
	class NBCGlovesBase: Clothing
	{
		scope = 0;
		absorbency = 0.4;
		heatIsolation = 0.26;
		displayName = "$STR_CfgVehicles_NBCGlovesBase0";
		descriptionShort = "$STR_CfgVehicles_NBCGlovesBase1";
		model = "\DZ\characters\gloves\NBC_Gloves_g.p3d";
		inventorySlot = "Gloves";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Gloves"};
		armAction = "OneHanded";
		weight = 454;
		itemSize[] = {2,1};
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Gloves";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		class ClothingTypes
		{
			male = "\DZ\characters\gloves\NBC_Gloves_m.p3d";
			female = "\DZ\characters\gloves\NBC_Gloves_f.p3d";
		};
		class DamageArmor
		{
			biological = 0.3;
			bleed = 0.15;
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\gloves\data\NBC_Gloves.rvmat","DZ\characters\gloves\data\NBC_Gloves_damage.rvmat","DZ\characters\gloves\data\NBC_Gloves_destruct.rvmat"};
		};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","personality"};
	};
	class NBCGlovesGray: NBCGlovesBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_NBCGlovesGray0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa","\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa","\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa"};
	};
};
//};
