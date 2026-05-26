class MorphineMdfr: ModifierBase
{
	const int LIFETIME = 60;
	
	override void Init()
	{
		m_TrackActivatedTime 	= true;
		m_AnalyticsStatsEnabled = true;
		m_IsPersistent 			= true;
		m_ID 					= eModifiers.MDF_MORPHINE;
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
		if (player.GetBrokenLegs() != eBrokenLegs.NO_BROKEN_LEGS)
			player.m_ShockHandler.SetMultiplier(0.1); //was 0.5 //Switch the shock multiplier NEED A CONST

		player.IncreaseHealingsCount();
		m_Player.m_InjuryHandler.m_ForceInjuryAnimMask = m_Player.m_InjuryHandler.m_ForceInjuryAnimMask | eInjuryOverrides.MORPHINE;
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		
		if (player.GetBrokenLegs() != eBrokenLegs.NO_BROKEN_LEGS)
			player.m_ShockHandler.SetMultiplier(1); //Reset the shock multiplier when modifier stops

		player.DecreaseHealingsCount();
		m_Player.m_InjuryHandler.m_ForceInjuryAnimMask = m_Player.m_InjuryHandler.m_ForceInjuryAnimMask & ~eInjuryOverrides.MORPHINE;
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if (attached_time >= LIFETIME)
			return true;
		else
			return false;
	}
}