#ifndef TYPES_FILE009_H
#define TYPES_FILE009_H

/* Recovered types for file009 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_801E0974; 1 functions */
typedef struct T_D_801E0974_elem { /* size 0xC */
    /* 0x000 */ f32 unk0; /* 3 uses */
    /* 0x004 */ u8 pad4[0x8];
} T_D_801E0974_elem;

/* D_801E09B0; 1 functions */
typedef struct T_D_801E09B0_elem { /* size 0x4 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u16 unk2; /* 1 use */
} T_D_801E09B0_elem;

/* D_801E09B2; 1 functions */
typedef struct T_D_801E09B2_elem { /* size 0x4 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x2];
} T_D_801E09B2_elem;

/* D_801E09E0; 1 functions */
typedef struct T_D_801E09E0_elem { /* size 0x18 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ f32 unk10; /* 1 use */
    /* 0x014 */ f32 unk14; /* 1 use */
} T_D_801E09E0_elem;

/* D_801E0B00; 11 functions */
typedef struct T_D_801E0B00 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 13 uses */
    /* 0x004 */ s32 unk4; /* 6 uses; also s16@0x4, s16@0x6 */
    /* 0x008 */ f32 unk8; /* 11 uses */
} T_D_801E0B00;

/* D_801E0B10; 6 functions */
typedef struct T_D_801E0B10 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 13 uses */
    /* 0x004 */ s32 unk4; /* 7 uses */
    /* 0x008 */ s32 unk8; /* 7 uses */
} T_D_801E0B10;

/* D_801E0B20; 12 functions */
typedef struct T_D_801E0B20 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 12 uses */
    /* 0x004 */ s16 unk4; /* 6 uses; also s32@0x4 */
    /* 0x006 */ s16 unk6; /* 6 uses; also s32@0x4 */
    /* 0x008 */ f32 unk8; /* 12 uses */
} T_D_801E0B20;

/* D_801E0B30; 2 functions */
typedef struct T_D_801E0B30_elem { /* size 0x4 */
    /* 0x000 */ u16 flag; /* 41 uses */
    /* 0x002 */ u16 index; /* 61 uses */
} T_D_801E0B30_elem;

/* D_801E0B78; 1 functions */
typedef struct T_D_801E0B78 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801E0B78;

/* D_801E0BF4; 2 functions */
typedef struct T_D_801E0BF4 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_801E0BF4;

/* D_801E0C00; 1 functions */
typedef struct T_D_801E0C00 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E0C00;

