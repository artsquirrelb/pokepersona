Eventscript_MitsuruFollower::
# 7 "data/scripts/follower_npc.pory"
	lock
# 8 "data/scripts/follower_npc.pory"
	faceplayer
# 9 "data/scripts/follower_npc.pory"
	checkfollowerbattler
# 10 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_Text_0
# 11 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Eventscript_MitsuruFollower_1
# 19 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_2, 0
# 20 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollowerMultichoice2
# 21 "data/scripts/follower_npc.pory"
	closemessage
# 22 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_MitsuruFollower_1:
# 12 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_1, 0
# 13 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollowerMultichoice1
# 14 "data/scripts/follower_npc.pory"
	closemessage
# 15 "data/scripts/follower_npc.pory"
	release
	end


Eventscript_MitsuruFollowerMultichoice1::
# 28 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_MitsuruFollowerMultichoice1_1
# 31 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_MitsuruFollowerMultichoice1_2
# 34 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_MitsuruFollowerMultichoice1_3
# 38 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_Cancel
	return

Eventscript_MitsuruFollowerMultichoice1_1:
# 29 "data/scripts/follower_npc.pory"
	call Eventscript_AkiMitsuFollower_Talk
	return

Eventscript_MitsuruFollowerMultichoice1_2:
# 32 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_SetPartner
	return

Eventscript_MitsuruFollowerMultichoice1_3:
# 35 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_Return
	return


Eventscript_MitsuruFollowerMultichoice2::
# 43 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_MitsuruFollowerMultichoice2_1
# 46 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_MitsuruFollowerMultichoice2_2
# 49 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_MitsuruFollowerMultichoice2_3
# 53 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_Cancel
	return

Eventscript_MitsuruFollowerMultichoice2_1:
# 44 "data/scripts/follower_npc.pory"
	call Eventscript_AkiMitsuFollower_Talk
	return

Eventscript_MitsuruFollowerMultichoice2_2:
# 47 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_UnsetPartner
	return

Eventscript_MitsuruFollowerMultichoice2_3:
# 50 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_Return
	return


Eventscript_AkiMitsuFollower_Talk::
# 57 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Eventscript_AkiMitsuFollower_Talk_1
# 61 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Eventscript_AkiMitsuFollower_Talk_2
# 76 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiMitsuFollower_Talk_Text_2
# 79 "data/scripts/follower_npc.pory"
	closemessage
# 80 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_0, 1
	return

Eventscript_AkiMitsuFollower_Talk_1:
# 58 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiMitsuFollower_Talk_Text_0
	return

Eventscript_AkiMitsuFollower_Talk_2:
# 62 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiMitsuFollower_Talk_Text_1
# 72 "data/scripts/follower_npc.pory"
	closemessage
# 73 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_0, 2
	return


Eventscript_MitsuruFollower_SetPartner::
# 85 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_SetPartner_Text_0
# 86 "data/scripts/follower_npc.pory"
	closemessage
# 87 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_MITSURU_C1
# 88 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_MitsuruFollower_UnsetPartner::
# 92 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_UnsetPartner_Text_0
# 93 "data/scripts/follower_npc.pory"
	closemessage
# 94 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 95 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_MitsuruFollower_Return::
# 99 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_Return_Text_0
# 100 "data/scripts/follower_npc.pory"
	closemessage
# 101 "data/scripts/follower_npc.pory"
	call Eventscript_NPCFollowerReturn
	return


Eventscript_MitsuruFollower_Cancel::
# 105 "data/scripts/follower_npc.pory"
	playse SE_PIN
# 106 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Eventscript_MitsuruFollower_Cancel_Movement_0
# 107 "data/scripts/follower_npc.pory"
	waitmovement 0
# 108 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_Cancel_Text_0
	return


Eventscript_NPCFollowerReturn::
# 114 "data/scripts/follower_npc.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 115 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Eventscript_NPCFollowerReturn_2
# 118 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Eventscript_NPCFollowerReturn_3
# 121 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Eventscript_NPCFollowerReturn_4
# 125 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkup
Eventscript_NPCFollowerReturn_1:
# 127 "data/scripts/follower_npc.pory"
	waitmovement 0
# 128 "data/scripts/follower_npc.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 129 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
# 130 "data/scripts/follower_npc.pory"
	destroyfollowernpc
	return

