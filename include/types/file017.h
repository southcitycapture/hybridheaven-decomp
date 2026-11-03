#ifndef TYPES_FILE017_H
#define TYPES_FILE017_H

/* Recovered types for file017 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_80258590; 1 functions */
typedef struct T_D_80258590_file017 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80258590_file017;

/* D_802585A4; 1 functions */
typedef struct T_D_802585A4_file017 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_802585A4_file017;

/* D_802585D4; 1 functions */
typedef struct T_D_802585D4_file017 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_802585D4_file017;

/* D_80258DA4; 1 functions */
typedef struct T_D_80258DA4_file017 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80258DA4_file017;

/* D_80258DB8; 1 functions */
typedef struct T_D_80258DB8_file017 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80258DB8_file017;

/* pointed to by T_D_8025DDB0_file017.0x0, T_D_8025DDC0_file017.0x0; 3 functions */
typedef struct T_func_80241790_ret { /* size >= 0xA4 */
    /* 0x000 */ u8 pad0[0xA2];
    /* 0x0A2 */ u16 unkA2; /* 3 uses */
} T_func_80241790_ret;

/* parameter file017:func_8024245C:0, file017:func_802425DC:0; 11 functions */
typedef struct T_func_8024245C_a0 { /* size >= 0x98 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 1 use */
    /* 0x030 */ u8 pad30[0xC];
    /* 0x03C */ u16 unk3C; /* 19 uses */
    /* 0x03E */ u8 pad3E[0x3A];
    /* 0x078 */ f32 unk78; /* 1 use */
    /* 0x07C */ f32 unk7C; /* 1 use */
    /* 0x080 */ f32 unk80; /* 1 use */
    /* 0x084 */ s16 unk84; /* 1 use */
    /* 0x086 */ s16 unk86; /* 1 use */
    /* 0x088 */ s16 unk88; /* 1 use */
    /* 0x08A */ u8 pad8A[0x6];
    /* 0x090 */ u16 unk90; /* 1 use */
    /* 0x092 */ u8 pad92[0x2];
    /* 0x094 */ f32 unk94; /* 4 uses */
} T_func_8024245C_a0;

/* parameter file017:func_8024245C:1, file017:func_802425DC:1; 10 functions */
typedef struct T_func_8024245C_a1 { /* size >= 0x20 */
    /* 0x000 */ struct T_func_8024245C_a1_p0 *unk0; /* 25 uses */
    /* 0x004 */ struct T_func_8024245C_a1_p4 *unk4; /* 1 use */
    /* 0x008 */ struct T_func_8024245C_a1_p8 *unk8; /* 1 use */
    /* 0x00C */ struct T_func_8024245C_a1_pC *unkC; /* 3 uses */
    /* 0x010 */ struct T_func_8024245C_a1_p10 *unk10; /* 6 uses */
    /* 0x014 */ struct T_func_8024245C_a1_p14 *unk14; /* 8 uses */
    /* 0x018 */ struct T_func_8024245C_a1_p18 *unk18; /* 1 use */
    /* 0x01C */ struct T_func_8024245C_a1_p1C *unk1C; /* 3 uses */
} T_func_8024245C_a1;

/* pointed to by T_func_8024245C_a1.0x0; 6 functions */
typedef struct T_func_8024245C_a1_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_8024245C_a1_p0_p30 *unk30; /* 24 uses */
} T_func_8024245C_a1_p0;

/* pointed to by T_func_8024245C_a1_p0.0x30; 6 functions */
typedef struct T_func_8024245C_a1_p0_p30 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 24 uses */
    /* 0x00C */ f32 unkC; /* 2 uses */
} T_func_8024245C_a1_p0_p30;

/* pointed to by T_func_8024245C_a1.0x10; 2 functions */
typedef struct T_func_8024245C_a1_p10 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_802425DC_ret *unk30; /* 5 uses */
} T_func_8024245C_a1_p10;

/* pointed to by T_func_8024245C_a1.0x14; 5 functions */
typedef struct T_func_8024245C_a1_p14 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 4 uses */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_8024245C_a1_p14_p30 *unk30; /* 4 uses */
} T_func_8024245C_a1_p14;

/* pointed to by T_func_8024245C_a1_p14.0x30; 1 functions */
typedef struct T_func_8024245C_a1_p14_p30 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 6 uses */
} T_func_8024245C_a1_p14_p30;

/* pointed to by T_func_8024245C_a1.0x18; 1 functions */
typedef struct T_func_8024245C_a1_p18 { /* size >= 0x23 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
} T_func_8024245C_a1_p18;

/* pointed to by T_func_8024245C_a1.0x1C; 2 functions */
typedef struct T_func_8024245C_a1_p1C { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_8024245C_a1_p1C_p30 *unk30; /* 2 uses */
} T_func_8024245C_a1_p1C;

/* pointed to by T_func_8024245C_a1_p1C.0x30; 1 functions */
typedef struct T_func_8024245C_a1_p1C_p30 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 4 uses */
} T_func_8024245C_a1_p1C_p30;

