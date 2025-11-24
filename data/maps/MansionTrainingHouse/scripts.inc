MansionTrainingHouse_MapScripts::
# 2 "data/maps/MansionTrainingHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MansionTrainingHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MansionTrainingHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MansionTrainingHouse/scripts.pory"
	setrespawn HEAL_LOCATION_MANSION_TRAINING_HOUSE
	return


MansionTrainingHouse_Eventscript_MoveTutor::
# 8 "data/maps/MansionTrainingHouse/scripts.pory"
	hidetalkbutton
# 9 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 10 "data/maps/MansionTrainingHouse/scripts.pory"
	checkplayergender
# 11 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq MansionTrainingHouse_Eventscript_MoveTutor_2
# 21 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 22 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_3
# 23 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 24 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 25 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_4
# 26 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
MansionTrainingHouse_Eventscript_MoveTutor_1:
# 28 "data/maps/MansionTrainingHouse/scripts.pory"
	release
# 29 "data/maps/MansionTrainingHouse/scripts.pory"
	showtalkbutton
	end

MansionTrainingHouse_Eventscript_MoveTutor_2:
# 13 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 14 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_1
# 15 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 16 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 17 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_2
# 18 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
	goto MansionTrainingHouse_Eventscript_MoveTutor_1


	.align 2
# 33 "data/maps/MansionTrainingHouse/scripts.pory"
MansionTrainingHouse_MoveTutor:
# 34 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ECHOED_VOICE
# 35 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_BULLET_SEED
# 36 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CHILLING_WATER
# 37 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FLAME_CHARGE
# 38 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_THUNDER_WAVE
# 39 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ICY_WIND
# 40 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_TRIPLE_KICK
# 41 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_SMOG
# 42 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_MUD_SHOT
# 43 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FEATHER_DANCE
# 44 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_HEART_STAMP
# 45 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_INFESTATION
# 46 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ROLLOUT
# 47 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CONFUSE_RAY
# 48 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FAKE_TEARS
# 49 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_METAL_CLAW
# 50 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_DRAINING_KISS
# 51 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

MansionTrainingHouse_Eventscript_FurfrouStyleSetter::
# 55 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 56 "data/maps/MansionTrainingHouse/scripts.pory"
	faceplayer
# 57 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 58 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1, MSGBOX_YESNO
# 61 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 62 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1
# 66 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 67 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2
# 68 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 69 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1:
# 63 "data/maps/MansionTrainingHouse/scripts.pory"
	call CheckIfHasFurfrou
	return


ShowMultiChoiceFurfrouStyle1::
# 75 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 76 "data/maps/MansionTrainingHouse/scripts.pory"
	multichoice 21, 3, MULTI_FURFROU_STYLE, 0
# 77 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShowMultiChoiceFurfrouStyle1_2
ShowMultiChoiceFurfrouStyle1_1:
# 80 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShowMultiChoiceFurfrouStyle1_4
# 83 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShowMultiChoiceFurfrouStyle1_5
# 86 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShowMultiChoiceFurfrouStyle1_6
# 89 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShowMultiChoiceFurfrouStyle1_7
# 92 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShowMultiChoiceFurfrouStyle1_8
# 96 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 97 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowMultiChoiceFurfrouStyle1_Text_0
# 99 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 100 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

ShowMultiChoiceFurfrouStyle1_2:
# 78 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouNatural
	goto ShowMultiChoiceFurfrouStyle1_1

ShowMultiChoiceFurfrouStyle1_4:
# 81 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouHeart
	return

ShowMultiChoiceFurfrouStyle1_5:
# 84 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouStar
	return

ShowMultiChoiceFurfrouStyle1_6:
# 87 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDiamond
	return

ShowMultiChoiceFurfrouStyle1_7:
# 90 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDebutante
	return

ShowMultiChoiceFurfrouStyle1_8:
# 93 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return


ShowMultiChoiceFurfrouStyle2::
# 106 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 107 "data/maps/MansionTrainingHouse/scripts.pory"
	multichoice 21, 3, MULTI_FURFROU_STYLE_2, 0
# 108 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShowMultiChoiceFurfrouStyle2_1
# 111 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShowMultiChoiceFurfrouStyle2_2
# 114 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShowMultiChoiceFurfrouStyle2_3
# 117 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShowMultiChoiceFurfrouStyle2_4
# 120 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShowMultiChoiceFurfrouStyle2_5
# 123 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShowMultiChoiceFurfrouStyle2_6
# 127 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 128 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowMultiChoiceFurfrouStyle1_Text_0
# 130 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 131 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

ShowMultiChoiceFurfrouStyle2_1:
# 109 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouMatron
	return