/* D_801E0C0C; 1 functions */
typedef struct T_D_801E0C0C { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E0C0C;

/* D_801E0C18; 1 functions */
typedef struct T_D_801E0C18 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E0C18;

/* D_801E0C24; 1 functions */
typedef struct T_D_801E0C24_elem { /* size 0x6 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u16 unk2; /* 1 use */
    /* 0x004 */ u8 pad4[0x2];
} T_D_801E0C24_elem;

/* D_801E0C88; 1 functions */
typedef struct T_D_801E0C88 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E0C88;

/* D_801E1200; 1 functions */
typedef struct T_D_801E1200_elem { /* size 0x8 */
    /* 0x000 */ u8 pad0[0x5];
    /* 0x005 */ u8 unk5; /* 3 uses */
    /* 0x006 */ u8 pad6[0x2];
} T_D_801E1200_elem;

/* D_801E13AC; 1 functions */
typedef struct T_D_801E13AC { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 work; /* 1 use */
} T_D_801E13AC;

/* D_801E13BC; 1 functions */
typedef struct T_D_801E13BC { /* size >= 0x18 */
    /* 0x000 */ s32 entries; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E13BC;

/* D_801E13E4; 1 functions */
typedef struct T_D_801E13E4_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ u16 unk4; /* 1 use; also s32@0x4 */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E13E4_elem;

/* D_801E1410; 1 functions */
typedef struct T_D_801E1410_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ u16 unk4; /* 1 use; also s32@0x4 */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1410_elem;

/* D_801E1448; 1 functions */
typedef struct T_D_801E1448 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_D_801E1448;

/* D_801E17C0; 1 functions */
typedef struct T_D_801E17C0_elem { /* size 0x8 */
    /* 0x000 */ s32 key; /* 3 uses */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 unk5; /* 1 use */
    /* 0x006 */ u8 unk6; /* 1 use */
    /* 0x007 */ u8 unk7; /* 1 use */
} T_D_801E17C0_elem;

/* D_801E1F58, D_801E1F7C; 2 functions */
typedef struct T_D_801E1F58_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u16 unk6; /* 1 use */
    /* 0x008 */ u16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_D_801E1F58_elem;

/* D_801E1FD0; 2 functions */
typedef struct T_D_801E1FD0_elem { /* size 0x8 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 unk5; /* 1 use */
    /* 0x006 */ u8 unk6; /* 1 use */
    /* 0x007 */ u8 pad7[0x1];
} T_D_801E1FD0_elem;

/* D_801E2008; 1 functions */
typedef struct T_D_801E2008 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801E2008;

/* D_801E2070; 2 functions */
typedef struct T_D_801E2070 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_801E2070;

/* D_801E2118; 2 functions */
typedef struct T_D_801E2118_elem { /* size 0x1C */
    /* 0x000 */ u16 unk0; /* 2 uses */
    /* 0x002 */ u16 unk2; /* 2 uses */
    /* 0x004 */ u16 unk4; /* 2 uses */
    /* 0x006 */ u16 unk6; /* 2 uses */
    /* 0x008 */ u16 unk8; /* 4 uses */
    /* 0x00A */ u16 unkA; /* 2 uses */
    /* 0x00C */ u16 unkC; /* 1 use */
    /* 0x00E */ u8 padE[0x2];
    /* 0x010 */ s32 unk10; /* 2 uses */
    /* 0x014 */ s32 unk14; /* 2 uses */
    /* 0x018 */ s32 unk18; /* 2 uses */
} T_D_801E2118_elem;

/* D_801E4020; 2 functions */
typedef struct T_D_801E4020 { /* size >= 0x18 */
    /* 0x000 */ f32 unk0; /* 4 uses */
    /* 0x004 */ f32 unk4; /* 4 uses */
    /* 0x008 */ f32 unk8; /* 6 uses */
    /* 0x00C */ f32 unkC; /* 3 uses */
    /* 0x010 */ f32 unk10; /* 3 uses */
    /* 0x014 */ f32 unk14; /* 4 uses */
} T_D_801E4020;

/* D_801E4048; 2 functions */
typedef struct T_D_801E4048 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_801E4048;

/* D_801E4090; 1 functions */
typedef struct T_D_801E4090_elem { /* size 0x40 */
    /* 0x000 */ f32 x; /* 1 use */
    /* 0x004 */ f32 y; /* 1 use */
    /* 0x008 */ f32 z; /* 1 use */
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ s16 ry; /* 1 use */
    /* 0x010 */ s16 rz; /* 2 uses */
    /* 0x012 */ u8 pad12[0x2];
    /* 0x014 */ s32 flags; /* 1 use */
    /* 0x018 */ s16 unk18; /* 1 use */
    /* 0x01A */ u8 pad1A[0x2];
    /* 0x01C */ void *value; /* 1 use */
    /* 0x020 */ s16 index; /* 1 use */
    /* 0x022 */ u8 pad22[0xE];
    /* 0x030 */ f32 unk30; /* 1 use */
    /* 0x034 */ f32 sy; /* 1 use */
    /* 0x038 */ f32 sz; /* 1 use */
    /* 0x03C */ u8 pad3C[0x4];
} T_D_801E4090_elem;

/* D_801E4890; 1 functions */
typedef struct T_D_801E4890_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s16 flags; /* 2 uses; also s32@0x8 */
    /* 0x00A */ u8 padA[0x2];
    /* 0x00C */ s32 work; /* 2 uses */
} T_D_801E4890_elem;

/* D_80388500; 2 functions */
typedef struct T_D_80388500 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80388500;

/* pointed to by T_func_80129C20_a0.0xC; 7 functions */
typedef struct T_func_80129C20_a0_pC { /* size >= 0xA4 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_80107830_a0 *unkC; /* 3 uses */
    /* 0x010 */ u8 pad10[0x5C];
    /* 0x06C */ f32 unk6C; /* 1 use */
    /* 0x070 */ f32 unk70; /* 1 use */
    /* 0x074 */ f32 unk74; /* 1 use */
    /* 0x078 */ u8 pad78[0x4];
    /* 0x07C */ f32 unk7C; /* 2 uses */
    /* 0x080 */ f32 unk80; /* 3 uses */
    /* 0x084 */ f32 unk84; /* 1 use */
    /* 0x088 */ f32 unk88; /* 1 use */
    /* 0x08C */ u8 pad8C[0x14];
    /* 0x0A0 */ f32 unkA0; /* 2 uses */
} T_func_80129C20_a0_pC;

/* pointed to by T_func_8012D40C_a0_pC.0xC; 4 functions */
typedef struct T_func_8012D40C_a0_pC_pC { /* size >= 0x50 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_8012D40C_a0_pC_pC_p24 *unk24; /* 4 uses */
    /* 0x028 */ u8 pad28[0x24];
    /* 0x04C */ u16 unk4C; /* 1 use */
    /* 0x04E */ u8 pad4E[0x2];
} T_func_8012D40C_a0_pC_pC;

/* pointed to by T_func_8012D40C_a0_pC_pC.0x24; 3 functions */
typedef struct T_func_8012D40C_a0_pC_pC_p24 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0x9];
    /* 0x02C */ struct T_func_8012D40C_a0_pC_pC_p24_p2C *unk2C; /* 3 uses */
} T_func_8012D40C_a0_pC_pC_p24;

