ContinentalCave_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, ContinentalCave_OnResume
	map_script MAP_SCRIPT_ON_LOAD, ContinentalCave_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, ContinentalCave_OnTransition
	.byte 0

ContinentalCave_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ContinentalCave_EventScript_TryRemoveRegigigas
	end

ContinentalCave_EventScript_TryRemoveRegigigas::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

ContinentalCave_OnLoad:
	call_if_unset FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, ContinentalCave_EventScript_HideRegiEntrance
	end

ContinentalCave_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

ContinentalCave_OnTransition:
	setflag FLAG_LANDMARK_DESERT_RUINS
	call_if_unset FLAG_DEFEATED_REGIGIGAS, ContinentalCave_EventScript_ShowRegigigas
	end

ContinentalCave_EventScript_ShowRegigigas::
	clearflag FLAG_HIDE_REGIGIGAS
	return

ContinentalCave_EventScript_CaveEntranceMiddle::
	lockall
	goto_if_set FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, ContinentalCave_EventScript_BigHoleInWall
	braillemsgbox ContinentalCave_Braille_UseRockSmash
	releaseall
	end

ContinentalCave_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

ContinentalCave_EventScript_CaveEntranceSide::
	lockall
	braillemsgbox ContinentalCave_Braille_UseRockSmash
	releaseall
	end

ContinentalCave_EventScript_Regigigas::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIGIGAS, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ContinentalCave_EventScript_DefeatedRegigigas
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ContinentalCave_EventScript_RanFromRegigigas
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ContinentalCave_EventScript_RanFromRegigigas
	setflag FLAG_DEFEATED_REGIGIGAS
	release
	end

ContinentalCave_EventScript_DefeatedRegigigas::
	setflag FLAG_DEFEATED_REGIGIGAS
	goto Common_EventScript_RemoveStaticPokemon
	end

ContinentalCave_EventScript_RanFromRegigigas::
	setvar VAR_0x8004, SPECIES_REGIGIGAS
	goto Common_EventScript_LegendaryFlewAway
	end

