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
# 41 "data/maps/Route2_2/scripts.pory"
	release
	end


Route2_2_Eventscript_Maniac::
# 46 "data/maps/Route2_2/scripts.pory"
	trainerbattle_single TRAINER_WAKAMU, Route2_Wakamu_Intro, Route2_Wakamu_Defeated
# 47 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_Maniac_Text_0
# 48 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_Maniac_Text_1
	return


Route2_2_Eventscript_NinjaBoy::
# 63 "data/maps/Route2_2/scripts.pory"
	trainerbattle_single TRAINER_BENKICHI, Route2_Benkichi_Intro, Route2_Benkichi_Defeated
# 64 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_NinjaBoy_Text_0
# 65 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_NinjaBoy_Text_1
# 66 "data/maps/Route2_2/scripts.pory"
	release
	end


Route2_2_Eventscript_PreschoolerF::
# 71 "data/maps/Route2_2/scripts.pory"
	trainerbattle_single TRAINER_ICHIME, Route2_Ichime_Intro, Route2_Ichime_Defeated
# 72 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_PreschoolerF_Text_0
# 73 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_PreschoolerF_Text_1
# 75 "data/maps/Route2_2/scripts.pory"
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
	.string "though?\p"
	.string "They seem to be taking care of this\n"
	.string "little garden.$"

Route2_2_Eventscript_Maniac_Text_0:
# 47 "data/maps/Route2_2/scripts.pory"
	.string "Wakamu$"

Route2_2_Eventscript_Maniac_Text_1:
# 48 "data/maps/Route2_2/scripts.pory"
	.string "What do you mean scalper?\n"
	.string "I'm a legit fan!$"

Route2_2_Eventscript_NinjaBoy_Text_0:
# 64 "data/maps/Route2_2/scripts.pory"
	.string "Benkichi$"

Route2_2_Eventscript_NinjaBoy_Text_1:
# 65 "data/maps/Route2_2/scripts.pory"
	.string "Thank you for the cards!$"

Route2_2_Eventscript_PreschoolerF_Text_0:
# 72 "data/maps/Route2_2/scripts.pory"
	.string "Ichime$"

Route2_2_Eventscript_PreschoolerF_Text_1:
# 73 "data/maps/Route2_2/scripts.pory"
	.string "Thank you!!\n"
	.string "The cards are so cute!$"

Route2_Wakamu_Intro::
# 52 "data/maps/Route2_2/scripts.pory"
	.string "Hehehe, I lined up early and bought\n"
	.string "all the Pokémon TCG packs in store.\p"
	.string "You gotta see the face of the kids\n"
	.string "behind me ahaha.\p"
	.string "{CREATE MUGSHOT_S EMOTE_SERIOUS}... Damned scalper.$"

Route2_Wakamu_Defeated::
# 58 "data/maps/Route2_2/scripts.pory"
	.string "Hey! Don't touch my cards!\n"
	.string "Nooooo!$"

Route2_Benkichi_Intro::
# 79 "data/maps/Route2_2/scripts.pory"
	.string "That man over there bought all of the\n"
	.string "cards in the store...$"

Route2_Benkichi_Defeated::
# 83 "data/maps/Route2_2/scripts.pory"
	.string "Wait, Ichime, look at their hands!$"

Route2_Ichime_Intro::
# 87 "data/maps/Route2_2/scripts.pory"
	.string "We're so sad, can you do a battle with\n"
	.string "us?\p"
	.string "{CREATE MUGSHOT_A EMOTE_SURPRISED}Huh? Wait, we have-$"

Route2_Ichime_Defeated::
# 92 "data/maps/Route2_2/scripts.pory"
	.string "Woah! Those are Pokémon cards!\n"
	.string "You're giving them to us?$"