/* pointed to by T_func_8024245C_a1.0x4; 1 functions */
typedef struct T_func_8024245C_a1_p4 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_8024245C_a1_p4_p30 *unk30; /* 1 use */
} T_func_8024245C_a1_p4;

/* pointed to by T_func_8024245C_a1_p4.0x30; 1 functions */
typedef struct T_func_8024245C_a1_p4_p30 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ f32 unk8; /* 1 use */
} T_func_8024245C_a1_p4_p30;

/* pointed to by T_func_8024245C_a1.0x8; 1 functions */
typedef struct T_func_8024245C_a1_p8 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_8024245C_a1_p8_p30 *unk30; /* 1 use */
} T_func_8024245C_a1_p8;

/* pointed to by T_func_8024245C_a1_p8.0x30; 1 functions */
typedef struct T_func_8024245C_a1_p8_p30 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ f32 unk8; /* 1 use */
} T_func_8024245C_a1_p8_p30;

/* pointed to by T_func_8024245C_a1.0xC; 1 functions */
typedef struct T_func_8024245C_a1_pC { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_8024245C_a1_pC_p30 *unk30; /* 3 uses */
} T_func_8024245C_a1_pC;

/* pointed to by T_func_8024245C_a1_pC.0x30; 1 functions */
typedef struct T_func_8024245C_a1_pC_p30 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ f32 unk8; /* 1 use */
} T_func_8024245C_a1_pC_p30;

/* pointed to by T_func_8024245C_a1_p10.0x30; 2 functions */
typedef struct T_func_802425DC_ret { /* size >= 0x50 */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ u8 padC[0x3F];
    /* 0x04B */ u8 unk4B; /* 3 uses */
    /* 0x04C */ u8 unk4C; /* 2 uses */
    /* 0x04D */ u8 unk4D; /* 2 uses */
    /* 0x04E */ u8 pad4E[0x2];
} T_func_802425DC_ret;

/* parameter file017:func_8024B7A8:0, file017:func_8024B96C:0; 5 functions */
typedef struct T_func_8024B7A8_a0 { /* size >= 0x9A */
    /* 0x000 */ u8 pad0[0x3C];
    /* 0x03C */ u16 unk3C; /* 9 uses */
    /* 0x03E */ u8 pad3E[0x52];
    /* 0x090 */ u16 unk90; /* 3 uses */
    /* 0x092 */ u16 unk92; /* 2 uses */
    /* 0x094 */ s16 unk94; /* 3 uses */
    /* 0x096 */ u8 pad96[0x3];
    /* 0x099 */ u8 unk99; /* 1 use */
} T_func_8024B7A8_a0;

/* parameter file017:func_8024B7A8:1, file017:func_8024B96C:1; 3 functions */
typedef struct T_func_8024B7A8_a1 { /* size >= 0x1C */
    /* 0x000 */ struct T_func_8024B7A8_a1_p0 *unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x8];
    /* 0x00C */ struct T_func_8024B7A8_a1_pC *unkC; /* 4 uses */
    /* 0x010 */ struct T_func_8024B7A8_a1_p10 *unk10; /* 4 uses */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ struct T_func_8024B7A8_a1_p18 *unk18; /* 2 uses */
} T_func_8024B7A8_a1;

/* pointed to by T_func_8024B7A8_a1.0x0; 1 functions */
typedef struct T_func_8024B7A8_a1_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_8024B7A8_a1_p0_p30 *unk30; /* 1 use */
} T_func_8024B7A8_a1_p0;

/* pointed to by T_func_8024B7A8_a1_p0.0x30; 1 functions */
typedef struct T_func_8024B7A8_a1_p0_p30 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s32 unk30; /* 1 use */
} T_func_8024B7A8_a1_p0_p30;

/* pointed to by T_func_8024B7A8_a1.0x10; 2 functions */
typedef struct T_func_8024B7A8_a1_p10 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_8024CEA0_ret *unk30; /* 3 uses */
} T_func_8024B7A8_a1_p10;

/* pointed to by T_func_8024B7A8_a1.0x18; 1 functions */
typedef struct T_func_8024B7A8_a1_p18 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_8024B7A8_a1_p18_p30 *unk30; /* 2 uses */
} T_func_8024B7A8_a1_p18;

/* pointed to by T_func_8024B7A8_a1_p18.0x30; 1 functions */
typedef struct T_func_8024B7A8_a1_p18_p30 { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x4B];
    /* 0x04B */ u8 unk4B; /* 3 uses */
} T_func_8024B7A8_a1_p18_p30;

/* pointed to by T_func_8024B7A8_a1.0xC; 1 functions */
typedef struct T_func_8024B7A8_a1_pC { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_8024B7A8_a1_pC_p30 *unk30; /* 3 uses */
} T_func_8024B7A8_a1_pC;

/* pointed to by T_func_8024B7A8_a1_pC.0x30; 1 functions */
typedef struct T_func_8024B7A8_a1_pC_p30 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 2 uses */
} T_func_8024B7A8_a1_pC_p30;

/* pointed to by T_func_8024B7A8_a1_p10.0x30; 1 functions */
typedef struct T_func_8024CEA0_ret { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x12];
    /* 0x012 */ s16 unk12; /* 2 uses */
    /* 0x014 */ u8 pad14[0x37];
    /* 0x04B */ u8 unk4B; /* 3 uses */
} T_func_8024CEA0_ret;

