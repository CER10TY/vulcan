class Header {
    gameType = Coop;
    minPlayers = 1;
    maxPlayers = 229;
    ARCMF = 1;
};

onLoadName = TITLE;
onLoadMission = SUMMARY;
author = AUTHOR;
loadScreen = "\z\arcmf\addons\main\loadScreen.paa";
enableDebugConsole = 1;
disabledAI = 1;
respawn = RESPAWN;
respawnDelay = RESPAWN_DELAY;
respawnButton = 1;
respawnOnStart = RESPAWN_ON_START;
respawnTemplates[] = {"Seagull"};

showGroupIndicator = 0;
showHUD[] = {true, true, false, false, true, true, false, true};
