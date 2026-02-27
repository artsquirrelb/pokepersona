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
	map_script_2 VAR_CHAPTER_1_STATE, C1_BOARDING_SHIP, WindwardPort_Harbor_MapScripts_OnFrame4
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
	compare VAR_CHAPTER_1_STATE, C1_BOARDING_SHIP
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
	showmoneybox 0, 0
# 60 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_1, MSGBOX_YESNO
# 63 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 64 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_SailorOnGuard_2
# 91 "data/maps/WindwardPort_Harbor/scripts.pory"
	hidemoneybox
WindwardPort_Harbor_Eventscript_SailorOnGuard_1:
# 93 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_SailorOnGuard_2:
# 65 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkmoney 300
# 66 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_SailorOnGuard_5
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

WindwardPort_Harbor_Eventscript_SailorOnGuard_5:
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
	goto WindwardPort_Harbor_Eventscript_SailorOnGuard_1


WindwardPort_Harbor_Eventscript_VeteranF::
# 98 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 99 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 100 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_VeteranF_Text_0
# 101 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_VeteranF_Text_1
# 104 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 105 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Pelipper::
# 110 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_PELIPPER
# 111 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Gurdurr::
# 116 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_GURDURR
# 117 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Bewear::
# 122 "data/maps/WindwardPort_Harbor/scripts.pory"
	moncryscript SPECIES_BEWEAR
# 123 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Worker::
# 128 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 129 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 130 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_Worker_Text_0
# 131 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_Worker_Text_1
# 134 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 135 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_Sign::
# 140 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 141 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_Sign_Text_0
# 142 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab::
# 147 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 148 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 149 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement A_WP, faceleft
# 150 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement M_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_0
# 151 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 4
# 152 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove S_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_1
# 153 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 154 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Text_0
# 158 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 159 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 160 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 161 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_2, 1
# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement M_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_3
# 163 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement S_WP, WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_4
# 164 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove A_WP, invisible
# 165 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 166 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject A_WP
# 167 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 168 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject S_WP
# 169 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 170 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject M_WP
# 171 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 1
# 172 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_2
# 173 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, C1_TO_MAYOIDOS_LAB
# 174 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger::
# 179 "data/maps/WindwardPort_Harbor/scripts.pory"
	gettime
# 180 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2
# 180 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8000, 21
	goto_if_ge WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_1:
# 219 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_2:
# 181 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 181 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 182 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 4
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 182 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 6
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 183 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 8
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 183 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 10
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 184 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 12
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7
# 197 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 197 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 198 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 5
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 198 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 7
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 199 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 9
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 199 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 11
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
# 200 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 13
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_1

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_7:
# 186 "data/maps/WindwardPort_Harbor/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 187 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_36
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_35:
# 194 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_21:
# 202 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 203 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_1, MSGBOX_YESNO
# 204 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_39
# 212 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 213 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer walkright
WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_38:
# 215 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_36:
# 188 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 189 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 190 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 191 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_0
# 192 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_35

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_39:
# 205 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 206 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 207 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_2
# 208 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 209 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 44
	goto WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_38


WindwardPort_Harbor_Eventscript_GhostBoyMad1::
# 224 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 225 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_3
# 226 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 0, 20
# 227 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 0, 20
# 228 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 229 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 230 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_GhostBoyMad
	return


WindwardPort_Harbor_Eventscript_GhostBoyMad2::
# 234 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 235 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_TEMP_3
# 236 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 0, 21
# 237 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 0, 21
# 238 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 239 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 240 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_GhostBoyMad
	return


WindwardPort_Harbor_Eventscript_GhostBoyMad::
# 244 "data/maps/WindwardPort_Harbor/scripts.pory"
	special StopMapMusic
# 245 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 246 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_1
# 250 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 251 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_SWEET_SCENT
# 252 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 253 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 254 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_2
# 255 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 256 "data/maps/WindwardPort_Harbor/scripts.pory"
	trainerbattle_no_intro TRAINER_GHOSTBOY, WindwardPort_Harbor_GhostBoy_Defeated
# 257 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_3
# 259 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 260 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0
# 261 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_4
# 262 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 263 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 264 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 265 "data/maps/WindwardPort_Harbor/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY
# 266 "data/maps/WindwardPort_Harbor/scripts.pory"
	warpwhitefade MAP_ROUTE2_HOUSE, 4, 4
