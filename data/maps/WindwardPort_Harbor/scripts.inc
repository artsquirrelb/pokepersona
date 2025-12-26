WindwardPort_Harbor_MapScripts::
# 2 "data/maps/WindwardPort_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WindwardPort_Harbor_MapScripts_OnTransition
# 6 "data/maps/WindwardPort_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, WindwardPort_Harbor_MapScripts_UpdatingNPCTime
# 3 "data/maps/WindwardPort_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WindwardPort_Harbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WindwardPort_Harbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/WindwardPort_Harbor/scripts.pory"
	map_script_2 VAR_CHAPTER_1_STATE, 4, WindwardPort_Harbor_MapScripts_OnFrame4
	.2byte 0


WindwardPort_Harbor_MapScripts_OnTransition::
# 10 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_VISITED_WINDWARD_PORT
# 11 "data/maps/WindwardPort_Harbor/scripts.pory"
	setrespawn HEAL_LOCATION_WINDWARD_PORT
# 12 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_1
# 13 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_2
# 14 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 15 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 4
	goto_if_eq WindwardPort_Harbor_MapScripts_OnTransition_2
WindwardPort_Harbor_MapScripts_OnTransition_1:
# 19 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 20 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 0
	goto_if_ge WindwardPort_Harbor_MapScripts_OnTransition_7
WindwardPort_Harbor_MapScripts_OnTransition_6:
# 20 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 100
	goto_if_eq WindwardPort_Harbor_MapScripts_OnTransition_5
WindwardPort_Harbor_MapScripts_OnTransition_4:
# 28 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 1
	goto_if_eq WindwardPort_Harbor_MapScripts_OnTransition_11
	return

WindwardPort_Harbor_MapScripts_OnTransition_2:
# 16 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_2
# 17 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	goto WindwardPort_Harbor_MapScripts_OnTransition_1

WindwardPort_Harbor_MapScripts_OnTransition_5:
# 22 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt WindwardPort_Harbor_MapScripts_OnTransition_13
# 22 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 21
	goto_if_ge WindwardPort_Harbor_MapScripts_OnTransition_13
	goto WindwardPort_Harbor_MapScripts_OnTransition_4

WindwardPort_Harbor_MapScripts_OnTransition_7:
# 20 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 20
	goto_if_le WindwardPort_Harbor_MapScripts_OnTransition_5
	goto WindwardPort_Harbor_MapScripts_OnTransition_6

WindwardPort_Harbor_MapScripts_OnTransition_11:
# 29 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 17, 29
# 30 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
	return

WindwardPort_Harbor_MapScripts_OnTransition_13:
# 23 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadenewbgm MUS_DP_LAKE_CAVERNS
# 24 "data/maps/WindwardPort_Harbor/scripts.pory"
	savebgm MUS_DP_LAKE_CAVERNS
# 25 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_3
	goto WindwardPort_Harbor_MapScripts_OnTransition_4


WindwardPort_Harbor_MapScripts_OnFrame4::
# 34 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab
	return


WindwardPort_Harbor_MapScripts_UpdatingNPCTime::
# 38 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 39 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt WindwardPort_Harbor_MapScripts_UpdatingNPCTime_2
# 39 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_ge WindwardPort_Harbor_MapScripts_UpdatingNPCTime_2
# 43 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_1
WindwardPort_Harbor_MapScripts_UpdatingNPCTime_1:
# 45 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt WindwardPort_Harbor_MapScripts_UpdatingNPCTime_7
# 45 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 21
	goto_if_ge WindwardPort_Harbor_MapScripts_UpdatingNPCTime_7
# 49 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_4
	return

WindwardPort_Harbor_MapScripts_UpdatingNPCTime_2:
# 40 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_1
	goto WindwardPort_Harbor_MapScripts_UpdatingNPCTime_1

WindwardPort_Harbor_MapScripts_UpdatingNPCTime_7:
# 46 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_4
	return


