SunshineMeadow_MapScripts::
# 8 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 5 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 35
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 11 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm OBJ_EVENT_ID_CAMERA, 9, 11
# 12 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 1, 12, 11
# 13 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 2, 12, 12
# 14 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 3, 9, 10
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 35, SunshineMeadow_Eventscript_AkihikoOnWarp35
	.2byte 0

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 35, SunshineMeadow_Eventscript_AkihikoOnFrame35
	.2byte 0


SunshineMeadow_Eventscript_AkihikoOnWarp35::
# 20 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 21 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 22 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, faceleft
# 23 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 8, invisible
	return


SunshineMeadow_Eventscript_AkihikoOnFrame35::
# 27 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk::
# 31 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 32 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0, MSGBOX_YESNO
# 33 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 34 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2
# 39 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle
SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1:
	end

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2:
# 35 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1
# 36 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1


SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle::
# 45 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
# 46 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1
# 53 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1
# 54 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 55 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 56 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1:
# 47 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0
# 49 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_StartingMitsuruFirstBattle::
# 63 "data/maps/SunshineMeadow/scripts.pory"
	delay 40
# 64 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 8, ShinjiroComesInTime
# 65 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkiMitsuNoticeShinjiro
# 66 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 67 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0
# 70 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 71 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 72 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 73 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 74 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 75 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 76 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 77 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 78 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
# 83 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 84 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	end


# 88 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroComesInTime:
# 89 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 89 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 89 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 89 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
	step_end

# 92 "data/maps/SunshineMeadow/scripts.pory"
AkiMitsuNoticeShinjiro:
# 93 "data/maps/SunshineMeadow/scripts.pory"
	emote_exclamation_mark
# 94 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle::
# 98 "data/maps/SunshineMeadow/scripts.pory"
	special ChooseHalfPartyForBattle
# 99 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1
# 103 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 104 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated
# 105 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 106 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 107 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_5
# 112 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattle
# 113 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_4:
# 115 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattle
	end

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1:
# 100 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_5:
# 108 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonMitsuruFirstBattle
# 109 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_4


SunshineMeadow_Eventscript_PostMitsuruFirstBattle::
# 135 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruApproachesToHeal
# 136 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 137 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 138 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 139 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 140 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 141 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 142 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackAfterHealing
# 143 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 144 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 146 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 147 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackToStartBattle
# 148 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 149 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 150 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 151 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 6, ShinjiroGoesToStartBattle
# 152 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 153 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 154 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2
# 157 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 158 "data/maps/SunshineMeadow/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 159 "data/maps/SunshineMeadow/scripts.pory"
	delay 40
# 160 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_3
# 161 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 162 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
# 163 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraBackToAkihikoPostShinjiMitsuFirstFight
# 164 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 165 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 166 "data/maps/SunshineMeadow/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 167 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 168 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 173 "data/maps/SunshineMeadow/scripts.pory"
MitsuruApproachesToHeal:
# 174 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 174 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 174 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 174 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 177 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackAfterHealing:
# 178 "data/maps/SunshineMeadow/scripts.pory"
	lock_facing_direction
# 179 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 179 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 180 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 183 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackToStartBattle:
# 184 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 184 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 185 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 188 "data/maps/SunshineMeadow/scripts.pory"
AkihikoGetsOutOfBattleSpace:
# 189 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 189 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 190 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 191 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 194 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesToStartBattle:
# 195 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 195 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 196 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 196 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 196 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 197 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 200 "data/maps/SunshineMeadow/scripts.pory"
CameraBackToAkihikoPostShinjiMitsuFirstFight:
# 201 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 201 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 202 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 202 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

SunshineMeadow_Eventscript_MeadowSign::
# 206 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MeadowSign_Text_0
# 207 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_DirectionSign::
# 212 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_DirectionSign_Text_0
# 213 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_OW_Flabebe_Red::
# 218 "data/maps/SunshineMeadow/scripts.pory"
	lockall
# 219 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_NORMAL
# 220 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 221 "data/maps/SunshineMeadow/scripts.pory"
	startoverworldencounter 7
# 222 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 4
# 223 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_2
# 224 "data/maps/SunshineMeadow/scripts.pory"
	releaseall
	end


SunshineMeadow_Eventscript_OW_Flabebe_White::
# 229 "data/maps/SunshineMeadow/scripts.pory"
	lockall
# 230 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_NORMAL
# 231 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 232 "data/maps/SunshineMeadow/scripts.pory"
	startoverworldencounter 7
# 233 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 5
# 234 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
# 235 "data/maps/SunshineMeadow/scripts.pory"
	releaseall
	end


SunshineMeadow_Eventscript_OW_Flabebe_Yellow::
# 240 "data/maps/SunshineMeadow/scripts.pory"
	lockall
# 241 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_NORMAL
# 242 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 243 "data/maps/SunshineMeadow/scripts.pory"
	startoverworldencounter 7
# 244 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 6
# 245 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_4
# 246 "data/maps/SunshineMeadow/scripts.pory"
	releaseall
	end


SunshineMeadow_Eventscript_OW_Flabebe_Blue::
# 251 "data/maps/SunshineMeadow/scripts.pory"
	lockall
# 252 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_NORMAL
# 253 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 254 "data/maps/SunshineMeadow/scripts.pory"
	startoverworldencounter 7
# 255 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 7
# 256 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_5
# 257 "data/maps/SunshineMeadow/scripts.pory"
	releaseall
	end


SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0:
# 32 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}You've come. I suppose you're ready for\n"
	.string "our first battle?$"

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1:
# 35 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}No worry. We still have time.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0:
# 47 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}It seems like you don't have at least 3\n"
	.string "healthy Pokémon to fight.\p"
	.string "Come back later when you do.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1:
# 53 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0:
# 67 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLE}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not quite, you're just in time. We're\n"
	.string "starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1:
# 78 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be a fair fight if I do.\p"
	.string "Beside, he's not mine. He's only here to\n"
	.string "watch over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Alright then. Let's go, Kirijo.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0:
# 140 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Alright, I've healed your party.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1:
# 144 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}It's your turn now, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2:
# 154 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I should also study more of how they\n"
	.string "fight.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_3:
# 160 "data/maps/SunshineMeadow/scripts.pory"
	.string "Shinjiro managed to knock out one of\n"
	.string "Kirijo's Pokémon.$"

SunshineMeadow_Eventscript_MeadowSign_Text_0:
# 206 "data/maps/SunshineMeadow/scripts.pory"
	.string "Sunshine Meadow$"

SunshineMeadow_Eventscript_DirectionSign_Text_0:
# 212 "data/maps/SunshineMeadow/scripts.pory"
	.string "Route 2 {DOWN_ARROW}$"

SunshineMeadow_Eventscript_WonMitsuruFirstBattle::
# 120 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team,\p"
	.string "I'm still very impressed that you\n"
	.string "managed to beat me, Sanada-kun.$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattle::
# 125 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn... The way she ordered her\n"
	.string "Pokémons was so smart.)$"

MitsuruFirstBattleDefeated::
# 130 "data/maps/SunshineMeadow/scripts.pory"
	.string "C'est magnifique.$"
