ThundershardsCliff_2F_Exterior_MapScripts::
# 4 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 15
	goto_if_ge ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_TEMP_1
	return

ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	.2byte 0


ThundershardsCave_2F_Eventscript_Warning::
# 13 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 14 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Warning_Text_0, MSGBOX_YESNO
# 15 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ThundershardsCave_2F_Eventscript_Warning_2
ThundershardsCave_2F_Eventscript_Warning_1:
# 20 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
	end

ThundershardsCave_2F_Eventscript_Warning_2:
# 16 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 17 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 18 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
	goto ThundershardsCave_2F_Eventscript_Warning_1


ThundershardsCave_2F_Eventscript_DailyChansey_Heal::
# 26 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 27 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 28 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	faceplayer
# 29 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_0, MSGBOX_YESNO
# 30 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 31 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ThundershardsCave_2F_Eventscript_DailyChansey_Heal_2
ThundershardsCave_2F_Eventscript_DailyChansey_Heal_1:
# 57 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
# 58 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
	end

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_2:
# 32 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dotimebasedevents
# 33 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse MUS_HEAL
# 34 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitse
# 35 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special HealPlayerParty
# 36 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 37 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 38 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
# 39 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 40 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq ThundershardsCave_2F_Eventscript_DailyChansey_Heal_5
# 44 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 9, walkinplaceleft
ThundershardsCave_2F_Eventscript_DailyChansey_Heal_4:
# 46 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 47 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 48 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 49 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	removeobject 9
# 50 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_FLEE
# 51 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitse
# 52 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_DAILY_CHANSEY_HEAL_THUNDERSHARD_CAVE_2F_EXTERIOR
# 53 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 54 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_1
# 55 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
	goto ThundershardsCave_2F_Eventscript_DailyChansey_Heal_1

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_5:
# 41 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 9, walkinplacedown
	goto ThundershardsCave_2F_Eventscript_DailyChansey_Heal_4


ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance::
# 62 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 63 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance_Movement_0
# 64 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 65 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	goto ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave
	return


ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave::
# 69 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 70 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 71 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadenewbgm MUS_P3R_FEARFUL_EXPERIENCE
# 72 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 73 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	clearflag FLAG_TEMP_1
# 74 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	addobject 8
# 75 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_EXIT
# 76 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitse
# 77 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 78 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Movement_0
# 79 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 4
# 80 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 81 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 8, emoteexclamation
# 82 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 83 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 84 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 8, walkinplaceleft
# 85 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 86 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_0
# 87 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 88 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_1
# 93 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 94 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playbgm MUS_P5_MENTAL_BREAKDOWN, FALSE
# 95 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 96 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_NORBERT_THUNDERSHARDS_CAVE_2F_EXTERIOR, KGScientist_Defeated
# 97 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	goto ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat
	return


ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat::
# 105 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 106 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_0
# 107 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_1
# 111 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_0
# 112 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_2
# 115 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_0
# 116 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_3
# 120 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 121 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Movement_0
# 122 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dofieldeffectnpcflyout 24, 25, 1
# 123 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 8, invisible
# 124 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 125 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement LOCALID_PLAYER
# 126 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	removeobject 8
# 127 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_TEMP_1
# 128 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_4
# 129 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 130 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 8
# 131 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_5
# 132 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 133 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 134 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 16
# 135 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	goto ThundershardsCliff_2F_Exterior_Eventscript_LabExploding
# 136 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
	return


ThundershardsCliff_2F_Exterior_Eventscript_LabExploding::
# 140 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 141 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special StopMapMusic
# 142 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_INTRO_BLAST
# 143 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8004, 2
# 144 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8005, 4
# 145 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8006, 6
# 146 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8007, 4
# 147 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special ShakeCamera
# 148 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 0, 25
# 149 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 1, 25
# 150 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 151 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 152 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 153 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_0
# 154 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 155 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playbgm MUS_P3_CALAMITY, FALSE
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 157 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Text_0
# 158 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 159 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_1
# 161 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_INTRO_BLAST
# 162 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8004, 2
# 163 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8005, 4
# 164 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8006, 6
# 165 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8007, 4
# 166 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special ShakeCamera
# 167 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 0, 18
# 168 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 1, 23
# 169 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 170 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 171 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 172 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_INTRO_BLAST
# 173 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8004, 2
# 174 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8005, 4
# 175 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8006, 6
# 176 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8007, 4
# 177 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special ShakeCamera
# 178 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 0, 8
# 179 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 1, 28
# 180 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 181 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 182 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 9, ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_2
# 183 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 184 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 185 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	warp MAP_THUNDERSHARDS_CAVE_2F, 2
# 186 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
	return


# 63 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance_Movement_0:
# 63 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	walk_down
# 63 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_right
	step_end

# 78 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Movement_0:
# 78 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	emote_exclamation_mark
# 78 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_right
	step_end

# 121 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Movement_0:
# 121 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_right
# 121 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_right
# 121 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_left
	step_end

# 153 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_0:
# 153 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	emote_exclamation_mark
# 153 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_right
# 153 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock_facing_direction
# 153 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	jump_left
# 153 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

# 159 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_1:
# 159 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 159 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 159 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 159 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 159 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 159 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 159 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
	step_end

# 182 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_2:
# 182 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	jump_right
# 182 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	set_invisible
	step_end

ThundershardsCave_2F_Eventscript_Warning_Text_0:
# 14 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{COLOR RED}Important scene ahead. Do you want to\n"
	.string "proceed?$"

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_0:
# 29 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Ask Chansey to heal your party?$"

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_1:
# 54 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Chansey ran off somewhere. It may be\n"
	.string "back tomorrow.$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_0:
# 86 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Scientist$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_1:
# 88 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Tch. I told those two to not let anyone\n"
	.string "through.\p"
	.string "And here you are, Young Lady.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}They were no match for me.\p"
	.string "And you're not going anywhere either.\p"
	.string "Let's go, {STR_VAR_1}.$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_0:
# 106 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Scientist Norbert$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_1:
# 107 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "That was pretty informative.\p"
	.string "Looks like your synergy level has\n"
	.string "increased again, Young Lady.\p"
	.string "As expected of our premium prototype.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_MAD}Norbert, you...!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_2:
# 112 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{DESTROY_MUGSHOT}As the prize for winning, I'll spare you\n"
	.string "a bit of information.\p"
	.string "You aren't the only premium prototype\n"
	.string "anymore.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SURPRISED}...!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_3:
# 116 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{DESTROY_MUGSHOT}Well then, as much as I enjoyed our\n"
	.string "little chat, there's somewhere else I\l"
	.string "need to be.\p"
	.string "I hope we don't meet again, for your own\n"
	.string "good, little miss.\p"
	.string "Oh, and be careful of the fire.\n"
	.string "Hehehehehe.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_MAD}What- WAIT-!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_4:
# 128 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_MAD}Damn it!!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_5:
# 131 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}Wait... He said “fire”?$"

ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Text_0:
# 157 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SURPRISED}What the-$"

KGScientist_Defeated::
# 100 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "You really live up to your name, Young\n"
	.string "Lady.$"