Eventscript_NPCFollowerReturn_2:
# 116 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkdown
	goto Eventscript_NPCFollowerReturn_1

Eventscript_NPCFollowerReturn_3:
# 119 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkleft
	goto Eventscript_NPCFollowerReturn_1

Eventscript_NPCFollowerReturn_4:
# 122 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkright
	goto Eventscript_NPCFollowerReturn_1


Eventscript_AkihikoFollower::
# 139 "data/scripts/follower_npc.pory"
	lock
# 140 "data/scripts/follower_npc.pory"
	faceplayer
# 141 "data/scripts/follower_npc.pory"
	checkfollowerbattler
# 142 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Text_0
# 143 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Eventscript_AkihikoFollower_1
# 151 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_2, 0
# 152 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollowerMultichoice2
# 153 "data/scripts/follower_npc.pory"
	closemessage
# 154 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_AkihikoFollower_1:
# 144 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_1, 0
# 145 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollowerMultichoice1
# 146 "data/scripts/follower_npc.pory"
	closemessage
# 147 "data/scripts/follower_npc.pory"
	release
	end


Eventscript_AkihikoFollowerMultichoice1::
# 160 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_AkihikoFollowerMultichoice1_1
# 163 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_AkihikoFollowerMultichoice1_2
# 166 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_AkihikoFollowerMultichoice1_3
# 170 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_Cancel
	return

Eventscript_AkihikoFollowerMultichoice1_1:
# 161 "data/scripts/follower_npc.pory"
	call Eventscript_AkiMitsuFollower_Talk
	return

Eventscript_AkihikoFollowerMultichoice1_2:
# 164 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_SetPartner
	return

Eventscript_AkihikoFollowerMultichoice1_3:
# 167 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_Return
	return


Eventscript_AkihikoFollowerMultichoice2::
# 175 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_AkihikoFollowerMultichoice2_1
# 178 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_AkihikoFollowerMultichoice2_2
# 181 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_AkihikoFollowerMultichoice2_3
# 185 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_Cancel
	return

Eventscript_AkihikoFollowerMultichoice2_1:
# 176 "data/scripts/follower_npc.pory"
	call Eventscript_AkiMitsuFollower_Talk
	return

Eventscript_AkihikoFollowerMultichoice2_2:
# 179 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_UnsetPartner
	return

Eventscript_AkihikoFollowerMultichoice2_3:
# 182 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_Return
	return


Eventscript_AkihikoFollower_SetPartner::
# 190 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_SetPartner_Text_0
# 191 "data/scripts/follower_npc.pory"
	closemessage
# 192 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_AKIHIKO_C1
# 193 "data/scripts/follower_npc.pory"
	updatefollowingmon
# 194 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_AkihikoFollower_UnsetPartner::
# 198 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_UnsetPartner_Text_0
# 199 "data/scripts/follower_npc.pory"
	closemessage
# 200 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 201 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_AkihikoFollower_Return::
# 205 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Return_Text_0
# 206 "data/scripts/follower_npc.pory"
	closemessage
# 207 "data/scripts/follower_npc.pory"
	call Eventscript_NPCFollowerReturn
	return


Eventscript_AkihikoFollower_Cancel::
# 211 "data/scripts/follower_npc.pory"
	playse SE_PIN
# 212 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Eventscript_MitsuruFollower_Cancel_Movement_0
# 213 "data/scripts/follower_npc.pory"
	waitmovement 0
# 214 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Cancel_Text_0
	return


Eventscript_ShinjiroFollower::
# 221 "data/scripts/follower_npc.pory"
	lock
# 222 "data/scripts/follower_npc.pory"
	faceplayer
# 223 "data/scripts/follower_npc.pory"
	checkplayergender
# 224 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollower_2
# 228 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_1
Eventscript_ShinjiroFollower_1:
# 230 "data/scripts/follower_npc.pory"
	checkfollowerbattler
# 231 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Eventscript_ShinjiroFollower_6
# 236 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_2, 0
# 237 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollowerMultichoice2
Eventscript_ShinjiroFollower_5:
# 239 "data/scripts/follower_npc.pory"
	closemessage
# 240 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_ShinjiroFollower_2:
# 225 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_0
	goto Eventscript_ShinjiroFollower_1

