Route1_MapScripts::
	.byte 0


Route1_Eventscript_NotTheWayToMeadow::
# 6 "data/maps/Route1/scripts.pory"
	lock
# 7 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 8 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 9 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_NotTheWayToMeadow_Text_0
# 10 "data/maps/Route1/scripts.pory"
	closemessage
# 11 "data/maps/Route1/scripts.pory"
	release
	return


Route1_Eventscript_NotTheWayToMeadow_Text_0:
# 9 "data/maps/Route1/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(If I remember correctly, Sunshine\n"
	.string "Meadow is in the north of Route 2.)$"