/* parameter file017:func_8024E230:0, file017:func_8024E3F0:0; 6 functions */
typedef struct T_func_8024E230_a0 { /* size >= 0x9C */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ u8 pad30[0xC];
    /* 0x03C */ u16 unk3C; /* 12 uses */
    /* 0x03E */ u8 pad3E[0x52];
    /* 0x090 */ u16 unk90; /* 4 uses */
    /* 0x092 */ u16 unk92; /* 3 uses */
    /* 0x094 */ u8 pad94[0x5];
    /* 0x099 */ u8 unk99; /* 2 uses */
    /* 0x09A */ u8 pad9A[0x2];
} T_func_8024E230_a0;

/* parameter file017:func_8024E230:1, file017:func_8024E3F0:1; 4 functions */
typedef struct T_func_8024E230_a1 { /* size >= 0x20 */
    /* 0x000 */ struct T_func_8024E230_a1_p0 *unk0; /* 3 uses */
    /* 0x004 */ struct T_func_8024E230_a1_p4 *unk4; /* 1 use */
    /* 0x008 */ struct T_func_8024E230_a1_p8 *unk8; /* 4 uses */
    /* 0x00C */ struct T_func_8024E230_a1_pC *unkC; /* 4 uses */
    /* 0x010 */ struct T_func_8024E230_a1_p10 *unk10; /* 4 uses */
    /* 0x014 */ struct T_func_8024E230_a1_p14 *unk14; /* 3 uses */
    /* 0x018 */ u8 pad18[0x4];
    /* 0x01C */ struct T_func_8024E230_a1_p1C *unk1C; /* 2 uses */
} T_func_8024E230_a1;

/* pointed to by T_func_8024E230_a1.0x0; 2 functions */
typedef struct T_func_8024E230_a1_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_8024E230_a1_p0_p30 *unk30; /* 2 uses */
} T_func_8024E230_a1_p0;

/* pointed to by T_func_8024E230_a1_p0.0x30; 2 functions */
typedef struct T_func_8024E230_a1_p0_p30 { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ u8 pad34[0x17];
    /* 0x04B */ u8 unk4B; /* 1 use */
} T_func_8024E230_a1_p0_p30;

/* pointed to by T_func_8024E230_a1.0x10; 3 functions */
typedef struct T_func_8024E230_a1_p10 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_8024E230_a1_p10_p30 *unk30; /* 3 uses */
} T_func_8024E230_a1_p10;

/* pointed to by T_func_8024E230_a1_p10.0x30; 3 functions */
typedef struct T_func_8024E230_a1_p10_p30 { /* size >= 0x50 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ u8 pad34[0x17];
    /* 0x04B */ u8 unk4B; /* 1 use */
    /* 0x04C */ u8 pad4C[0x1];
    /* 0x04D */ u8 unk4D; /* 1 use */
    /* 0x04E */ u8 pad4E[0x2];
} T_func_8024E230_a1_p10_p30;

/* pointed to by T_func_8024E230_a1.0x14; 2 functions */
typedef struct T_func_8024E230_a1_p14 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_8024E230_a1_p14_p30 *unk30; /* 2 uses */
} T_func_8024E230_a1_p14;

/* pointed to by T_func_8024E230_a1_p14.0x30; 2 functions */
typedef struct T_func_8024E230_a1_p14_p30 { /* size >= 0x4D */
    /* 0x000 */ u8 pad0[0x4B];
    /* 0x04B */ u8 unk4B; /* 1 use */
    /* 0x04C */ u8 unk4C; /* 1 use */
} T_func_8024E230_a1_p14_p30;

/* pointed to by T_func_8024E230_a1.0x1C; 1 functions */
typedef struct T_func_8024E230_a1_p1C { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_8024E230_a1_p1C_p30 *unk30; /* 2 uses */
} T_func_8024E230_a1_p1C;

/* pointed to by T_func_8024E230_a1_p1C.0x30; 1 functions */
typedef struct T_func_8024E230_a1_p1C_p30 { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x4B];
    /* 0x04B */ u8 unk4B; /* 3 uses */
} T_func_8024E230_a1_p1C_p30;

/* pointed to by T_func_8024E230_a1.0x4; 1 functions */
typedef struct T_func_8024E230_a1_p4 { /* size >= 0x23 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
} T_func_8024E230_a1_p4;

/* pointed to by T_func_8024E230_a1.0x8; 1 functions */
typedef struct T_func_8024E230_a1_p8 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_8024E230_a1_p8_p30 *unk30; /* 3 uses */
} T_func_8024E230_a1_p8;

/* pointed to by T_func_8024E230_a1_p8.0x30; 1 functions */
typedef struct T_func_8024E230_a1_p8_p30 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 2 uses */
} T_func_8024E230_a1_p8_p30;

/* pointed to by T_func_8024E230_a1.0xC; 3 functions */
typedef struct T_func_8024E230_a1_pC { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_8024E230_a1_pC_p30 *unk30; /* 3 uses */
} T_func_8024E230_a1_pC;

