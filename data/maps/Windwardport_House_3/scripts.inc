Windwardport_House_3_MapScripts::
	.byte 0


Windwardport_House_3_Lady::
# 4 "data/maps/Windwardport_House_3/scripts.pory"
	lock
# 5 "data/maps/Windwardport_House_3/scripts.pory"
	faceplayer
# 6 "data/maps/Windwardport_House_3/scripts.pory"
	setspeaker Windwardport_House_3_Lady_Text_0
# 7 "data/maps/Windwardport_House_3/scripts.pory"
	msgbox Windwardport_House_3_Lady_Text_1
# 12 "data/maps/Windwardport_House_3/scripts.pory"
	release
	end


Windwardport_House_3_PkmBreederF::
# 17 "data/maps/Windwardport_House_3/scripts.pory"
	lock
# 18 "data/maps/Windwardport_House_3/scripts.pory"
	faceplayer
# 19 "data/maps/Windwardport_House_3/scripts.pory"
	setspeaker Windwardport_House_3_PkmBreederF_Text_0
# 20 "data/maps/Windwardport_House_3/scripts.pory"
	msgbox Windwardport_House_3_PkmBreederF_Text_1
# 22 "data/maps/Windwardport_House_3/scripts.pory"
	release
	end


Windwardport_House_3_Plusle::
# 27 "data/maps/Windwardport_House_3/scripts.pory"
	moncryscript SPECIES_PLUSLE
# 28 "data/maps/Windwardport_House_3/scripts.pory"
	release
	end


Windwardport_House_3_Minun::
# 33 "data/maps/Windwardport_House_3/scripts.pory"
	moncryscript SPECIES_MINUN
# 34 "data/maps/Windwardport_House_3/scripts.pory"
	release
	end


Windwardport_House_3_Lady_Text_0:
# 6 "data/maps/Windwardport_House_3/scripts.pory"
	.string "Mirina$"

Windwardport_House_3_Lady_Text_1:
# 7 "data/maps/Windwardport_House_3/scripts.pory"
	.string "My father often brings crops from his\n farm here.\l I always end up sharing them with\l my housemate because it's too much\l for me alone.$"

Windwardport_House_3_PkmBreederF_Text_0:
# 19 "data/maps/Windwardport_House_3/scripts.pory"
	.string "Aie$"

Windwardport_House_3_PkmBreederF_Text_1:
# 20 "data/maps/Windwardport_House_3/scripts.pory"
	.string "I wish I had caring parents like\n Mirina's.$"
