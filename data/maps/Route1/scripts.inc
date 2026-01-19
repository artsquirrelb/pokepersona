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
	end


Route1_Eventscript_Touma::
# 16 "data/maps/Route1/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Route1_Eventscript_Touma_2
# 20 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_TOUMA, Route1_ToumaIntro, Route1_ToumaDefeated
Route1_Eventscript_Touma_1:
# 22 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Touma_Text_0
# 23 "data/maps/Route1/scripts.pory"
	faceplayer
# 24 "data/maps/Route1/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route1_Eventscript_Touma_6
# 30 "data/maps/Route1/scripts.pory"
	msgbox Route1_ToumaPostBattle
# 31 "data/maps/Route1/scripts.pory"
	closemessage
# 32 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Touma_Text_0
# 33 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_Touma_Text_2
# 34 "data/maps/Route1/scripts.pory"
	closemessage
# 35 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 37 "data/maps/Route1/scripts.pory"
	release
	end

Route1_Eventscript_Touma_2:
# 17 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_TOUMA, Route1_ToumaIntro_A, Route1_ToumaDefeated
	goto Route1_Eventscript_Touma_1

Route1_Eventscript_Touma_6:
# 25 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_Touma_Text_1
# 26 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_Eventscript_Miyu::
# 61 "data/maps/Route1/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Route1_Eventscript_Miyu_2
# 65 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_MIYU, Route1_MiyuIntro, Route1_MiyuIntro_A
Route1_Eventscript_Miyu_1:
# 67 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Miyu_Text_0
# 68 "data/maps/Route1/scripts.pory"
	faceplayer
# 69 "data/maps/Route1/scripts.pory"
	msgbox Route1_MiyuPostBattle
# 70 "data/maps/Route1/scripts.pory"
	closemessage
	end

Route1_Eventscript_Miyu_2:
# 62 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_MIYU, Route1_MiyuIntro_A, Route1_MiyuDefeated
	goto Route1_Eventscript_Miyu_1


Route1_Eventscript_RouteSign::
# 93 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_RouteSign_Text_0
# 94 "data/maps/Route1/scripts.pory"
	closemessage
	return


Route1_Eventscript_DirectionSign::
# 98 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_DirectionSign_Text_0
# 100 "data/maps/Route1/scripts.pory"
	closemessage
	return


Route1_Eventscript_HiddenGrotto::
# 104 "data/maps/Route1/scripts.pory"
	lock
# 105 "data/maps/Route1/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 106 "data/maps/Route1/scripts.pory"
	closemessage
# 107 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_Eventscript_HiddenGrotto_2
Route1_Eventscript_HiddenGrotto_1:
# 110 "data/maps/Route1/scripts.pory"
	release
	end

Route1_Eventscript_HiddenGrotto_2:
# 108 "data/maps/Route1/scripts.pory"
	warp MAP_ROUTE1_HIDDEN_GROTTO, 0
	goto Route1_Eventscript_HiddenGrotto_1


Route1_Eventscript_Twins::
# 119 "data/maps/Route1/scripts.pory"
	lock
# 120 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Eventscript_Twins_Movement_0
# 121 "data/maps/Route1/scripts.pory"
	applymovement 6, Route1_Eventscript_Twins_Movement_0
# 122 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Twins_Text_0
# 124 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_Twins_Text_1
# 126 "data/maps/Route1/scripts.pory"
	closemessage
# 127 "data/maps/Route1/scripts.pory"
	release
	end


Route1_Eventscript_Teddiursa::
# 132 "data/maps/Route1/scripts.pory"
	lock
# 133 "data/maps/Route1/scripts.pory"
	faceplayer
# 134 "data/maps/Route1/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_gt Route1_Eventscript_Teddiursa_2
# 134 "data/maps/Route1/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Route1_Eventscript_Teddiursa_2
# 140 "data/maps/Route1/scripts.pory"
	startoverworldencounter 7
Route1_Eventscript_Teddiursa_1:
# 142 "data/maps/Route1/scripts.pory"
	removeobject 12
# 143 "data/maps/Route1/scripts.pory"
	setflag FLAG_TEMP_1
# 144 "data/maps/Route1/scripts.pory"
	release
	end

Route1_Eventscript_Teddiursa_2:
# 136 "data/maps/Route1/scripts.pory"
	startoverworldencounter 12
	goto Route1_Eventscript_Teddiursa_1


Route1_Eventscript_Ichigo::
# 149 "data/maps/Route1/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Route1_Eventscript_Ichigo_2
# 153 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ICHIGO, Route1_IchigoIntro, Route1_IchigoDefeated
Route1_Eventscript_Ichigo_1:
# 155 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Ichigo_Text_0
# 156 "data/maps/Route1/scripts.pory"
	faceplayer
