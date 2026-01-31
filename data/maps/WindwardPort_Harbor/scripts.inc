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
# 29 "data/maps/WindwardPort_Harbor/scripts.pory"
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
# 30 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 17, 29
# 31 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
	return

WindwardPort_Harbor_MapScripts_OnTransition_13:
# 23 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadenewbgm MUS_DP_LAKE_CAVERNS
# 24 "data/maps/WindwardPort_Harbor/scripts.pory"
	savebgm MUS_DP_LAKE_CAVERNS
# 25 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_3
# 26 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_5
	goto WindwardPort_Harbor_MapScripts_OnTransition_4


WindwardPort_Harbor_MapScripts_OnFrame4::
# 35 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab
	return


WindwardPort_Harbor_MapScripts_UpdatingNPCTime::
# 39 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 40 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt WindwardPort_Harbor_MapScripts_UpdatingNPCTime_2
# 40 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_ge WindwardPort_Harbor_MapScripts_UpdatingNPCTime_2
# 44 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_1
WindwardPort_Harbor_MapScripts_UpdatingNPCTime_1:
# 46 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt WindwardPort_Harbor_MapScripts_UpdatingNPCTime_7
# 46 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 21
	goto_if_ge WindwardPort_Harbor_MapScripts_UpdatingNPCTime_7
# 50 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_4
	return

WindwardPort_Harbor_MapScripts_UpdatingNPCTime_2:
# 41 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_1
	goto WindwardPort_Harbor_MapScripts_UpdatingNPCTime_1

WindwardPort_Harbor_MapScripts_UpdatingNPCTime_7:
# 47 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_4
	return


WindwardPort_Harbor_Eventscript_SailorOnGuard::
# 55 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 56 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 57 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0
# 58 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 59 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt WindwardPort_Harbor_Eventscript_SailorOnGuard_2
# 59 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_ge WindwardPort_Harbor_Eventscript_SailorOnGuard_2
# 96 "data/maps/WindwardPort_Harbor/scripts.pory"
	call WindwardPort_Harbor_Eventscript_ShipOutOfCommission
WindwardPort_Harbor_Eventscript_SailorOnGuard_1:
# 98 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 99 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_SailorOnGuard_2:
# 60 "data/maps/WindwardPort_Harbor/scripts.pory"
	showmoneybox 0, 0
# 61 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_1, MSGBOX_YESNO
# 64 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 65 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_SailorOnGuard_7
# 92 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
	goto WindwardPort_Harbor_Eventscript_SailorOnGuard_1

WindwardPort_Harbor_Eventscript_SailorOnGuard_7:
# 66 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkmoney 300
# 67 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_SailorOnGuard_10
# 83 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0
# 84 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_3
# 85 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 86 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
# 87 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_SailorOnGuard_10:
# 68 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHOP
# 69 "data/maps/WindwardPort_Harbor/scripts.pory"
	removemoney 300
# 70 "data/maps/WindwardPort_Harbor/scripts.pory"
	updatemoneybox
# 71 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0
# 72 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_2
# 73 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 74 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
# 75 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement 1, walkinplacedown
# 76 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitmovement
# 77 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 78 "data/maps/WindwardPort_Harbor/scripts.pory"
	addtime 0, 3, 0
# 79 "data/maps/WindwardPort_Harbor/scripts.pory"
	warp MAP_CORALPORT, 4, 20
# 80 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitstate
	goto WindwardPort_Harbor_Eventscript_SailorOnGuard_1


WindwardPort_Harbor_Eventscript_ShipOutOfCommission::
# 104 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_ShipOutOfCommission_Text_0
	return