Eventscript_ShinjiroFollower_6:
# 232 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_1, 0
# 233 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollowerMultichoice1
	goto Eventscript_ShinjiroFollower_5


Eventscript_ShinjiroFollowerMultichoice1::
# 245 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_1
# 254 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_2
# 263 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_3
# 273 "data/scripts/follower_npc.pory"
	checkplayergender
# 274 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_17
# 278 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_Cancel
	return

Eventscript_ShinjiroFollowerMultichoice1_1:
# 246 "data/scripts/follower_npc.pory"
	checkplayergender
# 247 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_8
# 251 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiMitsuFollower_Talk
	return

Eventscript_ShinjiroFollowerMultichoice1_2:
# 255 "data/scripts/follower_npc.pory"
	checkplayergender
# 256 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_11
# 260 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_SetPartner
	return

Eventscript_ShinjiroFollowerMultichoice1_3:
# 264 "data/scripts/follower_npc.pory"
	checkplayergender
# 265 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_14
# 269 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_Return
	return

Eventscript_ShinjiroFollowerMultichoice1_8:
# 248 "data/scripts/follower_npc.pory"
	call Eventscript_AkiShinjiFollower_Talk
	return

Eventscript_ShinjiroFollowerMultichoice1_11:
# 257 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_SetPartner
	return

Eventscript_ShinjiroFollowerMultichoice1_14:
# 266 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_Return
	return

Eventscript_ShinjiroFollowerMultichoice1_17:
# 275 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_Cancel
	return


Eventscript_ShinjiroFollowerMultichoice2::
# 284 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_1
# 293 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_2
# 302 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_3
# 312 "data/scripts/follower_npc.pory"
	checkplayergender
# 313 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_17
# 317 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_Cancel
	return

Eventscript_ShinjiroFollowerMultichoice2_1:
# 285 "data/scripts/follower_npc.pory"
	checkplayergender
# 286 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_8
# 290 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiMitsuFollower_Talk
	return

Eventscript_ShinjiroFollowerMultichoice2_2:
# 294 "data/scripts/follower_npc.pory"
	checkplayergender
# 295 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_11
# 299 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_UnsetPartner
	return

Eventscript_ShinjiroFollowerMultichoice2_3:
# 303 "data/scripts/follower_npc.pory"
	checkplayergender
# 304 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_14
# 308 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_Return
	return

Eventscript_ShinjiroFollowerMultichoice2_8:
# 287 "data/scripts/follower_npc.pory"
	call Eventscript_AkiShinjiFollower_Talk
	return

Eventscript_ShinjiroFollowerMultichoice2_11:
# 296 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_UnsetPartner
	return

Eventscript_ShinjiroFollowerMultichoice2_14:
# 305 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_Return
	return

Eventscript_ShinjiroFollowerMultichoice2_17:
# 314 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_Cancel
	return


Eventscript_AkiShinjiFollower_Talk::
# 323 "data/scripts/follower_npc.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt Eventscript_AkiShinjiFollower_Talk_1
# 326 "data/scripts/follower_npc.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Eventscript_AkiShinjiFollower_Talk_2
	return

Eventscript_AkiShinjiFollower_Talk_1:
# 324 "data/scripts/follower_npc.pory"
	call Eventscript_AkiShinjiFollower_Talk_P
	return

Eventscript_AkiShinjiFollower_Talk_2:
# 327 "data/scripts/follower_npc.pory"
	call Eventscript_AkiShinjiFollower_Talk_C1
	return


Eventscript_ShinjiMitsuFollower_Talk::
# 332 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Eventscript_ShinjiMitsuFollower_Talk_1
# 336 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiMitsuFollower_Talk_Text_1
# 353 "data/scripts/follower_npc.pory"
	closemessage
# 354 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_2, 1
# 355 "data/scripts/follower_npc.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 356 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Eventscript_ShinjiMitsuFollower_Talk_5
# 359 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Eventscript_ShinjiMitsuFollower_Talk_6
# 362 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Eventscript_ShinjiMitsuFollower_Talk_7
# 366 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkup
Eventscript_ShinjiMitsuFollower_Talk_4:
# 368 "data/scripts/follower_npc.pory"
	waitmovement 0
	return

Eventscript_ShinjiMitsuFollower_Talk_1:
# 333 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiMitsuFollower_Talk_Text_0
	return