# 157 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_Ichigo_Text_1
# 159 "data/maps/Route1/scripts.pory"
	closemessage
	end

Route1_Eventscript_Ichigo_2:
# 150 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ICHIGO, Route1_IchigoIntro_A, Route1_IchigoDefeated
	goto Route1_Eventscript_Ichigo_1


# 120 "data/maps/Route1/scripts.pory"
Route1_Eventscript_Twins_Movement_0:
# 120 "data/maps/Route1/scripts.pory"
	face_player
	step_end

Route1_Eventscript_NotTheWayToMeadow_Text_0:
# 9 "data/maps/Route1/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(If I remember correctly, Sunshine\n"
	.string "Meadow is in the north of Route 2.)$"

Route1_Eventscript_Touma_Text_0:
# 22 "data/maps/Route1/scripts.pory"
	.string "Touma$"

Route1_Eventscript_Touma_Text_1:
# 25 "data/maps/Route1/scripts.pory"
	.string "I'll definitely become a Pokémon\n"
	.string "researcher!$"

Route1_Eventscript_Touma_Text_2:
# 33 "data/maps/Route1/scripts.pory"
	.string "{DESTROY_MUGSHOT}Ma-Marvelous? You think so? Thanks!!$"

Route1_Eventscript_Miyu_Text_0:
# 67 "data/maps/Route1/scripts.pory"
	.string "Miyu$"

Route1_Eventscript_RouteSign_Text_0:
# 93 "data/maps/Route1/scripts.pory"
	.string "Route 1.$"

Route1_Eventscript_DirectionSign_Text_0:
# 98 "data/maps/Route1/scripts.pory"
	.string "Route 2 {UP_ARROW}\n"
	.string "Kirijo's Mansion {DOWN_ARROW}$"

Route1_Eventscript_Twins_Text_0:
# 123 "data/maps/Route1/scripts.pory"
	.string "Mio & Miu$"

Route1_Eventscript_Twins_Text_1:
# 124 "data/maps/Route1/scripts.pory"
	.string "Shhh! We heard a Pokémon's cry on that\n"
	.string "narrow path over there.\p"
	.string "Our mother said we shouldn't be\n"
	.string "interacting with wild Pokémon so we'll\l"
	.string "stay here.$"

Route1_Eventscript_Ichigo_Text_0:
# 155 "data/maps/Route1/scripts.pory"
	.string "Ichigo$"

Route1_Eventscript_Ichigo_Text_1:
# 157 "data/maps/Route1/scripts.pory"
	.string "By the way, there's a nice guy who's\n"
	.string "giving out Old Rods in Coralport.\p"
	.string "That's how I got my Buizel.$"

Route1_ToumaIntro::
# 41 "data/maps/Route1/scripts.pory"
	.string "Um, can you please battle me...?\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}(Sigh... I really don't have time for\n"
	.string "this.)$"

Route1_ToumaDefeated::
# 46 "data/maps/Route1/scripts.pory"
	.string "Aw... I knew that you looked strong.$"

Route1_ToumaPostBattle::
# 50 "data/maps/Route1/scripts.pory"
	.string "I don't do very well in my Pokémon\n"
	.string "battle classes.\p"
	.string "But it's okay because I want to become\n"
	.string "a researcher instead of a trainer.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}That is a marvelous personal goal. I\n"
	.string "wish you the best of luck.$"

Route1_ToumaIntro_A::
# 56 "data/maps/Route1/scripts.pory"
	.string "Um, do you want a battle...?$"

Route1_MiyuIntro::
# 74 "data/maps/Route1/scripts.pory"
	.string "Let's battle!\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SURPRISED}Huh? What- wait-$"

Route1_MiyuDefeated::
# 79 "data/maps/Route1/scripts.pory"
	.string "Now I have to visit a Pokémon Center...$"

Route1_MiyuPostBattle::
# 83 "data/maps/Route1/scripts.pory"
	.string "If only I found that hidden grotto.$"

Route1_MiyuIntro_A::
# 87 "data/maps/Route1/scripts.pory"
	.string "I heard there's a hidden grotto on this\n"
	.string "route. Have you seen it?$"

Eventscript_HiddenGrotto::
# 114 "data/maps/Route1/scripts.pory"
	.string "There's a narrow path leading further\n"
	.string "to the woods. Do you want to proceed?$"

Route1_IchigoIntro::
# 163 "data/maps/Route1/scripts.pory"
	.string "Hehe, you can't escape me!\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}(... Let's just get this over with.)$"

Route1_IchigoIntro_A::
# 168 "data/maps/Route1/scripts.pory"
	.string "You can't escape me!$"

Route1_IchigoDefeated::
# 172 "data/maps/Route1/scripts.pory"
	.string "Aw, maybe having 2 water Pokémon in a\n"
	.string "team isn't the best choice.$"
