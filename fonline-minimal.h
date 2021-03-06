#ifndef __FONLINE_MINIMAL_H__
#define __FONLINE_MINIMAL_H__

// Minimal set of defines required to compile FOnline .dll/.so,
// without including _defines.fos

#define ITEM_TYPE_NONE              (0)
#define ITEM_TYPE_ARMOR             (1)
#define ITEM_TYPE_DRUG              (2)
#define ITEM_TYPE_WEAPON            (3)
#define ITEM_TYPE_AMMO              (4)
#define ITEM_TYPE_MISC              (5)
#define ITEM_TYPE_KEY               (7)
#define ITEM_TYPE_CONTAINER         (8)
#define ITEM_TYPE_DOOR              (9)
#define ITEM_TYPE_GRID              (10)
#define ITEM_TYPE_GENERIC           (11)
#define ITEM_TYPE_WALL              (12)
#define ITEM_TYPE_CAR               (13)

#define ITEM_HIDDEN                 (0x00000001)
#define ITEM_FLAT                   (0x00000002)
#define ITEM_NO_BLOCK               (0x00000004)
#define ITEM_SHOOT_THRU             (0x00000008)
#define ITEM_LIGHT_THRU             (0x00000010)
#define ITEM_MULTI_HEX              (0x00000020)
#define ITEM_WALL_TRANS_END         (0x00000040)
#define ITEM_TWO_HANDS              (0x00000080)
#define ITEM_BIG_GUN                (0x00000100)
#define ITEM_ALWAYS_VIEW            (0x00000200)
#define ITEM_HAS_TIMER              (0x00000400)
#define ITEM_BAD_ITEM               (0x00000800)
#define ITEM_NO_HIGHLIGHT           (0x00001000)
#define ITEM_SHOW_ANIM              (0x00002000)
#define ITEM_SHOW_ANIM_EXT          (0x00004000)
#define ITEM_LIGHT                  (0x00008000)
#define ITEM_GECK                   (0x00010000)
#define ITEM_TRAP                   (0x00020000)
#define ITEM_NO_LIGHT_INFLUENCE     (0x00040000)
#define ITEM_NO_LOOT                (0x00080000)
#define ITEM_NO_STEAL               (0x00100000)
#define ITEM_GAG                    (0x00200000)
#define ITEM_COLORIZE               (0x00400000)
#define ITEM_COLORIZE_INV           (0x00800000)
#define ITEM_CAN_USE_ON_SMTH        (0x01000000)
#define ITEM_CAN_LOOK               (0x02000000)
#define ITEM_CAN_TALK               (0x04000000)
#define ITEM_CAN_PICKUP             (0x08000000)
#define ITEM_CAN_USE                (0x10000000)
#define ITEM_HOLODISK               (0x20000000)
#define ITEM_RADIO                  (0x40000000)
#define ITEM_CACHED                 (0x80000000)

/*
#define ITEM_EVENT_FINISH                        (0)
#define ITEM_EVENT_ATTACK                        (1)
#define ITEM_EVENT_USE                           (2)
#define ITEM_EVENT_USE_ON_ME                     (3)
#define ITEM_EVENT_SKILL                         (4)
#define ITEM_EVENT_DROP                          (5)
#define ITEM_EVENT_MOVE                          (6)
#define ITEM_EVENT_WALK                          (7)
*/
#define ITEM_EVENT_MAX                           (8)