WindwardPort_Harbor_Eventscript_SailorOnGuard::
# 54 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 55 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 56 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0
# 57 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 58 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt WindwardPort_Harbor_Eventscript_SailorOnGuard_1
# 58 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_ge WindwardPort_Harbor_Eventscript_SailorOnGuard_1
# 95 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_ShipOutOfCommission
	return

WindwardPort_Harbor_Eventscript_SailorOnGuard_1:
# 59 "data/maps/WindwardPort_Harbor/scripts.pory"
	showmoneybox 0, 0
# 60 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_1, MSGBOX_YESNO
# 63 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 64 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_SailorOnGuard_6
# 91 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
	return

WindwardPort_Harbor_Eventscript_SailorOnGuard_6:
# 65 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkmoney 300
# 66 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_SailorOnGuard_9
# 82 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0
# 83 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_3
# 84 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 85 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
# 86 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_SailorOnGuard_9:
# 67 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHOP
# 68 "data/maps/WindwardPort_Harbor/scripts.pory"
	removemoney 300
# 69 "data/maps/WindwardPort_Harbor/scripts.pory"
	updatemoneybox
# 70 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0
# 71 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_2
# 72 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 73 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
# 74 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement 1, walkinplacedown
# 75 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitmovement
# 76 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 77 "data/maps/WindwardPort_Harbor/scripts.pory"
	addtime 0, 3, 0
# 78 "data/maps/WindwardPort_Harbor/scripts.pory"
	warp MAP_CORALPORT, 4, 20
# 79 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitstate
	return


WindwardPort_Harbor_Eventscript_ShipOutOfCommission::
# 100 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_ShipOutOfCommission_Text_0
	return


WindwardPort_Harbor_Eventscript_VeteranF::
# 105 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 106 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 107 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_VeteranF_Text_0
# 108 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_VeteranF_Text_1
# 111 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 112 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Pelipper::
# 117 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_PELIPPER
# 118 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Gurdurr::
# 123 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_GURDURR
# 124 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Bewear::
# 129 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_BEWEAR
# 130 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Worker::
# 135 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 136 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 137 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_Worker_Text_0
# 138 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_Worker_Text_1
# 140 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 141 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Sign::
# 146 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 147 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_Sign_Text_0
# 148 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab::
# 153 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 154 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 155 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement A_WP, faceleft
# 156 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement M_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_0
# 157 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 4
# 158 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove S_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_1
# 159 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 160 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Text_0
# 164 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 165 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 166 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 167 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_2, 1
# 168 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement M_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_3
# 169 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement S_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_4
# 170 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove A_WP, invisible
# 171 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 172 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject A_WP
# 173 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 174 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject S_WP
# 175 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 176 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject M_WP
# 177 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 178 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_2
# 179 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 5
# 180 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger::
# 185 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 186 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2
# 186 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 21
	goto_if_ge WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_1:
# 225 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2:
# 187 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 187 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 188 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 4
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 188 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 6
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 189 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 8
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 189 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 10
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 190 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 12
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 203 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 203 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 204 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 5
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 204 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 7
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 205 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 9
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 205 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 11
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 206 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 13
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_1

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7:
# 192 "data/maps/WindwardPort_Harbor/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 193 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_36
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_35:
# 200 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21:
# 208 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 209 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_1, MSGBOX_YESNO
# 210 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_39
# 218 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 219 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer walkright
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_38:
# 221 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_36:
# 194 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 195 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 196 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 197 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_0
# 198 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_35

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_39:
# 211 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 212 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 213 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_2
# 214 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 215 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 44
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_38


WindwardPort_Harbor_Eventscript_GhostBoyMad1::
# 230 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 231 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_3
# 232 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 0, 20
# 233 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 0, 20
# 234 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 235 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 236 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_GhostBoyMad
	return


WindwardPort_Harbor_Eventscript_GhostBoyMad2::
# 240 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 241 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_3
# 242 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 0, 21
# 243 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 0, 21
# 244 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 245 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 246 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_GhostBoyMad
	return


WindwardPort_Harbor_Eventscript_GhostBoyMad::
# 250 "data/maps/WindwardPort_Harbor/scripts.pory"
	special StopMapMusic
