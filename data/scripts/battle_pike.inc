BattleFrontier_BattlePikeRoom_MapScripts:
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePikeRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRoom_OnWarp

BattleFrontier_BattlePikeRoom_OnTransition:
	pike_setroomobjects
	pike_getroomtype
	end

BattleFrontier_BattlePikeRoom_OnWarp:
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeRoomNormal_EventScript_InitRoomObjects
	.2byte 0

BattleFrontier_BattlePikeRoomNormal_EventScript_InitRoomObjects::
	
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_InitTwoObjectRoom::
	setvar VAR_TEMP_4, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_InitBrainRoomObjects::
	
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_LeftRoomWarp::
	
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_CenterRoomWarp::
	
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_RightRoomWarp::
	
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_RoomWarp::
	
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_WarpNPCRoom::
	
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_WarpWildMonRoom::

	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_SetEnteredRoom::
	setvar VAR_TEMP_3, 1
	setvar VAR_TEMP_2, 1
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_NoTurningBack::
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_SetEnteredRoom::
	setvar VAR_TEMP_3, 1
	setvar VAR_TEMP_2, 1
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_NoTurningBack::
	setvar VAR_TEMP_3, 0
	setvar VAR_TEMP_2, 0
	lockall
	closemessage
	releaseall
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_Exit::

	end

BattleFrontier_BattlePikeRoom_EventScript_DisableHealing::
	return

BattleFrontier_BattlePikeRoom_EventScript_EnableHealing::
	return

BattleFrontier_BattlePikeRoom_EventScript_WarpToFinalRoom::
	
	return

BattleFrontier_BattlePikeRoom_EventScript_WarpToThreePathRoom::

	return

BattleFrontier_BattlePikeRoomWildMons_EventScript_Exit::
	
	end

BattleFrontier_BattlePikeRoomWildMons_EventScript_SetEnteredRoom::
	setvar VAR_TEMP_3, 1
	setvar VAR_TEMP_2, 1
	end

BattleFrontier_BattlePikeRoomWildMons_EventScript_NoTurningBack::
	
	end

BattleFrontier_BattlePike_EventScript_Retire::
	
	end

BattleFrontier_BattlePikeRoom_OnResume:
	
	end

BattleFrontier_BattlePikeRoom_EventScript_ResetSketchedMoves::
	return

BattleFrontier_BattlePikeRoom_Movement_HidePlayer:
	set_invisible
	step_end

gText_BattlePyramidConfirmRetire::
	.string "Are you sure you want to quit your\n"
	.string "PYRAMID quest?$"

gText_BattlePyramidConfirmRest::
	.string "Your BATTLE PYRAMID quest will be\n"
	.string "saved so that you may quit for now.\l"
	.string "Is that okay?$"

BattlePyramid_Retire::
	end
