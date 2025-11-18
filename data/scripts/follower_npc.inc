Eventscript_MitsuruFollower::
# 2 "data/scripts/follower_npc.pory"
	lock
# 3 "data/scripts/follower_npc.pory"
	faceplayer
# 4 "data/scripts/follower_npc.pory"
	checkfollowerbattler
# 5 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_Text_0
# 6 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Eventscript_MitsuruFollower_1
# 14 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_2, 0
# 15 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollowerMultichoice2
# 16 "data/scripts/follower_npc.pory"
	closemessage
# 17 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_MitsuruFollower_1:
# 7 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_1, 0
# 8 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollowerMultichoice1
# 9 "data/scripts/follower_npc.pory"
	closemessage
# 10 "data/scripts/follower_npc.pory"
	release
	end


Eventscript_MitsuruFollowerMultichoice1::
# 23 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_MitsuruFollowerMultichoice1_1
# 26 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_MitsuruFollowerMultichoice1_2
# 29 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_MitsuruFollowerMultichoice1_3
# 33 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_Cancel
	return

Eventscript_MitsuruFollowerMultichoice1_1:
# 24 "data/scripts/follower_npc.pory"
	call Eventscript_AkiMitsuFollower_Talk
	return

Eventscript_MitsuruFollowerMultichoice1_2:
# 27 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_SetPartner
	return

Eventscript_MitsuruFollowerMultichoice1_3:
# 30 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_Return
	return


Eventscript_MitsuruFollowerMultichoice2::
# 38 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_MitsuruFollowerMultichoice2_1
# 41 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_MitsuruFollowerMultichoice2_2
# 44 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_MitsuruFollowerMultichoice2_3
# 48 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_Cancel
	return

Eventscript_MitsuruFollowerMultichoice2_1:
# 39 "data/scripts/follower_npc.pory"
	call Eventscript_AkiMitsuFollower_Talk
	return

Eventscript_MitsuruFollowerMultichoice2_2:
# 42 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_UnsetPartner
	return

Eventscript_MitsuruFollowerMultichoice2_3:
# 45 "data/scripts/follower_npc.pory"
	call Eventscript_MitsuruFollower_Return
	return


Eventscript_AkiMitsuFollower_Talk::
# 52 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Eventscript_AkiMitsuFollower_Talk_1
# 56 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Eventscript_AkiMitsuFollower_Talk_2
# 71 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiMitsuFollower_Talk_Text_2
# 74 "data/scripts/follower_npc.pory"
	closemessage
# 75 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_0, 1
	return

Eventscript_AkiMitsuFollower_Talk_1:
# 53 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiMitsuFollower_Talk_Text_0
	return

Eventscript_AkiMitsuFollower_Talk_2:
# 57 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiMitsuFollower_Talk_Text_1
# 67 "data/scripts/follower_npc.pory"
	closemessage
# 68 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_0, 2
	return


Eventscript_MitsuruFollower_SetPartner::
# 80 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_SetPartner_Text_0
# 81 "data/scripts/follower_npc.pory"
	closemessage
# 82 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_MITSURU_C1
# 83 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_MitsuruFollower_UnsetPartner::
# 87 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_UnsetPartner_Text_0
# 88 "data/scripts/follower_npc.pory"
	closemessage
# 89 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 90 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_MitsuruFollower_Return::
# 94 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_Return_Text_0
# 95 "data/scripts/follower_npc.pory"
	closemessage
# 96 "data/scripts/follower_npc.pory"
	call Eventscript_NPCFollowerReturn
	return


Eventscript_MitsuruFollower_Cancel::
# 100 "data/scripts/follower_npc.pory"
	playse SE_PIN
# 101 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Eventscript_MitsuruFollower_Cancel_Movement_0
# 102 "data/scripts/follower_npc.pory"
	waitmovement 0
# 103 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_Cancel_Text_0
	return


Eventscript_NPCFollowerReturn::
# 109 "data/scripts/follower_npc.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 110 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Eventscript_NPCFollowerReturn_2
# 113 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Eventscript_NPCFollowerReturn_3
# 116 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Eventscript_NPCFollowerReturn_4
# 120 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkup
Eventscript_NPCFollowerReturn_1:
# 122 "data/scripts/follower_npc.pory"
	waitmovement 0
