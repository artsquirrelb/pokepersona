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
	hidetalkbutton
# 13 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 16 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 18 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 19 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 22 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 23 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 28 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 32 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 34 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 35 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 39 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 40 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 42 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 43 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 45 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 48 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 49 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 56 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 7
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 58 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 59 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 62 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 63 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 64 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 65 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
# 66 "data/maps/ThundershardsCave_1F/scripts.pory"
	showtalkbutton
	end


ThundershardsCave_1F_EventScript_NeckBeardInvites2::
# 71 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 73 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 75 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 76 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 77 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 79 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 81 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 83 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0
# 85 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 87 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 90 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 91 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 92 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 93 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 94 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 95 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 97 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 98 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 99 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 100 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 101 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 102 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 103 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 104 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 105 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 109 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 111 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1
# 113 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 117 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 118 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 7
# 119 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 120 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 123 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 124 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 125 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 126 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end


Common_EventScript_MiningRock::
# 131 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 132 "data/maps/ThundershardsCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_MINING_KIT, Common_EventScript_MiningRock_2
# 148 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox Common_EventScript_MiningRock_Text_1
Common_EventScript_MiningRock_1:
# 150 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 151 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
# 152 "data/maps/ThundershardsCave_1F/scripts.pory"
	showtalkbutton
	end

Common_EventScript_MiningRock_2:
# 133 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox Common_EventScript_MiningRock_Text_0, MSGBOX_YESNO
# 134 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MiningRock_5
	goto Common_EventScript_MiningRock_1

Common_EventScript_MiningRock_5:
# 135 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 136 "data/maps/ThundershardsCave_1F/scripts.pory"
	dotimebasedevents
# 137 "data/maps/ThundershardsCave_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 138 "data/maps/ThundershardsCave_1F/scripts.pory"
	special StartMining
# 139 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitstate
# 140 "data/maps/ThundershardsCave_1F/scripts.pory"
	hidetalkbutton
# 141 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 142 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 143 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 144 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Common_EventScript_MiningRock_1


# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0:
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
	step_end

# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1:
# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
	shake_horizontal
	step_end

# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2:
# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
	rock_smash_break
	step_end

# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3:
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
	step_end

# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4:
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5:
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6:
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_down
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0:
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1:
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_up
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2:
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_up
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0:
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Big Man$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1:
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rocks are fascinating, don't you agree,\n"
	.string "young lady?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}Huh? Oh- yes, I suppose they are.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2:
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rock-loving Big Man?$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3:
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I know right? Your answer just made my\n"
	.string "day!\p"
	.string "If only my son thought the same.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4:
# 42 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Here, your can have this. I got it from\n"
	.string "mining the rock just now.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5:
# 45 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I'd love to give you a tools to mine\n"
	.string "rocks on your own.\p"
	.string "Unfortunately I only have this old\n"
	.string "mining kit with me and it's my lucky\l"
	.string "charm.\p"
	.string "If you visit my house in Coralport I can\n"
	.string "give you a new one.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6:
# 48 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Mr. Nebe$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7:
# 49 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Just ask around for Nebe's house when\n"
	.string "you get there. Coralport is very\l"
	.string "hospitable.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}I- Thank you. Nebe-san.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8:
# 59 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}.......\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should go on with my mission.)$"

Common_EventScript_MiningRock_Text_0:
# 133 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Start mining this rock?$"

Common_EventScript_MiningRock_Text_1:
# 148 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "You don't have tools to break this\n"
	.string "mining rock.$"