Eventscript_ShinjiMitsuFollower_Talk_5:
# 357 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkdown
	goto Eventscript_ShinjiMitsuFollower_Talk_4

Eventscript_ShinjiMitsuFollower_Talk_6:
# 360 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkleft
	goto Eventscript_ShinjiMitsuFollower_Talk_4

Eventscript_ShinjiMitsuFollower_Talk_7:
# 363 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkright
	goto Eventscript_ShinjiMitsuFollower_Talk_4


Eventscript_ShinjiroFollower_Aki_SetPartner::
# 373 "data/scripts/follower_npc.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_gt Eventscript_ShinjiroFollower_Aki_SetPartner_8
Eventscript_ShinjiroFollower_Aki_SetPartner_6:
# 377 "data/scripts/follower_npc.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_ge Eventscript_ShinjiroFollower_Aki_SetPartner_5
Eventscript_ShinjiroFollower_Aki_SetPartner_4:
# 381 "data/scripts/follower_npc.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Eventscript_ShinjiroFollower_Aki_SetPartner_3
	return

Eventscript_ShinjiroFollower_Aki_SetPartner_1:
# 374 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Aki_SetPartner_Text_0
	return

Eventscript_ShinjiroFollower_Aki_SetPartner_2:
# 378 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Aki_SetPartner_Text_1
	return

Eventscript_ShinjiroFollower_Aki_SetPartner_3:
# 382 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Aki_SetPartner_Text_2
# 383 "data/scripts/follower_npc.pory"
	closemessage
# 384 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_SHINJIRO_C1
# 385 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	return

Eventscript_ShinjiroFollower_Aki_SetPartner_5:
# 377 "data/scripts/follower_npc.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt Eventscript_ShinjiroFollower_Aki_SetPartner_2
	goto Eventscript_ShinjiroFollower_Aki_SetPartner_4

Eventscript_ShinjiroFollower_Aki_SetPartner_8:
# 373 "data/scripts/follower_npc.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_lt Eventscript_ShinjiroFollower_Aki_SetPartner_1
	goto Eventscript_ShinjiroFollower_Aki_SetPartner_6


Eventscript_ShinjiroFollower_Aki_UnsetPartner::
# 390 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Aki_UnsetPartner_Text_0
# 391 "data/scripts/follower_npc.pory"
	closemessage
# 392 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 393 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_ShinjiroFollower_Mitsu_SetPartner::
# 397 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Mitsu_SetPartner_Text_0
# 398 "data/scripts/follower_npc.pory"
	closemessage
# 399 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_SHINJIRO_C1
# 400 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_ShinjiroFollower_Mitsu_UnsetPartner::
# 404 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Mitsu_UnsetPartner_Text_0
# 405 "data/scripts/follower_npc.pory"
	closemessage
# 406 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 407 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_ShinjiroFollower_Aki_Return::
# 411 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Aki_Return_Text_0
# 412 "data/scripts/follower_npc.pory"
	closemessage
# 413 "data/scripts/follower_npc.pory"
	call Eventscript_NPCFollowerReturn
	return


Eventscript_ShinjiroFollower_Mitsu_Return::
# 417 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Mitsu_Return_Text_0
# 418 "data/scripts/follower_npc.pory"
	closemessage
# 419 "data/scripts/follower_npc.pory"
	call Eventscript_NPCFollowerReturn
	return


Eventscript_ShinjiroFollower_Aki_Cancel::
# 423 "data/scripts/follower_npc.pory"
	playse SE_PIN
# 424 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Eventscript_MitsuruFollower_Cancel_Movement_0
# 425 "data/scripts/follower_npc.pory"
	waitmovement 0
# 426 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Aki_Cancel_Text_0
	return


Eventscript_ShinjiroFollower_Mitsu_Cancel::
# 430 "data/scripts/follower_npc.pory"
	playse SE_PIN
# 431 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Eventscript_MitsuruFollower_Cancel_Movement_0
# 432 "data/scripts/follower_npc.pory"
	waitmovement 0
# 433 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Mitsu_Cancel_Text_0
	return


Eventscript_InteleonTFollower::
# 441 "data/scripts/follower_npc.pory"
	lock
# 442 "data/scripts/follower_npc.pory"
	faceplayer
