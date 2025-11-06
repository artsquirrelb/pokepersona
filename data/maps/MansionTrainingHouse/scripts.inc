MansionTrainingHouse_MapScripts::
	.byte 0


MansionTrainingHouse_Eventscript_MoveTutor::
# 4 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 5 "data/maps/MansionTrainingHouse/scripts.pory"
	checkplayergender
# 6 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq MansionTrainingHouse_Eventscript_MoveTutor_2
# 15 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_2
# 16 "data/maps/MansionTrainingHouse/scripts.pory"
	waitmessage
# 17 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 18 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_3
# 19 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
MansionTrainingHouse_Eventscript_MoveTutor_1:
# 21 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

MansionTrainingHouse_Eventscript_MoveTutor_2:
# 8 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 9 "data/maps/MansionTrainingHouse/scripts.pory"
	waitmessage
# 10 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 11 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_1
# 12 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
	goto MansionTrainingHouse_Eventscript_MoveTutor_1


	.align 2
# 25 "data/maps/MansionTrainingHouse/scripts.pory"
MansionTrainingHouse_MoveTutor:
# 26 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ECHOED_VOICE
# 27 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_BULLET_SEED
# 28 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CHILLING_WATER
# 29 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FLAME_CHARGE
# 30 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CHARGE_BEAM
# 31 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ICY_WIND
# 32 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_TRIPLE_KICK
# 33 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_SMOG
# 34 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_MUD_SHOT
# 35 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FEATHER_DANCE
# 36 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_HEART_STAMP
# 37 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_INFESTATION
# 38 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ROLLOUT
# 39 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CONFUSE_RAY
# 40 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FAKE_TEARS
# 41 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_METAL_CLAW
# 42 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_DRAINING_KISS
# 43 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

MansionTrainingHouse_Eventscript_FurfrouStyleSetter::
# 47 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 48 "data/maps/MansionTrainingHouse/scripts.pory"
	faceplayer
# 49 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 50 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1, MSGBOX_YESNO
# 53 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 54 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1
# 72 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_4
# 73 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 74 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1:
# 55 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU, NO_PARTY_SCREEN
# 56 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, SPECIES_FURFROU
	goto_if_ne MansionTrainingHouse_Eventscript_FurfrouStyleSetter_4
# 63 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_3
# 66 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
	return

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_4:
# 57 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2
# 58 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 59 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ChangeFormFadeScreen::
# 80 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 81 "data/maps/MansionTrainingHouse/scripts.pory"
	delay 30
# 82 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	return


MansionTrainingHouse_Eventscript_MoveTutor_Text_0:
# 8 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, Young Lady. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_1:
# 11 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, Young Lady.$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_2:
# 15 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, {PLAYER}. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_3:
# 18 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, {PLAYER}.$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0:
# 49 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Yoshiaki$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1:
# 50 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "I'm saving money to open a salon of my\n"
	.string "own.\p"
	.string "Furfrou visits our garden from time to\n"
	.string "time so I caught one myself to practice\l"
	.string "my fur trimming skill.\p"
	.string "Would you like me to style up your\n"
	.string "Furfrou too?$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2:
# 57 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "But you don't have a Furfrou in your\n"
	.string "party...$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_3:
# 63 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Which style do you want for your\n"
	.string "Furfrou?$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_4:
# 72 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "If you ever want to style your Furfrou,\n"
	.string "just ask me. I'll do it free of charge.$"
