#ifndef TYPES_FILE056_H
#define TYPES_FILE056_H

/* Recovered types for file056 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"

/* pointed to by T_D_8017201C.0x0; 1 functions */
typedef struct T_D_8017201C_p0 { /* size >= 0x8 */
    /* 0x000 */ u16 *unk0; /* 1 use */
    /* 0x004 */ s32 *unk4; /* 1 use */
} T_D_8017201C_p0;

/* D_80388778; 2 functions */
typedef struct T_D_80388778_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80388778_file056;

/* D_80388784; 1 functions */
typedef struct T_D_80388784_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80388784_file056;

/* D_803887E8; 1 functions */
typedef struct T_D_803887E8_file056_elem { /* size 0xC */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ u8 unk8; /* 3 uses */
    /* 0x009 */ u8 pad9[0x3];
} T_D_803887E8_file056_elem;

/* D_80388814; 1 functions */
typedef struct T_D_80388814_file056 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_80388814_file056;

/* D_8038897C, D_80388994; 2 functions */
typedef struct T_D_8038897C_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 4 uses */
    /* 0x008 */ s32 unk8; /* 4 uses */
} T_D_8038897C_file056;

/* D_80388988; 1 functions */
typedef struct T_D_80388988_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80388988_file056;

/* D_803889A0; 1 functions */
typedef struct T_D_803889A0_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_803889A0_file056;

/* D_803889C0; 2 functions */
typedef struct T_D_803889C0_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_803889C0_file056;

/* D_803889CC; 2 functions */
typedef struct T_D_803889CC_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_803889CC_file056;

/* D_803889D8; 2 functions */
typedef struct T_D_803889D8_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_803889D8_file056;

/* D_803889E4; 2 functions */
typedef struct T_D_803889E4_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_803889E4_file056;

/* D_803889F0; 2 functions */
typedef struct T_D_803889F0_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_803889F0_file056;

/* D_803889FC; 2 functions */
typedef struct T_D_803889FC_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_803889FC_file056;

/* D_80388A08; 2 functions */
typedef struct T_D_80388A08_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80388A08_file056;

/* D_80388A14; 2 functions */
typedef struct T_D_80388A14_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80388A14_file056;

/* D_80388A20; 1 functions */
typedef struct T_D_80388A20_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80388A20_file056;

/* D_80388A2C; 1 functions */
typedef struct T_D_80388A2C_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80388A2C_file056;

/* D_80388A38; 1 functions */
typedef struct T_D_80388A38_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80388A38_file056;

/* D_80388A44; 1 functions */
typedef struct T_D_80388A44_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80388A44_file056;

/* D_80388A5C; 2 functions */
typedef struct T_D_80388A5C_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80388A5C_file056;

/* D_80388A8C; 1 functions */
typedef struct T_D_80388A8C_file056_elem { /* size 0xC */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ f32 x; /* 2 uses */
    /* 0x008 */ f32 z; /* 2 uses */
} T_D_80388A8C_file056_elem;

/* D_80388B1C; 1 functions */
typedef struct T_D_80388B1C_file056_elem { /* size 0xC */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ f32 x; /* 2 uses */
    /* 0x008 */ f32 z; /* 2 uses */
} T_D_80388B1C_file056_elem;

/* D_80388BAC; 1 functions */
typedef struct T_D_80388BAC_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80388BAC_file056;

/* D_80388BB8; 1 functions */
typedef struct T_D_80388BB8_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80388BB8_file056;

/* D_80388C00; 3 functions */
typedef struct T_D_80388C00_file056 { /* size >= 0x4 */
    /* 0x000 */ u8 pad0[0x3];
    /* 0x003 */ u8 unk3; /* 1 use */
} T_D_80388C00_file056;

/* D_80388C18; 1 functions */
typedef struct T_D_80388C18_file056_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80388C18_file056_elem;

/* D_80388C64; 1 functions */
typedef struct T_D_80388C64_file056 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80388C64_file056;

/* D_80388C78; 1 functions */
typedef struct T_D_80388C78_file056 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_80388C78_file056;

/* D_80388C88; 1 functions */
typedef struct T_D_80388C88_file056 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_80388C88_file056;

/* D_80388C98; 1 functions */
typedef struct T_D_80388C98_file056 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_80388C98_file056;

/* D_80388CB0; 1 functions */
typedef struct T_D_80388CB0_file056 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_80388CB0_file056;

