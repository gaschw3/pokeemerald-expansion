# 1 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
ViridianCity_FIsherHouse_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	.byte 0

ViridianCity_FisherHouse_EventScript_FishingSign::
# 7 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	msgbox ViridianCity_FisherHouse_EventScript_FishingSign_Text_0, MSGBOX_SIGN
	return


ViridianCity_FisherHouse_EventScript_FishingTV::
# 11 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	msgbox ViridianCity_FisherHouse_EventScript_FishingTV_Text_0, MSGBOX_SIGN
	return


ViridianCity_FisherHouse_EventScript_Blub::
# 15 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	lock
# 16 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	faceplayer
# 17 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	waitse
# 18 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	playmoncry SPECIES_STARYU, CRY_MODE_NORMAL
# 19 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	msgbox ViridianCity_FisherHouse_EventScript_Blub_Text_0, MSGBOX_NPC
# 20 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	waitmoncry
# 21 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	release
	end


ViridianCity_FisherHouse_EventScript_Fisherman::
# 26 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	lock
# 27 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	faceplayer
# 28 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_OLD_ROD, ViridianCity_FisherHouse_EventScript_Fisherman_2
# 33 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	msgbox ViridianCity_FisherHouse_EventScript_Fisherman_Text_1, MSGBOX_YESNO
ViridianCity_FisherHouse_EventScript_Fisherman_6:
# 34 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne ViridianCity_FisherHouse_EventScript_Fisherman_7
	checkitemspace ITEM_OLD_ROD
# 0 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ViridianCity_FisherHouse_EventScript_Fisherman_9
# 42 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	additem ITEM_OLD_ROD
# 43 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	msgbox ViridianCity_FisherHouse_EventScript_Fisherman_Text_4, MSGBOX_NPC
# 44 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	msgreceiveditem ViridianCity_FisherHouse_EventScript_Fisherman_Text_5, ITEM_OLD_ROD
# 45 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_OLD_ROD
# 46 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	msgbox ViridianCity_FisherHouse_EventScript_Fisherman_Text_6, MSGBOX_NPC
# 47 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	release
	end

# 51 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	release
	end

ViridianCity_FisherHouse_EventScript_Fisherman_2:
# 29 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	msgbox ViridianCity_FisherHouse_EventScript_Fisherman_Text_0, MSGBOX_NPC
# 30 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	release
	end

ViridianCity_FisherHouse_EventScript_Fisherman_7:
# 35 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	msgbox ViridianCity_FisherHouse_EventScript_Fisherman_Text_2, MSGBOX_YESNO
	goto ViridianCity_FisherHouse_EventScript_Fisherman_6

ViridianCity_FisherHouse_EventScript_Fisherman_9:
# 38 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	msgbox ViridianCity_FisherHouse_EventScript_Fisherman_Text_3, MSGBOX_NPC
# 39 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	release
	end


ViridianCity_FisherHouse_EventScript_FishingSign_Text_0:
# 7 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	.string "There are 3 FISHING RODS\pOLD, GOOD, and SUPER!$"

ViridianCity_FisherHouse_EventScript_FishingTV_Text_0:
# 11 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	.string "It's Slow TV of an aquarium.$"

ViridianCity_FisherHouse_EventScript_Blub_Text_0:
# 19 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	.string "BLUB: Glugluglu!$"

ViridianCity_FisherHouse_EventScript_Fisherman_Text_0:
# 29 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	.string "Hey there, {PLAYER}!\pHow are the fish biting?$"

ViridianCity_FisherHouse_EventScript_Fisherman_Text_1:
# 33 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	.string "I'm the youngest FISHING GURU!\pI simply looove fishing!\nYou look like a fisher.\pTell me, do you like to fish?$"

ViridianCity_FisherHouse_EventScript_Fisherman_Text_2:
# 35 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	.string "Oh… did you mean YES?$"

ViridianCity_FisherHouse_EventScript_Fisherman_Text_3:
# 38 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	.string "Oh, no!\pI had a nice gift for you, but you\nhave no room for it!$"

ViridianCity_FisherHouse_EventScript_Fisherman_Text_4:
# 43 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	.string "Grand! I like your style.\nI think we can be friends.\pTake this and fish, young friend!$"

ViridianCity_FisherHouse_EventScript_Fisherman_Text_5:
# 44 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	.string "{PLAYER} received an OLD ROD from\nthe FISHING GURU.$"

ViridianCity_FisherHouse_EventScript_Fisherman_Text_6:
# 46 "data/maps/ViridianCity_FIsherHouse_Frlg/scripts.pory"
	.string "Fishing is a way of life!\nIt's like the finest poetry.\pSeas, rivers, or ponds; go out\nand land the big one, my friend.$"
