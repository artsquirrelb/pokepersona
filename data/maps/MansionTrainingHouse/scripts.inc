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
# 14 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_2
# 15 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 16 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_3
# 17 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
MansionTrainingHouse_Eventscript_MoveTutor_1:
# 19 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

MansionTrainingHouse_Eventscript_MoveTutor_2:
# 8 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 9 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 10 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_1
# 11 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
	goto MansionTrainingHouse_Eventscript_MoveTutor_1


	.align 2
# 23 "data/maps/MansionTrainingHouse/scripts.pory"
MansionTrainingHouse_MoveTutor:
# 24 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ECHOED_VOICE
# 25 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_BULLET_SEED
# 26 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CHILLING_WATER
# 27 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FLAME_CHARGE
# 28 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CHARGE_BEAM
# 29 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ICY_WIND
# 30 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_TRIPLE_KICK
# 31 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_SMOG
# 32 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_MUD_SHOT
# 33 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FEATHER_DANCE
# 34 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_HEART_STAMP
# 35 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_INFESTATION
# 36 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ROLLOUT
# 37 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CONFUSE_RAY
# 38 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FAKE_TEARS
# 39 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_METAL_CLAW
# 40 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_DRAINING_KISS
# 41 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

MansionTrainingHouse_Eventscript_FurfrouStyleSetter::
# 45 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 46 "data/maps/MansionTrainingHouse/scripts.pory"
	faceplayer
# 47 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 48 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1, MSGBOX_YESNO
# 51 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 52 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1
# 56 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2
# 57 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 58 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1:
# 53 "data/maps/MansionTrainingHouse/scripts.pory"
	call CheckIfHasFurfrou
	return


ShowMultiChoiceFurfrouStyle1::
# 64 "data/maps/MansionTrainingHouse/scripts.pory"
	multichoice 21, 3, MULTI_FURFROU_STYLE, 0
# 65 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShowMultiChoiceFurfrouStyle1_2
ShowMultiChoiceFurfrouStyle1_1:
# 68 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShowMultiChoiceFurfrouStyle1_4
# 71 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShowMultiChoiceFurfrouStyle1_5
# 74 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShowMultiChoiceFurfrouStyle1_6
# 77 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShowMultiChoiceFurfrouStyle1_7
# 80 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShowMultiChoiceFurfrouStyle1_8
# 84 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowMultiChoiceFurfrouStyle1_Text_0
# 86 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 87 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

ShowMultiChoiceFurfrouStyle1_2:
# 66 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouNatural
	goto ShowMultiChoiceFurfrouStyle1_1

ShowMultiChoiceFurfrouStyle1_4:
# 69 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouHeart
	return

ShowMultiChoiceFurfrouStyle1_5:
# 72 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouStar
	return

ShowMultiChoiceFurfrouStyle1_6:
# 75 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDiamond
	return

ShowMultiChoiceFurfrouStyle1_7:
# 78 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDebutante
	return

ShowMultiChoiceFurfrouStyle1_8:
# 81 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return


ShowMultiChoiceFurfrouStyle2::
# 93 "data/maps/MansionTrainingHouse/scripts.pory"
	multichoice 21, 3, MULTI_FURFROU_STYLE_2, 0
# 94 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShowMultiChoiceFurfrouStyle2_1
# 97 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShowMultiChoiceFurfrouStyle2_2
# 100 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShowMultiChoiceFurfrouStyle2_3
# 103 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShowMultiChoiceFurfrouStyle2_4
# 106 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShowMultiChoiceFurfrouStyle2_5
# 109 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShowMultiChoiceFurfrouStyle2_6
# 113 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowMultiChoiceFurfrouStyle1_Text_0
# 115 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 116 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

ShowMultiChoiceFurfrouStyle2_1:
# 95 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouMatron
	return

ShowMultiChoiceFurfrouStyle2_2:
# 98 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDandy
	return

ShowMultiChoiceFurfrouStyle2_3:
# 101 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouLaReine
	return

ShowMultiChoiceFurfrouStyle2_4:
# 104 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouKabuki
	return

ShowMultiChoiceFurfrouStyle2_5:
# 107 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouPharaoh
	return

ShowMultiChoiceFurfrouStyle2_6:
# 110 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return


