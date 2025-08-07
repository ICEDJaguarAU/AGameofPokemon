.set LOCALID_VIVI, 1
.set LOCALID_VICTOR, 2
.set LOCALID_VICTORIA, 3
.set LOCALID_VICKY, 4

Route111_WinstrateFamilysHouse_MapScripts::
	.byte 0

Route111_WinstrateFamilysHouse_EventScript_Victor::
	trainerbattle_single TRAINER_VICTOR, Route111_WinstrateFamilysHouse_Text_BattleOurFamily, Route111_WinstrateFamilysHouse_Text_VictorDefeat
	msgbox Route111WinstrateFamilyHouse_text_VictorPostBattle, MSGBOX_AUTOCLOSE
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection	
	end

Route111_WinstrateFamilysHouse_EventScript_Victoria::
	trainerbattle_single TRAINER_VICTORIA, Route111_WinstrateFamilysHouse__Text_VictoriaIntro, Route111_WinstrateFamilysHouse_Text_VictoriaDefeat
	msgbox Route111WinstrateFamilyHouse_text_VictorPostBattle, MSGBOX_AUTOCLOSE
	setvar VAR_0x8008, LOCALID_VICTORIA
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
	giveitem ITEM_MACHO_BRACE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MACHO_BRACE
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Vivi::
	trainerbattle_single TRAINER_VIVI, Route111_WinstrateFamilysHouse_Text_ViviIntro, Route111_WinstrateFamilysHouse_Text_ViviDefeat
	msgbox Route111_WinstrateFamilysHouse_Text_ViviPostBattle, MSGBOX_AUTOCLOSE	
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_VIVI
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Vicky::
	trainerbattle_single TRAINER_VIVI, Route111_WinstrateFamilysHouse_Text_VickyIntro, Route111_WinstrateFamilysHouse_Text_VickyDefeat
	msgbox Route111_WinstrateFamilysHouse_Text_VickyPostBattle, MSGBOX_AUTOCLOSE	
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_VICKY
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
	setflag FLAG_TEMP_4
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
	closemessage
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
	.string "You're the first TRAINER I've seen who\n"
	.string "deploys POKéMON so masterfully.\p"
	.string "But, I should tell you--my son is\n"
	.string "stronger than you.\p"
	.string "He even took the POKéMON LEAGUE\n"
	.string "challenge, I'll have you know.$"

Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
	.string "We use this MACHO BRACE to more\n"
	.string "effectively strengthen our POKéMON\l"
	.string "in training.\p"
	.string "Since you've beaten all of us here,\n"
	.string "I don't know if you need it, but we\l"
	.string "would like you to have our MACHO BRACE.$"

Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
	.string "When it comes to POKéMON battles,\n"
	.string "we tend to be pretty passionate.$"

Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
	.string "Mommy is stronger than Daddy.\p"
	.string "I'm stronger than Mommy.\p"
	.string "And Grandma's stronger than me!\p"
	.string "But my big brother is even stronger\n"
	.string "than Grandma.$"

Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
	.string "There's no question that you're strong.\p"
	.string "But if you were to battle my grandson,\n"
	.string "you'd end up crying in frustration.\p"
	.string "He's much stronger than any TRAINER\n"
	.string "our family knows.\p"
	.string "He must be challenging the POKéMON\n"
	.string "LEAGUE CHAMPION by now.\p"
	.string "Knowing my grandson, he could be the\n"
	.string "CHAMPION already!$"

Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
	.string "My grandson must be challenging the\n"
	.string "POKéMON LEAGUE CHAMPION by now.\p"
	.string "Knowing my grandson, he could be the\n"
	.string "CHAMPION already!$"

Route111_WinstrateFamilysHouse_Text_BattleOurFamily:
	.string "Hello! I take it you're a traveler.\p"
	.string "Some trainer just came buy, and really\n"
	.string "demolished us. We are licking our wounds\l"
	.string "but I think we are ready to take you on!$"

Route111WinstrateFamilyHouse_text_VictorPostBattle:
	.string "Hey, all!\n"
	.string "I've found a pretty strong TRAINER!$"	

Route111South_Text_IsThatSo:
	.string "Is that so?\n"
	.string "Drop in, if you change your mind!$"

Route111South_Text_VictorIntro:
	.string "That's the spirit! I like you!$"

Route111_WinstrateFamilysHouse_Text_VictorDefeat:
	.string "Aiyah!\n"
	.string "You're a lot tougher than I expected!$"



Route111_WinstrateFamilysHouse__Text_VictoriaIntro:
	.string "Oh, my goodness! Aren't you young?\p"
	.string "You must be quite the TRAINER to beat\n"
	.string "my husband, though.\p"
	.string "It's my turn to battle now!$"

Route111_WinstrateFamilysHouse_Text_VictoriaDefeat:
	.string "Oh, gosh!\n"
	.string "I can't get over how strong you are!$"

Route111_WinstrateFamilysHouse_Text_VictoriaPostBattle:
	.string "There's a strong TRAINER here!\n"
	.string "This one's really strong!$"

Route111_WinstrateFamilysHouse_Text_ViviIntro:
	.string "You're stronger than Mommy? Wow!\p"
	.string "But I'm strong, too!\n"
	.string "Really! Honestly!$"

Route111_WinstrateFamilysHouse_Text_ViviDefeat:
	.string "Huh? Did I just lose?$"

Route111_WinstrateFamilysHouse_Text_ViviPostBattle:
	.string "This stinks…\p"
	.string "…Snivel… Grandma!$"

Route111_WinstrateFamilysHouse_Text_VickyIntro:
	.string "How dare you make my granddaughter\n"
	.string "cry!\p"
	.string "For that, I'm going to smack you!\n"
	.string "Prepare to lose!$"

Route111_WinstrateFamilysHouse_Text_VickyDefeat:
	.string "Kwah! You are strong…\n"
	.string "My granddaughter was right…$"

Route111_WinstrateFamilysHouse_Text_VickyPostBattle:
	.string "If you're not in any hurry,\n"
	.string "visit with us awhile.$"
	
Route111_WinstrateFamilysHouse_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
	.string "We use this MACHO BRACE to more\n"
	.string "effectively strengthen our POKéMON\l"
	.string "in training.\p"
	.string "Since you've beaten all of us here,\n"
	.string "I don't know if you need it, but we\l"
	.string "would like you to have our MACHO BRACE.$"

