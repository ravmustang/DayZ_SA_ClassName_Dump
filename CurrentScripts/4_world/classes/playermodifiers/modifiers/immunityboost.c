class ImmunityBoost: ModifierBase
{
	float 			m_LastWaterLevel;
	ref HumanMovementState		m_MovementState	= new HumanMovementState();
	float m_RegenTime;
	
	override void Init()
	{
		m_TrackActivatedTime 	= true;
		m_AnalyticsStatsEnabled	= true;
		m_IsPersistent 			= true;
		m_ID 					= eModifiers.MDF_IMMUNITYBOOST;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= 1;
		m_RegenTime = PlayerConstants.VITAMINS_LIFETIME_SECS;
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
		return (m_RegenTime - GetAttachedTime()).ToString();
	}
	
	override void OnActivate(PlayerBase player)
	{
		player.SetImmunityBoosted(true);
		player.IncreaseHealingsCount();
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		player.SetImmunityBoosted(false);
		player.DecreaseHealingsCount();
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if( attached_time >= m_RegenTime )
			return true;	
		else
			return false;	
	}
}
