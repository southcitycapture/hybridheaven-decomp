#ifndef TYPES_FILE014_H
#define TYPES_FILE014_H

/* Recovered types for file014 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"

/* D_802484A0; 1 functions */
typedef struct T_D_802484A0_file014 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_802484A0_file014;

/* D_802484AC; 3 functions */
typedef struct T_D_802484AC_file014 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 3 uses */
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ s32 unk8; /* 3 uses */
} T_D_802484AC_file014;

/* D_802484B8; 4 functions */
typedef struct T_D_802484B8_file014 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 4 uses */
    /* 0x008 */ s32 unk8; /* 4 uses */
} T_D_802484B8_file014;

/* D_802484C4; 6 functions */
typedef struct T_D_802484C4_file014 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 6 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
    /* 0x008 */ s32 unk8; /* 6 uses */
} T_D_802484C4_file014;

/* D_802484D0; 2 functions */
typedef struct T_D_802484D0_file014 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_802484D0_file014;

/* D_802484DC; 9 functions */
typedef struct T_D_802484DC_file014 { /* size >= 0xC */
    /* 0x000 */ s32 x; /* 9 uses */
    /* 0x004 */ s32 y; /* 9 uses */
    /* 0x008 */ s32 z; /* 9 uses */
} T_D_802484DC_file014;

/* D_802484E8; 2 functions */
typedef struct T_D_802484E8_file014 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_802484E8_file014;

/* D_802484F4; 2 functions */
typedef struct T_D_802484F4_file014 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_802484F4_file014;

/* D_80248500; 1 functions */
typedef struct T_D_80248500_file014 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80248500_file014;

/* D_8024850C; 2 functions */
typedef struct T_D_8024850C_file014 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_8024850C_file014;

/* D_80248518; 1 functions */
typedef struct T_D_80248518_file014 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80248518_file014;

/* D_80248524; 1 functions */
typedef struct T_D_80248524_file014 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80248524_file014;

/* pointed to by T_func_8012A564_a0.0x38; 1 functions */
typedef struct T_func_8012A564_a0_p38 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ s32 unk10; /* 1 use */
} T_func_8012A564_a0_p38;

/* parameter file014:func_802419CC:0, file014:func_80241D64:0; 3 functions */
typedef struct T_func_802419CC_a0 { /* size >= 0xA4 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_802419CC_a0_p24 *unk24; /* 8 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ u8 pad30[0xC];
    /* 0x03C */ u16 unk3C; /* 6 uses */
    /* 0x03E */ u8 unk3E; /* 1 use */
    /* 0x03F */ u8 pad3F[0x1];
    /* 0x040 */ f32 unk40; /* 3 uses */
    /* 0x044 */ f32 unk44; /* 3 uses */
    /* 0x048 */ f32 unk48; /* 4 uses */
    /* 0x04C */ u8 pad4C[0x28];
    /* 0x074 */ struct T_func_801395E4_a1_elem *unk74; /* 1 use */
    /* 0x078 */ f32 unk78; /* 1 use */
    /* 0x07C */ f32 unk7C; /* 1 use */
    /* 0x080 */ f32 unk80; /* 1 use */
    /* 0x084 */ s16 unk84; /* 1 use */
    /* 0x086 */ s16 unk86; /* 1 use */
    /* 0x088 */ s16 unk88; /* 1 use */
    /* 0x08A */ u8 pad8A[0x12];
    /* 0x09C */ u16 unk9C; /* 5 uses */
    /* 0x09E */ u8 pad9E[0x2];
    /* 0x0A0 */ f32 unkA0; /* 8 uses */
} T_func_802419CC_a0;

/* pointed to by T_func_802419CC_a0.0x24; 1 functions */
typedef struct T_func_802419CC_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_802419CC_a0_p24_p30 *unk30; /* 9 uses */
} T_func_802419CC_a0_p24;

/* pointed to by T_func_802419CC_a0_p24.0x30; 1 functions */
typedef struct T_func_802419CC_a0_p24_p30 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 3 uses */
    /* 0x008 */ f32 unk8; /* 5 uses */
    /* 0x00C */ f32 unkC; /* 3 uses */
    /* 0x010 */ s16 unk10; /* 3 uses */
    /* 0x012 */ s16 unk12; /* 1 use */
} T_func_802419CC_a0_p24_p30;