WindwardPort_Harbor_Eventscript_VeteranF::
# 109 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 110 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 111 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_VeteranF_Text_0
# 112 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_VeteranF_Text_1
# 115 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 116 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Pelipper::
# 121 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_PELIPPER
# 122 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Gurdurr::
# 127 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_GURDURR
# 128 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Bewear::
# 133 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_BEWEAR
# 134 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Worker::
# 139 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 140 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 141 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_Worker_Text_0
# 142 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_Worker_Text_1
# 144 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 145 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Sign::
# 150 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 151 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_Sign_Text_0
# 152 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab::
# 157 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 158 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 159 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement A_WP, faceleft
# 160 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement M_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_0
# 161 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 4
# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove S_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_1
# 163 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 164 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Text_0
# 168 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 169 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 170 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 171 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_2, 1
# 172 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement M_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_3
# 173 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement S_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_4
# 174 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove A_WP, invisible
# 175 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 176 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject A_WP
# 177 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 178 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject S_WP
# 179 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 180 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject M_WP
# 181 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 182 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_2
# 183 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 5
# 184 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger::
# 189 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 190 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2
# 190 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 21
	goto_if_ge WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_1:
# 229 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2:
# 191 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 191 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 192 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 4
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 192 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 6
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 193 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 8
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 193 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 10
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 194 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 12
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 207 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 207 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 208 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 5
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 208 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 7
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 209 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 9
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 209 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 11
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 210 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 13
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_1

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7:
# 196 "data/maps/WindwardPort_Harbor/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 197 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_36
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_35:
# 204 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21:
# 212 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 213 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_1, MSGBOX_YESNO
# 214 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_39
# 222 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 223 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer walkright
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_38:
# 225 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_36:
# 198 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 199 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 200 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 201 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_0
# 202 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_35

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_39:
# 215 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 216 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 217 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_2
# 218 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 219 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 44
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_38


WindwardPort_Harbor_Eventscript_GhostBoyMad1::
# 234 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 235 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_3
# 236 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 0, 20
# 237 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 0, 20
# 238 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 239 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 240 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_GhostBoyMad
	return


WindwardPort_Harbor_Eventscript_GhostBoyMad2::
# 244 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 245 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_3
# 246 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 0, 21
# 247 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 0, 21
# 248 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 249 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 250 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_GhostBoyMad
	return


WindwardPort_Harbor_Eventscript_GhostBoyMad::
# 254 "data/maps/WindwardPort_Harbor/scripts.pory"
	special StopMapMusic
# 255 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 256 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_1
# 260 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 261 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 262 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 263 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 264 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_2
# 265 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 266 "data/maps/WindwardPort_Harbor/scripts.pory"
	trainerbattle_no_intro TRAINER_GHOSTBOY, WindwardPort_Harbor_GhostBoy_Defeated
# 267 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_3
# 269 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 270 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 271 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_4
# 272 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 273 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 274 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 275 "data/maps/WindwardPort_Harbor/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY
# 276 "data/maps/WindwardPort_Harbor/scripts.pory"
	warpwhitefade MAP_ROUTE2_HOUSE, 4, 4
# 277 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitstate
	return


WindwardPort_Harbor_Eventscript_PreschoolerM::
# 285 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 286 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 287 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 288 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 289 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_2
WindwardPort_Harbor_Eventscript_PreschoolerM_1:
# 292 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_5
WindwardPort_Harbor_Eventscript_PreschoolerM_4:
# 295 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_8
WindwardPort_Harbor_Eventscript_PreschoolerM_7:
# 298 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_11
WindwardPort_Harbor_Eventscript_PreschoolerM_10:
# 301 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 4
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_13
	return

WindwardPort_Harbor_Eventscript_PreschoolerM_2:
# 290 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartQuestGhosBoy
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_1

WindwardPort_Harbor_Eventscript_PreschoolerM_5:
# 293 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_FoundGhostBoy1
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_4

WindwardPort_Harbor_Eventscript_PreschoolerM_8:
# 296 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartTreasureHunt2
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_7

WindwardPort_Harbor_Eventscript_PreschoolerM_11:
# 299 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_TreasureHint
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_10

WindwardPort_Harbor_Eventscript_PreschoolerM_13:
# 302 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_2
# 303 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_15
# 307 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartQuiz3
	return

WindwardPort_Harbor_Eventscript_PreschoolerM_15:
# 304 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_FoundTreasure
	return