/*
#define CRITTER_EVENT_IDLE                    (0)
#define CRITTER_EVENT_FINISH                  (1)
#define CRITTER_EVENT_DEAD                    (2)
#define CRITTER_EVENT_RESPAWN                 (3)
#define CRITTER_EVENT_SHOW_CRITTER            (4)
#define CRITTER_EVENT_SHOW_CRITTER_1          (5)
#define CRITTER_EVENT_SHOW_CRITTER_2          (6)
#define CRITTER_EVENT_SHOW_CRITTER_3          (7)
#define CRITTER_EVENT_HIDE_CRITTER            (8)
#define CRITTER_EVENT_HIDE_CRITTER_1          (9)
#define CRITTER_EVENT_HIDE_CRITTER_2          (10)
#define CRITTER_EVENT_HIDE_CRITTER_3          (11)
#define CRITTER_EVENT_SHOW_ITEM_ON_MAP        (12)
#define CRITTER_EVENT_CHANGE_ITEM_ON_MAP      (13)
#define CRITTER_EVENT_HIDE_ITEM_ON_MAP        (14)
#define CRITTER_EVENT_ATTACK                  (15)
#define CRITTER_EVENT_ATTACKED                (16)
#define CRITTER_EVENT_STEALING                (17)
#define CRITTER_EVENT_MESSAGE                 (18)
#define CRITTER_EVENT_USE_ITEM                (19)
#define CRITTER_EVENT_USE_ITEM_ON_ME          (20)
#define CRITTER_EVENT_USE_SKILL               (21)
#define CRITTER_EVENT_USE_SKILL_ON_ME         (22)
#define CRITTER_EVENT_DROP_ITEM               (23)
#define CRITTER_EVENT_MOVE_ITEM               (24)
#define CRITTER_EVENT_KNOCKOUT                (25)
#define CRITTER_EVENT_SMTH_DEAD               (26)
#define CRITTER_EVENT_SMTH_STEALING           (27)
#define CRITTER_EVENT_SMTH_ATTACK             (28)
#define CRITTER_EVENT_SMTH_ATTACKED           (29)
#define CRITTER_EVENT_SMTH_USE_ITEM           (30)
#define CRITTER_EVENT_SMTH_USE_SKILL          (31)
#define CRITTER_EVENT_SMTH_DROP_ITEM          (32)
#define CRITTER_EVENT_SMTH_MOVE_ITEM          (33)
#define CRITTER_EVENT_SMTH_KNOCKOUT           (34)
#define CRITTER_EVENT_PLANE_BEGIN             (35)
#define CRITTER_EVENT_PLANE_END               (36)
#define CRITTER_EVENT_PLANE_RUN               (37)
#define CRITTER_EVENT_BARTER                  (38)
#define CRITTER_EVENT_TALK                    (39)
#define CRITTER_EVENT_GLOBAL_PROCESS          (40)
#define CRITTER_EVENT_GLOBAL_INVITE           (41)
#define CRITTER_EVENT_TURN_BASED_PROCESS      (42)
#define CRITTER_EVENT_SMTH_TURN_BASED_PROCESS (43)
*/
#define CRITTER_EVENT_MAX                     (44)

/*
#define MAP_EVENT_FINISH              (0)
#define MAP_EVENT_LOOP_0              (1)
#define MAP_EVENT_LOOP_1              (2)
#define MAP_EVENT_LOOP_2              (3)
#define MAP_EVENT_LOOP_3              (4)
#define MAP_EVENT_LOOP_4              (5)
#define MAP_EVENT_IN_CRITTER          (6)
#define MAP_EVENT_OUT_CRITTER         (7)
#define MAP_EVENT_CRITTER_DEAD        (8)
#define MAP_EVENT_TURN_BASED_BEGIN    (9)
#define MAP_EVENT_TURN_BASED_END      (10)
#define MAP_EVENT_TURN_BASED_PROCESS  (11)
*/
#define MAP_EVENT_MAX                 (12)

/*
#define LOCATION_EVENT_FINISH  (0)
#define LOCATION_EVENT_ENTER   (1)
*/
#define LOCATION_EVENT_MAX     (2)

#define LOCKER_ISOPEN               (0x01) // Used in engine
#define LOCKER_LOCKED               (0x02)
#define LOCKER_JAMMED               (0x04)
#define LOCKER_BROKEN               (0x08)
#define LOCKER_NOOPEN               (0x10) // Hardcoded
#define LOCKER_ELECTRO              (0x20)

#define MAX_DETERIORATION           (10000) // Hardcoded
#define MAX_BROKENS                 (100)

#define BI_LOWBROKEN				(0x01)
#define BI_NORMBROKEN				(0x02)
#define BI_HIGHBROKEN				(0x04)
#define BI_NOTRESC					(0x08)
#define BI_BROKEN					(0x0F) // Hardcoded
#define BI_SERVICE					(0x10)
#define BI_SERVICE_EXT				(0x20)
#define BI_ETERNAL					(0x40)

#endif // __FONLINE_MINIMAL_H__ //
