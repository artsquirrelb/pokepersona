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
# 20 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 21 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_3
# 22 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 23 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 24 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_4
# 25 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
MansionTrainingHouse_Eventscript_MoveTutor_1:
# 27 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

MansionTrainingHouse_Eventscript_MoveTutor_2:
# 12 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 13 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_1
# 14 "data/maps/MansionTrainingHouse/scripts.pory"
	bpmart MansionTrainingHouse_MoveTutor, TRUE
# 15 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_MoveTutor_Text_0
# 16 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_MoveTutor_Text_2
# 17 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
	goto MansionTrainingHouse_Eventscript_MoveTutor_1


	.align 2
# 31 "data/maps/MansionTrainingHouse/scripts.pory"
MansionTrainingHouse_MoveTutor:
# 32 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ECHOED_VOICE
# 33 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_BULLET_SEED
# 34 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CHILLING_WATER
# 35 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FLAME_CHARGE
# 36 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_THUNDER_WAVE
# 37 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ICY_WIND
# 38 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_TRIPLE_KICK
# 39 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_SMOG
# 40 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_MUD_SHOT
# 41 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FEATHER_DANCE
# 42 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_HEART_STAMP
# 43 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_INFESTATION
# 44 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_ROLLOUT
# 45 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_CONFUSE_RAY
# 46 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_FAKE_TEARS
# 47 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_METAL_CLAW
# 48 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_DRAINING_KISS
# 49 "data/maps/MansionTrainingHouse/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

MansionTrainingHouse_Eventscript_FurfrouStyleSetter::
# 53 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 54 "data/maps/MansionTrainingHouse/scripts.pory"
	faceplayer
# 55 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 56 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1, MSGBOX_YESNO
# 59 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 60 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1
# 64 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 65 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2
# 66 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 67 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_1:
# 61 "data/maps/MansionTrainingHouse/scripts.pory"
	call CheckIfHasFurfrou
	return


ShowMultiChoiceFurfrouStyle1::
# 73 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 74 "data/maps/MansionTrainingHouse/scripts.pory"
	multichoice 21, 3, MULTI_FURFROU_STYLE, 0
# 75 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShowMultiChoiceFurfrouStyle1_2
ShowMultiChoiceFurfrouStyle1_1:
# 78 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShowMultiChoiceFurfrouStyle1_4
# 81 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShowMultiChoiceFurfrouStyle1_5
# 84 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShowMultiChoiceFurfrouStyle1_6
# 87 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShowMultiChoiceFurfrouStyle1_7
# 90 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShowMultiChoiceFurfrouStyle1_8
# 94 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 95 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowMultiChoiceFurfrouStyle1_Text_0
# 97 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 98 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

ShowMultiChoiceFurfrouStyle1_2:
# 76 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouNatural
	goto ShowMultiChoiceFurfrouStyle1_1

ShowMultiChoiceFurfrouStyle1_4:
# 79 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouHeart
	return

ShowMultiChoiceFurfrouStyle1_5:
# 82 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouStar
	return

ShowMultiChoiceFurfrouStyle1_6:
# 85 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDiamond
	return

ShowMultiChoiceFurfrouStyle1_7:
# 88 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDebutante
	return

ShowMultiChoiceFurfrouStyle1_8:
# 91 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return


ShowMultiChoiceFurfrouStyle2::
# 104 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 105 "data/maps/MansionTrainingHouse/scripts.pory"
	multichoice 21, 3, MULTI_FURFROU_STYLE_2, 0
# 106 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShowMultiChoiceFurfrouStyle2_1
# 109 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShowMultiChoiceFurfrouStyle2_2
# 112 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShowMultiChoiceFurfrouStyle2_3
# 115 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShowMultiChoiceFurfrouStyle2_4
# 118 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShowMultiChoiceFurfrouStyle2_5
# 121 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShowMultiChoiceFurfrouStyle2_6
# 125 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 126 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowMultiChoiceFurfrouStyle1_Text_0
# 128 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 129 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end

ShowMultiChoiceFurfrouStyle2_1:
# 107 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouMatron
	return

ShowMultiChoiceFurfrouStyle2_2:
# 110 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouDandy
	return

ShowMultiChoiceFurfrouStyle2_3:
# 113 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouLaReine
	return

ShowMultiChoiceFurfrouStyle2_4:
# 116 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouKabuki
	return

ShowMultiChoiceFurfrouStyle2_5:
# 119 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowFurfrouPharaoh
	return

ShowMultiChoiceFurfrouStyle2_6:
# 122 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return


