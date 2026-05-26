class CfgPatches
{
	class DZ_Structures_Signs
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Bilboard_Base: HouseNoDestruct
	{
		hiddenSelections[]=
		{
			"advert"
		};
		scope=1;
	};
	class Land_Bilboard_alkohol: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_alkohol.p3d";
		hiddenSelectionsTextures[]=
		{
			"\dz\structures\signs\billboards\data\board_alkohol_co.paa"
		};
	};
	class Land_Bilboard_Beach: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_Beach.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\bilboard_icecream_co.paa"
		};
	};
	class Land_Bilboard_Bienvenudo: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_Bienvenudo.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\bilboard_bienvenudo_co.paa"
		};
	};
	class Land_Bilboard_cibulka: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_cibulka.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_cibulka_co.paa"
		};
	};
	class Land_Bilboard_cigara_chernomorky: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_cigara_chernomorky.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_cigara_chernomorky_co.paa"
		};
	};
	class Land_Bilboard_Escape: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_Escape.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_kolgujev_co.paa"
		};
	};
	class Land_Bilboard_Everon: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_Everon.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_everon_co.paa"
		};
	};
	class Land_Bilboard_hey_buddy: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_hey_buddy.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_hey buddy_co.paa"
		};
	};
	class Land_Bilboard_hlinik: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_hlinik.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_hlinik_co.paa"
		};
	};
	class Land_Bilboard_likery_bardak: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_likery_bardak.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_likery_bardak_co.paa"
		};
	};
	class Land_Bilboard_Livonia_1: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_Livonia_1.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_livonia_1_co.paa"
		};
	};
	class Land_Bilboard_Livonia_2: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_Livonia_2.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_livonia_2_co.paa"
		};
	};
	class Land_Bilboard_Nogova: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_Nogova.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\billboard_nogova_co.paa"
		};
	};
	class Land_Bilboard_notacola: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_notacola.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_notacola_co.paa"
		};
	};
	class Land_Bilboard_pizza_presto: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_pizza_presto.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_pizza_presto_co.paa"
		};
	};
	class Land_Bilboard_Riviera: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_Riviera.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\bilboard_riviera_co.paa"
		};
	};
	class Land_Bilboard_seci_stroje: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_seci_stroje.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_seci-stroje_co.paa"
		};
	};
	class Land_Bilboard_Skiresort: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_Skiresort.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\tourist\data\skiresortmap_co.paa"
		};
	};
	class Land_Bilboard_smadny_maskrnik: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_smadny_maskrnik.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_smadny_maskrtnik_co.paa"
		};
	};
	class Land_Bilboard_strana_noveho_radu: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_strana_noveho_radu.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_strana_noveho_radu_co.paa"
		};
	};
	class Land_Bilboard_toaletak_armasan: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_toaletak_armasan.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_toaletak_armasan_co.paa"
		};
	};
	class Land_Bilboard_vodka: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_vodka.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_vodka_co.paa"
		};
	};
	class Land_Bilboard_volte_cernaruske_hnuti: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_volte_cernaruske_hnuti.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_volte_cernaruske_hnuti_co.paa"
		};
	};
	class Land_Bilboard_vstup_do_CDF: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_vstup_do_CDF.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_vstup_do_cdf_co.paa"
		};
	};
	class Land_Bilboard_zlute_zgrynda: Land_Bilboard_Base
	{
		model="\DZ\structures\Signs\Billboards\Bilboard_zlute_zgrynda.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\structures\signs\billboards\data\board_zluta_zgrynda_co.paa"
		};
	};
	class StaticObj_10thAnniversaryBanner_Big: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Signs\Billboards\10thAnniversaryBanner_Big.p3d";
		class AnimationSources
		{
			class banner
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class fold
			{
				source="user";
				animPeriod=2;
				initPhase=1;
			};
		};
	};
	class StaticObj_10thAnniversaryBanner_Small: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Signs\Billboards\10thAnniversaryBanner_Small.p3d";
		class AnimationSources
		{
			class banner
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class fold
			{
				source="user";
				animPeriod=2;
				initPhase=1;
			};
		};
	};
};
class BillboardPresets
{
	class Set10Anniversary
	{
		class SetTexture1
		{
			texture="DZ\structures\Signs\Billboards\Data\Board_10thanniversary1_CO.paa";
			types[]=
			{
				"Land_Bilboard_alkohol"
			};
		};
		class SetTexture2
		{
			texture="DZ\structures\Signs\Billboards\Data\Board_10thanniversary2_CO.paa";
			types[]=
			{
				"Land_Bilboard_Beach"
			};
		};
		class SetTexture3
		{
			texture="DZ\structures\Signs\Billboards\Data\Board_10thanniversary1_CO.paa";
			types[]=
			{
				"Land_Bilboard_vstup_do_CDF"
			};
		};
		class SetTexture4
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate107_co.paa";
			types[]=
			{
				"Land_Bilboard_cibulka"
			};
		};
		class SetTexture5
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate108_co.paa";
			types[]=
			{
				"Land_Bilboard_cigara_chernomorky"
			};
		};
		class SetTexture6
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate109_co.paa";
			types[]=
			{
				"Land_Bilboard_Escape"
			};
		};
		class SetTexture7
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate110_co.paa";
			types[]=
			{
				"Land_Bilboard_Everon"
			};
		};
		class SetTexture8
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate111_co.paa";
			types[]=
			{
				"Land_Bilboard_hey_buddy"
			};
		};
		class SetTexture9
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate112_co.paa";
			types[]=
			{
				"Land_Bilboard_hlinik"
			};
		};
		class SetTexture10
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate113_co.paa";
			types[]=
			{
				"Land_Bilboard_likery_bardak"
			};
		};
		class SetTexture11
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate114_co.paa";
			types[]=
			{
				"Land_Bilboard_Livonia_1"
			};
		};
		class SetTexture12
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate115_co.paa";
			types[]=
			{
				"Land_Bilboard_Livonia_2"
			};
		};
		class SetTexture13
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate116_co.paa";
			types[]=
			{
				"Land_Bilboard_Nogova"
			};
		};
		class SetTexture14
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate117_co.paa";
			types[]=
			{
				"Land_Bilboard_notacola"
			};
		};
		class SetTexture15
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate118_co.paa";
			types[]=
			{
				"Land_Bilboard_pizza_presto"
			};
		};
		class SetTexture16
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate119_co.paa";
			types[]=
			{
				"Land_Bilboard_Riviera"
			};
		};
		class SetTexture17
		{
			texture="DZ\structures\Signs\Billboards\Data\Board_10thanniversary2_CO.paa";
			types[]=
			{
				"Land_Bilboard_seci_stroje"
			};
		};
		class SetTexture18
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate120_co.paa";
			types[]=
			{
				"Land_Bilboard_Skiresort"
			};
		};
		class SetTexture19
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate121_co.paa";
			types[]=
			{
				"Land_Bilboard_smadny_maskrnik"
			};
		};
		class SetTexture20
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate122_co.paa";
			types[]=
			{
				"Land_Bilboard_strana_noveho_radu"
			};
		};
		class SetTexture21
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_TeamQuotes1_co.paa";
			types[]=
			{
				"Land_Bilboard_toaletak_armasan"
			};
		};
		class SetTexture22
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_TeamQuotes2_co.paa";
			types[]=
			{
				"Land_Bilboard_vodka"
			};
		};
		class SetTexture23
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_TeamQuotes3_co.paa";
			types[]=
			{
				"Land_Bilboard_volte_cernaruske_hnuti"
			};
		};
		class SetTexture24
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_TeamQuotes4_co.paa";
			types[]=
			{
				"Land_Bilboard_zlute_zgrynda"
			};
		};
		class SetTexture25
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_GameUpdate123_co.paa";
			types[]=
			{
				"Land_Bilboard_Bienvenudo"
			};
		};
	};
	class SetXmas
	{
		class SetTexture1
		{
			texture="DZ\structures\Signs\Billboards\Data\Bilboard_Riviera_CO.paa";
			types[]=
			{
				"Land_Bilboard_volte_cernaruske_hnuti"
			};
		};
		class SetTexture2
		{
			texture="DZ\structures\Signs\Billboards\Data\Board_hey buddy_CO.paa";
			types[]=
			{
				"Land_Bilboard_pizza_stroje",
				"Land_Bilboard_alkohol",
				"Land_Bilboard_Beach",
				"Land_Bilboard_Bienvenudo",
				"Land_Bilboard_cibulka",
				"Land_Bilboard_cigara_chernomorky",
				"Land_Bilboard_Escape"
			};
		};
	};
};
