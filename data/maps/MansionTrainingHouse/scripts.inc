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
	lock
# 9 "data/maps/MansionTrainingHouse/scripts.pory"
	checkplayergender
# 10 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq MansionTrainingHouse_Eventscript_MoveTutor_2
# 18 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_2
# 19 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 20 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_3
# 21 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
MansionTrainingHouse_Eventscript_MoveTutor_1:
# 23 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

MansionTrainingHouse_Eventscript_MoveTutor_2:
# 12 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 13 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 14 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_1
# 15 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
	goto MansionTrainingHouse_Eventscript_MoveTutor_1


	.align 2
# 27 "data/maps/MansionTrainingHouse/scripts.pory"
MansionTrainingHouse_MoveTutor:
# 28 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ECHOED_VOICE
# 29 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_BULLET_SEED
# 30 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CHILLING_WATER
# 31 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FLAME_CHARGE
# 32 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_THUNDER_WAVE
# 33 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ICY_WIND
# 34 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_TRIPLE_KICK
# 35 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_SMOG
# 36 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_MUD_SHOT
# 37 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FEATHER_DANCE
# 38 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_HEART_STAMP
# 39 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_INFESTATION
# 40 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ROLLOUT
# 41 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CONFUSE_RAY
# 42 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FAKE_TEARS
# 43 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_METAL_CLAW
# 44 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_DRAINING_KISS
# 45 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

MansionTrainingHouse_Eventscript_FurfrouStyleSetter::
# 49 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 50 "data/maps/MansionTrainingHouse/scripts.pory"
	faceplayer
# 51 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 52 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1, MSGBOX_YESNO
# 55 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 56 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1
# 60 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2
# 61 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 62 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1:
# 57 "data/maps/MansionTrainingHouse/scripts.pory"
	call CheckIfHasFurfrou
	return


ShowMultiChoiceFurfrouStyle1::
# 68 "data/maps/MansionTrainingHouse/scripts.pory"
	multichoice 21, 3, MULTI_FURFROU_STYLE, 0
# 69 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShowMultiChoiceFurfrouStyle1_2
ShowMultiChoiceFurfrouStyle1_1:
# 72 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShowMultiChoiceFurfrouStyle1_4
# 75 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShowMultiChoiceFurfrouStyle1_5
# 78 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShowMultiChoiceFurfrouStyle1_6
# 81 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShowMultiChoiceFurfrouStyle1_7
# 84 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShowMultiChoiceFurfrouStyle1_8
# 88 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowMultiChoiceFurfrouStyle1_Text_0
# 90 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 91 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

ShowMultiChoiceFurfrouStyle1_2:
# 70 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouNatural
	goto ShowMultiChoiceFurfrouStyle1_1

ShowMultiChoiceFurfrouStyle1_4:
# 73 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouHeart
	return

ShowMultiChoiceFurfrouStyle1_5:
# 76 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouStar
	return

ShowMultiChoiceFurfrouStyle1_6:
# 79 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDiamond
	return

ShowMultiChoiceFurfrouStyle1_7:
# 82 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDebutante
	return

ShowMultiChoiceFurfrouStyle1_8:
# 85 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return


ShowMultiChoiceFurfrouStyle2::
# 97 "data/maps/MansionTrainingHouse/scripts.pory"
	multichoice 21, 3, MULTI_FURFROU_STYLE_2, 0
# 98 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShowMultiChoiceFurfrouStyle2_1
# 101 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShowMultiChoiceFurfrouStyle2_2
# 104 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShowMultiChoiceFurfrouStyle2_3
# 107 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShowMultiChoiceFurfrouStyle2_4
# 110 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShowMultiChoiceFurfrouStyle2_5
# 113 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShowMultiChoiceFurfrouStyle2_6
# 117 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowMultiChoiceFurfrouStyle1_Text_0
# 119 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 120 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

ShowMultiChoiceFurfrouStyle2_1:
# 99 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouMatron
	return

ShowMultiChoiceFurfrouStyle2_2:
# 102 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDandy
	return

ShowMultiChoiceFurfrouStyle2_3:
# 105 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouLaReine
	return

ShowMultiChoiceFurfrouStyle2_4:
# 108 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouKabuki
	return

ShowMultiChoiceFurfrouStyle2_5:
# 111 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouPharaoh
	return

ShowMultiChoiceFurfrouStyle2_6:
# 114 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return