ShowFurfrouNatural::
# 135 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_NATURAL, 3, 3
# 136 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouNatural_Text_0, MSGBOX_YESNO
# 137 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 138 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 139 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouNatural_1
# 149 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouNatural_1:
# 140 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToNatural
# 141 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 142 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 143 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 144 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 145 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouHeart::
# 154 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_HEART, 3, 3
# 155 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouHeart_Text_0, MSGBOX_YESNO
# 156 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 157 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 158 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouHeart_1
# 169 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouHeart_1:
# 160 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToHeart
# 161 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 162 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 163 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 164 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 165 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouStar::
# 174 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_STAR, 3, 3
# 175 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouStar_Text_0, MSGBOX_YESNO
# 176 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 177 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 178 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouStar_1
# 188 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouStar_1:
# 179 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToStar
# 180 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 181 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 182 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 183 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 184 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDiamond::
# 192 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DIAMOND, 3, 3
# 193 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDiamond_Text_0, MSGBOX_YESNO
# 194 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 195 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 196 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDiamond_1
# 207 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouDiamond_1:
# 198 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDiamond
# 199 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 200 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 201 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 202 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 203 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDebutante::
# 212 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DEBUTANTE, 3, 3
# 213 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDebutante_Text_0, MSGBOX_YESNO
# 214 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 215 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 216 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDebutante_1
# 227 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

ShowFurfrouDebutante_1:
# 218 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDebutante
# 219 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 220 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 221 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 222 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 223 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouMatron::
# 232 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_MATRON, 3, 3
# 233 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouMatron_Text_0, MSGBOX_YESNO
# 234 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 235 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 236 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouMatron_1
# 247 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouMatron_1:
# 238 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToMatron
# 239 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 240 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 241 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 242 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 243 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouDandy::
# 252 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_DANDY, 3, 3
# 253 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouDandy_Text_0, MSGBOX_YESNO
# 254 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 255 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 256 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouDandy_1
# 266 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouDandy_1:
# 257 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToDandy
# 258 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 259 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 260 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 261 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 262 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouLaReine::
# 271 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_LA_REINE, 3, 3
# 272 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouLaReine_Text_0, MSGBOX_YESNO
# 273 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 274 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 275 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouLaReine_1
# 285 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouLaReine_1:
# 276 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToLaReine
# 277 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 278 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 279 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 280 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 281 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouKabuki::
# 290 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_KABUKI, 3, 3
# 291 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouKabuki_Text_0, MSGBOX_YESNO
# 292 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 293 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 294 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouKabuki_1
# 304 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouKabuki_1:
# 295 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToKabuki
# 296 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 297 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 298 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 299 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 300 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ShowFurfrouPharaoh::
# 309 "data/maps/MansionTrainingHouse/scripts.pory"
	showmonpic SPECIES_FURFROU_PHARAOH, 3, 3
# 310 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ShowFurfrouPharaoh_Text_0, MSGBOX_YESNO
# 311 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 312 "data/maps/MansionTrainingHouse/scripts.pory"
	hidemonpic
# 313 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShowFurfrouPharaoh_1
# 323 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle2
	return

ShowFurfrouPharaoh_1:
# 314 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFurfrouToPharaoh
# 315 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox FurfrouStyleChangedPerfectly
# 316 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 317 "data/maps/MansionTrainingHouse/scripts.pory"
	setvar VAR_0x8001, 0
# 318 "data/maps/MansionTrainingHouse/scripts.pory"
	updatefollowingmon
# 319 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


ChangeFormFadeScreen::
# 328 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 329 "data/maps/MansionTrainingHouse/scripts.pory"
	delay 30
# 330 "data/maps/MansionTrainingHouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	return


ChangeFurfrouToNatural::
# 334 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 335 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 336 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 337 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_NATURAL
	return


ChangeFurfrouToHeart::
# 341 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 342 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 343 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 344 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_HEART
	return


ChangeFurfrouToStar::
# 348 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 349 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 350 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 351 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_STAR
	return


ChangeFurfrouToDiamond::
# 355 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 356 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 357 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 358 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DIAMOND
	return


ChangeFurfrouToDebutante::
# 362 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 363 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 364 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 365 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DEBUTANTE
	return


ChangeFurfrouToMatron::
# 369 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 370 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 371 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 372 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_MATRON
	return


ChangeFurfrouToDandy::
# 376 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 377 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 378 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 379 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_DANDY
	return


ChangeFurfrouToLaReine::
# 383 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 384 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 385 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 386 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_LA_REINE
	return


ChangeFurfrouToKabuki::
# 390 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 391 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 392 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 393 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_KABUKI
	return


ChangeFurfrouToPharaoh::
# 397 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox ChangeFurfrouToNatural_Text_0
# 398 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 399 "data/maps/MansionTrainingHouse/scripts.pory"
	call ChangeFormFadeScreen
# 400 "data/maps/MansionTrainingHouse/scripts.pory"
	changespecies SPECIES_FURFROU_PHARAOH
	return


MansionTrainingHouse_Eventscript_Furfrou::
# 409 "data/maps/MansionTrainingHouse/scripts.pory"
	lock
# 410 "data/maps/MansionTrainingHouse/scripts.pory"
	faceplayer
# 411 "data/maps/MansionTrainingHouse/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 412 "data/maps/MansionTrainingHouse/scripts.pory"
	waitmoncry
# 413 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