# 123 "data/scripts/follower_npc.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 124 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
# 125 "data/scripts/follower_npc.pory"
	destroyfollowernpc
	return

Eventscript_NPCFollowerReturn_2:
# 111 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkdown
	goto Eventscript_NPCFollowerReturn_1

Eventscript_NPCFollowerReturn_3:
# 114 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkleft
	goto Eventscript_NPCFollowerReturn_1

Eventscript_NPCFollowerReturn_4:
# 117 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkright
	goto Eventscript_NPCFollowerReturn_1


Eventscript_AkihikoFollower::
# 130 "data/scripts/follower_npc.pory"
	lock
# 131 "data/scripts/follower_npc.pory"
	faceplayer
# 132 "data/scripts/follower_npc.pory"
	checkfollowerbattler
# 133 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Text_0
# 134 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Eventscript_AkihikoFollower_1
# 142 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_2, 0
# 143 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollowerMultichoice2
# 144 "data/scripts/follower_npc.pory"
	closemessage
# 145 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_AkihikoFollower_1:
# 135 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_1, 0
# 136 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollowerMultichoice1
# 137 "data/scripts/follower_npc.pory"
	closemessage
# 138 "data/scripts/follower_npc.pory"
	release
	end


Eventscript_AkihikoFollowerMultichoice1::
# 151 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_AkihikoFollowerMultichoice1_1
# 154 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_AkihikoFollowerMultichoice1_2
# 157 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_AkihikoFollowerMultichoice1_3
# 161 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_Cancel
	return

Eventscript_AkihikoFollowerMultichoice1_1:
# 152 "data/scripts/follower_npc.pory"
	call Eventscript_AkiMitsuFollower_Talk
	return

Eventscript_AkihikoFollowerMultichoice1_2:
# 155 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_SetPartner
	return

Eventscript_AkihikoFollowerMultichoice1_3:
# 158 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_Return
	return


Eventscript_AkihikoFollowerMultichoice2::
# 166 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_AkihikoFollowerMultichoice2_1
# 169 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_AkihikoFollowerMultichoice2_2
# 172 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_AkihikoFollowerMultichoice2_3
# 176 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_Cancel
	return

Eventscript_AkihikoFollowerMultichoice2_1:
# 167 "data/scripts/follower_npc.pory"
	call Eventscript_AkiMitsuFollower_Talk
	return

Eventscript_AkihikoFollowerMultichoice2_2:
# 170 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_UnsetPartner
	return

Eventscript_AkihikoFollowerMultichoice2_3:
# 173 "data/scripts/follower_npc.pory"
	call Eventscript_AkihikoFollower_Return
	return


Eventscript_AkihikoFollower_SetPartner::
# 181 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_SetPartner_Text_0
# 182 "data/scripts/follower_npc.pory"
	closemessage
# 183 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_AKIHIKO_C1
# 184 "data/scripts/follower_npc.pory"
	updatefollowingmon
# 185 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_AkihikoFollower_UnsetPartner::
# 189 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_UnsetPartner_Text_0
# 190 "data/scripts/follower_npc.pory"
	closemessage
# 191 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 192 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_AkihikoFollower_Return::
# 196 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Return_Text_0
# 197 "data/scripts/follower_npc.pory"
	closemessage
# 198 "data/scripts/follower_npc.pory"
	call Eventscript_NPCFollowerReturn
	return


Eventscript_AkihikoFollower_Cancel::
# 202 "data/scripts/follower_npc.pory"
	playse SE_PIN
# 203 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Eventscript_MitsuruFollower_Cancel_Movement_0
# 204 "data/scripts/follower_npc.pory"
	waitmovement 0
# 205 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Cancel_Text_0
	return


Eventscript_ShinjiroFollower::
# 209 "data/scripts/follower_npc.pory"
	lock
# 210 "data/scripts/follower_npc.pory"
	faceplayer
# 211 "data/scripts/follower_npc.pory"
	checkplayergender
# 212 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollower_2
# 216 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_1
Eventscript_ShinjiroFollower_1:
# 218 "data/scripts/follower_npc.pory"
	checkfollowerbattler