# 251 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 252 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_1
# 256 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 257 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 258 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 259 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 260 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_2
# 261 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 262 "data/maps/WindwardPort_Harbor/scripts.pory"
	trainerbattle_no_intro TRAINER_GHOSTBOY, WindwardPort_Harbor_GhostBoy_Defeated
# 263 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_3
# 265 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 266 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 267 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_4
# 268 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 269 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 270 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 271 "data/maps/WindwardPort_Harbor/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY
# 272 "data/maps/WindwardPort_Harbor/scripts.pory"
	warpwhitefade MAP_ROUTE2_HOUSE, 4, 4
# 273 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitstate
	return


WindwardPort_Harbor_Eventscript_PreschoolerM::
# 281 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 282 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_2
WindwardPort_Harbor_Eventscript_PreschoolerM_1:
# 285 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_5
WindwardPort_Harbor_Eventscript_PreschoolerM_4:
# 288 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_8
WindwardPort_Harbor_Eventscript_PreschoolerM_7:
# 291 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 292 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 293 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_BUBBLE
# 294 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement GHOSTBOY, emotecry
# 295 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 296 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_PreschoolerM_Text_1
# 297 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 298 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 299 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_10
# 315 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_PreschoolerM_Text_5
# 316 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 317 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_PreschoolerM_Text_6, MSGBOX_YESNO
# 319 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_PreschoolerM_16
# 328 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_HideAndSeekRejected
	return

WindwardPort_Harbor_Eventscript_PreschoolerM_2:
# 283 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_FoundGhostBoy1
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_1

WindwardPort_Harbor_Eventscript_PreschoolerM_5:
# 286 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartTreasureHunt2
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_4

WindwardPort_Harbor_Eventscript_PreschoolerM_8:
# 289 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_FoundTreasure
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_7

WindwardPort_Harbor_Eventscript_PreschoolerM_10:
# 300 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_PreschoolerM_Text_2
# 301 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 302 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_PreschoolerM_Text_3, MSGBOX_YESNO
# 304 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_PreschoolerM_13
# 311 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_HideAndSeekRejected
	return

WindwardPort_Harbor_Eventscript_PreschoolerM_13:
# 305 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_PreschoolerM_Text_4
# 307 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 308 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek
	return

WindwardPort_Harbor_Eventscript_PreschoolerM_16:
# 320 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_PreschoolerM_Text_7
# 322 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 323 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_PreschoolerM_Text_8
# 324 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 325 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek
	return


WindwardPort_Harbor_Eventscript_HideAndSeekRejected::
# 334 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 335 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_HideAndSeekRejected_Text_0
# 336 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 337 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 338 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 339 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_StartHideAndSeek::
# 344 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHINY
# 345 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_0
# 346 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 347 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartHideAndSeek_Text_0
# 349 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 350 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 1
# 351 "data/maps/WindwardPort_Harbor/scripts.pory"
	getobjectfacingdirection GHOSTBOY, VAR_0x8002
# 352 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8002, DIR_WEST
	goto_if_eq WindwardPort_Harbor_Eventscript_StartHideAndSeek_2
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_2
WindwardPort_Harbor_Eventscript_StartHideAndSeek_1:
# 358 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 359 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 17, 29
# 360 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 17, 29
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 363 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectnewmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, faceright
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_StartHideAndSeek_2:
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_1
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek_1


WindwardPort_Harbor_Eventscript_FoundGhostBoy1::
# 370 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 371 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 373 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, emoteexclamation
# 374 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_0
# 378 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 379 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 2
# 380 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_1
# 381 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 382 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject GHOSTBOY
# 383 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 384 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 385 "data/maps/WindwardPort_Harbor/scripts.pory"
	fwdtime 7, 0
# 386 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 387 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 388 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 389 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 390 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 391 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundGhostBoy1_2
# 398 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_2
# 401 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
WindwardPort_Harbor_Eventscript_FoundGhostBoy1_1:
# 403 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 404 "data/maps/WindwardPort_Harbor/scripts.pory"
	call EventScript_CheckDaysLeft
