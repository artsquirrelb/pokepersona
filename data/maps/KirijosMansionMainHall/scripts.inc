KirijosMansionMainHall_MapScripts::
# 2 "data/maps/KirijosMansionMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KirijosMansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/KirijosMansionMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KirijosMansionMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

KirijosMansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KirijosMansionMainHall/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 3
	goto_if_ge KirijosMansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

KirijosMansionMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/KirijosMansionMainHall/scripts.pory"
	setflag FLAG_TEMP_1
	return

KirijosMansionMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/KirijosMansionMainHall/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 2, KirijosMansionMainHall_Eventscript_OnFrame2
	.2byte 0


KirijosMansionMainHall_Eventscript_OnFrame2::
# 13 "data/maps/KirijosMansionMainHall/scripts.pory"
	call Eventscript_CutsceneStarts
# 14 "data/maps/KirijosMansionMainHall/scripts.pory"
	goto KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru
	return


KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru::
# 18 "data/maps/KirijosMansionMainHall/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 3
# 19 "data/maps/KirijosMansionMainHall/scripts.pory"
	delay 30
# 20 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_0
# 21 "data/maps/KirijosMansionMainHall/scripts.pory"
	waitmovement 0
# 22 "data/maps/KirijosMansionMainHall/scripts.pory"
	msgbox KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_0
# 23 "data/maps/KirijosMansionMainHall/scripts.pory"
	closemessage
# 24 "data/maps/KirijosMansionMainHall/scripts.pory"
	playse SE_PIN
# 25 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 26 "data/maps/KirijosMansionMainHall/scripts.pory"
	waitmovement 0
# 27 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 28 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_TAKEHARU, KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_1
# 29 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_2
# 30 "data/maps/KirijosMansionMainHall/scripts.pory"
	waitmovement 0
# 31 "data/maps/KirijosMansionMainHall/scripts.pory"
	msgbox KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_1
# 42 "data/maps/KirijosMansionMainHall/scripts.pory"
	closemessage
# 43 "data/maps/KirijosMansionMainHall/scripts.pory"
	delay 20
# 44 "data/maps/KirijosMansionMainHall/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 45 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, walkinplaceright
# 46 "data/maps/KirijosMansionMainHall/scripts.pory"
	waitmoncry
# 47 "data/maps/KirijosMansionMainHall/scripts.pory"
	waitmovement 0
# 48 "data/maps/KirijosMansionMainHall/scripts.pory"
	msgbox KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_2
# 50 "data/maps/KirijosMansionMainHall/scripts.pory"
	closemessage
# 51 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_TAKEHARU, faceup
# 52 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, facedown
# 53 "data/maps/KirijosMansionMainHall/scripts.pory"
	waitmovement 0
# 54 "data/maps/KirijosMansionMainHall/scripts.pory"
	delay 60
# 55 "data/maps/KirijosMansionMainHall/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 56 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, walkinplacedown
# 57 "data/maps/KirijosMansionMainHall/scripts.pory"
	waitmovement 0
# 58 "data/maps/KirijosMansionMainHall/scripts.pory"
	waitmoncry
# 59 "data/maps/KirijosMansionMainHall/scripts.pory"
	delay 30
# 60 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_3
# 61 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_TAKEHARU, faceright
# 62 "data/maps/KirijosMansionMainHall/scripts.pory"
	waitmovement 0
# 63 "data/maps/KirijosMansionMainHall/scripts.pory"
	delay 30
# 64 "data/maps/KirijosMansionMainHall/scripts.pory"
	msgbox KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_3
# 68 "data/maps/KirijosMansionMainHall/scripts.pory"
	closemessage
# 69 "data/maps/KirijosMansionMainHall/scripts.pory"
	applymovement LOCALID_INTELEON, KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_4
# 70 "data/maps/KirijosMansionMainHall/scripts.pory"
	waitmovement 0
# 71 "data/maps/KirijosMansionMainHall/scripts.pory"
	removeobject LOCALID_INTELEON
# 72 "data/maps/KirijosMansionMainHall/scripts.pory"
	setflag FLAG_TEMP_1