ShowFurfrouNatural::
# 126 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_NATURAL, 3, 3
# 127 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouNatural_Text_0, MSGBOX_YESNO
# 128 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 129 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 130 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouNatural_1
# 140 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouNatural_1:
# 131 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToNatural
# 132 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 133 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 134 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 135 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 136 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouHeart::
# 145 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_HEART, 3, 3
# 146 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouHeart_Text_0, MSGBOX_YESNO
# 147 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 148 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 149 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouHeart_1
# 160 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouHeart_1:
# 151 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToHeart
# 152 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 153 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 154 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 155 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 156 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouStar::
# 165 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_STAR, 3, 3
# 166 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouStar_Text_0, MSGBOX_YESNO
# 167 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 168 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 169 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouStar_1
# 179 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouStar_1:
# 170 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToStar
# 171 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 172 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 173 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 174 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 175 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDiamond::
# 183 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DIAMOND, 3, 3
# 184 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDiamond_Text_0, MSGBOX_YESNO
# 185 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 186 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 187 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDiamond_1
# 198 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouDiamond_1:
# 189 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDiamond
# 190 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 191 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 192 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 193 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 194 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDebutante::
# 203 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DEBUTANTE, 3, 3
# 204 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDebutante_Text_0, MSGBOX_YESNO
# 205 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 206 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 207 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDebutante_1
# 218 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouDebutante_1:
# 209 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDebutante
# 210 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 211 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 212 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 213 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 214 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouMatron::
# 223 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_MATRON, 3, 3
# 224 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouMatron_Text_0, MSGBOX_YESNO
# 225 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 226 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 227 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouMatron_1
# 238 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouMatron_1:
# 229 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToMatron
# 230 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 231 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 232 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 233 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 234 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDandy::
# 243 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DANDY, 3, 3
# 244 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDandy_Text_0, MSGBOX_YESNO
# 245 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 246 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 247 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDandy_1
# 257 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouDandy_1:
# 248 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDandy
# 249 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 250 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 251 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 252 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 253 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouLaReine::
# 262 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_LA_REINE, 3, 3
# 263 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouLaReine_Text_0, MSGBOX_YESNO
# 264 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 265 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 266 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouLaReine_1
# 276 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouLaReine_1:
# 267 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToLaReine
# 268 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 269 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 270 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 271 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 272 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouKabuki::
# 281 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_KABUKI, 3, 3
# 282 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouKabuki_Text_0, MSGBOX_YESNO
# 283 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 284 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 285 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouKabuki_1
# 295 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouKabuki_1:
# 286 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToKabuki
# 287 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 288 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 289 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 290 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 291 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouPharaoh::
# 300 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_PHARAOH, 3, 3
# 301 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouPharaoh_Text_0, MSGBOX_YESNO
# 302 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 303 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 304 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouPharaoh_1
# 314 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouPharaoh_1:
# 305 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToPharaoh
# 306 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 307 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 308 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 309 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 310 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ChangeFormFadeScreen::
# 319 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 320 "data/maps/MansionTrainingHouse/scripts.pory"
	delay 30
# 321 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	return


ChangeFurfrouToNatural::
# 325 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 326 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 327 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 328 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_NATURAL
	return


ChangeFurfrouToHeart::
# 332 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 333 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 334 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 335 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_HEART
	return


ChangeFurfrouToStar::
# 339 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 340 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 341 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 342 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_STAR
	return


ChangeFurfrouToDiamond::
# 346 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 347 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 348 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 349 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DIAMOND
	return


ChangeFurfrouToDebutante::
# 353 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 354 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 355 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 356 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DEBUTANTE
	return


ChangeFurfrouToMatron::
# 360 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 361 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 362 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 363 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_MATRON
	return


ChangeFurfrouToDandy::
# 367 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 368 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 369 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 370 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DANDY
	return


ChangeFurfrouToLaReine::
# 374 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 375 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 376 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 377 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_LA_REINE
	return


ChangeFurfrouToKabuki::
# 381 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 382 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 383 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 384 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_KABUKI
	return


ChangeFurfrouToPharaoh::
# 388 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 389 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 390 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 391 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_PHARAOH
	return


MansionTrainingHouse_Eventscript_Furfrou::
# 400 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 401 "data/maps/MansionTrainingHouse/scripts.pory"
	faceplayer
# 402 "data/maps/MansionTrainingHouse/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 403 "data/maps/MansionTrainingHouse/scripts.pory"
	waitmoncry
# 404 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


