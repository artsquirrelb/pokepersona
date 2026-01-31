Route2_2_MapScripts::
	.byte 0


Route2_2_Eventscript_BerrySign::
# 6 "data/maps/Route2_2/scripts.pory"
	lock
# 7 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_BerrySign_Text_0
# 10 "data/maps/Route2_2/scripts.pory"
	closemessage
# 11 "data/maps/Route2_2/scripts.pory"
	release
	end


Route2_2_Eventscript_DirectionSign::
# 16 "data/maps/Route2_2/scripts.pory"
	lock
# 17 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_DirectionSign_Text_0
# 19 "data/maps/Route2_2/scripts.pory"
	closemessage
# 20 "data/maps/Route2_2/scripts.pory"
	release
	end


Route2_2_Eventscript_Pansage::
# 25 "data/maps/Route2_2/scripts.pory"
	lockall
# 26 "data/maps/Route2_2/scripts.pory"
	startoverworldencounter 12
# 27 "data/maps/Route2_2/scripts.pory"
	setflag FLAG_TEMP_1
# 28 "data/maps/Route2_2/scripts.pory"
	removeobject VAR_LAST_TALKED
# 29 "data/maps/Route2_2/scripts.pory"
	releaseall
	end


Route2_2_Eventscript_Man::
# 34 "data/maps/Route2_2/scripts.pory"
	lock
# 35 "data/maps/Route2_2/scripts.pory"
	faceplayer
# 36 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_Man_Text_0
# 37 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_Man_Text_1
# 40 "data/maps/Route2_2/scripts.pory"
	release
	end


Route2_2_Eventscript_BerrySign_Text_0:
# 7 "data/maps/Route2_2/scripts.pory"
	.string "If you pick the berries, please plant\n"
	.string "back some!\p"
	.string "Let's spread the greens!\n"
	.string "{CLEAR_TO 150}-BRG$"

Route2_2_Eventscript_DirectionSign_Text_0:
# 17 "data/maps/Route2_2/scripts.pory"
	.string "Coralport {LEFT_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}$"

Route2_2_Eventscript_Man_Text_0:
# 36 "data/maps/Route2_2/scripts.pory"
	.string "Fusahiro$"

Route2_2_Eventscript_Man_Text_1:
# 37 "data/maps/Route2_2/scripts.pory"
	.string "If you're wondering, no. I'm not BGR.\p"
	.string "I'm simply here to enjoy the peaceful\n"
	.string "evening.\p"
	.string "Who might this BRG character be,\n"
	.string "though? They seem to be taking care of\l"
	.string "this little garden.$"