# 73 "data/maps/KirijosMansionMainHall/scripts.pory"
	delay 30
# 74 "data/maps/KirijosMansionMainHall/scripts.pory"
	call Eventscript_CutsceneEnds
# 75 "data/maps/KirijosMansionMainHall/scripts.pory"
	release
	end


KirijosMansionMainHall_Eventscript_Takeharu::
# 80 "data/maps/KirijosMansionMainHall/scripts.pory"
	lock
# 81 "data/maps/KirijosMansionMainHall/scripts.pory"
	faceplayer
# 82 "data/maps/KirijosMansionMainHall/scripts.pory"
	msgbox KirijosMansionMainHall_Eventscript_Takeharu_Text_0
# 85 "data/maps/KirijosMansionMainHall/scripts.pory"
	closemessage
# 86 "data/maps/KirijosMansionMainHall/scripts.pory"
	release
	return


# 20 "data/maps/KirijosMansionMainHall/scripts.pory"
KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_0:
# 20 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_down
# 20 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_down
# 20 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_down
	step_end

# 28 "data/maps/KirijosMansionMainHall/scripts.pory"
KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_1:
# 28 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_down
# 28 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_down
# 28 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_down
# 28 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_right
	step_end

# 29 "data/maps/KirijosMansionMainHall/scripts.pory"
KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_2:
# 29 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_down
# 29 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_down
# 29 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_right
# 29 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_right
	step_end

# 60 "data/maps/KirijosMansionMainHall/scripts.pory"
KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_3:
# 60 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_right
# 60 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_right
# 60 "data/maps/KirijosMansionMainHall/scripts.pory"
	face_left
	step_end

# 69 "data/maps/KirijosMansionMainHall/scripts.pory"
KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Movement_4:
# 69 "data/maps/KirijosMansionMainHall/scripts.pory"
	walk_down
# 69 "data/maps/KirijosMansionMainHall/scripts.pory"
	set_invisible
	step_end

KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_0:
# 22 "data/maps/KirijosMansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_TAKEHARU}Mitsuru.$"

KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_1:
# 31 "data/maps/KirijosMansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Father...\p"
	.string "{SPEAKER NAME_TAKEHARU}{DESTROY_MUGSHOT}So you really intend to go, no matter\n"
	.string "what I say.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I'm sorry, Father...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}But we already talked about this\n"
	.string "before.\p"
	.string "This is also my responsibility as a\n"
	.string "Kirijo.\p"
	.string "I simply cannot sit still while our\n"
	.string "family's name is getting further\l"
	.string "tainted.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}Please... don't stop me, Father.\p"
	.string "{SPEAKER NAME_TAKEHARU}{DESTROY_MUGSHOT}You already know I don't fully agree\n"
	.string "with this.\p"
	.string "No sane parents would let their\n"
	.string "children do something this dangerous.\p"
	.string "However, I'm also aware that I won't be\n"
	.string "able to stop you, since stubborness\l"
	.string "apparently runs in both of our veins.\p"
	.string "So please, take Inteleon with you. He\n"
	.string "can look over you in my stead.$"

KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_2:
# 48 "data/maps/KirijosMansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Father.....\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}If that'll put your mind more at ease,\n"
	.string "I'll do so.$"

KirijosMansionMainHall_Eventscript_TakeharuStoppingMitsuru_Text_3:
# 64 "data/maps/KirijosMansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I must go now.\p"
	.string "Please take care, Father.\p"
	.string "{SPEAKER NAME_TAKEHARU}{DESTROY_MUGSHOT}Stay safe, and come back to me, Mitsuru.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}I'm fully intended to.$"

KirijosMansionMainHall_Eventscript_Takeharu_Text_0:
# 82 "data/maps/KirijosMansionMainHall/scripts.pory"
	.string "{SPEAKER NAME_TAKEHARU}If you need anything on your journey,\n"
	.string "just make a call to home.\p"
	.string "I'll be sure to assist you whenever.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That is assuring. Thank you, Father.$"
