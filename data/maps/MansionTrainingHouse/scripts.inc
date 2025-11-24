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
# 19 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_2
# 20 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 21 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_3
# 22 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
MansionTrainingHouse_Eventscript_MoveTutor_1:
# 24 "data/maps/MansionTrainingHouse/scripts.pory"
	release
# 25 "data/maps/MansionTrainingHouse/scripts.pory"
	showtalkbutton
	end

MansionTrainingHouse_Eventscript_MoveTutor_2:
# 13 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 14 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 15 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_1
# 16 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
	goto MansionTrainingHouse_Eventscript_MoveTutor_1


	.align 2
# 29 "data/maps/MansionTrainingHouse/scripts.pory"
MansionTrainingHouse_MoveTutor:
# 30 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ECHOED_VOICE
# 31 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_BULLET_SEED
# 32 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CHILLING_WATER
# 33 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FLAME_CHARGE
# 34 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_THUNDER_WAVE
# 35 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ICY_WIND
# 36 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_TRIPLE_KICK
# 37 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_SMOG
# 38 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_MUD_SHOT
# 39 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FEATHER_DANCE
# 40 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_HEART_STAMP
# 41 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_INFESTATION
# 42 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ROLLOUT
# 43 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CONFUSE_RAY
# 44 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FAKE_TEARS
# 45 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_METAL_CLAW
# 46 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_DRAINING_KISS
# 47 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

MansionTrainingHouse_Eventscript_FurfrouStyleSetter::
# 51 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 52 "data/maps/MansionTrainingHouse/scripts.pory"
	faceplayer
# 53 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 54 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1, MSGBOX_YESNO
# 57 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 58 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1
# 62 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2
# 63 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 64 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1:
# 59 "data/maps/MansionTrainingHouse/scripts.pory"
	call CheckIfHasFurfrou
	return


ShowMultiChoiceFurfrouStyle1::
# 70 "data/maps/MansionTrainingHouse/scripts.pory"
	multichoice 21, 3, MULTI_FURFROU_STYLE, 0
# 71 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShowMultiChoiceFurfrouStyle1_2
ShowMultiChoiceFurfrouStyle1_1:
# 74 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShowMultiChoiceFurfrouStyle1_4
# 77 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShowMultiChoiceFurfrouStyle1_5
# 80 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShowMultiChoiceFurfrouStyle1_6
# 83 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShowMultiChoiceFurfrouStyle1_7
# 86 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShowMultiChoiceFurfrouStyle1_8
# 90 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowMultiChoiceFurfrouStyle1_Text_0
# 92 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 93 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

ShowMultiChoiceFurfrouStyle1_2:
# 72 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouNatural
	goto ShowMultiChoiceFurfrouStyle1_1

ShowMultiChoiceFurfrouStyle1_4:
# 75 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouHeart
	return

ShowMultiChoiceFurfrouStyle1_5:
# 78 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouStar
	return

ShowMultiChoiceFurfrouStyle1_6:
# 81 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDiamond
	return

ShowMultiChoiceFurfrouStyle1_7:
# 84 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDebutante
	return

ShowMultiChoiceFurfrouStyle1_8:
# 87 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return


ShowMultiChoiceFurfrouStyle2::
# 99 "data/maps/MansionTrainingHouse/scripts.pory"
	multichoice 21, 3, MULTI_FURFROU_STYLE_2, 0
# 100 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShowMultiChoiceFurfrouStyle2_1
# 103 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShowMultiChoiceFurfrouStyle2_2
# 106 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShowMultiChoiceFurfrouStyle2_3
# 109 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShowMultiChoiceFurfrouStyle2_4
# 112 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShowMultiChoiceFurfrouStyle2_5
# 115 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShowMultiChoiceFurfrouStyle2_6
# 119 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowMultiChoiceFurfrouStyle1_Text_0
# 121 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 122 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

ShowMultiChoiceFurfrouStyle2_1:
# 101 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouMatron
	return

ShowMultiChoiceFurfrouStyle2_2:
# 104 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDandy
	return

ShowMultiChoiceFurfrouStyle2_3:
# 107 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouLaReine
	return

ShowMultiChoiceFurfrouStyle2_4:
# 110 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouKabuki
	return

ShowMultiChoiceFurfrouStyle2_5:
# 113 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouPharaoh
	return

