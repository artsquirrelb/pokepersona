WindwardPort_Harbor_MapScripts::
# 2 "data/maps/WindwardPort_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WindwardPort_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WindwardPort_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_VISITED_WINDWARD_PORT
	return


WindwardPort_Eventscript_SailorOnGuard::
# 8 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 9 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 10 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Eventscript_SailorOnGuard_Text_0
# 11 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 12 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt WindwardPort_Eventscript_SailorOnGuard_1
# 12 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_ge WindwardPort_Eventscript_SailorOnGuard_1
# 48 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Eventscript_ShipOutOfCommission
	return

WindwardPort_Eventscript_SailorOnGuard_1:
# 13 "data/maps/WindwardPort_Harbor/scripts.pory"
	showmoneybox 0, 0
# 14 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Eventscript_SailorOnGuard_Text_1, MSGBOX_YESNO
# 17 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 18 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Eventscript_SailorOnGuard_6
# 44 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
	return

WindwardPort_Eventscript_SailorOnGuard_6:
# 19 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkmoney 300
# 20 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Eventscript_SailorOnGuard_9
# 36 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Eventscript_SailorOnGuard_Text_0
# 37 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Eventscript_SailorOnGuard_Text_3
# 38 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 39 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Eventscript_SailorOnGuard_9:
# 21 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHOP
# 22 "data/maps/WindwardPort_Harbor/scripts.pory"
	removemoney 300
# 23 "data/maps/WindwardPort_Harbor/scripts.pory"
	updatemoneybox
# 24 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Eventscript_SailorOnGuard_Text_0
# 25 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Eventscript_SailorOnGuard_Text_2
# 26 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 27 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement 1, walkinplaceup
# 28 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitmovement
# 29 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
# 30 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 31 "data/maps/WindwardPort_Harbor/scripts.pory"
	addtime 0, 3, 0
# 32 "data/maps/WindwardPort_Harbor/scripts.pory"
	warp MAP_CORALPORT, 4, 20
# 33 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitstate
	return


WindwardPort_Eventscript_ShipOutOfCommission::
# 53 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Eventscript_ShipOutOfCommission_Text_0
	return


MyScript::
	return


WindwardPort_Eventscript_SailorOnGuard_Text_0:
# 10 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Anderson$"

WindwardPort_Eventscript_SailorOnGuard_Text_1:
# 14 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "This ship is departing for Coralport.\p"
	.string "It will arrive at the destination in\n"
	.string "approximately {COLOR RED}3 hours{COLOR 2}.\p"
	.string "It costs {COLOR GREEN}¥100 {COLOR 2}per ticket. Would you like\n"
	.string "to board the ship?$"

WindwardPort_Eventscript_SailorOnGuard_Text_2:
# 25 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "This way, please.$"

WindwardPort_Eventscript_SailorOnGuard_Text_3:
# 37 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "money for 3 tickets.$"

WindwardPort_Eventscript_ShipOutOfCommission_Text_0:
# 53 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The ship to Coralport is currently out\n"
	.string "of commission.\p"
	.string "Please come back between 5PM and 7AM.$"
