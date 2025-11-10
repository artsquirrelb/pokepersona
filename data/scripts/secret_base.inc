SecretBase_Text_TreeCanBeClimbed:
	.string "If some vines drop down, this tree can\n"
	.string "be climbed.$"

SecretBase_Text_TreeUseSecretPower:
	.string "If some vines drop down, this tree can\n"
	.string "be climbed.\p"
	.string "Use the Secret Power?$"

SecretBase_Text_VineDroppedDown:
	.string "A thick vine dropped down!$"

SecretBase_Text_ClumpOfGrass:
	.string "If this clump of grass can be moved,\n"
	.string "it might be possible to go inside.$"

SecretBase_Text_ClumpUseSecretPower:
	.string "If this clump of grass can be moved,\n"
	.string "it might be possible to go inside.\p"
	.string "Use the Secret Power?$"

SecretBase_Text_DiscoveredSmallEntrance:
	.string "Discovered a small entrance!$"

	.include "data/text/secret_base_trainers.inc"

SecretBase_EventScript_CheckEntrance::
	
	end

SecretBase_EventScript_Cave::

	end

SecretBase_EventScript_CaveUseSecretPower::
	
	end

SecretBase_EventScript_CaveNoSecretPower::
	
	end

SecretBase_EventScript_CaveEnter::
	
	end

SecretBase_EventScript_Tree::
	
	end

SecretBase_EventScript_TreeUseSecretPower::
	
	end

SecretBase_EventScript_TreeNoSecretPower::
	
	end

SecretBase_EventScript_TreeEnter::

	end

SecretBase_EventScript_Shrub::

	end

SecretBase_EventScript_ShrubUseSecretPower::
	
	end

SecretBase_EventScript_ShrubNoSecretPower::

	end

SecretBase_EventScript_ShrubEnter::
	
	end

SecretBase_EventScript_InitSecretBase::
	end

SecretBase_EventScript_FirstEntrance::
	end

SecretBase_EventScript_SetAsBase::
	end

SecretBase_Movement_EnterBase:
	walk_up
	walk_up
	step_end

SecretBase_EventScript_Enter::
	end

SecretBase_EventScript_EnterPlayersBase::
	end

SecretBase_EventScript_AlreadyHasSecretBase:
	end

SecretBase_EventScript_NoSecretPower::
	end

SecretBase_EventScript_CancelOnEntrance::
	end

SecretBase_EventScript_SetDecorationFlags::
	return

SecretBase_EventScript_InitDecorations::
	end

SecretBase_EventScript_SetDecoration::
	end

SecretBase_EventScript_SetDecoration2::
	end

SecretBase_EventScript_PutAwayDecoration::
	end

SecretBase_EventScript_PutAwayDecorationLoop::
	end

SecretBase_EventScript_PutAwayDecorationEnd::
	end

SecretBase_EventScript_RecordMixTrainer::
	end

@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
SecretBase_EventScript_Trainer0::
	end

SecretBase_EventScript_Trainer0PreChampion::
	end

SecretBase_EventScript_Trainer0DeclineBattle::
	end

SecretBase_EventScript_Trainer0PostBattle::
	end

@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
SecretBase_EventScript_Trainer1::
	end

SecretBase_EventScript_Trainer1PreChampion::
	end

SecretBase_EventScript_Trainer1DeclineBattle::
	end

SecretBase_EventScript_Trainer1PostBattle::
	end

@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
SecretBase_EventScript_Trainer2::
	
	end

SecretBase_EventScript_Trainer2PreChampion::
	
	end

SecretBase_EventScript_Trainer2DeclineBattle::
	
	end

SecretBase_EventScript_Trainer2PostBattle::
	
	end

@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
SecretBase_EventScript_Trainer3::
	end

SecretBase_EventScript_Trainer3PreChampion::
	
	end

SecretBase_EventScript_Trainer3DeclineBattle::
	end

SecretBase_EventScript_Trainer3PostBattle::
	end

@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
SecretBase_EventScript_Trainer4::
	end

SecretBase_EventScript_Trainer4PreChampion::

	end

SecretBase_EventScript_Trainer4DeclineBattle::

	end

SecretBase_EventScript_Trainer4PostBattle::
	end

