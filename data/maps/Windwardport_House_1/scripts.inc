Windwardport_House_1_MapScripts::
	.byte 0


WindwardPort_Eventscript_House_1_Purugly::
# 4 "data/maps/Windwardport_House_1/scripts.pory"
	lock
# 5 "data/maps/Windwardport_House_1/scripts.pory"
	playmoncry SPECIES_PURUGLY, 0
# 6 "data/maps/Windwardport_House_1/scripts.pory"
	showmonpic SPECIES_PURUGLY, 18, 5
# 7 "data/maps/Windwardport_House_1/scripts.pory"
	doemote 3, E_ASLEEP
# 8 "data/maps/Windwardport_House_1/scripts.pory"
	msgbox WindwardPort_Eventscript_House_1_Purugly_Text_0
# 9 "data/maps/Windwardport_House_1/scripts.pory"
	setseenmon SPECIES_PURUGLY
# 10 "data/maps/Windwardport_House_1/scripts.pory"
	hidemonpic
# 11 "data/maps/Windwardport_House_1/scripts.pory"
	release
	end


WindwardPort_Eventscript_House_1_Man::
# 16 "data/maps/Windwardport_House_1/scripts.pory"
	lock
# 17 "data/maps/Windwardport_House_1/scripts.pory"
	faceplayer
# 18 "data/maps/Windwardport_House_1/scripts.pory"
	setspeaker WindwardPort_Eventscript_House_1_Man_Text_0
# 19 "data/maps/Windwardport_House_1/scripts.pory"
	msgbox WindwardPort_Eventscript_House_1_Man_Text_1
# 21 "data/maps/Windwardport_House_1/scripts.pory"
	release
	end


WindwardPort_Eventscript_House_1_Woman::
# 26 "data/maps/Windwardport_House_1/scripts.pory"
	lock
# 27 "data/maps/Windwardport_House_1/scripts.pory"
	faceplayer
# 28 "data/maps/Windwardport_House_1/scripts.pory"
	setspeaker WindwardPort_Eventscript_House_1_Woman_Text_0
# 29 "data/maps/Windwardport_House_1/scripts.pory"
	msgbox WindwardPort_Eventscript_House_1_Woman_Text_1
# 31 "data/maps/Windwardport_House_1/scripts.pory"
	release
	end


WindwardPort_Eventscript_House_1_Purugly_Text_0:
# 8 "data/maps/Windwardport_House_1/scripts.pory"
	.string "Purugly is napping peacefully. Best to\n"
	.string "leave it be!$"

WindwardPort_Eventscript_House_1_Man_Text_0:
# 18 "data/maps/Windwardport_House_1/scripts.pory"
	.string "Ruma$"

WindwardPort_Eventscript_House_1_Man_Text_1:
# 19 "data/maps/Windwardport_House_1/scripts.pory"
	.string "Contrary to its beefy appearance,\n"
	.string "Purugly is quite fast.\p"
	.string "Especially when it comes to foods, one\n"
	.string "blink of an eye and it steals all my\l"
	.string "snacks...$"

WindwardPort_Eventscript_House_1_Woman_Text_0:
# 28 "data/maps/Windwardport_House_1/scripts.pory"
	.string "Omame$"

WindwardPort_Eventscript_House_1_Woman_Text_1:
# 29 "data/maps/Windwardport_House_1/scripts.pory"
	.string "We raised Purugly since it was a\n"
	.string "Glameow.\p"
	.string "I still remember that it was very picky\n"
	.string "with foods.$"