# 405 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadeinbgm 1
# 406 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_2:
# 392 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_1
# 395 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_FoundGhostBoy1_1


WindwardPort_Harbor_Eventscript_StartTreasureHunt2::
# 411 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 412 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 413 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 414 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_0, MSGBOX_YESNO
# 416 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_StartTreasureHunt2_1
# 426 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHINY
# 427 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, emotemusic
# 428 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 429 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_2
# 434 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 435 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 3
# 436 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 437 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 438 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_1:
# 417 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 418 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_1
# 419 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 420 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 421 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 422 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_FoundTreasure::
# 444 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 445 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 446 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 447 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundTreasure_2
# 454 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_2
# 455 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_3
WindwardPort_Harbor_Eventscript_FoundTreasure_1:
# 458 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_4
# 459 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 460 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CARBOS
# 461 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 4
# 462 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 463 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_5
# 465 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 466 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 467 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject GHOSTBOY
# 468 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 469 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 470 "data/maps/WindwardPort_Harbor/scripts.pory"
	fwdtime 7, 0
# 471 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 472 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 473 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 474 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 475 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 476 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundTreasure_6
# 482 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_7
# 484 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
WindwardPort_Harbor_Eventscript_FoundTreasure_5:
# 486 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 487 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_2
# 488 "data/maps/WindwardPort_Harbor/scripts.pory"
	call EventScript_CheckDaysLeft
# 489 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadeinbgm 1
# 490 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_FoundTreasure_2:
# 448 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_0
# 449 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 450 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_1
	goto WindwardPort_Harbor_Eventscript_FoundTreasure_1

WindwardPort_Harbor_Eventscript_FoundTreasure_6:
# 477 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_6
# 479 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_FoundTreasure_5


# 156 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_0:
# 156 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_left
# 156 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_right
	step_end

# 158 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_1:
# 158 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_down
# 158 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_left
	step_end

# 167 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_2:
# 167 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_left
# 167 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_visible
	step_end

# 168 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_3:
# 168 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_right
# 168 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_invisible
	step_end

# 169 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_4:
# 169 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_up
# 169 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_invisible
	step_end

# 345 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_0:
# 345 "data/maps/WindwardPort_Harbor/scripts.pory"
	emote_music
	step_end

# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_1:
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
	step_end

# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_2:
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
	step_end

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0:
# 56 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Anderson$"

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_1:
# 60 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "This ship is departing for Coralport.\p"
	.string "It will arrive at the destination in\n"
	.string "approximately {COLOR RED}3 hours{COLOR 2}.\p"
	.string "It costs {COLOR GREEN}¥100 {COLOR 2}per ticket. Would you like\n"
	.string "to board the ship?$"

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_2:
# 71 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "This way, please.$"

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_3:
# 83 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "money for 3 tickets.$"

WindwardPort_Harbor_Eventscript_ShipOutOfCommission_Text_0:
# 100 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The ship to Coralport is currently out\n"
	.string "of commission.\p"
	.string "Please come back between 5PM and 7AM.$"

WindwardPort_Harbor_Eventscript_VeteranF_Text_0:
# 107 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Jura$"

WindwardPort_Harbor_Eventscript_VeteranF_Text_1:
# 108 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Windward Port is in the center of the\n"
	.string "region so you would think it's the\l"
	.string "biggest.\p"
	.string "In fact, the biggest port is the one\n"
	.string "next to Faeruma City, my hometown.\p"
	.string "Faeruma Pharmacy factory produces\n"
	.string "most of the region's medicine supply\l"
	.string "and that's where Faeruma Port comes in.$"

WindwardPort_Harbor_Eventscript_Worker_Text_0:
# 137 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Earu$"

WindwardPort_Harbor_Eventscript_Worker_Text_1:
# 138 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'm so glad my shift is in the daytime.\p"
	.string "My co-workers said they kept hearing a\n"
	.string "weeping sound at night and honestly, I\l"
	.string "don't want to find out where that sound\l"
	.string "comes from.$"

WindwardPort_Harbor_Eventscript_Sign_Text_0:
# 147 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Please stay clear of the entrance.$"

WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Text_0:
# 160 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}We're in Windward Port at last.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Let's visit my personal lab to pick up\n"
	.string "our items.\p"
	.string "It's the house with the red square roof\n"
	.string "at the south of the city.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Sure.$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_0:
# 197 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The wind is getting chilly.$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_1:
# 209 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leave the harbor and ignore the kid?$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_2:
# 213 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The wind is getting stronger and\n"
	.string "chillier.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0:
# 251 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Yamaki?$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_1:
# 252 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leaving a kid alone at night while he's\n"
	.string "waiting for you?\p"
	.string "Do you know what people like you are\n"
	.string "called?\p"
	.string "Yes, I'm talking to {COLOR RED}YOU{COLOR 2}. Not the\n"
	.string "characters {COLOR RED}YOU{COLOR 2}'re controlling.\p"
	.string "They aren't scumbags like {COLOR RED}YOU{COLOR 2}.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_2:
# 260 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Die.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_3:
# 263 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The air is getting colder and colder.\p"
	.string "It's hard to open your eyes.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_4:
# 267 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leave. And don't your dare come back.$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0:
# 295 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Yamaki$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_1:
# 296 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "-sob- -sob-$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_2:
# 300 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}What's wrong, little boy?\n"
	.string "Why are you here alone?$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_3:
# 302 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}No one wants to play with me...\p"
	.string "Will you play with me, mister?$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_4:
# 305 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure! Just for a little while, though.\p"
	.string "After that you gotta go home, alright?$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_5:
# 315 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Why are you crying? Are you lost?$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_6:
# 317 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}No one wants to play with me...\p"
	.string "Will you play with me, miss?$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_7:
# 320 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I don't see why not.\p"
	.string "But promise me you'll go home after\n"
	.string "we're done playing?$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_8:
# 323 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Promise!$"

WindwardPort_Harbor_Eventscript_HideAndSeekRejected_Text_0:
# 335 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Why does no one want to play with me?$"

WindwardPort_Harbor_Eventscript_StartHideAndSeek_Text_0:
# 347 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Alright! Let's play a round of\n"
	.string "hide-and-seek!\p"
	.string "I'll go hide! Don't worry, I won't leave\n"
	.string "this harbor!$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_0:
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oh! You found me!\p"
	.string "Hehehe, that makes me really happy. I\n"
	.string "thought you'd leave me alone.\p"
	.string "I'll go home now. Let's play again some\n"
	.string "times!$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_1:
# 392 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}(Did he just vanish??)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}(Maybe I'm getting tired. It's pretty\n"
	.string "late-)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}(Wait! Since when the sun's out??)$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_2:
# 398 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}(Did my eyes play tricks on me? He just\n"
	.string "vanished.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}(Perhaps I do need to go rest. It's late\n"
	.string "after all-)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}(Wait, it's already morning?)$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_0:
# 414 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Hello! We meet again!\p"
	.string "Will you play with me today?$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_1:
# 418 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Understood. I'll play by myself then...$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_2:
# 429 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Awesome!\p"
	.string "So... Let's play treasure hunt today!\p"
	.string "I've hidden a Revive within one of the\n"
	.string "cargo boxes in this harbor.\p"
	.string "If you can find it and bring it back to\n"
	.string "me, I'll give you a gift!\p"
	.string "Now off you go! I'll be waiting for you\n"
	.string "here until you find it.$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_0:
# 448 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}It's this one, right?$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_1:
# 450 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Woah! You found it!\p"
	.string "You're really good at games, mister!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_2:
# 454 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Is this the right one?$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_3:
# 455 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Woah! You found it!\p"
	.string "You're really good at games, miss!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_4:
# 458 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'll give you a gift as promised!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_5:
# 463 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I have to go now.\p"
	.string "I had fun today! Let's play again next\n"
	.string "time!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_6:
# 477 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}(I swear he vanished into thin air\n"
	.string "again.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(What a weird boy.)$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_7:
# 482 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}(He just vanished again.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(That's... quite weird.)$"

WindwardPort_Harbor_GhostBoy_Defeated::
# 276 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "...$"
