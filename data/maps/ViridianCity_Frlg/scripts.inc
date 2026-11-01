# 1 "data/maps/ViridianCity_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
# 4 "data/maps/ViridianCity_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/ViridianCity_Frlg/scripts.pory"

# 6 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_OnTransition::
# 7 "data/maps/ViridianCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 8 "data/maps/ViridianCity_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_SetOldManBlockingRoad
# 9 "data/maps/ViridianCity_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_SetOldManStandingByRoad
# 10 "data/maps/ViridianCity_Frlg/scripts.pory"
	call_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_SetOldManNormal
# 11 "data/maps/ViridianCity_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0, ViridianCity_EventScript_TryUnlockGym
# 12 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 13 "data/maps/ViridianCity_Frlg/scripts.pory"

# 14 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_SetOldManNormal::
# 15 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 16 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 17 "data/maps/ViridianCity_Frlg/scripts.pory"

# 18 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_SetOldManStandingByRoad::
# 19 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 20 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 8
# 21 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_LOOK_AROUND
# 22 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 23 "data/maps/ViridianCity_Frlg/scripts.pory"

# 24 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_SetOldManBlockingRoad::
# 25 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_LYING_DOWN
# 26 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 11
# 27 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_FACE_DOWN
# 28 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 29 "data/maps/ViridianCity_Frlg/scripts.pory"

# 30 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym::
# 31 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Common_EventScript_NopReturn
# 32 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Common_EventScript_NopReturn
# 33 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Common_EventScript_NopReturn
# 34 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, Common_EventScript_NopReturn
# 35 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Common_EventScript_NopReturn
# 36 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, Common_EventScript_NopReturn
# 37 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
# 38 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 39 "data/maps/ViridianCity_Frlg/scripts.pory"

# 40 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_GymDoorLocked::
# 41 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 42 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 43 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 45 "data/maps/ViridianCity_Frlg/scripts.pory"
	delay 20
# 46 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked
# 47 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_JumpDownLedge
# 49 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/ViridianCity_Frlg/scripts.pory"
	releaseall
# 51 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 52 "data/maps/ViridianCity_Frlg/scripts.pory"

# 53 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Movement_JumpDownLedge::
# 54 "data/maps/ViridianCity_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/ViridianCity_Frlg/scripts.pory"
	jump_2_down
# 56 "data/maps/ViridianCity_Frlg/scripts.pory"
	step_end
# 57 "data/maps/ViridianCity_Frlg/scripts.pory"

# 58 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_CitySign::
# 59 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
# 60 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 61 "data/maps/ViridianCity_Frlg/scripts.pory"

# 62 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TrainerTips1::
# 63 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
# 64 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 65 "data/maps/ViridianCity_Frlg/scripts.pory"

# 66 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TrainerTips2::
# 67 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
# 68 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 69 "data/maps/ViridianCity_Frlg/scripts.pory"

# 70 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_GymSign::
# 71 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
# 72 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 73 "data/maps/ViridianCity_Frlg/scripts.pory"

# 74 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_GymDoor::
# 75 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
# 76 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 77 "data/maps/ViridianCity_Frlg/scripts.pory"

# 78 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Boy::
# 79 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
# 80 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 81 "data/maps/ViridianCity_Frlg/scripts.pory"

# 82 "data/maps/ViridianCity_Frlg/scripts.pory"
@ Other old man, not the tutorial old man
# 83 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_OldMan::
# 84 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 85 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 86 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1, ViridianCity_EventScript_OldManGymLeaderReturned
# 87 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 88 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 89 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_OLD_MAN, Common_Movement_FaceOriginalDirection
# 90 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 91 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 92 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 93 "data/maps/ViridianCity_Frlg/scripts.pory"

# 94 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_OldManGymLeaderReturned::
# 95 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
# 96 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 97 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 98 "data/maps/ViridianCity_Frlg/scripts.pory"

# 99 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialOldMan::
# 100 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 101 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 102 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ViridianCity_EventScript_AskIfTeachyTVHelpful
# 103 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_TutorialCompleted
# 104 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_TutorialStart
# 105 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_TutorialNotReady
# 106 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 107 "data/maps/ViridianCity_Frlg/scripts.pory"

