class SherpaHat_ColorBase extends HeadGear_Base
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWringClothes);
	}
};
class SherpaHat_Red extends SherpaHat_ColorBase {};
class SherpaHat_Black extends SherpaHat_ColorBase {};
class SherpaHat_Blue extends SherpaHat_ColorBase {};