# 267 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitstate
	return


WindwardPort_Harbor_Eventscript_PreschoolerM::
# 275 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 276 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 277 "data/maps/WindwardPort_Harbor/scripts.pory"
	faceplayer
# 278 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 279 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_2
WindwardPort_Harbor_Eventscript_PreschoolerM_1:
# 282 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_5
WindwardPort_Harbor_Eventscript_PreschoolerM_4:
# 285 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_8
WindwardPort_Harbor_Eventscript_PreschoolerM_7:
# 288 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_11
WindwardPort_Harbor_Eventscript_PreschoolerM_10:
# 291 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 4
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_13
	return

WindwardPort_Harbor_Eventscript_PreschoolerM_2:
# 280 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartQuestGhosBoy
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_1

WindwardPort_Harbor_Eventscript_PreschoolerM_5:
# 283 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_FoundGhostBoy1
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_4

WindwardPort_Harbor_Eventscript_PreschoolerM_8:
# 286 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartTreasureHunt2
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_7

WindwardPort_Harbor_Eventscript_PreschoolerM_11:
# 289 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_TreasureHint
	goto WindwardPort_Harbor_Eventscript_PreschoolerM_10

WindwardPort_Harbor_Eventscript_PreschoolerM_13:
# 292 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_2
# 293 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_PreschoolerM_15
# 297 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartQuiz3
	return

WindwardPort_Harbor_Eventscript_PreschoolerM_15:
# 294 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_FoundTreasure
	return


WindwardPort_Harbor_Eventscript_StartQuestGhosBoy::
# 303 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_M_BUBBLE
# 304 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymovement GHOSTBOY, emotecry
# 305 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_0
# 306 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 307 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 308 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_1
# 324 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_4
# 325 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 326 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_5, MSGBOX_YESNO
# 328 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_7
# 337 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_HideAndSeekRejected
	return

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_1:
# 309 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_1
# 310 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 311 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_2, MSGBOX_YESNO
# 313 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_4
# 320 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_HideAndSeekRejected
	return

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_4:
# 314 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_3
# 316 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 317 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek
	return

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_7:
# 329 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_6
# 331 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 332 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_7
# 333 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 334 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek
	return


WindwardPort_Harbor_Eventscript_HideAndSeekRejected::
# 343 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 344 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_HideAndSeekRejected_Text_0
# 345 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 346 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 347 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 348 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_StartHideAndSeek::
# 353 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHINY
# 354 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_0
# 355 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartHideAndSeek_Text_0
# 358 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 359 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 1
# 360 "data/maps/WindwardPort_Harbor/scripts.pory"
	getobjectfacingdirection GHOSTBOY, VAR_0x8002
# 361 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_0x8002, DIR_WEST
	goto_if_eq WindwardPort_Harbor_Eventscript_StartHideAndSeek_2
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_2
WindwardPort_Harbor_Eventscript_StartHideAndSeek_1:
# 367 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 368 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxy GHOSTBOY, 17, 29
# 369 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectxyperm GHOSTBOY, 17, 29
# 370 "data/maps/WindwardPort_Harbor/scripts.pory"
	addobject GHOSTBOY
# 371 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 372 "data/maps/WindwardPort_Harbor/scripts.pory"
	setobjectnewmovementtype GHOSTBOY, MOVEMENT_TYPE_FACE_RIGHT
# 373 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, faceright
# 374 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_StartHideAndSeek_2:
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_1
	goto WindwardPort_Harbor_Eventscript_StartHideAndSeek_1


WindwardPort_Harbor_Eventscript_FoundGhostBoy1::
# 379 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 380 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, emoteexclamation
# 381 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_0
# 384 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 385 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 2
# 386 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_1
# 387 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 388 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject GHOSTBOY
# 389 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 390 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 391 "data/maps/WindwardPort_Harbor/scripts.pory"
	fwdtime 7, 0
# 392 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 393 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 394 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 395 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 396 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 397 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundGhostBoy1_2
# 404 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_2
# 407 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
WindwardPort_Harbor_Eventscript_FoundGhostBoy1_1:
# 409 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 410 "data/maps/WindwardPort_Harbor/scripts.pory"
	call EventScript_CheckDaysLeft