# 443 "data/scripts/follower_npc.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 444 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Text_0
# 445 "data/scripts/follower_npc.pory"
	checkfollowerbattler
# 446 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Eventscript_InteleonTFollower_2
# 451 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_2, 0
# 452 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollowerMultichoice2
Eventscript_InteleonTFollower_1:
# 454 "data/scripts/follower_npc.pory"
	closemessage
# 455 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_InteleonTFollower_2:
# 447 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_1, 0
# 448 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollowerMultichoice1
	goto Eventscript_InteleonTFollower_1


Eventscript_InteleonTFollowerMultichoice1::
# 460 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_InteleonTFollowerMultichoice1_1
# 469 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_InteleonTFollowerMultichoice1_2
# 478 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_InteleonTFollowerMultichoice1_3
# 482 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Cancel
	return

Eventscript_InteleonTFollowerMultichoice1_1:
# 461 "data/scripts/follower_npc.pory"
	checkplayergender
# 462 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_InteleonTFollowerMultichoice1_8
# 466 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_MitsuTalk
	return

Eventscript_InteleonTFollowerMultichoice1_2:
# 470 "data/scripts/follower_npc.pory"
	checkplayergender
# 471 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_InteleonTFollowerMultichoice1_11
# 475 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Mitsu_SetPartner
	return

Eventscript_InteleonTFollowerMultichoice1_3:
# 479 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Return
	return

Eventscript_InteleonTFollowerMultichoice1_8:
# 463 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_AkiTalk
	return

Eventscript_InteleonTFollowerMultichoice1_11:
# 472 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Aki_SetPartner
	return


Eventscript_InteleonTFollowerMultichoice2::
# 487 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_InteleonTFollowerMultichoice2_1
# 496 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_InteleonTFollowerMultichoice2_2
# 505 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_InteleonTFollowerMultichoice2_3
# 509 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Cancel
	return

Eventscript_InteleonTFollowerMultichoice2_1:
# 488 "data/scripts/follower_npc.pory"
	checkplayergender
# 489 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_InteleonTFollowerMultichoice2_8
# 493 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_MitsuTalk
	return

Eventscript_InteleonTFollowerMultichoice2_2:
# 497 "data/scripts/follower_npc.pory"
	checkplayergender
# 498 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_InteleonTFollowerMultichoice2_11
# 502 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Mitsu_UnsetPartner
	return

Eventscript_InteleonTFollowerMultichoice2_3:
# 506 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Return
	return

Eventscript_InteleonTFollowerMultichoice2_8:
# 490 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_AkiTalk
	return

Eventscript_InteleonTFollowerMultichoice2_11:
# 499 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Aki_UnsetPartner
	return


Eventscript_InteleonTFollower_AkiTalk::
# 514 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, shakehorizontal
# 515 "data/scripts/follower_npc.pory"
	waitmovement 0
# 516 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_AkiTalk_Text_0
	return


Eventscript_InteleonTFollower_MitsuTalk::
# 520 "data/scripts/follower_npc.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_lt Eventscript_InteleonTFollower_MitsuTalk_1
# 539 "data/scripts/follower_npc.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_eq Eventscript_InteleonTFollower_MitsuTalk_2
	return

Eventscript_InteleonTFollower_MitsuTalk_1:
# 521 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Eventscript_InteleonTFollower_MitsuTalk_5
# 526 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_MitsuTalk_Text_1
# 528 "data/scripts/follower_npc.pory"
	closemessage
# 529 "data/scripts/follower_npc.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 530 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LockDirectionAndWalkInPlace
# 531 "data/scripts/follower_npc.pory"
	waitmovement 0
# 532 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_MitsuTalk_Text_2
# 535 "data/scripts/follower_npc.pory"
	closemessage
# 536 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_3, 1
	return

Eventscript_InteleonTFollower_MitsuTalk_2:
# 540 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_MitsuTalk_Text_3
# 542 "data/scripts/follower_npc.pory"
	closemessage
# 543 "data/scripts/follower_npc.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 544 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LockDirectionAndWalkInPlace
# 545 "data/scripts/follower_npc.pory"
	waitmovement 0
# 546 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_MitsuTalk_Text_4
	return

Eventscript_InteleonTFollower_MitsuTalk_5:
# 522 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_MitsuTalk_Text_0
	return


