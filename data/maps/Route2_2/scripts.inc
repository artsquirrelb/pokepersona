Route2_2_MapScripts::
# 2 "data/maps/Route2_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route2_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route2_2/scripts.pory"
	goto_if_set TRAINER_FLAGS_START + TRAINER_WAKAMU, Route2_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route2_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Route2_2/scripts.pory"
	setobjectmovementtype WAKAMU, MOVEMENT_TYPE_FACE_LEFT
	return


Route2_2_Eventscript_BerrySign::
# 10 "data/maps/Route2_2/scripts.pory"
	lock
# 11 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_BerrySign_Text_0
# 14 "data/maps/Route2_2/scripts.pory"
	closemessage
# 15 "data/maps/Route2_2/scripts.pory"
	release
	end


Route2_2_Eventscript_DirectionSign::
# 20 "data/maps/Route2_2/scripts.pory"
	lock
# 21 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_DirectionSign_Text_0
# 23 "data/maps/Route2_2/scripts.pory"
	closemessage
# 24 "data/maps/Route2_2/scripts.pory"
	release
	end


Route2_2_Eventscript_Pansage::
# 29 "data/maps/Route2_2/scripts.pory"
	lockall
# 30 "data/maps/Route2_2/scripts.pory"
	startoverworldencounter 12
# 31 "data/maps/Route2_2/scripts.pory"
	setflag FLAG_TEMP_1
# 32 "data/maps/Route2_2/scripts.pory"
	removeobject VAR_LAST_TALKED
# 33 "data/maps/Route2_2/scripts.pory"
	releaseall
	end


Route2_2_Eventscript_Man::
# 38 "data/maps/Route2_2/scripts.pory"
	lock
# 39 "data/maps/Route2_2/scripts.pory"
	faceplayer
# 40 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_Man_Text_0
# 41 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_Man_Text_1
# 45 "data/maps/Route2_2/scripts.pory"
	release
	end


Route2_2_Eventscript_Maniac::
# 50 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_Maniac_Text_0
# 51 "data/maps/Route2_2/scripts.pory"
	goto_if_unset TRAINER_FLAGS_START + TRAINER_WAKAMU, Route2_2_Eventscript_Maniac_2
# 70 "data/maps/Route2_2/scripts.pory"
	faceplayer
# 71 "data/maps/Route2_2/scripts.pory"
	doemote WAKAMU, E_ANGRY
# 72 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_Wakamu_Outro
Route2_2_Eventscript_Maniac_1:
# 74 "data/maps/Route2_2/scripts.pory"
	release
	end

Route2_2_Eventscript_Maniac_2:
# 53 "data/maps/Route2_2/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route2_2_Eventscript_Maniac_5
# 65 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_Wakamu_Intro
	goto Route2_2_Eventscript_Maniac_1

Route2_2_Eventscript_Maniac_5:
# 55 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_Wakamu_Intro
# 56 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_Maniac_Text_1
# 57 "data/maps/Route2_2/scripts.pory"
	closemessage
# 58 "data/maps/Route2_2/scripts.pory"
	faceplayer
# 59 "data/maps/Route2_2/scripts.pory"
	doemote VAR_LAST_TALKED, 0
# 60 "data/maps/Route2_2/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKAMU, Route2_Wakamu_Defeated
# 61 "data/maps/Route2_2/scripts.pory"
	doemote WAKAMU, E_ANGRY
# 62 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_Wakamu_Outro
	goto Route2_2_Eventscript_Maniac_1


Route2_2_Eventscript_NinjaBoy::
# 93 "data/maps/Route2_2/scripts.pory"
	turnobject BENKICHI, DIR_SOUTH
# 94 "data/maps/Route2_2/scripts.pory"
	turnobject ICHIME, DIR_SOUTH
# 95 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_NinjaBoy_Text_0
# 96 "data/maps/Route2_2/scripts.pory"
	goto_if_unset TRAINER_FLAGS_START + TRAINER_WAKAMU, Route2_2_Eventscript_NinjaBoy_2
# 107 "data/maps/Route2_2/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route2_2_Eventscript_NinjaBoy_6
Route2_2_Eventscript_NinjaBoy_4:
# 123 "data/maps/Route2_2/scripts.pory"
	stepinplace BENKICHI, DIR_SOUTH
# 124 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_Benkichi_Outro
# 125 "data/maps/Route2_2/scripts.pory"
	stepinplace ICHIME, DIR_SOUTH
# 126 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_NinjaBoy_Text_1
# 127 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_Ichime_Outro
Route2_2_Eventscript_NinjaBoy_1:
# 129 "data/maps/Route2_2/scripts.pory"
	release
	end

Route2_2_Eventscript_NinjaBoy_2:
# 98 "data/maps/Route2_2/scripts.pory"
	setflag FLAG_TEMP_1
# 99 "data/maps/Route2_2/scripts.pory"
	stepinplace BENKICHI, DIR_SOUTH
# 100 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_Benkichi_Intro
# 101 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_NinjaBoy_Text_1
# 102 "data/maps/Route2_2/scripts.pory"
	stepinplace ICHIME, DIR_SOUTH
# 103 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_Ichime_Intro
# 104 "data/maps/Route2_2/scripts.pory"
	release
	end

Route2_2_Eventscript_NinjaBoy_3:
# 109 "data/maps/Route2_2/scripts.pory"
	stepinplace BENKICHI, DIR_SOUTH