/* pointed to by T_func_8024E230_a1_pC.0x30; 3 functions */
typedef struct T_func_8024E230_a1_pC_p30 { /* size >= 0x50 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ u8 pad34[0x17];
    /* 0x04B */ u8 unk4B; /* 1 use */
    /* 0x04C */ u8 pad4C[0x1];
    /* 0x04D */ u8 unk4D; /* 1 use */
    /* 0x04E */ u8 pad4E[0x2];
} T_func_8024E230_a1_pC_p30;

/* parameter file017:func_80250730:0, file017:func_802508F0:0; 5 functions */
typedef struct T_func_80250730_a0 { /* size >= 0x9A */
    /* 0x000 */ u8 pad0[0x3C];
    /* 0x03C */ u16 unk3C; /* 9 uses */
    /* 0x03E */ u8 pad3E[0x52];
    /* 0x090 */ u16 unk90; /* 4 uses */
    /* 0x092 */ u16 unk92; /* 2 uses */
    /* 0x094 */ u8 pad94[0x5];
    /* 0x099 */ u8 unk99; /* 1 use */
} T_func_80250730_a0;

/* parameter file017:func_80250730:1, file017:func_802508F0:1; 3 functions */
typedef struct T_func_80250730_a1 { /* size >= 0x20 */
    /* 0x000 */ struct T_func_80250730_a1_p0 *unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x8];
    /* 0x00C */ struct T_func_80250730_a1_pC *unkC; /* 4 uses */
    /* 0x010 */ struct T_func_80250730_a1_p10 *unk10; /* 3 uses */
    /* 0x014 */ struct T_func_80250730_a1_p14 *unk14; /* 3 uses */
    /* 0x018 */ u8 pad18[0x4];
    /* 0x01C */ struct T_func_80250730_a1_p1C *unk1C; /* 2 uses */
} T_func_80250730_a1;

/* pointed to by T_func_80250730_a1.0x0; 1 functions */
typedef struct T_func_80250730_a1_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_80250730_a1_p0_p30 *unk30; /* 1 use */
} T_func_80250730_a1_p0;

/* pointed to by T_func_80250730_a1_p0.0x30; 1 functions */
typedef struct T_func_80250730_a1_p0_p30 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s32 unk30; /* 1 use */
} T_func_80250730_a1_p0_p30;

/* pointed to by T_func_80250730_a1.0x10; 2 functions */
typedef struct T_func_80250730_a1_p10 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_80251750_ret *unk30; /* 1 use */
} T_func_80250730_a1_p10;

/* pointed to by T_func_80250730_a1.0x14; 2 functions */
typedef struct T_func_80250730_a1_p14 { /* size >= 0x23 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 3 uses */
} T_func_80250730_a1_p14;

/* pointed to by T_func_80250730_a1.0x1C; 1 functions */
typedef struct T_func_80250730_a1_p1C { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_80250730_a1_p1C_p30 *unk30; /* 2 uses */
} T_func_80250730_a1_p1C;

/* pointed to by T_func_80250730_a1_p1C.0x30; 1 functions */
typedef struct T_func_80250730_a1_p1C_p30 { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x4B];
    /* 0x04B */ u8 unk4B; /* 3 uses */
} T_func_80250730_a1_p1C_p30;

/* pointed to by T_func_80250730_a1.0xC; 1 functions */
typedef struct T_func_80250730_a1_pC { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_80250730_a1_pC_p30 *unk30; /* 3 uses */
} T_func_80250730_a1_pC;

/* pointed to by T_func_80250730_a1_pC.0x30; 1 functions */
typedef struct T_func_80250730_a1_pC_p30 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 2 uses */
} T_func_80250730_a1_pC_p30;

/* pointed to by T_func_80250730_a1_p10.0x30; 1 functions */
typedef struct T_func_80251750_ret { /* size >= 0x4D */
    /* 0x000 */ u8 pad0[0x4C];
    /* 0x04C */ u8 unk4C; /* 2 uses */
} T_func_80251750_ret;

/* parameter file017:func_80252A54:0, file017:func_80252C14:0; 6 functions */
typedef struct T_func_80252A54_a0 { /* size >= 0x9C */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ u8 pad30[0xC];
    /* 0x03C */ u16 unk3C; /* 12 uses */
    /* 0x03E */ u8 pad3E[0x52];
    /* 0x090 */ u16 unk90; /* 3 uses */
    /* 0x092 */ u16 unk92; /* 3 uses */
    /* 0x094 */ u8 pad94[0x5];
    /* 0x099 */ u8 unk99; /* 2 uses */
    /* 0x09A */ u8 pad9A[0x2];
} T_func_80252A54_a0;