# 551 "data/scripts/follower_npc.pory"
LockDirectionAndWalkInPlace:
# 552 "data/scripts/follower_npc.pory"
	lock_facing_direction
# 553 "data/scripts/follower_npc.pory"
	walk_in_place_right
# 554 "data/scripts/follower_npc.pory"
	unlock_facing_direction
	step_end

Eventscript_InteleonTFollower_Aki_SetPartner::
# 558 "data/scripts/follower_npc.pory"
	closemessage
# 559 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, shakehorizontal
# 560 "data/scripts/follower_npc.pory"
	waitmovement 0
# 561 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Aki_SetPartner_Text_0
# 562 "data/scripts/follower_npc.pory"
	closemessage
# 563 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 564 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_InteleonTFollower_Mitsu_SetPartner::
# 568 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Mitsu_SetPartner_Text_0
# 569 "data/scripts/follower_npc.pory"
	closemessage
# 570 "data/scripts/follower_npc.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_lt Eventscript_InteleonTFollower_Mitsu_SetPartner_2
# 573 "data/scripts/follower_npc.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_eq Eventscript_InteleonTFollower_Mitsu_SetPartner_3
Eventscript_InteleonTFollower_Mitsu_SetPartner_1:
# 576 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	return

Eventscript_InteleonTFollower_Mitsu_SetPartner_2:
# 571 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_INTELEON_T_P
	goto Eventscript_InteleonTFollower_Mitsu_SetPartner_1

Eventscript_InteleonTFollower_Mitsu_SetPartner_3:
# 574 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_INTELEON_T_C1
	goto Eventscript_InteleonTFollower_Mitsu_SetPartner_1


Eventscript_InteleonTFollower_Aki_UnsetPartner::
# 580 "data/scripts/follower_npc.pory"
	release
	end


Eventscript_InteleonTFollower_Mitsu_UnsetPartner::
# 585 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Mitsu_SetPartner_Text_0
# 586 "data/scripts/follower_npc.pory"
	closemessage
# 587 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 588 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_InteleonTFollower_Return::
# 592 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Mitsu_SetPartner_Text_0
# 593 "data/scripts/follower_npc.pory"
	closemessage
# 594 "data/scripts/follower_npc.pory"
	call Eventscript_NPCFollowerReturn
	return


Eventscript_InteleonTFollower_Cancel::
# 598 "data/scripts/follower_npc.pory"
	playse SE_PIN
# 599 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Eventscript_MitsuruFollower_Cancel_Movement_0
# 600 "data/scripts/follower_npc.pory"
	waitmovement 0
# 601 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Cancel_Text_0
	return


Eventscript_AkiShinjiFollower_Talk_P::
# 606 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiShinjiFollower_Talk_P_Text_0
	return


Eventscript_AkiShinjiFollower_Talk_C1::
# 613 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Eventscript_AkiShinjiFollower_Talk_C1_1
# 621 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Eventscript_AkiShinjiFollower_Talk_C1_2
# 632 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiShinjiFollower_Talk_C1_Text_2
# 641 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_1, 1
	return

Eventscript_AkiShinjiFollower_Talk_C1_1:
# 614 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiShinjiFollower_Talk_C1_Text_0
# 616 "data/scripts/follower_npc.pory"
	closemessage
# 617 "data/scripts/follower_npc.pory"
	playse SE_BOO
# 618 "data/scripts/follower_npc.pory"
	applymovement LOCALID_PLAYER, emoteangry
# 619 "data/scripts/follower_npc.pory"
	waitmovement 0
	return

Eventscript_AkiShinjiFollower_Talk_C1_2:
# 622 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiShinjiFollower_Talk_C1_Text_1
# 628 "data/scripts/follower_npc.pory"
	closemessage
# 629 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_1, 2
	return


# 106 "data/scripts/follower_npc.pory"
Eventscript_MitsuruFollower_Cancel_Movement_0:
# 106 "data/scripts/follower_npc.pory"
	emote_question_mark
	step_end

Eventscript_MitsuruFollower_Text_0:
# 10 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Is something wrong, Sanada-kun?$"

Eventscript_AkiMitsuFollower_Talk_Text_0:
# 58 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Let's go, Sanada-kun. There's no time to\n"
	.string "waste.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}I know.$"

