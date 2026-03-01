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
	call StartTaurosBattle
# 22 "data/maps/Route1_HiddenGrotto/scripts.pory"
	call PostHiddenGrottoBattle
Route1_HiddenGrotto_TaurosPaldeaAqua_1:
# 24 "data/maps/Route1_HiddenGrotto/scripts.pory"
	release
	end

Route1_HiddenGrotto_TaurosPaldeaAqua_2:
# 12 "data/maps/Route1_HiddenGrotto/scripts.pory"
	msgbox Route1_HiddenGrotto_TaurosPaldeaAqua_Text_1
# 13 "data/maps/Route1_HiddenGrotto/scripts.pory"
	closemessage
	goto Route1_HiddenGrotto_TaurosPaldeaAqua_1


PostHiddenGrottoBattle::
# 29 "data/maps/Route1_HiddenGrotto/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 30 "data/maps/Route1_HiddenGrotto/scripts.pory"
	removeobject VAR_LAST_TALKED
# 31 "data/maps/Route1_HiddenGrotto/scripts.pory"
	playse SE_FLEE
# 32 "data/maps/Route1_HiddenGrotto/scripts.pory"
	waitse
# 33 "data/maps/Route1_HiddenGrotto/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 34 "data/maps/Route1_HiddenGrotto/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne PostHiddenGrottoBattle_1
	return

PostHiddenGrottoBattle_1:
# 36 "data/maps/Route1_HiddenGrotto/scripts.pory"
	msgbox PkmRunAway
	return


StartTaurosBattle::
# 45 "data/maps/Route1_HiddenGrotto/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 46 "data/maps/Route1_HiddenGrotto/scripts.pory"
	waitmoncry
# 47 "data/maps/Route1_HiddenGrotto/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_ge StartTaurosBattle_5
StartTaurosBattle_4:
# 47 "data/maps/Route1_HiddenGrotto/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_ge StartTaurosBattle_2
# 51 "data/maps/Route1_HiddenGrotto/scripts.pory"
	createmon 1, 0, SPECIES_TAUROS_PALDEA_AQUA, MON_LVL_SCALED, abilityNum = 0, atkIv = 31, move1 = MOVE_AQUA_JET, move2 = MOVE_TRAILBLAZE, move3 = MOVE_WORK_UP, move4 = MOVE_TAIL_WHIP
StartTaurosBattle_1:
# 53 "data/maps/Route1_HiddenGrotto/scripts.pory"
	dowildbattle
	return

StartTaurosBattle_2:
# 48 "data/maps/Route1_HiddenGrotto/scripts.pory"
	createmon 1, 0, SPECIES_TAUROS_PALDEA_AQUA, MON_LVL_SCALED, abilityNum = 0, atkIv = 31, move1 = MOVE_AQUA_JET, move2 = MOVE_TRAILBLAZE, move3 = MOVE_WORK_UP, move4 = MOVE_TAIL_WHIP
	goto StartTaurosBattle_1

StartTaurosBattle_5:
# 47 "data/maps/Route1_HiddenGrotto/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE < 50, 0
	goto_if_ne StartTaurosBattle_2
	goto StartTaurosBattle_4


Route1_HiddenGrotto_Chest::
# 57 "data/maps/Route1_HiddenGrotto/scripts.pory"
	goto_if_unset FLAG_DAILY_HIDDENGROTTO_ROUTE1, Route1_HiddenGrotto_Chest_7
Route1_HiddenGrotto_Chest_5:
# 81 "data/maps/Route1_HiddenGrotto/scripts.pory"
	goto_if_unset FLAG_DAILY_HIDDENGROTTO_ROUTE1, Route1_HiddenGrotto_Chest_4
Route1_HiddenGrotto_Chest_3:
# 86 "data/maps/Route1_HiddenGrotto/scripts.pory"
	goto Common_EventScript_FindItem
	return

Route1_HiddenGrotto_Chest_1:
# 59 "data/maps/Route1_HiddenGrotto/scripts.pory"
	doemote 1, 0
# 60 "data/maps/Route1_HiddenGrotto/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 61 "data/maps/Route1_HiddenGrotto/scripts.pory"
	compare VAR_0x8000, 11
	goto_if_eq Route1_HiddenGrotto_Chest_17
Route1_HiddenGrotto_Chest_15:
# 66 "data/maps/Route1_HiddenGrotto/scripts.pory"
	compare VAR_0x8000, 10
	goto_if_eq Route1_HiddenGrotto_Chest_14
Route1_HiddenGrotto_Chest_13:
# 72 "data/maps/Route1_HiddenGrotto/scripts.pory"
	applymove 1, Route1_HiddenGrotto_Chest_Movement_4
# 73 "data/maps/Route1_HiddenGrotto/scripts.pory"
	applymoveplayer Route1_HiddenGrotto_Chest_Movement_1
Route1_HiddenGrotto_Chest_10:
# 75 "data/maps/Route1_HiddenGrotto/scripts.pory"
	call StartTaurosBattle
# 76 "data/maps/Route1_HiddenGrotto/scripts.pory"
	setvar VAR_LAST_TALKED, TAUROSA
# 77 "data/maps/Route1_HiddenGrotto/scripts.pory"
	call PostHiddenGrottoBattle
# 78 "data/maps/Route1_HiddenGrotto/scripts.pory"
	release
	end

