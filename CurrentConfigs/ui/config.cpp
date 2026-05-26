class CfgPatches
{
	class DZ_UI
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
class CfgVideoOptions
{
	class DefaultSettings
	{
	};
	class CustomSettings
	{
	};
	class OverallSettings
	{
	};
	class OverallSettingsConsole: OverallSettings
	{
		class Normal: DefaultSettings
		{
			Text="#options_video_default";
			Visibility=0;
			ObjectsVisibility=0;
			ObjectDetail=2;
			TerrainDetail=2;
			TextureDetail=4;
			CloudsDetail=2;
			ShadowDetail=2;
			WaterDetail=1;
			TextureFiltering=1;
			TerrainSurface=1;
			FXAA=1;
			MSAA=0;
			ATOC=0;
			FXAO=0;
			FXQuality=1;
		};
	};
	class OverallSettingsPC: OverallSettings
	{
		defaultPreset=2;
		class VeryLow: DefaultSettings
		{
			Text="#options_video_poor";
			Visibility=0;
			ObjectsVisibility=0;
			ObjectDetail=0;
			TerrainDetail=2;
			TextureDetail=0;
			CloudsDetail=0;
			ShadowDetail=0;
			WaterDetail=0;
			TextureFiltering=0;
			TerrainSurface=0;
			FXAA=0;
			MSAA=0;
			ATOC=0;
			FXAO=0;
			FXQuality=0;
		};
		class Low: DefaultSettings
		{
			Text="#options_video_low";
			Visibility=0;
			ObjectsVisibility=0;
			ObjectDetail=1;
			TerrainDetail=2;
			TextureDetail=1;
			CloudsDetail=1;
			ShadowDetail=1;
			WaterDetail=1;
			TextureFiltering=1;
			TerrainSurface=2;
			FXAA=2;
			MSAA=0;
			ATOC=0;
			FXAO=0;
			FXQuality=1;
		};
		class Normal: DefaultSettings
		{
			Text="#options_video_medium";
			Visibility=1;
			ObjectsVisibility=1;
			ObjectDetail=2;
			TerrainDetail=2;
			TextureDetail=3;
			CloudsDetail=2;
			ShadowDetail=2;
			WaterDetail=1;
			TextureFiltering=2;
			TerrainSurface=2;
			FXAA=2;
			MSAA=0;
			ATOC=0;
			FXAO=2;
			FXQuality=2;
		};
		class High: DefaultSettings
		{
			Text="#options_video_high";
			Visibility=2;
			ObjectsVisibility=2;
			ObjectDetail=3;
			TerrainDetail=2;
			TextureDetail=3;
			CloudsDetail=3;
			ShadowDetail=3;
			WaterDetail=1;
			TextureFiltering=2;
			TerrainSurface=2;
			FXAA=3;
			MSAA=1;
			ATOC=1;
			FXAO=3;
			FXQuality=2;
		};
		class VeryHigh: DefaultSettings
		{
			Text="#options_video_extreme";
			Visibility=3;
			ObjectsVisibility=3;
			ObjectDetail=4;
			TerrainDetail=2;
			TextureDetail=4;
			CloudsDetail=4;
			ShadowDetail=4;
			WaterDetail=2;
			TextureFiltering=2;
			TerrainSurface=3;
			FXAA=4;
			MSAA=3;
			ATOC=1;
			FXAO=4;
			FXQuality=2;
		};
	};
	class OverallSettingsPS4: OverallSettingsConsole
	{
	};
	class OverallSettingsXBOXONE: OverallSettingsConsole
	{
	};
};
class CfgLanguages
{
	class Original
	{
		name="Original";
	};
	class English
	{
		name="#options_language_EN";
	};
	class French
	{
		name="#options_language_FR";
	};
	class Spanish
	{
		name="#options_language_ES";
	};
	class Italian
	{
		name="#options_language_IT";
	};
	class German
	{
		name="#options_language_DE";
	};
	class Czech
	{
		name="#options_language_CZ";
	};
	class Russian
	{
		name="#options_language_RU";
	};
	class Chinese
	{
		name="#options_language_CHT";
	};
	class Chinesesimp
	{
		name="#options_language_CHS";
	};
	class Polish
	{
		name="#options_language_PL";
	};
	class Japanese
	{
		name="#options_language_JA";
	};
	class Portuguese
	{
		name="#options_language_PTBR";
	};
};
