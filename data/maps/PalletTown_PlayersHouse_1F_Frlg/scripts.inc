# 1 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Frlg_MapScripts::
# 3 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 5 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 6 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
# 7 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 8 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 9 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 10 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
# 11 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 12 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 13 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
@ Displays special text if interacted with from side or back (which are normally inaccessible)
# 14 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV::
# 15 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 16 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 17 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 18 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
# 19 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 20 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 21 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 22 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	checkplayergender
# 23 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 24 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 25 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
# 26 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 27 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 28 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 29 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
# 30 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 31 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 32 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 33 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
# 34 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 35 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 36 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou::
# 37 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Hi, honey.\n"
# 38 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "All boys leave home someday.\l"
# 39 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "It said so on TV.\p"
# 40 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "PROF. OAK, next door, was looking\n"
# 41 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "for you, sto select your first POKéMON!$"
# 42 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 43 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou::
# 44 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Hi, honey.\n"
# 45 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "All girls leave home someday.\l"
# 46 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "It said so on TV.\p"
# 47 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "PROF. OAK, next door, was looking\n"
# 48 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "for you, sto select your first POKéMON!$"
# 49 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 50 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest::
# 51 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: {PLAYER}!\n"
# 52 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "You should take a quick rest.$"
# 53 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 54 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare::
# 55 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: Oh, good! You and your\n"
# 56 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "POKéMON are looking great.\l"
# 57 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Take care now!$"
# 58 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 59 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad::
# 60 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
# 61 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Four boys are walking on railroad\l"
# 62 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "tracks.\p"
# 63 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "…I better go, too.$"
# 64 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 65 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad::
# 66 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
# 67 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "A girl with her hair in pigtails is\l"
# 68 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "walking up a yellow brick road.\p"
# 69 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "…I better go, too.$"
# 70 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 71 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_OopsWrongSide::
# 72 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oops, wrong side…$"

PalletTown_PlayersHouse_1F_EventScript_Mom::
# 76 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, PalletTown_PlayersHouse_1F_EventScript_Mom_2
PalletTown_PlayersHouse_1F_EventScript_Mom_1:
# 81 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_Mom_5
# 89 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	checkplayergender
# 90 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	case MALE, PalletTown_PlayersHouse_1F_EventScript_Mom_9
# 93 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	case FEMALE, PalletTown_PlayersHouse_1F_EventScript_Mom_10
PalletTown_PlayersHouse_1F_EventScript_Mom_4:
# 97 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 98 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceOriginalDirection
# 99 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 100 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	end

PalletTown_PlayersHouse_1F_EventScript_Mom_2:
# 79 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call PlayersHouse_EventScript_MomShoes
	goto PalletTown_PlayersHouse_1F_EventScript_Mom_1

PalletTown_PlayersHouse_1F_EventScript_Mom_5:
# 82 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_EventScript_Mom_Text_0
# 83 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 84 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 85 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_EventScript_Mom_Text_1
# 86 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	end

PalletTown_PlayersHouse_1F_EventScript_Mom_9:
# 92 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_EventScript_Mom_Text_2
	goto PalletTown_PlayersHouse_1F_EventScript_Mom_4

PalletTown_PlayersHouse_1F_EventScript_Mom_10:
# 94 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_EventScript_Mom_Text_3
	goto PalletTown_PlayersHouse_1F_EventScript_Mom_4


PlayersHouse_EventScript_MomShoes::
# 106 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 107 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 108 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 109 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call PlayersHouse_EventScript_MomGiveShoes
# 110 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	end


PlayersHouse_EventScript_MomShoesTriggerLeft::
# 115 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, PlayersHouse_EventScript_MomShoesTriggerLeft_1
	return

PlayersHouse_EventScript_MomShoesTriggerLeft_1:
# 116 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 117 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 118 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call PlayersHouse_EventScript_MomGiveShoes
# 119 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
	end


PlayersHouse_EventScript_MomShoesTriggerTop::
# 125 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, PlayersHouse_EventScript_MomShoesTriggerTop_1
	return

PlayersHouse_EventScript_MomShoesTriggerTop_1:
# 126 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 127 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 128 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call PlayersHouse_EventScript_MomGiveShoes
# 129 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
	end


PlayersHouse_EventScript_MomShoesTriggerRight::
# 135 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, PlayersHouse_EventScript_MomShoesTriggerRight_1
	return

PlayersHouse_EventScript_MomShoesTriggerRight_1:
# 136 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 137 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 138 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call PlayersHouse_EventScript_MomGiveShoes
# 139 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
	end


PlayersHouse_EventScript_MomGiveShoes::
# 145 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 146 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 148 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	case 1, PlayersHouse_EventScript_MomGiveShoes_3
# 151 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	case 2, PlayersHouse_EventScript_MomGiveShoes_4
# 154 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	case 3, PlayersHouse_EventScript_MomGiveShoes_5
PlayersHouse_EventScript_MomGiveShoes_1:
# 158 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitse
# 159 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	playse SE_PIN
# 160 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 161 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 162 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_Delay48
# 163 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 164 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PlayersHouse_EventScript_MomGiveShoes_7
# 167 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PlayersHouse_EventScript_MomGiveShoes_Text_1
PlayersHouse_EventScript_MomGiveShoes_6:
# 169 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 170 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	case 1, PlayersHouse_EventScript_MomGiveShoes_12
# 180 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	case 2, PlayersHouse_EventScript_MomGiveShoes_13
# 189 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	case 3, PlayersHouse_EventScript_MomGiveShoes_14
PlayersHouse_EventScript_MomGiveShoes_10:
# 200 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PlayersHouse_EventScript_MomGiveShoes_Text_2
# 201 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 202 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 203 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	signmsg
# 204 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	message PlayersHouse_EventScript_MomGiveShoes_Text_3
# 205 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmessage
# 206 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitfanfare
# 207 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PlayersHouse_EventScript_MomGiveShoes_Text_4
# 208 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	special DisableMsgBoxWalkaway
# 209 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PlayersHouse_EventScript_MomGiveShoes_Text_5
# 210 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	normalmsg
# 211 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 212 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PlayersHouse_EventScript_MomGiveShoes_Text_6
# 213 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 214 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 215 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	case 1, PlayersHouse_EventScript_MomGiveShoes_17
# 225 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	case 2, PlayersHouse_EventScript_MomGiveShoes_18
# 235 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	case 3, PlayersHouse_EventScript_MomGiveShoes_19
PlayersHouse_EventScript_MomGiveShoes_15:
# 246 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	delay 30
# 247 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 248 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_MOM_SHOES, 1
	return

