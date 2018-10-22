@echo off

:: Released by DonkeyPunch Community Gaming for DayZ SA community use
:: The original was from DayZ Epoch Arma 2
:: Modified for use with Arma 3 Epoch Redis DB and Exile MySQL
:: Now utilized for DayZ StandAlone

:::::::::::::: CONFIG ::::::::::::::::::

:: Set your DayZ SA Epoch Base installation directory. LEAVE OFF THE ENDING \
set dayzserverfolder=DayZServerDeathMatch

:: Set your database backup folder name, it will check if available and if not available it will create the new folder
set dayzbackuppath=E:\DayZServerDeathMatch\DonkeyPunch\Backups

:: Set your Default server profile name. This is the name of the directory that stores your server.cfg
:: This will be used in the case that you don't launch this script without the server param.
:: Example: SC, US6, Chicago13, ect
:: DEFAULTPROFILE
set srvname=DonkeyPunch
set srvprofilename=DonkeyPunch

:: DayZ SA uses a storage folder in your mpmissions\dayzOffline
:: Some Game Server Providers have this number increasing for each instance they rent output
:: If your mission file has a folder with a different number then "storage_1" then set that number here.
set storagenumber=1

:: Delete Original log files after they have been rotated? This keeps your logs more organized and saves space.
:: This will not work unless the server is stopped first. This option works best set to 1 when using FireDaemon's Pre/Post Service tab
set deloriglogs=1

:: Delete the dynamic.bins to delete all loot before every restart
:: This will give your server fresh loot every restart
set deldynamicdbs=0

::::::::::: ADVANCED CONFIG ::::::::::::
:: Don't touch anything below this point unless you know what your doing.

:: Setting Server Profile to Use
IF "%1"=="" (
set servername=%srvprofilename%
) else (
set servername=%1
)

TITLE  DayZ SA %servername% Server Log and Database Rotater

:: Set Debug Mode
set debug=0
:: Set Debug Timeout in seconds
set dbsecs=50

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:::::::::::::::::::::::::::  STOP EDITING ::::::::::::::::::::::::::::::::::::::
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

:: Display Debug output
if %debug% == 1 (
echo Server Name = %servername%
echo MySQL Backup Path = "%dayzbackuppath%"
timeout %dbsecs%
)

:: Set Time and Date
SET HOUR=%time:~0,2%
SET dtStamp9=%date:~-4%%date:~4,2%%date:~7,2%_0%time:~1,1%%time:~3,2%_%time:~6,2%
SET dtStamp24=%date:~-4%%date:~4,2%%date:~7,2%_%time:~0,2%%time:~3,2%_%time:~6,2%
::Make Date Stamp
if "%HOUR:~0,1%" == " " (SET dtStamp=%dtStamp9%) else (SET dtStamp=%dtStamp24%)
ECHO Todays Date and time (%date%)(%time%) / %dtStamp%
if %debug% == 1 (
timeout %dbsecs%
)

echo (%date%) (%time%) Starting Log Rotation.

:: Make the Rotated Log Directorys
:maketsdir
if exist "E:\DayZServerDeathMatch\Backups\%servername%\%dtStamp%" goto makebedir
mkdir "E:\DayZServerDeathMatch\Backups\%servername%\%dtStamp%"
:makebedir

copy "E:\DayZServerDeathMatch\mpmissions\dayzOffline.chernarusplus\storage_%storagenumber%\players.db" "%dayzbackuppath%\players.db"
copy "E:\DayZServerDeathMatch\mpmissions\dayzOffline.chernarusplus\storage_%storagenumber%\data\dynamic_*.bin" "%dayzbackuppath%\dynamic_*.bin"
copy "E:\DayZServerDeathMatch\mpmissions\dayzOffline.chernarusplus\storage_%storagenumber%\data\events.bin" "%dayzbackuppath%\events.bin"
copy "E:\DayZServerDeathMatch\mpmissions\dayzOffline.chernarusplus\storage_%storagenumber%\data\types.bin" "%dayzbackuppath%\types.bin"
copy "E:\DayZServerDeathMatch\mpmissions\dayzOffline.chernarusplus\storage_%storagenumber%\data\vehicles.bin" "%dayzbackuppath%\vehicles.bin"
copy "E:\DayZServerDeathMatch\%srvprofilename%\script.log" "%dayzbackuppath%\script.log"
copy "E:\DayZServerDeathMatch\%srvprofilename%\crash.log" "%dayzbackuppath%\crash.log"
copy "E:\DayZServerDeathMatch\%srvprofilename%\DayZServer_x64.ADM" "%dayzbackuppath%\DayZServer_x64.ADM"
del "%dayzbackuppath%\DayZServerDM_x64*.rpt"
copy "E:\DayZServerDeathMatch\%srvprofilename%\DayZServerDM_x64*.rpt" "%dayzbackuppath%"

:rotatelogs
:: Starting Log Rotation. If there are any other logs, just follow the format below, and make sure to NOT touch any of the varibles.
copy "%dayzbackuppath%\players.db" "%dayzbackuppath%\%servername%\%dtStamp%\players.db"
copy "%dayzbackuppath%\dynamic_*.bin" "%dayzbackuppath%\%servername%\%dtStamp%\dynamic_*.bin"
copy "%dayzbackuppath%\events.bin" "%dayzbackuppath%\%servername%\%dtStamp%\events.bin"
copy "%dayzbackuppath%\types.bin" "%dayzbackuppath%\%servername%\%dtStamp%\types.bin"
copy "%dayzbackuppath%\vehicles.bin" "%dayzbackuppath%\%servername%\%dtStamp%\vehicles.bin"
copy "%dayzbackuppath%\script.log" "%dayzbackuppath%\%servername%\%dtStamp%\script.log"
copy "%dayzbackuppath%\crash.log" "%dayzbackuppath%\%servername%\%dtStamp%\crash.log"
copy "%dayzbackuppath%\DayZServer_x64.ADM" "%dayzbackuppath%\%servername%\%dtStamp%\DayZServer_x64.ADM"
copy "%dayzbackuppath%\DayZServerDM_x64*.rpt" "%dayzbackuppath%\%servername%\%dtStamp%"

:deloriglogs
:: This is for deleting the original logs in the profile folder
if %deloriglogs% == 1 (
del "E:\DayZServerDeathMatch\%srvprofilename%\script.log"
del "E:\DayZServerDeathMatch\%srvprofilename%\crash.log"
del "E:\DayZServerDeathMatch\%srvprofilename%\DayZServer_x64.ADM"
del "E:\DayZServerDeathMatch\%srvprofilename%\DayZServerDM_x64*.rpt"
)

:deldynamicdbs
:: This is for servers that want to have freshly made dynamic loot every restart
if %deldynamicdbs% == 1 (
del "E:\DayZServerDeathMatch\mpmissions\dayzOffline.chernarusplus\storage_%storagenumber%\data\dynamic_*.bin"
)

if %debug% == 1 (
timeout %dbsecs%
)

:: Done
exit