# 411 "data/maps/WindwardPort_Harbor/scripts.pory"
	special SetCB2LoadMap
# 412 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_2:
# 398 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_1
# 401 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_FoundGhostBoy1_1


WindwardPort_Harbor_Eventscript_StartTreasureHunt2::
# 417 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_0, MSGBOX_YESNO
# 419 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_StartTreasureHunt2_1
# 429 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHINY
# 430 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, emotemusic
# 431 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 432 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_2
# 437 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 438 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 3
# 439 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 440 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 441 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_1:
# 420 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 421 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_1
# 422 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 423 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 424 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 425 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_TreasureInBarrel::
# 447 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_TreasureInBarrel_1
	return

WindwardPort_Harbor_Eventscript_TreasureInBarrel_1:
# 449 "data/maps/WindwardPort_Harbor/scripts.pory"
	lock
# 450 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 451 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 452 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_TreasureInBarrel_Text_0
# 454 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 455 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 4
# 456 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_TreasureHint::
# 462 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_TreasureHint_Text_0
# 464 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 465 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


WindwardPort_Harbor_Eventscript_FoundTreasure::
# 470 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 471 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundTreasure_2
# 478 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_2
# 479 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_3
WindwardPort_Harbor_Eventscript_FoundTreasure_1:
# 482 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_4
# 483 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 484 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CARBOS
# 486 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 487 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_5
# 489 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 490 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 491 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject GHOSTBOY
# 492 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 493 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 494 "data/maps/WindwardPort_Harbor/scripts.pory"
	fwdtime 7, 0
# 495 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 496 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 497 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 498 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 499 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 500 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_FoundTreasure_6
# 506 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_7
# 508 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
WindwardPort_Harbor_Eventscript_FoundTreasure_5:
# 510 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 511 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_2
# 512 "data/maps/WindwardPort_Harbor/scripts.pory"
	call EventScript_CheckDaysLeft
# 513 "data/maps/WindwardPort_Harbor/scripts.pory"
	special SetCB2LoadMap
# 514 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_FoundTreasure_2:
# 472 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_0
# 473 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 474 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_1
	goto WindwardPort_Harbor_Eventscript_FoundTreasure_1

WindwardPort_Harbor_Eventscript_FoundTreasure_6:
# 501 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_FoundTreasure_Text_6
# 503 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_FoundTreasure_5


WindwardPort_Harbor_Eventscript_StartQuiz3::
# 519 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuiz3_Text_0, MSGBOX_YESNO
# 521 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WindwardPort_Harbor_Eventscript_StartQuiz3_2
# 532 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 533 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_1
# 534 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 535 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuiz3_Text_2
WindwardPort_Harbor_Eventscript_StartQuiz3_1:
# 538 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 539 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 540 "data/maps/WindwardPort_Harbor/scripts.pory"
	refreshquesticon
# 541 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_StartQuiz3_2:
# 522 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 523 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 5
# 524 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_0
# 525 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 526 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_StartQuiz3_Text_1
	goto WindwardPort_Harbor_Eventscript_StartQuiz3_1


WindwardPort_Harbor_Eventscript_QuizQuestions::
# 546 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_0
# 549 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_1, 0
# 550 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_2, 1
# 551 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_3, 2
# 552 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 553 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_2
WindwardPort_Harbor_Eventscript_QuizQuestions_1:
# 558 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 559 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 560 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_4
# 561 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_5, 0
# 562 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_6, 1
# 563 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_7, 2
# 564 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 565 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_5
WindwardPort_Harbor_Eventscript_QuizQuestions_4:
# 570 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 571 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 572 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_8
# 573 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_9, 0
# 574 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_10, 1
# 575 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_11, 2
# 576 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_12, 3
# 577 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 578 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_8
WindwardPort_Harbor_Eventscript_QuizQuestions_7:
# 583 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 584 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_13
# 586 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_14, 0
# 587 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_15, 1
# 588 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_16, 2
# 589 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultistack 18, 4, TRUE, 3, FALSE, 0, NULL
# 590 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_11
WindwardPort_Harbor_Eventscript_QuizQuestions_10:
# 595 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 20
# 596 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 597 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_17
# 599 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_18, 0
# 600 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_19, 1
# 601 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_20, 2
# 602 "data/maps/WindwardPort_Harbor/scripts.pory"
	dynmultipush WindwardPort_Harbor_Eventscript_QuizQuestions_Text_21, 3