PlayersHouse_EventScript_MomGiveShoes_3:
# 149 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 150 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
	goto PlayersHouse_EventScript_MomGiveShoes_1

PlayersHouse_EventScript_MomGiveShoes_4:
# 152 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 153 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
	goto PlayersHouse_EventScript_MomGiveShoes_1

PlayersHouse_EventScript_MomGiveShoes_5:
# 155 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 156 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
	goto PlayersHouse_EventScript_MomGiveShoes_1

PlayersHouse_EventScript_MomGiveShoes_7:
# 165 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PlayersHouse_EventScript_MomGiveShoes_Text_0
	goto PlayersHouse_EventScript_MomGiveShoes_6

PlayersHouse_EventScript_MomGiveShoes_12:
# 171 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 172 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_EventScript_MomGiveShoes_Movement_0
# 177 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 178 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 179 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
	goto PlayersHouse_EventScript_MomGiveShoes_10

PlayersHouse_EventScript_MomGiveShoes_13:
# 181 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 182 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_EventScript_MomGiveShoes_Movement_1
# 186 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 187 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 188 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
	goto PlayersHouse_EventScript_MomGiveShoes_10

PlayersHouse_EventScript_MomGiveShoes_14:
# 190 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 191 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_EventScript_MomGiveShoes_Movement_2
# 196 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 197 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 198 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
	goto PlayersHouse_EventScript_MomGiveShoes_10

PlayersHouse_EventScript_MomGiveShoes_17:
# 216 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 217 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_EventScript_MomGiveShoes_Movement_3
# 222 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 223 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 224 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
	goto PlayersHouse_EventScript_MomGiveShoes_15

PlayersHouse_EventScript_MomGiveShoes_18:
# 226 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 227 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_EventScript_MomGiveShoes_Movement_4
# 232 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 233 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 234 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
	goto PlayersHouse_EventScript_MomGiveShoes_15

PlayersHouse_EventScript_MomGiveShoes_19:
# 236 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 237 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MOM, PlayersHouse_EventScript_MomGiveShoes_Movement_4
# 242 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 243 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 244 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
	goto PlayersHouse_EventScript_MomGiveShoes_15


# 172 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PlayersHouse_EventScript_MomGiveShoes_Movement_0:
# 173 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 173 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 173 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 174 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 174 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 174 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 174 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 174 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 175 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_down
	step_end

# 182 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PlayersHouse_EventScript_MomGiveShoes_Movement_1:
# 183 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 183 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 183 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 184 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 184 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 184 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
	step_end

# 191 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PlayersHouse_EventScript_MomGiveShoes_Movement_2:
# 192 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 192 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 192 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 193 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 193 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 193 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_down
	step_end

# 217 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PlayersHouse_EventScript_MomGiveShoes_Movement_3:
# 218 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 218 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 218 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 218 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 218 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 219 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
# 219 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
# 219 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
# 220 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_left
	step_end

# 227 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PlayersHouse_EventScript_MomGiveShoes_Movement_4:
# 228 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 228 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 228 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 229 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
# 229 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
# 229 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
# 230 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_left
	step_end

PalletTown_PlayersHouse_1F_EventScript_Mom_Text_0:
# 82 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Hi, {PLAYER}. Welcome home.\nYou should have a quick rest.$"

PalletTown_PlayersHouse_1F_EventScript_Mom_Text_1:
# 85 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "You and your POKéMON are looking great.\nBe careful now. I love you.$"

PalletTown_PlayersHouse_1F_EventScript_Mom_Text_2:
# 92 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "All boys leave home someday.\lIt said so on TV.\pPROF. OAK was looking for you. He'll\nlet you choose your first POKéMON!$"

PalletTown_PlayersHouse_1F_EventScript_Mom_Text_3:
# 94 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "All girls leave home someday.\lIt said so on TV.\pPROF. OAK was looking for you. He'll\nlet you choose your first POKéMON!$"

PlayersHouse_EventScript_MomGiveShoes_Text_0:
# 165 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Morning, dear!$"

PlayersHouse_EventScript_MomGiveShoes_Text_1:
# 167 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oh, sneaking off without saying goodbye?$"

PlayersHouse_EventScript_MomGiveShoes_Text_2:
# 200 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "I know you're heading out\non your adventure today.\pSo I got you a gift!$"

PlayersHouse_EventScript_MomGiveShoes_Text_3:
# 204 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "{PLAYER} received the\nRUNNING SHOES from MOM.$"

PlayersHouse_EventScript_MomGiveShoes_Text_4:
# 207 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "I've switched shoes with the\nRUNNING SHOES.$"

PlayersHouse_EventScript_MomGiveShoes_Text_5:
# 209 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Hold the B Button to run!$"

PlayersHouse_EventScript_MomGiveShoes_Text_6:
# 212 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Okay. Go have your talk with\nPROFESSOR OAK!\pYou're always welcome back\nif you need a rest.\pBe careful. I love you!$"