@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
SecretBase_EventScript_Trainer5:
	end

SecretBase_EventScript_Trainer5PreChampion::

	end

SecretBase_EventScript_Trainer5DeclineBattle::

	end

SecretBase_EventScript_Trainer5PostBattle::
	
	end

@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
SecretBase_EventScript_Trainer6::
	
	end

SecretBase_EventScript_Trainer6PreChampion::
	
	end

SecretBase_EventScript_Trainer6DeclineBattle::
	
	end

SecretBase_EventScript_Trainer6PostBattle::
	
	end

@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
SecretBase_EventScript_Trainer7::

	end

SecretBase_EventScript_Trainer7PreChampion::
	
	end

SecretBase_EventScript_Trainer7DeclineBattle::
	
	end

SecretBase_EventScript_Trainer7PostBattle::
	
	end

@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
SecretBase_EventScript_Trainer8::

	end

SecretBase_EventScript_Trainer8PreChampion::
	
	end

SecretBase_EventScript_Trainer8DeclineBattle::
	
	end

SecretBase_EventScript_Trainer8PostBattle::
	
	end

@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
SecretBase_EventScript_Trainer9::

	end

SecretBase_EventScript_Trainer9PreChampion::
	
	end

SecretBase_EventScript_Trainer9DeclineBattle::
	
	end

SecretBase_EventScript_Trainer9PostBattle::
	
	end

SecretBase_EventScript_BattleTrainer::

	end

SecretBase_EventScript_DrewSecretBaseBattle::
	return

SecretBase_EventScript_WonSecretBaseBattle::

	return

SecretBase_EventScript_LostSecretBaseBattle::
	return

	.include "data/scripts/secret_power_tm.inc"

SecretBase_EventScript_DollInteract::
	end

SecretBase_EventScript_CushionInteract::
	end

SecretBase_Text_AllDecorationsWillBeReturned:
	.string "All decorations and furniture in your\n"
	.string "Secret Base will be returned to your PC.\p"
	.string "Is that okay?$"

SecretBase_Text_WantToRegisterSecretBase:
	.string "Do you want to register\n"
	.string "{STR_VAR_1}'s Secret Base?$"

SecretBase_Text_AlreadyRegisteredDelete:
	.string "This data is already registered.\n"
	.string "Would you like to delete it?$"

SecretBase_Text_TooManyBasesDeleteSome:
	.string "Up to 10 locations can be registered.\p"
	.string "Delete a location if you want to\n"
	.string "register another location.$"

SecretBase_Text_RegistrationCompleted:
	.string "Registration completed.$"

SecretBase_Text_DataUnregistered:
	.string "Data has been unregistered.$"

SecretBase_Text_BootUpPC:
	.string "{PLAYER} booted up the PC.$"

SecretBase_Text_WhatWouldYouLikeToDo:
	.string "What would you like to do?$"

SecretBase_Text_RegistryInfo:
	.string "Once registered, a Secret Base will not\n"
	.string "disappear unless the other Trainer\l"
	.string "moves it to a different location.\p"
	.string "If a Secret Base is deleted from the\n"
	.string "registered list, another one may take\l"
	.string "its place.\p"
	.string "Up to ten Secret Base locations\n"
	.string "may be registered.$"

SecretBase_Text_BattleTowerShield:
	.string "A shield of {STR_VAR_2} that marks winning\n"
	.string "{STR_VAR_1} times in a row at the Battle Tower.$"

SecretBase_Text_ToyTV:
	.string "A realistic toy TV. It could be easily\n"
	.string "mistaken for the real thing.$"

SecretBase_Text_SeedotTV:
	.string "A toy TV shaped like a Seedot.\n"
	.string "It looks ready to roll away on its own…$"

SecretBase_Text_SkittyTV:
	.string "A toy TV shaped like a Skitty.\n"
	.string "It looks ready to scamper off…$"

SecretBase_Text_WouldYouLikeToMoveBases:
	.string "You may only make one Secret Base.\p"
	.string "Would you like to move from the Secret\n"
	.string "Base near {STR_VAR_1}?$"

SecretBase_Text_MovingCompletedUseSecretPower:
	.string "Moving completed.\p"
	.string "Would you like to use the Secret Power?$"
