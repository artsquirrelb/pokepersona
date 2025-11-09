Route1_HiddenGrotto_MapScripts::
	.byte 0


Route1_HiddenGrotto_TaurosPaldeaAqua::
# 4 "data/maps/Route1_HiddenGrotto/scripts.pory"
	lock
# 5 "data/maps/Route1_HiddenGrotto/scripts.pory"
	playse SE_M_SNORE
# 6 "data/maps/Route1_HiddenGrotto/scripts.pory"
	applymovement 1, emoteasleep
# 7 "data/maps/Route1_HiddenGrotto/scripts.pory"
	waitmovement 0
# 8 "data/maps/Route1_HiddenGrotto/scripts.pory"
	delay 20
# 9 "data/maps/Route1_HiddenGrotto/scripts.pory"
	msgbox Route1_HiddenGrotto_TaurosPaldeaAqua_Text_0, MSGBOX_YESNO
# 10 "data/maps/Route1_HiddenGrotto/scripts.pory"
	closemessage
# 11 "data/maps/Route1_HiddenGrotto/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route1_HiddenGrotto_TaurosPaldeaAqua_2
# 16 "data/maps/Route1_HiddenGrotto/scripts.pory"
	delay 30
# 17 "data/maps/Route1_HiddenGrotto/scripts.pory"
	playse SE_FAILURE
# 18 "data/maps/Route1_HiddenGrotto/scripts.pory"
	applymovement 1, emoteangry
# 19 "data/maps/Route1_HiddenGrotto/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route1_HiddenGrotto/scripts.pory"
	faceplayer
# 21 "data/maps/Route1_HiddenGrotto/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_ge Route1_HiddenGrotto_TaurosPaldeaAqua_8
Route1_HiddenGrotto_TaurosPaldeaAqua_7:
# 22 "data/maps/Route1_HiddenGrotto/scripts.pory"
	startoverworldencounter 7
Route1_HiddenGrotto_TaurosPaldeaAqua_5:
# 23 "data/maps/Route1_HiddenGrotto/scripts.pory"
	setflag FLAG_DAILY_HIDDENGROTTO_ROUTE1
# 24 "data/maps/Route1_HiddenGrotto/scripts.pory"
	removeobject 1
Route1_HiddenGrotto_TaurosPaldeaAqua_1:
# 26 "data/maps/Route1_HiddenGrotto/scripts.pory"
	release
	end

Route1_HiddenGrotto_TaurosPaldeaAqua_2:
# 12 "data/maps/Route1_HiddenGrotto/scripts.pory"
	msgbox Route1_HiddenGrotto_TaurosPaldeaAqua_Text_1
# 13 "data/maps/Route1_HiddenGrotto/scripts.pory"
	closemessage
	goto Route1_HiddenGrotto_TaurosPaldeaAqua_1

Route1_HiddenGrotto_TaurosPaldeaAqua_6:
# 21 "data/maps/Route1_HiddenGrotto/scripts.pory"
	startoverworldencounter 12
	goto Route1_HiddenGrotto_TaurosPaldeaAqua_5

Route1_HiddenGrotto_TaurosPaldeaAqua_8:
# 21 "data/maps/Route1_HiddenGrotto/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 50
	goto_if_lt Route1_HiddenGrotto_TaurosPaldeaAqua_6
	goto Route1_HiddenGrotto_TaurosPaldeaAqua_7


Route1_HiddenGrotto_TaurosPaldeaAqua_Text_0:
# 9 "data/maps/Route1_HiddenGrotto/scripts.pory"
	.string "The Pokémon is sleeping. Wake it up?$"

Route1_HiddenGrotto_TaurosPaldeaAqua_Text_1:
# 12 "data/maps/Route1_HiddenGrotto/scripts.pory"
	.string "You left the Pokémon alone.$"