ShowFurfrouNatural::
# 122 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_NATURAL, 3, 3
# 123 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouNatural_Text_0, MSGBOX_YESNO
# 124 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 125 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 126 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouNatural_1
# 136 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouNatural_1:
# 127 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToNatural
# 128 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 129 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 130 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 131 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 132 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouHeart::
# 141 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_HEART, 3, 3
# 142 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouHeart_Text_0, MSGBOX_YESNO
# 143 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 144 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 145 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouHeart_1
# 156 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouHeart_1:
# 147 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToHeart
# 148 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 149 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 150 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 151 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 152 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouStar::
# 161 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_STAR, 3, 3
# 162 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouStar_Text_0, MSGBOX_YESNO
# 163 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 164 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 165 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouStar_1
# 175 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouStar_1:
# 166 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToStar
# 167 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 168 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 169 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 170 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 171 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDiamond::
# 179 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DIAMOND, 3, 3
# 180 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDiamond_Text_0, MSGBOX_YESNO
# 181 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 182 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 183 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDiamond_1
# 194 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouDiamond_1:
# 185 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDiamond
# 186 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 187 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 188 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 189 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 190 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDebutante::
# 199 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DEBUTANTE, 3, 3
# 200 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDebutante_Text_0, MSGBOX_YESNO
# 201 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 202 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 203 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDebutante_1
# 214 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouDebutante_1:
# 205 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDebutante
# 206 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 207 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 208 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 209 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 210 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouMatron::
# 219 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_MATRON, 3, 3
# 220 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouMatron_Text_0, MSGBOX_YESNO
# 221 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 222 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 223 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouMatron_1
# 234 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouMatron_1:
# 225 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToMatron
# 226 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 227 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 228 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 229 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 230 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDandy::
# 239 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DANDY, 3, 3
# 240 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDandy_Text_0, MSGBOX_YESNO
# 241 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 242 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 243 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDandy_1
# 253 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouDandy_1:
# 244 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDandy
# 245 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 246 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 247 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 248 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 249 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouLaReine::
# 258 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_LA_REINE, 3, 3
# 259 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouLaReine_Text_0, MSGBOX_YESNO
# 260 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 261 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 262 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouLaReine_1
# 272 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouLaReine_1:
# 263 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToLaReine
# 264 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 265 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 266 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 267 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 268 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouKabuki::
# 277 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_KABUKI, 3, 3
# 278 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouKabuki_Text_0, MSGBOX_YESNO
# 279 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 280 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 281 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouKabuki_1
# 291 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouKabuki_1:
# 282 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToKabuki
# 283 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 284 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 285 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 286 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 287 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouPharaoh::
# 296 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_PHARAOH, 3, 3
# 297 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouPharaoh_Text_0, MSGBOX_YESNO
# 298 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 299 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 300 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouPharaoh_1
# 310 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouPharaoh_1:
# 301 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToPharaoh
# 302 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 303 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 304 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 305 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 306 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ChangeFormFadeScreen::
# 315 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 316 "data/maps/MansionTrainingHouse/scripts.pory"
	delay 30
# 317 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	return


ChangeFurfrouToNatural::
# 321 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 322 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 323 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 324 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_NATURAL
	return


ChangeFurfrouToHeart::
# 328 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 329 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 330 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 331 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_HEART
	return


ChangeFurfrouToStar::
# 335 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 336 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 337 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 338 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_STAR
	return


ChangeFurfrouToDiamond::
# 342 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 343 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 344 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 345 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DIAMOND
	return


ChangeFurfrouToDebutante::
# 349 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 350 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 351 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 352 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DEBUTANTE
	return


ChangeFurfrouToMatron::
# 356 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 357 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 358 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 359 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_MATRON
	return


ChangeFurfrouToDandy::
# 363 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 364 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 365 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 366 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DANDY
	return


ChangeFurfrouToLaReine::
# 370 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 371 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 372 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 373 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_LA_REINE
	return


ChangeFurfrouToKabuki::
# 377 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 378 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 379 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 380 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_KABUKI
	return


ChangeFurfrouToPharaoh::
# 384 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 385 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 386 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 387 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_PHARAOH
	return


MansionTrainingHouse_Eventscript_Furfrou::
# 396 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 397 "data/maps/MansionTrainingHouse/scripts.pory"
	faceplayer
# 398 "data/maps/MansionTrainingHouse/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 399 "data/maps/MansionTrainingHouse/scripts.pory"
	waitmoncry
# 400 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