ShowMultiChoiceFurfrouStyle2_2:
# 112 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDandy
	return

ShowMultiChoiceFurfrouStyle2_3:
# 115 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouLaReine
	return

ShowMultiChoiceFurfrouStyle2_4:
# 118 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouKabuki
	return

ShowMultiChoiceFurfrouStyle2_5:
# 121 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouPharaoh
	return

ShowMultiChoiceFurfrouStyle2_6:
# 124 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return


ShowFurfrouNatural::
# 137 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_NATURAL, 3, 3
# 138 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouNatural_Text_0, MSGBOX_YESNO
# 139 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 140 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 141 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouNatural_1
# 151 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouNatural_1:
# 142 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToNatural
# 143 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 144 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 145 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 146 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 147 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouHeart::
# 156 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_HEART, 3, 3
# 157 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouHeart_Text_0, MSGBOX_YESNO
# 158 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 159 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 160 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouHeart_1
# 171 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouHeart_1:
# 162 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToHeart
# 163 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 164 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 165 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 166 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 167 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouStar::
# 176 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_STAR, 3, 3
# 177 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouStar_Text_0, MSGBOX_YESNO
# 178 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 179 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 180 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouStar_1
# 190 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouStar_1:
# 181 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToStar
# 182 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 183 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 184 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 185 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 186 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDiamond::
# 194 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DIAMOND, 3, 3
# 195 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDiamond_Text_0, MSGBOX_YESNO
# 196 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 197 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 198 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDiamond_1
# 209 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouDiamond_1:
# 200 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDiamond
# 201 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 202 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 203 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 204 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 205 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDebutante::
# 214 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DEBUTANTE, 3, 3
# 215 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDebutante_Text_0, MSGBOX_YESNO
# 216 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 217 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 218 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDebutante_1
# 229 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouDebutante_1:
# 220 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDebutante
# 221 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 222 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 223 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 224 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 225 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouMatron::
# 234 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_MATRON, 3, 3
# 235 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouMatron_Text_0, MSGBOX_YESNO
# 236 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 237 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 238 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouMatron_1
# 249 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouMatron_1:
# 240 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToMatron
# 241 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 242 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 243 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 244 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 245 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDandy::
# 254 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DANDY, 3, 3
# 255 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDandy_Text_0, MSGBOX_YESNO
# 256 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 257 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 258 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDandy_1
# 268 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouDandy_1:
# 259 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDandy
# 260 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 261 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 262 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 263 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 264 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouLaReine::
# 273 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_LA_REINE, 3, 3
# 274 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouLaReine_Text_0, MSGBOX_YESNO
# 275 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 276 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 277 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouLaReine_1
# 287 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouLaReine_1:
# 278 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToLaReine
# 279 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 280 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 281 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 282 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 283 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouKabuki::
# 292 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_KABUKI, 3, 3
# 293 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouKabuki_Text_0, MSGBOX_YESNO
# 294 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 295 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 296 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouKabuki_1
# 306 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouKabuki_1:
# 297 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToKabuki
# 298 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 299 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 300 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 301 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 302 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouPharaoh::
# 311 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_PHARAOH, 3, 3
# 312 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouPharaoh_Text_0, MSGBOX_YESNO
# 313 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 314 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 315 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouPharaoh_1
# 325 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouPharaoh_1:
# 316 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToPharaoh
# 317 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 318 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 319 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 320 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 321 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ChangeFormFadeScreen::
# 330 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 331 "data/maps/MansionTrainingHouse/scripts.pory"
	delay 30
# 332 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	return


ChangeFurfrouToNatural::
# 336 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 337 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 338 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 339 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_NATURAL
	return


ChangeFurfrouToHeart::
# 343 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 344 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 345 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 346 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_HEART
	return


ChangeFurfrouToStar::
# 350 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 351 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 352 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 353 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_STAR
	return


ChangeFurfrouToDiamond::
# 357 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 358 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 359 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 360 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DIAMOND
	return


ChangeFurfrouToDebutante::
# 364 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 365 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 366 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 367 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DEBUTANTE
	return


ChangeFurfrouToMatron::
# 371 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 372 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 373 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 374 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_MATRON
	return


ChangeFurfrouToDandy::
# 378 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 379 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 380 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 381 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DANDY
	return


ChangeFurfrouToLaReine::
# 385 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 386 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 387 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 388 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_LA_REINE
	return


ChangeFurfrouToKabuki::
# 392 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 393 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 394 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 395 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_KABUKI
	return


