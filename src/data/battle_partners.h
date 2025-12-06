//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("STEVEN"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 13
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_DIALGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 15
            .heldItem = ITEM_LEFTOVERS,
#line 19
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 17
            .ability = ABILITY_TELEPATHY,
#line 18
            .lvl = 90,
#line 16
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 19
                MOVE_ROAR_OF_TIME,
                MOVE_STEEL_BEAM,
                MOVE_AURA_SPHERE,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 24
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 24
            .heldItem = ITEM_LIFE_ORB,
#line 28
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 26
            .ability = ABILITY_CLEAR_BODY,
#line 27
            .lvl = 89,
#line 25
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 28
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_HAMMER_ARM,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 33
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 33
            .heldItem = ITEM_AGGRONITE,
#line 37
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 35
            .ability = ABILITY_STURDY,
#line 36
            .lvl = 90,
#line 34
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 37
                MOVE_ROCK_SLIDE,
                MOVE_HEAVY_SLAM,
                MOVE_BODY_PRESS,
                MOVE_LANDS_WRATH,
            },
            },
        },
    },