Route1_HiddenGrotto_Chest_2:
# 83 "data/maps/Route1_HiddenGrotto/scripts.pory"
	goto EventScript_Chest_Empty
	return

Route1_HiddenGrotto_Chest_4:
# 81 "data/maps/Route1_HiddenGrotto/scripts.pory"
	goto_if_set FLAG_HIDDENGROTTO_ROUTE1_CHEST, Route1_HiddenGrotto_Chest_2
	goto Route1_HiddenGrotto_Chest_3

Route1_HiddenGrotto_Chest_7:
# 57 "data/maps/Route1_HiddenGrotto/scripts.pory"
	goto_if_unset FLAG_HIDDENGROTTO_ROUTE1_CHEST, Route1_HiddenGrotto_Chest_1
	goto Route1_HiddenGrotto_Chest_5

Route1_HiddenGrotto_Chest_11:
# 63 "data/maps/Route1_HiddenGrotto/scripts.pory"
	applymove 1, Route1_HiddenGrotto_Chest_Movement_0
# 64 "data/maps/Route1_HiddenGrotto/scripts.pory"
	applymoveplayer Route1_HiddenGrotto_Chest_Movement_1
	goto Route1_HiddenGrotto_Chest_10

Route1_HiddenGrotto_Chest_12:
# 68 "data/maps/Route1_HiddenGrotto/scripts.pory"
	applymove 1, Route1_HiddenGrotto_Chest_Movement_2
# 69 "data/maps/Route1_HiddenGrotto/scripts.pory"
	applymoveplayer Route1_HiddenGrotto_Chest_Movement_3
	goto Route1_HiddenGrotto_Chest_10

Route1_HiddenGrotto_Chest_14:
# 66 "data/maps/Route1_HiddenGrotto/scripts.pory"
	compare VAR_0x8001, 7
	goto_if_eq Route1_HiddenGrotto_Chest_12
	goto Route1_HiddenGrotto_Chest_13

Route1_HiddenGrotto_Chest_17:
# 61 "data/maps/Route1_HiddenGrotto/scripts.pory"
	compare VAR_0x8001, 8
	goto_if_eq Route1_HiddenGrotto_Chest_11
	goto Route1_HiddenGrotto_Chest_15


# 63 "data/maps/Route1_HiddenGrotto/scripts.pory"
Route1_HiddenGrotto_Chest_Movement_0:
# 63 "data/maps/Route1_HiddenGrotto/scripts.pory"
	emote_angry
# 63 "data/maps/Route1_HiddenGrotto/scripts.pory"
	face_right
# 63 "data/maps/Route1_HiddenGrotto/scripts.pory"
	walk_fast_right
# 63 "data/maps/Route1_HiddenGrotto/scripts.pory"
	face_up
	step_end

# 64 "data/maps/Route1_HiddenGrotto/scripts.pory"
Route1_HiddenGrotto_Chest_Movement_1:
# 64 "data/maps/Route1_HiddenGrotto/scripts.pory"
	emote_exclamation_mark
# 64 "data/maps/Route1_HiddenGrotto/scripts.pory"
	face_down
	step_end

# 68 "data/maps/Route1_HiddenGrotto/scripts.pory"
Route1_HiddenGrotto_Chest_Movement_2:
# 68 "data/maps/Route1_HiddenGrotto/scripts.pory"
	emote_angry
# 68 "data/maps/Route1_HiddenGrotto/scripts.pory"
	face_up
# 68 "data/maps/Route1_HiddenGrotto/scripts.pory"
	walk_fast_right
# 68 "data/maps/Route1_HiddenGrotto/scripts.pory"
	walk_fast_up
# 68 "data/maps/Route1_HiddenGrotto/scripts.pory"
	walk_fast_up
# 68 "data/maps/Route1_HiddenGrotto/scripts.pory"
	face_left
	step_end

# 69 "data/maps/Route1_HiddenGrotto/scripts.pory"
Route1_HiddenGrotto_Chest_Movement_3:
# 69 "data/maps/Route1_HiddenGrotto/scripts.pory"
	emote_exclamation_mark
# 69 "data/maps/Route1_HiddenGrotto/scripts.pory"
	face_right
	step_end

# 72 "data/maps/Route1_HiddenGrotto/scripts.pory"
Route1_HiddenGrotto_Chest_Movement_4:
# 72 "data/maps/Route1_HiddenGrotto/scripts.pory"
	emote_angry
# 72 "data/maps/Route1_HiddenGrotto/scripts.pory"
	face_left
# 72 "data/maps/Route1_HiddenGrotto/scripts.pory"
	walk_fast_left
# 72 "data/maps/Route1_HiddenGrotto/scripts.pory"
	face_up
	step_end

Route1_HiddenGrotto_TaurosPaldeaAqua_Text_0:
# 9 "data/maps/Route1_HiddenGrotto/scripts.pory"
	.string "The Pokémon is sleeping.\n"
	.string "Wake it up?$"

Route1_HiddenGrotto_TaurosPaldeaAqua_Text_1:
# 12 "data/maps/Route1_HiddenGrotto/scripts.pory"
	.string "You left the Pokémon alone.$"

PkmRunAway::
# 40 "data/maps/Route1_HiddenGrotto/scripts.pory"
	.string "The Pokémon ran away. It may be back\n"
	.string "tomorrow.$"
