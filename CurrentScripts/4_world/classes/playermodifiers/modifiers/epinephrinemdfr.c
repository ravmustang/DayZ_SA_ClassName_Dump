class EpinephrineMdfr: ModifierBase
{
	const int LIFETIME = 60;
	const float STAMINA_DEPLETION_MULTIPLIER = 0;
	override void Init()
	{
		m_TrackActivatedTime 	= true;
		m_AnalyticsStatsEnabled = true;
		m_IsPersistent 			= true;
		m_ID 					= eModifiers.MDF_EPINEPHRINE;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= 1;
		DisableActivateCheck();
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return false;
	}
	
	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	}
	
	override string GetDebugText()
	{
		return (LIFETIME - GetAttachedTime()).ToString();
	}
	
	override void OnActivate(PlayerBase player)
	{
		player.IncreaseHealingsCount();
		player.GiveShock(100);
		player.GetStaminaHandler().SetStamina(100);
		player.GetStaminaHandler().ActivateDepletionModifier(EStaminaMultiplierTypes.EPINEPHRINE);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		player.DecreaseHealingsCount();
		player.GetStaminaHandler().DeactivateDepletionModifier(EStaminaMultiplierTypes.EPINEPHRINE);
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if( attached_time >= LIFETIME )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}