TrainerHill_OnResume:

	end

TrainerHill_OnWarp:
	map_script_2 VAR_TEMP_3, 0, TrainerHill_1F_EventScript_DummyOnWarp
	.2byte 0

TrainerHill_1F_EventScript_DummyOnWarp::
	setvar VAR_TEMP_3, 1
#ifdef BUGFIX
	end  @ Missing end. By chance, the next byte (0x02 of VAR_TEMP_2) is also the id for the end cmd
#endif

TrainerHill_OnFrame:
	map_script_2 VAR_TEMP_2, 0, TrainerHill_1F_EventScript_DummyWarpToEntranceCounter
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
	.2byte 0

EventScript_TrainerHillTimer::
	lockall
	trainerhill_gettime
	releaseall
	end

TrainerHill_1F_EventScript_DummyWarpToEntranceCounter::

	end

TrainerHill_EventScript_WarpToEntranceCounter::
	
	end

@ Unused
TrainerHill_1F_Movement_SetInvisible::
	set_invisible
	step_end

@ TRAINER_PHILLIP is an actual Trainer on the SS Tidal, but is used as a placeholder here
TrainerHill_EventScript_TrainerBattle::
	facilitytrainerbattle FACILITY_BATTLE_TRAINER_HILL
	trainerhill_postbattletext
	waitmessage
	waitbuttonpress
	closemessage
	end