# 110 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_NinjaBoy_Text_2
# 111 "data/maps/Route2_2/scripts.pory"
	stepinplace ICHIME, DIR_SOUTH
# 112 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_NinjaBoy_Text_1
# 113 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_2_Eventscript_NinjaBoy_Text_3
# 114 "data/maps/Route2_2/scripts.pory"
	trainerbattle_two_trainers TRAINER_BENKICHI, Route2_Benkichi_Defeated, TRAINER_ICHIME, Route2_Ichime_Defeated
# 115 "data/maps/Route2_2/scripts.pory"
	stepinplace BENKICHI, DIR_SOUTH
# 116 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_NinjaBoy_Text_0
# 117 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_Benkichi_Outro
# 118 "data/maps/Route2_2/scripts.pory"
	stepinplace ICHIME, DIR_SOUTH
# 119 "data/maps/Route2_2/scripts.pory"
	setspeaker Route2_2_Eventscript_NinjaBoy_Text_1
# 120 "data/maps/Route2_2/scripts.pory"
	msgbox Route2_Ichime_Outro
	goto Route2_2_Eventscript_NinjaBoy_1

Route2_2_Eventscript_NinjaBoy_5:
# 107 "data/maps/Route2_2/scripts.pory"
	goto_if_unset TRAINER_FLAGS_START + TRAINER_BENKICHI, Route2_2_Eventscript_NinjaBoy_3
	goto Route2_2_Eventscript_NinjaBoy_4

Route2_2_Eventscript_NinjaBoy_6:
# 107 "data/maps/Route2_2/scripts.pory"
	goto_if_set TRAINER_FLAGS_START + TRAINER_WAKAMU, Route2_2_Eventscript_NinjaBoy_5
	goto Route2_2_Eventscript_NinjaBoy_4


Route2_2_Eventscript_BerrySign_Text_0:
# 11 "data/maps/Route2_2/scripts.pory"
	.string "If you pick the berries, please plant\n"
	.string "back some!\p"
	.string "Let's spread the greens!\n"
	.string "{CLEAR_TO 150}-BRG$"

Route2_2_Eventscript_DirectionSign_Text_0:
# 21 "data/maps/Route2_2/scripts.pory"
	.string "Coralport {LEFT_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}$"

Route2_2_Eventscript_Man_Text_0:
# 40 "data/maps/Route2_2/scripts.pory"
	.string "Fusahiro$"

Route2_2_Eventscript_Man_Text_1:
# 41 "data/maps/Route2_2/scripts.pory"
	.string "If you're wondering, no. I'm not BGR.\p"
	.string "I'm simply here to enjoy the peaceful\n"
	.string "evening.\p"
	.string "Who might this BRG character be,\n"
	.string "though?\p"
	.string "They seem to be taking care of this\n"
	.string "little garden.$"

Route2_2_Eventscript_Maniac_Text_0:
# 50 "data/maps/Route2_2/scripts.pory"
	.string "Wakamu$"

Route2_2_Eventscript_Maniac_Text_1:
# 56 "data/maps/Route2_2/scripts.pory"
	.string "{CREATE MUGSHOT_S EMOTE_SERIOUS}... Damned scalper.$"

Route2_2_Eventscript_NinjaBoy_Text_0:
# 95 "data/maps/Route2_2/scripts.pory"
	.string "Benkichi$"

Route2_2_Eventscript_NinjaBoy_Text_1:
# 101 "data/maps/Route2_2/scripts.pory"
	.string "Ichime$"

Route2_2_Eventscript_NinjaBoy_Text_2:
# 110 "data/maps/Route2_2/scripts.pory"
	.string "Woah! You defeated that guy?$"

Route2_2_Eventscript_NinjaBoy_Text_3:
# 113 "data/maps/Route2_2/scripts.pory"
	.string "Please battle us too!$"

Route2_Wakamu_Intro::
# 78 "data/maps/Route2_2/scripts.pory"
	.string "Hehehe, I lined up early and bought all\n"
	.string "the Pokémon TCG packs in store.\p"
	.string "These are gonna sell so well.$"

Route2_Wakamu_Defeated::
# 83 "data/maps/Route2_2/scripts.pory"
	.string "Hey! Don't touch my cards!\n"
	.string "Nooooo!$"

Route2_Wakamu_Outro::
# 87 "data/maps/Route2_2/scripts.pory"
	.string "What do you mean scalper?\n"
	.string "I'm a legit fan! Give back my cards!!$"

Route2_Benkichi_Intro::
# 133 "data/maps/Route2_2/scripts.pory"
	.string "That man over there bought all of the\n"
	.string "cards in the store...$"

Route2_Benkichi_Defeated::
# 137 "data/maps/Route2_2/scripts.pory"
	.string "Woah! Those are Pokémon cards!$"

Route2_Benkichi_Outro::
# 141 "data/maps/Route2_2/scripts.pory"
	.string "Thank you for the cards!$"

Route2_Ichime_Intro::
# 145 "data/maps/Route2_2/scripts.pory"
	.string "We're so sad...$"

Route2_Ichime_Defeated::
# 149 "data/maps/Route2_2/scripts.pory"
	.string "You're giving them to us?$"

Route2_Ichime_Outro::
# 153 "data/maps/Route2_2/scripts.pory"
	.string "Thank you!!\n"
	.string "The cards are so cute!$"