# 108 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_AskIfTeachyTVHelpful::
# 109 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
# 110 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_TeachyTVNotHelpful
# 111 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
# 112 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 113 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 114 "data/maps/ViridianCity_Frlg/scripts.pory"

# 115 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TeachyTVNotHelpful::
# 116 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_TooBusyForTeachyTV
# 117 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 118 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 119 "data/maps/ViridianCity_Frlg/scripts.pory"

# 120 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialCompleted::
# 121 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
# 122 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 123 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 124 "data/maps/ViridianCity_Frlg/scripts.pory"

# 125 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialStart::
# 126 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 127 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 128 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 129 "data/maps/ViridianCity_Frlg/scripts.pory"

# 130 "data/maps/ViridianCity_Frlg/scripts.pory"
@ Unused
# 131 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_WatchToLearnBasics::
# 132 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 133 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 134 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 135 "data/maps/ViridianCity_Frlg/scripts.pory"

# 136 "data/maps/ViridianCity_Frlg/scripts.pory"
@ Unused. Starts battle after the post battle text, which is odd.
# 137 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialUnused::
# 138 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 139 "data/maps/ViridianCity_Frlg/scripts.pory"
	special StartOldManTutorialBattle
# 140 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitstate
# 141 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 142 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 143 "data/maps/ViridianCity_Frlg/scripts.pory"

# 144 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialNotReady::
# 145 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 146 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 147 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 148 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 149 "data/maps/ViridianCity_Frlg/scripts.pory"

# 150 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Youngster::
# 151 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 152 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 153 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 154 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, ViridianCity_EventScript_YoungsterExplainCaterpillars
# 155 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_YoungsterDeclineExplanation
# 156 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 157 "data/maps/ViridianCity_Frlg/scripts.pory"

# 158 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_YoungsterExplainCaterpillars::
# 159 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
# 160 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 161 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 162 "data/maps/ViridianCity_Frlg/scripts.pory"

# 163 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_YoungsterDeclineExplanation::
# 164 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
# 165 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 166 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 167 "data/maps/ViridianCity_Frlg/scripts.pory"

# 168 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Woman::
# 169 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 170 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 171 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_WomanRoadBlocked
# 172 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
# 173 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 174 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 175 "data/maps/ViridianCity_Frlg/scripts.pory"

# 176 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_WomanRoadBlocked::
# 177 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
# 178 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 179 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_WOMAN, Common_Movement_FaceOriginalDirection
# 180 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 181 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 182 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 183 "data/maps/ViridianCity_Frlg/scripts.pory"

# 184 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_DreamEaterTutor::
# 185 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto EventScript_DreamEaterTutor
# 186 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 187 "data/maps/ViridianCity_Frlg/scripts.pory"

# 188 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_RoadBlocked::
# 189 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 190 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 191 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 192 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 193 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_WalkDown
# 194 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 195 "data/maps/ViridianCity_Frlg/scripts.pory"
	releaseall
# 196 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 197 "data/maps/ViridianCity_Frlg/scripts.pory"

# 198 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Movement_WalkDown::
# 199 "data/maps/ViridianCity_Frlg/scripts.pory"
	walk_down
# 200 "data/maps/ViridianCity_Frlg/scripts.pory"
	step_end
# 201 "data/maps/ViridianCity_Frlg/scripts.pory"

# 202 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialTriggerLeft::
# 203 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 204 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 205 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterLeft
# 206 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 207 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 208 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 209 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 210 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 211 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 212 "data/maps/ViridianCity_Frlg/scripts.pory"

# 213 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialTriggerRight::
# 214 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 215 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 216 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 217 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 218 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 219 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 220 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 221 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 222 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 223 "data/maps/ViridianCity_Frlg/scripts.pory"

# 224 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_DoTutorialBattle::
# 225 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
# 226 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 227 "data/maps/ViridianCity_Frlg/scripts.pory"
	special StartOldManTutorialBattle