ShowMultiChoiceFurfrouStyle2_6:
# 116 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return


ShowFurfrouNatural::
# 128 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_NATURAL, 3, 3
# 129 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouNatural_Text_0, MSGBOX_YESNO
# 130 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 131 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 132 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouNatural_1
# 142 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouNatural_1:
# 133 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToNatural
# 134 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 135 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 136 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 137 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 138 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouHeart::
# 147 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_HEART, 3, 3
# 148 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouHeart_Text_0, MSGBOX_YESNO
# 149 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 150 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 151 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouHeart_1
# 162 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouHeart_1:
# 153 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToHeart
# 154 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 155 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 156 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 157 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 158 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouStar::
# 167 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_STAR, 3, 3
# 168 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouStar_Text_0, MSGBOX_YESNO
# 169 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 170 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 171 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouStar_1
# 181 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouStar_1:
# 172 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToStar
# 173 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 174 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 175 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 176 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 177 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDiamond::
# 185 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DIAMOND, 3, 3
# 186 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDiamond_Text_0, MSGBOX_YESNO
# 187 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 188 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 189 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDiamond_1
# 200 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouDiamond_1:
# 191 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDiamond
# 192 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 193 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 194 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 195 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 196 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDebutante::
# 205 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DEBUTANTE, 3, 3
# 206 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDebutante_Text_0, MSGBOX_YESNO
# 207 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 208 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 209 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDebutante_1
# 220 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouDebutante_1:
# 211 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDebutante
# 212 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 213 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 214 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 215 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 216 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouMatron::
# 225 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_MATRON, 3, 3
# 226 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouMatron_Text_0, MSGBOX_YESNO
# 227 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 228 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 229 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouMatron_1
# 240 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouMatron_1:
# 231 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToMatron
# 232 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 233 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 234 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 235 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 236 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDandy::
# 245 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DANDY, 3, 3
# 246 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDandy_Text_0, MSGBOX_YESNO
# 247 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 248 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 249 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDandy_1
# 259 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouDandy_1:
# 250 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDandy
# 251 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 252 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 253 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 254 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 255 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouLaReine::
# 264 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_LA_REINE, 3, 3
# 265 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouLaReine_Text_0, MSGBOX_YESNO
# 266 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 267 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 268 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouLaReine_1
# 278 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouLaReine_1:
# 269 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToLaReine
# 270 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 271 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 272 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 273 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 274 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouKabuki::
# 283 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_KABUKI, 3, 3
# 284 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouKabuki_Text_0, MSGBOX_YESNO
# 285 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 286 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 287 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouKabuki_1
# 297 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouKabuki_1:
# 288 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToKabuki
# 289 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 290 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 291 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 292 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 293 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouPharaoh::
# 302 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_PHARAOH, 3, 3
# 303 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouPharaoh_Text_0, MSGBOX_YESNO
# 304 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 305 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 306 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouPharaoh_1
# 316 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouPharaoh_1:
# 307 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToPharaoh
# 308 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 309 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 310 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 311 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 312 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ChangeFormFadeScreen::
# 321 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 322 "data/maps/MansionTrainingHouse/scripts.pory"
	delay 30
# 323 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	return


ChangeFurfrouToNatural::
# 327 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 328 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 329 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 330 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_NATURAL
	return


ChangeFurfrouToHeart::
# 334 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 335 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 336 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 337 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_HEART
	return


ChangeFurfrouToStar::
# 341 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 342 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 343 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 344 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_STAR
	return


ChangeFurfrouToDiamond::
# 348 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 349 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 350 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 351 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DIAMOND
	return


ChangeFurfrouToDebutante::
# 355 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 356 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 357 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 358 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DEBUTANTE
	return


ChangeFurfrouToMatron::
# 362 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 363 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 364 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 365 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_MATRON
	return


ChangeFurfrouToDandy::
# 369 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 370 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 371 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 372 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DANDY
	return


ChangeFurfrouToLaReine::
# 376 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 377 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 378 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 379 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_LA_REINE
	return


ChangeFurfrouToKabuki::
# 383 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 384 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 385 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 386 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_KABUKI
	return


ChangeFurfrouToPharaoh::
# 390 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 391 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 392 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 393 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_PHARAOH
	return


MansionTrainingHouse_Eventscript_Furfrou::
# 402 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 403 "data/maps/MansionTrainingHouse/scripts.pory"
	faceplayer
