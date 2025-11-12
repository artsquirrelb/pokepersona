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
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Route1_Eventscript_Touma_2
# 18 "data/maps/Route1/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_lt Route1_Eventscript_Touma_3
Route1_Eventscript_Touma_1:
# 21 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Touma_Text_0
# 22 "data/maps/Route1/scripts.pory"
	faceplayer
# 23 "data/maps/Route1/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route1_Eventscript_Touma_7
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
	trainerbattle_single TRAINER_TOUMA_2, Route1_ToumaIntro_A, Route1_ToumaDefeated
	goto Route1_Eventscript_Touma_1

Route1_Eventscript_Touma_3:
# 19 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_TOUMA, Route1_ToumaIntro, Route1_ToumaDefeated
	goto Route1_Eventscript_Touma_1

Route1_Eventscript_Touma_7:
# 24 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_Touma_Text_1
# 25 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_Eventscript_Miyu::
# 59 "data/maps/Route1/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Route1_Eventscript_Miyu_2
# 62 "data/maps/Route1/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_lt Route1_Eventscript_Miyu_3
# 66 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_MIYU_2, Route1_MiyuIntro, Route1_MiyuDefeated
Route1_Eventscript_Miyu_1:
# 69 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Miyu_Text_0
# 70 "data/maps/Route1/scripts.pory"
	faceplayer
# 71 "data/maps/Route1/scripts.pory"
	msgbox Route1_MiyuPostBattle
# 72 "data/maps/Route1/scripts.pory"
	closemessage
	end

Route1_Eventscript_Miyu_2:
# 60 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_MIYU_2, Route1_MiyuIntro_A, Route1_MiyuDefeated
	goto Route1_Eventscript_Miyu_1

Route1_Eventscript_Miyu_3:
# 63 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_MIYU, Route1_MiyuIntro, Route1_MiyuIntro_A
	goto Route1_Eventscript_Miyu_1


Route1_Eventscript_RouteSign::
# 95 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_RouteSign_Text_0
# 96 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_Eventscript_DirectionSign::
# 101 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_DirectionSign_Text_0
# 103 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_Eventscript_HiddenGrotto::
# 108 "data/maps/Route1/scripts.pory"
	lock
# 109 "data/maps/Route1/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 110 "data/maps/Route1/scripts.pory"
	closemessage
# 111 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_Eventscript_HiddenGrotto_2
Route1_Eventscript_HiddenGrotto_1:
# 114 "data/maps/Route1/scripts.pory"
	release
	end

Route1_Eventscript_HiddenGrotto_2:
# 112 "data/maps/Route1/scripts.pory"
	warp MAP_ROUTE1_HIDDEN_GROTTO, 0
	goto Route1_Eventscript_HiddenGrotto_1


Route1_Eventscript_Twins::
# 123 "data/maps/Route1/scripts.pory"
	lock
# 124 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Eventscript_Twins_Movement_0
# 125 "data/maps/Route1/scripts.pory"
	applymovement 6, Route1_Eventscript_Twins_Movement_0
# 126 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Twins_Text_0
# 128 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_Twins_Text_1
# 130 "data/maps/Route1/scripts.pory"
	closemessage
# 131 "data/maps/Route1/scripts.pory"
	release
	end


Route1_Eventscript_Teddiursa::
# 136 "data/maps/Route1/scripts.pory"
	lock
# 137 "data/maps/Route1/scripts.pory"
	faceplayer
# 138 "data/maps/Route1/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_gt Route1_Eventscript_Teddiursa_2
# 138 "data/maps/Route1/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Route1_Eventscript_Teddiursa_2
# 144 "data/maps/Route1/scripts.pory"
	startoverworldencounter 7
Route1_Eventscript_Teddiursa_1:
# 146 "data/maps/Route1/scripts.pory"
	removeobject 12
# 147 "data/maps/Route1/scripts.pory"
	setflag FLAG_TEMP_1
# 148 "data/maps/Route1/scripts.pory"
	release
	end

Route1_Eventscript_Teddiursa_2:
# 140 "data/maps/Route1/scripts.pory"
	startoverworldencounter 12
	goto Route1_Eventscript_Teddiursa_1


Route1_Eventscript_Ichigo::
# 153 "data/maps/Route1/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Route1_Eventscript_Ichigo_2
# 156 "data/maps/Route1/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_lt Route1_Eventscript_Ichigo_3
# 160 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_MIYU_2, Route1_IchigoIntro_A, Route1_IchigoDefeated
Route1_Eventscript_Ichigo_1:
# 163 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Eventscript_Ichigo_Text_0
# 164 "data/maps/Route1/scripts.pory"
	faceplayer
