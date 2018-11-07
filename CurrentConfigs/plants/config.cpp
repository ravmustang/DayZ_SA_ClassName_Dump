////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:41:55 2018 : 'file' last modified on Wed Aug 22 17:58:22 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\plants\config.bin{
class CfgPatches
{
	class DZ_Plants
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class ChristmasTree: HouseNoDestruct
	{
		model = "DZ\plants\tree\t_PiceaAbies_2s_xmas.p3d";
	};
};
class CfgNonAIVehicles
{
	class BushHard;
	class BushHard_b_betulaHumilis_1s: BushHard{};
	class BushHard_b_corylusAvellana_1f: BushHard{};
	class BushHard_b_corylusAvellana_2s: BushHard{};
	class BushHard_b_crataegusLaevigata_1s: BushHard{};
	class BushHard_b_crataegusLaevigata_2s: BushHard{};
	class BushHard_b_naked_2s: BushHard{};
	class BushHard_b_prunusSpinosa_1s: BushHard{};
	class BushHard_b_prunusSpinosa_2s: BushHard{};
	class BushHard_b_rosaCanina_1s: BushHard{};
	class BushHard_b_rosaCanina_2s: BushHard{};
	class BushHard_b_sambucusNigra_1s: BushHard{};
	class BushHard_b_sambucusNigra_2s: BushHard{};
	class TreeSoft;
	class TreeHard;
	class TreeHard_t_BetulaPendula_1f: TreeHard{};
	class TreeHard_t_BetulaPendula_1fb: TreeHard{};
	class TreeHard_t_BetulaPendula_1s: TreeHard{};
	class TreeHard_t_BetulaPendula_2f: TreeHard{};
	class TreeHard_t_BetulaPendula_2fb: TreeHard{};
	class TreeHard_t_BetulaPendula_2fc: TreeHard{};
	class TreeHard_t_BetulaPendula_2s: TreeHard{};
	class TreeHard_t_BetulaPendula_3f: TreeHard{};
	class TreeHard_t_BetulaPendula_3fb: TreeHard{};
	class TreeHard_t_BetulaPendula_3fc: TreeHard{};
	class TreeHard_t_BetulaPendula_3s: TreeHard{};
	class TreeHard_t_BetulaPendula_2w: TreeSoft{};
};
//};