/* D_80388CC0; 1 functions */
typedef struct T_D_80388CC0_file056 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_80388CC0_file056;

/* D_80388CD0; 1 functions */
typedef struct T_D_80388CD0_file056 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80388CD0_file056;

/* D_80388CE0; 1 functions */
typedef struct T_D_80388CE0_file056_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80388CE0_file056_elem;

/* D_80388D28; 1 functions */
typedef struct T_D_80388D28_file056 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_80388D28_file056;

/* D_80388D30; 1 functions */
typedef struct T_D_80388D30_file056 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80388D30_file056;

/* D_80388D38; 1 functions */
typedef struct T_D_80388D38_file056 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80388D38_file056;

/* D_80388D4C; 1 functions */
typedef struct T_D_80388D4C_file056 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_80388D4C_file056;

/* D_80388D54; 1 functions */
typedef struct T_D_80388D54_file056 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_80388D54_file056;

/* D_80388D5C; 1 functions */
typedef struct T_D_80388D5C_file056 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80388D5C_file056;

/* D_80388D70; 1 functions */
typedef struct T_D_80388D70_file056 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80388D70_file056;

/* D_80388F14; 1 functions */
typedef struct T_D_80388F14_file056 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_80388F14_file056;

/* D_80389EF8; 1 functions */
typedef struct T_D_80389EF8_file056_elem { /* size 0x40 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ s16 unkE; /* 1 use */
    /* 0x010 */ s16 unk10; /* 2 uses */
    /* 0x012 */ u8 pad12[0x2];
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s16 unk18; /* 1 use */
    /* 0x01A */ u8 pad1A[0x2];
    /* 0x01C */ void *unk1C; /* 1 use */
    /* 0x020 */ s16 unk20; /* 1 use */
    /* 0x022 */ u8 pad22[0xE];
    /* 0x030 */ f32 unk30; /* 1 use */
    /* 0x034 */ f32 unk34; /* 1 use */
    /* 0x038 */ f32 unk38; /* 1 use */
    /* 0x03C */ u8 pad3C[0x4];
} T_D_80389EF8_file056_elem;

/* D_8038A6F8; 1 functions */
typedef struct T_D_8038A6F8_file056_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s16 unk8; /* 1 use; also s32@0x8 */
    /* 0x00A */ u8 padA[0x2];
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_8038A6F8_file056_elem;

/* D_8038A918; 2 functions */
typedef struct T_D_8038A918_file056 { /* size >= 0x18 */
    /* 0x000 */ u16 unk0; /* 2 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 2 uses */
    /* 0x010 */ f32 unk10; /* 1 use */
    /* 0x014 */ f32 unk14; /* 1 use */
} T_D_8038A918_file056;

/* D_8038A930; 4 functions */
typedef struct T_D_8038A930_file056 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 5 uses */
    /* 0x004 */ f32 unk4; /* 3 uses */
    /* 0x008 */ f32 unk8; /* 4 uses */
} T_D_8038A930_file056;

/* pointed to by T_D_8038A9C4_file056.0x0; 1 functions */
typedef struct T_D_8038A9C4_file056_p0 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ struct T_func_80147174_a0 *unk10; /* 1 use */
} T_D_8038A9C4_file056_p0;

/* pointed to by T_func_80247294_a0.0x24; 1 functions */
typedef struct T_func_80247294_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_80247294_a0_p24_p30 *unk30; /* 4 uses */
} T_func_80247294_a0_p24;

/* pointed to by T_func_80247294_a0_p24.0x30; 1 functions */
typedef struct T_func_80247294_a0_p24_p30 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x4];
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 2 uses */
} T_func_80247294_a0_p24_p30;

/* parameter file056:func_80375F98:0, file056:func_803768AC:0; 2 functions */
typedef struct T_func_80375F98_a0 { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_80375F98_a0_p24 *unk24; /* 2 uses */
    /* 0x028 */ u8 pad28[0x10];
    /* 0x038 */ struct T_func_80375F98_a0_p38 *unk38; /* 2 uses */
    /* 0x03C */ u8 pad3C[0x20];
    /* 0x05C */ struct T_func_8012CE9C_a1 *unk5C; /* 1 use */
    /* 0x060 */ u8 pad60[0x32];
    /* 0x092 */ s16 unk92; /* 3 uses */
} T_func_80375F98_a0;

/* pointed to by T_func_80375F98_a0.0x24; 2 functions */
typedef struct T_func_80375F98_a0_p24 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_80375F98_a0_p24_p2C *unk2C; /* 2 uses */
} T_func_80375F98_a0_p24;