/* parameter file017:func_80252A54:1, file017:func_80252C14:1; 4 functions */
typedef struct T_func_80252A54_a1 { /* size >= 0x20 */
    /* 0x000 */ struct T_func_80252A54_a1_p0 *unk0; /* 3 uses */
    /* 0x004 */ struct T_func_80252A54_a1_p4 *unk4; /* 1 use */
    /* 0x008 */ struct T_func_80252A54_a1_p8 *unk8; /* 1 use */
    /* 0x00C */ struct T_func_80252A54_a1_pC *unkC; /* 4 uses */
    /* 0x010 */ struct T_func_80252A54_a1_p10 *unk10; /* 2 uses */
    /* 0x014 */ struct T_func_80252A54_a1_p14 *unk14; /* 3 uses */
    /* 0x018 */ u8 pad18[0x4];
    /* 0x01C */ struct T_func_80252A54_a1_p1C *unk1C; /* 2 uses */
} T_func_80252A54_a1;

/* pointed to by T_func_80252A54_a1.0x0; 2 functions */
typedef struct T_func_80252A54_a1_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_80252A54_a1_p0_p30 *unk30; /* 2 uses */
} T_func_80252A54_a1_p0;

/* pointed to by T_func_80252A54_a1_p0.0x30; 2 functions */
typedef struct T_func_80252A54_a1_p0_p30 { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ u8 pad34[0x17];
    /* 0x04B */ u8 unk4B; /* 1 use */
} T_func_80252A54_a1_p0_p30;

/* pointed to by T_func_80252A54_a1.0x10; 2 functions */
typedef struct T_func_80252A54_a1_p10 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_80252A54_a1_p10_p30 *unk30; /* 1 use */
} T_func_80252A54_a1_p10;

/* pointed to by T_func_80252A54_a1_p10.0x30; 1 functions */
typedef struct T_func_80252A54_a1_p10_p30 { /* size >= 0x4D */
    /* 0x000 */ u8 pad0[0x4C];
    /* 0x04C */ u8 unk4C; /* 1 use */
} T_func_80252A54_a1_p10_p30;

/* pointed to by T_func_80252A54_a1.0x14; 2 functions */
typedef struct T_func_80252A54_a1_p14 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_80252A54_a1_p14_p30 *unk30; /* 2 uses */
} T_func_80252A54_a1_p14;

/* pointed to by T_func_80252A54_a1_p14.0x30; 2 functions */
typedef struct T_func_80252A54_a1_p14_p30 { /* size >= 0x4D */
    /* 0x000 */ u8 pad0[0x4B];
    /* 0x04B */ u8 unk4B; /* 1 use */
    /* 0x04C */ u8 unk4C; /* 1 use */
} T_func_80252A54_a1_p14_p30;

/* pointed to by T_func_80252A54_a1.0x1C; 1 functions */
typedef struct T_func_80252A54_a1_p1C { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_80252A54_a1_p1C_p30 *unk30; /* 2 uses */
} T_func_80252A54_a1_p1C;

/* pointed to by T_func_80252A54_a1_p1C.0x30; 1 functions */
typedef struct T_func_80252A54_a1_p1C_p30 { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x4B];
    /* 0x04B */ u8 unk4B; /* 3 uses */
} T_func_80252A54_a1_p1C_p30;

/* pointed to by T_func_80252A54_a1.0x4; 1 functions */
typedef struct T_func_80252A54_a1_p4 { /* size >= 0x23 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
} T_func_80252A54_a1_p4;

/* pointed to by T_func_80252A54_a1.0x8; 1 functions */
typedef struct T_func_80252A54_a1_p8 { /* size >= 0x23 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
} T_func_80252A54_a1_p8;

/* pointed to by T_func_80252A54_a1.0xC; 1 functions */
typedef struct T_func_80252A54_a1_pC { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_80252A54_a1_pC_p30 *unk30; /* 3 uses */
} T_func_80252A54_a1_pC;

/* pointed to by T_func_80252A54_a1_pC.0x30; 1 functions */
typedef struct T_func_80252A54_a1_pC_p30 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 2 uses */
} T_func_80252A54_a1_pC_p30;

/* parameter file017:func_802543F8:0, file017:func_80254470:0; 5 functions */
typedef struct T_func_802543F8_a0 { /* size >= 0x9C */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 1 use */
    /* 0x030 */ u8 pad30[0x60];
    /* 0x090 */ u16 unk90; /* 15 uses */
    /* 0x092 */ u16 unk92; /* 3 uses */
    /* 0x094 */ s16 unk94; /* 3 uses */
    /* 0x096 */ u8 pad96[0x2];
    /* 0x098 */ u16 unk98; /* 3 uses */
    /* 0x09A */ u8 pad9A[0x2];
} T_func_802543F8_a0;

/* parameter file017:func_802543F8:1, file017:func_80254470:1; 5 functions */
typedef struct T_func_802543F8_a1 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ struct T_func_802543F8_a1_p4 *unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x8];
    /* 0x010 */ struct T_func_802543F8_a1_p10 *unk10; /* 3 uses */
    /* 0x014 */ struct T_func_802543F8_a1_p14 *unk14; /* 5 uses */
    /* 0x018 */ struct T_func_802543F8_a1_p18 *unk18; /* 5 uses */
    /* 0x01C */ struct T_func_802543F8_a1_p1C *unk1C; /* 3 uses */
    /* 0x020 */ struct T_func_802543F8_a1_p20 *unk20; /* 2 uses */
    /* 0x024 */ struct T_func_802543F8_a1_p24 *unk24; /* 5 uses */
} T_func_802543F8_a1;

