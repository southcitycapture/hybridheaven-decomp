#ifndef TYPES_FILE029_H
#define TYPES_FILE029_H

/* Recovered types for file029 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_801E615C; 1 functions */
typedef struct T_D_801E615C_file029 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E615C_file029;

/* D_801E63F0; 1 functions */
typedef struct T_D_801E63F0_file029 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E63F0_file029;

/* D_801E63FC; 1 functions */
typedef struct T_D_801E63FC_file029 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E63FC_file029;

/* D_801E6414; 1 functions */
typedef struct T_D_801E6414_file029 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E6414_file029;

/* D_801E642C; 1 functions */
typedef struct T_D_801E642C_file029 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E642C_file029;

/* D_801E6438; 1 functions */
typedef struct T_D_801E6438_file029 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E6438_file029;

/* D_801E6444; 1 functions */
typedef struct T_D_801E6444_file029 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E6444_file029;

/* D_801E6450; 1 functions */
typedef struct T_D_801E6450_file029 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E6450_file029;

/* D_8038DF70; 1 functions */
typedef struct T_D_8038DF70_file029 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_8038DF70_file029;

/* func_801DAAF0; 16 functions */
typedef struct T_func_801DAAF0_file029 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 41 uses */
} T_func_801DAAF0_file029;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file029 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file029;

/* func_8038D830; 1 functions */
typedef struct T_func_8038D830_file029 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x20];
    /* 0x020 */ struct T_func_80107830_a0 *unk20; /* 5 uses */
    /* 0x024 */ struct T_func_8038D830_file029_p24 *unk24; /* 16 uses */
} T_func_8038D830_file029;

/* pointed to by T_func_8038D830_file029.0x24; 1 functions */
typedef struct T_func_8038D830_file029_p24 { /* size >= 0x8 */
    /* 0x000 */ struct T_func_8038D830_file029_p24_p0 *unk0; /* 8 uses */
    /* 0x004 */ struct T_func_8038D830_file029_p24_p4 *unk4; /* 8 uses */
} T_func_8038D830_file029_p24;

/* pointed to by T_func_8038D830_file029_p24.0x0; 1 functions */
typedef struct T_func_8038D830_file029_p24_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8038D830_file029_p24_p0_p2C *unk2C; /* 8 uses */
} T_func_8038D830_file029_p24_p0;

/* pointed to by T_func_8038D830_file029_p24_p0.0x2C; 1 functions */
typedef struct T_func_8038D830_file029_p24_p0_p2C { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 1 use */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 1 use */
    /* 0x024 */ u8 pad24[0xC];
    /* 0x030 */ void *unk30; /* 1 use */
} T_func_8038D830_file029_p24_p0_p2C;

/* pointed to by T_func_8038D830_file029_p24.0x4; 1 functions */
typedef struct T_func_8038D830_file029_p24_p4 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8038D830_file029_p24_p4_p2C *unk2C; /* 8 uses */
} T_func_8038D830_file029_p24_p4;

/* pointed to by T_func_8038D830_file029_p24_p4.0x2C; 1 functions */
typedef struct T_func_8038D830_file029_p24_p4_p2C { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 1 use */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 1 use */
    /* 0x024 */ u8 pad24[0xC];
    /* 0x030 */ void *unk30; /* 1 use */
} T_func_8038D830_file029_p24_p4_p2C;

