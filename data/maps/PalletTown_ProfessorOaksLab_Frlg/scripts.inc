# 1 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
# 3 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
# 4 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3
# 5 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ RIVAL_STARTER_ID,        VAR_TEMP_4
# 6 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ PLAYER_STARTER_NATURE,   VAR_TEMP_5
# 7 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 8 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ SHOWED_OAK_COMPLETE_DEX, FLAG_TEMP_2
# 9 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 10 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Frlg_MapScripts::
# 11 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 12 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_OnWarp
# 13 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_OnFrame
# 14 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.byte 0
# 15 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 16 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition::
# 17 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 18 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 19 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 20 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 21 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
# 22 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 23 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 24 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 25 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
# 26 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 27 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 28 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 29 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 33 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 34 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 35 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	savebgm MUS_RG_OAK
# 36 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 37 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 38 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 39 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 40 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 42 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 43 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnWarp::
# 44 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
# 45 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.2byte 0
# 46 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 48 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 49 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 50 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 51 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnFrame::
# 52 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 53 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
# 54 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.2byte 0
# 55 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 56 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene:: @ 8169002 
# 57 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 58 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 59 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 60 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 61 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 62 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 63 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 64 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 65 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 67 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 68 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 69 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 70 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 71 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 72 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 73 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 74 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 75 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 76 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 77 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 78 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 79 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 81 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 82 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 83 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 84 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 86 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 87 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 88 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 89 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 90 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 91 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 94 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 95 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 96 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 98 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 99 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special EnableNationalPokedex
# 110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 160 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 175 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 186 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 188 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 194 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 196 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 202 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	savebgm MUS_DUMMY
# 216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 217 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 60
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 235 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1
# 275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 277 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 278 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 279 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 280 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2
# 281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 285 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 286 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 3
# 287 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 294 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 297 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 300 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 303 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ The scripts for the rival approaching the player for battle are a bit bloated because
# 307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ both the player and rival can be in 3 different positions, so theres 9 different approaches
# 308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ NOTE: Names below refer to the Rival's mon (e.g. for RivalBattleSquirtle, player has Charmander)
# 309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 315 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 322 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 323 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 325 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 332 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 333 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 353 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 374 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 375 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 376 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 377 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 380 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 383 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 387 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 388 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 389 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 390 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 394 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 397 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 401 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 408 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 411 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 415 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 416 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 435 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 438 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 442 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 447 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 448 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 449 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 450 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 453 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 455 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 460 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 461 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 462 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 463 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 468 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 469 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 470 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special HealPlayerParty
# 471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 474 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 475 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 476 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 477 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 478 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playse SE_EXIT
# 479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 481 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 482 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 483 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 484 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 489 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 493 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 494 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 497 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 498 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 499 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 500 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 501 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 502 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 503 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 504 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 505 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 506 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 512 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 513 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 514 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 517 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 518 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 520 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 523 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 524 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 525 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 526 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 527 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 528 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 529 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 531 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 532 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 534 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 537 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 538 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 539 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 540 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 541 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 545 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 546 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 547 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 548 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 549 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 550 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 551 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 552 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 553 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 554 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 555 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 556 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 557 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 561 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 562 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 563 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 565 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 566 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 567 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 568 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 569 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 570 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 571 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 572 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 573 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 574 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 576 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 577 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 578 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 579 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 580 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMonRepeat
# 581 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 582 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 583 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 585 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 588 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 589 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 590 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 591 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 592 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 593 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 595 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMonRepeat::
# 596 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMonRepeat
# 597 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 598 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 599 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 600 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 601 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 602 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 603 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 605 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 606 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 607 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 608 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 609 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 612 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 613 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 614 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 615 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 617 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 619 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 620 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 621 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 622 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 623 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 624 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 625 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 626 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playse SE_PIN
# 627 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 628 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 629 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 630 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 631 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 632 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 633 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 634 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 635 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 637 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 638 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 639 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 640 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 642 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 643 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 40
# 644 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 646 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 647 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 648 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 10
# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 25
# 652 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 653 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 654 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 655 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 656 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 10
# 657 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 658 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 659 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 660 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 661 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 662 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 663 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 664 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special SetUnlockedPokedexFlags
# 665 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 666 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 667 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 668 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 10
# 669 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 670 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 671 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 672 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 673 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 674 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 675 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 676 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 677 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 678 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 679 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 680 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 681 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 682 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 683 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 684 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 685 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 686 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 687 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 688 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 689 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 690 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 691 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 692 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 693 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 694 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 695 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 696 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 697 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 698 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 699 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 700 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 701 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 702 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 703 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 704 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 705 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 706 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 707 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 708 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 709 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 710 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 711 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 712 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 713 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 714 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 715 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 716 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 717 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 718 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 719 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 720 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 721 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 722 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 723 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 724 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 725 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 726 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 727 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 728 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 729 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 730 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 731 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 732 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 733 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 734 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 735 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 736 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 737 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 738 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 739 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 740 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 741 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 742 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 743 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 744 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 745 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 746 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 747 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 748 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 749 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 750 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 751 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 752 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 753 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 754 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 755 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 756 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 757 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 758 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 759 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 760 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 761 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 762 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 763 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 764 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 765 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 766 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 767 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 768 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 769 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 770 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 771 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 772 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 773 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 774 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 775 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 776 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 777 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 778 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 779 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 780 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 781 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 782 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 783 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 784 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 785 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 786 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 787 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 788 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 789 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls  @ Player only has starter
# 790 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 791 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 792 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 793 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 794 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 795 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 796 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 797 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 798 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 799 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 800 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 801 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 40
# 802 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 803 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 804 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 805 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 806 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 807 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 808 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 809 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 810 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 811 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 70
# 812 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 813 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 814 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 815 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 816 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 817 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 818 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 819 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 820 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 821 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 822 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 823 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 824 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 825 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 826 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 827 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 828 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 829 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 830 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 831 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 832 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 833 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 834 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 835 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 836 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 837 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 838 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 839 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_down
# 840 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 841 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 842 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_down
# 843 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 844 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 845 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 846 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 847 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 848 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_up
# 849 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 850 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 851 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_up
# 852 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 853 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 854 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 855 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 856 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 857 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_left
# 858 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 859 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 860 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_left
# 861 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 862 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 863 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 864 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 865 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 866 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_right
# 867 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 868 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 869 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_right
# 870 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 871 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 872 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 873 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ Unused
# 874 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 875 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 876 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 877 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 878 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 879 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 880 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 881 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 882 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 883 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 884 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 885 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 886 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 887 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 888 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 889 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 890 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 891 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 892 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 893 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 894 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 895 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 896 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 897 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 898 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 899 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 900 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 901 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ Unused
# 902 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 903 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 904 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 905 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 906 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 907 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 908 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 909 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 910 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 911 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 912 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 913 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 914 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 915 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 916 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 917 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 918 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 919 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 920 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 921 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 922 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 923 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 924 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 925 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 926 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 927 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 928 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 929 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 930 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	checkitem ITEM_POKE_BALL
# 931 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 932 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 933 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 934 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 935 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 936 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 937 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 938 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 939 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 940 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 941 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 942 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 10
# 943 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 944 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 945 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 946 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 947 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 948 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 949 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 950 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 951 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 952 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 953 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 954 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 955 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 956 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 957 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 958 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 959 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 960 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 961 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 962 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 963 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 964 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 965 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 966 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 967 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 968 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 969 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 970 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 971 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 972 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 973 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 974 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 975 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 976 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 977 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 978 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 979 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 980 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 981 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 982 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 983 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 984 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 985 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 986 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 987 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 988 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 989 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 990 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 991 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 992 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 993 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 994 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 995 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 996 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 997 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 998 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 999 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1000 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1001 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1002 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 1003 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1004 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1005 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1006 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1007 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1008 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1009 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1010 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1011 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1012 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1013 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1014 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1015 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1016 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1017 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1018 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1019 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1020 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1021 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1022 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1023 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1024 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1025 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1026 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1027 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1028 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1029 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1030 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1031 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1032 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1033 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1034 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1035 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1036 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1037 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1038 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1039 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1040 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1041 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1042 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1043 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 1044 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 1045 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1046 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1047 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1048 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 1049 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1050 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1051 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1052 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1053 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1054 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1055 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 1056 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1057 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1058 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1059 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1060 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1061 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1062 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1063 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1064 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1065 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1066 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1067 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1068 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1069 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1070 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1071 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1072 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1073 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1074 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1075 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1076 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1077 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1078 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1079 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 1080 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 1081 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NATURE, NATURE_MODEST
# 1082 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 1083 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_CHARMANDER_BALL
# 1084 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1085 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1086 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1087 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1088 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1089 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1090 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1091 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceRight
# 1092 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1093 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 1094 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1095 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1096 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1097 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
# 1098 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1099 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 1120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 1125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 5, nature=PLAYER_STARTER_NATURE, hpIv=31, atkIv=31, defIv=31, speedIv=31, spAtkIv=31, spDefIv=31
# 1131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
# 1132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 1133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_2, PLAYER_STARTER_SPECIES
# 1134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 1136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 1138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 1139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
EventScript_GiveNicknameToStarter::
# 1144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 1145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
# 1154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1160 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1175 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject RIVAL_STARTER_ID
# 1178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
# 1180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 1182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 1184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1186 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 1187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1188 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 1192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1194 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1196 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1202 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1217 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 1226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NATURE, NATURE_MODEST
# 1228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 1229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_BULBASAUR_BALL
# 1230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1235 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 1240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 1241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NATURE, NATURE_MODEST
# 1242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
# 1244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1277 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1278 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1279 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1280 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1285 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1286 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1287 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 1293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1294 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 1297 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1300 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 1301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1303 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 1305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 1308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 1313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1315 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround::
# 1316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Oh, it's just you.\n"
# 1317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Gramps went out to ROUTE 1 to\l"
# 1318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "look at PIDGEY or something.$"
# 1319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting::
# 1321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps!\n"
# 1322 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Can I pick my POKéMON yet?$"
# 1323 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe::
# 1325 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Hey! Gramps! No fair!\n"
# 1326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "What about me?$"
# 1327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer::
# 1329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Heh, I don't need to be\n"
# 1330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "greedy like you. I'm mature!\p"
# 1331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Go ahead and choose, {PLAYER}!$"
# 1332 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1333 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen::
# 1334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: I'll take this one, then!$"
# 1335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak::
# 1337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL} received the {STR_VAR_1}\n"
# 1338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK!$"
# 1339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher::
# 1341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: My POKéMON looks a lot\n"
# 1342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "tougher than yours.$"
# 1343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons::
# 1345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Wait, {PLAYER}!\n"
# 1346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Let's check out our POKéMON!\p"
# 1347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Come on, I'll take you on!$"
# 1348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalDefeat::
# 1350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "WHAT?\n"
# 1351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Unbelievable!\l"
# 1352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I picked the wrong POKéMON!$"
# 1353 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ Also used for early Route 22 battle
# 1355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
Text_RivalVictory::
# 1356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Yeah!\n"
# 1357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Am I great or what?$"
# 1358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon::
# 1360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Okay! I'll make my\n"
# 1361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON battle to toughen it up!\p"
# 1362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}, Gramps - \n"
# 1363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "smell you later!$"
# 1364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGramps::
# 1366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps!$"
# 1367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor::
# 1369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: I'm back!\n"
# 1370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I got your files from Dad.$"
# 1371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps::
# 1373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: All right, Gramps!\n"
# 1374 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Leave it all to me!$"
# 1375 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1376 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap::
# 1377 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}, I hate to say it, but you\n"
# 1378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "won't be necessary for this.\p"
# 1379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I know! I'll borrow a TOWN MAP\n"
# 1380 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from my sis!\p"
# 1381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll tell her not to lend you one,\n"
# 1382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}! Hahaha!\p"
# 1383 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't bother coming around\n"
# 1384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "my place after this!$"
# 1385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne::
# 1387 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Hush, {RIVAL} we were waiting\n"
# 1388 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "on {PLAYER}.\p"
# 1389 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now, it's time to start your journies!\n"
# 1390 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "There are three POKéMON here.\p"
# 1391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The POKéMON are held inside\n"
# 1392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "these POKéBALLS.\p"
# 1393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "When I was young, I was a serious\n"
# 1394 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON TRAINER.\p"
# 1395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "But even at my old age, I managed\n"
# 1396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "to catch some special ones for you two.\p"
# 1397 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You can have one.\n"
# 1398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Go on and choose {PLAYER}!$"
# 1399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakBePatientRival::
# 1401 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Be patient, {RIVAL}.\n"
# 1402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You can pick after {PLAYER}.$"
# 1403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose::
# 1405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Now, {PLAYER}.\p"
# 1406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Inside those three POKé BALLS are\n"
# 1407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 1408 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Which one will you choose for\n"
# 1409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "yourself?$"
# 1410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1411 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet::
# 1412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Hey!\n"
# 1413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't go away yet!$"
# 1414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1415 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander::
# 1416 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "Ah! That's a CHARMANDER.\p"
# 1417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "It'll be easy to train in the FOREST,\n"
# 1418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "but will be weak in nearby GYMS.\p"
# 1419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "So, {PLAYER}, you're claiming the\n"
# 1420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "FIRE POKéMON CHARMANDER?$"
# 1421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle::
# 1423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "Oh! That's a SQUIRTLE.\p"
# 1424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "It can train easily at MT. MOON,\n"
# 1425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "and will be strong in your first GYM.\p"
# 1426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "So, {PLAYER}, you've decided on the\n"
# 1427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "WATER POKéMON SQUIRTLE?$"
# 1428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur::
# 1430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "Mhmm! That's a BULBASAUR.\p"
# 1431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "Training it nearby won't be great, but\n"
# 1432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "it'll be strong in the first 3 GYMS.\p"
# 1433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "So, {PLAYER}, you want to go with\n"
# 1434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "the GRASS POKéMON BULBASAUR?$"
# 1435 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic::
# 1437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "This POKéMON seems quite\n"
# 1438 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "energetic!$"
# 1439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak::
# 1441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 1442 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK!$"
# 1443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon::
# 1445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Now, I've got one more gift, but\n"
# 1446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll need some time to get it ready.\p"
# 1447 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Maybe you could run a quick errand\n"
# 1448 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "north to VIRIDIAN CITY now that you\l"
# 1449 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "have a POKéMON.\p"
# 1450 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I've been waiting on a package from the\n"
# 1451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "VIRIDIAN POKéMART.\p"
# 1452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Could you deliver it back here?\p"
# 1453 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "If you encounter a wild POKéMON\n"
# 1454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "your {STR_VAR_2} can battle it,\l"
# 1455 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "so you should be safe!$"
# 1456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMonRepeat::
# 1458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Just head north to VIRIDIAN CITY\n"
# 1459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and pick up my order from the POKéMART.\p"
# 1460 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Once I have that, I can give you a\n"
# 1461 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "gift and you can truly start your\l"
# 1462 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON journey.\p$"
# 1463 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow::
# 1465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {PLAYER}, raise your young\n"
# 1466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON by making it battle.\p"
# 1467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It will get EXP from battles\n"
# 1468 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and grow.$"
# 1469 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1470 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe::
# 1471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Oh, {PLAYER}!\n"
# 1472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "How is your POKéMON doing?\p"
# 1473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Well, it seems to be growing more\n"
# 1474 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "attached to you.\p"
# 1475 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You must be a talented young POKéMON\n"
# 1476 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "TRAINER.\p"
# 1477 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Oh?\n"
# 1478 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You got my package?$"
# 1479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel::
# 1481 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} delivered OAK'S PARCEL.$"
# 1482 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1483 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered::
# 1484 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah! Great!\n"
# 1485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "These are the new processors\n"
# 1486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I ordered.\p"
# 1487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "We'll just have to wait for {RIVAL}\n"
# 1488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "then I can give you both your gifts.$"
# 1489 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo::
# 1491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Good, that's everything.\n"
# 1492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now, I have a request for you two.$"
# 1493 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1494 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk::
# 1495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "On the desk here is my invention,\n"
# 1496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "the POKéDEX!\p"
# 1497 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It automatically records data on\n"
# 1498 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON you've seen or caught.\p"
# 1499 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and sends it back here to this lab!$"
# 1500 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1501 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou::
# 1502 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {PLAYER} and {RIVAL} -\n"
# 1503 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Take these with you.$"
# 1504 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1505 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak::
# 1506 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received the POKéDEX\n"
# 1507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK.$"
# 1508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese::
# 1510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: You can't get detailed data\n"
# 1511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "on POKéMON by just seeing them.\p"
# 1512 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You have to catch them to obtain\n"
# 1513 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "complete data.\p"
# 1514 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, here are some tools for\n"
# 1515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "catching wild POKéMON.$"
# 1516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1517 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls::
# 1518 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received ten POKéBALLS.$"
# 1519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1520 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakExplainCatching::
# 1521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Any wild POKéMON you find,\n"
# 1522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "is fair game.\p"
# 1523 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Just throw a POKéBALL at it and\n"
# 1524 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "try to catch it!\p"
# 1525 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This won't always work, however.\p"
# 1526 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "A healthy POKéMON can escape.\n"
# 1527 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Dealing damage or causing status\l"
# 1528 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "conditions make catching easier.$"
# 1529 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream::
# 1531 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "To make a complete guide on all\n"
# 1532 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "the POKéMON in the region…\p"
# 1533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "That was my dream!\p"
# 1534 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "But I hadn't invented a POKéDEX yet\n"
# 1535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Haha!\p"
# 1536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I had to keep all my data in dozens\n"
# 1537 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "of notebooks.\p"
# 1538 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "And now, with all my reasearch\n"
# 1539 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "obligations, I just don't have time.\p"
# 1540 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, I want you two to pick up\n"
# 1541 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "where I left off.\p"
# 1542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Get moving, you two.\p"
# 1543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This is a great undertaking in\n"
# 1544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON history!$"
# 1545 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1546 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait::
# 1547 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON around KANTO wait for\n"
# 1548 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "you, {PLAYER}!$"
# 1549 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1550 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex::
# 1551 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah, {PLAYER}!\n"
# 1552 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "How is your POKéDEX shaping up?\p"
# 1553 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL} has already caught some\n"
# 1554 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON and added to the data.\p"
# 1555 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, {PLAYER}, let's have a look at\n"
# 1556 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "your POKéDEX.\p"
# 1557 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…What's the matter?\n"
# 1558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You've added no new data at all.\p"
# 1559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll give you these, so do try a\n"
# 1560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "little harder.$"
# 1561 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1562 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime::
# 1563 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Come see me sometime.\p"
# 1564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "After all, I want to know how your\n"
# 1565 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéDEX is coming along.$"
# 1566 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1567 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia::
# 1568 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's like an encyclopedia, but the\n"
# 1569 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "pages are blank.$"
# 1570 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1571 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls::
# 1572 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Those are POKé BALLS.\n"
# 1573 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "They contain POKéMON!$"
# 1574 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OaksLastMon::
# 1576 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "That's PROF. OAK's last POKéMON.$"
# 1577 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1578 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu::
# 1579 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Press START to open the MENU!$"
# 1580 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1581 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu::
# 1582 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The SAVE option is on the MENU.\n"
# 1583 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Use it regularly.$"
# 1584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1585 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints::
# 1586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "All POKéMON types have strong and\n"
# 1587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "weak points against others.\p"
# 1588 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "For example, ice POKéMON are weak\n"
# 1589 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "against fire-type moves.$"
# 1590 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1591 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_EmailMessage::
# 1592 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "There's an e-mail message here.\p"
# 1593 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…\p"
# 1594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "FWD: LEAGUE_CHALLENGE_FINAL\n"
# 1595 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The ultimate trainers of the\l"
# 1596 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON LEAGUE are ready to\l"
# 1597 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "take on all comers!\p"
# 1598 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Bring your best POKéMON and see\n"
# 1599 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "how you rate as a TRAINER!\p"
# 1600 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON LEAGUE HQ\n"
# 1601 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "INDIGO PLATEAU\p"
# 1602 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "++PROF. OAK\n"
# 1603 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hey, OAK, this is the final copy\n"
# 1604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "for the LEAGUE CHALLENGE mailer.\l"
# 1605 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "let us know if you have changes,\l"
# 1606 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and come visit when you get a\l"
# 1607 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "chance.\n"
# 1608 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "- LANCE$"
# 1609 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide::
# 1611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I study POKéMON as PROF. OAK's\n"
# 1612 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "AIDE.$"
# 1613 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1614 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons::
# 1615 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hi, {PLAYER}. I bet you've become\n"
# 1616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "good friends with your POKéMON.\p"
# 1617 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "By the way, did you know about\n"
# 1618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "DAISY?\p"
# 1619 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "If you show DAISY your POKéMON,\n"
# 1620 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "she can tell how much it likes you.\p"
# 1621 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Occasionally, she will even groom\n"
# 1622 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "a POKéMON for you.\p"
# 1623 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This is a secret, so please don't\n"
# 1624 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "tell anyone.$"
# 1625 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1626 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow::
# 1627 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK is going to have his own\n"
# 1628 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "radio show soon.\p"
# 1629 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The program will be called PROF.\n"
# 1630 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK's POKéMON SEMINAR.$"
# 1631 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1632 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons::
# 1633 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK may not look like much,\n"
# 1634 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "but he's the authority on POKéMON.\p"
# 1635 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Many POKéMON TRAINERS hold him in\n"
# 1636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "high regard.$"
# 1637 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1638 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer::
# 1639 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah, now this is excellent!\p"
# 1640 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}, I have another important\n"
# 1641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "favor to ask of you.\p"
# 1642 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I need you to listen closely.$"
# 1643 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1644 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons::
# 1645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Recently, there have been sightings\n"
# 1646 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "of many rare POKéMON species.\p"
# 1647 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'm talking about POKéMON that\n"
# 1648 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "have never been seen in KANTO.\p"
# 1649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I would love to go see things for\n"
# 1650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "myself, but I'm much too old.\p"
# 1651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Since I can't do it, {PLAYER}, I'd\n"
# 1652 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "like you to go in my place.$"
# 1653 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1654 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything::
# 1655 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, I heard that!\p"
# 1656 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Gramps, what's with favoring\n"
# 1657 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} over me all the time?\p"
# 1658 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I went and collected more POKéMON,\n"
# 1659 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and faster, too.\p"
# 1660 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You should just let me handle\n"
# 1661 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "everything.$"
# 1662 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1663 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes::
# 1664 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: I know, I know.\n"
# 1665 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Of course I need your help, too.\p"
# 1666 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now, I need to see both your\n"
# 1667 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéDEXES.$"
# 1668 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1669 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits::
# 1670 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK took both POKéDEX\n"
# 1671 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "units.$"
# 1672 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1673 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData::
# 1674 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "… … …  … … …\p"
# 1675 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "… … …  … … …\p"
# 1676 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…And that's done!\p"
# 1677 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now these units can record data on\n"
# 1678 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "a lot more POKéMON.$"
# 1679 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1680 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded::
# 1681 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded!$"
# 1682 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1683 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex::
# 1684 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now, {PLAYER} and {RIVAL}!\p"
# 1685 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This time, you really must work\n"
# 1686 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "towards filling your POKéDEXES.\p"
# 1687 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I urge you to make them the best\n"
# 1688 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and the most complete of all time!\p"
# 1689 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Truly, this is a monumentally great\n"
# 1690 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "undertaking in POKéMON history!$"
# 1691 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1692 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex::
# 1693 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps, calm down.\n"
# 1694 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't get so excited.\p"
# 1695 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll get the POKéDEX completed,\n"
# 1696 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "don't you worry about a thing.\p"
# 1697 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I think I'll try looking around\n"
# 1698 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "ONE ISLAND first…\p"
# 1699 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Anyways, I'm outta here!$"

PalletTown_ProfessorOaksLab_EventScript_DontGo::
# 1703 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1704 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_DontGo_Text_0, MSGBOX_NPC
# 1705 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_DontGo_Movement_0
# 1706 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1707 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
	end


# 1705 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontGo_Movement_0:
# 1705 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
	step_end

PalletTown_ProfessorOaksLab_EventScript_DontGo_Text_0:
# 1704 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "AIDE: Don't go that way.\nThat research is delicate.$"
