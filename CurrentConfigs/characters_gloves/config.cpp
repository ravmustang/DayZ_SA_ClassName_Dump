class CfgPatches
{
	class DZ_Characters_Gloves
	{
		units[]=
		{
			"MaleHands",
			"FemaleHands"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class MaleHands_Base: Inventory_Base
	{
		scope=1;
		displayName="Bare hands";
		model="\DZ\characters\gloves\hands3_m.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		hiddenSelections[]=
		{
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.843137,0.768627,0.658824,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_dummy_skin_material.rvmat"
		};
	};
	class MaleAdamHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"
		};
	};
	class MaleBorisHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved.rvmat"
		};
	};
	class MaleCyrilHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved.rvmat"
		};
	};
	class MaleDenisHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved.rvmat"
		};
	};
	class MaleEliasHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved.rvmat"
		};
	};
	class MaleFrancisHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved.rvmat"
		};
	};
	class MaleGuoHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved.rvmat"
		};
	};
	class MaleHassanHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved.rvmat"
		};
	};
	class MaleIndarHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved.rvmat"
		};
	};
	class MaleJoseHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved.rvmat"
		};
	};
	class MaleKaitoHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved.rvmat"
		};
	};
	class MaleLewisHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved.rvmat"
		};
	};
	class MaleManuaHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved.rvmat"
		};
	};
	class MaleNikiHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved.rvmat"
		};
	};
	class MaleOliverHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved.rvmat"
		};
	};
	class MalePeterHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved.rvmat"
		};
	};
	class MaleQuinnHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved.rvmat"
		};
	};
	class MaleRolfHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved.rvmat"
		};
	};
	class MaleSethHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved.rvmat"
		};
	};
	class MaleTaikiHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved.rvmat"
		};
	};
	class FemaleHands_Base: Inventory_Base
	{
		scope=1;
		displayName="Bare hands";
		model="\DZ\characters\gloves\hands3_f.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		hiddenSelections[]=
		{
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.843137,0.768627,0.658824,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_dummy_skin_material.rvmat"
		};
	};
	class FemaleEvaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Eva_2\hhl_f_Eva_body.rvmat"
		};
	};
	class FemaleFridaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\f_Frida_2\hhl_f_frida_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Frida_2\hhl_f_frida_body.rvmat"
		};
	};
	class FemaleGabiHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body.rvmat"
		};
	};
	class FemaleHelgaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Helga\hhl_f_Helga_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Helga\hhl_f_Helga_body.rvmat"
		};
	};
	class FemaleIrenaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body.rvmat"
		};
	};
	class FemaleJudyHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Judy\hhl_f_Judy_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Judy\hhl_f_Judy_body.rvmat"
		};
	};
	class FemaleKeikoHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body.rvmat"
		};
	};
	class FemaleLindaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body.rvmat"
		};
	};
	class FemaleMariaHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body.rvmat"
		};
	};
	class FemaleNaomiHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body.rvmat"
		};
	};
	class FemaleBatyHands: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Baty\hhl_f_Baty_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Baty\hhl_f_Baty_body.rvmat"
		};
	};
	class MaleAdamDecayedHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"
		};
	};
	class MaleAdamDecayedDarkHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed_dark.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"
		};
	};
	class MaleAdamDecayedLighterDarkHands: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\m_Adam\Adam_body_shaved_decayed_lighter_dark.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Adam\hhl_m_Adam_body_shaved.rvmat"
		};
	};
	class MaleBorisHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Boris\hhl_m_Boris_body_shaved.rvmat"
		};
	};
	class MaleCyrilHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Cyril\hhl_m_Cyril_body_shaved.rvmat"
		};
	};
	class MaleDenisHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Denis_2\hhl_m_Denis_body_shaved.rvmat"
		};
	};
	class MaleEliasHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Elias\hhl_m_Elias_body_shaved.rvmat"
		};
	};
	class MaleFrancisHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Francis\hhl_m_Francis_body_shaved.rvmat"
		};
	};
	class MaleGuoHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Guo\hhl_m_Guo_body_shaved.rvmat"
		};
	};
	class MaleHassanHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Hassan\hhl_m_Hassan_body_shaved.rvmat"
		};
	};
	class MaleIndarHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Indar\hhl_m_Indar_body_shaved.rvmat"
		};
	};
	class MaleJoseHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Jose\hhl_m_Jose_body_shaved.rvmat"
		};
	};
	class MaleKaitoHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Kaito\hhl_m_Kaito_body_shaved.rvmat"
		};
	};
	class MaleLewisHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Lewis\hhl_m_Lewis_body_shaved.rvmat"
		};
	};
	class MaleManuaHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Manua\hhl_m_Manua_body_shaved.rvmat"
		};
	};
	class MaleNikiHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Niki_2\hhl_m_Niki_body_shaved.rvmat"
		};
	};
	class MaleOliverHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Oliver\hhl_m_Oliver_body_shaved.rvmat"
		};
	};
	class MalePeterHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Peter\hhl_m_Peter_body_shaved.rvmat"
		};
	};
	class MaleQuinnHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Quinn\hhl_m_Quinn_body_shaved.rvmat"
		};
	};
	class MaleRolfHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Rolf\hhl_m_Rolf_body_shaved.rvmat"
		};
	};
	class MaleSethHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Seth\hhl_m_Seth_body_shaved.rvmat"
		};
	};
	class MaleTaikiHandsDecayed: MaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\m_Taiki\hhl_m_Taiki_body_shaved.rvmat"
		};
	};
	class FemaleEvaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Eva_2\hhl_f_Eva_body.rvmat"
		};
	};
	class FemaleFridaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\f_Frida_2\hhl_f_frida_body_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Frida_2\hhl_f_frida_body.rvmat"
		};
	};
	class FemaleGabiHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Gabi_2\hhl_f_Gabi_body.rvmat"
		};
	};
	class FemaleHelgaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Helga\hhl_f_Helga_body_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Helga\hhl_f_Helga_body.rvmat"
		};
	};
	class FemaleIrenaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Irena_2\hhl_f_Irena_body.rvmat"
		};
	};
	class FemaleJudyHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Judy\hhl_f_Judy_body_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Judy\hhl_f_Judy_body.rvmat"
		};
	};
	class FemaleKeikoHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Keiko\hhl_f_Keiko_body.rvmat"
		};
	};
	class FemaleLindaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Linda_2\hhl_f_Linda_body.rvmat"
		};
	};
	class FemaleMariaHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Maria_2\hhl_f_Maria_body.rvmat"
		};
	};
	class FemaleNaomiHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Naomi\hhl_f_Naomi_body.rvmat"
		};
	};
	class FemaleBatyHandsDecayed: FemaleHands_Base
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\f_Baty\hhl_f_Baty_body_decayed_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\f_Baty\hhl_f_Baty_body.rvmat"
		};
	};
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class WorkingGloves_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_WorkingGloves_ColorBase0";
		descriptionShort="$STR_CfgVehicles_WorkingGloves_ColorBase1";
		model="\DZ\characters\gloves\working_gloves_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		visibilityModifier=0.89999998;
		weight=130;
		itemSize[]={2,2};
		varWetMax=0.49000001;
		heatIsolation=0.5;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\gloves\data\WorkingGloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\WorkingGloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\WorkingGloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\WorkingGloves_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\WorkingGloves_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=1;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\gloves\working_gloves_m.p3d";
			female="\DZ\characters\gloves\working_gloves_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class WorkingGloves_Black: WorkingGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\WorkingGloves_black_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_black_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_black_co.paa"
		};
	};
	class WorkingGloves_Beige: WorkingGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\WorkingGloves_beige_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_beige_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_beige_co.paa"
		};
	};
	class WorkingGloves_Brown: WorkingGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\WorkingGloves_brown_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_brown_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_brown_co.paa"
		};
	};
	class WorkingGloves_Yellow: WorkingGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\WorkingGloves_yellow_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_yellow_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_yellow_co.paa"
		};
	};
	class HandsCover_Improvised: Clothing
	{
		scope=2;
		displayName="$STR_HandsCover_Improvised0";
		descriptionShort="$STR_HandsCover_Improvised1";
		model="\DZ\characters\gloves\handsCover_improvised_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		visibilityModifier=0.89999998;
		weight=100;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.15000001;
		repairableWithKits[]={2};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\gloves\data\handsCover_improvised_co.paa",
			"dz\characters\gloves\data\handsCover_improvised_co.paa",
			"dz\characters\gloves\data\handsCover_improvised_co.paa",
			"dz\characters\gloves\data\handsCover_improvised_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\gloves\data\handsCover_improvised.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\handsCover_improvised.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\handsCover_improvised_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\handsCover_improvised_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\handsCover_improvised_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\gloves\handsCover_improvised_m.p3d";
			female="\DZ\characters\gloves\handsCover_improvised_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TacticalGloves_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_TacticalGloves_ColorBase0";
		descriptionShort="$STR_CfgVehicles_TacticalGloves_ColorBase1";
		model="\DZ\characters\gloves\tactical_gloves_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		visibilityModifier=0.89999998;
		weight=454;
		itemSize[]={2,2};
		varWetMax=0.79000002;
		heatIsolation=0.60000002;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=165;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\gloves\data\TacticalGloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\TacticalGloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\TacticalGloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\TacticalGloves_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\TacticalGloves_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.85000002;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.80000001;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\gloves\tactical_gloves_m.p3d";
			female="\DZ\characters\gloves\tactical_gloves_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TacticalGloves_Black: TacticalGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\TacticalGloves_black_co.paa",
			"DZ\characters\gloves\data\TacticalGloves_black_co.paa",
			"DZ\characters\gloves\data\TacticalGloves_black_co.paa"
		};
	};
	class TacticalGloves_Beige: TacticalGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\TacticalGloves_beige_co.paa",
			"DZ\characters\gloves\data\TacticalGloves_beige_co.paa",
			"DZ\characters\gloves\data\TacticalGloves_beige_co.paa"
		};
	};
	class TacticalGloves_Green: TacticalGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\TacticalGloves_green_co.paa",
			"DZ\characters\gloves\data\TacticalGloves_green_co.paa",
			"DZ\characters\gloves\data\TacticalGloves_green_co.paa"
		};
	};
	class NBCGloves_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_cfgvehicles_nbcglovesbase0";
		descriptionShort="$STR_cfgvehicles_nbcglovesbase1";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		visibilityModifier=0.89999998;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		model="\DZ\characters\gloves\NBC_Gloves_g.p3d";
		weight=454;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0.34999999;
		repairableWithKits[]={5,6};
		repairCosts[]={30,30};
		class Protection
		{
			biological=0;
			chemical=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\gloves\data\NBC_Gloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\NBC_Gloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\NBC_Gloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\NBC_Gloves_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\NBC_Gloves_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.94999999;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=1;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\gloves\NBC_Gloves_m.p3d";
			female="\DZ\characters\gloves\NBC_Gloves_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class NBCGlovesGray: NBCGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa",
			"\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa",
			"\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa"
		};
	};
	class NBCGlovesYellow: NBCGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\NBC_Gloves_yellow_co.paa",
			"\dz\characters\gloves\Data\NBC_Gloves_yellow_co.paa",
			"\dz\characters\gloves\Data\NBC_Gloves_yellow_co.paa"
		};
	};
	class SurgicalGloves_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_SurgicalGloves_ColorBase0";
		descriptionShort="$STR_CfgVehicles_SurgicalGloves_ColorBase1";
		model="\DZ\characters\gloves\Surgical_gloves_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		visibilityModifier=0.89999998;
		weight=100;
		itemSize[]={1,1};
		varWetMax=0.249;
		heatIsolation=0.050000001;
		repairableWithKits[]={5};
		repairCosts[]={30};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		class Protection
		{
			biological=0;
			chemical=0.5;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\gloves\data\Surgical_Gloves.rvmat",
								"DZ\Characters\gloves\data\Surgical_Gloves_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\Surgical_Gloves.rvmat",
								"DZ\Characters\gloves\data\Surgical_Gloves_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\Surgical_Gloves_damage.rvmat",
								"DZ\Characters\gloves\data\Surgical_Gloves_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\Surgical_Gloves_damage.rvmat",
								"DZ\Characters\gloves\data\Surgical_Gloves_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\Surgical_Gloves_destruct.rvmat",
								"DZ\Characters\gloves\data\Surgical_Gloves_g_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\gloves\Surgical_gloves_m.p3d";
			female="\DZ\characters\gloves\Surgical_gloves_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SurgicalGloves_Blue: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\Surgical_Gloves_blue_co.paa",
			"\dz\characters\gloves\Data\Surgical_Gloves_blue_co.paa",
			"\dz\characters\gloves\Data\Surgical_Gloves_blue_co.paa"
		};
	};
	class SurgicalGloves_LightBlue: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\Surgical_Gloves_light_blue_co.paa",
			"\dz\characters\gloves\Data\Surgical_Gloves_light_blue_co.paa",
			"\dz\characters\gloves\Data\Surgical_Gloves_light_blue_co.paa"
		};
	};
	class SurgicalGloves_Green: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\Surgical_Gloves_green_co.paa",
			"\dz\characters\gloves\Data\Surgical_Gloves_green_co.paa",
			"\dz\characters\gloves\Data\Surgical_Gloves_green_co.paa"
		};
	};
	class SurgicalGloves_White: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\Surgical_Gloves_white_co.paa",
			"\dz\characters\gloves\Data\Surgical_Gloves_white_co.paa",
			"\dz\characters\gloves\Data\Surgical_Gloves_white_co.paa"
		};
	};
	class LeatherGloves_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_LeatherGloves_ColorBase0";
		descriptionShort="$STR_CfgVehicles_LeatherGloves_ColorBase1";
		model="\DZ\characters\gloves\leather_gloves_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		visibilityModifier=0.89999998;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=1;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		class ClothingTypes
		{
			male="\DZ\characters\gloves\leather_gloves_m.p3d";
			female="\DZ\characters\gloves\leather_gloves_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=1;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class LeatherGloves_Natural: LeatherGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsMaterials[]=
		{
			"DZ\Characters\gloves\data\leather_gloves_Natural.rvmat",
			"DZ\Characters\gloves\data\leather_gloves_Natural.rvmat",
			"DZ\Characters\gloves\data\leather_gloves_Natural.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\gloves\data\leather_gloves_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\gloves\Data\leather_gloves_Natural_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\gloves\Data\leather_gloves_Natural_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherGloves_Beige: LeatherGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"DZ\Characters\gloves\data\leather_gloves_Beige.rvmat",
			"DZ\Characters\gloves\data\leather_gloves_Beige.rvmat",
			"DZ\Characters\gloves\data\leather_gloves_Beige.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\gloves\data\leather_gloves_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\gloves\Data\leather_gloves_Beige_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\gloves\Data\leather_gloves_Beige_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherGloves_Black: LeatherGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsMaterials[]=
		{
			"DZ\Characters\gloves\data\leather_gloves_Black.rvmat",
			"DZ\Characters\gloves\data\leather_gloves_Black.rvmat",
			"DZ\Characters\gloves\data\leather_gloves_Black.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\gloves\data\leather_gloves_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\gloves\Data\leather_gloves_Black_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\gloves\Data\leather_gloves_Black_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherGloves_Brown: LeatherGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsMaterials[]=
		{
			"DZ\Characters\gloves\data\leather_gloves_brown.rvmat",
			"DZ\Characters\gloves\data\leather_gloves_brown.rvmat",
			"DZ\Characters\gloves\data\leather_gloves_brown.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=40;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\gloves\data\leather_gloves_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\gloves\Data\leather_gloves_brown_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\gloves\Data\leather_gloves_brown_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class OMNOGloves_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_OMNOGloves_ColorBase0";
		descriptionShort="$STR_CfgVehicles_OMNOGloves_ColorBase1";
		model="\DZ\characters\gloves\OMNO_gloves_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		visibilityModifier=0.89999998;
		weight=450;
		itemSize[]={2,2};
		varWetMax=0.79000002;
		heatIsolation=0.80000001;
		class ClothingTypes
		{
			male="\DZ\characters\gloves\OMNO_gloves_m.p3d";
			female="\DZ\characters\gloves\OMNO_gloves_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=180;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\gloves\data\Surgical_Gloves.rvmat",
								"DZ\Characters\gloves\data\OMNOGloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\Surgical_Gloves.rvmat",
								"DZ\Characters\gloves\data\OMNOGloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\Surgical_Gloves_damage.rvmat",
								"DZ\Characters\gloves\data\OMNOGloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\Surgical_Gloves_damage.rvmat",
								"DZ\Characters\gloves\data\OMNOGloves_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\Surgical_Gloves_destruct.rvmat",
								"DZ\Characters\gloves\data\OMNOGloves_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.85000002;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.80000001;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class OMNOGloves_Gray: OMNOGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\OMNO_co.paa",
			"\dz\characters\gloves\Data\OMNO_co.paa",
			"\dz\characters\gloves\Data\OMNO_co.paa"
		};
	};
	class OMNOGloves_Brown: OMNOGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\OMNO_brown_co.paa",
			"\dz\characters\gloves\Data\OMNO_brown_co.paa",
			"\dz\characters\gloves\Data\OMNO_brown_co.paa"
		};
	};
	class WoolGloves_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_WoolGloves0";
		descriptionShort="$STR_CfgVehicles_WoolGloves1";
		model="\DZ\characters\gloves\woolgloves_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		visibilityModifier=0.89999998;
		ragQuantity=1;
		weight=130;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.89999998;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=110;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\gloves\data\WoolGloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\WoolGloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\WoolGloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\WoolGloves_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\WoolGloves_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\gloves\woolgloves_m.p3d";
			female="\DZ\characters\gloves\woolgloves_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class WoolGloves_Green: WoolGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\woolgloves_green_co.paa",
			"\dz\characters\gloves\Data\woolgloves_green_co.paa",
			"\dz\characters\gloves\Data\woolgloves_green_co.paa"
		};
	};
	class WoolGloves_Black: WoolGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\woolgloves_black_co.paa",
			"\dz\characters\gloves\Data\woolgloves_black_co.paa",
			"\dz\characters\gloves\Data\woolgloves_black_co.paa"
		};
	};
	class WoolGloves_Tan: WoolGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\woolgloves_tan_co.paa",
			"\dz\characters\gloves\Data\woolgloves_tan_co.paa",
			"\dz\characters\gloves\Data\woolgloves_tan_co.paa"
		};
	};
	class WoolGloves_White: WoolGloves_ColorBase
	{
		scope=2;
		color="White";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\woolgloves_white_co.paa",
			"\dz\characters\gloves\Data\woolgloves_white_co.paa",
			"\dz\characters\gloves\Data\woolgloves_white_co.paa"
		};
	};
	class WoolGloves_ChristmasBlue: WoolGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\WoolGloves_ChristmasBlue_CO.paa",
			"\dz\characters\gloves\Data\WoolGloves_ChristmasBlue_CO.paa",
			"\dz\characters\gloves\Data\WoolGloves_ChristmasBlue_CO.paa"
		};
	};
	class WoolGloves_ChristmasRed: WoolGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\WoolGloves_ChristmasRed_CO.paa",
			"\dz\characters\gloves\Data\WoolGloves_ChristmasRed_CO.paa",
			"\dz\characters\gloves\Data\WoolGloves_ChristmasRed_CO.paa"
		};
	};
	class WoolGlovesFingerless_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_FingerlessWoolGloves0";
		descriptionShort="$STR_CfgVehicles_WoolGloves1";
		model="\DZ\characters\gloves\WoolGlovesFingerless_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		visibilityModifier=0.89999998;
		ragQuantity=1;
		weight=100;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.64999998;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\gloves\data\WoolGloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\WoolGloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\WoolGloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\WoolGloves_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\WoolGloves_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\gloves\WoolGlovesFingerless_m.p3d";
			female="\DZ\characters\gloves\WoolGlovesFingerless_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class WoolGlovesFingerless_Green: WoolGlovesFingerless_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\woolgloves_green_co.paa",
			"\dz\characters\gloves\Data\woolgloves_green_co.paa",
			"\dz\characters\gloves\Data\woolgloves_green_co.paa"
		};
	};
	class WoolGlovesFingerless_Black: WoolGlovesFingerless_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\woolgloves_black_co.paa",
			"\dz\characters\gloves\Data\woolgloves_black_co.paa",
			"\dz\characters\gloves\Data\woolgloves_black_co.paa"
		};
	};
	class WoolGlovesFingerless_Tan: WoolGlovesFingerless_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\woolgloves_tan_co.paa",
			"\dz\characters\gloves\Data\woolgloves_tan_co.paa",
			"\dz\characters\gloves\Data\woolgloves_tan_co.paa"
		};
	};
	class WoolGlovesFingerless_White: WoolGlovesFingerless_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\woolgloves_white_co.paa",
			"\dz\characters\gloves\Data\woolgloves_white_co.paa",
			"\dz\characters\gloves\Data\woolgloves_white_co.paa"
		};
	};
	class WoolGlovesFingerless_ChristmasBlue: WoolGlovesFingerless_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\WoolGloves_ChristmasBlue_CO.paa",
			"\dz\characters\gloves\Data\WoolGloves_ChristmasBlue_CO.paa",
			"\dz\characters\gloves\Data\WoolGloves_ChristmasBlue_CO.paa"
		};
	};
	class WoolGlovesFingerless_ChristmasRed: WoolGlovesFingerless_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\WoolGloves_ChristmasRed_CO.paa",
			"\dz\characters\gloves\Data\WoolGloves_ChristmasRed_CO.paa",
			"\dz\characters\gloves\Data\WoolGloves_ChristmasRed_CO.paa"
		};
	};
	class PaddedGloves_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_PaddedGloves0";
		descriptionShort="$STR_CfgVehicles_PaddedGloves1";
		model="\DZ\characters\gloves\PaddedGloves_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		visibilityModifier=0.89999998;
		weight=400;
		itemSize[]={2,2};
		varWetMax=0.49000001;
		heatIsolation=1;
		repairableWithKits[]={3};
		repairCosts[]={25,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=170;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\gloves\data\PaddedGloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\PaddedGloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\PaddedGloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\PaddedGloves_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\PaddedGloves_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\gloves\PaddedGloves_m.p3d";
			female="\DZ\characters\gloves\PaddedGloves_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PaddedGloves_Brown: PaddedGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\PaddedGloves_brown_CO.paa",
			"\dz\characters\gloves\Data\PaddedGloves_brown_CO.paa",
			"\dz\characters\gloves\Data\PaddedGloves_brown_CO.paa"
		};
	};
	class PaddedGloves_Beige: PaddedGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\PaddedGloves_beige_CO.paa",
			"\dz\characters\gloves\Data\PaddedGloves_beige_CO.paa",
			"\dz\characters\gloves\Data\PaddedGloves_beige_CO.paa"
		};
	};
	class PaddedGloves_Threat: PaddedGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\PaddedGloves_threat_CO.paa",
			"\dz\characters\gloves\Data\PaddedGloves_threat_CO.paa",
			"\dz\characters\gloves\Data\PaddedGloves_threat_CO.paa"
		};
	};
	class SkiGloves_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_SkiGloves0";
		descriptionShort="$STR_CfgVehicles_SkiGloves1";
		model="\DZ\characters\gloves\skigloves_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=34;
		visibilityModifier=0.89999998;
		overrideDrawArea=0.035;
		weight=100;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={25,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\gloves\data\SkiGloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\gloves\data\SkiGloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\gloves\data\SkiGloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\gloves\data\SkiGloves_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\gloves\data\SkiGloves_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\gloves\skigloves_m.p3d";
			female="\DZ\characters\gloves\skigloves_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SkiGloves_Blue: SkiGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\SkiGloves_Blue_CO.paa",
			"\dz\characters\gloves\Data\SkiGloves_Blue_CO.paa",
			"\dz\characters\gloves\Data\SkiGloves_Blue_CO.paa"
		};
	};
	class SkiGloves_Red: SkiGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\SkiGloves_Red_CO.paa",
			"\dz\characters\gloves\Data\SkiGloves_Red_CO.paa",
			"\dz\characters\gloves\Data\SkiGloves_Red_CO.paa"
		};
	};
	class SkiGloves_90s: SkiGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\gloves\Data\SkiGloves_90s_CO.paa",
			"\dz\characters\gloves\Data\SkiGloves_90s_CO.paa",
			"\dz\characters\gloves\Data\SkiGloves_90s_CO.paa"
		};
	};
};