/* pointed to by T_func_8012D40C_a0_pC_pC_p24.0x2C; 3 functions */
typedef struct T_func_8012D40C_a0_pC_pC_p24_p2C { /* size >= 0x24 */
    /* 0x000 */ u8 pad0[0x12];
    /* 0x012 */ s16 unk12; /* 2 uses */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ u8 pad1C[0x4];
    /* 0x020 */ f32 unk20; /* 1 use */
} T_func_8012D40C_a0_pC_pC_p24_p2C;

/* pointed to by T_func_801C3C60_a0.0x24; 1 functions */
typedef struct T_func_801C3C60_a0_p24 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_801C3C60_a0_p24_p2C *unk2C; /* 3 uses */
} T_func_801C3C60_a0_p24;

/* pointed to by T_func_801C3C60_a0_p24.0x2C; 1 functions */
typedef struct T_func_801C3C60_a0_p24_p2C { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 2 uses */
} T_func_801C3C60_a0_p24_p2C;

/* parameter file009:func_801C83C0:0, file009:func_801C86C4:0; 2 functions */
typedef struct T_func_801C83C0_a0 { /* size >= 0x60 */
    /* 0x000 */ u8 pad0[0x35];
    /* 0x035 */ u8 unk35; /* 1 use */
    /* 0x036 */ u16 unk36; /* 9 uses */
    /* 0x038 */ u8 pad38[0x24];
    /* 0x05C */ struct T_func_801C83C0_a0_p5C *unk5C; /* 1 use */
} T_func_801C83C0_a0;

/* pointed to by T_func_801C83C0_a0.0x5C; 1 functions */
typedef struct T_func_801C83C0_a0_p5C { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x1C];
    /* 0x01C */ s32 unk1C; /* 4 uses */
    /* 0x020 */ s32 unk20; /* 4 uses */
    /* 0x024 */ s32 unk24; /* 4 uses */
} T_func_801C83C0_a0_p5C;

/* pointed to by T_D_801E4080.0x0; 9 functions */
typedef struct T_func_801CC9B0_ret_801CC9EC { /* size >= 0x50 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ u8 unk30; /* 6 uses */
    /* 0x031 */ u8 pad31[0x3];
    /* 0x034 */ u8 unk34; /* 7 uses */
    /* 0x035 */ u8 unk35; /* 7 uses */
    /* 0x036 */ u8 unk36; /* 7 uses */
    /* 0x037 */ u8 pad37[0x15];
    /* 0x04C */ u16 unk4C; /* 13 uses */
    /* 0x04E */ u16 unk4E; /* 4 uses */
} T_func_801CC9B0_ret_801CC9EC;

/* pointed to by T_func_801CF2D4_a1_elem_p0.0x30, T_func_801CF894_a1_elem_p0.0x30; 9 functions */
typedef struct T_func_801CD5E0_a1 { /* size >= 0x50 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 3 uses */
    /* 0x008 */ f32 unk8; /* 9 uses */
    /* 0x00C */ f32 unkC; /* 3 uses */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 unk12; /* 2 uses */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ f32 unk18; /* 4 uses */
    /* 0x01C */ f32 unk1C; /* 4 uses */
    /* 0x020 */ f32 unk20; /* 6 uses */
    /* 0x024 */ u8 pad24[0x24];
    /* 0x048 */ u8 unk48; /* 1 use */
    /* 0x049 */ u8 unk49; /* 1 use */
    /* 0x04A */ u8 unk4A; /* 1 use */
    /* 0x04B */ u8 unk4B; /* 1 use */
    /* 0x04C */ u8 unk4C; /* 1 use */
    /* 0x04D */ u8 unk4D; /* 1 use */
    /* 0x04E */ u8 unk4E; /* 1 use */
    /* 0x04F */ u8 unk4F; /* 1 use */
} T_func_801CD5E0_a1;