WindwardPort_Harbor_Eventscript_StartQuestGhosBoy::
# 313 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_BUBBLE
# 314 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement GHOSTBOY, emotecry
# 315 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_0
# 316 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 317 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 318 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_1
# 334 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_4
# 335 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 336 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_5, MSGBOX_YESNO
# 338 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_7
# 347 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_HideAndSeekRejected
	return

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_1:
# 319 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_1
# 320 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 321 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_2, MSGBOX_YESNO
# 323 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_4
# 330 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_HideAndSeekRejected
	return

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_4:
# 324 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_3
# 326 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 327 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek
	return

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_7:
# 339 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_6
# 341 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 342 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_7
# 343 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 344 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek
	return


WindwardPort_Harbor_Eventscript_HideAndSeekRejected::
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 354 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_HideAndSeekRejected_Text_0
# 355 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 357 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 358 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_StartHideAndSeek::
# 363 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHINY
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_0
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 366 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartHideAndSeek_Text_0
# 368 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 369 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 1
# 370 "data/maps/WindwardPort_Harbor/scripts.pory"
	getobjectfacingdirection GHOSTBOY, VAR_0x8002
# 371 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8002, DIR_WEST
	goto_if_eq WindwardPort_Harbor_Eventscript_StartHideAndSeek_2
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_2
WindwardPort_Harbor_Eventscript_StartHideAndSeek_1:
# 377 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 378 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 17, 29
# 379 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 17, 29
# 380 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 381 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 382 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectnewmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 383 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, faceright
# 384 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_StartHideAndSeek_2:
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_1
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek_1


WindwardPort_Harbor_Eventscript_FoundGhostBoy1::
# 389 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 390 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, emoteexclamation
# 391 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_0
# 394 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 395 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 2
# 396 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_1
# 397 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 398 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject GHOSTBOY
# 399 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 400 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 401 "data/maps/WindwardPort_Harbor/scripts.pory"
	fwdtime 7, 0
# 402 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 403 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 404 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 405 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 406 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 407 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundGhostBoy1_2
# 414 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_2
# 417 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
WindwardPort_Harbor_Eventscript_FoundGhostBoy1_1:
# 419 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 420 "data/maps/WindwardPort_Harbor/scripts.pory"
	call EventScript_CheckDaysLeft
# 421 "data/maps/WindwardPort_Harbor/scripts.pory"
	special SetCB2LoadMap
# 422 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_2:
# 408 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_1
# 411 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_FoundGhostBoy1_1


WindwardPort_Harbor_Eventscript_StartTreasureHunt2::
# 427 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_0, MSGBOX_YESNO
# 429 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_StartTreasureHunt2_1
# 439 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHINY
# 440 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, emotemusic
# 441 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 442 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_2
# 447 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 448 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 3
# 449 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 450 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 451 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_1:
# 430 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 431 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_1
# 432 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 433 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 434 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 435 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_TreasureInBarrel::
# 457 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_TreasureInBarrel_1
	return

WindwardPort_Harbor_Eventscript_TreasureInBarrel_1:
# 459 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 460 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 461 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 462 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_TreasureInBarrel_Text_0
# 464 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 465 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 4
# 466 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_TreasureHint::
# 472 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_TreasureHint_Text_0
# 474 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 475 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_FoundTreasure::
# 480 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 481 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundTreasure_2
# 488 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_2
# 489 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_3
WindwardPort_Harbor_Eventscript_FoundTreasure_1:
# 492 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_4
# 493 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 494 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CARBOS
# 496 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 497 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_5
# 499 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 500 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 501 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject GHOSTBOY
# 502 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 503 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 504 "data/maps/WindwardPort_Harbor/scripts.pory"
	fwdtime 7, 0
# 505 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 506 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 507 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 508 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 509 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 510 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundTreasure_6
# 516 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_7
# 518 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
WindwardPort_Harbor_Eventscript_FoundTreasure_5:
# 520 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 521 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_2
# 522 "data/maps/WindwardPort_Harbor/scripts.pory"
	call EventScript_CheckDaysLeft
