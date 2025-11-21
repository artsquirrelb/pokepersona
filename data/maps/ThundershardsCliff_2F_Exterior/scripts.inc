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
	faceplayer
# 28 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_0, MSGBOX_YESNO
# 29 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 30 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ThundershardsCave_2F_Eventscript_DailyChansey_Heal_2
ThundershardsCave_2F_Eventscript_DailyChansey_Heal_1:
# 56 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
	end

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_2:
# 31 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dotimebasedevents
# 32 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse MUS_HEAL
# 33 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitse
# 34 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 36 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 37 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
# 38 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 39 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq ThundershardsCave_2F_Eventscript_DailyChansey_Heal_5
# 43 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 10, walkinplaceleft
ThundershardsCave_2F_Eventscript_DailyChansey_Heal_4:
# 45 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 46 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 47 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 48 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	removeobject 10
# 49 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_FLEE
# 50 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitse
# 51 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_DAILY_CHANSEY_HEAL_THUNDERSHARD_CAVE_2F_EXTERIOR
# 52 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 53 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_1
# 54 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
	goto ThundershardsCave_2F_Eventscript_DailyChansey_Heal_1

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_5:
# 40 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 10, walkinplacedown
	goto ThundershardsCave_2F_Eventscript_DailyChansey_Heal_4


ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance::
# 60 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 61 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance_Movement_0
# 62 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 63 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	goto ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave
	return


ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave::
# 67 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 68 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 69 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	clearflag FLAG_TEMP_1
# 70 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	addobject 8
# 71 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_EXIT
# 72 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitse
# 73 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 74 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Movement_0
# 75 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 4
# 76 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 77 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 8, emoteexclamation
# 78 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 79 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 80 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 8, walkinplaceleft
# 81 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 82 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_0
# 83 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 84 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_1
# 89 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 90 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SCIENTIST_THUNDERSHARDS_CAVE_2F_EXTERIOR, KGScientist_Defeated
# 91 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	goto ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat
	return


ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat::
# 99 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 100 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_0
# 101 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_0
# 105 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_1
# 106 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_2
# 109 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_1
# 110 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_3
# 114 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 115 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Movement_0
# 116 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dofieldeffectnpcflyout 24, 25, 1
# 117 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 8, invisible
# 118 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 119 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement LOCALID_PLAYER
# 120 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	removeobject 8
# 121 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_TEMP_1
# 122 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_4
# 123 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 124 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 8
# 125 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_5
# 126 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 127 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	goto ThundershardsCliff_2F_Exterior_Eventscript_LabExploding
	return


ThundershardsCliff_2F_Exterior_Eventscript_LabExploding::
# 131 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special StopMapMusic
# 132 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera
# 133 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 134 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 0, 25
# 135 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 1, 25
# 136 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_0
# 137 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 138 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 139 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 140 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Text_0
# 141 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 142 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 143 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera
# 144 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 145 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera
# 146 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 16
# 147 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	warpsilent MAP_THUNDERSHARDS_CAVE_2F, 2
# 148 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
	return


# 61 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance_Movement_0:
# 61 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	walk_down
# 61 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_right
	step_end

# 74 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Movement_0:
# 74 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	emote_exclamation_mark
# 74 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_right
	step_end

# 115 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Movement_0:
# 115 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_right
# 115 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_right
# 115 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_left
	step_end

# 136 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_0:
# 136 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	emote_exclamation_mark
# 136 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_right
# 136 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock_facing_direction
# 136 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	jump_left
# 136 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

ThundershardsCave_2F_Eventscript_Warning_Text_0:
# 14 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Important scene ahead. Do you want to\n"
	.string "proceed?$"

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_0:
# 28 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Ask Chansey to heal your party?$"

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_1:
# 53 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Chansey ran off somewhere. It may be\n"
	.string "back tomorrow.$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_0:
# 82 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Scientist$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_1:
# 84 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Tch. I told those two to not let anyone\n"
	.string "through.\p"
	.string "And here you are, Young Lady.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}They were no match for me.\p"
	.string "And you're not going anywhere either.\p"
	.string "Let's go, {STR_VAR_1}.$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_0:
# 101 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "That was pretty informative.\p"
	.string "Looks like your synergy level has\n"
	.string "increased again, Young Lady.\p"
	.string "As expected of our premium prototype.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_MAD}Norbert, you...!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_1:
# 105 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Norbert$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_2:
# 106 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{DESTROY_MUGSHOT}As the prize for winning, I'll spare you\n"
	.string "a bit of information.\p"
	.string "You aren't the only premium prototype\n"
	.string "anymore.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}...!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_3:
# 110 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{DESTROY_MUGSHOT}Well then, as much as I enjoyed our\n"
	.string "little chat, there's somewhere else I\l"
	.string "need to be.\p"
	.string "I hope we don't meet again, for your own\n"
	.string "good, little miss.\p"
	.string "Oh, and be careful of the fire.\n"
	.string "Hehehehehe.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_MAD}What- WAIT-!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_4:
# 122 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_MAD}Damn it!!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_5:
# 125 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Wait... He said “fire”?$"

ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Text_0:
# 140 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}What the-$"

KGScientist_Defeated::
# 94 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "You really live up to your name, Young\n"
	.string "Lady.$"