# 603 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_14
# 603 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_14
WindwardPort_Harbor_Eventscript_QuizQuestions_13:
# 608 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 609 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 610 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_22
# 612 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_19
WindwardPort_Harbor_Eventscript_QuizQuestions_18:
# 619 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_22
# 619 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 2
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_22
WindwardPort_Harbor_Eventscript_QuizQuestions_21:
# 628 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_27
# 628 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 4
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_27
WindwardPort_Harbor_Eventscript_QuizQuestions_26:
# 638 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_TEMP_F, 5
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizQuestions_31
	return

WindwardPort_Harbor_Eventscript_QuizQuestions_2:
# 554 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 555 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 556 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_1

WindwardPort_Harbor_Eventscript_QuizQuestions_5:
# 566 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 567 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 568 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_4

WindwardPort_Harbor_Eventscript_QuizQuestions_8:
# 579 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 580 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 581 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_7

WindwardPort_Harbor_Eventscript_QuizQuestions_11:
# 591 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 592 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 593 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_10

WindwardPort_Harbor_Eventscript_QuizQuestions_14:
# 604 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SUCCESS
# 605 "data/maps/WindwardPort_Harbor/scripts.pory"
	waitse
# 606 "data/maps/WindwardPort_Harbor/scripts.pory"
	addvar VAR_TEMP_F, 1
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_13

WindwardPort_Harbor_Eventscript_QuizQuestions_19:
# 613 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_23
# 615 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 616 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 617 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_18

WindwardPort_Harbor_Eventscript_QuizQuestions_22:
# 620 "data/maps/WindwardPort_Harbor/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_F
# 621 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_24
# 623 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 624 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 625 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 626 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_21

WindwardPort_Harbor_Eventscript_QuizQuestions_27:
# 629 "data/maps/WindwardPort_Harbor/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_F
# 630 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_25
# 632 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 633 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 634 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 635 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_ABILITY_CHANGER, 1
# 636 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	goto WindwardPort_Harbor_Eventscript_QuizQuestions_26

WindwardPort_Harbor_Eventscript_QuizQuestions_31:
# 639 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizQuestions_Text_26
# 641 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 642 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 643 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 644 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_ABILITY_CHANGER, 1
# 645 "data/maps/WindwardPort_Harbor/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
# 646 "data/maps/WindwardPort_Harbor/scripts.pory"
	goto WindwardPort_Harbor_Eventscript_QuizFinished
	return


WindwardPort_Harbor_Eventscript_QuizFinished::
# 651 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 652 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_0
# 654 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 655 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizFinished_2
# 660 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_2
WindwardPort_Harbor_Eventscript_QuizFinished_1:
# 663 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_SHINY
# 664 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymove GHOSTBOY, emotemusic
# 665 "data/maps/WindwardPort_Harbor/scripts.pory"
	setspeaker WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0
# 666 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_3
# 668 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 669 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 670 "data/maps/WindwardPort_Harbor/scripts.pory"
	removeobject GHOSTBOY
# 671 "data/maps/WindwardPort_Harbor/scripts.pory"
	setflag FLAG_TEMP_3
# 672 "data/maps/WindwardPort_Harbor/scripts.pory"
	delay 30
# 673 "data/maps/WindwardPort_Harbor/scripts.pory"
	fwdtime 7, 0
# 674 "data/maps/WindwardPort_Harbor/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 675 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
# 676 "data/maps/WindwardPort_Harbor/scripts.pory"
	playse SE_PIN
# 677 "data/maps/WindwardPort_Harbor/scripts.pory"
	applymoveplayer emoteexclamation
# 678 "data/maps/WindwardPort_Harbor/scripts.pory"
	checkplayergender
# 679 "data/maps/WindwardPort_Harbor/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WindwardPort_Harbor_Eventscript_QuizFinished_6
# 685 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_5
# 687 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
WindwardPort_Harbor_Eventscript_QuizFinished_5:
# 689 "data/maps/WindwardPort_Harbor/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 690 "data/maps/WindwardPort_Harbor/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_GHOST_BOY, SUB_QUEST_GHOST_BOY_3
# 691 "data/maps/WindwardPort_Harbor/scripts.pory"
	setvar VAR_WINDWARD_HARBOR_GHOST_BOY, 6