extern s32 D_801D8D60;
extern T_D_80162DD0 D_801DB300;
extern T_D_80162DD0 D_801DB64C;
extern T_D_801E0A48_file026 D_801E0A48;
extern T_D_801E615C_file029 D_801E615C;
extern u32 D_801E625C;
extern T_D_801E63F0_file029 D_801E63F0;
extern T_D_801E63FC_file029 D_801E63FC;
extern T_D_801E6414_file029 D_801E6414;
extern T_D_801E642C_file029 D_801E642C;
extern T_D_801E6438_file029 D_801E6438;
extern T_D_801E6444_file029 D_801E6444;
extern T_D_801E6450_file029 D_801E6450;
extern f32 D_801E6898;
extern f32 D_801E689C;
extern f32 D_801E68A0;
extern f32 D_801E68A4;
extern f32 D_801E68A8;
extern f32 D_801E68AC;
extern f32 D_801E68B0;
extern f32 D_801E68B4;
extern f32 D_801E68B8;
extern f32 D_801E68BC;
extern f32 D_801E68C0;
extern f32 D_801E68C4;
extern f32 D_801E68C8;
extern f32 D_801E68CC;
extern f32 D_801E68D0;
extern f32 D_801E68D4;
extern f32 D_801E68D8;
extern f32 D_801E68DC;
extern f32 D_801E68E0;
extern f32 D_801E68E4;
extern f32 D_801E68E8;
extern f32 D_801E68EC;
extern f32 D_801E68F0;
extern f32 D_801E68F4;
extern f32 D_801E68F8;
extern f32 D_801E68FC;
extern f32 D_801E6900;
extern f32 D_801E6904;
extern f32 D_801E6908;
extern f32 D_801E690C;
extern f32 D_801E6910;
extern f32 D_801E6914;
extern f32 D_801E6918;
extern f32 D_801E691C;
extern f32 D_801E6920;
extern f32 D_801E6924;
extern f32 D_801E6928;
extern f32 D_801E692C;
extern f32 D_801E6930;
extern f32 D_801E6934;
extern f32 D_801E6938;
extern f32 D_801E693C;
extern f32 D_801E6940;
extern f32 D_801E6944;
extern f32 D_801E6948;
extern f32 D_801E694C;
extern f32 D_801E6950;
extern f32 D_801E6954;
extern f32 D_801E6958;
extern f32 D_801E695C;
extern f32 D_801E6960;
extern f32 D_801E6964;
extern f32 D_801E6968;
extern f32 D_801E696C;
extern f32 D_801E6970;
extern f32 D_801E6974;
extern f32 D_801E6978;
extern f32 D_801E697C;
extern f32 D_801E6980;
extern f32 D_801E6984;
extern f32 D_801E6988;
extern f32 D_801E698C;
extern f32 D_801E6990;
extern f32 D_801E6994;
extern f32 D_801E6998;
extern f32 D_801E699C;
extern f32 D_801E69A0;
extern f32 D_801E69A4;
extern f32 D_801E69A8;
extern f32 D_801E69AC;
extern f32 D_801E69B0;
extern f32 D_801E69B4;
extern f32 D_801E69B8;
extern f32 D_801E69BC;
extern f32 D_801E69C0;
extern f32 D_801E69C4;
extern f32 D_801E69C8;
extern f32 D_801E69CC;
extern f32 D_801E69D0;
extern f32 D_801E69D4;
extern f32 D_801E69D8;
extern f32 D_801E69DC;
extern f32 D_801E69E0;
extern f32 D_801E69E4;
extern f32 D_801E69E8;
extern f32 D_801E69EC;
extern f32 D_801E69F0;
extern f32 D_801E69F4;
extern f32 D_801E69F8;
extern f32 D_801E69FC;
extern f32 D_801E6A00;
extern f32 D_801E6A04;
extern f32 D_801E6A08;
extern f32 D_801E6A0C;
extern f32 D_801E6A10;
extern f32 D_801E6A14;
extern f32 D_801E6A18;
extern f32 D_801E6A1C;
extern f32 D_801E6A20;
extern f32 D_801E6A24;
extern f32 D_801E6A28;
extern f32 D_801E6A2C;
extern f32 D_801E6A30;
extern f32 D_801E6A34;
extern f32 D_801E6A38;
extern f32 D_801E6A3C;
extern f32 D_801E6A40;
extern f32 D_801E6A44;
extern f32 D_801E6A48;
extern f32 D_801E6A4C;
extern f32 D_801E6A50;
extern f32 D_801E6A54;
extern f32 D_801E6A58;
extern f32 D_801E6A5C;
extern f32 D_801E6A60;
extern f32 D_801E6A64;
extern f32 D_801E6A68;
extern f32 D_801E6A6C;
extern f32 D_801E6A70;
extern f32 D_801E6A74;
extern f32 D_801E6A78;
extern f32 D_801E6A7C;
extern f32 D_801E6A80;
extern f32 D_801E6A84;
extern f32 D_801E6A88;
extern f32 D_801E6A8C;
extern f32 D_801E6A90;
extern f32 D_801E6A94;
extern f32 D_801E6A98;
extern f32 D_801E6A9C;
extern f32 D_801E6AA0;
extern f32 D_801E6AA4;
extern f32 D_801E6AA8;
extern f32 D_801E6AAC;
extern f32 D_801E6AB0;
extern f32 D_801E6AB4;
extern f32 D_801E6AB8;
extern f32 D_801E6ABC;
extern f32 D_801E6AC0;
extern f32 D_801E6AC4;
extern f32 D_801E6AC8;
extern f32 D_801E6ACC;
extern f32 D_801E6AD0;
extern f32 D_801E6AD4;
extern f32 D_801E6AD8;
extern f32 D_801E6ADC;
extern f32 D_801E6AE0;
extern f32 D_801E6AE4;
extern f32 D_801E6AE8;
extern f64 D_801E6AF0;
extern f32 D_801E6AF8;
extern f32 D_801E6AFC;
extern f32 D_801E6B00;
extern f32 D_801E6B04;
extern f32 D_801E6B08;
extern f32 D_801E6B24;
extern f32 D_801E6B28;
extern f32 D_801E6B2C;
extern f32 D_801E6B30;
extern f32 D_801E6B34;
extern f32 D_801E6B38;
extern f32 D_801E6B3C;
extern T_D_8038DF70_file029 D_8038DF70;

#endif