# 219 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Eventscript_ShinjiroFollower_6
# 224 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_2, 0
# 225 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollowerMultichoice2
Eventscript_ShinjiroFollower_5:
# 227 "data/scripts/follower_npc.pory"
	closemessage
# 228 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_ShinjiroFollower_2:
# 213 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_0
	goto Eventscript_ShinjiroFollower_1

Eventscript_ShinjiroFollower_6:
# 220 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_1, 0
# 221 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollowerMultichoice1
	goto Eventscript_ShinjiroFollower_5


Eventscript_ShinjiroFollowerMultichoice1::
# 233 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_1
# 242 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_2
# 251 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_3
# 261 "data/scripts/follower_npc.pory"
	checkplayergender
# 262 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_17
# 266 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_Cancel
	return

Eventscript_ShinjiroFollowerMultichoice1_1:
# 234 "data/scripts/follower_npc.pory"
	checkplayergender
# 235 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_8
# 239 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiMitsuFollower_Talk
	return

Eventscript_ShinjiroFollowerMultichoice1_2:
# 243 "data/scripts/follower_npc.pory"
	checkplayergender
# 244 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_11
# 248 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_SetPartner
	return

Eventscript_ShinjiroFollowerMultichoice1_3:
# 252 "data/scripts/follower_npc.pory"
	checkplayergender
# 253 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice1_14
# 257 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_Return
	return

Eventscript_ShinjiroFollowerMultichoice1_8:
# 236 "data/scripts/follower_npc.pory"
	call Eventscript_AkiShinjiFollower_Talk
	return

Eventscript_ShinjiroFollowerMultichoice1_11:
# 245 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_SetPartner
	return

Eventscript_ShinjiroFollowerMultichoice1_14:
# 254 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_Return
	return

Eventscript_ShinjiroFollowerMultichoice1_17:
# 263 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_Cancel
	return


Eventscript_ShinjiroFollowerMultichoice2::
# 272 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_1
# 281 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_2
# 290 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_3
# 300 "data/scripts/follower_npc.pory"
	checkplayergender
# 301 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_17
# 305 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_Cancel
	return

Eventscript_ShinjiroFollowerMultichoice2_1:
# 273 "data/scripts/follower_npc.pory"
	checkplayergender
# 274 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_8
# 278 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiMitsuFollower_Talk
	return

Eventscript_ShinjiroFollowerMultichoice2_2:
# 282 "data/scripts/follower_npc.pory"
	checkplayergender
# 283 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_11
# 287 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_UnsetPartner
	return

Eventscript_ShinjiroFollowerMultichoice2_3:
# 291 "data/scripts/follower_npc.pory"
	checkplayergender
# 292 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollowerMultichoice2_14
# 296 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Mitsu_Return
	return

Eventscript_ShinjiroFollowerMultichoice2_8:
# 275 "data/scripts/follower_npc.pory"
	call Eventscript_AkiShinjiFollower_Talk
	return

Eventscript_ShinjiroFollowerMultichoice2_11:
# 284 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_UnsetPartner
	return

Eventscript_ShinjiroFollowerMultichoice2_14:
# 293 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_Return
	return

Eventscript_ShinjiroFollowerMultichoice2_17:
# 302 "data/scripts/follower_npc.pory"
	call Eventscript_ShinjiroFollower_Aki_Cancel
	return


Eventscript_AkiShinjiFollower_Talk::
# 311 "data/scripts/follower_npc.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt Eventscript_AkiShinjiFollower_Talk_1
# 314 "data/scripts/follower_npc.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Eventscript_AkiShinjiFollower_Talk_2
	return

Eventscript_AkiShinjiFollower_Talk_1:
# 312 "data/scripts/follower_npc.pory"
	call Eventscript_AkiShinjiFollower_Talk_P
	return

Eventscript_AkiShinjiFollower_Talk_2:
# 315 "data/scripts/follower_npc.pory"
	call Eventscript_AkiShinjiFollower_Talk_C1
	return