# 523 "data/maps/WindwardPort_Harbor/scripts.pory"
	special SetCB2LoadMap
# 524 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_FoundTreasure_2:
# 482 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_0
# 483 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 484 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_1
	goto WindwardPort_Harbor_Eventscript_FoundTreasure_1

WindwardPort_Harbor_Eventscript_FoundTreasure_6:
# 511 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_6
# 513 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_FoundTreasure_5


WindwardPort_Harbor_Eventscript_StartQuiz3::
# 529 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuiz3_Text_0, MSGBOX_YESNO
# 531 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_StartQuiz3_2
# 542 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 543 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_1
# 544 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 545 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuiz3_Text_2
WindwardPort_Harbor_Eventscript_StartQuiz3_1:
# 548 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 549 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 550 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 551 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_StartQuiz3_2:
# 532 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 533 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 5
# 534 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_0
# 535 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 536 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuiz3_Text_1
	goto WindwardPort_Harbor_Eventscript_StartQuiz3_1


WindwardPort_Harbor_Eventscript_QuizQuestions::
# 556 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_0
# 559 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_1, 0
# 560 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_2, 1
# 561 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_3, 2
# 562 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 563 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_2
WindwardPort_Harbor_Eventscript_QuizQuestions_1:
# 568 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 569 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 570 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_4
# 571 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_5, 0
# 572 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_6, 1
# 573 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_7, 2
# 574 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 575 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_5
WindwardPort_Harbor_Eventscript_QuizQuestions_4:
# 580 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 581 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 582 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_8
# 583 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_9, 0
# 584 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_10, 1
# 585 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_11, 2
# 586 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_12, 3
# 587 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 588 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_8
WindwardPort_Harbor_Eventscript_QuizQuestions_7:
# 593 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 594 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_13
# 596 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_14, 0
# 597 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_15, 1
# 598 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_16, 2
# 599 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 600 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_11
WindwardPort_Harbor_Eventscript_QuizQuestions_10:
# 605 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 606 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 607 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_17
# 609 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_18, 0
# 610 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_19, 1
# 611 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_20, 2
# 612 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_21, 3
# 613 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_14
# 613 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_14
WindwardPort_Harbor_Eventscript_QuizQuestions_13:
# 618 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 619 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 620 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_22
# 622 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_19
WindwardPort_Harbor_Eventscript_QuizQuestions_18:
# 629 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_22
# 629 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_22
WindwardPort_Harbor_Eventscript_QuizQuestions_21:
# 638 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_27
# 638 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 4
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_27
WindwardPort_Harbor_Eventscript_QuizQuestions_26:
# 648 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 5
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_31
	return

WindwardPort_Harbor_Eventscript_QuizQuestions_2:
# 564 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 565 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 566 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_1

WindwardPort_Harbor_Eventscript_QuizQuestions_5:
# 576 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 577 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 578 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_4

WindwardPort_Harbor_Eventscript_QuizQuestions_8:
# 589 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 590 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 591 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_7

WindwardPort_Harbor_Eventscript_QuizQuestions_11:
# 601 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 602 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 603 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_10

WindwardPort_Harbor_Eventscript_QuizQuestions_14:
# 614 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 615 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 616 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_13

WindwardPort_Harbor_Eventscript_QuizQuestions_19:
# 623 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_23
# 625 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 626 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 627 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_18

WindwardPort_Harbor_Eventscript_QuizQuestions_22:
# 630 "data/maps/WindwardPort_Harbor/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_F
# 631 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_24
# 633 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 634 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 635 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 636 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_21

WindwardPort_Harbor_Eventscript_QuizQuestions_27:
# 639 "data/maps/WindwardPort_Harbor/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_F
# 640 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_25
# 642 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 643 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 644 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 645 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_ABILITY_CHANGER, 1
# 646 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_26

WindwardPort_Harbor_Eventscript_QuizQuestions_31:
# 649 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_26
# 651 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 652 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 653 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 654 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_ABILITY_CHANGER, 1
# 655 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
# 656 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	return


