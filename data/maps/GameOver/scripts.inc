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
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle
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
# 37 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_2
# 38 "data/maps/GameOver/scripts.pory"
	closemessage
# 39 "data/maps/GameOver/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 40 "data/maps/GameOver/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 41 "data/maps/GameOver/scripts.pory"
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
	setvar VAR_AKIHIKOS_INTRO_STATE, 34
# 29 "data/maps/GameOver/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 100
# 30 "data/maps/GameOver/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 31 "data/maps/GameOver/scripts.pory"
	subvar VAR_TIME_RESET_ATTEMPTS, 1
# 32 "data/maps/GameOver/scripts.pory"
	special SetCB2WhiteOut
# 33 "data/maps/GameOver/scripts.pory"
	releaseall
	end


# 45 "data/maps/GameOver/scripts.pory"
SlowlyShowGameOver:
# 46 "data/maps/GameOver/scripts.pory"
	walk_right
# 46 "data/maps/GameOver/scripts.pory"
	walk_right
# 46 "data/maps/GameOver/scripts.pory"
	walk_right
# 46 "data/maps/GameOver/scripts.pory"
	walk_right
# 46 "data/maps/GameOver/scripts.pory"
	walk_right
# 46 "data/maps/GameOver/scripts.pory"
	walk_right
# 46 "data/maps/GameOver/scripts.pory"
	walk_right
# 46 "data/maps/GameOver/scripts.pory"
	walk_right
# 46 "data/maps/GameOver/scripts.pory"
	walk_right
	step_end

Eventscript_GAMEOVERFromMissingDeadline::
# 50 "data/maps/GameOver/scripts.pory"
	lockall
# 51 "data/maps/GameOver/scripts.pory"
	applymovement LOCALID_PLAYER, SlowlyShowGameOver
# 52 "data/maps/GameOver/scripts.pory"
	waitmovement 0
# 53 "data/maps/GameOver/scripts.pory"
	delay 180
# 54 "data/maps/GameOver/scripts.pory"
	compare VAR_TIME_RESET_ATTEMPTS, 0
	goto_if_eq Eventscript_GAMEOVERFromMissingDeadline_2
Eventscript_GAMEOVERFromMissingDeadline_1:
# 57 "data/maps/GameOver/scripts.pory"
	buffertimeresetattempts STR_VAR_1
# 58 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromMissingDeadline_Text_0
# 59 "data/maps/GameOver/scripts.pory"
	closemessage
# 60 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromMissingDeadline_Text_1, MSGBOX_YESNO
# 61 "data/maps/GameOver/scripts.pory"
	closemessage
# 62 "data/maps/GameOver/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Eventscript_GAMEOVERFromMissingDeadline_4
# 76 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_2
# 77 "data/maps/GameOver/scripts.pory"
	closemessage
# 78 "data/maps/GameOver/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 79 "data/maps/GameOver/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 80 "data/maps/GameOver/scripts.pory"
	fadenewbgm MUS_NONE
	return

Eventscript_GAMEOVERFromMissingDeadline_2:
# 55 "data/maps/GameOver/scripts.pory"
	goto Eventscript_GAMEOVER_FR
	goto Eventscript_GAMEOVERFromMissingDeadline_1

Eventscript_GAMEOVERFromMissingDeadline_4:
# 63 "data/maps/GameOver/scripts.pory"
	playse SE_USE_ITEM
# 64 "data/maps/GameOver/scripts.pory"
	waitse
# 65 "data/maps/GameOver/scripts.pory"
	delay 20
# 66 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVERFromAkihikoPrologueMitsuruFirstBattle_Text_1
# 67 "data/maps/GameOver/scripts.pory"
	closemessage
# 68 "data/maps/GameOver/scripts.pory"
	special HealPlayerParty
# 69 "data/maps/GameOver/scripts.pory"
	rewind3days
# 70 "data/maps/GameOver/scripts.pory"
	subvar VAR_TIME_RESET_ATTEMPTS, 1
# 71 "data/maps/GameOver/scripts.pory"
	special SetCB2WhiteOut
# 72 "data/maps/GameOver/scripts.pory"
	releaseall
	end


Eventscript_GAMEOVER_FR::
# 85 "data/maps/GameOver/scripts.pory"
	lockall
# 86 "data/maps/GameOver/scripts.pory"
	applymovement LOCALID_PLAYER, Eventscript_GAMEOVER_FR_Movement_0
# 87 "data/maps/GameOver/scripts.pory"
	delay 180
# 88 "data/maps/GameOver/scripts.pory"
	msgbox Eventscript_GAMEOVER_FR_Text_0
# 90 "data/maps/GameOver/scripts.pory"
	closemessage
# 91 "data/maps/GameOver/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 92 "data/maps/GameOver/scripts.pory"
	fadenewbgm MUS_NONE
# 93 "data/maps/GameOver/scripts.pory"
	waitstate
	return


# 86 "data/maps/GameOver/scripts.pory"
Eventscript_GAMEOVER_FR_Movement_0:
# 86 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 86 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 86 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 86 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 86 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 86 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 86 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 86 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 86 "data/maps/GameOver/scripts.pory"
	walk_slow_right
# 86 "data/maps/GameOver/scripts.pory"
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
# 37 "data/maps/GameOver/scripts.pory"
	.string "Enjoy the eternal darkness.$"

Eventscript_GAMEOVERFromMissingDeadline_Text_0:
# 58 "data/maps/GameOver/scripts.pory"
	.string "Do you want to rewind the time to 3 days\n"
	.string "left before the deadline?$"

Eventscript_GAMEOVERFromMissingDeadline_Text_1:
# 60 "data/maps/GameOver/scripts.pory"
	.string "{COLOR GREEN}Time rewind attempt(s) left:\n"
	.string "{COLOR RED}{STR_VAR_1}{COLOR 2}.$"

Eventscript_GAMEOVER_FR_Text_0:
# 88 "data/maps/GameOver/scripts.pory"
	.string "You have {COLOR RED}0 {COLOR 2}time rewind attempt left.\n"
	.string "Enjoy the eternal darkness.$"
