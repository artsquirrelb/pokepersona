Route3_MapScripts::
	.byte 0


Route3_Eventscript_CoralportLightHouseDoorLocked::
# 4 "data/maps/Route3/scripts.pory"
	lock
# 5 "data/maps/Route3/scripts.pory"
	msgbox Route3_Eventscript_CoralportLightHouseDoorLocked_Text_0
# 6 "data/maps/Route3/scripts.pory"
	closemessage
# 7 "data/maps/Route3/scripts.pory"
	release
	end


Route3_Eventscript_CoralportLightHouseDoorLocked_Text_0:
# 5 "data/maps/Route3/scripts.pory"
	.string "It's locked.$"
