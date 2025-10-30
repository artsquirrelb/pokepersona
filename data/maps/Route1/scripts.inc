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


Route1_Eventscript_Touma::
# 15 "data/maps/Route1/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 44
	goto_if_ge Route1_Eventscript_Touma_2
# 19 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_TOUMA, Route1_ToumaIntro, Route1_ToumaDefeated
Route1_Eventscript_Touma_1:
# 21 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Touma_Text_0
# 22 "data/maps/Route1/scripts.pory"
	faceplayer
# 23 "data/maps/Route1/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route1_Eventscript_Touma_6
# 29 "data/maps/Route1/scripts.pory"
	msgbox Route1_ToumaPostBattle
# 30 "data/maps/Route1/scripts.pory"
	closemessage
# 31 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Touma_Text_0
# 32 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_Touma_Text_2
# 33 "data/maps/Route1/scripts.pory"
	closemessage
# 34 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_0, 1
	end

Route1_Eventscript_Touma_2:
# 16 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_TOUMA_2, Route1_ToumaIntro, Route1_ToumaDefeated
	goto Route1_Eventscript_Touma_1

Route1_Eventscript_Touma_6:
# 24 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_Touma_Text_1
# 25 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_Eventscript_Miyu::
# 54 "data/maps/Route1/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 44
	goto_if_ge Route1_Eventscript_Miyu_2
# 58 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_MIYU, Route1_MiyuIntro, Route1_MiyuDefeated
Route1_Eventscript_Miyu_1:
# 60 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Miyu_Text_0
# 61 "data/maps/Route1/scripts.pory"
	faceplayer
# 62 "data/maps/Route1/scripts.pory"
	msgbox Route1_MiyuPostBattle
# 63 "data/maps/Route1/scripts.pory"
	closemessage
	end

Route1_Eventscript_Miyu_2:
# 55 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_MIYU_2, Route1_MiyuIntro, Route1_MiyuDefeated
	goto Route1_Eventscript_Miyu_1


Route1_Eventscript_RouteSign::
# 80 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_RouteSign_Text_0
# 81 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_Eventscript_DirectionSign::
# 86 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_DirectionSign_Text_0
# 88 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_Eventscript_HiddenGrotto::
# 93 "data/maps/Route1/scripts.pory"
	lock
# 94 "data/maps/Route1/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 95 "data/maps/Route1/scripts.pory"
	closemessage
# 96 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_Eventscript_HiddenGrotto_2
Route1_Eventscript_HiddenGrotto_1:
# 99 "data/maps/Route1/scripts.pory"
	release
	end

Route1_Eventscript_HiddenGrotto_2:
# 97 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_HiddenGrotto_Text_0
	goto Route1_Eventscript_HiddenGrotto_1


Route1_Eventscript_Twins::
# 108 "data/maps/Route1/scripts.pory"
	lock
# 109 "data/maps/Route1/scripts.pory"
	faceplayer
# 110 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_Twins_Text_0
# 112 "data/maps/Route1/scripts.pory"
	closemessage
# 113 "data/maps/Route1/scripts.pory"
	release
	end


Route1_Eventscript_NotTheWayToMeadow_Text_0:
# 9 "data/maps/Route1/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(If I remember correctly, Sunshine\n"
	.string "Meadow is in the north of Route 2.)$"

Route1_Eventscript_Touma_Text_0:
# 21 "data/maps/Route1/scripts.pory"
	.string "Touma$"

Route1_Eventscript_Touma_Text_1:
# 24 "data/maps/Route1/scripts.pory"
	.string "I'll definitely become a Pokémon\n"
	.string "researcher!$"

Route1_Eventscript_Touma_Text_2:
# 32 "data/maps/Route1/scripts.pory"
	.string "{DESTROY_MUGSHOT}Ma-Marvelous? You think so? Thanks!!$"

Route1_Eventscript_Miyu_Text_0:
# 60 "data/maps/Route1/scripts.pory"
	.string "Miyu$"

Route1_Eventscript_RouteSign_Text_0:
# 80 "data/maps/Route1/scripts.pory"
	.string "Route 1.$"

Route1_Eventscript_DirectionSign_Text_0:
# 86 "data/maps/Route1/scripts.pory"
	.string "Route 2 {UP_ARROW}\n"
	.string "Kirijo's Mansion {DOWN_ARROW}$"

Route1_Eventscript_HiddenGrotto_Text_0:
# 97 "data/maps/Route1/scripts.pory"
	.string "No map yet$"

Route1_Eventscript_Twins_Text_0:
# 110 "data/maps/Route1/scripts.pory"
	.string "Shhh! We heard Pokémon's cry in that\n"
	.string "narrow path over there.\p"
	.string "Our mother said we shouldn't be\n"
	.string "interacting with wild Pokémon so we'll\l"
	.string "stay here.$"

Route1_ToumaIntro::
# 39 "data/maps/Route1/scripts.pory"
	.string "Um, you want a battle? Okay...$"

Route1_ToumaDefeated::
# 43 "data/maps/Route1/scripts.pory"
	.string "Aw... I knew that you looked strong.$"

Route1_ToumaPostBattle::
# 47 "data/maps/Route1/scripts.pory"
	.string "I don't do very well in my Pokémon\n"
	.string "battle classes.\p"
	.string "But it's okay because I want to become\n"
	.string "a researcher instead of a trainer.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That is a marvelous personal goal. I\n"
	.string "wish you the best of luck.$"

Route1_MiyuIntro::
# 67 "data/maps/Route1/scripts.pory"
	.string "I heard there's a hidden grotto on this\n"
	.string "route. Have you seen it?$"

Route1_MiyuDefeated::
# 71 "data/maps/Route1/scripts.pory"
	.string "Now I have to visit a Pokémon Center...$"

Route1_MiyuPostBattle::
# 75 "data/maps/Route1/scripts.pory"
	.string "If only I found that hidden grotto.$"

Eventscript_HiddenGrotto::
# 103 "data/maps/Route1/scripts.pory"
	.string "There's a narrow path leading further\n"
	.string "to the woods. Do you want to proceed?$"