# 228 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitstate
# 229 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 230 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 231 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 232 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 233 "data/maps/ViridianCity_Frlg/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 234 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 235 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 236 "data/maps/ViridianCity_Frlg/scripts.pory"

# 237 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_CanCarryMonsAnywhere::
# 238 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Those POKéBALLS at your waist!\n"
# 239 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "You have POKéMON, don't you?\p"
# 240 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It's great that you can carry and\n"
# 241 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "use POKéMON anytime, anywhere.$"
# 242 "data/maps/ViridianCity_Frlg/scripts.pory"

# 243 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GymClosedWonderWhoLeaderIs::
# 244 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "This POKéMON GYM is always closed.\p"
# 245 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I wonder who the LEADER is?$"
# 246 "data/maps/ViridianCity_Frlg/scripts.pory"

# 247 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ViridiansGymLeaderReturned::
# 248 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN GYM's LEADER returned!$"
# 249 "data/maps/ViridianCity_Frlg/scripts.pory"

# 250 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_WantToKnowAboutCaterpillarMons::
# 251 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "You want to know about the two\n"
# 252 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "kinds of caterpillar POKéMON?$"
# 253 "data/maps/ViridianCity_Frlg/scripts.pory"

# 254 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_OhOkayThen::
# 255 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Oh, okay then!$"
# 256 "data/maps/ViridianCity_Frlg/scripts.pory"

# 257 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ExplainCaterpieWeedle::
# 258 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "CATERPIE has no poison,\n"
# 259 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "but WEEDLE does.\p"
# 260 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Watch that your POKéMON aren't\n"
# 261 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "stabbed by WEEDLE's POISON STING.$"
# 262 "data/maps/ViridianCity_Frlg/scripts.pory"

# 263 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GrandpaHasntHadCoffeeYet::
# 264 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Oh, Grandpa!\n"
# 265 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Don't be so mean!\p"
# 266 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I'm so sorry.\n"
# 267 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "He hasn't had his coffee yet.$"
# 268 "data/maps/ViridianCity_Frlg/scripts.pory"

# 269 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GoShoppingInPewterOccasionally::
# 270 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I go shopping in PEWTER CITY\n"
# 271 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "occasionally.\p"
# 272 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I have to take the winding trail in\n"
# 273 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN FOREST when I go.$"
# 274 "data/maps/ViridianCity_Frlg/scripts.pory"

# 275 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ThisIsPrivateProperty::
# 276 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I absolutely forbid you from\n"
# 277 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "going through here!\p"
# 278 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "This is private property!$"
# 279 "data/maps/ViridianCity_Frlg/scripts.pory"

# 280 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ShowYouHowToCatchMons::
# 281 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
# 282 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "that's what I need to get going!\p"
# 283 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Hm?\n"
# 284 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "What is that red box you have?\p"
# 285 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Ah, so you're working on your\n"
# 286 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéDEX.\p"
# 287 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Then let me give you a word of\n"
# 288 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "advice.\p"
# 289 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Whenever you catch a POKéMON,\n"
# 290 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "the POKéDEX automatically updates\l"
# 291 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "its data.\p"
# 292 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "…You don't know how to catch\n"
# 293 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "a POKéMON?\p"
# 294 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I suppose I had better show you\n"
# 295 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "then!$"
# 296 "data/maps/ViridianCity_Frlg/scripts.pory"

# 297 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ThatWasEducationalTakeThis::
# 298 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "There! Now tell me, that was\n"
# 299 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "educational, was it not?\p"
# 300 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "And here, take this, too.$"
# 301 "data/maps/ViridianCity_Frlg/scripts.pory"

# 302 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_WatchThatToLearnBasics::
# 303 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "If there's something you don't\n"
# 304 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "understand, watch that.\p"
# 305 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It will teach you about the basics\n"
# 306 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "of being a POKéMON TRAINER.$"
# 307 "data/maps/ViridianCity_Frlg/scripts.pory"

