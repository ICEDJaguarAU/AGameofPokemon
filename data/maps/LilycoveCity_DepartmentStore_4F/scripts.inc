LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
	.2byte ITEM_TM_SKY_UPPERCUT
	.2byte ITEM_TM_DRAGON_CLAW
	.2byte ITEM_TM_WATER_PULSE
	.2byte ITEM_TM_ROAR
	.2byte ITEM_TM_TOXIC
	.2byte ITEM_TM_HAIL
	.2byte ITEM_TM_BULK_UP
	.2byte ITEM_TM_BULLET_SEED
	.2byte ITEM_TM_SUNNY_DAY
	.2byte ITEM_TM_TAUNT
	.2byte ITEM_TM_BLIZZARD	
	.2byte ITEM_TM_HYPER_BEAM	
	.2byte ITEM_TM_LIGHT_SCREEN	
	.2byte ITEM_TM_PROTECT	
	.2byte ITEM_TM_RAIN_DANCE
	.2byte ITEM_TM_GIGA_DRAIN
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_TM_DAZZLING_GLEAM
	.2byte ITEM_TM_SOLAR_BEAM
	.2byte ITEM_TM_METEOR_MASH
	.2byte ITEM_TM_THUNDER
	.2byte ITEM_TM_EARTHQUAKE
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

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
	.2byte ITEM_WATER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_PROTECTOR
	.2byte ITEM_FROSTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_UP_GRADE
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_SACHET
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_PEAT_BLOCK
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_METAL_COAT
	pokemartlistend

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to POKéMON…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are fifty\n"
	.string "different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
	.string "I'd like to get all the different TMs,\n"
	.string "but a POKéMON learns only four moves.$"