ChangeFurfrouToPharaoh::
# 399 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 400 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 401 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 402 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_PHARAOH
	return


MansionTrainingHouse_Eventscript_Furfrou::
# 411 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 412 "data/maps/MansionTrainingHouse/scripts.pory"
	faceplayer
# 413 "data/maps/MansionTrainingHouse/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 414 "data/maps/MansionTrainingHouse/scripts.pory"
	waitmoncry
# 415 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


CheckIfHasFurfrou::
# 420 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_NATURAL
# 421 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_2
CheckIfHasFurfrou_1:
# 424 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_5
CheckIfHasFurfrou_4:
# 427 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_8
CheckIfHasFurfrou_7:
# 430 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_11
CheckIfHasFurfrou_10:
# 433 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_14
CheckIfHasFurfrou_13:
# 436 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_17
CheckIfHasFurfrou_16:
# 439 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_20
CheckIfHasFurfrou_19:
# 442 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_23
CheckIfHasFurfrou_22:
# 445 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_26
CheckIfHasFurfrou_25:
# 448 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_28
# 456 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 457 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox CheckIfHasFurfrou_Text_1
# 458 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 459 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

CheckIfHasFurfrou_2:
# 422 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_HEART
	goto CheckIfHasFurfrou_1

CheckIfHasFurfrou_5:
# 425 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_STAR
	goto CheckIfHasFurfrou_4

CheckIfHasFurfrou_8:
# 428 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DIAMOND
	goto CheckIfHasFurfrou_7

CheckIfHasFurfrou_11:
# 431 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DEBUTANTE
	goto CheckIfHasFurfrou_10

CheckIfHasFurfrou_14:
# 434 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_MATRON
	goto CheckIfHasFurfrou_13

CheckIfHasFurfrou_17:
# 437 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DANDY
	goto CheckIfHasFurfrou_16

CheckIfHasFurfrou_20:
# 440 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_LA_REINE
	goto CheckIfHasFurfrou_19

CheckIfHasFurfrou_23:
# 443 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_KABUKI
	goto CheckIfHasFurfrou_22

CheckIfHasFurfrou_26:
# 446 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_PHARAOH
	goto CheckIfHasFurfrou_25

CheckIfHasFurfrou_28:
# 449 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 450 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox CheckIfHasFurfrou_Text_0
# 451 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 452 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


MansionTrainingHouse_Eventscript_MoveTutor_Text_0:
# 13 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Ayaka$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_1:
# 14 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, Young Lady. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_2:
# 17 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, Young Lady.$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_3:
# 22 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, {PLAYER}. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_4:
# 25 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, {PLAYER}.$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0:
# 57 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Yoshiaki$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1:
# 58 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "I'm saving money to open a salon of my\n"
	.string "own.\p"
	.string "Furfrou visits the mansion's garden\n"
	.string "from time to time so I caught one\l"
	.string "myself to practice my fur trimming\l"
	.string "skills.\p"
	.string "Would you like me to style up your\n"
	.string "Furfrou too?$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2:
# 67 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "If you ever want to style your Furfrou,\n"
	.string "just ask me. I'll do it free of charge.$"

ShowMultiChoiceFurfrouStyle1_Text_0:
# 97 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "If you want to change your Furfrou's\n"
	.string "style, feel free to ask me.\p"
	.string "It's free of charge, I just want to\n"
	.string "practice.$"

ShowFurfrouNatural_Text_0:
# 138 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Natural style?$"

ShowFurfrouHeart_Text_0:
# 157 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Heart style?$"

ShowFurfrouStar_Text_0:
# 177 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Star style?$"

ShowFurfrouDiamond_Text_0:
# 195 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Diamond style?$"

ShowFurfrouDebutante_Text_0:
# 215 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Debutante style?$"

ShowFurfrouMatron_Text_0:
# 235 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Matron style?$"

ShowFurfrouDandy_Text_0:
# 255 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Dandy style?$"

ShowFurfrouLaReine_Text_0:
# 274 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the La Reine style?$"

ShowFurfrouKabuki_Text_0:
# 293 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Kabuki style?$"

ShowFurfrouPharaoh_Text_0:
# 312 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Pharaoh style?$"

ChangeFurfrouToNatural_Text_0:
# 336 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Please wait a moment.$"

CheckIfHasFurfrou_Text_0:
# 450 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "But you don't have a Furfrou in party...$"

CheckIfHasFurfrou_Text_1:
# 457 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Which style do you want for your\n"
	.string "Furfrou?$"

FurfrouStyleChangedPerfectly::
# 405 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "All perfectly done!\p"
	.string "If you want to change your Furfrou's\n"
	.string "style again, feel free to ask me.$"