# 404 "data/maps/MansionTrainingHouse/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 405 "data/maps/MansionTrainingHouse/scripts.pory"
	waitmoncry
# 406 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


CheckIfHasFurfrou::
# 411 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_NATURAL
# 412 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_2
CheckIfHasFurfrou_1:
# 415 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_5
CheckIfHasFurfrou_4:
# 418 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_8
CheckIfHasFurfrou_7:
# 421 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_11
CheckIfHasFurfrou_10:
# 424 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_14
CheckIfHasFurfrou_13:
# 427 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_17
CheckIfHasFurfrou_16:
# 430 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_20
CheckIfHasFurfrou_19:
# 433 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_23
CheckIfHasFurfrou_22:
# 436 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_26
CheckIfHasFurfrou_25:
# 439 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_28
# 446 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox CheckIfHasFurfrou_Text_1
# 447 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 448 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

CheckIfHasFurfrou_2:
# 413 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_HEART
	goto CheckIfHasFurfrou_1

CheckIfHasFurfrou_5:
# 416 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_STAR
	goto CheckIfHasFurfrou_4

CheckIfHasFurfrou_8:
# 419 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DIAMOND
	goto CheckIfHasFurfrou_7

CheckIfHasFurfrou_11:
# 422 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DEBUTANTE
	goto CheckIfHasFurfrou_10

CheckIfHasFurfrou_14:
# 425 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_MATRON
	goto CheckIfHasFurfrou_13

CheckIfHasFurfrou_17:
# 428 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DANDY
	goto CheckIfHasFurfrou_16

CheckIfHasFurfrou_20:
# 431 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_LA_REINE
	goto CheckIfHasFurfrou_19

CheckIfHasFurfrou_23:
# 434 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_KABUKI
	goto CheckIfHasFurfrou_22

CheckIfHasFurfrou_26:
# 437 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_PHARAOH
	goto CheckIfHasFurfrou_25

CheckIfHasFurfrou_28:
# 440 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox CheckIfHasFurfrou_Text_0
# 441 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 442 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


MansionTrainingHouse_Eventscript_MoveTutor_Text_0:
# 13 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, Young Lady. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_1:
# 15 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, Young Lady.$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_2:
# 19 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, {PLAYER}. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_3:
# 21 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, {PLAYER}.$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0:
# 53 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Yoshiaki$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1:
# 54 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "I'm saving money to open a salon of my\n"
	.string "own.\p"
	.string "Furfrou visits the mansion's garden\n"
	.string "from time to time so I caught one\l"
	.string "myself to practice my fur trimming skill.\p"
	.string "Would you like me to style up your\n"
	.string "Furfrou too?$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2:
# 62 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "If you ever want to style your Furfrou,\n"
	.string "just ask me. I'll do it free of charge.$"

ShowMultiChoiceFurfrouStyle1_Text_0:
# 90 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "If you want to change your Furfrou's\n"
	.string "style, feel free to ask me.\p"
	.string "It's free of charge, I just want to\n"
	.string "practice.$"

ShowFurfrouNatural_Text_0:
# 129 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Natural style?$"

ShowFurfrouHeart_Text_0:
# 148 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Heart style?$"

ShowFurfrouStar_Text_0:
# 168 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Star style?$"

ShowFurfrouDiamond_Text_0:
# 186 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Diamond style?$"

ShowFurfrouDebutante_Text_0:
# 206 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Debutante style?$"

ShowFurfrouMatron_Text_0:
# 226 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Matron style?$"

ShowFurfrouDandy_Text_0:
# 246 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Dandy style?$"

ShowFurfrouLaReine_Text_0:
# 265 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the La Reine style?$"

ShowFurfrouKabuki_Text_0:
# 284 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Kabuki style?$"

ShowFurfrouPharaoh_Text_0:
# 303 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Pharaoh style?$"

ChangeFurfrouToNatural_Text_0:
# 327 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Please wait a moment.$"

CheckIfHasFurfrou_Text_0:
# 440 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "But you don't have a Furfrou in party...$"

CheckIfHasFurfrou_Text_1:
# 446 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Which style do you want for your\n"
	.string "Furfrou?$"

FurfrouStyleChangedPerfectly::
# 396 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "All perfectly done!\p"
	.string "If you want to change your Furfrou's\n"
	.string "style again, feel free to ask me.$"
