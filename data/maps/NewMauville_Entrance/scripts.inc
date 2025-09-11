.set LOCALID_WALLY, 1

NewMauville_Entrance_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Entrance_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Entrance_OnTransition
	.byte 0

NewMauville_Entrance_OnLoad:
	call_if_eq VAR_NEW_MAUVILLE_STATE, 0, NewMauville_Entrance_EventScript_CloseDoor
	end

NewMauville_Entrance_EventScript_CloseDoor::
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile0, TRUE
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile1, TRUE
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile2, TRUE
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile3, TRUE
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile4, TRUE
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile5, TRUE
	return

NewMauville_Entrance_OnTransition:
	setflag FLAG_LANDMARK_NEW_MAUVILLE
	end

NewMauville_Entrance_EventScript_Door::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox NewMauville_Entrance_Text_DoorIsLocked, MSGBOX_DEFAULT
	checkitem ITEM_BASEMENT_KEY
	goto_if_eq VAR_RESULT, FALSE, NewMauville_Entrance_EventScript_DontOpenDoor
	msgbox NewMauville_Entrance_Text_UseBasementKey, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NewMauville_Entrance_EventScript_DontOpenDoor
	msgbox NewMauville_Entrance_Text_UsedBasementKey, MSGBOX_DEFAULT
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile0, FALSE
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile1, FALSE
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile2, FALSE
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile3, TRUE
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile4, FALSE
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile5, TRUE
	special DrawWholeMapView
	playse SE_BANG
	goto NewMauville_Entrance_EventScript_WallyApproach 
	end

NewMauville_Entrance_EventScript_WallyApproach::	
	setvar VAR_NEW_MAUVILLE_STATE, 1
	clearflag FLAG_HIDE_NEW_MAUVILLE_WALLY
	addobject LOCALID_WALLY
	applymovement LOCALID_WALLY, NewMauville_Entrance_Movement_WallyApproach
	waitmovement 0
	delay 30
	goto NewMauville_Entrance_EventScript_BattleWally
	end

NewMauville_Entrance_EventScript_BattleWally::	
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	msgbox NewMauville_Entrance_Text_WallyIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLY_NEW_MAUVILLE, NewMauville_Entrance_Text_WallyDefeat
	goto NewMauville_Entrance_EventScript_WallyDefeated
	end

NewMauville_Entrance_EventScript_WallyDefeated::
	msgbox NewMauville_Entrance_Text_WallyPostBattle, MSGBOX_DEFAULT
	goto NewMauville_Entrance_EventScript_WallyDepart
	end

NewMauville_Entrance_EventScript_WallyDepart::	
	applymovement LOCALID_WALLY, NewMauville_Entrance_Movement_WallyDepart
	waitmovement 0
	removeobject LOCALID_WALLY
	setflag FLAG_HIDE_NEW_MAUVILLE_WALLY
	setflag FLAG_DEFEATED_WALLY_NEW_MAUVILLE
	releaseall
	end

NewMauville_Entrance_EventScript_DontOpenDoor::
	releaseall
	end

NewMauville_Entrance_Movement_WallyApproach:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

NewMauville_Entrance_Movement_WallyDepart:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

NewMauville_Entrance_Text_WallyIntro:
	.string "{PLAYER}, I thought I saw you\p"
	.string "come in here. I am on my way\n"
	.string "back to Petalburg City, to\p"
	.string "battle your Dad! But seeing as\n"
	.string "we are here now, Let us test\p"
	.string "in battle again!$"

NewMauville_Entrance_Text_WallyDefeat:
	.string "Wow, I was sure that I had learnt,\p"
	.string "and improved since we dueled last.\n"
	.string "It seems I still have a way to go.$"
	
NewMauville_Entrance_Text_WallyPostBattle:
	.string "Well, I am sure that if I can't \p"
	.string "best you, I still have some work \n"
	.string "left to do. I had better apply \p"
	.string "myself on my way home before I face\n"
	.string "your Dad. Until next time, {PLAYER}.$"

NewMauville_Entrance_Text_DoorIsLocked:
	.string "The door is locked.$"

NewMauville_Entrance_Text_UseBasementKey:
	.string "Use the BASEMENT KEY?$"

NewMauville_Entrance_Text_UsedBasementKey:
	.string "{PLAYER} used the BASEMENT KEY.\p"
	.string "The door opened!$"

