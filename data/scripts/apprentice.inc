BattleFrontier_BattleTowerLobby_EventScript_Apprentice::

Apprentice_EventScript_AskQuestion:
	
	end

Apprentice_EventScript_FirstMeeting:
	
Apprentice_EventScript_WhichLvlMode:
	
	end

@ Its impossible to fully reject an Apprentice, they just keep asking for you to teach them
Apprentice_EventScript_RejectTeach:
	
Apprentice_EventScript_UseWhichMon:
	
	end

Apprentice_EventScript_ChoseFirstMon:
	return

Apprentice_EventScript_ChoseSecondMon:
	return

Apprentice_EventScript_LastMonSelected:
	return

Apprentice_EventScript_UseWhatHeldItem:
	
Apprentice_EventScript_ChooseHoldItem:
	
	end

Apprentice_EventScript_ConfirmHoldNothing:
	
Apprentice_EventScript_HoldNothing:
	
	end

@ Because Battle Tower mons may not hold the same item, the player must suggest a
@ different item if theyve already told the Apprentice to use it for another mon
Apprentice_EventScript_AlreadySuggestedItem:
	
	end

Apprentice_EventScript_UseWhichMove:
	
	
	end

Apprentice_EventScript_ChoseMove1:
	return

Apprentice_EventScript_ChoseMove2:
	return

Apprentice_EventScript_PutWhichMonFirst:
	
	end

@ Last question, after which the Apprentice leaves (and is saved) to be replaced by another
Apprentice_EventScript_PickWinSpeech:
	
	end

Apprentice_EventScript_SetHideFlags:

	return

Apprentice_EventScript_LeaveNorth:
	
	end

Apprentice_EventScript_Leave:

	end

Apprentice_EventScript_Gone:
	release
	releaseall
	end

Apprentice_EventScript_DontMove:
	end

Apprentice_Movement_LeaveNorth:
	walk_fast_right
Apprentice_Movement_Leave:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	set_invisible
	slide_down
	slide_down
	slide_down
	step_end