/* pointed to by T_func_802543F8_a1.0x10; 1 functions */
typedef struct T_func_802543F8_a1_p10 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_802543F8_a1_p10_p30 *unk30; /* 3 uses */
} T_func_802543F8_a1_p10;

/* pointed to by T_func_802543F8_a1_p10.0x30; 1 functions */
typedef struct T_func_802543F8_a1_p10_p30 { /* size >= 0x20 */
    /* 0x000 */ u8 pad0[0x12];
    /* 0x012 */ s16 unk12; /* 2 uses */
    /* 0x014 */ u8 pad14[0x8];
    /* 0x01C */ f32 unk1C; /* 3 uses */
} T_func_802543F8_a1_p10_p30;

/* pointed to by T_func_802543F8_a1.0x14; 2 functions */
typedef struct T_func_802543F8_a1_p14 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_802543F8_a1_p14_p30 *unk30; /* 1 use */
} T_func_802543F8_a1_p14;

/* pointed to by T_func_802543F8_a1_p14.0x30; 1 functions */
typedef struct T_func_802543F8_a1_p14_p30 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x12];
    /* 0x012 */ s16 unk12; /* 2 uses */
} T_func_802543F8_a1_p14_p30;

/* pointed to by T_func_802543F8_a1.0x18; 2 functions */
typedef struct T_func_802543F8_a1_p18 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 2 uses */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_802543F8_a1_p18_p30 *unk30; /* 5 uses */
} T_func_802543F8_a1_p18;

/* pointed to by T_func_802543F8_a1_p18.0x30; 2 functions */
typedef struct T_func_802543F8_a1_p18_p30 { /* size >= 0x4E */
    /* 0x000 */ u8 pad0[0x4B];
    /* 0x04B */ u8 unk4B; /* 6 uses */
    /* 0x04C */ u8 pad4C[0x1];
    /* 0x04D */ u8 unk4D; /* 2 uses */
} T_func_802543F8_a1_p18_p30;

/* pointed to by T_func_802543F8_a1.0x1C; 1 functions */
typedef struct T_func_802543F8_a1_p1C { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_802543F8_a1_p1C_p30 *unk30; /* 1 use */
} T_func_802543F8_a1_p1C;

/* pointed to by T_func_802543F8_a1_p1C.0x30; 1 functions */
typedef struct T_func_802543F8_a1_p1C_p30 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x12];
    /* 0x012 */ s16 unk12; /* 2 uses */
} T_func_802543F8_a1_p1C_p30;

/* pointed to by T_func_802543F8_a1.0x20; 1 functions */
typedef struct T_func_802543F8_a1_p20 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s32 unk30; /* 2 uses */
} T_func_802543F8_a1_p20;

/* pointed to by T_func_802543F8_a1.0x24; 3 functions */
typedef struct T_func_802543F8_a1_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_802577B4_ret *unk30; /* 3 uses */
} T_func_802543F8_a1_p24;

/* pointed to by T_func_802543F8_a1.0x4; 1 functions */
typedef struct T_func_802543F8_a1_p4 { /* size >= 0x23 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
} T_func_802543F8_a1_p4;

/* parameter file017:func_802550A8:0, file017:func_80255134:0; 10 functions */
typedef struct T_func_802550A8_a0 { /* size >= 0xA4 */
    /* 0x000 */ u8 pad0[0x40];
    /* 0x040 */ f32 unk40; /* 1 use */
    /* 0x044 */ f32 unk44; /* 1 use */
    /* 0x048 */ f32 unk48; /* 1 use */
    /* 0x04C */ u8 pad4C[0x44];
    /* 0x090 */ u16 unk90; /* 3 uses */
    /* 0x092 */ u16 unk92; /* 15 uses */
    /* 0x094 */ u8 pad94[0x4];
    /* 0x098 */ f32 unk98; /* 4 uses */
    /* 0x09C */ f32 unk9C; /* 9 uses */
    /* 0x0A0 */ f32 unkA0; /* 4 uses */
} T_func_802550A8_a0;

/* parameter file017:func_802550A8:1, file017:func_80255134:1; 4 functions */
typedef struct T_func_802550A8_a1 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ struct T_func_802550A8_a1_p4 *unk4; /* 2 uses */
    /* 0x008 */ struct T_func_802550A8_a1_p8 *unk8; /* 6 uses */
} T_func_802550A8_a1;

/* pointed to by T_func_802550A8_a1.0x4; 2 functions */
typedef struct T_func_802550A8_a1_p4 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_802550A8_a1_p4_p30 *unk30; /* 2 uses */
} T_func_802550A8_a1_p4;

/* pointed to by T_func_802550A8_a1_p4.0x30; 2 functions */
typedef struct T_func_802550A8_a1_p4_p30 { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ u8 padC[0x3F];
    /* 0x04B */ u8 unk4B; /* 2 uses */
} T_func_802550A8_a1_p4_p30;

/* pointed to by T_func_802550A8_a1.0x8; 4 functions */
typedef struct T_func_802550A8_a1_p8 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_802550A8_a1_p8_p30 *unk30; /* 5 uses */
} T_func_802550A8_a1_p8;

