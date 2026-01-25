.set LOCALID_WOMAN, 7

LilycoveCity_DepartmentStore_5F_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LilycoveCity_DepartmentStore_5F_OnWarp
	.byte 0

@ During the abnormal weather from Kyogre/Groudon awakening the dept store rooftop is inaccessible
@ Likely done to avoid dealing with showing the weather. Technically the rooftop is indoors
LilycoveCity_DepartmentStore_5F_OnWarp:
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 2, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
	.2byte 0

LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs::
	setobjectxy LOCALID_WOMAN, 16, 2
	turnobject LOCALID_WOMAN, DIR_NORTH
	end

LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_5F_Pokemart_Dolls
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_5F_Pokemart_Dolls:
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_SHELL_BELL
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_LIGHT_CLAY
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_METRONOME
	.2byte ITEM_LAGGING_TAIL
	.2byte ITEM_IRON_BALL
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_BLACK_SLUDGE
	.2byte ITEM_GRIP_CLAW
	.2byte ITEM_STICKY_BARB
	.2byte ITEM_SHED_SHELL
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_EVIOLITE
	.2byte ITEM_FLOAT_STONE
	.2byte ITEM_ROCKY_HELMET
	pokemartlistend

LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_5F_Pokemart_Cushions
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_5F_Pokemart_Cushions:
	.2byte ITEM_RED_CARD
	.2byte ITEM_RING_TARGET
	.2byte ITEM_BINDING_BAND
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_ASSAULT_VEST
	.2byte ITEM_SAFETY_GOGGLES
	.2byte ITEM_TERRAIN_EXTENDER
	.2byte ITEM_PROTECTIVE_PADS
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_HEAVY_DUTY_BOOTS
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_ROOM_SERVICE
	.2byte ITEM_PUNCHING_GLOVE
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_CLEAR_AMULET
	.2byte ITEM_ABILITY_SHIELD
	.2byte ITEM_COVERT_CLOAK
	.2byte ITEM_LOADED_DICE
	.2byte ITEM_AUSPICIOUS_ARMOR
	.2byte ITEM_BOOSTER_ENERGY
	.2byte ITEM_MIRROR_HERB
	pokemartlistend

LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_5F_Pokemart_Posters
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_5F_Pokemart_Posters:
	.2byte ITEM_TM_DRAGON_PULSE
	.2byte ITEM_TM_DRAIN_PUNCH
	.2byte ITEM_TM_WILL_O_WISP
	.2byte ITEM_TM_BUG_BUZZ
	.2byte ITEM_TM_NASTY_PLOT
	.2byte ITEM_TM_ICICLE_CRASH
	.2byte ITEM_TM_SPIRIT_SHACKLE
	.2byte ITEM_TM_PAYBACK
	.2byte ITEM_TM_RECYCLE
	.2byte ITEM_TM_GIGA_IMPACT
	.2byte ITEM_TM_ROCK_POLISH
	.2byte ITEM_TM_DIAMOND_FLASH
	.2byte ITEM_TM_STONE_EDGE
	.2byte ITEM_TM_AVALANCHE
	.2byte ITEM_TM_THUNDER_WAVE
	.2byte ITEM_TM_SWORDS_DANCE
	.2byte ITEM_TM_GYRO_BALL
	.2byte ITEM_TM_STEALTH_ROCK
	.2byte ITEM_TM_PSYCH_UP
	.2byte ITEM_TM_SNARL
	.2byte ITEM_TM_DARK_PULSE
	.2byte ITEM_TM_ROCK_SLIDE
	.2byte ITEM_TM_LEECH_LIFE
	.2byte ITEM_TM_SLEEP_TALK
	.2byte ITEM_TM_POISON_JAB
	.2byte ITEM_TM_PLAY_ROUGH
	.2byte ITEM_TM_GRASS_KNOT
	.2byte ITEM_TM_SWAGGER
	.2byte ITEM_TM_AIR_SLASH
	.2byte ITEM_TM_U_TURN
	.2byte ITEM_TM_SUBSTITUTE
	.2byte ITEM_TM_FLASH_CANNON
	.2byte ITEM_TM_TRICK_ROOM
	.2byte ITEM_TM_GRASSY_TERRAIN
	.2byte ITEM_TM_MISTY_TERRAIN
	.2byte ITEM_TM_PSYCHIC_TERRAIN
	.2byte ITEM_TM_ELECTRIC_TERRAIN
	.2byte ITEM_TM_HEX
	.2byte ITEM_TM_VENOSHOCK
	.2byte ITEM_TM_EARTH_POWER
	.2byte ITEM_TM_WEATHER_BALL
	pokemartlistend

LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_5F_Pokemart_Mats
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_5F_Pokemart_Mats:
	.2byte ITEM_TM_LOW_SWEEP
	.2byte ITEM_TM_DIG
	.2byte ITEM_TM_PSYCHIC
	.2byte ITEM_TM_SHADOW_BALL
	.2byte ITEM_TM_BRICK_BREAK
	.2byte ITEM_TM_DOUBLE_TEAM	
	.2byte ITEM_TM_REFLECT	
	.2byte ITEM_TM_FLAMETHROWER
	.2byte ITEM_TM_SLUDGE_BOMB
	.2byte ITEM_TM_SANDSTORM
	.2byte ITEM_TM_FIRE_BLAST
	.2byte ITEM_TM_TORMENT
	.2byte ITEM_TM_FACADE
	.2byte ITEM_TM_SUPERCELL_SLAM
	.2byte ITEM_TM_REST
	.2byte ITEM_TM_ATTRACT
	.2byte ITEM_TM_THIEF
	.2byte ITEM_TM_STEEL_WING
	.2byte ITEM_TM_SKILL_SWAP
	.2byte ITEM_TM_SCALD
	.2byte ITEM_TM_ROOST
	.2byte ITEM_TM_FOCUS_BLAST
	.2byte ITEM_TM_ENERGY_BALL
	.2byte ITEM_TM_FALSE_SWIPE
	.2byte ITEM_TM_FLIP_TURN
	.2byte ITEM_TM_FLING
	.2byte ITEM_TM_CHARGE_BEAM
	.2byte ITEM_TM_TERRAIN_PULSE
	pokemartlistend

LilycoveCity_DepartmentStore_5F_EventScript_PokefanF::
	msgbox LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_5F_EventScript_Woman::
	lockall
	applymovement LOCALID_WOMAN, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather
	end

LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal::
	msgbox LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather::
	msgbox LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WOMAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	releaseall
	end

LilycoveCity_DepartmentStore_5F_EventScript_LittleGirl::
	msgbox LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls:
	.string "This place is full of cute DOLLS.\p"
	.string "I should buy some for me, instead of\n"
	.string "just for my children.$"

LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon:
	.string "I'm not big enough to raise POKéMON,\n"
	.string "so I'm getting a cute DOLL instead.$"

LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere:
	.string "They sell many cute MATS here.\p"
	.string "I wonder which one I should get?\n"
	.string "Maybe I'll buy them all…$"

LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather:
	.string "I think they closed the rooftop\n"
	.string "because the weather is wild today.$"