Eventscript_ShinjiMitsuFollower_Talk::
# 320 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Eventscript_ShinjiMitsuFollower_Talk_1
# 324 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiMitsuFollower_Talk_Text_1
# 341 "data/scripts/follower_npc.pory"
	closemessage
# 342 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_2, 1
# 343 "data/scripts/follower_npc.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 344 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Eventscript_ShinjiMitsuFollower_Talk_5
# 347 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Eventscript_ShinjiMitsuFollower_Talk_6
# 350 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Eventscript_ShinjiMitsuFollower_Talk_7
# 354 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkup
Eventscript_ShinjiMitsuFollower_Talk_4:
# 356 "data/scripts/follower_npc.pory"
	waitmovement 0
	return

Eventscript_ShinjiMitsuFollower_Talk_1:
# 321 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiMitsuFollower_Talk_Text_0
	return

Eventscript_ShinjiMitsuFollower_Talk_5:
# 345 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkdown
	goto Eventscript_ShinjiMitsuFollower_Talk_4

Eventscript_ShinjiMitsuFollower_Talk_6:
# 348 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkleft
	goto Eventscript_ShinjiMitsuFollower_Talk_4

Eventscript_ShinjiMitsuFollower_Talk_7:
# 351 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, walkright
	goto Eventscript_ShinjiMitsuFollower_Talk_4


Eventscript_ShinjiroFollower_Aki_SetPartner::
# 361 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Aki_SetPartner_Text_0
# 362 "data/scripts/follower_npc.pory"
	closemessage
# 363 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_SHINJIRO_C1
# 364 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_ShinjiroFollower_Aki_UnsetPartner::
# 368 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Aki_UnsetPartner_Text_0
# 369 "data/scripts/follower_npc.pory"
	closemessage
# 370 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 371 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_ShinjiroFollower_Mitsu_SetPartner::
# 375 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Mitsu_SetPartner_Text_0
# 376 "data/scripts/follower_npc.pory"
	closemessage
# 377 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_SHINJIRO_C1
# 378 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_ShinjiroFollower_Mitsu_UnsetPartner::
# 382 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Mitsu_UnsetPartner_Text_0
# 383 "data/scripts/follower_npc.pory"
	closemessage
# 384 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 385 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_ShinjiroFollower_Aki_Return::
# 389 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Aki_Return_Text_0
# 390 "data/scripts/follower_npc.pory"
	closemessage
# 391 "data/scripts/follower_npc.pory"
	call Eventscript_NPCFollowerReturn
	return


Eventscript_ShinjiroFollower_Mitsu_Return::
# 395 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Mitsu_Return_Text_0
# 396 "data/scripts/follower_npc.pory"
	closemessage
# 397 "data/scripts/follower_npc.pory"
	call Eventscript_NPCFollowerReturn
	return


Eventscript_ShinjiroFollower_Aki_Cancel::
# 401 "data/scripts/follower_npc.pory"
	playse SE_PIN
# 402 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Eventscript_MitsuruFollower_Cancel_Movement_0
# 403 "data/scripts/follower_npc.pory"
	waitmovement 0
# 404 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Aki_Cancel_Text_0
	return


Eventscript_ShinjiroFollower_Mitsu_Cancel::
# 408 "data/scripts/follower_npc.pory"
	playse SE_PIN
# 409 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Eventscript_MitsuruFollower_Cancel_Movement_0
# 410 "data/scripts/follower_npc.pory"
	waitmovement 0
# 411 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Mitsu_Cancel_Text_0
	return


Eventscript_InteleonTFollower::
# 415 "data/scripts/follower_npc.pory"
	lock
# 416 "data/scripts/follower_npc.pory"
	faceplayer
# 417 "data/scripts/follower_npc.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 418 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Text_0
# 419 "data/scripts/follower_npc.pory"
	checkfollowerbattler
# 420 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Eventscript_InteleonTFollower_2
# 425 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_2, 0
# 426 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollowerMultichoice2
Eventscript_InteleonTFollower_1:
# 428 "data/scripts/follower_npc.pory"
	closemessage
# 429 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_InteleonTFollower_2:
# 421 "data/scripts/follower_npc.pory"
	multichoice 18, 4, MULTI_NPC_FOLLOWER_1, 0