/* pointed to by T_func_80375F98_a0_p24.0x2C; 2 functions */
typedef struct T_func_80375F98_a0_p24_p2C { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 2 uses */
} T_func_80375F98_a0_p24_p2C;

/* pointed to by T_func_80375F98_a0.0x38; 1 functions */
typedef struct T_func_80375F98_a0_p38 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ s32 unk10; /* 2 uses */
} T_func_80375F98_a0_p38;

/* anonymous; 2 functions */
typedef struct T_func_80377BA0_ret { /* size >= 0x9C */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 1 use */
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ u8 pad34[0x38];
    /* 0x06C */ f32 unk6C; /* 1 use */
    /* 0x070 */ f32 unk70; /* 1 use */
    /* 0x074 */ f32 unk74; /* 1 use */
    /* 0x078 */ u8 unk78; /* 1 use */
    /* 0x079 */ u8 unk79; /* 1 use */
    /* 0x07A */ u8 unk7A; /* 1 use */
    /* 0x07B */ u8 unk7B; /* 1 use */
    /* 0x07C */ u8 unk7C; /* 1 use */
    /* 0x07D */ u8 unk7D; /* 1 use */
    /* 0x07E */ u8 unk7E; /* 1 use */
    /* 0x07F */ u8 unk7F; /* 1 use */
    /* 0x080 */ u8 unk80; /* 1 use */
    /* 0x081 */ u8 unk81; /* 1 use */
    /* 0x082 */ u8 unk82; /* 1 use */
    /* 0x083 */ u8 unk83; /* 1 use */
    /* 0x084 */ u8 unk84; /* 1 use */
    /* 0x085 */ u8 unk85; /* 1 use */
    /* 0x086 */ u8 unk86; /* 1 use */
    /* 0x087 */ u8 unk87; /* 1 use */
    /* 0x088 */ s32 unk88; /* 1 use */
    /* 0x08C */ s32 unk8C; /* 1 use */
    /* 0x090 */ s16 unk90; /* 1 use */
    /* 0x092 */ s16 unk92; /* 1 use */
    /* 0x094 */ u8 unk94; /* 1 use */
    /* 0x095 */ u8 unk95; /* 1 use */
    /* 0x096 */ u8 pad96[0x2];
    /* 0x098 */ u8 unk98; /* 1 use */
    /* 0x099 */ u8 pad99[0x3];
} T_func_80377BA0_ret;

/* parameter file056:func_8037DF24:0, file056:func_8037E118:0; 2 functions */
typedef struct T_func_8037DF24_a0 { /* size >= 0xA8 */
    /* 0x000 */ u8 pad0[0x3C];
    /* 0x03C */ s16 unk3C; /* 1 use */
    /* 0x03E */ u8 pad3E[0x59];
    /* 0x097 */ s8 unk97; /* 7 uses */
    /* 0x098 */ u8 pad98[0xC];
    /* 0x0A4 */ struct T_func_8037DF24_a0_pA4 *unkA4; /* 1 use */
} T_func_8037DF24_a0;

/* pointed to by T_func_8037DF24_a0.0xA4; 1 functions */
typedef struct T_func_8037DF24_a0_pA4 { /* size >= 0xE */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x6];
    /* 0x00C */ u16 unkC; /* 1 use */
} T_func_8037DF24_a0_pA4;

/* parameter file056:func_8037DFDC:0, file056:func_8037E38C:0; 4 functions */
typedef struct T_func_8037DFDC_a0 { /* size >= 0xA8 */
    /* 0x000 */ u8 pad0[0x3C];
    /* 0x03C */ s16 unk3C; /* 1 use */
    /* 0x03E */ u8 pad3E[0x53];
    /* 0x091 */ s8 unk91; /* 6 uses */
    /* 0x092 */ u8 pad92[0x5];
    /* 0x097 */ s8 unk97; /* 11 uses; loaded both signed (lb x6) and unsigned (lbu x3) */
    /* 0x098 */ u8 pad98[0xC];
    /* 0x0A4 */ struct T_func_8037DFDC_a0_pA4 *unkA4; /* 1 use */
} T_func_8037DFDC_a0;

/* pointed to by T_func_8037DFDC_a0.0xA4; 1 functions */
typedef struct T_func_8037DFDC_a0_pA4 { /* size >= 0xE */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x6];
    /* 0x00C */ u16 unkC; /* 1 use */
} T_func_8037DFDC_a0_pA4;