/* pointed to by T_D_801BCC25.0x13; 1 functions */
typedef struct T_func_80242A90_a0 { /* size >= 0xA8 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ u8 pad30[0x8];
    /* 0x038 */ struct T_func_80242A90_a0_p38 *unk38; /* 1 use */
    /* 0x03C */ u8 pad3C[0x20];
    /* 0x05C */ struct T_func_80242A90_a0_p5C *unk5C; /* 3 uses */
    /* 0x060 */ u8 pad60[0x3C];
    /* 0x09C */ s16 unk9C; /* 7 uses */
    /* 0x09E */ s16 unk9E; /* 7 uses */
    /* 0x0A0 */ s16 unkA0; /* 7 uses */
    /* 0x0A2 */ s16 unkA2; /* 6 uses */
    /* 0x0A4 */ s16 unkA4; /* 7 uses */
    /* 0x0A6 */ u8 padA6[0x2];
} T_func_80242A90_a0;

/* pointed to by T_func_80242A90_a0.0x38; 1 functions */
typedef struct T_func_80242A90_a0_p38 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ s32 unk10; /* 1 use */
} T_func_80242A90_a0_p38;

/* pointed to by T_func_80242A90_a0.0x5C; 1 functions */
typedef struct T_func_80242A90_a0_p5C { /* size >= 0x7A */
    /* 0x000 */ u8 pad0[0x78];
    /* 0x078 */ s16 unk78; /* 1 use */
} T_func_80242A90_a0_p5C;

extern u16 D_802483E8[];
extern T_D_802484A0_file014 D_802484A0;
extern T_D_802484AC_file014 D_802484AC;
extern T_D_802484B8_file014 D_802484B8;
extern T_D_802484C4_file014 D_802484C4;
extern T_D_802484D0_file014 D_802484D0;
extern T_D_802484DC_file014 D_802484DC;
extern T_D_802484E8_file014 D_802484E8;
extern f32 D_802484F0;
extern T_D_802484F4_file014 D_802484F4;
extern T_D_80248500_file014 D_80248500;
extern T_D_8024850C_file014 D_8024850C;
extern T_D_80248518_file014 D_80248518;
extern T_D_80248524_file014 D_80248524;
extern f32 D_8024A27C;
extern f32 D_8024A280;
extern f32 D_8024A324;
extern f32 D_8024A328;
extern f32 D_8024A32C;
extern f64 D_8024A330;
extern f32 D_8024A338;
extern f32 D_8024A33C;
extern f32 D_8024A340;
extern f32 D_8024A344;
extern f32 D_8024A388;
extern f32 D_8024A38C;
extern f32 D_8024A578;
extern f64 D_8024A580;
extern f64 D_8024A588;
extern f32 D_8024A590;
extern f64 D_8024A598;
extern f64 D_8024A5A0;
extern f64 D_8024A5A8;
extern f64 D_8024A5B0;
extern f32 D_8024A5B8;
extern f32 D_8024A5BC;
extern f64 D_8024A5C0;
extern f64 D_8024A5C8;
extern f32 D_8024A5D0;
extern f64 D_8024A5D8;
extern f32 D_8024AA9C;
extern f64 D_8024AAC8;
extern f64 D_8024AAD0;
extern f32 D_8024AAD8;
extern f32 D_8024AADC;
extern f32 D_8024AAE0;
extern f32 D_8024AAE4;
extern f32 D_8024AAE8;
extern f32 D_8024AAEC;
extern f32 D_8024AAF0;
extern f32 D_8024AAF4;
extern f32 D_8024AAF8;
extern f64 D_8024AB00;
extern f64 D_8024AB08;
extern f64 D_8024AB10;
extern f64 D_8024AB18;
extern f32 D_8024AB20;
extern f32 D_8024AB24;
extern f32 D_8024AB28;
extern f32 D_8024AB2C;
extern f32 D_8024AB30;
extern f32 D_8024AB34;
extern f32 D_8024AB38;
extern f32 D_8024AB40;
extern s32 D_8024AB44;
extern s16 D_8024AB46;

#endif