CheckIfHasFurfrou::
# 409 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_NATURAL
# 410 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_2
CheckIfHasFurfrou_1:
# 413 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_5
CheckIfHasFurfrou_4:
# 416 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_8
CheckIfHasFurfrou_7:
# 419 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_11
CheckIfHasFurfrou_10:
# 422 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_14
CheckIfHasFurfrou_13:
# 425 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_17
CheckIfHasFurfrou_16:
# 428 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_20
CheckIfHasFurfrou_19:
# 431 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_23
CheckIfHasFurfrou_22:
# 434 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_26
CheckIfHasFurfrou_25:
# 437 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_28
# 444 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox CheckIfHasFurfrou_Text_1
# 445 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 446 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

CheckIfHasFurfrou_2:
# 411 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_HEART
	goto CheckIfHasFurfrou_1

CheckIfHasFurfrou_5:
# 414 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_STAR
	goto CheckIfHasFurfrou_4

CheckIfHasFurfrou_8:
# 417 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DIAMOND
	goto CheckIfHasFurfrou_7

CheckIfHasFurfrou_11:
# 420 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DEBUTANTE
	goto CheckIfHasFurfrou_10

CheckIfHasFurfrou_14:
# 423 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_MATRON
	goto CheckIfHasFurfrou_13

CheckIfHasFurfrou_17:
# 426 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DANDY
	goto CheckIfHasFurfrou_16

CheckIfHasFurfrou_20:
# 429 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_LA_REINE
	goto CheckIfHasFurfrou_19

CheckIfHasFurfrou_23:
# 432 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_KABUKI
	goto CheckIfHasFurfrou_22

CheckIfHasFurfrou_26:
# 435 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_PHARAOH
	goto CheckIfHasFurfrou_25

CheckIfHasFurfrou_28:
# 438 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox CheckIfHasFurfrou_Text_0
# 439 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 440 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


testcompanionbutton::
# 451 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 452 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox testcompanionbutton_Text_0
# 453 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 454 "data/maps/MansionTrainingHouse/scripts.pory"
	setflag FLAG_COMPANION_MENU
# 455 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


testquestbutton::
# 460 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 461 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox testquestbutton_Text_0
# 462 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 463 "data/maps/MansionTrainingHouse/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 464 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


MansionTrainingHouse_Eventscript_MoveTutor_Text_0:
# 12 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, Young Lady. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_1:
# 14 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, Young Lady.$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_2:
# 18 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, {PLAYER}. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_3:
# 20 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, {PLAYER}.$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0:
# 51 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Yoshiaki$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1:
# 52 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "I'm saving money to open a salon of my\n"
	.string "own.\p"
	.string "Furfrou visits the mansion's garden\n"
	.string "from time to time so I caught one\l"
	.string "myself to practice my fur trimming skill.\p"
	.string "Would you like me to style up your\n"
	.string "Furfrou too?$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2:
# 60 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "If you ever want to style your Furfrou,\n"
	.string "just ask me. I'll do it free of charge.$"

ShowMultiChoiceFurfrouStyle1_Text_0:
# 88 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "If you want to change your Furfrou's\n"
	.string "style, feel free to ask me.\p"
	.string "It's free of charge, I just want to\n"
	.string "practice.$"

ShowFurfrouNatural_Text_0:
# 127 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Natural style?$"

ShowFurfrouHeart_Text_0:
# 146 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Heart style?$"

ShowFurfrouStar_Text_0:
# 166 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Star style?$"

ShowFurfrouDiamond_Text_0:
# 184 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Diamond style?$"

ShowFurfrouDebutante_Text_0:
# 204 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Debutante style?$"

ShowFurfrouMatron_Text_0:
# 224 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Matron style?$"

ShowFurfrouDandy_Text_0:
# 244 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Dandy style?$"

ShowFurfrouLaReine_Text_0:
# 263 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the La Reine style?$"

ShowFurfrouKabuki_Text_0:
# 282 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Kabuki style?$"

ShowFurfrouPharaoh_Text_0:
# 301 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Pharaoh style?$"

ChangeFurfrouToNatural_Text_0:
# 325 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Please wait a moment.$"

CheckIfHasFurfrou_Text_0:
# 438 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "But you don't have a Furfrou in party...$"

CheckIfHasFurfrou_Text_1:
# 444 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Which style do you want for your\n"
	.string "Furfrou?$"

testcompanionbutton_Text_0:
# 452 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "unlocking companion button and menu$"

testquestbutton_Text_0:
# 461 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "unlocking quest button and menu$"

FurfrouStyleChangedPerfectly::
# 394 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "All perfectly done!\p"
	.string "If you want to change your Furfrou's\n"
	.string "style again, feel free to ask me.$"