/* parameter file056:func_8037EABC:0, file056:func_8037EBB0:0; 5 functions */
typedef struct T_func_8037EABC_a0 { /* size >= 0xA8 */
    /* 0x000 */ u8 pad0[0x3C];
    /* 0x03C */ s16 unk3C; /* 1 use */
    /* 0x03E */ u8 pad3E[0x57];
    /* 0x095 */ u8 unk95; /* 3 uses */
    /* 0x096 */ s8 unk96; /* 9 uses; loaded both signed (lb x5) and unsigned (lbu x1) */
    /* 0x097 */ s8 unk97; /* 2 uses */
    /* 0x098 */ u8 pad98[0xC];
    /* 0x0A4 */ struct T_func_8037EABC_a0_pA4 *unkA4; /* 1 use */
} T_func_8037EABC_a0;

/* pointed to by T_func_8037EABC_a0.0xA4; 1 functions */
typedef struct T_func_8037EABC_a0_pA4 { /* size >= 0xE */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x6];
    /* 0x00C */ u16 unkC; /* 1 use */
} T_func_8037EABC_a0_pA4;

/* parameter file056:func_8037EDF4:0, file056:func_8037EF2C:0; 6 functions */
typedef struct T_func_8037EDF4_a0 { /* size >= 0xA8 */
    /* 0x000 */ u8 pad0[0x96];
    /* 0x096 */ s8 unk96; /* 16 uses */
    /* 0x097 */ u8 pad97[0xD];
    /* 0x0A4 */ struct T_func_8037EDF4_a0_pA4 *unkA4; /* 1 use */
} T_func_8037EDF4_a0;

/* pointed to by T_func_8037EDF4_a0.0xA4; 1 functions */
typedef struct T_func_8037EDF4_a0_pA4 { /* size >= 0xE */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x6];
    /* 0x00C */ u16 unkC; /* 1 use */
} T_func_8037EDF4_a0_pA4;