Eventscript_AkiMitsuFollower_Talk_Text_1:
# 62 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I'm still getting used to travelling with\n"
	.string "a larger party like this.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}If I have to be honest, I find it quite\n"
	.string "delightful so far.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Oh? Did you travel before?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}It was for the Ranger School. I used to\n"
	.string "do the fieldwork for the Pokémon\l"
	.string "Researchers there.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}That sounds awesome. Miki and I have\n"
	.string "always wanted to travel the region, for\l"
	.string "Pokémon research or not.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}......\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}......\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}I just brought the mood down, didn't I?\n"
	.string "Sorry.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}We will find her soon.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Of course, I believe so.$"

Eventscript_AkiMitsuFollower_Talk_Text_2:
# 76 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Just want to say that you won't regret\n"
	.string "partnering with us.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}We'll see. I do rarely make wrong\n"
	.string "choices.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}Ahaha, very confident, aren't you?\n"
	.string "Don't worry. I don't intend to make it a\l"
	.string "wrong choice.$"

Eventscript_MitsuruFollower_SetPartner_Text_0:
# 85 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Very well. I'll back you up.$"

Eventscript_MitsuruFollower_UnsetPartner_Text_0:
# 92 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}You want to train on your own? Your\n"
	.string "determination is truly admirable.$"

Eventscript_MitsuruFollower_Return_Text_0:
# 99 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}By all means. I figure you miss your\n"
	.string "Pokémon as well.$"

Eventscript_MitsuruFollower_Cancel_Text_0:
# 108 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Well, if you have anything you want to\n"
	.string "say to me, please don't hesitate.$"

Eventscript_AkihikoFollower_Text_0:
# 142 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Need something, Kirijo?$"

Eventscript_AkihikoFollower_SetPartner_Text_0:
# 190 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Alright. I won't lose to you!$"

Eventscript_AkihikoFollower_UnsetPartner_Text_0:
# 198 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Sure then. I'll just train on my own.$"

Eventscript_AkihikoFollower_Return_Text_0:
# 205 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Understood!$"

Eventscript_AkihikoFollower_Cancel_Text_0:
# 214 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Huh? Okay then.$"

Eventscript_ShinjiroFollower_Text_0:
# 225 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}What's up, Aki?$"

Eventscript_ShinjiroFollower_Text_1:
# 228 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}What's wrong, Princess?$"

Eventscript_ShinjiMitsuFollower_Talk_Text_0:
# 333 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}Ahem, let's just go.$"

Eventscript_ShinjiMitsuFollower_Talk_Text_1:
# 336 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}.......\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}.......\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Ahem, may I ask you something?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Didn't you want to talk? So just fire\n"
	.string "away.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}How did you learn to battle when you\n"
	.string "didn't have a Pokémon before?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}They taught us in the orphanage.\p"
	.string "It'd be hard to manage if the kids have\n"
	.string "their own Pokémon so the staff lent us\l"
	.string "theirs for Pokémon battling classes.\p"
	.string "We also get a certified trainer card\n"
	.string "after graduating.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}So that was how it worked there.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Anything else?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}For now, no. Thank you, that was quite\n"
	.string "informative.\p"
	.string "What about you? I figure it'll only be\n"
	.string "fair if you ask me something in return.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}........\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_PENSIVE}What's your Pokémon's favorite\n"
	.string "foods...?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}My Pokémon's favorite foods...?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}N-Never mind that. We're done here.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}Aragaki-kun?$"

Eventscript_ShinjiroFollower_Aki_SetPartner_Text_0:
# 374 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_DOUBT}Aki, I don't have a Pokémon yet.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}But well, I suppose I've got your back\n"
	.string "in a fist fight. Just bring me a bus stop\l"
	.string "sign or something.$"

Eventscript_ShinjiroFollower_Aki_SetPartner_Text_1:
# 378 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_DOUBT}Don't we have to return to the house in\n"
	.string "Route 2?\p"
	.string "Now is not the time to train, Aki.$"

Eventscript_ShinjiroFollower_Aki_SetPartner_Text_2:
# 382 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Can't do anything without me, huh?$"

Eventscript_ShinjiroFollower_Aki_UnsetPartner_Text_0:
# 390 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Alright then.$"

Eventscript_ShinjiroFollower_Mitsu_SetPartner_Text_0:
# 397 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}So you do need help sometimes, huh?$"