# 422 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollowerMultichoice1
	goto Eventscript_InteleonTFollower_1


Eventscript_InteleonTFollowerMultichoice1::
# 434 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_InteleonTFollowerMultichoice1_1
# 443 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_InteleonTFollowerMultichoice1_2
# 452 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_InteleonTFollowerMultichoice1_3
# 456 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Cancel
	return

Eventscript_InteleonTFollowerMultichoice1_1:
# 435 "data/scripts/follower_npc.pory"
	checkplayergender
# 436 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_InteleonTFollowerMultichoice1_8
# 440 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_MitsuTalk
	return

Eventscript_InteleonTFollowerMultichoice1_2:
# 444 "data/scripts/follower_npc.pory"
	checkplayergender
# 445 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_InteleonTFollowerMultichoice1_11
# 449 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Mitsu_SetPartner
	return

Eventscript_InteleonTFollowerMultichoice1_3:
# 453 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Return
	return

Eventscript_InteleonTFollowerMultichoice1_8:
# 437 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_AkiTalk
	return

Eventscript_InteleonTFollowerMultichoice1_11:
# 446 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Aki_SetPartner
	return


Eventscript_InteleonTFollowerMultichoice2::
# 461 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 0
	goto_if_eq Eventscript_InteleonTFollowerMultichoice2_1
# 470 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 1
	goto_if_eq Eventscript_InteleonTFollowerMultichoice2_2
# 479 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, 2
	goto_if_eq Eventscript_InteleonTFollowerMultichoice2_3
# 483 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Cancel
	return

Eventscript_InteleonTFollowerMultichoice2_1:
# 462 "data/scripts/follower_npc.pory"
	checkplayergender
# 463 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_InteleonTFollowerMultichoice2_8
# 467 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_MitsuTalk
	return

Eventscript_InteleonTFollowerMultichoice2_2:
# 471 "data/scripts/follower_npc.pory"
	checkplayergender
# 472 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_InteleonTFollowerMultichoice2_11
# 476 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Mitsu_UnsetPartner
	return

Eventscript_InteleonTFollowerMultichoice2_3:
# 480 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Return
	return

Eventscript_InteleonTFollowerMultichoice2_8:
# 464 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_AkiTalk
	return

Eventscript_InteleonTFollowerMultichoice2_11:
# 473 "data/scripts/follower_npc.pory"
	call Eventscript_InteleonTFollower_Aki_UnsetPartner
	return


Eventscript_InteleonTFollower_AkiTalk::
# 488 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, shakehorizontal
# 489 "data/scripts/follower_npc.pory"
	waitmovement 0
# 490 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_AkiTalk_Text_0
	return


Eventscript_InteleonTFollower_MitsuTalk::
# 494 "data/scripts/follower_npc.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_lt Eventscript_InteleonTFollower_MitsuTalk_1
# 513 "data/scripts/follower_npc.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_eq Eventscript_InteleonTFollower_MitsuTalk_2
	return

Eventscript_InteleonTFollower_MitsuTalk_1:
# 495 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Eventscript_InteleonTFollower_MitsuTalk_5
# 500 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_MitsuTalk_Text_1
# 502 "data/scripts/follower_npc.pory"
	closemessage
# 503 "data/scripts/follower_npc.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 504 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LockDirectionAndWalkInPlace
# 505 "data/scripts/follower_npc.pory"
	waitmovement 0
# 506 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_MitsuTalk_Text_2
# 509 "data/scripts/follower_npc.pory"
	closemessage
# 510 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_3, 1
	return

Eventscript_InteleonTFollower_MitsuTalk_2:
# 514 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_MitsuTalk_Text_3
# 516 "data/scripts/follower_npc.pory"
	closemessage
# 517 "data/scripts/follower_npc.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 518 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LockDirectionAndWalkInPlace
# 519 "data/scripts/follower_npc.pory"
	waitmovement 0
# 520 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_MitsuTalk_Text_4
	return

Eventscript_InteleonTFollower_MitsuTalk_5:
# 496 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_MitsuTalk_Text_0
	return


# 525 "data/scripts/follower_npc.pory"
LockDirectionAndWalkInPlace:
# 526 "data/scripts/follower_npc.pory"
	lock_facing_direction
