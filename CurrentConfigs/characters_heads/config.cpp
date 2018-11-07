////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:03:53 2018 : 'file' last modified on Wed Aug 22 15:23:09 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\characters_heads\config.bin{
class CfgPatches
{
	class DZ_Characters_Heads
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class MaleAdamHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved_co.paa";
			head = "MaleAdamHead";
			identityTypes[] = {"maleAdam"};
			material = "dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat";
		};
		class MaleAdamHead: Default{};
	};
	class MaleBorisHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved_co.paa";
			head = "MaleBorisHead";
			identityTypes[] = {"maleBoris"};
			material = "dz\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved.rvmat";
		};
		class MaleBorisHead: Default{};
	};
	class MaleCyrilHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved_co.paa";
			head = "MaleCyrilHead";
			identityTypes[] = {"maleCyril"};
			material = "dz\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved.rvmat";
		};
		class MaleCyrilHead: Default{};
	};
	class MaleDenisHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved_co.paa";
			head = "MaleDenisHead";
			identityTypes[] = {"maleDenis"};
			material = "dz\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved.rvmat";
		};
		class MaleDenisHead: Default{};
	};
	class MaleEliasHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved_co.paa";
			head = "MaleEliasHead";
			identityTypes[] = {"maleElias"};
			material = "dz\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved.rvmat";
		};
		class MaleEliasHead: Default{};
	};
	class MaleFrancisHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved_co.paa";
			head = "MaleFrancisHead";
			identityTypes[] = {"maleFrancis"};
			material = "dz\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved.rvmat";
		};
		class MaleFrancisHead: Default{};
	};
	class MaleGuoHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved_co.paa";
			head = "MaleGuoHead";
			identityTypes[] = {"maleGuo"};
			material = "dz\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved.rvmat";
		};
		class MaleGuoHead: Default{};
	};
	class MaleHassanHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved_co.paa";
			head = "MaleHassanHead";
			identityTypes[] = {"maleHassan"};
			material = "dz\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved.rvmat";
		};
		class MaleHassanHead: Default{};
	};
	class MaleIndarHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved_co.paa";
			head = "MaleIndarHead";
			identityTypes[] = {"maleIndar"};
			material = "dz\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved.rvmat";
		};
		class MaleIndarHead: Default{};
	};
	class MaleJoseHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved_co.paa";
			head = "MaleJoseHead";
			identityTypes[] = {"maleJose"};
			material = "dz\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved.rvmat";
		};
		class MaleJoseHead: Default{};
	};
	class MaleKaitoHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved_co.paa";
			head = "MaleKaitoHead";
			identityTypes[] = {"maleKaito"};
			material = "dz\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved.rvmat";
		};
		class MaleKaitoHead: Default{};
	};
	class MaleLewisHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_co.paa";
			head = "MaleLewisHead";
			identityTypes[] = {"maleLewis"};
			material = "dz\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved.rvmat";
		};
		class MaleLewisHead: Default{};
	};
	class MaleManuaHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_co.paa";
			head = "MaleManuaHead";
			identityTypes[] = {"maleManua"};
			material = "dz\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved.rvmat";
		};
		class MaleManuaHead: Default{};
	};
	class MaleNikiHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_co.paa";
			head = "MaleNikiHead";
			identityTypes[] = {"maleNiki"};
			material = "dz\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved.rvmat";
		};
		class MaleNikiHead: Default{};
	};
	class MaleOliverHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_co.paa";
			head = "MaleOliverHead";
			identityTypes[] = {"maleOliver"};
			material = "dz\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved.rvmat";
		};
		class MaleOliverHead: Default{};
	};
	class MalePeterHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved_co.paa";
			head = "MalePeterHead";
			identityTypes[] = {"malePeter"};
			material = "dz\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved.rvmat";
		};
		class MalePeterHead: Default{};
	};
	class MaleQuinnHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_co.paa";
			head = "MaleQuinnHead";
			identityTypes[] = {"maleQuinn"};
			material = "dz\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved.rvmat";
		};
		class MaleQuinnHead: Default{};
	};
	class MaleRolfHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_co.paa";
			head = "MaleRolfHead";
			identityTypes[] = {"maleRolf"};
			material = "dz\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved.rvmat";
		};
		class MaleRolfHead: Default{};
	};
	class MaleSethHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_co.paa";
			head = "MaleSethHead";
			identityTypes[] = {"maleSeth"};
			material = "dz\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved.rvmat";
		};
		class MaleSethHead: Default{};
	};
	class MaleTaikiHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_co.paa";
			head = "MaleTaikiHead";
			identityTypes[] = {"maleTaiki"};
			material = "dz\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved.rvmat";
		};
		class MaleTaikiHead: Default{};
	};
	class FemaleEvaHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\f_Eva_2\hhl_f_Eva_body_co.paa";
			head = "FemaleEvaHead";
			identityTypes[] = {"Woman"};
			material = "dz\characters\heads\data\f_Eva_2\hhl_f_Eva_body.rvmat";
		};
		class FemaleEvaHead: Default{};
	};
	class FemaleFridaHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\f_Frida_2\hhl_f_Frida_body_co.paa";
			head = "FemaleFridaHead";
			identityTypes[] = {"Woman"};
			material = "dz\characters\heads\data\f_Frida_2\hhl_f_Frida_body.rvmat";
		};
		class FemaleFridaHead: Default{};
	};
	class FemaleGabiHead: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body_co.paa";
			head = "FemaleGabiHead";
			identityTypes[] = {"Woman"};
			material = "dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body.rvmat";
		};
		class FemaleGabiHead: Default{};
	};
	class FemaleHelgaHead: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleHelgaHead_Default0";
			texture = "dz\characters\heads\data\f_Helga\hhl_f_Helga_body_co.paa";
			head = "FemaleHelgaHead";
			material = "dz\characters\heads\data\f_Helga\hhl_f_Helga_body.rvmat";
			identityTypes[] = {"femaleHelga"};
		};
		class FemaleHelgaHead: Default{};
	};
	class FemaleIrenaHead: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleIrenaHead_Default0";
			texture = "dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body_co.paa";
			head = "FemaleIrenaHead";
			material = "dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body.rvmat";
			identityTypes[] = {"femaleIrena"};
		};
		class FemaleIrenaHead: Default{};
	};
	class FemaleJudyHead: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleJudyHead_Default0";
			texture = "dz\characters\heads\data\f_Judy\hhl_f_Judy_body_co.paa";
			head = "FemaleJudyHead";
			material = "dz\characters\heads\data\f_Judy\hhl_f_Judy_body.rvmat";
			identityTypes[] = {"femaleJudy"};
		};
		class FemaleJudyHead: Default{};
	};
	class FemaleKeikoHead: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleKeikoHead_Default0";
			texture = "dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body_co.paa";
			head = "FemaleKeikoHead";
			material = "dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body.rvmat";
			identityTypes[] = {"femaleKeiko"};
		};
		class FemaleKeikoHead: Default{};
	};
	class FemaleLindaHead: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleLindaHead_Default0";
			texture = "dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body_co.paa";
			head = "FemaleLindaHead";
			material = "dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body.rvmat";
			identityTypes[] = {"femaleLinda"};
		};
		class FemaleLindaHead: Default{};
	};
	class FemaleMariaHead: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleMariaHead_Default0";
			texture = "dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body_co.paa";
			head = "FemaleMariaHead";
			material = "dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body.rvmat";
			identityTypes[] = {"femaleMaria"};
		};
		class FemaleMariaHead: Default{};
	};
	class FemaleNaomiHead: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleNaomiHead_Default0";
			texture = "dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body_co.paa";
			head = "FemaleNaomiHead";
			material = "dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body.rvmat";
			identityTypes[] = {"femaleNaomi"};
		};
		class FemaleNaomiHead: Default{};
	};
	class AnimalHead
	{
		class Default
		{
			displayname = "$STR_FN_AnimalHead_Default";
			texture = "\DZ\Characters\Heads\Data\hhl_m_white_06_co.paa";
			head = "";
			identityTypes[] = {"Animal"};
			material = "";
		};
		class Animal: Default{};
	};
	class MaleAdamHeadNoBeard: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved_co.paa";
			head = "MaleAdamHeadNoBeard";
			identityTypes[] = {"maleAdam"};
			material = "dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat";
		};
		class MaleAdamHeadNoBeard: Default{};
	};
	class MaleAdamHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed.paa";
			head = "MaleAdamHeadDecayed";
			identityTypes[] = {"maleAdam"};
			material = "dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat";
		};
		class MaleAdamHeadDecayed: Default{};
	};
	class MaleAdamHeadDecayedDark: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed_dark.paa";
			head = "MaleAdamHeadDecayedDark";
			identityTypes[] = {"maleAdam"};
			material = "dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat";
		};
		class MaleAdamHeadDecayedDark: Default{};
	};
	class MaleAdamHeadDecayedLighterDark: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed_lighter_dark.paa";
			head = "MaleAdamHeadDecayedLighterDark";
			identityTypes[] = {"maleAdam"};
			material = "dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat";
		};
		class MaleAdamHeadDecayedLighterDark: Default{};
	};
	class MaleBorisHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved_decayed_co.paa";
			head = "MaleBorisHead";
			identityTypes[] = {"maleBoris"};
			material = "dz\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved.rvmat";
		};
		class MaleBorisHeadDecayed: Default{};
	};
	class MaleCyrilHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved_decayed_co.paa";
			head = "MaleCyrilHead";
			identityTypes[] = {"maleCyril"};
			material = "dz\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved.rvmat";
		};
		class MaleCyrilHeadDecayed: Default{};
	};
	class MaleDenisHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved_decayed_co.paa";
			head = "MaleDenisHead";
			identityTypes[] = {"maleDenis"};
			material = "dz\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved.rvmat";
		};
		class MaleDenisHeadDecayed: Default{};
	};
	class MaleEliasHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved_decayed_co.paa";
			head = "MaleEliasHead";
			identityTypes[] = {"maleElias"};
			material = "dz\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved.rvmat";
		};
		class MaleEliasHeadDecayed: Default{};
	};
	class MaleFrancisHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved_decayed_co.paa";
			head = "MaleFrancisHead";
			identityTypes[] = {"maleFrancis"};
			material = "dz\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved.rvmat";
		};
		class MaleFrancisHeadDecayed: Default{};
	};
	class MaleGuoHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved_decayed_co.paa";
			head = "MaleGuoHead";
			identityTypes[] = {"maleGuo"};
			material = "dz\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved.rvmat";
		};
		class MaleGuoHeadDecayed: Default{};
	};
	class MaleHassanHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved_decayed_co.paa";
			head = "MaleHassanHead";
			identityTypes[] = {"maleHassan"};
			material = "dz\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved.rvmat";
		};
		class MaleHassanHeadDecayed: Default{};
	};
	class MaleIndarHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved_decayed_co.paa";
			head = "MaleIndarHead";
			identityTypes[] = {"maleIndar"};
			material = "dz\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved.rvmat";
		};
		class MaleIndarHeadDecayed: Default{};
	};
	class MaleJoseHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved_decayed_co.paa";
			head = "MaleJoseHead";
			identityTypes[] = {"maleJose"};
			material = "dz\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved.rvmat";
		};
		class MaleJoseHeadDecayed: Default{};
	};
	class MaleKaitoHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved_decayed_co.paa";
			head = "MaleKaitoHead";
			identityTypes[] = {"maleKaito"};
			material = "dz\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved.rvmat";
		};
		class MaleKaitoHeadDecayed: Default{};
	};
	class MaleLewisHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_decayed_co.paa";
			head = "MaleLewisHead";
			identityTypes[] = {"maleLewis"};
			material = "dz\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved.rvmat";
		};
		class MaleLewisHeadDecayed: Default{};
	};
	class MaleManuaHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_decayed_co.paa";
			head = "MaleManuaHead";
			identityTypes[] = {"maleManua"};
			material = "dz\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved.rvmat";
		};
		class MaleManuaHeadDecayed: Default{};
	};
	class MaleNikiHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_decayed_co.paa";
			head = "MaleNikiHead";
			identityTypes[] = {"maleNiki"};
			material = "dz\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved.rvmat";
		};
		class MaleNikiHeadDecayed: Default{};
	};
	class MaleOliverHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_decayed_co.paa";
			head = "MaleOliverHead";
			identityTypes[] = {"maleOliver"};
			material = "dz\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved.rvmat";
		};
		class MaleOliverHeadDecayed: Default{};
	};
	class MalePeterHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved_decayed_co.paa";
			head = "MalePeterHead";
			identityTypes[] = {"malePeter"};
			material = "dz\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved.rvmat";
		};
		class MalePeterHeadDecayed: Default{};
	};
	class MaleQuinnHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_decayed_co.paa";
			head = "MaleQuinnHead";
			identityTypes[] = {"maleQuinn"};
			material = "dz\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved.rvmat";
		};
		class MaleQuinnHeadDecayed: Default{};
	};
	class MaleRolfHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_decayed_co.paa";
			head = "MaleRolfHead";
			identityTypes[] = {"maleRolf"};
			material = "dz\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved.rvmat";
		};
		class MaleRolfHeadDecayed: Default{};
	};
	class MaleSethHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_decayed_co.paa";
			head = "MaleSethHead";
			identityTypes[] = {"maleSeth"};
			material = "dz\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved.rvmat";
		};
		class MaleSethHeadDecayed: Default{};
	};
	class MaleTaikiHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_decayed_co.paa";
			head = "MaleTaikiHead";
			identityTypes[] = {"maleTaiki"};
			material = "dz\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved.rvmat";
		};
		class MaleTaikiHeadDecayed: Default{};
	};
	class FemaleEvaHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\f_Eva_2\hhl_f_Eva_body_decayed_co.paa";
			head = "FemaleEvaHead";
			identityTypes[] = {"Woman"};
			material = "dz\characters\heads\data\f_Eva_2\hhl_f_Eva_body.rvmat";
		};
		class FemaleEvaHeadDecayed: Default{};
	};
	class FemaleFridaHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\f_Frida_2\hhl_f_Frida_body_decayed_co.paa";
			head = "FemaleFridaHead";
			identityTypes[] = {"Woman"};
			material = "dz\characters\heads\data\f_Frida_2\hhl_f_Frida_body.rvmat";
		};
		class FemaleFridaHeadDecayed: Default{};
	};
	class FemaleGabiHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body_decayed_co.paa";
			head = "FemaleGabiHead";
			identityTypes[] = {"Woman"};
			material = "dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body.rvmat";
		};
		class FemaleGabiHeadDecayed: Default{};
	};
	class FemaleGabi2HeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body_decayed_co.paa";
			head = "FemaleGabi2Head";
			identityTypes[] = {"Woman"};
			material = "dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body.rvmat";
		};
		class FemaleGabi2HeadDecayed: Default{};
	};
	class FemaleHelgaHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleHelgaHead_Default0";
			texture = "dz\characters\heads\data\f_Helga\hhl_f_Helga_body_decayed_co.paa";
			head = "FemaleHelgaHead";
			material = "dz\characters\heads\data\f_Helga\hhl_f_Helga_body.rvmat";
			identityTypes[] = {"femaleHelga"};
		};
		class FemaleHelgaHeadDecayed: Default{};
	};
	class FemaleIrenaHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleIrenaHead_Default0";
			texture = "dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body_decayed_co.paa";
			head = "FemaleIrenaHead";
			material = "dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body.rvmat";
			identityTypes[] = {"femaleIrena"};
		};
		class FemaleIrenaHeadDecayed: Default{};
	};
	class FemaleIrena2HeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleIrena2Head_Default0";
			texture = "dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body_decayed_co.paa";
			head = "FemaleIrena2Head";
			material = "dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body.rvmat";
			identityTypes[] = {"femaleIrena"};
		};
		class FemaleIrena2HeadDecayed: Default{};
	};
	class FemaleJudyHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleJudyHead_Default0";
			texture = "dz\characters\heads\data\f_Judy\hhl_f_Judy_body_decayed_co.paa";
			head = "FemaleJudyHead";
			material = "dz\characters\heads\data\f_Judy\hhl_f_Judy_body.rvmat";
			identityTypes[] = {"femaleJudy"};
		};
		class FemaleJudyHeadDecayed: Default{};
	};
	class FemaleKeikoHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleKeikoHead_Default0";
			texture = "dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body_decayed_co.paa";
			head = "FemaleKeikoHead";
			material = "dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body.rvmat";
			identityTypes[] = {"femaleKeiko"};
		};
		class FemaleKeikoHeadDecayed: Default{};
	};
	class FemaleLindaHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleLindaHead_Default0";
			texture = "dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body_decayed_co.paa";
			head = "FemaleLindaHead";
			material = "dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body.rvmat";
			identityTypes[] = {"femaleLinda"};
		};
		class FemaleLindaHeadDecayed: Default{};
	};
	class FemaleLinda2HeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleLinda2Head_Default0";
			texture = "dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body_decayed_co.paa";
			head = "FemaleLinda2Head";
			material = "dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body.rvmat";
			identityTypes[] = {"femaleLinda"};
		};
		class FemaleLinda2HeadDecayed: Default{};
	};
	class FemaleMariaHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleMariaHead_Default0";
			texture = "dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body_decayed_co.paa";
			head = "FemaleMariaHead";
			material = "dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body.rvmat";
			identityTypes[] = {"femaleMaria"};
		};
		class FemaleMariaHeadDecayed: Default{};
	};
	class FemaleMaria2HeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleMaria2Head_Default0";
			texture = "dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body_decayed_co.paa";
			head = "FemaleMaria2Head";
			material = "dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body.rvmat";
			identityTypes[] = {"femaleMaria"};
		};
		class FemaleMaria2HeadDecayed: Default{};
	};
	class FemaleNaomiHeadDecayed: Default
	{
		class Default
		{
			displayname = "$STR_CfgFaces_FemaleNaomiHead_Default0";
			texture = "dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body_decayed_co.paa";
			head = "FemaleNaomiHead";
			material = "dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body.rvmat";
			identityTypes[] = {"femaleNaomi"};
		};
		class FemaleNaomiHeadDecayed: Default{};
	};
};
class CfgGlasses
{
	class None
	{
		displayname = "$STR_CfgGlasses_None0";
		identityTypes[] = {"NoGlasses",1000,"Glasses",700};
		scope = 2;
	};
	class joeyx_black: None
	{
		displayname = "$STR_CfgGlasses_joeyx_black0";
		model = "\DZ\characters\glasses\joeyx_black.p3d";
		identityTypes[] = {"Glasses",300};
		scope = 2;
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class heads_temp: Inventory_Base
	{
		scope = 1;
		displayName = "face";
		descriptionShort = "for testing purposes only";
	};
	class FemaleFridaHead: heads_temp
	{
		model = "\dz\characters\heads\f_Frida.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleGabi2Head: heads_temp
	{
		model = "\dz\characters\heads\f_Gabi_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleHelgaHead: heads_temp
	{
		model = "\dz\characters\heads\f_Helga.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleIrenaHead: heads_temp
	{
		model = "\dz\characters\heads\f_Irena.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleIrena2Head: heads_temp
	{
		model = "\dz\characters\heads\f_Irena_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleJudyHead: heads_temp
	{
		model = "\dz\characters\heads\f_Judy.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\f_Judy\hhl_f_Judy_body.rvmat","DZ\Characters\Heads\Data\f_Judy\hhl_f_Judy_body_injury.rvmat","DZ\Characters\Heads\Data\f_Judy\hhl_f_Judy_body_injury2.rvmat"};
		};
	};
	class FemaleKeikoHead: heads_temp
	{
		model = "\dz\characters\heads\f_Keiko.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleLindaHead: heads_temp
	{
		model = "\dz\characters\heads\f_Linda.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleLinda2Head: heads_temp
	{
		model = "\dz\characters\heads\f_Linda_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleMariaHead: heads_temp
	{
		model = "\dz\characters\heads\f_Maria.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleMaria2Head: heads_temp
	{
		model = "\dz\characters\heads\f_Maria_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleNaomiHead: heads_temp
	{
		model = "\dz\characters\heads\f_Naomi.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleEvaHead: heads_temp
	{
		model = "\dz\characters\heads\f_eva.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleAdamHead: heads_temp
	{
		model = "\dz\characters\heads\m_adam.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleBorisHead: heads_temp
	{
		model = "\dz\characters\heads\m_boris.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleCyrilHead: heads_temp
	{
		model = "\dz\characters\heads\m_cyril.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleDenisHead: heads_temp
	{
		model = "\dz\characters\heads\m_denis.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleEliasHead: heads_temp
	{
		model = "\dz\characters\heads\m_elias.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleFrancisHead: heads_temp
	{
		model = "\dz\characters\heads\m_francis.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleGuoHead: heads_temp
	{
		model = "\dz\characters\heads\m_guo.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleHassanHead: heads_temp
	{
		model = "\dz\characters\heads\m_Hassan.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleIndarHead: heads_temp
	{
		model = "\dz\characters\heads\m_Indar.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleJoseHead: heads_temp
	{
		model = "\dz\characters\heads\m_Jose.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleKaitoHead: heads_temp
	{
		model = "\dz\characters\heads\m_Kaito.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleLewisHead: heads_temp
	{
		model = "\dz\characters\heads\m_Lewis.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_unshaved.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_bearded.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_bearded_injury2.rvmat"};
		};
	};
	class MaleManuaHead: heads_temp
	{
		model = "\dz\characters\heads\m_Manua.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_unshaved.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_bearded.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_bearded_injury2.rvmat"};
		};
	};
	class MaleNikiHead: heads_temp
	{
		model = "\dz\characters\heads\m_Niki_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_unshaved.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_bearded.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_bearded_injury2.rvmat"};
		};
	};
	class MaleOliverHead: heads_temp
	{
		model = "\dz\characters\heads\m_Oliver.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_unshaved.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_bearded.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_bearded_injury2.rvmat"};
		};
	};
	class MalePeterHead: heads_temp
	{
		model = "\dz\characters\heads\m_Peter.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleQuinnHead: heads_temp
	{
		model = "\dz\characters\heads\m_Quinn.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_unshaved.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_bearded.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_bearded_injury2.rvmat"};
		};
	};
	class MaleRolfHead: heads_temp
	{
		model = "\dz\characters\heads\m_Rolf.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_unshaved.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_bearded.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_bearded_injury2.rvmat"};
		};
	};
	class MaleSethHead: heads_temp
	{
		model = "\dz\characters\heads\m_Seth.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_unshaved.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_bearded.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_bearded_injury2.rvmat"};
		};
	};
	class MaleTaikiHead: heads_temp
	{
		model = "\dz\characters\heads\m_Taiki.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_unshaved.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_bearded.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_bearded_injury2.rvmat"};
		};
	};
	class MaleAdamHeadNoBeard: heads_temp
	{
		model = "\dz\characters\heads\m_Adam_noBeard.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyBysta
	{
		autocenter = 0;
		scope = 2;
		reversed = 1;
		animated = 1;
		model = "";
		simulation = "ProxySubpart";
	};
};
class MaskFaceDZ
{
	mask[] = {"Face_BrowFrontLeft",1,"Face_BrowFrontRight",1,"Face_BrowMiddle",1,"Face_BrowSideLeft",1,"Face_BrowSideRight",1,"Face_CornerLeft",1,"Face_CornerRight",1,"Face_Eyelids",1,"Face_Forehead",1,"Face_CheekFrontLeft",1,"Face_CheekFrontRight",1,"Face_CheekSideLeft",1,"Face_CheekSideRight",1,"Face_CheekUpperLeft",1,"Face_CheekUpperRight",1,"Face_Chin",1,"Face_ChopLeft",1,"Face_ChopRight",1,"Face_Jawbone",1,"Face_Jowl",1,"Face_LipLowerLeft",1,"Face_LipLowerMiddle",1,"Face_LipLowerRight",1,"Face_LipUpperLeft",1,"Face_LipUpperMiddle",1,"Face_LipUpperRight",1,"Face_NostrilLeft",1,"Face_NostrilRight",1,"Face_Tongue",1};
};
class EyeMask
{
	mask[] = {"Face_EyelidUpperRight",1,"Face_EyelidLowerRight",1,"Face_EyelidUpperLeft",1,"Face_EyelidLowerLeft",1,"EyeLeft",0.4,"EyeRight",0.4};
};
class MaskLipDZ
{
	mask[] = {"Face_BrowFrontLeft",0.5,"Face_BrowFrontRight",0.5,"Face_BrowMiddle",0.5,"Face_BrowSideLeft",0.5,"Face_BrowSideRight",0.5,"Face_CornerLeft",0.5,"Face_CornerRight",0.5,"Face_Forehead",0.5,"Face_CheekFrontLeft",0.5,"Face_CheekFrontRight",0.5,"Face_CheekSideLeft",0.5,"Face_CheekSideRight",0.5,"Face_CheekUpperLeft",0.5,"Face_CheekUpperRight",0.5,"Face_Chin",0.5,"Face_ChopLeft",0.5,"Face_ChopRight",0.5,"Face_Jawbone",0.5,"Face_Jowl",0.5,"Face_LipLowerLeft",0.5,"Face_LipLowerMiddle",0.5,"Face_LipLowerRight",0.5,"Face_LipUpperLeft",0.5,"Face_LipUpperMiddle",0.5,"Face_LipUpperRight",0.5,"Face_NostrilLeft",0.5,"Face_NostrilRight",0.5,"Face_Tongue",0.5};
};
class CfgHeads
{
	class Default
	{
		model = "\DZ\Characters\Heads\m_white_01_above0.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		class Grimaces
		{
			class Eyes
			{
				type = "eyes";
				eyeMaxAngle = 0.15;
				eyelidUpStartAngle = 0.4;
				eyelidUpMaxAngle = 1.0;
				eyelidDownStartAngle = 0.09;
				eyelidDownMaxAngle = 0.3;
			};
			class Lipsync
			{
				type = "lipsync";
				vizem[] = {"dz\anims\data\anim\fce\Neutral.rtm","dz\anims\data\anim\fce\vizem\a.rtm","dz\anims\data\anim\fce\vizem\e2.rtm","dz\anims\data\anim\fce\vizem\f.rtm","dz\anims\data\anim\fce\vizem\m.rtm","dz\anims\data\anim\fce\vizem\y.rtm","dz\anims\data\anim\fce\vizem\v.rtm","dz\anims\data\anim\fce\vizem\i.rtm"};
			};
			class RTM_Face
			{
				type = "rtm";
				anim = "dz\anims\data\anim\fce\Neutral.rtm";
			};
			class NeutralFace: RTM_Face
			{
				anim = "dz\anims\data\anim\fce\Neutral.rtm";
			};
			class DeadFace: RTM_Face
			{
				anim = "dz\anims\data\anim\fce\Dead.rtm";
			};
			class DangerFace: RTM_Face
			{
				anim = "dz\anims\data\anim\fce\Danger.rtm";
			};
			class HurtFace: RTM_Face
			{
				anim = "dz\anims\data\anim\fce\Hurt.rtm";
			};
			class AwareFace: RTM_Face
			{
				anim = "dz\anims\data\anim\fce\Aware.rtm";
			};
			class SafeFace: RTM_Face
			{
				anim = "dz\anims\data\anim\fce\Safe.rtm";
			};
			class CombatFace: RTM_Face
			{
				anim = "dz\anims\data\anim\fce\Combat.rtm";
			};
			class Neutral
			{
				type = "compound";
				class Items
				{
					class NeutralFace: MaskFaceDZ{};
					class Lipsync: MaskLipDZ{};
					class Eyes: EyeMask{};
				};
			};
			class Dead
			{
				type = "compound";
				class Items
				{
					class DeadFace: MaskFaceDZ{};
					class Eyes: EyeMask{};
				};
			};
			class Unconscious
			{
				type = "compound";
				class Items
				{
					class UnconsciousFace: MaskFaceDZ{};
				};
			};
			class Danger
			{
				type = "compound";
				class Items
				{
					class DangerFace: MaskFaceDZ{};
					class Lipsync: MaskLipDZ{};
					class Eyes: EyeMask{};
				};
			};
			class Hurt
			{
				type = "compound";
				class Items
				{
					class HurtFace: MaskFaceDZ{};
					class Lipsync: MaskLipDZ{};
					class Eyes: EyeMask{};
				};
			};
			class Aware
			{
				type = "compound";
				class Items
				{
					class AwareFace: MaskFaceDZ{};
					class Lipsync: MaskLipDZ{};
					class Eyes: EyeMask{};
				};
			};
			class Safe
			{
				type = "compound";
				class Items
				{
					class SafeFace: MaskFaceDZ{};
					class Lipsync: MaskLipDZ{};
					class Eyes: EyeMask{};
				};
			};
			class Combat
			{
				type = "compound";
				class Items
				{
					class CombatFace: MaskFaceDZ{};
					class Lipsync: MaskLipDZ{};
					class Eyes: EyeMask{};
				};
			};
		};
	};
	class FemaleFridaHead: Default
	{
		model = "\dz\characters\heads\f_Frida_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleGabiHead: Default
	{
		model = "\dz\characters\heads\f_Gabi_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleHelgaHead: Default
	{
		model = "\dz\characters\heads\f_Helga.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleIrenaHead: Default
	{
		model = "\dz\characters\heads\f_Irena_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleJudyHead: Default
	{
		model = "\dz\characters\heads\f_Judy.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleKeikoHead: Default
	{
		model = "\dz\characters\heads\f_Keiko.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleLindaHead: Default
	{
		model = "\dz\characters\heads\f_Linda_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleMariaHead: Default
	{
		model = "\dz\characters\heads\f_Maria_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleNaomiHead: Default
	{
		model = "\dz\characters\heads\f_Naomi.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat","DZ\Characters\Heads\Data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class FemaleEvaHead: Default
	{
		model = "\dz\characters\heads\f_Eva_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleAdamHead: Default
	{
		model = "\dz\characters\heads\m_adam.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleBorisHead: Default
	{
		model = "\dz\characters\heads\m_boris.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleCyrilHead: Default
	{
		model = "\dz\characters\heads\m_cyril.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleDenisHead: Default
	{
		model = "\dz\characters\heads\m_Denis_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleEliasHead: Default
	{
		model = "\dz\characters\heads\m_elias.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleFrancisHead: Default
	{
		model = "\dz\characters\heads\m_francis.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleGuoHead: Default
	{
		model = "\dz\characters\heads\m_guo.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleHassanHead: Default
	{
		model = "\dz\characters\heads\m_Hassan.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleIndarHead: Default
	{
		model = "\dz\characters\heads\m_Indar.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleJoseHead: Default
	{
		model = "\dz\characters\heads\m_Jose.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleKaitoHead: Default
	{
		model = "\dz\characters\heads\m_Kaito.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleLewisHead: Default
	{
		model = "\dz\characters\heads\m_Lewis.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_unshaved.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_bearded.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_bearded_injury2.rvmat"};
		};
	};
	class MaleManuaHead: Default
	{
		model = "\dz\characters\heads\m_Manua.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_unshaved.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_bearded.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_bearded_injury2.rvmat"};
		};
	};
	class MaleNikiHead: Default
	{
		model = "\dz\characters\heads\m_Niki_2.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_unshaved.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_bearded.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_bearded_injury2.rvmat"};
		};
	};
	class MaleOliverHead: Default
	{
		model = "\dz\characters\heads\m_Oliver.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_unshaved.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_bearded.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_bearded_injury2.rvmat"};
		};
	};
	class MalePeterHead: Default
	{
		model = "\dz\characters\heads\m_Peter.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleQuinnHead: Default
	{
		model = "\dz\characters\heads\m_Quinn.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_unshaved.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_bearded.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_bearded_injury2.rvmat"};
		};
	};
	class MaleRolfHead: Default
	{
		model = "\dz\characters\heads\m_Rolf.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_unshaved.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_bearded.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_bearded_injury2.rvmat"};
		};
	};
	class MaleSethHead: Default
	{
		model = "\dz\characters\heads\m_Seth.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_unshaved.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_bearded.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_bearded_injury2.rvmat"};
		};
	};
	class MaleTaikiHead: Default
	{
		model = "\dz\characters\heads\m_Taiki.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_injury.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_injury2.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_unshaved.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_unshaved_injury.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_unshaved_injury2.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_bearded.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_bearded_injury.rvmat","DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_bearded_injury2.rvmat"};
		};
	};
	class MaleAdamHeadNoBeard: Default
	{
		model = "\dz\characters\heads\m_Adam_noBeard.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleAdamHeadDecayed: Default
	{
		model = "\dz\characters\heads\m_Adam_noBeard.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleAdamHeadDecayedDark: Default
	{
		model = "\dz\characters\heads\m_Adam_noBeard.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
	class MaleAdamHeadDecayedLighterDark: Default
	{
		model = "\dz\characters\heads\m_Adam_noBeard.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
	};
};
//};