WindwardPort_Harbor_Eventscript_QuizFinished::
# 661 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 662 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_0
# 664 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 665 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizFinished_2
# 670 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_2
WindwardPort_Harbor_Eventscript_QuizFinished_1:
# 673 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHINY
# 674 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, emotemusic
# 675 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 676 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_3
# 678 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 679 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 680 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject GHOSTBOY
# 681 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 682 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 683 "data/maps/WindwardPort_Harbor/scripts.pory"
	fwdtime 7, 0
# 684 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 685 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 686 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 687 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 688 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 689 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizFinished_6
# 695 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_5
# 697 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
WindwardPort_Harbor_Eventscript_QuizFinished_5:
# 699 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 700 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_3
# 701 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 6
# 702 "data/maps/WindwardPort_Harbor/scripts.pory"
	call EventScript_CheckDaysLeft
# 703 "data/maps/WindwardPort_Harbor/scripts.pory"
	special SetCB2LoadMap
# 704 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_QuizFinished_2:
# 666 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_1
	goto WindwardPort_Harbor_Eventscript_QuizFinished_1

WindwardPort_Harbor_Eventscript_QuizFinished_6:
# 690 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_4
# 692 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_QuizFinished_5


# 160 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_0:
# 160 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_left
# 160 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_right
	step_end

# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_1:
# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_down
# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_left
	step_end

# 171 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_2:
# 171 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_left
# 171 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_visible
	step_end

# 172 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_3:
# 172 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_right
# 172 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_invisible
	step_end

# 173 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_4:
# 173 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_up
# 173 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_invisible
	step_end

# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_0:
# 364 "data/maps/WindwardPort_Harbor/scripts.pory"
	emote_music
	step_end

# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_1:
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
	step_end

# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_2:
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 375 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
	step_end

# 534 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_0:
# 534 "data/maps/WindwardPort_Harbor/scripts.pory"
	emote_happy
	step_end

# 543 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_1:
# 543 "data/maps/WindwardPort_Harbor/scripts.pory"
	emote_sad
	step_end

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0:
# 57 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Anderson$"

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_1:
# 61 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "This ship is departing for Coralport.\p"
	.string "It will arrive at the destination in\n"
	.string "approximately {COLOR RED}3 hours{COLOR 2}.\p"
	.string "It costs {COLOR GREEN}¥100 {COLOR 2}per ticket. Would you like\n"
	.string "to board the ship?$"

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_2:
# 72 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "This way, please.$"

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_3:
# 84 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "money for 3 tickets.$"

WindwardPort_Harbor_Eventscript_ShipOutOfCommission_Text_0:
# 104 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The ship to Coralport is currently out\n"
	.string "of commission.\p"
	.string "Please come back between 5PM and 7AM.$"

WindwardPort_Harbor_Eventscript_VeteranF_Text_0:
# 111 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Jura$"

WindwardPort_Harbor_Eventscript_VeteranF_Text_1:
# 112 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Windward Port is in the center of the\n"
	.string "region so you would think it's the\l"
	.string "biggest.\p"
	.string "In fact, the biggest port is the one\n"
	.string "next to Faeruma City, my hometown.\p"
	.string "Faeruma Pharmacy factory produces\n"
	.string "most of the region's medicine supply\l"
	.string "and that's where Faeruma Port comes in.$"

WindwardPort_Harbor_Eventscript_Worker_Text_0:
# 141 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Earu$"

WindwardPort_Harbor_Eventscript_Worker_Text_1:
# 142 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'm so glad my shift is in the daytime.\p"
	.string "My co-workers said they kept hearing a\n"
	.string "weeping sound at night and honestly, I\l"
	.string "don't want to find out where that sound\l"
	.string "comes from.$"

WindwardPort_Harbor_Eventscript_Sign_Text_0:
# 151 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Please stay clear of the entrance.$"

WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Text_0:
# 164 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}We're in Windward Port at last.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Let's visit my personal lab to pick up\n"
	.string "our package.\p"
	.string "It's the house with the tall red roof at\n"
	.string "the south of the city.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Sure.$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_0:
# 201 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The wind is getting chilly.$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_1:
# 213 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leave the harbor and ignore the kid?$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_2:
# 217 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The wind is getting stronger and\n"
	.string "chillier.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0:
# 255 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Yamaki?$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_1:
# 256 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leaving a kid alone at night while he's\n"
	.string "waiting for you?\p"
	.string "Do you know what people like you are\n"
	.string "called?\p"
	.string "Yes, I'm talking to {COLOR RED}YOU{COLOR 2}. Not the\n"
	.string "characters {COLOR RED}YOU{COLOR 2}'re controlling.\p"
	.string "They aren't scumbags like {COLOR RED}YOU{COLOR 2}.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_2:
# 264 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Die.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_3:
# 267 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The air is getting colder and colder.\p"
	.string "It's hard to open your eyes.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_4:
# 271 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leave. And don't your dare come back.$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0:
# 288 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Yamaki$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_0:
# 315 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "-sob- -sob-$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_1:
# 319 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}What's wrong, little boy?\n"
	.string "Why are you here alone?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_2:
# 321 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}No one wants to play with me...\p"
	.string "Will you play with me, mister?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_3:
# 324 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Sure! Just for a little while, though.\p"
	.string "After that you gotta go home, alright?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_4:
# 334 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Why are you crying? Are you lost?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_5:
# 336 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}No one wants to play with me...\p"
	.string "Will you play with me, miss?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_6:
# 339 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I don't see why not.\p"
	.string "But promise me you'll go home after\n"
	.string "we're done playing?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_7:
# 342 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Promise!$"

WindwardPort_Harbor_Eventscript_HideAndSeekRejected_Text_0:
# 354 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Why does no one want to play with me?$"

WindwardPort_Harbor_Eventscript_StartHideAndSeek_Text_0:
# 366 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Alright! Let's play a round of\n"
	.string "hide-and-seek!\p"
	.string "I'll go hide! Don't worry, I won't leave\n"
	.string "this harbor!$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_0:
# 391 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oh! You found me!\p"
	.string "Hehehe, that makes me really happy. I\n"
	.string "thought you'd leave me alone.\p"
	.string "I'll go home now. Let's play again some\n"
	.string "times!$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_1:
# 408 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}(Did he just vanish??)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}(Maybe I'm getting tired. It's pretty\n"
	.string "late-)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}(Wait! Since when the sun's out??)$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_2:
# 414 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}(Did my eyes play tricks on me? He just\n"
	.string "vanished.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}(Perhaps I do need to go rest. It's late\n"
	.string "after all-)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}(Wait, it's already morning?)$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_0:
# 427 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Hello! We meet again!\p"
	.string "Will you play with me today?$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_1:
# 431 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Understood. I'll play by myself then...$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_2:
# 442 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Awesome!\p"
	.string "So... Let's play treasure hunt today!\p"
	.string "I've hidden a Revive within one of the\n"
	.string "cargo boxes in this harbor.\p"
	.string "If you can find it and bring it back to\n"
	.string "me, I'll give you a gift!\p"
	.string "Now off you go! I'll be waiting for you\n"
	.string "here until you find it.$"

WindwardPort_Harbor_Eventscript_TreasureInBarrel_Text_0:
# 462 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "There's something inside the barrel!\p"
	.string "It's a Revive. It must be the hidden\n"
	.string "treasure.$"

WindwardPort_Harbor_Eventscript_TreasureHint_Text_0:
# 472 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You still haven't found it? Let me give\n"
	.string "you a hint then!\p"
	.string "It's inside a wooden barrel!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_0:
# 482 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}It's this one, right?$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_1:
# 484 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Woah! You found it!\p"
	.string "You're really good at games, mister!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_2:
# 488 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Is this the right one?$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_3:
# 489 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Woah! You found it!\p"
	.string "You're really good at games, miss!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_4:
# 492 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'll give you a gift as promised!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_5:
# 497 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I have to go now.\p"
	.string "I had fun today! Let's play again next\n"
	.string "time!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_6:
