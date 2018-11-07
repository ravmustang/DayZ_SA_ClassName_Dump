@echo off


::SET STEAMCMD="C:\steamcmd\steamcmd.exe"
::%STEAMCMD% +login anonymous +force_install_dir "C:\servers\PS_test_server_EU1" +app_update 223350 +quit

::Turn off all firewall rules
echo Disabling firewall rules for this server
netsh advfirewall firewall delete rule name="dayzsaDM" program="E:\DayZServerDeathMatch\DayZServerDM_x64.exe"
timeout 2

::MAKE SURE ALL TASKS ARE REALLY STOPPED
echo Making sure all instances of this server have stopped
taskkill /f /fi "status eq not responding" /im DayZServerDM_x64.exe
taskkill /f /im DayZServerDM_x64.exe
timeout 2

C:\Windows\System32\cmd.exe /C start "dayzsabackup" "E:\DayZServerDeathMatch\DayZSADatabaseBackup.cmd"
timeout 5


:: -config=E:\DayZServerDeathMatch\config.cfg 
C:\Windows\System32\cmd.exe /C start /AFFINITY AB "dayzsaDM" "E:\DayZServerDeathMatch\DayZServerDM_x64.exe" -port=9999 -config=E:\DayZServerDeathMatch\serverDZ.cfg -profiles=DonkeyPunch -BEPath=E:\DayZServerDeathMatch\battleye -adminlogs
::-autoINIT -Loadmissiontomemory
timeout 50

::RESTARTING BATTLEYE
echo Start BEC
set bec="E:\DayZServerDeathMatch\battleye\BEC"
cd /d %bec%
start "" /min "bec3.exe" --dsc config.cfg
echo Battleye has started.. 
timeout 5

:: THIS RUNS THE SERVER MONITOR FOR YOU SO YOU DON'T FORGET
echo Starting Server Monitor Loop
set ServerMonitorPath="E:\DayZServerDeathMatch"
cd /d %ServerMonitorPath%
start "" "servermonitorDM.bat"
echo Server Monitor has started. Have Fun
timeout 5

:: Firewall opened up for everyone
echo Turning on Firewall Rule to allow server network traffic
netsh advfirewall firewall add rule name="dayzsaDM" dir=in action=allow program="E:\DayZServerDeathMatch\DayZServerDM_x64.exe" enable=yes
echo Firewall is on and players can join
timeout 5
@exit 