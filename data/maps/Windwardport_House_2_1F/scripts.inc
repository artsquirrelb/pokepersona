Windwardport_House_2_1F_MapScripts::
	.byte 0


Windwardport_House_2_1F_Boy::
# 4 "data/maps/Windwardport_House_2_1F/scripts.pory"
	lock
# 5 "data/maps/Windwardport_House_2_1F/scripts.pory"
	faceplayer
# 6 "data/maps/Windwardport_House_2_1F/scripts.pory"
	setspeaker Windwardport_House_2_1F_Boy_Text_0
# 7 "data/maps/Windwardport_House_2_1F/scripts.pory"
	msgbox Windwardport_House_2_1F_Boy_Text_1
# 9 "data/maps/Windwardport_House_2_1F/scripts.pory"
	closemessage
# 10 "data/maps/Windwardport_House_2_1F/scripts.pory"
	doemote VAR_LAST_TALKED, E_SAD
# 11 "data/maps/Windwardport_House_2_1F/scripts.pory"
	release
	end


Windwardport_House_2_1F_Ninjask::
# 16 "data/maps/Windwardport_House_2_1F/scripts.pory"
	moncryscript SPECIES_NINJASK
# 17 "data/maps/Windwardport_House_2_1F/scripts.pory"
	msgbox Windwardport_House_2_1F_Ninjask_Text_0
# 18 "data/maps/Windwardport_House_2_1F/scripts.pory"
	release
	end


Windwardport_House_2_1F_Woman::
# 23 "data/maps/Windwardport_House_2_1F/scripts.pory"
	lock
# 24 "data/maps/Windwardport_House_2_1F/scripts.pory"
	faceplayer
# 25 "data/maps/Windwardport_House_2_1F/scripts.pory"
	setspeaker Windwardport_House_2_1F_Woman_Text_0
# 26 "data/maps/Windwardport_House_2_1F/scripts.pory"
	msgbox Windwardport_House_2_1F_Woman_Text_1
# 29 "data/maps/Windwardport_House_2_1F/scripts.pory"
	release
	end


Windwardport_House_2_1F_Boy_Text_0:
# 6 "data/maps/Windwardport_House_2_1F/scripts.pory"
	.string "Nanase$"

Windwardport_House_2_1F_Boy_Text_1:
# 7 "data/maps/Windwardport_House_2_1F/scripts.pory"
	.string "My sis is too busy studying to play with\n"
	.string "me these days.\p"
	.string "I still have Ninjask but...$"

Windwardport_House_2_1F_Ninjask_Text_0:
# 17 "data/maps/Windwardport_House_2_1F/scripts.pory"
	.string "Ninjask is trying its best to cheer\n"
	.string "Nanase up.$"

Windwardport_House_2_1F_Woman_Text_0:
# 25 "data/maps/Windwardport_House_2_1F/scripts.pory"
	.string "Baree$"

Windwardport_House_2_1F_Woman_Text_1:
# 26 "data/maps/Windwardport_House_2_1F/scripts.pory"
	.string "I'm very blessed to have kids as\n"
	.string "good-natured as them.\p"
	.string "My daughter is studying to be a Pokémon\n"
	.string "researcher.\p"
	.string "My son is still too young but he's\n"
	.string "well-behaved and loves to read about\l"
	.string "Pokémon's habitats.$"