Eventscript_ShinjiroFollower_Mitsu_UnsetPartner_Text_0:
# 404 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Sure, I know you can hold your ground.$"

Eventscript_ShinjiroFollower_Aki_Return_Text_0:
# 411 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Sure then, I'll also check how Ferroseed\n"
	.string "is doing.$"

Eventscript_ShinjiroFollower_Mitsu_Return_Text_0:
# 417 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Got it.$"

Eventscript_ShinjiroFollower_Aki_Cancel_Text_0:
# 426 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}What is it? Just spit it out.$"

Eventscript_ShinjiroFollower_Mitsu_Cancel_Text_0:
# 433 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Whatever.$"

Eventscript_InteleonTFollower_Text_0:
# 444 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon looks at you and waits for\n"
	.string "what you want to say.)$"

Eventscript_InteleonTFollower_AkiTalk_Text_0:
# 516 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(It doesn't look like it wants to chat\n"
	.string "with you.)$"

Eventscript_InteleonTFollower_MitsuTalk_Text_0:
# 522 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Let's focusing on completing our\n"
	.string "mission, for Father.\p"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon nodded, looking determined.)$"

Eventscript_InteleonTFollower_MitsuTalk_Text_1:
# 526 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}I hope Father will be safe without you,\n"
	.string "Inteleon.\p"
	.string "You're his most trusted partner and you\n"
	.string "two were never separated as far as I\l"
	.string "can remember.$"

Eventscript_InteleonTFollower_MitsuTalk_Text_2:
# 532 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_NORMAL}(Inteleon puts its hand on Mitsuru's\n"
	.string "shoulder, nodding.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}You're right, I should believe in him.\p"
	.string "Let's focus on completing our mission.$"

Eventscript_InteleonTFollower_MitsuTalk_Text_3:
# 540 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}What do you think about those two boys,\n"
	.string "Inteleon?\p"
	.string "Did I make the right choice partnering\n"
	.string "up with them?$"

Eventscript_InteleonTFollower_MitsuTalk_Text_4:
# 546 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_DOUBT}(Inteleon is lost in thought. Looks like\n"
	.string "it needs more time to answer this\l"
	.string "question.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}I suppose only time will tell.$"

Eventscript_InteleonTFollower_Aki_SetPartner_Text_0:
# 561 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon refused. It doesn't trust\n"
	.string "Akihiko enough right now.)$"

Eventscript_InteleonTFollower_Mitsu_SetPartner_Text_0:
# 568 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon silently nods.)$"

Eventscript_InteleonTFollower_Cancel_Text_0:
# 601 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_ITLN}{CREATE MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon looks confused but says\n"
	.string "nothing.)$"

Eventscript_AkiShinjiFollower_Talk_P_Text_0:
# 606 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Have you thought of which Pokémon you\n"
	.string "want for your first?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Not sure, but I guess I'd like a\n"
	.string "Grass-type Pokémon. Or a Steel-type\l"
	.string "one.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Really? I thought it'd be a Fire-type,\n"
	.string "because you love cooking.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Now that I think about it, that also\n"
	.string "isn't bad at all.$"

Eventscript_AkiShinjiFollower_Talk_C1_Text_0:
# 614 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}Enough chatting. I'm done with your\n"
	.string "dumbass.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}I'm not dumb!!$"

Eventscript_AkiShinjiFollower_Talk_C1_Text_1:
# 622 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}There's one more weird thing about her.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Yeah?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}She takes at least an hour in the bath.\n"
	.string "I don't get it.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}.............\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Should I ask her? It bothers me when I\n"
	.string "don't understand something.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}Don't dig your own grave like that.$"

Eventscript_AkiShinjiFollower_Talk_C1_Text_2:
# 632 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}At the risk of turning myself into a\n"
	.string "broken record, you shouldn't trust that\l"
	.string "girl so easily.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}I know, Shinji. Ms. Kobayashi's always\n"
	.string "warned us to not trust rich people.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Although I think she's quite weird for a\n"
	.string "billionaire young lady.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}How so?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}She's not being arrogant nor flaunting\n"
	.string "her wealth?\p"
	.string "Nor looking down on us orphan kids.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Besides, she's good at battling and\n"
	.string "truly seems to love her Pokémon a lot.\p"
	.string "I've never seen rich people act like\n"
	.string "that.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Yeah, you're right about that.$"
