Windwardport_BeachHouse_MapScripts::
	.byte 0


Windwardport_BeachHouse_Man::
# 4 "data/maps/Windwardport_BeachHouse/scripts.pory"
	lock
# 5 "data/maps/Windwardport_BeachHouse/scripts.pory"
	faceplayer
# 6 "data/maps/Windwardport_BeachHouse/scripts.pory"
	setspeaker Windwardport_BeachHouse_Man_Text_0
# 7 "data/maps/Windwardport_BeachHouse/scripts.pory"
	msgbox Windwardport_BeachHouse_Man_Text_1
# 9 "data/maps/Windwardport_BeachHouse/scripts.pory"
	release
	end


Windwardport_BeachHouse_Tirtouga::
# 14 "data/maps/Windwardport_BeachHouse/scripts.pory"
	moncryscript SPECIES_TIRTOUGA
# 15 "data/maps/Windwardport_BeachHouse/scripts.pory"
	release
	end


Windwardport_BeachHouse_Man_Text_0:
# 6 "data/maps/Windwardport_BeachHouse/scripts.pory"
	.string "Takehiko$"

Windwardport_BeachHouse_Man_Text_1:
# 7 "data/maps/Windwardport_BeachHouse/scripts.pory"
	.string "I see that girl outside of my house\n"
	.string "everyday.\p"
	.string "Do you think she likes me?$"
