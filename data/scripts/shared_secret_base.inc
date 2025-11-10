SecretBase_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SecretBase_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, SecretBase_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SecretBase_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, SecretBase_OnResume
	.byte 0

SecretBase_OnWarp:
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, SecretBase_EventScript_InitDecorations
	.2byte 0

SecretBase_OnTransition:

	end

SecretBase_OnFrame:
	.2byte 0

SecretBase_OnResume:
	end

SecretBase_EventScript_PC::

	end

SecretBase_EventScript_PCShowMainMenu::

	end

SecretBase_EventScript_PCCancel::
	
	end

SecretBase_EventScript_PCMainMenuWithRegister::

	end

SecretBase_EventScript_PCMainMenuWithoutRegister::

	end

SecretBase_EventScript_PCPackUp::

	releaseall
	end

SecretBase_EventScript_PCDecorationMenu::
	end

SecretBase_EventScript_PCRegistryMenu::
	end

SecretBase_EventScript_RecordMixingPC::

	end

SecretBase_EventScript_PCRegisterMenu::

	end

SecretBase_EventScript_ShowRegisterMenu::

	end

SecretBase_EventScript_PCRegister::

	end

SecretBase_EventScript_AlreadyRegistered::

	end

SecretBase_EventScript_CantRegisterTooManyBases::

	end

SecretBase_EventScript_PCRegistryInfo::

	end

SecretBase_EventScript_PCTurnOff::

	end

@ Unused
SecretBase_EventScript_Poster::
	end

@ Unused
SecretBase_EventScript_FurnitureBottom::
	end

@ Unused
SecretBase_EventScript_FurnitureMiddle::
	end

@ Unused
SecretBase_EventScript_FurnitureTop::
	end

SecretBase_EventScript_SandOrnament::
	end

SecretBase_EventScript_ShieldOrToyTV::

	end

SecretBase_EventScript_BattleTowerShield::
	end

SecretBase_EventScript_ToyTV::
	end

SecretBase_EventScript_SeedotTV::
	end

SecretBase_EventScript_SkittyTV::
	end

SecretBase_Text_SmallIndentInWall::
	.string "There's a small indent in the wall.$"

SecretBase_Text_IndentUseSecretPower::
	.string "There's a small indent in the wall.\p"
	.string "Use the Secret Power?$"

SecretBase_Text_DiscoveredSmallCavern::
	.string "Discovered a small cavern!$"

SecretBase_Text_WantToMakeYourSecretBaseHere:
	.string "Want to make your Secret Base here?$"