/* parameter file009:func_801CDF5C:0, file009:func_801D1C44:0; 2 functions */
typedef struct T_func_801CDF5C_a0 { /* size >= 0x98 */
    /* 0x000 */ u8 pad0[0x90];
    /* 0x090 */ u16 unk90; /* 1 use */
    /* 0x092 */ u8 pad92[0x2];
    /* 0x094 */ u8 unk94; /* 6 uses */
    /* 0x095 */ u8 pad95[0x2];
    /* 0x097 */ u8 unk97; /* 2 uses */
} T_func_801CDF5C_a0;

/* parameter file009:func_801DC250:0, file009:func_801DCCB0:0; 5 functions */
typedef struct T_func_801DC250_a0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 5 uses */
    /* 0x004 */ u16 unk4; /* 39 uses */
    /* 0x006 */ u16 unk6; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_func_801DC250_a0;

extern T_D_80162DD0 D_801E0960;
extern struct T_D_801E0974_elem D_801E0974[];
extern struct T_D_801E09B0_elem D_801E09B0[];
extern struct T_D_801E09B2_elem D_801E09B2[];
extern struct T_D_801E09E0_elem D_801E09E0[];
extern T_D_801E0B00 D_801E0B00;
extern s16 D_801E0B04;
extern s16 D_801E0B06;
extern f32 D_801E0B08;
extern T_D_801E0B10 D_801E0B10;
extern s16 D_801E0B14;
extern s16 D_801E0B16;
extern f32 D_801E0B18;
extern T_D_801E0B20 D_801E0B20;
extern struct T_D_801E0B30_elem D_801E0B30[];
extern u8 D_801E0B74;
extern T_D_801E0B78 D_801E0B78;
extern T_D_80162DD0 D_801E0BD0;
extern T_D_8016379C D_801E0BE4;
extern T_D_801E0BF4 D_801E0BF4;
extern T_D_801E0C00 D_801E0C00;
extern T_D_801E0C0C D_801E0C0C;
extern T_D_801E0C18 D_801E0C18;
extern struct T_D_801E0C24_elem D_801E0C24[];
extern u8 D_801E0C84;
extern T_D_801E0C88 D_801E0C88;
extern T_D_801E0CA0 D_801E0CA0;
extern T_D_80162DD0 D_801E0CE8;
extern T_D_80162DD0 D_801E0CFC;
extern T_D_80162DD0 D_801E0D10;
extern T_D_80162DD0 D_801E0D24;
extern T_D_801E0D68 D_801E0D68;
extern u16 D_801E0D7E;
extern T_D_801E0D68 D_801E0D88;
extern u8 D_801E0D98;
extern struct T_D_801E1200_elem D_801E1200[];
extern T_D_80162DD0 D_801E1398;
extern T_D_801E13AC D_801E13AC;
extern T_D_801E13BC D_801E13BC;
extern s32 D_801E13D4[];
extern struct T_D_801E13E4_elem D_801E13E4[];
extern struct T_D_801E1410_elem D_801E1410[];
extern T_D_801E1448 D_801E1448;
extern T_D_8016379C D_801E14B4;
extern u16 D_801E177C[];
extern struct T_D_801E17C0_elem D_801E17C0[];
extern struct T_D_801E1F58_elem D_801E1F58[];
extern struct T_D_801E1F58_elem D_801E1F7C[];
extern struct T_D_801E1FD0_elem D_801E1FD0[];
extern T_D_801E2008 D_801E2008;
extern T_D_801E2070 D_801E2070;
extern u8 D_801E20F8;
extern u8 D_801E20FC;
extern u8 D_801E2100;
extern u8 D_801E2104;
extern u8 D_801E2108;
extern u8 D_801E210C;
extern u8 D_801E2110;
extern s8 D_801E2114;
extern struct T_D_801E2118_elem D_801E2118[];
extern f64 D_801E25B0;
extern f64 D_801E25B8;
extern f64 D_801E25C0;
extern f64 D_801E25C8;
extern f64 D_801E25D0;
extern f64 D_801E25D8;
extern f64 D_801E25E0;
extern f64 D_801E25E8;
extern f64 D_801E25F0;
extern f32 D_801E25F8;
extern f64 D_801E2600;
extern f64 D_801E2608;
extern f64 D_801E2610;
extern f32 D_801E2618;
extern f64 D_801E2DC8;
extern f64 D_801E2DD0;
extern f64 D_801E2ED8;
extern f32 D_801E3020;
extern f32 D_801E30F0;
extern f32 D_801E30F4;
extern f32 D_801E30F8;
extern f32 D_801E30FC;
extern f64 D_801E3100;
extern f64 D_801E3108;
extern f32 D_801E3110;
extern f32 D_801E3114;
extern f32 D_801E3118;
extern f32 D_801E311C;
extern f32 D_801E3120;
extern f32 D_801E3124;
extern f32 D_801E3128;
extern f64 D_801E3130;
extern f32 D_801E3138;
extern f32 D_801E3324;
extern f32 D_801E3388;
extern f32 D_801E338C;
extern f32 D_801E3390;
extern f32 D_801E3394;
extern f32 D_801E3398;
extern f32 D_801E339C;
extern f32 D_801E33A0;
extern f32 D_801E33A4;
extern f32 D_801E33A8;
extern f32 D_801E33AC;
extern f32 D_801E3430;
extern f32 D_801E3434;
extern f32 D_801E3438;
extern f32 D_801E343C;
extern f64 D_801E3570;
extern f64 D_801E3578;
extern f64 D_801E3580;
extern f64 D_801E3588;
extern f64 D_801E3590;
extern f64 D_801E3598;
extern f32 D_801E35A0;
extern f64 D_801E35A8;
extern f64 D_801E35B0;
extern f64 D_801E35B8;
extern f64 D_801E35C0;
extern f64 D_801E35C8;
extern f32 D_801E35D0;
extern f32 D_801E35D4;
extern f64 D_801E35D8;
extern f64 D_801E35E0;
extern f64 D_801E35E8;
extern f64 D_801E35F0;
extern f64 D_801E35F8;
extern f64 D_801E3600;
extern f64 D_801E3608;
extern f32 D_801E3610;
extern f64 D_801E3618;
extern f64 D_801E3620;
extern f64 D_801E3628;
extern f64 D_801E3630;
extern f64 D_801E3638;
extern f64 D_801E3640;
extern f32 D_801E3648;
extern f64 D_801E3650;
extern f64 D_801E3658;
extern f64 D_801E3660;
extern f32 D_801E3668;
extern f64 D_801E3670;
extern f64 D_801E3678;
extern f64 D_801E3680;
extern f64 D_801E3688;
extern f64 D_801E3690;
extern f64 D_801E3698;
extern f64 D_801E36A0;
extern f64 D_801E36A8;
extern f64 D_801E36B0;
extern f64 D_801E36B8;
extern f64 D_801E36C0;
extern f64 D_801E36C8;
extern f64 D_801E36D0;
extern f32 D_801E3704;
extern f64 D_801E3708;
extern f64 D_801E3710;
extern f64 D_801E3718;
extern f64 D_801E3720;
extern u8 D_801E3B00;
extern u8 D_801E3B0C;
extern u8 D_801E3B18;
extern f32 D_801E3B24;
extern f32 D_801E3B28;
extern f32 D_801E3B2C;
extern f32 D_801E3B30;
extern f32 D_801E3B34;
extern f32 D_801E3B7C;
extern f32 D_801E3B80;
extern f32 D_801E3B84;
extern f32 D_801E3B88;
extern f32 D_801E3D10;
extern f64 D_801E3D18;
extern f64 D_801E3D30;
extern f64 D_801E3D38;
extern f64 D_801E3D40;
extern f64 D_801E3D48;
extern f32 D_801E3DCC;
extern f32 D_801E3F14;
extern f32 D_801E3F18;
extern f32 D_801E3F2C;
extern f32 D_801E3F30;
extern f32 D_801E3FA8;
extern f32 D_801E3FAC;
extern f64 D_801E4008;
extern u8 D_801E4010;
extern u8 D_801E4011;
extern u8 D_801E4012;
extern u8 D_801E4013;
extern s16 D_801E4014;
extern f32 D_801E4018;
extern f32 D_801E401C;
extern T_D_801E4020 D_801E4020;
extern u16 D_801E4040;
extern T_D_801E4048 D_801E4048;
extern s32 D_801E4054;
extern struct T_D_801E4058_p0 *D_801E4058;
extern s16 D_801E405C;
extern f32 D_801E4060;
extern f32 D_801E4064;
extern T_D_801E0D68 D_801E4070;
extern struct T_func_801CC9B0_ret_801CC9EC *D_801E4080;
extern struct T_D_801E4090_elem D_801E4090[];
extern struct T_D_801E4890_elem D_801E4890[];
extern u8 D_801E4A90;
extern T_D_80388500 D_80388500;

#endif