# 308 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_WeakenMonsFirstToCatch::
# 309 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
# 310 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "that's what I need to get going!\p"
# 311 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "But I made it too strong.\n"
# 312 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It gave me a headache…\p"
# 313 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Incidentally, are you filling your\n"
# 314 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéDEX?\p"
# 315 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "At first, focus on weakening the\n"
# 316 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéMON before trying to catch it.$"
# 317 "data/maps/ViridianCity_Frlg/scripts.pory"

# 318 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_HowsTeachyTVHelping::
# 319 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
# 320 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "that's what I need to get going!\p"
# 321 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "But I made it too strong.\n"
# 322 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It gave me a headache…\p"
# 323 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Incidentally, is my old TEACHY TV\n"
# 324 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "helping you?$"
# 325 "data/maps/ViridianCity_Frlg/scripts.pory"

# 326 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_MyGrandsonOnTheShow::
# 327 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Wahaha!\n"
# 328 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It's my grandson on the show!\p"
# 329 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Since he's the one doing the\n"
# 330 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "teaching, you're bound to learn.$"
# 331 "data/maps/ViridianCity_Frlg/scripts.pory"

# 332 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_TooBusyForTeachyTV::
# 333 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Hm… You're too busy to not even\n"
# 334 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "have the time for TEACHY TV…\p"
# 335 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Time is money, and neither should\n"
# 336 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "be ill spent…$"
# 337 "data/maps/ViridianCity_Frlg/scripts.pory"

# 338 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_CitySign::
# 339 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN CITY \n"
# 340 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "The Eternally Green Paradise$"
# 341 "data/maps/ViridianCity_Frlg/scripts.pory"

# 342 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_CatchMonsForEasierBattles::
# 343 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 344 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Catch POKéMON and expand your\n"
# 345 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "collection.\p"
# 346 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "The more you have, the easier it\n"
# 347 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "is to battle.$"
# 348 "data/maps/ViridianCity_Frlg/scripts.pory"

# 349 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_MovesLimitedByPP::
# 350 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 351 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "The battle moves of POKéMON are\n"
# 352 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "limited by their POWER POINTS, PP.\p"
# 353 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "To replenish PP, rest your tired\n"
# 354 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéMON at a POKéMON CENTER.$"
# 355 "data/maps/ViridianCity_Frlg/scripts.pory"

# 356 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GymSign::
# 357 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN CITY POKéMON GYM$"
# 358 "data/maps/ViridianCity_Frlg/scripts.pory"

# 359 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GymDoorsAreLocked::
# 360 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN GYM's doors are locked…$"

ViridianCity_Custom_PokemonCry::
# 365 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 366 "data/maps/ViridianCity_Frlg/scripts.pory"
	getoverworldwildencounterspecies VAR_LAST_TALKED
# 367 "data/maps/ViridianCity_Frlg/scripts.pory"
	playmoncry VAR_LAST_TALKED, 0
# 368 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Custom_PokemonCry_Text_0, MSGBOX_NPC
# 369 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmoncry
# 370 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
	end


ViridianCity_Custom_NidorinoTrainer::
# 375 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 376 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 377 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Custom_NidorinoTrainer_Text_0, MSGBOX_NPC
# 378 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 379 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_NIDO_TRAINER, ViridianCity_Custom_NidorinoTrainer_Movement_0
# 380 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
	end


ViridianCity_Custom_GengarTrainer::
# 385 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 386 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 387 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Custom_GengarTrainer_Text_0, MSGBOX_NPC
# 388 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 389 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_GENGAR_TRAINER, ViridianCity_Custom_GengarTrainer_Movement_0
# 390 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
	end


# 379 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Custom_NidorinoTrainer_Movement_0:
# 379 "data/maps/ViridianCity_Frlg/scripts.pory"
	face_down
	step_end

# 389 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Custom_GengarTrainer_Movement_0:
# 389 "data/maps/ViridianCity_Frlg/scripts.pory"
	face_up
	step_end

ViridianCity_Custom_PokemonCry_Text_0:
# 368 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It's battling furiously!$"

ViridianCity_Custom_NidorinoTrainer_Text_0:
# 377 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Look out NIDORINO!$"

ViridianCity_Custom_GengarTrainer_Text_0:
# 387 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "GENGAR, use SHADOW CLAW!$"
