ThundershardsCave_1F_MapScripts::
# 2 "data/maps/ThundershardsCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_KG_STAFF_DOUBLE
	goto_if_gt ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
	return


ShowHelpEncounter::
# 10 "data/maps/ThundershardsCave_1F/scripts.pory"
	goto_if_unset FLAG_HELP_DUNGEON_ENCOUNTER, ShowHelpEncounter_3
ShowHelpEncounter_1:
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_TEMP_A, 1
# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end

ShowHelpEncounter_2:
# 11 "data/maps/ThundershardsCave_1F/scripts.pory"
	call EventScript_ShowHelpDungeonEncounter
# 12 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_HELP_DUNGEON_ENCOUNTER
	goto ShowHelpEncounter_1

ShowHelpEncounter_3:
# 10 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq ShowHelpEncounter_2
	goto ShowHelpEncounter_1


ThundershardsCave_1F_EventScript_NeckBeardInvites::
# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 22 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 23 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_0
# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement NB_TDS, ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_1
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 28 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement NB_R, ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_2
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement NB_R
# 31 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject NB_R
# 32 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 34 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_3
# 35 "data/maps/ThundershardsCave_1F/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_eq ThundershardsCave_1F_EventScript_NeckBeardInvites_2
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymove NB_TDS, ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_5
ThundershardsCave_1F_EventScript_NeckBeardInvites_1:
# 43 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_0
# 45 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_1
# 47 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 48 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 49 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement NB_TDS, emotemusic
# 50 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_2
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_3
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement NB_TDS, walkleft
# 56 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_2
# 58 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_4
# 59 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 60 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_2
# 62 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_5
# 65 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_6
# 66 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_7
# 68 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 69 "data/maps/ThundershardsCave_1F/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 70 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_0x8001, 11
	goto_if_eq ThundershardsCave_1F_EventScript_NeckBeardInvites_6
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement NB_TDS, ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_8
# 79 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_9
ThundershardsCave_1F_EventScript_NeckBeardInvites_5:
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement NB_TDS
# 83 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject NB_TDS
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 85 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_8
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 89 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 90 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 91 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_KG_STAFF_DOUBLE
# 92 "data/maps/ThundershardsCave_1F/scripts.pory"
	fwdtime 8, 05
# 93 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end

ThundershardsCave_1F_EventScript_NeckBeardInvites_2:
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymove NB_TDS, ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_4
	goto ThundershardsCave_1F_EventScript_NeckBeardInvites_1

ThundershardsCave_1F_EventScript_NeckBeardInvites_6:
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement NB_TDS, ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_6
# 73 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_7
	goto ThundershardsCave_1F_EventScript_NeckBeardInvites_5


Common_EventScript_MiningRock::
# 98 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 99 "data/maps/ThundershardsCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_MINING_KIT, Common_EventScript_MiningRock_2
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox Common_EventScript_MiningRock_Text_1
Common_EventScript_MiningRock_1:
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 117 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end

Common_EventScript_MiningRock_2:
# 100 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox Common_EventScript_MiningRock_Text_0, MSGBOX_YESNO
# 101 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MiningRock_5
	goto Common_EventScript_MiningRock_1

Common_EventScript_MiningRock_5:
# 102 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 103 "data/maps/ThundershardsCave_1F/scripts.pory"
	dotimebasedevents
# 104 "data/maps/ThundershardsCave_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 105 "data/maps/ThundershardsCave_1F/scripts.pory"
	special StartMining
# 106 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitstate
# 107 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_2
# 109 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Common_EventScript_MiningRock_1


# 23 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_0:
# 23 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
# 23 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
	step_end

# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_1:
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	shake_horizontal
	step_end

# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_2:
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	rock_smash_break
	step_end

# 34 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_3:
# 34 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 34 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
	step_end

# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_4:
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_5:
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_6:
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_7:
# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_down
# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_8:
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_up
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites_Movement_9:
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_up
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_0:
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Big Man$"

ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_1:
# 45 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rocks are fascinating, don't you agree,\n"
	.string "young lady?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}Huh? Oh- yes, I suppose they are.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_2:
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rock-loving Big Man?$"

ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_3:
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I know right? Your answer just made my\n"
	.string "day!\p"
	.string "If only my son thought the same.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_4:
# 58 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Here, your can have this. I got it from\n"
	.string "mining the rock just now.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_5:
# 62 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I'd love to give you a tools to mine\n"
	.string "rocks on your own.\p"
	.string "Unfortunately I only have this old\n"
	.string "mining kit with me and it's my lucky\l"
	.string "charm.\p"
	.string "If you visit my house in Coralport I can\n"
	.string "give you a new one.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_6:
# 65 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Mr. Nebe$"

ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_7:
# 66 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Just ask around for Nebe's house when\n"
	.string "you get there. Coralport is very\l"
	.string "hospitable.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}I- Thank you. Nebe-san.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites_Text_8:
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}.......\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(I should go on with my mission.)$"

Common_EventScript_MiningRock_Text_0:
# 100 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Start mining this rock?$"

Common_EventScript_MiningRock_Text_1:
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "You don't have tools to break this\n"
	.string "mining rock.$"
