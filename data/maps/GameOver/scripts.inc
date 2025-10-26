GameOver_MapScripts::
# 2 "data/maps/GameOver/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GameOver_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/GameOver/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GameOver_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GameOver_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/GameOver/scripts.pory"
	goto_if_set FLAG_DONT_TRANSITION_MUSIC, GameOver_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

GameOver_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/GameOver/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	return

GameOver_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/GameOver/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle
	.2byte 0


Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle::
# 13 "data/maps/GameOver/scripts.pory"
	lockall
# 14 "data/maps/GameOver/scripts.pory"
	applymovement LOCALID_PLAYER, SlowlyShowGameOver
# 15 "data/maps/GameOver/scripts.pory"
	waitmovement 0
# 16 "data/maps/GameOver/scripts.pory"
	delay 180
# 17 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_0, MSGBOX_YESNO
# 18 "data/maps/GameOver/scripts.pory"
	closemessage
# 19 "data/maps/GameOver/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_1
# 35 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_2
# 36 "data/maps/GameOver/scripts.pory"
	closemessage
# 37 "data/maps/GameOver/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 38 "data/maps/GameOver/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 39 "data/maps/GameOver/scripts.pory"
	playbgm MUS_NONE, TRUE
	return

Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_1:
# 20 "data/maps/GameOver/scripts.pory"
	playse SE_USE_ITEM
# 21 "data/maps/GameOver/scripts.pory"
	waitse
# 22 "data/maps/GameOver/scripts.pory"
	delay 20
# 23 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_1
# 24 "data/maps/GameOver/scripts.pory"
	closemessage
# 25 "data/maps/GameOver/scripts.pory"
	special HealPlayerParty
# 26 "data/maps/GameOver/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 34
# 27 "data/maps/GameOver/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 100
# 28 "data/maps/GameOver/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 29 "data/maps/GameOver/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 30 "data/maps/GameOver/scripts.pory"
	warpsilent MAP_ROUTE2, 8, 12
# 31 "data/maps/GameOver/scripts.pory"
	releaseall
	end


# 43 "data/maps/GameOver/scripts.pory"
SlowlyShowGameOver:
# 44 "data/maps/GameOver/scripts.pory"
	walk_right
# 44 "data/maps/GameOver/scripts.pory"
	walk_right
# 44 "data/maps/GameOver/scripts.pory"
	walk_right
# 44 "data/maps/GameOver/scripts.pory"
	walk_right
# 44 "data/maps/GameOver/scripts.pory"
	walk_right
# 44 "data/maps/GameOver/scripts.pory"
	walk_right
# 44 "data/maps/GameOver/scripts.pory"
	walk_right
# 44 "data/maps/GameOver/scripts.pory"
	walk_right
# 44 "data/maps/GameOver/scripts.pory"
	walk_right
	step_end

Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_0:
# 17 "data/maps/GameOver/scripts.pory"
	.string "Do you want to rewind the time to a safe\n"
	.string "plot point?$"

Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_1:
# 23 "data/maps/GameOver/scripts.pory"
	.string "Make your choice wisely this time.$"

Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_2:
# 35 "data/maps/GameOver/scripts.pory"
	.string "Enjoy the eternal darkness.$"
