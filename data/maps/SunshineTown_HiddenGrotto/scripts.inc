SunshineTown_HiddenGrotto_MapScripts::
	.byte 0


SunshineTown_HiddenGrotto_Drampa::
# 4 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	lock
# 5 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	delay 20
# 6 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	msgbox SunshineTown_HiddenGrotto_Drampa_Text_0, MSGBOX_YESNO
# 7 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	closemessage
# 8 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineTown_HiddenGrotto_Drampa_2
# 13 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	faceplayer
# 14 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	delay 30
# 15 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	startoverworldencounter 40
# 16 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	setflag FLAG_DAILY_HIDDENGROTTO_SUNSHINETOWN
# 17 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	removeobject 1
SunshineTown_HiddenGrotto_Drampa_1:
# 19 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	release
	end

SunshineTown_HiddenGrotto_Drampa_2:
# 9 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	msgbox SunshineTown_HiddenGrotto_Drampa_Text_1
# 10 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	closemessage
	goto SunshineTown_HiddenGrotto_Drampa_1


SunshineTown_HiddenGrotto_Drampa_Text_0:
# 6 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	.string "The Pokémon is loafing around.\n"
	.string "Challenge it?$"

SunshineTown_HiddenGrotto_Drampa_Text_1:
# 9 "data/maps/SunshineTown_HiddenGrotto/scripts.pory"
	.string "You left the Pokémon alone.$"
