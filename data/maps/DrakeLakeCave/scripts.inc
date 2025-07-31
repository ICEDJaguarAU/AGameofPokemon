DrakeLakeCave_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, DrakeLakeCave_OnResume
	map_script MAP_SCRIPT_ON_LOAD, DrakeLakeCave_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, DrakeLakeCave_OnTransition
	.byte 0

DrakeLakeCave_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, DrakeLakeCave_EventScript_TryRemoveRegidrago
	end

DrakeLakeCave_EventScript_TryRemoveRegidrago::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

DrakeLakeCave_OnTransition:
	setflag FLAG_LANDMARK_DRAKE_LAKE_CAVE
	call_if_unset FLAG_DEFEATED_REGIDRAGO, DrakeLakeCave_EventScript_ShowRegidrago
	end

DrakeLakeCave_EventScript_ShowRegidrago::
	clearflag FLAG_HIDE_REGIDRAGO
	return

DrakeLakeCave_OnLoad:
	call_if_unset FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, DrakeLakeCave_EventScript_HideRegiEntrance
	end

DrakeLakeCave_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

DrakeLakeCave_EventScript_CaveEntranceMiddle::
	lockall
	goto_if_set FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, DrakeLakeCave_EventScript_BigHoleInWall
	braillemsgbox DrakeLakeCave_Braille_ShineInTheMiddle
	releaseall
	end

DrakeLakeCave_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

DrakeLakeCave_EventScript_CaveEntranceSide::
	lockall
	braillemsgbox DrakeLakeCave_Braille_ShineInTheMiddle
	releaseall
	end

DrakeLakeCave_EventScript_Regidrago::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIDRAGO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIDRAGO, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DrakeLakeCave_EventScript_DefeatedRegidrago
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DrakeLakeCave_EventScript_RanFromRegidrago
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DrakeLakeCave_EventScript_RanFromRegidrago
	setflag FLAG_DEFEATED_REGIDRAGO
	release
	end

DrakeLakeCave_EventScript_DefeatedRegidrago::
	setflag FLAG_DEFEATED_REGIDRAGO
	goto Common_EventScript_RemoveStaticPokemon
	end

DrakeLakeCave_EventScript_RanFromRegidrago::
	setvar VAR_0x8004, SPECIES_REGIDRAGO
	goto Common_EventScript_LegendaryFlewAway
	end