/* pointed to by T_func_802550A8_a1_p8.0x30; 3 functions */
typedef struct T_func_802550A8_a1_p8_p30 { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ u8 padC[0x3F];
    /* 0x04B */ u8 unk4B; /* 6 uses */
} T_func_802550A8_a1_p8_p30;

/* pointed to by T_func_802543F8_a1_p24.0x30; 2 functions */
typedef struct T_func_802577B4_ret { /* size >= 0x4E */
    /* 0x000 */ u8 pad0[0x4B];
    /* 0x04B */ u8 unk4B; /* 2 uses */
    /* 0x04C */ u8 unk4C; /* 2 uses */
    /* 0x04D */ u8 unk4D; /* 2 uses */
} T_func_802577B4_ret;

extern T_D_80258590_file017 D_80258590;
extern T_D_802585A4_file017 D_802585A4;
extern T_D_802585D4_file017 D_802585D4;
extern s32 D_802588F0;
extern s32 D_80258A88;
extern s32 D_80258C18;
extern T_D_80162DD0 D_80258C34;
extern T_D_80258DA4_file017 D_80258DA4;
extern T_D_80258DB8_file017 D_80258DB8;
extern T_D_80253968_file015 D_80258DCC;
extern T_D_80253968_file015 D_80258DD8;
extern T_D_80253968_file015 D_80259054;
extern T_D_80253968_file015 D_80259060;
extern T_D_80253968_file015 D_80259274;
extern T_D_80253968_file015 D_80259280;
extern u16 D_80259488[];
extern T_D_80253968_file015 D_802594B4;
extern T_D_80253968_file015 D_802594C0;
extern T_D_80162DD0 D_802596E4;
extern T_D_80162DD0 D_802596F8;
extern T_D_80162DD0 D_8025970C;
extern T_D_80162DD0 D_80259720;
extern T_D_80162DD0 D_80259734;
extern T_D_80162DD0 D_80259748;
extern T_D_80162DD0 D_8025975C;
extern f32 D_8025C2C4;
extern f32 D_8025C2C8;
extern f64 D_8025C2D0;
extern f64 D_8025C2D8;
extern f32 D_8025C6B8;
extern f32 D_8025C6BC;
extern f32 D_8025C6C0;
extern f32 D_8025C6C4;
extern f32 D_8025C6C8;
extern f32 D_8025C6CC;
extern f32 D_8025C6D0;
extern f32 D_8025C6D4;
extern f32 D_8025C6D8;
extern f32 D_8025C6DC;
extern f32 D_8025C6E0;
extern f32 D_8025C6E4;
extern f32 D_8025C6E8;
extern f32 D_8025C6EC;
extern f32 D_8025C6F0;
extern f32 D_8025C6F4;
extern f32 D_8025C6F8;
extern f32 D_8025C6FC;
extern f32 D_8025C700;
extern f64 D_8025C708;
extern f32 D_8025C710;
extern f32 D_8025C714;
extern f32 D_8025C718;
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;
extern f32 D_8025C728;
extern f32 D_8025C72C;
extern f64 D_8025C730;
extern f32 D_8025C738;
extern f32 D_8025C73C;
extern f32 D_8025C740;
extern f32 D_8025C744;
extern f64 D_8025C748;
extern f32 D_8025C750;
extern f64 D_8025C758;
extern f32 D_8025C760;
extern f32 D_8025C764;
extern f32 D_8025C768;
extern f32 D_8025C76C;
extern f64 D_8025C770;
extern f64 D_8025C778;
extern f64 D_8025C780;
extern f64 D_8025C788;
extern f64 D_8025C790;
extern f32 D_8025C798;
extern f32 D_8025C79C;
extern f32 D_8025C900;
extern f32 D_8025C904;
extern f32 D_8025C908;
extern f32 D_8025C90C;
extern f32 D_8025C910;
extern f32 D_8025C914;
extern f32 D_8025C918;
extern f32 D_8025C91C;
extern f32 D_8025C920;
extern f32 D_8025C9AC;
extern f32 D_8025CABC;
extern f32 D_8025CAC0;
extern f32 D_8025CAC4;
extern f32 D_8025CB60;
extern f64 D_8025CD30;
extern f32 D_8025CD38;
extern f32 D_8025CD3C;
extern f32 D_8025CD40;
extern f32 D_8025CD44;
extern f32 D_8025CD48;
extern f32 D_8025CD4C;
extern f32 D_8025CD50;
extern f32 D_8025CD54;
extern f32 D_8025CD58;
extern f32 D_8025CD5C;
extern f32 D_8025CD60;
extern f32 D_8025CD64;
extern f32 D_8025CD68;
extern f32 D_8025CD6C;
extern f32 D_8025CFB4;
extern f64 D_8025CFB8;
extern f64 D_8025CFC0;
extern f32 D_8025CFC8;
extern f64 D_8025CFD0;
extern f64 D_8025CFD8;
extern f64 D_8025CFE0;
extern f64 D_8025CFE8;
extern f64 D_8025CFF0;
extern f32 D_8025CFF8;
extern f32 D_8025CFFC;
extern f32 D_8025D000;
extern f64 D_8025D008;
extern f64 D_8025D010;
extern f64 D_8025D018;
extern f32 D_8025D020;
extern f32 D_8025D024;
extern f32 D_8025D028;
extern f32 D_8025D02C;
extern f32 D_8025D030;
extern f64 D_8025D038;
extern f64 D_8025D040;
extern f64 D_8025D048;
extern f64 D_8025D050;
extern f32 D_8025D234;
extern f64 D_8025D238;
extern f64 D_8025D240;
extern f64 D_8025D248;
extern f64 D_8025D250;
extern f32 D_8025D258;
extern f64 D_8025D260;
extern f64 D_8025D268;
extern f64 D_8025D270;
extern f64 D_8025D278;
extern f64 D_8025D280;
extern f64 D_8025D288;
extern f64 D_8025D290;
extern f64 D_8025D298;
extern f64 D_8025D2A0;
extern f64 D_8025D2A8;
extern f32 D_8025D2B0;
extern f32 D_8025D2B4;
extern f32 D_8025D2B8;
extern f64 D_8025D2C0;
extern f64 D_8025D2C8;
extern f64 D_8025D2D0;
extern f32 D_8025D2D8;
extern f32 D_8025D2DC;
extern f64 D_8025D2E0;
extern f64 D_8025D2E8;
extern f64 D_8025D2F0;
extern f32 D_8025D4E8;
extern f64 D_8025D4F0;
extern f64 D_8025D4F8;
extern f64 D_8025D500;
extern f64 D_8025D508;
extern f32 D_8025D510;
extern f64 D_8025D518;
extern f64 D_8025D520;
extern f64 D_8025D528;
extern f64 D_8025D530;
extern f64 D_8025D538;
extern f64 D_8025D540;
extern f64 D_8025D548;
extern f64 D_8025D550;
extern f64 D_8025D558;
extern f64 D_8025D560;
extern f32 D_8025D568;
extern f32 D_8025D56C;
extern f64 D_8025D570;
extern f64 D_8025D578;
extern f64 D_8025D580;
extern f32 D_8025D588;
extern f32 D_8025D58C;
extern f64 D_8025D590;
extern f64 D_8025D598;
extern f64 D_8025D5A0;
extern f64 D_8025D5A8;
extern f32 D_8025D798;
extern f64 D_8025D7A0;
extern f64 D_8025D7A8;
extern f64 D_8025D7B0;
extern f64 D_8025D7B8;
extern f32 D_8025D7C0;
extern f64 D_8025D7C8;
extern f64 D_8025D7D0;
extern f64 D_8025D7D8;
extern f64 D_8025D7E0;
extern f64 D_8025D7E8;
extern f64 D_8025D7F0;
extern f64 D_8025D7F8;
extern f64 D_8025D800;
extern f64 D_8025D808;
extern f64 D_8025D810;
extern f32 D_8025D818;
extern f32 D_8025D81C;
extern f64 D_8025D820;
extern f64 D_8025D828;
extern f64 D_8025D830;
extern f32 D_8025D838;
extern f32 D_8025D83C;
extern f64 D_8025D840;
extern f64 D_8025D848;
extern f64 D_8025D850;
extern f64 D_8025D858;
extern f32 D_8025DBF8;
extern f32 D_8025DBFC;
extern f32 D_8025DC00;
extern f32 D_8025DC1C;
extern f32 D_8025DC20;
extern f64 D_8025DC28;
extern f32 D_8025DC30;
extern f64 D_8025DC38;
extern f64 D_8025DC40;
extern f32 D_8025DC48;
extern f32 D_8025DC4C;
extern f32 D_8025DC50;
extern f32 D_8025DC54;
extern f32 D_8025DC58;
extern f64 D_8025DC60;
extern f64 D_8025DC68;
extern f32 D_8025DC70;
extern f64 D_8025DC78;
extern f32 D_8025DC80;
extern f32 D_8025DC84;
extern f64 D_8025DC88;
extern f64 D_8025DC90;
extern f64 D_8025DC98;
extern f64 D_8025DCA0;
extern f32 D_8025DCA8;
extern f64 D_8025DCB0;
extern f64 D_8025DCB8;
extern f64 D_8025DCC0;
extern f64 D_8025DCC8;
extern f32 D_8025DCD0;
extern f32 D_8025DD88;
extern f64 D_8025DD90;
extern f32 D_8025DD98;
extern f32 D_8025DDA0;
extern f32 D_8025DDA4;
extern f32 D_8025DDA8;
extern struct T_func_80241790_ret *D_8025DDB0;
extern struct T_func_80241790_ret *D_8025DDC0;
extern struct T_func_80241790_ret *D_8025DDD0;
extern struct T_func_80107830_a0 *D_8025DDE0;
extern struct T_func_80107830_a0 *D_8025DDF0;
extern struct T_func_80107830_a0 *D_8025DE00;
extern struct T_func_80107830_a0 *D_8025DE10;
extern struct T_func_8010E680_a0 *D_8025DE20;
extern struct T_func_8010E680_a0 *D_8025DE24;

#endif
