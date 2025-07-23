NewProfessor_MapScripts::
# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewProfessor_EventScript_BallDefault
	.byte 0


NewProfessor_EventScript_BallDefault::
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_REGION, 0
	return


Start_StarterChoose_Sequence::
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BeginAdventureText
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, ProfMove
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar LITTLEROOT_STATE, 1
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return


Start_StarterChoose_Sequence2::
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch2
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Start_StarterChoose_Sequence
	return


# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
MeetBirch:
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
	step_end

# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
MeetBirch2:
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
	step_end

# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
ProfMove:
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_down
	step_end

StopLeaving::
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox StopLeaving_Text_0
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DoNotLeave
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
DoNotLeave:
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
	step_end

NewProfessor_EventScript_Birch::
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewProfessor_EventScript_Birch_2
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, NewProfessor_EventScript_Birch_14
NewProfessor_EventScript_Birch_13:
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_3, MSGBOX_NPC
NewProfessor_EventScript_Birch_1:
	end

NewProfessor_EventScript_Birch_2:
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message NewProfessor_EventScript_Birch_Text_0
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewProfessor_EventScript_Birch_6
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewProfessor_EventScript_Birch_7
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewProfessor_EventScript_Birch_8
NewProfessor_EventScript_Birch_5:
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_1
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	goto NewProfessor_EventScript_Birch_1

NewProfessor_EventScript_Birch_6:
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call StarterFade
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_REGION, 2
	goto NewProfessor_EventScript_Birch_5

NewProfessor_EventScript_Birch_7:
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call StarterFade
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_REGION, 1
	goto NewProfessor_EventScript_Birch_5

NewProfessor_EventScript_Birch_8:
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call StarterFade
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_REGION, 0
	goto NewProfessor_EventScript_Birch_5

NewProfessor_EventScript_Birch_12:
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_2, MSGBOX_YESNO
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Birch_17
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_3, MSGBOX_NPC
	goto NewProfessor_EventScript_Birch_1

NewProfessor_EventScript_Birch_14:
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, NewProfessor_EventScript_Birch_12
	goto NewProfessor_EventScript_Birch_13

NewProfessor_EventScript_Birch_17:
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call UpgradeNationalDex
	goto NewProfessor_EventScript_Birch_1


StarterFade::
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewProfessor_EventScript_PokeballOne::
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewProfessor_EventScript_PokeballOne_2
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballOne_1:
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballOne_2:
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq NewProfessor_EventScript_PokeballOne_5
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq NewProfessor_EventScript_PokeballOne_6
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq NewProfessor_EventScript_PokeballOne_7
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_5:
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_MUDKIP
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NewProfessor_EventScript_GiveStarter
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_6:
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_TOTODILE
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NewProfessor_EventScript_GiveStarter
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_7:
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_SQUIRTLE
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NewProfessor_EventScript_GiveStarter
	goto NewProfessor_EventScript_PokeballOne_1


NewProfessor_EventScript_PokeballTwo::
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewProfessor_EventScript_PokeballTwo_2
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballTwo_1:
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballTwo_2:
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq NewProfessor_EventScript_PokeballTwo_5
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq NewProfessor_EventScript_PokeballTwo_6
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq NewProfessor_EventScript_PokeballTwo_7
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_5:
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_TREECKO
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NewProfessor_EventScript_GiveStarter
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_6:
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_CHIKORITA
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NewProfessor_EventScript_GiveStarter
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_7:
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_BULBASAUR
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NewProfessor_EventScript_GiveStarter
	goto NewProfessor_EventScript_PokeballTwo_1


NewProfessor_EventScript_PokeballThree::
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_0, 3
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewProfessor_EventScript_PokeballThree_2
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballThree_1:
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballThree_2:
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq NewProfessor_EventScript_PokeballThree_5
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq NewProfessor_EventScript_PokeballThree_6
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq NewProfessor_EventScript_PokeballThree_7
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_5:
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_TORCHIC
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NewProfessor_EventScript_GiveStarter
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_6:
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_CYNDAQUIL
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NewProfessor_EventScript_GiveStarter
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_7:
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_CHARMANDER
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NewProfessor_EventScript_GiveStarter
	goto NewProfessor_EventScript_PokeballThree_1


