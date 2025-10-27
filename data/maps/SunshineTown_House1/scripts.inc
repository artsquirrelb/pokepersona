SunshineTown_House1_MapScripts::
	.byte 0


SunshineTown_House1_Eventscript_LittleGirl::
# 6 "data/maps/SunshineTown_House1/scripts.pory"
	lock
# 7 "data/maps/SunshineTown_House1/scripts.pory"
	faceplayer
# 8 "data/maps/SunshineTown_House1/scripts.pory"
	setspeaker SunshineTown_House1_Eventscript_LittleGirl_Text_0
# 9 "data/maps/SunshineTown_House1/scripts.pory"
	msgbox SunshineTown_House1_Eventscript_LittleGirl_Text_1
# 10 "data/maps/SunshineTown_House1/scripts.pory"
	closemessage
# 11 "data/maps/SunshineTown_House1/scripts.pory"
	release
	end


SunshineTown_House1_Eventscript_Poochyena::
# 16 "data/maps/SunshineTown_House1/scripts.pory"
	lock
# 17 "data/maps/SunshineTown_House1/scripts.pory"
	faceplayer
# 18 "data/maps/SunshineTown_House1/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 19 "data/maps/SunshineTown_House1/scripts.pory"
	waitmoncry
# 20 "data/maps/SunshineTown_House1/scripts.pory"
	release
	end


SunshineTown_House1_Eventscript_Lady::
# 25 "data/maps/SunshineTown_House1/scripts.pory"
	lock
# 26 "data/maps/SunshineTown_House1/scripts.pory"
	faceplayer
# 27 "data/maps/SunshineTown_House1/scripts.pory"
	setspeaker SunshineTown_House1_Eventscript_Lady_Text_0
# 28 "data/maps/SunshineTown_House1/scripts.pory"
	dotimebasedevents
# 29 "data/maps/SunshineTown_House1/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, SunshineTown_House1_Eventscript_Lady_2
# 33 "data/maps/SunshineTown_House1/scripts.pory"
	msgbox SunshineTown_House1_Eventscript_Lady_Text_2
# 35 "data/maps/SunshineTown_House1/scripts.pory"
	closemessage
# 36 "data/maps/SunshineTown_House1/scripts.pory"
	giveitem ITEM_RAZZ_BERRY, 2
# 37 "data/maps/SunshineTown_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineTown_House1_Eventscript_Lady_5
# 41 "data/maps/SunshineTown_House1/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
SunshineTown_House1_Eventscript_Lady_1:
# 44 "data/maps/SunshineTown_House1/scripts.pory"
	release
	end

SunshineTown_House1_Eventscript_Lady_2:
# 30 "data/maps/SunshineTown_House1/scripts.pory"
	msgbox SunshineTown_House1_Eventscript_Lady_Text_1
	goto SunshineTown_House1_Eventscript_Lady_1

SunshineTown_House1_Eventscript_Lady_5:
# 38 "data/maps/SunshineTown_House1/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SunshineTown_House1_Eventscript_Lady_1


SunshineTown_House1_Eventscript_LittleGirl_Text_0:
# 8 "data/maps/SunshineTown_House1/scripts.pory"
	.string "Aya$"

SunshineTown_House1_Eventscript_LittleGirl_Text_1:
# 9 "data/maps/SunshineTown_House1/scripts.pory"
	.string "I love my Poochyena! My mom brought it\n"
	.string "home one day after visiting my\l"
	.string "grandparents in Nata Town.$"

SunshineTown_House1_Eventscript_Lady_Text_0:
# 27 "data/maps/SunshineTown_House1/scripts.pory"
	.string "Hikari$"

SunshineTown_House1_Eventscript_Lady_Text_1:
# 30 "data/maps/SunshineTown_House1/scripts.pory"
	.string "You can come back tomorrow for more.$"

SunshineTown_House1_Eventscript_Lady_Text_2:
# 33 "data/maps/SunshineTown_House1/scripts.pory"
	.string "My daughter and Poochyena love to play\n"
	.string "outdoors.\p"
	.string "Sometimes they bring back berries.\n"
	.string "Here, you can have some.$"
