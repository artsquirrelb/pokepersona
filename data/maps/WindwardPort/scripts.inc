WindwardPort_MapScripts::
	.byte 0


WindwardPort_Eventscript_SailorOnGuard::
# 5 "data/maps/WindwardPort/scripts.pory"
	lock
# 6 "data/maps/WindwardPort/scripts.pory"
	faceplayer
# 7 "data/maps/WindwardPort/scripts.pory"
	msgbox WindwardPort_Eventscript_SailorOnGuard_Text_0
# 8 "data/maps/WindwardPort/scripts.pory"
	warp MAP_CORALPORT, 4, 20
# 9 "data/maps/WindwardPort/scripts.pory"
	waitstate
	return


WindwardPort_Eventscript_SailorOnGuard_Text_0:
# 7 "data/maps/WindwardPort/scripts.pory"
	.string "Warp back to Coralport.$"
