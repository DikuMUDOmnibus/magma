// SPELLS.H - spell info - updated from the mainmud/src dir as often as
//            possible

#ifndef _SPELLS_H_

#define SPELL_LOWEST                  1
#define SPELL_ARMOR                   1
#define SPELL_TELEPORT                2
#define SPELL_BLESS                   3
#define SPELL_BLINDNESS               4
#define SPELL_BURNING_HANDS           5
#define SPELL_CALL_LIGHTNING          6
#define SPELL_CHARM_PERSON            7
#define SPELL_CHILL_TOUCH             8
#define SPELL_FULL_HEAL               9
#define SPELL_CONE_OF_COLD           10
#define SPELL_CONTROL_WEATHER        11
#define SPELL_CREATE_FOOD            12
#define SPELL_CREATE_WATER           13
#define SPELL_CURE_BLIND             14
#define SPELL_CURE_CRITIC            15
#define SPELL_CURE_LIGHT             16
#define SPELL_CURSE                  17
#define SPELL_CONTINUAL_LIGHT        18
#define SPELL_DETECT_INVISIBLE       19
#define SPELL_MINOR_CREATION         20
#define SPELL_FLAMESTRIKE            21
#define SPELL_DISPEL_EVIL            22
#define SPELL_EARTHQUAKE             23
#define SPELL_ENCHANT_WEAPON         24
#define SPELL_ENERGY_DRAIN           25
#define SPELL_FIREBALL               26
#define SPELL_HARM                   27
#define SPELL_HEAL                   28
#define SPELL_INVISIBLE              29
#define SPELL_LIGHTNING_BOLT         30
#define SPELL_LOCATE_OBJECT          31
#define SPELL_MAGIC_MISSILE          32
#define SPELL_POISON                 33
#define SPELL_PROTECT_FROM_EVIL      34
#define SPELL_REMOVE_CURSE           35
#define SPELL_STONE_SKIN             36
#define SPELL_SHOCKING_GRASP         37
#define SPELL_SLEEP                  38
#define SPELL_STRENGTH               39
#define SPELL_SUMMON                 40
#define SPELL_HASTE                  41
#define SPELL_WORD_OF_RECALL         42
#define SPELL_REMOVE_POISON          43
#define SPELL_SENSE_LIFE             44
#define SPELL_IDENTIFY               45
#define SPELL_VENTRILOQUATE          46
#define SPELL_FIRESTORM              47
#define SPELL_FIRE_BREATH            48
#define SPELL_GAS_BREATH             49
#define SPELL_FROST_BREATH           50
#define SPELL_ACID_BREATH            51
#define SPELL_LIGHTNING_BREATH       52
#define SPELL_FARSEE                 53
#define SPELL_FEAR                   54
#define SPELL_RECHARGER              55
#define SPELL_VITALITY               56
#define SPELL_CURE_SERIOUS           57
#define SPELL_DESTROY_UNDEAD         58
#define SPELL_METEOR_SWARM           59
#define SPELL_CREEPING               60
#define SPELL_MINOR_GLOBE            61
#define SPELL_CHAIN_LIGHTNING        62
#define SPELL_DIMENSION_DOOR         63
#define SPELL_VIGORIZE_LIGHT         64
#define SPELL_VIGORIZE_SERIOUS       65
#define SPELL_VIGORIZE_CRITIC        66
#define SPELL_DISPEL_INVISIBLE       67
#define SPELL_WIZARD_EYE             68
#define SPELL_CLAIRVOYANCE           69
#define SPELL_REJUVENATE_MAJOR       70
#define SPELL_RAY_OF_ENFEEBLEMENT    71
#define SPELL_DISPEL_GOOD            72
#define SPELL_DEXTERITY              73
#define SPELL_REJUVENATE_MINOR       74
#define SPELL_AGE                    75
#define SPELL_CYCLONE                76
#define SPELL_BIGBYS_CLENCHED_FIST   77
#define SPELL_CONJURE_ELEMENTAL      78
#define SPELL_VITALIZE_MANA          79
#define SPELL_RELOCATE               80
#define SPELL_PROTECT_FROM_GOOD      81
#define SPELL_ANIMATE_DEAD           82
#define SPELL_LEVITATE               83
#define SPELL_FLY                    84
#define SPELL_WATERBREATH            85
#define SPELL_PLANE_SHIFT            86
#define SPELL_GATE                   87
#define SPELL_RESURRECT              88
#define SPELL_MASS_CHARM             89
#define SPELL_DETECT_EVIL            90
#define SPELL_DETECT_GOOD            91
#define SPELL_DETECT_MAGIC           92
#define SPELL_DISPEL_MAGIC           93
#define SPELL_PRESERVE               94
#define SPELL_MASS_INVIS             95
#define SPELL_PROTECT_FROM_FIRE      96
#define SPELL_PROTECT_FROM_COLD      97
#define SPELL_PROTECT_FROM_LIGHTNING 98
#define SPELL_DARKNESS               99
#define SPELL_MINOR_PARALYSIS        100
#define SPELL_MAJOR_PARALYSIS        101
#define SPELL_SLOW                   102
#define SPELL_WITHER                 103
#define SPELL_PROTECT_FROM_GAS       104
#define SPELL_PROTECT_FROM_ACID      105
#define SPELL_INFRAVISION            106
#define SPELL_PRISMATIC_SPRAY        107
#define SPELL_FIRESHIELD             108
#define SPELL_COLOR_SPRAY            109
#define SPELL_INCENDIARY_CLOUD       110
#define SPELL_ICE_STORM              111
#define SPELL_DISINTEGRATE           112
#define SPELL_CAUSE_LIGHT            113
#define SPELL_CAUSE_SERIOUS          114
#define SPELL_CAUSE_CRITICAL         115
#define SPELL_ACID_BLAST             116
#define SPELL_FAERIE_FIRE            117
#define SPELL_FAERIE_FOG             118
#define SPELL_PWORD_KILL             119
#define SPELL_PWORD_BLIND            120
#define SPELL_PWORD_STUN             121
#define SPELL_UNHOLY_WORD            122
#define SPELL_HOLY_WORD              123
#define SPELL_SUNRAY                 124
#define SPELL_FEEBLEMIND             126
#define SPELL_SILENCE                127
#define SPELL_TURN_UNDEAD            128
#define SPELL_COMMAND_UNDEAD         129
#define SPELL_SLOW_POISON            130
#define SPELL_COLDSHIELD             131
#define SPELL_COMPREHEND_LANGUAGES   132
#define SPELL_WRAITHFORM             133
#define SPELL_VAMPIRIC_TOUCH         134
#define SPELL_PROT_UNDEAD            135
#define SPELL_PROT_FROM_UNDEAD       136
#define SPELL_COMMAND_HORDE          137
#define SPELL_HEAL_UNDEAD            138
#define SPELL_ENTANGLE               139
#define SPELL_CREATE_SPRING          140
#define SPELL_BARKSKIN               141
#define SPELL_MOONWELL               142
#define SPELL_CREATE_DRACOLICH       143
#define SPELL_GLOBE                  144
#define SPELL_EMBALM                 145
#define SPELL_SHADOW_BREATH_1        146
#define SPELL_SHADOW_BREATH_2        147
#define SPELL_WALL_OF_FLAMES         148
#define SPELL_WALL_OF_ICE            149
#define SPELL_WALL_OF_STONE          150
#define SPELL_WALL_OF_IRON           151
#define SPELL_WALL_OF_FORCE          152
#define SPELL_WALL_OF_BONES          153
#define SPELL_LIGHTNING_CURTAIN      154
#define SPELL_MOLECULAR_CONTROL      155
#define SPELL_MOLECULAR_AGITATION    156
#define SPELL_ADRENALINE_CONTROL     157
#define SPELL_AURA_SIGHT             158
#define SPELL_AWE                    159
#define SPELL_BALLISTIC_ATTACK       160
#define SPELL_BIOFEEDBACK            161
#define SPELL_CELL_ADJUSTMENT        162
#define SPELL_COMBAT_MIND            163
#define SPELL_CONTROL_FLAMES         164
#define SPELL_CREATE_SOUND           165
#define SPELL_DEATH_FIELD            166
#define SPELL_DETONATE               167
#define SPELL_DISINTEGRATE2          168
#define SPELL_DISPLACEMENT           169
#define SPELL_DOMINATION             170
#define SPELL_ECTOPLASMIC_FORM       171
#define SPELL_EGO_WHIP               172
#define SPELL_ENERGY_CONTAINMENT     173
#define SPELL_ENHANCE_ARMOR          174
#define SPELL_ENHANCED_STR           175
#define SPELL_ENHANCED_DEX           176
#define SPELL_ENHANCED_AGI           177
#define SPELL_ENHANCED_CON           178
#define SPELL_FLESH_ARMOR            179
#define SPELL_INERTIAL_BARRIOR       180
#define SPELL_INFLICT_PAIN           181
#define SPELL_INTELLECT_FORTRESS     182
#define SPELL_LEND_HEALTH            183
#define SPELL_LEVITATION             184
#define SPELL_CONFUSE                185
#define SPELL_DISEASE                186
#define SPELL_CHARM_ANIMAL           187
#define SPELL_SOULSHIELD             188
#define SPELL_INVIS_MAJOR            189
#define SPELL_MASS_HEAL              190
#define SPELL_ICE_MISSILE            191
#define SPELL_SPIRIT_ARMOR           192
#define SPELL_WOLFSPEED              193
#define SPELL_TRANSFER_WELLNESS      194
#define SPELL_FLAMEBURST             195
#define SPELL_SCALDING_BLAST         196
#define SPELL_PYTHONSTING            197
#define SPELL_SNAILSPEED             198
#define SPELL_MOLEVISION             199
#define SPELL_PURIFY_SPIRIT          200
#define SPELL_PANTHERSPEED           201
#define SPELL_MOUSESTRENGTH          202
#define SPELL_SUMMON_BEAST           203
#define SPELL_HAWKVISION             204
#define SPELL_SCORCHING_TOUCH        205
#define SPELL_MENDING                206
#define SPELL_SOUL_DISTURBANCE       207
#define SPELL_SPIRIT_SIGHT           208
#define SPELL_BEARSTRENGTH           209
#define SPELL_SHREWTAMENESS          210
#define SPELL_SENSE_SPIRIT           211
#define SPELL_MALISON                212
#define SPELL_WELLNESS               213
#define SPELL_GREATER_MENDING        214
#define SPELL_LIONRAGE               215
#define SPELL_SPIRIT_ANGUISH         216
#define SPELL_EARTHEN_GRASP          217
#define SPELL_SUMMON_SPIRIT          218
#define SPELL_GREATER_SOUL_DISTURB   219
#define SPELL_SPIRIT_WARD            220
#define SPELL_ELEPHANTSTRENGTH       221
#define SPELL_GREATER_PYTHONSTING    222
#define SPELL_SCATHING_WIND          223
#define SPELL_REVEAL_TRUE_FORM       224
#define SPELL_GREATER_SPIRIT_SIGHT   225
#define SPELL_EARTHEN_RAIN           226
#define SPELL_GREATER_SPIRIT_WARD    227
#define SPELL_SUSTENANCE             228
#define SPELL_CREATE_EARTHEN_PROJ    229
#define SPELL_ANIMATE_EARTHEN_PROJ   230
#define SPELL_GREATER_SUST           231
#define SPELL_COLD_WARD              232
#define SPELL_FIRE_WARD              233
#define SPELL_LESSER_MENDING         234
#define SPELL_MOLTEN_SPRAY           235
#define SPELL_TRUE_SEEING            236
#define SPELL_BOGUS_TEST             237
#define SPELL_RAVENFLIGHT            238
#define SPELL_GREATER_RAVENFLIGHT    239
#define SPELL_LORE                   240
#define SPELL_WORMHOLE               241
#define SPELL_ETHERPORTAL            242
#define SPELL_FULL_HARM              243
#define SPELL_CONJURE_GREATER_ELEMENTAL 244
#define SPELL_GROUP_RECALL           245
#define SPELL_GREATER_EARTHEN_GRASP  246
#define SPELL_GROUP_STONE_SKIN       247
#define SPELL_ENLARGE                248
#define SPELL_REDUCE                 249
#define SPELL_REVEAL_SPIRIT_ESSENCE  250
#define SPELL_SPIRIT_JUMP            251
#define SPELL_BEHOLDER_DISIN         252
#define SPELL_BEHOLDER_DAMAGE        253
#define SPELL_ARIEKS_SHATTERING_ICEBALL 254
#define SPELL_ENRAGE                 255
#define SPELL_BLINDING_BREATH        256
#define SPELL_MIND_BLANK             257
#define SPELL_SIGHT_LINK             258
#define SPELL_CANIBALIZE             259
#define SPELL_TOWER_IRON_WILL        260
#define SPELL_MIRROR_IMAGE           261
#define SPELL_REVEAL_TRUE_NAME       262
#define SPELL_BLUR                   263
#define SPELL_PRISMATIC_CUBE         264
#define SPELL_JUDGEMENT              265
#define SPELL_GREATER_WRAITHFORM     266
#define SPELL_ELEMENTAL_FORM         267
#define SPELL_RAISE_SPECTRE          268
#define SPELL_RAISE_WRAITH           269
#define SPELL_RAISE_VAMPIRE          270
#define SPELL_RAISE_LICH             271
#define SPELL_PALADIN_AURA           272
#define SPELL_MINDSHIELD	     273
#define SPELL_AIRY_WATER	     274
#define SPELL_CURE_DISEASE           275
#define SPELL_POLYMORPH_OBJECT       276
#define SPELL_IMMOLATE               277
#define SPELL_APOCALYPSE	     278
#define SPELL_SENSE_FOLLOWER	     279
#define SPELL_PASS_WITHOUT_TRACE     280
#define SPELL_ETHER_WARP	     281
#define SPELL_STARSHELL              282
#define SPELL_CLOAK_OF_FEAR          283
#define SPELL_VAMPIRE                284
#define SPELL_BIGBYS_CRUSHING_HAND   285
#define SPELL_STORNOGS_SPHERES	     286
#define SPELL_STORNOGS_GREATER_SPHERES  287
#define SPELL_GROUP_GLOBE            288
#define SPELL_ETHER_SENSE            289
#define SPELL_CALL_OF_THE_WILD       290
#define SPELL_HOLY_SACRIFICE	     291
#define SPELL_BATTLE_ECSTASY	     292
#define SPELL_DAZZLE		     293
#define SPELL_STINKING_CLOUD         294
#define SPELL_ACCELERATE_METABOLISM  295
#define SPELL_SLOWSPELL              296
#define SPELL_CHRONO_BLAST           297
#define SPELL_TEMPORAL_FREEDOM       298
#define SPELL_SENSE_CONTINUUM        299
#define SPELL_ALACRITY               300
#define SPELL_PRECOGNATIVE_SENSE     301
#define SPELL_MINOR_EXTENSION        302
#define SPELL_DEVOLUTIONARY_WARRIOR  303
#define SPELL_EVOLUTIONARY_SAVANT    304
#define SPELL_TEMPORAL_STASIS        305
#define SPELL_CHOKE                  306
#define SPELL_GREATER_EXTENSION      307
#define SPELL_AREA_SLOWNESS          308
#define SPELL_GROUP_HASTE            309
#define SPELL_AFTERCLAP              310
#define SPELL_AREA_SLOWSPELL         311
#define SPELL_GROUP_ALACRITY         312
#define SPELL_TIMEFLOW               313
#define SPELL_PERMENANCY             314
#define SPELL_STALL_TIME             315
#define SPELL_ILLUSION_PROWESS       316
#define SPELL_ILLUSION_INCOMPETENCE  317
#define SPELL_SHADOW_SHIELD          318
#define SPELL_PRISMATIC_ORB          319
#define SPELL_MAGNETISM              320
#define SPELL_SHADOW_MAGIC           321
#define SPELL_SHADOW_MONSTERS        322
#define SPELL_SHADOW_VEIL            323
#define SPELL_DEMI_SHADOW_MONSTERS   324
#define SPELL_MISDIRECTION           325
#define SPELL_DEMI_SHADOW_MAGIC      326
#define SPELL_SHADES                 327
#define SPELL_HYPNOTIC_PATTERN       328
#define SPELL_ENTHRALL               329
#define SPELL_MIRAGE_ARCANA          330
#define SPELL_NIGHTMARES             331
#define SPELL_HELLFIRE               332
#define SPELL_SANCTUARY              333
#define SPELL_SNAKE_SPIRIT           334
#define SPELL_HIGHEST                334

#define _SPELLS_H_
#endif
