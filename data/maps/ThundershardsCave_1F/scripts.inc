ThundershardsCave_1F_MapScripts::
# 2 "data/maps/ThundershardsCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_gt ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
	return


ThundershardsCave_1F_EventScript_NeckBeardInvites1::
# 11 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 12 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 13 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 16 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 18 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 19 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 22 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 23 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 28 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 31 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 32 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 34 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 35 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 38 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 39 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 40 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 42 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 43 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 47 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 48 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 50 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 56 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 59 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 60 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 62 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 63 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end


ThundershardsCave_1F_EventScript_NeckBeardInvites2::
# 68 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 69 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 70 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 71 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 73 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 12, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 75 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 76 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 9, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 77 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 9
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 79 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 12, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0
# 81 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 83 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 87 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 12, emotemusic
# 89 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 90 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 91 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 93 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 94 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 12, walkleft
# 95 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 96 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 97 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 98 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 99 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 100 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 101 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 104 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 105 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 107 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 12, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1
# 109 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2
# 111 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 12
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 113 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 12
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 9
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 117 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 119 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 120 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 121 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 123 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end


ThundershardsCave_1F_EventScript_MiningRock::
# 128 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 129 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_MiningRock_Text_0, MSGBOX_YESNO
# 130 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ThundershardsCave_1F_EventScript_MiningRock_2
ThundershardsCave_1F_EventScript_MiningRock_1:
# 141 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 142 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	return

ThundershardsCave_1F_EventScript_MiningRock_2:
# 131 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 132 "data/maps/ThundershardsCave_1F/scripts.pory"
	dotimebasedevents
# 133 "data/maps/ThundershardsCave_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 134 "data/maps/ThundershardsCave_1F/scripts.pory"
	special StartMining
# 135 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 136 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 8, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 137 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 138 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 8
# 139 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_MINING_ROCK_THUNDERSHARDS_CAVE_1F
	goto ThundershardsCave_1F_EventScript_MiningRock_1


# 13 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0:
# 13 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
# 13 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
	step_end

# 16 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1:
# 16 "data/maps/ThundershardsCave_1F/scripts.pory"
	shake_horizontal
	step_end

# 19 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2:
# 19 "data/maps/ThundershardsCave_1F/scripts.pory"
	rock_smash_break
	step_end

# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3:
# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
	step_end

# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4:
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5:
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
	step_end

# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6:
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_down
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0:
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1:
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_up
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
	step_end

# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2:
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_up
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0:
# 28 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Big Man$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1:
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rocks are fascinating, don't you agree,\n"
	.string "young lady?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}Huh? Oh- yes, I suppose they are.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2:
# 35 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rock-loving Big Man?$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3:
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I know right? Your answer just made my\n"
	.string "day!\p"
	.string "If only my son thought the same.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4:
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Here, your can have this. I got it from\n"
	.string "breaking the rock just now.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5:
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I'd love to give you a pickaxe so you\n"
	.string "can break rocks for items on your own.\p"
	.string "Unfortunately I only have this old one\n"
	.string "with me and it's my lucky charm.\p"
	.string "If you visit my house in Coralport I can\n"
	.string "give you a new one.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6:
# 47 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Mr. Nebe$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7:
# 48 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Just ask around for Nebe's house when\n"
	.string "you get there. Coralport is very\l"
	.string "hospitable.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}I- Thank you. Nebe-san.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8:
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}.......\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should go on with my mission.)$"

ThundershardsCave_1F_EventScript_MiningRock_Text_0:
# 129 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Start mining this rock?$"
