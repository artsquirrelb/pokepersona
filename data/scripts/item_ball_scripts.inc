Common_EventScript_FindItem::
	callnative Script_IsChestItem
	call_if_eq VAR_RESULT, TRUE, Common_EventScript_ItemChest
	callnative GetItemBallIdAndAmountFromTemplate
	finditem VAR_RESULT VAR_0x8009
	end

Common_EventScript_ItemChest::
	callnative GetItemBallIdAndAmountFromTemplate
	goto_if_eq VAR_0x800A, TRUE, EventScript_Chest_Empty
	playse SE_RG_BALL_CLICK
	applymovement VAR_LAST_TALKED, Common_Movement_OpenChest
	delay 20
	return

EventScript_Chest_Empty::
	msgbox Text_ChestEmpty
	release
	end

Text_ChestEmpty:
	.string "Everything was already picked up.$"

