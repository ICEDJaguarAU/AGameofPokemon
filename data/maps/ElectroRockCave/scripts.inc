ElectroRockCave_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, ElectroRockCave_OnResume
	map_script MAP_SCRIPT_ON_LOAD, ElectroRockCave_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, ElectroRockCave_OnTransition
	.byte 0

ElectroRockCave_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ElectroRockCave_EventScript_TryRemoveRegieleki
	end

ElectroRockCave_EventScript_TryRemoveRegieleki::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

ElectroRockCave_OnLoad:
	call_if_unset FLAG_SYS_BRAILLE_REGICE_COMPLETED, ElectroRockCave_EventScript_HideRegiEntrance
	end

ElectroRockCave_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

ElectroRockCave_OnTransition:
	setflag FLAG_LANDMARK_ELECTRO_ROCK_CAVE
	call ElectroRockCave_EventScript_ClearSteps
	call_if_unset FLAG_DEFEATED_REGIELEKI, ElectroRockCave_EventScript_ShowRegieleki
	end

ElectroRockCave_EventScript_ShowRegieleki::
	clearflag FLAG_HIDE_REGIELEKI
	return

ElectroRockCave_EventScript_OpenRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
	setmetatile 8, 19, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
	setmetatile 9, 19, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
	setmetatile 9, 20, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
	special DrawWholeMapView
	playse SE_BANG
	setflag FLAG_SYS_BRAILLE_REGICE_COMPLETED
	end

ElectroRockCave_EventScript_CaveEntranceMiddle::
	lockall
	call_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, ElectroRockCave_EventScript_ClearSteps
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, ElectroRockCave_EventScript_BigHoleInWall
	braillemessage ElectroRockCave_Braille_RunLapAroundWall
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
	special ShouldDoBrailleRegicePuzzle
	goto ElectroRockCave_EventScript_CloseBrailleMsg
	end

ElectroRockCave_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

ElectroRockCave_EventScript_CaveEntranceSide::
	lockall
	call_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, ElectroRockCave_EventScript_ClearSteps
	braillemessage ElectroRockCave_Braille_RunLapAroundWall
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, ElectroRockCave_EventScript_CloseBrailleMsg
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
	special ShouldDoBrailleRegicePuzzle
	goto ElectroRockCave_EventScript_CloseBrailleMsg
	end

ElectroRockCave_EventScript_CloseBrailleMsg::
	waitbuttonpress
	closebraillemessage
	releaseall
	end

ElectroRockCave_EventScript_ClearSteps::
	setvar VAR_REGICE_STEPS_1, 0
	setvar VAR_REGICE_STEPS_2, 0
	setvar VAR_REGICE_STEPS_3, 0
	clearflag FLAG_TEMP_REGICE_PUZZLE_FAILED
	return

ElectroRockCave_EventScript_Regieleki::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIELEKI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIELEKI, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ElectroRockCave_EventScript_DefeatedRegieleki
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ElectroRockCave_EventScript_RanFromRegieleki
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ElectroRockCave_EventScript_RanFromRegieleki
	setflag FLAG_DEFEATED_REGIELEKI
	release
	end

ElectroRockCave_EventScript_DefeatedRegieleki::
	setflag FLAG_DEFEATED_REGIELEKI
	goto Common_EventScript_RemoveStaticPokemon
	end

ElectroRockCave_EventScript_RanFromRegieleki::
	setvar VAR_0x8004, SPECIES_REGIELEKI
	goto Common_EventScript_LegendaryFlewAway
	end
