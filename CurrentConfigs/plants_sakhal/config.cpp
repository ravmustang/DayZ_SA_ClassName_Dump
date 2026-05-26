class CfgPatches
{
	class DZ_Plants_Sakhal
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
class CfgNonAIVehicles
{
	class BushHard;
	class BushSoft;
	class TreeSoft;
	class TreeHard;
	class TreeSoft_BetulaPendula_Base;
	class BushSoft_b_betulaHumilis_1s_winter: BushSoft
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="";
		collisionParticle="bush_passing_snow";
		class FxFallingParticleEffect
		{
			particle="bush_falling_snow";
		};
	};
	class BushSoft_b_betulaNana_1s_winter: BushSoft
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="WoodenStick";
		secondaryOutput="";
		collisionParticle="bush_passing_snow";
		class FxFallingParticleEffect
		{
			particle="bush_falling_snow";
		};
	};
	class BushSoft_b_PiceaAbies_1f_winter: BushSoft
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="";
		collisionParticle="bush_passing_snow";
		class FxFallingParticleEffect
		{
			particle="bush_falling_snow";
		};
	};
	class BushSoft_b_PiceaAbies_1f_dark: BushSoft
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="";
	};
	class BushSoft_b_PiceaAbies_1f_frozen: BushSoft
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="";
		collisionParticle="bush_passing_snow";
	};
	class BushSoft_b_betulaHumilis_1s_latefall: BushSoft
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="";
	};
	class BushSoft_b_betulaNana_1s_latefall: BushSoft
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="WoodenStick";
		secondaryOutput="";
	};
	class BushHard_b_caraganaArborescens_2s_leafless: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="WoodenStick";
	};
	class BushHard_b_caraganaArborescens_2s_winter: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="WoodenStick";
		collisionParticle="bush_passing_snow";
		class FxFallingParticleEffect
		{
			particle="bush_falling_snow";
		};
	};
	class BushHard_b_BetulaPendula_1f_winter: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="";
		collisionParticle="bush_passing_snow";
		class FxFallingParticleEffect
		{
			particle="tree_soft_falling_snow";
		};
	};
	class BushHard_b_PiceaAbies_1fb_winter: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="";
		collisionParticle="bush_passing_snow";
		class FxFallingParticleEffect
		{
			particle="bush_falling_snow";
		};
	};
	class BushHard_b_PiceaAbies_1fb_frozen: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="";
		collisionParticle="tree_passing_snow";
	};
	class BushHard_t_PiceaAbies_1s_winter: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="";
		collisionParticle="tree_passing_snow";
		class FxFallingParticleEffect
		{
			particle="tree_small_falling_snow";
		};
	};
	class BushHard_t_PiceaAbies_1s_frozen: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="";
	};
	class BushHard_t_PiceaAbies_1sb_winter: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="";
		collisionParticle="tree_passing_snow";
		class FxFallingParticleEffect
		{
			particle="tree_small_falling_snow";
		};
	};
	class BushHard_t_PiceaAbies_1sb_frozen: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="";
	};
	class BushHard_b_BetulaPendula_1f_latefall: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="";
	};
	class BushHard_b_PiceaAbies_1fb_dark: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="LongWoodenStick";
		secondaryOutput="";
	};
	class BushHard_t_PiceaAbies_1s_dark: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="";
	};
	class BushHard_t_PiceaAbies_1sb_dark: BushHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=0;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="";
	};
	class TreeSoft_t_BetulaPendula_1f_winter: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=6;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
		class FxFallingParticleEffect
		{
			particle="tree_soft_falling_snow";
		};
	};
	class TreeSoft_t_BetulaPendula_1fb_winter: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
		class FxFallingParticleEffect
		{
			particle="tree_soft_falling_snow";
		};
	};
	class TreeSoft_t_BetulaPendula_1s_winter: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
		class FxFallingParticleEffect
		{
			particle="tree_soft_large_falling_snow";
		};
	};
	class TreeSoft_t_BetulaPendula_2f_winter: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=6;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
		class FxFallingParticleEffect
		{
			particle="tree_soft_large_falling_snow";
		};
	};
	class TreeSoft_t_BetulaPendula_2fb_winter: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=6;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
		class FxFallingParticleEffect
		{
			particle="tree_soft_large_falling_snow";
		};
	};
	class TreeSoft_t_BetulaPendula_2fc_winter: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		barkType="Bark_Birch";
		class FxFallingParticleEffect
		{
			particle="tree_soft_large_falling_snow";
		};
	};
	class TreeSoft_t_BetulaPendula_2w_winter: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
		class FxFallingParticleEffect
		{
			particle="tree_soft_falling_snow";
		};
	};
	class TreeSoft_t_BetulaPendulaE_2w_winter: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		class FxFallingParticleEffect
		{
			particle="tree_soft_falling_snow";
		};
	};
	class TreeSoft_t_PiceaAbies_1f_winter: TreeSoft
	{
		isCuttable=1;
		primaryDropsAmount=4;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		collisionParticle="tree_passing_snow";
		class FxFallingParticleEffect
		{
			particle="tree_small_falling_snow";
		};
	};
	class TreeSoft_t_PiceaAbies_1f_frozen: TreeSoft
	{
		isCuttable=1;
		primaryDropsAmount=4;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
	};
	class TreeSoft_t_PiceaAbies_2sb_winter: TreeSoft
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=4;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		collisionParticle="tree_passing_snow";
		class FxFallingParticleEffect
		{
			particle="tree_falling_snow";
		};
	};
	class TreeSoft_t_PiceaAbies_2sb_frozen: TreeSoft
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=4;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
	};
	class TreeSoft_t_BetulaPendula_1f_latefall: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=6;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
	};
	class TreeSoft_t_BetulaPendula_1fb_latefall: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
	};
	class TreeSoft_t_BetulaPendula_1s_latefall: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
	};
	class TreeSoft_t_BetulaPendula_2f_latefall: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=6;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
	};
	class TreeSoft_t_BetulaPendula_2fb_latefall: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=6;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
	};
	class TreeSoft_t_BetulaPendula_2fc_latefall: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		barkType="Bark_Birch";
	};
	class TreeSoft_t_BetulaPendula_2w_latefall: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
	};
	class TreeSoft_t_BetulaPendulaE_2w_latefall: TreeSoft_BetulaPendula_Base
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
	};
	class TreeSoft_t_populusAlba_1f_latefall: TreeSoft
	{
		isCuttable=1;
		primaryDropsAmount=4;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
	};
	class TreeSoft_t_PiceaAbies_1f_dark: TreeSoft
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=4;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
	};
	class TreeSoft_t_PiceaAbies_2sb_dark: TreeSoft
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=4;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
	};
	class TreeHard_BetulaPendula: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="WoodenStick";
		barkType="Bark_Birch";
		class FxFallingParticleEffect
		{
			particle="tree_soft_large_falling_snow";
		};
	};
	class TreeHard_t_BetulaPendula_2s_winter: TreeHard_BetulaPendula
	{
		isCuttable=1;
		primaryDropsAmount=6;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
		class FxFallingParticleEffect
		{
			particle="tree_soft_falling_snow";
		};
	};
	class TreeHard_t_BetulaPendula_3s_winter: TreeHard_BetulaPendula
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		barkType="Bark_Birch";
		class FxFallingParticleEffect
		{
			particle="tree_soft_falling_snow";
		};
	};
	class TreeHard_t_BetulaPendula_3f_winter: TreeHard_BetulaPendula
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		barkType="Bark_Birch";
	};
	class TreeHard_t_BetulaPendula_3fb_winter: TreeHard_BetulaPendula
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		barkType="Bark_Birch";
	};
	class TreeHard_t_BetulaPendula_3fc_winter: TreeHard_BetulaPendula
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		barkType="Bark_Birch";
	};
	class TreeHard_t_piceaabies_2d_winter: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=6;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_PiceaAbies_2f_winter: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		class FxFallingParticleEffect
		{
			particle="tree_falling_snow";
		};
	};
	class TreeHard_t_PiceaAbies_2f_frozen: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_PiceaAbies_2fb_winter: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		class FxFallingParticleEffect
		{
			particle="tree_falling_snow";
		};
	};
	class TreeHard_t_PiceaAbies_2fb_frozen: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_PiceaAbies_2s_winter: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=4;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		collisionParticle="tree_falling_snow";
		class FxFallingParticleEffect
		{
			particle="tree_falling_snow";
		};
	};
	class TreeHard_t_PiceaAbies_2s_frozen: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=4;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_piceaabies_3d_winter: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=6;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_BetulaPendula_2s_latefall: TreeHard_BetulaPendula
	{
		isCuttable=1;
		primaryDropsAmount=6;
		secondaryDropsAmount=1;
		toolDamage=4;
		cycleTimeOverride=2;
		primaryOutput="FireWood";
		secondaryOutput="LongWoodenStick";
		barkType="Bark_Birch";
	};
	class TreeHard_t_BetulaPendula_3s_latefall: TreeHard_BetulaPendula
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		barkType="Bark_Birch";
	};
	class TreeHard_t_BetulaPendula_3f_latefall: TreeHard_BetulaPendula
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		barkType="Bark_Birch";
	};
	class TreeHard_t_BetulaPendula_3fb_latefall: TreeHard_BetulaPendula
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		barkType="Bark_Birch";
	};
	class TreeHard_t_BetulaPendula_3fc_latefall: TreeHard_BetulaPendula
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
		barkType="Bark_Birch";
	};
	class TreeHard_t_populusAlba_2s_latefall: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_populusAlba_3s_latefall: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=5;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_populusNigra_3s_latefall: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=4;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_piceaabies_2d_dark: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=6;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_PiceaAbies_2f_dark: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_PiceaAbies_2fb_dark: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=3;
		secondaryDropsAmount=2;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_PiceaAbies_2s_dark: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=2;
		secondaryDropsAmount=4;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
	class TreeHard_t_piceaabies_3d_dark: TreeHard
	{
		isCuttable=1;
		primaryDropsAmount=1;
		secondaryDropsAmount=6;
		toolDamage=4;
		cycleTimeOverride=3;
		primaryOutput="WoodenLog";
		secondaryOutput="FireWood";
	};
};