# 511 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}(I swear he vanished into thin air\n"
	.string "again.)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(What a weird boy.)$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_7:
# 516 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}(He just vanished again.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(That's... quite weird.)$"

WindwardPort_Harbor_Eventscript_StartQuiz3_Text_0:
# 529 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oh! We meet again!\p"
	.string "How about another game tonight?$"

WindwardPort_Harbor_Eventscript_StartQuiz3_Text_1:
# 536 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Awesome! It's a simple quiz of 5\n"
	.string "questions this time!\n"
	.string "I'll give you a small prize depending on\l"
	.string "how many questions you answer\l"
	.string "correctly!\p"
	.string "You may want to take a look around the\n"
	.string "harbor before attempting.\p"
	.string "When you're ready for the quiz, talk to\n"
	.string "me again!$"

WindwardPort_Harbor_Eventscript_StartQuiz3_Text_2:
# 545 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oh, I guess you're busy then...$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_0:
# 556 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Alright! Here we go!\p"
	.string "Question 1: Not counting you, your\n"
	.string "friends, people in the ships and the\l"
	.string "Pokémon,\p"
	.string "how many people are there when it's\n"
	.string "daytime in this harbor?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_1:
# 559 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "5$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_2:
# 560 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "4$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_3:
# 561 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "3$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_4:
# 570 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Question 2: How long does it take to\n"
	.string "travel from Windward Port to Coralport\l"
	.string "by ship?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_5:
# 571 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "3 hours$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_6:
# 572 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "4 hours$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_7:
# 573 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "5 hours$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_8:
# 582 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Question 3: How many white barrels are\n"
	.string "there in this harbor?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_9:
# 583 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "6$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_10:
# 584 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "7$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_11:
# 585 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "8$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_12:
# 586 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "9$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_13:
# 594 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Those questions were quite hard, right?\n"
	.string "I'll give you an easier one this time.\p"
	.string "Question 4: What type is Wynaut?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_14:
# 596 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Water$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_15:
# 597 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Psychic$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_16:
# 598 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Normal$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_17:
# 607 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Alright, last question!\p"
	.string "Question 5: Which one of these\n"
	.string "abilities can a Gimmighoul normally\l"
	.string "have?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_18:
# 609 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Run Away$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_19:
# 610 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Rattled$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_20:
# 611 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Cursed Body$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_21:
# 612 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Good As Gold$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_22:
# 620 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Whew, that was all of the questions!\p"
	.string "Let's see how many correct answers you\n"
	.string "got{PAUSE 30}.{PAUSE 30}.{PAUSE 30}.$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_23:
# 623 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oof... Too bad, you got none...\p"
	.string "I'll still give you a small prize for\n"
	.string "spending time with me, though!$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_24:
# 631 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You got {COLOR BLUE}{STR_VAR_1}{COLOR 2} correct\n"
	.string "answer(s)!\p"
	.string "Here's the prize for that!$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_25:
# 640 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You got {COLOR BLUE}{STR_VAR_1}{COLOR 2} correct\n"
	.string "answers!\p"
	.string "Here's the prize for that!$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_26:
# 649 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You got everything right! That's\n"
	.string "awesome!\p"
	.string "Here, you can have all of these!$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_0:
# 662 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "It was fun today, too!\p"
	.string "Oh right, I haven't learned your name.\n"
	.string "If you don't mind, can I know it?$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_1:
# 666 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}I'm Akihiko!\p"
	.string "Let's play again next time, Yamaki.$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_2:
# 670 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}You can call me Mitsuru.\p"
	.string "We should play again next time, Yamaki.$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_3:
# 676 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Of course!\p"
	.string "Gotta go now, bye-bye!$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_4:
# 690 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(He vanished again...)\p"
	.string "(Wait a minute... Since when did I learn\n"
	.string "that his name was Yamaki?)$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_5:
# 695 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(He vanished...)\p"
	.string "(Wait... How did I know his name was\n"
	.string "Yamaki? He never told me, didn't he?)$"

WindwardPort_Harbor_GhostBoy_Defeated::
# 280 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "...$"