CheckIfHasFurfrou::
# 405 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_NATURAL
# 406 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_2
CheckIfHasFurfrou_1:
# 409 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_5
CheckIfHasFurfrou_4:
# 412 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_8
CheckIfHasFurfrou_7:
# 415 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_11
CheckIfHasFurfrou_10:
# 418 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_14
CheckIfHasFurfrou_13:
# 421 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_17
CheckIfHasFurfrou_16:
# 424 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_20
CheckIfHasFurfrou_19:
# 427 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_23
CheckIfHasFurfrou_22:
# 430 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_26
CheckIfHasFurfrou_25:
# 433 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_28
# 440 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox CheckIfHasFurfrou_Text_1
# 441 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 442 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

CheckIfHasFurfrou_2:
# 407 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_HEART
	goto CheckIfHasFurfrou_1

CheckIfHasFurfrou_5:
# 410 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_STAR
	goto CheckIfHasFurfrou_4

CheckIfHasFurfrou_8:
# 413 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DIAMOND
	goto CheckIfHasFurfrou_7

CheckIfHasFurfrou_11:
# 416 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DEBUTANTE
	goto CheckIfHasFurfrou_10

CheckIfHasFurfrou_14:
# 419 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_MATRON
	goto CheckIfHasFurfrou_13

CheckIfHasFurfrou_17:
# 422 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DANDY
	goto CheckIfHasFurfrou_16

CheckIfHasFurfrou_20:
# 425 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_LA_REINE
	goto CheckIfHasFurfrou_19

CheckIfHasFurfrou_23:
# 428 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_KABUKI
	goto CheckIfHasFurfrou_22

CheckIfHasFurfrou_26:
# 431 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_PHARAOH
	goto CheckIfHasFurfrou_25

CheckIfHasFurfrou_28:
# 434 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox CheckIfHasFurfrou_Text_0
# 435 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 436 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


testcompanionbutton::
# 447 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 448 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox testcompanionbutton_Text_0
# 449 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 450 "data/maps/MansionTrainingHouse/scripts.pory"
	setflag FLAG_COMPANION_MENU
# 451 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


testquestbutton::
# 456 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 457 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox testquestbutton_Text_0
# 458 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 459 "data/maps/MansionTrainingHouse/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 460 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


MansionTrainingHouse_Eventscript_MoveTutor_Text_0:
# 8 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, Young Lady. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_1:
# 10 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, Young Lady.$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_2:
# 14 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, {PLAYER}. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_3:
# 16 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, {PLAYER}.$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0:
# 47 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Yoshiaki$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1:
# 48 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "I'm saving money to open a salon of my\n"
	.string "own.\p"
	.string "Furfrou visits the mansion's garden\n"
	.string "from time to time so I caught one\l"
	.string "myself to practice my fur trimming skill.\p"
	.string "Would you like me to style up your\n"
	.string "Furfrou too?$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2:
# 56 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "If you ever want to style your Furfrou,\n"
	.string "just ask me. I'll do it free of charge.$"

ShowMultiChoiceFurfrouStyle1_Text_0:
# 84 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "If you want to change your Furfrou's\n"
	.string "style, feel free to ask me.\p"
	.string "It's free of charge, I just want to\n"
	.string "practice.$"

ShowFurfrouNatural_Text_0:
# 123 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Natural style?$"

ShowFurfrouHeart_Text_0:
# 142 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Heart style?$"

ShowFurfrouStar_Text_0:
# 162 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Star style?$"

ShowFurfrouDiamond_Text_0:
# 180 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Diamond style?$"

ShowFurfrouDebutante_Text_0:
# 200 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Debutante style?$"

ShowFurfrouMatron_Text_0:
# 220 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Matron style?$"

ShowFurfrouDandy_Text_0:
# 240 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Dandy style?$"

ShowFurfrouLaReine_Text_0:
# 259 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the La Reine style?$"

ShowFurfrouKabuki_Text_0:
# 278 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Kabuki style?$"

ShowFurfrouPharaoh_Text_0:
# 297 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Pharaoh style?$"

ChangeFurfrouToNatural_Text_0:
# 321 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Please wait a moment.$"

CheckIfHasFurfrou_Text_0:
# 434 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "But you don't have a Furfrou in party...$"

CheckIfHasFurfrou_Text_1:
# 440 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Which style do you want for your\n"
	.string "Furfrou?$"

testcompanionbutton_Text_0:
# 448 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "unlocking companion button and menu$"

testquestbutton_Text_0:
# 457 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "unlocking quest button and menu$"

FurfrouStyleChangedPerfectly::
# 390 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "All perfectly done!\p"
	.string "If you want to change your Furfrou's\n"
	.string "style again, feel free to ask me.$"