CheckIfHasFurfrou::
# 418 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_NATURAL
# 419 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_2
CheckIfHasFurfrou_1:
# 422 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_5
CheckIfHasFurfrou_4:
# 425 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_8
CheckIfHasFurfrou_7:
# 428 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_11
CheckIfHasFurfrou_10:
# 431 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_14
CheckIfHasFurfrou_13:
# 434 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_17
CheckIfHasFurfrou_16:
# 437 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_20
CheckIfHasFurfrou_19:
# 440 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_23
CheckIfHasFurfrou_22:
# 443 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_26
CheckIfHasFurfrou_25:
# 446 "data/maps/MansionTrainingHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckIfHasFurfrou_28
# 454 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 455 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox CheckIfHasFurfrou_Text_1
# 456 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 457 "data/maps/MansionTrainingHouse/scripts.pory"
	call ShowMultiChoiceFurfrouStyle1
	return

CheckIfHasFurfrou_2:
# 420 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_HEART
	goto CheckIfHasFurfrou_1

CheckIfHasFurfrou_5:
# 423 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_STAR
	goto CheckIfHasFurfrou_4

CheckIfHasFurfrou_8:
# 426 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DIAMOND
	goto CheckIfHasFurfrou_7

CheckIfHasFurfrou_11:
# 429 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DEBUTANTE
	goto CheckIfHasFurfrou_10

CheckIfHasFurfrou_14:
# 432 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_MATRON
	goto CheckIfHasFurfrou_13

CheckIfHasFurfrou_17:
# 435 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_DANDY
	goto CheckIfHasFurfrou_16

CheckIfHasFurfrou_20:
# 438 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_LA_REINE
	goto CheckIfHasFurfrou_19

CheckIfHasFurfrou_23:
# 441 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_KABUKI
	goto CheckIfHasFurfrou_22

CheckIfHasFurfrou_26:
# 444 "data/maps/MansionTrainingHouse/scripts.pory"
	checkspecies SPECIES_FURFROU_PHARAOH
	goto CheckIfHasFurfrou_25

CheckIfHasFurfrou_28:
# 447 "data/maps/MansionTrainingHouse/scripts.pory"
	setspeaker MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0
# 448 "data/maps/MansionTrainingHouse/scripts.pory"
	msgbox CheckIfHasFurfrou_Text_0
# 449 "data/maps/MansionTrainingHouse/scripts.pory"
	closemessage
# 450 "data/maps/MansionTrainingHouse/scripts.pory"
	release
	end


MansionTrainingHouse_Eventscript_MoveTutor_Text_0:
# 12 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Ayaka$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_1:
# 13 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, Young Lady. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_2:
# 16 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, Young Lady.$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_3:
# 21 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Hello, {PLAYER}. What moves do you\n"
	.string "want to teach to your Pokémon today?$"

MansionTrainingHouse_Eventscript_MoveTutor_Text_4:
# 24 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Good luck on your journey, {PLAYER}.$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_0:
# 55 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Yoshiaki$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_1:
# 56 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "I'm saving money to open a salon of my\n"
	.string "own.\p"
	.string "Furfrou visits the mansion's garden\n"
	.string "from time to time so I caught one\l"
	.string "myself to practice my fur trimming\l"
	.string "skills.\p"
	.string "Would you like me to style up your\n"
	.string "Furfrou too?$"

MansionTrainingHouse_Eventscript_FurfrouStyleSetter_Text_2:
# 65 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "If you ever want to style your Furfrou,\n"
	.string "just ask me. I'll do it free of charge.$"

ShowMultiChoiceFurfrouStyle1_Text_0:
# 95 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "If you want to change your Furfrou's\n"
	.string "style, feel free to ask me.\p"
	.string "It's free of charge, I just want to\n"
	.string "practice.$"

ShowFurfrouNatural_Text_0:
# 136 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Natural style?$"

ShowFurfrouHeart_Text_0:
# 155 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Heart style?$"

ShowFurfrouStar_Text_0:
# 175 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Star style?$"

ShowFurfrouDiamond_Text_0:
# 193 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Diamond style?$"

ShowFurfrouDebutante_Text_0:
# 213 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Debutante style?$"

ShowFurfrouMatron_Text_0:
# 233 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Matron style?$"

ShowFurfrouDandy_Text_0:
# 253 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Dandy style?$"

ShowFurfrouLaReine_Text_0:
# 272 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the La Reine style?$"

ShowFurfrouKabuki_Text_0:
# 291 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Kabuki style?$"

ShowFurfrouPharaoh_Text_0:
# 310 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "You want the Pharaoh style?$"

ChangeFurfrouToNatural_Text_0:
# 334 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Please wait a moment.$"

CheckIfHasFurfrou_Text_0:
# 448 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "But you don't have a Furfrou in party...$"

CheckIfHasFurfrou_Text_1:
# 455 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "Which style do you want for your\n"
	.string "Furfrou?$"

FurfrouStyleChangedPerfectly::
# 403 "data/maps/MansionTrainingHouse/scripts.pory"
	.string "All perfectly done!\p"
	.string "If you want to change your Furfrou's\n"
	.string "style again, feel free to ask me.$"