NewProfessor_EventScript_GiveStarter::
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic STARTER_CHOICE, 10, 3
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_GiveStarter_Text_0, MSGBOX_YESNO
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_GiveStarter_1
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_GiveStarter_1:
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar LITTLEROOT_STATE, 2
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon STARTER_CHOICE, 50, ITEM_MASTER_BALL
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_GiveStarter_5
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_GiveStarter_6
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_GiveStarter_Text_3
NewProfessor_EventScript_GiveStarter_4:
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call InitiatePokedexSequence
	return

NewProfessor_EventScript_GiveStarter_5:
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_GiveStarter_Text_1
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject VAR_TEMP_0
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call SetBallFlag
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewProfessor_EventScript_GiveStarter_4

NewProfessor_EventScript_GiveStarter_6:
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_GiveStarter_Text_1
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject VAR_TEMP_0
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call SetBallFlag
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknameBoxMon
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NewProfessor_EventScript_GiveStarter_Text_2
	goto NewProfessor_EventScript_GiveStarter_4


SetBallFlag::
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SetBallFlag_2
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SetBallFlag_5
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SetBallFlag_7
	return

SetBallFlag_2:
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag STARTER_BALL_ONE
	return

SetBallFlag_5:
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag STARTER_BALL_TWO
	return

SetBallFlag_7:
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag STARTER_BALL_THREE
	return


NicknamePartyMon::
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_1
	return

NicknameBoxMon_1:
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	return


InitiatePokedexSequence::
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TurnToProf
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq InitiatePokedexSequence_2
InitiatePokedexSequence_1:
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq InitiatePokedexSequence_5
InitiatePokedexSequence_4:
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq InitiatePokedexSequence_8
InitiatePokedexSequence_7:
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call GivePokedex
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return

InitiatePokedexSequence_2:
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, MoveBallOne
	goto InitiatePokedexSequence_1

InitiatePokedexSequence_5:
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, MoveBallTwo
	goto InitiatePokedexSequence_4

InitiatePokedexSequence_8:
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, MoveBallThree
	goto InitiatePokedexSequence_7


GivePokedex::
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox TakePokedex, MSGBOX_DEFAULT
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message GivePokedex_Text_0
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GivePokedex_Text_1, MSGBOX_DEFAULT
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GivePokedex_Text_2, MSGBOX_DEFAULT
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return


UpgradeNationalDex::
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return


# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
MoveBallOne:
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
	step_end

# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
MoveBallTwo:
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
	step_end

# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
MoveBallThree:
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_left
	step_end

# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
TurnToProf:
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_right
	step_end

DontTouchThat::
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox DontTouchThat_Text_0
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveAwayFromThere
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
MoveAwayFromThere:
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
	step_end

StopLeaving_Text_0:
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You Need To Choose a Pokemon$"

NewProfessor_EventScript_Birch_Text_0:
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Would you like to see more?$"

NewProfessor_EventScript_Birch_Text_1:
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Choose wisely...$"

NewProfessor_EventScript_Birch_Text_2:
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to upgrade to the National\n"
	.string "Dex?$"

NewProfessor_EventScript_Birch_Text_3:
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Take care of your Pokemon$"

NewProfessor_EventScript_PokeballOne_Text_0:
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Don't Take Another$"

NewProfessor_EventScript_GiveStarter_Text_0:
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

NewProfessor_EventScript_GiveStarter_Text_1:
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Recieved {STR_VAR_1}$"

NewProfessor_EventScript_GiveStarter_Text_2:
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

NewProfessor_EventScript_GiveStarter_Text_3:
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "No More Room For Pokemon$"

NicknamePartyMon_Text_0:
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give a nickname?$"

GivePokedex_Text_0:
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

GivePokedex_Text_1:
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Also take these with you$"

GivePokedex_Text_2:
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can collect\l"
	.string "research for the Pokedex$"

DontTouchThat_Text_0:
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "DONT TOUCH THAT$"

BeginAdventureText::
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Birch:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hello {PLAYER}, my name is Prof Birch\n"
	.string "This is my lab.\p"
	.string "Today is the day that you will be\n"
	.string "receiving a Pokemon.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Now Choose Wisely,\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}If you would like to see more options\l"
	.string "come and talk to me.\n$"

NewProfessor_NotChosen::
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You did not choose {STR_VAR_1}$"

TakePokedex::
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}, I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this POKéDEX.$"
