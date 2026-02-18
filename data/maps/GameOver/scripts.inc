GameOver_MapScripts::
# 2 "data/maps/GameOver/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GameOver_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/GameOver/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GameOver_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GameOver_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/GameOver/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 4 "data/maps/GameOver/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
	return

GameOver_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/GameOver/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_INTRO_GAMEOVER, Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle
# 8 "data/maps/GameOver/scripts.pory"
	map_script_2 VAR_DAYS_LEFT, 0, Eventscript_GAMEOVERFromMissingDeadline
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
	buffertimeresetattempts STR_VAR_1
# 18 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_0, MSGBOX_YESNO
# 20 "data/maps/GameOver/scripts.pory"
	closemessage
# 21 "data/maps/GameOver/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_1
# 36 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_2
# 37 "data/maps/GameOver/scripts.pory"
	closemessage
# 38 "data/maps/GameOver/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 39 "data/maps/GameOver/scripts.pory"
	fadenewbgm MUS_NONE
	return

Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_1:
# 22 "data/maps/GameOver/scripts.pory"
	playse SE_USE_ITEM
# 23 "data/maps/GameOver/scripts.pory"
	waitse
# 24 "data/maps/GameOver/scripts.pory"
	delay 20
# 25 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_1
# 26 "data/maps/GameOver/scripts.pory"
	closemessage
# 27 "data/maps/GameOver/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/GameOver/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_TO_SUNSHINE_MEADOW
# 29 "data/maps/GameOver/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 100
# 30 "data/maps/GameOver/scripts.pory"
	subvar VAR_TIME_RESET_ATTEMPTS, 1
# 31 "data/maps/GameOver/scripts.pory"
	special SetCB2WhiteOut
# 32 "data/maps/GameOver/scripts.pory"
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

Eventscript_GAMEOVERFromMissingDeadline::
# 48 "data/maps/GameOver/scripts.pory"
	lockall
# 49 "data/maps/GameOver/scripts.pory"
	applymovement LOCALID_PLAYER, SlowlyShowGameOver
# 50 "data/maps/GameOver/scripts.pory"
	waitmovement 0
# 51 "data/maps/GameOver/scripts.pory"
	delay 180
# 52 "data/maps/GameOver/scripts.pory"
	compare VAR_TIME_RESET_ATTEMPTS, 0
	goto_if_eq Eventscript_GAMEOVERFromMissingDeadline_2
Eventscript_GAMEOVERFromMissingDeadline_1:
# 55 "data/maps/GameOver/scripts.pory"
	buffertimeresetattempts STR_VAR_1
# 56 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromMissingDeadline_Text_0
# 57 "data/maps/GameOver/scripts.pory"
	closemessage
# 58 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromMissingDeadline_Text_1, MSGBOX_YESNO
# 59 "data/maps/GameOver/scripts.pory"
	closemessage
# 60 "data/maps/GameOver/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Eventscript_GAMEOVERFromMissingDeadline_4
# 74 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_2
# 75 "data/maps/GameOver/scripts.pory"
	closemessage
# 76 "data/maps/GameOver/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 77 "data/maps/GameOver/scripts.pory"
	fadenewbgm MUS_NONE
	return

Eventscript_GAMEOVERFromMissingDeadline_2:
# 53 "data/maps/GameOver/scripts.pory"
	goto Eventscript_GAMEOVER_FR
	goto Eventscript_GAMEOVERFromMissingDeadline_1

Eventscript_GAMEOVERFromMissingDeadline_4:
# 61 "data/maps/GameOver/scripts.pory"
	playse SE_USE_ITEM
# 62 "data/maps/GameOver/scripts.pory"
	waitse
# 63 "data/maps/GameOver/scripts.pory"
	delay 20
# 64 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_1
# 65 "data/maps/GameOver/scripts.pory"
	closemessage
# 66 "data/maps/GameOver/scripts.pory"
	special HealPlayerParty
# 67 "data/maps/GameOver/scripts.pory"
	rewind3days
# 68 "data/maps/GameOver/scripts.pory"
	subvar VAR_TIME_RESET_ATTEMPTS, 1
# 69 "data/maps/GameOver/scripts.pory"
	special SetCB2WhiteOut
# 70 "data/maps/GameOver/scripts.pory"
	releaseall
	end


Eventscript_GAMEOVER_FR::
# 82 "data/maps/GameOver/scripts.pory"
	lockall
# 83 "data/maps/GameOver/scripts.pory"
	applymovement LOCALID_PLAYER, Eventscript_GAMEOVER_FR_Movement_0
# 84 "data/maps/GameOver/scripts.pory"
	delay 180
# 85 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVER_FR_Text_0
# 87 "data/maps/GameOver/scripts.pory"
	closemessage
# 88 "data/maps/GameOver/scripts.pory"
	fadenewbgm MUS_NONE
# 89 "data/maps/GameOver/scripts.pory"
	waitstate
	return


# 83 "data/maps/GameOver/scripts.pory"
Eventscript_GAMEOVER_FR_Movement_0:
# 83 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 83 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 83 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 83 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 83 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 83 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 83 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 83 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 83 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 83 "data/maps/GameOver/scripts.pory"
	walk_slow_right
	step_end

Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_0:
# 18 "data/maps/GameOver/scripts.pory"
	.string "Do you want to rewind the time to a safe\n"
	.string "plot point?\p"
	.string "{COLOR GREEN}Time rewind attempt(s) left:\n"
	.string "{COLOR RED}{STR_VAR_1}{COLOR 2}.$"

Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_1:
# 25 "data/maps/GameOver/scripts.pory"
	.string "Make your choice wisely this time.$"

Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_2:
# 36 "data/maps/GameOver/scripts.pory"
	.string "Enjoy the eternal darkness.$"

Eventscript_GAMEOVERFromMissingDeadline_Text_0:
# 56 "data/maps/GameOver/scripts.pory"
	.string "Do you want to rewind the time to 3 days\n"
	.string "left before the deadline?$"

Eventscript_GAMEOVERFromMissingDeadline_Text_1:
# 58 "data/maps/GameOver/scripts.pory"
	.string "{COLOR GREEN}Time rewind attempt(s) left:\n"
	.string "{COLOR RED}{STR_VAR_1}{COLOR 2}.$"

Eventscript_GAMEOVER_FR_Text_0:
# 85 "data/maps/GameOver/scripts.pory"
	.string "You have {COLOR RED}0 {COLOR 2}time rewind attempt left.\n"
	.string "Enjoy the eternal darkness.$"