# 692 "data/maps/WindwardPort_Harbor/scripts.pory"
	call EventScript_CheckDaysLeft
# 693 "data/maps/WindwardPort_Harbor/scripts.pory"
	special SetCB2LoadMap
# 694 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end

WindwardPort_Harbor_Eventscript_QuizFinished_2:
# 656 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_1
	goto WindwardPort_Harbor_Eventscript_QuizFinished_1

WindwardPort_Harbor_Eventscript_QuizFinished_6:
# 680 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_QuizFinished_Text_4
# 682 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
	goto WindwardPort_Harbor_Eventscript_QuizFinished_5


WindwardPort_Harbor_Eventscript_ShipSchedule::
# 699 "data/maps/WindwardPort_Harbor/scripts.pory"
	msgbox WindwardPort_Harbor_Eventscript_ShipSchedule_Text_0
# 701 "data/maps/WindwardPort_Harbor/scripts.pory"
	closemessage
# 702 "data/maps/WindwardPort_Harbor/scripts.pory"
	release
	end


# 150 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_0:
# 150 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_left
# 150 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_right
	step_end

# 152 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_1:
# 152 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_down
# 152 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_left
	step_end

# 161 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_2:
# 161 "data/maps/WindwardPort_Harbor/scripts.pory"
	face_left
# 161 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_visible
	step_end

# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_3:
# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_right
# 162 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_invisible
	step_end

# 163 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Movement_4:
# 163 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_up
# 163 "data/maps/WindwardPort_Harbor/scripts.pory"
	set_invisible
	step_end

# 354 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_0:
# 354 "data/maps/WindwardPort_Harbor/scripts.pory"
	emote_music
	step_end

# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_1:
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 362 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
	step_end

# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartHideAndSeek_Movement_2:
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_left
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
# 365 "data/maps/WindwardPort_Harbor/scripts.pory"
	walk_fast_down
	step_end

# 524 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_0:
# 524 "data/maps/WindwardPort_Harbor/scripts.pory"
	emote_happy
	step_end

# 533 "data/maps/WindwardPort_Harbor/scripts.pory"
WindwardPort_Harbor_Eventscript_StartQuiz3_Movement_1:
# 533 "data/maps/WindwardPort_Harbor/scripts.pory"
	emote_sad
	step_end

WindwardPort_Harbor_Eventscript_SailorOnGuard_Text_0:
# 57 "data/maps/WindwardPort_Harbor/scripts.pory"
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

WindwardPort_Harbor_Eventscript_VeteranF_Text_0:
# 100 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Jura$"

WindwardPort_Harbor_Eventscript_VeteranF_Text_1:
# 101 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Windward Port is in the center of the\n"
	.string "region so you would think it's the\l"
	.string "biggest.\p"
	.string "In fact, the biggest port is the one\n"
	.string "next to Faeruma City, my hometown.\p"
	.string "Faeruma Pharmacy factory produces\n"
	.string "most of the region's medicine supply\l"
	.string "and that's where Faeruma Port comes in.$"

WindwardPort_Harbor_Eventscript_Worker_Text_0:
# 130 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Earu$"

WindwardPort_Harbor_Eventscript_Worker_Text_1:
# 131 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'm so glad my shift is in the daytime.\p"
	.string "My co-workers said they kept hearing a\n"
	.string "weeping sound at night and honestly,\p"
	.string "I don't want to find out where that\n"
	.string "sound comes from.$"

WindwardPort_Harbor_Eventscript_Sign_Text_0:
# 141 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Please stay clear of the entrance.$"

WindwardPort_Harbor_Eventscript_MitsuruRemindsToVisitPersonalLab_Text_0:
# 154 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}We're in Windward Port at last.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Let's visit my personal lab to pick up\n"
	.string "our package.\p"
	.string "It's the house with the tall red roof at\n"
	.string "the south of the city.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Sure.$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_0:
# 191 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The wind is getting chilly.$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_1:
# 203 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leave the harbor and ignore the kid?$"

WindwardPort_Harbor_Eventscript_GhostBoyEventTrigger_Text_2:
# 207 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The wind is getting stronger and\n"
	.string "chillier.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_0:
# 245 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Yamaki?$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_1:
# 246 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leaving a kid alone at night while he's\n"
	.string "waiting for you?\p"
	.string "Do you know what people like you are\n"
	.string "called?\p"
	.string "Yes, I'm talking to {COLOR RED}YOU{COLOR 2}. Not the\n"
	.string "characters {COLOR RED}YOU{COLOR 2}'re controlling.\p"
	.string "They aren't scumbags like {COLOR RED}YOU{COLOR 2}.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_2:
# 254 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Die.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_3:
# 257 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "The air is getting colder and colder.\p"
	.string "It's hard to open your eyes.$"

WindwardPort_Harbor_Eventscript_GhostBoyMad_Text_4:
# 261 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Leave. And don't your dare come back.$"

WindwardPort_Harbor_Eventscript_PreschoolerM_Text_0:
# 278 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Yamaki$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_0:
# 305 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "-sob- -sob-$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_1:
# 309 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}What's wrong, little boy?\n"
	.string "Why are you here alone?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_2:
# 311 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}No one wants to play with me...\p"
	.string "Will you play with me, mister?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_3:
# 314 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Sure! Just for a little while, though.\p"
	.string "After that you gotta go home, alright?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_4:
# 324 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Why are you crying? Are you lost?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_5:
# 326 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}No one wants to play with me...\p"
	.string "Will you play with me, miss?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_6:
# 329 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I don't see why not.\p"
	.string "But promise me you'll go home after\n"
	.string "we're done playing?$"

WindwardPort_Harbor_Eventscript_StartQuestGhosBoy_Text_7:
# 332 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Promise!$"

WindwardPort_Harbor_Eventscript_HideAndSeekRejected_Text_0:
# 344 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Why does no one want to play with me?$"

WindwardPort_Harbor_Eventscript_StartHideAndSeek_Text_0:
# 356 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Alright! Let's play a round of\n"
	.string "hide-and-seek!\p"
	.string "I'll go hide! Don't worry, I won't leave\n"
	.string "this harbor!$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_0:
# 381 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oh! You found me!\p"
	.string "Hehehe, that makes me really happy. I\n"
	.string "thought you'd leave me alone.\p"
	.string "I'll go home now. Let's play again some\n"
	.string "times!$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_1:
# 398 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}(Did he just vanish??)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}(Maybe I'm getting tired. It's pretty\n"
	.string "late-)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}(Wait! Since when the sun's out??)$"

WindwardPort_Harbor_Eventscript_FoundGhostBoy1_Text_2:
# 404 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}(Did my eyes play tricks on me? He just\n"
	.string "vanished.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}(Perhaps I do need to go rest. It's late\n"
	.string "after all-)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}(Wait, it's already morning?)$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_0:
# 417 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Hello! We meet again!\p"
	.string "Will you play with me today?$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_1:
# 421 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Understood. I'll play by myself then...$"

WindwardPort_Harbor_Eventscript_StartTreasureHunt2_Text_2:
# 432 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Awesome!\p"
	.string "So... Let's play treasure hunt today!\p"
	.string "I've hidden a Revive within one of the\n"
	.string "cargo boxes in this harbor.\p"
	.string "If you can find it and bring it back to\n"
	.string "me, I'll give you a gift!\p"
	.string "Now off you go! I'll be waiting for you\n"
	.string "here until you find it.$"

WindwardPort_Harbor_Eventscript_TreasureInBarrel_Text_0:
# 452 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "There's something inside the barrel!\p"
	.string "It's a Revive. It must be the hidden\n"
	.string "treasure.$"

WindwardPort_Harbor_Eventscript_TreasureHint_Text_0:
# 462 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You still haven't found it? Let me give\n"
	.string "you a hint then!\p"
	.string "It's inside a wooden barrel!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_0:
# 472 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}It's this one, right?$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_1:
# 474 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Woah! You found it!\p"
	.string "You're really good at games, mister!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_2:
# 478 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Is this the right one?$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_3:
# 479 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Woah! You found it!\p"
	.string "You're really good at games, miss!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_4:
# 482 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I'll give you a gift as promised!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_5:
# 487 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "I have to go now.\p"
	.string "I had fun today! Let's play again next\n"
	.string "time!$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_6:
# 501 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}(I swear he vanished into thin air\n"
	.string "again.)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(What a weird boy.)$"

WindwardPort_Harbor_Eventscript_FoundTreasure_Text_7:
# 506 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}(He just vanished again.)\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(That's... quite weird.)$"

WindwardPort_Harbor_Eventscript_StartQuiz3_Text_0:
# 519 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oh! We meet again!\p"
	.string "How about another game tonight?$"

WindwardPort_Harbor_Eventscript_StartQuiz3_Text_1:
# 526 "data/maps/WindwardPort_Harbor/scripts.pory"
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
# 535 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oh, I guess you're busy then...$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_0:
# 546 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Alright! Here we go!\p"
	.string "Question 1: Not counting you, your\n"
	.string "friends, people in the ships and the\l"
	.string "Pokémon,\p"
	.string "how many people are there when it's\n"
	.string "daytime in this harbor?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_1:
# 549 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "5$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_2:
# 550 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "4$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_3:
# 551 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "3$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_4:
# 560 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Question 2: How long does it take to\n"
	.string "travel from Windward Port to Coralport\l"
	.string "by ship?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_5:
# 561 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "3 hours$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_6:
# 562 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "4 hours$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_7:
# 563 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "5 hours$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_8:
# 572 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Question 3: How many white barrels are\n"
	.string "there in this harbor?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_9:
# 573 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "6$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_10:
# 574 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "7$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_11:
# 575 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "8$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_12:
# 576 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "9$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_13:
# 584 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Those questions were quite hard, right?\n"
	.string "I'll give you an easier one this time.\p"
	.string "Question 4: What type is Wynaut?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_14:
# 586 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Water$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_15:
# 587 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Psychic$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_16:
# 588 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Normal$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_17:
# 597 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Alright, last question!\p"
	.string "Question 5: Which one of these\n"
	.string "abilities can a Gimmighoul normally\l"
	.string "have?$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_18:
# 599 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Run Away$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_19:
# 600 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Rattled$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_20:
# 601 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Cursed Body$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_21:
# 602 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Good As Gold$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_22:
# 610 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Whew, that was all of the questions!\p"
	.string "Let's see how many correct answers you\n"
	.string "got{PAUSE 30}.{PAUSE 30}.{PAUSE 30}.$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_23:
# 613 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "Oof... Too bad, you got none...\p"
	.string "I'll still give you a small prize for\n"
	.string "spending time with me, though!$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_24:
# 621 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You got {COLOR BLUE}{STR_VAR_1}{COLOR 2} correct\n"
	.string "answer(s)!\p"
	.string "Here's the prize for that!$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_25:
# 630 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You got {COLOR BLUE}{STR_VAR_1}{COLOR 2} correct\n"
	.string "answers!\p"
	.string "Here's the prize for that!$"

WindwardPort_Harbor_Eventscript_QuizQuestions_Text_26:
# 639 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "You got everything right! That's\n"
	.string "awesome!\p"
	.string "Here, you can have all of these!$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_0:
# 652 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "It was fun today, too!\p"
	.string "Oh right, I haven't learned your name.\n"
	.string "If you don't mind, can I know it?$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_1:
# 656 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}I'm Akihiko!\p"
	.string "Let's play again next time, Yamaki.$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_2:
# 660 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}You can call me Mitsuru.\p"
	.string "We should play again next time, Yamaki.$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_3:
# 666 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{DESTROY_MUGSHOT}Of course!\p"
	.string "Gotta go now, bye-bye!$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_4:
# 680 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(He vanished again...)\p"
	.string "(Wait a minute... Since when did I learn\n"
	.string "that his name was Yamaki?)$"

WindwardPort_Harbor_Eventscript_QuizFinished_Text_5:
# 685 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(He vanished...)\p"
	.string "(Wait... How did I know his name was\n"
	.string "Yamaki? He never told me, didn't he?)$"

WindwardPort_Harbor_Eventscript_ShipSchedule_Text_0:
# 699 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "{CLEAR_TO 30}Windward Port -> Coralport\n"
	.string "{CLEAR_TO 30}Boarding time: 6PM - 5:59AM.$"

WindwardPort_Harbor_GhostBoy_Defeated::
# 270 "data/maps/WindwardPort_Harbor/scripts.pory"
	.string "...$"
