/* AUTHOR: zaleski @REDDIT DAYZSA
https://www.reddit.com/r/dayz/comments/9km0rd/how_can_i_enable_death_message_on_my_server/
found a way. i've modded the SurvivorBase with :

private string PlayerIdentityName = "empty";
string GetPlayerIdentityName() { return this.PlayerIdentityName; }
void SetPlayerIdentityName(string name) { this.PlayerIdentityName = name; } ```
Then added in PlayerBase -> EEKilled ``` SurvivorBase sbKilled = this;
if (killer.IsMan()) { Man manKiller = Man.Cast(killer); GetGame().ChatPlayer( 0, sbKilled.GetPlayerIdentityName() + " Killed By " + manKiller.GetIdentity().GetName()); } else { GetGame().ChatPlayer( 0, sbKilled.GetPlayerIdentityName() + " Killed by zombie/bleedout/fall?"); }
and added in PlayerBase -> OnConnect SurvivorBase sb = this; sb.SetPlayerIdentityName(this.GetIdentity().GetName());

*/