# 527 "data/scripts/follower_npc.pory"
	walk_in_place_right
# 528 "data/scripts/follower_npc.pory"
	unlock_facing_direction
	step_end

Eventscript_InteleonTFollower_Aki_SetPartner::
# 532 "data/scripts/follower_npc.pory"
	closemessage
# 533 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, shakehorizontal
# 534 "data/scripts/follower_npc.pory"
	waitmovement 0
# 535 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Aki_SetPartner_Text_0
# 536 "data/scripts/follower_npc.pory"
	closemessage
# 537 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 538 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_InteleonTFollower_Mitsu_SetPartner::
# 542 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Mitsu_SetPartner_Text_0
# 543 "data/scripts/follower_npc.pory"
	closemessage
# 544 "data/scripts/follower_npc.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_lt Eventscript_InteleonTFollower_Mitsu_SetPartner_2
# 547 "data/scripts/follower_npc.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_eq Eventscript_InteleonTFollower_Mitsu_SetPartner_3
Eventscript_InteleonTFollower_Mitsu_SetPartner_1:
# 550 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	return

Eventscript_InteleonTFollower_Mitsu_SetPartner_2:
# 545 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_INTELEON_T_P
	goto Eventscript_InteleonTFollower_Mitsu_SetPartner_1

Eventscript_InteleonTFollower_Mitsu_SetPartner_3:
# 548 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_INTELEON_T_C1
	goto Eventscript_InteleonTFollower_Mitsu_SetPartner_1


Eventscript_InteleonTFollower_Aki_UnsetPartner::
# 554 "data/scripts/follower_npc.pory"
	release
	end


Eventscript_InteleonTFollower_Mitsu_UnsetPartner::
# 559 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Mitsu_SetPartner_Text_0
# 560 "data/scripts/follower_npc.pory"
	closemessage
# 561 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 562 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	return


Eventscript_InteleonTFollower_Return::
# 566 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Mitsu_SetPartner_Text_0
# 567 "data/scripts/follower_npc.pory"
	closemessage
# 568 "data/scripts/follower_npc.pory"
	call Eventscript_NPCFollowerReturn
	return


Eventscript_InteleonTFollower_Cancel::
# 572 "data/scripts/follower_npc.pory"
	playse SE_PIN
# 573 "data/scripts/follower_npc.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Eventscript_MitsuruFollower_Cancel_Movement_0
# 574 "data/scripts/follower_npc.pory"
	waitmovement 0
# 575 "data/scripts/follower_npc.pory"
	msgbox Eventscript_InteleonTFollower_Cancel_Text_0
	return


Eventscript_AkiShinjiFollower_Talk_P::
# 580 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiShinjiFollower_Talk_P_Text_0
	return


Eventscript_AkiShinjiFollower_Talk_C1::
# 587 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Eventscript_AkiShinjiFollower_Talk_C1_1
# 595 "data/scripts/follower_npc.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Eventscript_AkiShinjiFollower_Talk_C1_2
# 606 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiShinjiFollower_Talk_C1_Text_2
# 615 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_1, 1
	return

Eventscript_AkiShinjiFollower_Talk_C1_1:
# 588 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiShinjiFollower_Talk_C1_Text_0
# 590 "data/scripts/follower_npc.pory"
	closemessage
# 591 "data/scripts/follower_npc.pory"
	playse SE_BOO
# 592 "data/scripts/follower_npc.pory"
	applymovement LOCALID_PLAYER, emoteangry
# 593 "data/scripts/follower_npc.pory"
	waitmovement 0
	return

Eventscript_AkiShinjiFollower_Talk_C1_2:
# 596 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkiShinjiFollower_Talk_C1_Text_1
# 602 "data/scripts/follower_npc.pory"
	closemessage
# 603 "data/scripts/follower_npc.pory"
	setvar VAR_TEMP_1, 2
	return


# 101 "data/scripts/follower_npc.pory"
Eventscript_MitsuruFollower_Cancel_Movement_0:
# 101 "data/scripts/follower_npc.pory"
	emote_question_mark
	step_end

Eventscript_MitsuruFollower_Text_0:
# 5 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Is something wrong, Sanada-kun?$"