extern u8 D_801E4010;
extern u16 D_803787A4[];
extern T_D_80162DD0 D_803884A4;
extern s32 D_803884B8[];
extern T_D_80388778_file056 D_80388778;
extern T_D_80388784_file056 D_80388784;
extern T_D_80162DD0 D_80388790;
extern u8 D_803887E4;
extern struct T_D_803887E8_file056_elem D_803887E8[];
extern T_D_80162DD0 D_80388800;
extern T_D_80388814_file056 D_80388814;
extern T_D_80162DD0 D_80388940;
extern T_D_80162DD0 D_80388954;
extern T_D_80162DD0 D_80388968;
extern T_D_8038897C_file056 D_8038897C;
extern T_D_80388988_file056 D_80388988;
extern T_D_8038897C_file056 D_80388994;
extern T_D_803889A0_file056 D_803889A0;
extern s16 D_803889AC;
extern u8 D_803889B0;
extern s16 D_803889B4;
extern T_D_803889C0_file056 D_803889C0;
extern T_D_803889CC_file056 D_803889CC;
extern T_D_803889D8_file056 D_803889D8;
extern T_D_803889E4_file056 D_803889E4;
extern T_D_803889F0_file056 D_803889F0;
extern T_D_803889FC_file056 D_803889FC;
extern T_D_80388A08_file056 D_80388A08;
extern T_D_80388A14_file056 D_80388A14;
extern T_D_80388A20_file056 D_80388A20;
extern T_D_80388A2C_file056 D_80388A2C;
extern T_D_80388A38_file056 D_80388A38;
extern T_D_80388A44_file056 D_80388A44;
extern T_D_80388A5C_file056 D_80388A5C;
extern s16 D_80388A68;
extern u8 D_80388A6C;
extern u16 D_80388A70;
extern f32 D_80388A74;
extern struct T_D_80388A8C_file056_elem D_80388A8C[];
extern struct T_D_80388B1C_file056_elem D_80388B1C[];
extern T_D_80388BAC_file056 D_80388BAC;
extern T_D_80388BB8_file056 D_80388BB8;
extern void *D_80388BE8[];
extern T_D_80388C00_file056 D_80388C00;
extern s32 D_80388C04[];
extern struct T_D_80388C18_file056_elem D_80388C18[];
extern struct T_func_802409B4_a0 *D_80388C60;
extern T_D_80388C64_file056 D_80388C64;
extern T_D_80388C78_file056 D_80388C78;
extern T_D_80388C88_file056 D_80388C88;
extern T_D_80388C98_file056 D_80388C98;
extern T_D_80388CB0_file056 D_80388CB0;
extern T_D_80388CC0_file056 D_80388CC0;
extern T_D_80388CD0_file056 D_80388CD0;
extern s32 D_80388CD8;
extern s32 D_80388CDC;
extern struct T_D_80388CE0_file056_elem D_80388CE0[];
extern T_D_80388D28_file056 D_80388D28;
extern T_D_80388D30_file056 D_80388D30;
extern T_D_80388D38_file056 D_80388D38;
extern s32 D_80388D44;
extern s32 D_80388D48;
extern T_D_80388D4C_file056 D_80388D4C;
extern T_D_80388D54_file056 D_80388D54;
extern T_D_80388D5C_file056 D_80388D5C;
extern T_D_80388D70_file056 D_80388D70;
extern void *D_80388D84[];
extern void *D_80388E0C[];
extern u8 D_80388EF8;
extern T_D_80162DD0 D_80388F00;
extern T_D_80388F14_file056 D_80388F14;
extern f64 D_80389370;
extern f64 D_80389378;
extern f64 D_80389380;
extern f64 D_80389388;
extern f64 D_80389390;
extern f64 D_80389398;
extern f64 D_803893A0;
extern f64 D_803893A8;
extern f32 D_803893B0;
extern f64 D_803893B8;
extern u8 D_80389454;
extern u8 D_8038947C;
extern u8 D_80389484;
extern u8 D_803894A0;
extern u8 D_803894C8;
extern u8 D_803894D0;
extern u8 D_803894F0;
extern u8 D_803894F8;
extern f32 D_803894FC;
extern f64 D_80389500;
extern f64 D_80389508;
extern f32 D_80389510;
extern f64 D_80389518;
extern f64 D_80389520;
extern f64 D_803897B8;
extern f64 D_80389800;
extern f64 D_80389808;
extern f64 D_803898A8;
extern f64 D_803898B0;
extern f64 D_803898B8;
extern f32 D_803898E4;
extern f32 D_803898E8;
extern f32 D_803898EC;
extern f32 D_803898F0;
extern f32 D_803898F4;
extern f32 D_803898F8;
extern f32 D_803898FC;
extern f32 D_80389900;
extern u8 D_803899D0;
extern u8 D_803899D8;
extern u8 D_803899E0;
extern u8 D_803899EC;
extern u8 D_803899F4;
extern u8 D_803899FC;
extern u8 D_80389A08;
extern u8 D_80389A0C;
extern u8 D_80389A14;
extern u8 D_80389A1C;
extern u8 D_80389A24;
extern f32 D_80389AC8;
extern f32 D_80389ACC;
extern f32 D_80389AD0;
extern f64 D_80389AD8;
extern f64 D_80389AE0;
extern f32 D_80389AE8;
extern f32 D_80389AEC;
extern f32 D_80389AF0;
extern f32 D_80389AF4;
extern f32 D_80389AF8;
extern f32 D_80389AFC;
extern f32 D_80389B00;
extern f32 D_80389B04;
extern f64 D_80389B08;
extern f64 D_80389B10;
extern f32 D_80389B18;
extern f32 D_80389B1C;
extern f32 D_80389B20;
extern f32 D_80389B24;
extern f32 D_80389B28;
extern f32 D_80389B2C;
extern f32 D_80389B30;
extern f32 D_80389B34;
extern f32 D_80389B38;
extern f32 D_80389B3C;
extern f32 D_80389B40;
extern f32 D_80389B44;
extern f32 D_80389B48;
extern f32 D_80389B4C;
extern f32 D_80389B50;
extern f32 D_80389B54;
extern f32 D_80389B58;
extern f64 D_80389B60;
extern f64 D_80389B68;
extern f32 D_80389B70;
extern f64 D_80389B78;
extern f32 D_80389B80;
extern f32 D_80389B84;
extern f32 D_80389B88;
extern f64 D_80389B90;
extern f64 D_80389B98;
extern f32 D_80389BA0;
extern f32 D_80389BA4;
extern f32 D_80389BA8;
extern f64 D_80389BB0;
extern f64 D_80389BB8;
extern f64 D_80389BC0;
extern f64 D_80389BC8;
extern f32 D_80389BD0;
extern f64 D_80389BD8;
extern f64 D_80389BE0;
extern f64 D_80389BE8;
extern f64 D_80389BF0;
extern f64 D_80389BF8;
extern f32 D_80389C00;
extern f32 D_80389C04;
extern f64 D_80389C08;
extern f64 D_80389C10;
extern f32 D_80389C18;
extern f32 D_80389C1C;
extern f32 D_80389C20;
extern f64 D_80389C28;
extern f64 D_80389C30;
extern f64 D_80389C38;
extern f64 D_80389C40;
extern f64 D_80389C48;
extern f64 D_80389C50;
extern f64 D_80389C58;
extern f64 D_80389C60;
extern f32 D_80389C68;
extern f32 D_80389C6C;
extern f32 D_80389C70;
extern f32 D_80389C74;
extern f64 D_80389C78;
extern f64 D_80389C80;
extern f32 D_80389C88;
extern f32 D_80389C8C;
extern f32 D_80389C90;
extern f64 D_80389C98;
extern f64 D_80389CA0;
extern f64 D_80389CA8;
extern f64 D_80389CB0;
extern f64 D_80389CB8;
extern f64 D_80389CC0;
extern f64 D_80389CC8;
extern f64 D_80389CD0;
extern f64 D_80389CD8;
extern f64 D_80389CE0;
extern f64 D_80389CE8;
extern f64 D_80389CF0;
extern f64 D_80389CF8;
extern f64 D_80389D00;
extern f64 D_80389D08;
extern f64 D_80389D10;
extern f64 D_80389D18;
extern f64 D_80389D20;
extern f64 D_80389D28;
extern f32 D_80389D30;
extern f64 D_80389D38;
extern f64 D_80389D40;
extern f64 D_80389D48;
extern f64 D_80389D50;
extern f64 D_80389D58;
extern f64 D_80389D60;
extern f32 D_80389D68;
extern f32 D_80389D6C;
extern f64 D_80389D70;
extern f64 D_80389D78;
extern f64 D_80389D80;
extern f64 D_80389D88;
extern f32 D_80389D90;
extern f64 D_80389D98;
extern f64 D_80389DA0;
extern f32 D_80389DA8;
extern f32 D_80389DAC;
extern f32 D_80389DB0;
extern f64 D_80389DB8;
extern f32 D_80389DC0;
extern f32 D_80389DC4;
extern f32 D_80389DC8;
extern u8 D_80389DD0;
extern u8 D_80389DD8;
extern u8 D_80389DF8;
extern u8 D_80389E00;
extern u8 D_80389E20;
extern u8 D_80389E28;
extern u8 D_80389E44;
extern u8 D_80389E4C;
extern u8 D_80389E70;
extern u8 D_80389E90;
extern u8 D_80389E94;
extern u8 D_80389EE0;
extern u8 D_80389EE1;
extern u8 D_80389EF2;
extern struct T_D_80389EF8_file056_elem D_80389EF8[];
extern struct T_D_8038A6F8_file056_elem D_8038A6F8[];
extern u16 D_8038A8F8;
extern struct T_func_80149580_a1 *D_8038A900;
extern struct T_D_8038897C_file056 *D_8038A904;
extern s16 D_8038A908;
extern u8 D_8038A90A;
extern struct T_func_8010E680_a0 *D_8038A90C;
extern struct T_func_80149580_a1 *D_8038A910;
extern T_D_8038A918_file056 D_8038A918;
extern T_D_8038A930_file056 D_8038A930;
extern f32 D_8038A938;
extern u8 D_8038A93C;
extern u8 D_8038A93D;
extern u8 D_8038A93E;
extern f32 D_8038A940;
extern f32 D_8038A944;
extern f32 D_8038A948;
extern s16 D_8038A94C;
extern struct T_func_8037DD6C_a1 *D_8038A99C;
extern struct T_func_801451C0_a0 *D_8038A9A0;
extern s32 D_8038A9A4;
extern struct T_func_801451C0_a0 *D_8038A9A8;
extern struct T_func_8037DD6C_a1 *D_8038A9AC;
extern struct T_func_8037DD6C_a1 *D_8038A9B0;
extern struct T_func_8037DD6C_a1 *D_8038A9B4;
extern struct T_func_8037DD6C_a1 *D_8038A9B8;
extern struct T_func_8037DD6C_a1 *D_8038A9BC;
extern struct T_func_8037DD6C_a1 *D_8038A9C0;
extern struct T_D_8038A9C4_file056_p0 *D_8038A9C4;
extern struct T_func_8037DD6C_a1 *D_8038A9C8;

#endif
