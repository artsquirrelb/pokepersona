Windwardport_Juis_House_1F_MapScripts::
	.byte 0


Windwardport_Juis_House_JuisGrandma::
# 4 "data/maps/Windwardport_Juis_House_1F/scripts.pory"
	lock
# 5 "data/maps/Windwardport_Juis_House_1F/scripts.pory"
	faceplayer
# 6 "data/maps/Windwardport_Juis_House_1F/scripts.pory"
	setspeaker Windwardport_Juis_House_JuisGrandma_Text_0
# 7 "data/maps/Windwardport_Juis_House_1F/scripts.pory"
	msgbox Windwardport_Juis_House_JuisGrandma_Text_1
# 14 "data/maps/Windwardport_Juis_House_1F/scripts.pory"
	release
	end


Windwardport_Juis_House_Monferno::
# 19 "data/maps/Windwardport_Juis_House_1F/scripts.pory"
	moncryscript SPECIES_MONFERNO
# 20 "data/maps/Windwardport_Juis_House_1F/scripts.pory"
	release
	end


Windwardport_Juis_House_JuisGrandma_Text_0:
# 6 "data/maps/Windwardport_Juis_House_1F/scripts.pory"
	.string "Etoka$"

Windwardport_Juis_House_JuisGrandma_Text_1:
# 7 "data/maps/Windwardport_Juis_House_1F/scripts.pory"
	.string "My grandchild is the Ranger Team\n"
	.string "Leader of this city.\l"
	.string "Jui's parents passed away in a\l"
	.string "landslide in Route 22 when Jui was\l"
	.string "7 years old.\p"
	.string "They must've been proud of the\n"
	.string "person Jui has grown into.\p"
	.string "$"