# 165 "data/maps/Route1/scripts.pory"
	msgbox Route1_Eventscript_Ichigo_Text_1
# 167 "data/maps/Route1/scripts.pory"
	closemessage
	end

Route1_Eventscript_Ichigo_2:
# 154 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_MIYU_2, Route1_IchigoIntro_A, Route1_IchigoDefeated
	goto Route1_Eventscript_Ichigo_1

Route1_Eventscript_Ichigo_3:
# 157 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_MIYU, Route1_IchigoIntro, Route1_IchigoDefeated
	goto Route1_Eventscript_Ichigo_1


# 124 "data/maps/Route1/scripts.pory"
Route1_Eventscript_Twins_Movement_0:
# 124 "data/maps/Route1/scripts.pory"
	face_player
	step_end

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
# 69 "data/maps/Route1/scripts.pory"
	.string "Miyu$"

Route1_Eventscript_RouteSign_Text_0:
# 95 "data/maps/Route1/scripts.pory"
	.string "Route 1.$"

Route1_Eventscript_DirectionSign_Text_0:
# 101 "data/maps/Route1/scripts.pory"
	.string "Route 2 {UP_ARROW}\n"
	.string "Kirijo's Mansion {DOWN_ARROW}$"

Route1_Eventscript_Twins_Text_0:
# 127 "data/maps/Route1/scripts.pory"
	.string "Mio & Miu$"

Route1_Eventscript_Twins_Text_1:
# 128 "data/maps/Route1/scripts.pory"
	.string "Shhh! We heard a Pokémon's cry on that\n"
	.string "narrow path over there.\p"
	.string "Our mother said we shouldn't be\n"
	.string "interacting with wild Pokémon so we'll\l"
	.string "stay here.$"

Route1_Eventscript_Ichigo_Text_0:
# 163 "data/maps/Route1/scripts.pory"
	.string "Ichigo$"

Route1_Eventscript_Ichigo_Text_1:
# 165 "data/maps/Route1/scripts.pory"
	.string "By the way, there's a nice guy who's\n"
	.string "giving out Old Rods in Coralport.\p"
	.string "That's how I got my Buizel.$"

Route1_ToumaIntro::
# 39 "data/maps/Route1/scripts.pory"
	.string "Um, can you please battle me...?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Sigh... I really don't have time for\n"
	.string "this.)$"

Route1_ToumaDefeated::
# 44 "data/maps/Route1/scripts.pory"
	.string "Aw... I knew that you looked strong.$"

Route1_ToumaPostBattle::
# 48 "data/maps/Route1/scripts.pory"
	.string "I don't do very well in my Pokémon\n"
	.string "battle classes.\p"
	.string "But it's okay because I want to become\n"
	.string "a researcher instead of a trainer.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That is a marvelous personal goal. I\n"
	.string "wish you the best of luck.$"

Route1_ToumaIntro_A::
# 54 "data/maps/Route1/scripts.pory"
	.string "Um, do you want a battle...?$"

Route1_MiyuIntro::
# 76 "data/maps/Route1/scripts.pory"
	.string "Let's battle!\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}Huh? What- wait-$"

Route1_MiyuDefeated::
# 81 "data/maps/Route1/scripts.pory"
	.string "Now I have to visit a Pokémon Center...$"

Route1_MiyuPostBattle::
# 85 "data/maps/Route1/scripts.pory"
	.string "If only I found that hidden grotto.$"

Route1_MiyuIntro_A::
# 89 "data/maps/Route1/scripts.pory"
	.string "I heard there's a hidden grotto on this\n"
	.string "route. Have you seen it?$"

Eventscript_HiddenGrotto::
# 118 "data/maps/Route1/scripts.pory"
	.string "There's a narrow path leading further\n"
	.string "to the woods. Do you want to proceed?$"

Route1_IchigoIntro::
# 171 "data/maps/Route1/scripts.pory"
	.string "Hehe, you can't escape me!\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(... Let's just get this over with.)$"

Route1_IchigoIntro_A::
# 176 "data/maps/Route1/scripts.pory"
	.string "You can't escape me!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Well, I'm not intended to!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Sigh... Aki...$"

Route1_IchigoDefeated::
# 182 "data/maps/Route1/scripts.pory"
	.string "Aw, maybe having 2 water Pokémon in a\n"
	.string "team isn't the best choice.$"