Eventscript_AkiMitsuFollower_Talk_Text_0:
# 53 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Let's go, Sanada-kun. There's no time to\n"
	.string "waste.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}I know.$"

Eventscript_AkiMitsuFollower_Talk_Text_1:
# 57 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I'm still getting used to travelling with\n"
	.string "a larger party like this.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}If I have to be honest, I find it quite\n"
	.string "delightful so far.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Oh? Did you go travel before?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It was for the Ranger School. I used to\n"
	.string "do the fieldwork for the Pokémon\l"
	.string "Researchers there.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}That sounds awesome. I and Miki have\n"
	.string "always wanted to travel the region, for\l"
	.string "Pokémon research or no.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}......\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}......\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}I just brought the mood down, didn't I?\n"
	.string "Sorry.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}We will find her soon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Of course, I believe so.$"

Eventscript_AkiMitsuFollower_Talk_Text_2:
# 71 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Just want to say that you won't regret\n"
	.string "partnering with us.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}We'll see. I do rarely make wrong\n"
	.string "choices.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Ahaha, very confident, aren't you?\n"
	.string "Don't worry. I don't intend to make it a\l"
	.string "wrong choice.$"

Eventscript_MitsuruFollower_SetPartner_Text_0:
# 80 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well. I'll back you up.$"

Eventscript_MitsuruFollower_UnsetPartner_Text_0:
# 87 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}You want to train on your own? Your\n"
	.string "determination is truly admirable.$"

Eventscript_MitsuruFollower_Return_Text_0:
# 94 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}By all means. I figure you miss your\n"
	.string "Pokémon as well.$"

Eventscript_MitsuruFollower_Cancel_Text_0:
# 103 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Well, if you have anything you want to\n"
	.string "say to me, please don't hesitate.$"

Eventscript_AkihikoFollower_Text_0:
# 133 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Need something, Kirijo?$"

Eventscript_AkihikoFollower_SetPartner_Text_0:
# 181 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Alright. I won't lose to you!$"

Eventscript_AkihikoFollower_UnsetPartner_Text_0:
# 189 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure then. I'll just train on my own.$"

Eventscript_AkihikoFollower_Return_Text_0:
# 196 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Understood!$"

Eventscript_AkihikoFollower_Cancel_Text_0:
# 205 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Huh? Okay then.$"

Eventscript_ShinjiroFollower_Text_0:
# 213 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What's up, Aki?$"

Eventscript_ShinjiroFollower_Text_1:
# 216 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What's wrong, Princess?$"

Eventscript_ShinjiMitsuFollower_Talk_Text_0:
# 321 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Ahem, let's just go.$"

Eventscript_ShinjiMitsuFollower_Talk_Text_1:
# 324 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}.......\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}.......\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Ahem, may I ask you something?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Didn't you want to talk? So just fire\n"
	.string "away.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}How did you learn to battle when you\n"
	.string "didn't have a Pokémon before?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}They taught us in the orphanage.\p"
	.string "It'd be hard to manage if the kids have\n"
	.string "their own Pokémon so the staff lent us\l"
	.string "theirs for Pokémon battling classes.\p"
	.string "We also get a certified trainer card\n"
	.string "after graduating.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}So that was how it worked there.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Anything else?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}For now, no. Thank you, that was quite\n"
	.string "informative.\p"
	.string "What about you? I figure it'll only be\n"
	.string "fair if you ask me something in return.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}........\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}What's your Pokémon's favorite\n"
	.string "foods...?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}My Pokémon's favorite foods...?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}N-Never mind that. We're done here.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}Aragaki-kun?$"

Eventscript_ShinjiroFollower_Aki_SetPartner_Text_0:
# 361 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Can't do anything without me, huh?$"

Eventscript_ShinjiroFollower_Aki_UnsetPartner_Text_0:
# 368 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Alright then.$"

Eventscript_ShinjiroFollower_Mitsu_SetPartner_Text_0:
# 375 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}So you do need help sometimes, huh?$"

Eventscript_ShinjiroFollower_Mitsu_UnsetPartner_Text_0:
# 382 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Sure, I know you can hold your ground.$"

