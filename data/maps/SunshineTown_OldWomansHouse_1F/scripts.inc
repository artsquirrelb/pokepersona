SunshineTown_OldWomansHouse_1F_MapScripts::
	.byte 0


SunshineTown_OldWomansHouse_1F_Eventscript_LucarioAndRiolu::
# 5 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	lockall
# 6 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_NORMAL
# 7 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	applymovement 1, shakehorizontal
# 8 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	waitmovement 0
# 9 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	playmoncry SPECIES_RIOLU, CRY_MODE_NORMAL
# 10 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	applymovement 2, shakehorizontal
# 11 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_1F_Eventscript_LucarioAndRiolu_Text_0
# 14 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	closemessage
# 15 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	releaseall
	end


SunshineTown_OldWomansHouse_1F_Eventscript_Caretaker::
# 20 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	lockall
# 21 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	faceplayer
# 22 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	setspeaker SunshineTown_OldWomansHouse_1F_Eventscript_Caretaker_Text_0
# 23 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	msgbox SunshineTown_OldWomansHouse_1F_Eventscript_Caretaker_Text_1
# 27 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	closemessage
# 28 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	releaseall
	end


SunshineTown_OldWomansHouse_1F_Eventscript_Riolu::
# 33 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	lock
# 34 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	faceplayer
# 35 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	playmoncry SPECIES_RIOLU, CRY_MODE_NORMAL
# 36 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	waitmoncry
# 37 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	release
	end


SunshineTown_OldWomansHouse_1F_Eventscript_LucarioAndRiolu_Text_0:
# 12 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	.string "Lucario and Riolu are training\n"
	.string "diligently and ignore the surroundings.$"

SunshineTown_OldWomansHouse_1F_Eventscript_Caretaker_Text_0:
# 22 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	.string "Emi$"

SunshineTown_OldWomansHouse_1F_Eventscript_Caretaker_Text_1:
# 23 "data/maps/SunshineTown_OldWomansHouse_1F/scripts.pory"
	.string "The owner of this house is a fan of\n"
	.string "Lucario.\p"
	.string "She hired us to play with her Pokémons\n"
	.string "because it gets very rowdy as she\l"
	.string "keeps bringing more Riolus home.\p"
	.string "If you want one for yourself I'm sure\n"
	.string "you can find some lurking in the tall\l"
	.string "grass in town.$"
