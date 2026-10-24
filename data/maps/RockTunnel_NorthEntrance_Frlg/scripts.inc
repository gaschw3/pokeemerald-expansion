# 1 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"

# 2 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
RockTunnel_NorthEntrance_Frlg_MapScripts::
# 3 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel_NorthEntrance_OnTransition
# 4 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"

# 6 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
RockTunnel_NorthEntrance_OnTransition::
# 7 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
# 8 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
	end
# 9 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"

# 10 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
RockTunnel_NorthEntrance_EventScript_DarknessSign::
# 11 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
	msgbox RockTunnel_Entrance_Text_RouteSign, MSGBOX_SIGN
# 12 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
	end
# 13 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"

# 14 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
RockTunnel_Entrance_Text_RouteSign::
# 15 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
    .string "ROCK TUNNEL\n"
# 16 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
    .string "CERULEAN CITY <-> LAVENDER TOWN\p"
# 17 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
    .string "Protected dark biome.\p"
# 18 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
    .string "Personal use of FLASH\n"
# 19 "data/maps/RockTunnel_NorthEntrance_Frlg/scripts.pory"
    .string "may be required.$"