Eventscript_ShinjiroFollower_Aki_Return_Text_0:
# 389 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Sure then, I'll also check how Ferroseed\n"
	.string "is doing.$"

Eventscript_ShinjiroFollower_Mitsu_Return_Text_0:
# 395 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Got it.$"

Eventscript_ShinjiroFollower_Aki_Cancel_Text_0:
# 404 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}What is it? Just spit it out.$"

Eventscript_ShinjiroFollower_Mitsu_Cancel_Text_0:
# 411 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Whatever.$"

Eventscript_InteleonTFollower_Text_0:
# 418 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon looks at you and waits for\n"
	.string "what you want to say.)$"

Eventscript_InteleonTFollower_AkiTalk_Text_0:
# 490 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(It doesn't look like it wants to chat\n"
	.string "with you.)$"

Eventscript_InteleonTFollower_MitsuTalk_Text_0:
# 496 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Let's focusing on completing our\n"
	.string "mission, for Father.\p"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon nodded, looking determined.)$"

Eventscript_InteleonTFollower_MitsuTalk_Text_1:
# 500 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I hope Father will be safe without you,\n"
	.string "Inteleon.\p"
	.string "You're his most trusted partner and you\n"
	.string "two were never separated as far as I\l"
	.string "can remember.$"

Eventscript_InteleonTFollower_MitsuTalk_Text_2:
# 506 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_NORMAL}(Inteleon puts its hand on Mitsuru's\n"
	.string "shoulder, nodding.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}You're right, I should believe in him.\p"
	.string "Let's focusing on completing our\n"
	.string "mission.$"

Eventscript_InteleonTFollower_MitsuTalk_Text_3:
# 514 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}How do you think about those two boys,\n"
	.string "Inteleon?\p"
	.string "Did I make a right choice partnering up\n"
	.string "with them?$"

Eventscript_InteleonTFollower_MitsuTalk_Text_4:
# 520 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_DOUBT}(Inteleon lost in thought. Looks like it\n"
	.string "needs more time to answer this\l"
	.string "question.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I suppose only time will tell.$"

Eventscript_InteleonTFollower_Aki_SetPartner_Text_0:
# 535 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon refused. It doesn't trust\n"
	.string "Akihiko enough right now.)$"

Eventscript_InteleonTFollower_Mitsu_SetPartner_Text_0:
# 542 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon silently nods.)$"

Eventscript_InteleonTFollower_Cancel_Text_0:
# 575 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon looks confused but says\n"
	.string "nothing.)$"

Eventscript_AkiShinjiFollower_Talk_P_Text_0:
# 580 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Have you thought of which Pokémon you\n"
	.string "want for your first?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Not sure, but I guess I'd like a\n"
	.string "Grass-type Pokémon. Or a Steel-type\l"
	.string "one.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Really? I thought it'd be a Fire-type,\n"
	.string "because you love cooking.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Now that I think about it, that also\n"
	.string "isn't bad at all.$"

Eventscript_AkiShinjiFollower_Talk_C1_Text_0:
# 588 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Enough chatting. I'm done with your\n"
	.string "dumbass.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}I'm not dumb!!$"

Eventscript_AkiShinjiFollower_Talk_C1_Text_1:
# 596 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}There's one more weird thing about her.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Yeah?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}She takes at least an hour in bath. I\n"
	.string "don't get it.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}.............\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Should I ask her? It bothers me when I\n"
	.string "don't understand something.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}Don't dig your own grave like that.$"

Eventscript_AkiShinjiFollower_Talk_C1_Text_2:
# 606 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}At the risk of turning myself into a\n"
	.string "broken record, you shouldn't trust that\l"
	.string "girl so easily.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}I know, Shinji. Ms. Kobayashi's always\n"
	.string "warned us to not trust rich people.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Although I think she's quite weird for a\n"
	.string "billionair young lady.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}How so?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}She's not being arrogant nor flaunting\n"
	.string "her wealth?\p"
	.string "Nor looking down on us orphan kids.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Besides, she's good at battling and\n"
	.string "truly seems to love her Pokémon a lot.\p"
	.string "I've never seen rich people act like\n"
	.string "that.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Yeah, you're right about that.$"
