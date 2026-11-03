#ifndef TYPES_SHARED_H
#define TYPES_SHARED_H

/* Recovered types for shared (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"

/* pointed to by T_D_80089378.0x30; 6 functions */
typedef struct T_D_80089378_p30 { /* size >= 0x50 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 8 uses */
    /* 0x008 */ f32 unk8; /* 8 uses */
    /* 0x00C */ f32 unkC; /* 11 uses */
    /* 0x010 */ s16 unk10; /* 7 uses */
    /* 0x012 */ u8 pad12[0x2];
    /* 0x014 */ s16 unk14; /* 1 use */
    /* 0x016 */ u8 pad16[0x2];
    /* 0x018 */ f32 unk18; /* 8 uses */
    /* 0x01C */ f32 unk1C; /* 8 uses */
    /* 0x020 */ f32 unk20; /* 8 uses */
    /* 0x024 */ s32 unk24; /* 15 uses */
    /* 0x028 */ u8 pad28[0x8];
    /* 0x030 */ s32 unk30; /* 8 uses */
    /* 0x034 */ u8 pad34[0x14];
    /* 0x048 */ u8 unk48; /* 1 use */
    /* 0x049 */ u8 unk49; /* 1 use */
    /* 0x04A */ u8 unk4A; /* 1 use */
    /* 0x04B */ u8 unk4B; /* 1 use */
    /* 0x04C */ u8 unk4C; /* 1 use */
    /* 0x04D */ u8 unk4D; /* 1 use */
    /* 0x04E */ u8 unk4E; /* 1 use */
    /* 0x04F */ u8 unk4F; /* 1 use */
} T_D_80089378_p30;

/* pointed to by T_D_80089378.0x38; 14 functions */
typedef struct T_D_80089378_p38 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 1 use */
    /* 0x004 */ u8 pad4[0x2];
    /* 0x006 */ s16 unk6; /* 17 uses */
    /* 0x008 */ s16 unk8; /* 16 uses */
    /* 0x00A */ s16 unkA; /* 17 uses */
    /* 0x00C */ u8 padC[0x4];
    /* 0x010 */ s32 unk10; /* 6 uses */
    /* 0x014 */ s32 unk14; /* 2 uses */
} T_D_80089378_p38;

/* pointed to by T_D_8008DA88.0x18; 10 functions */
typedef struct T_D_8008DA88_p18 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0x9];
    /* 0x02C */ struct T_func_802257F4_a0 *unk2C; /* 12 uses */
} T_D_8008DA88_p18;

/* pointed to by T_D_8008DA88.0x20; 3 functions */
typedef struct T_D_8008DA88_p20 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 2 uses */
    /* 0x023 */ u8 pad23[0x9];
    /* 0x02C */ struct T_D_8008DA88_p20_p2C *unk2C; /* 2 uses */
    /* 0x030 */ struct T_D_8008DA88_p20_p30 *unk30; /* 1 use */
} T_D_8008DA88_p20;

/* pointed to by T_D_8008DA88.0x24; 9 functions */
typedef struct T_D_8008DA88_p24 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 2 uses */
    /* 0x023 */ u8 pad23[0x9];
    /* 0x02C */ struct T_D_8008DA88_p24_p2C *next; /* 14 uses */
} T_D_8008DA88_p24;

/* pointed to by T_D_8008DA88_p24.0x2C; 7 functions */
typedef struct T_D_8008DA88_p24_p2C { /* size >= 0xB0 */
    /* 0x000 */ s16 unk0; /* 3 uses */
    /* 0x002 */ u8 pad2[0x26];
    /* 0x028 */ struct T_func_8037DD6C_a1_p2C_p28_elem *value; /* 4 uses */
    /* 0x02C */ s16 unk2C; /* 3 uses */
    /* 0x02E */ u8 pad2E[0x3E];
    /* 0x06C */ u16 unk6C; /* 4 uses */
    /* 0x06E */ u8 pad6E[0x36];
    /* 0x0A4 */ s32 unkA4; /* 1 use */
    /* 0x0A8 */ s32 unkA8; /* 1 use */
    /* 0x0AC */ s32 unkAC; /* 1 use */
} T_D_8008DA88_p24_p2C;

/* pointed to by T_D_8008DA88.0x30; 9 functions */
typedef struct T_D_8008DA88_p30 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 2 uses */
    /* 0x023 */ u8 pad23[0x9];
    /* 0x02C */ struct T_D_8008DA88_p30_p2C *next; /* 14 uses */
} T_D_8008DA88_p30;

/* pointed to by T_D_8008DA88_p30.0x2C; 7 functions */
typedef struct T_D_8008DA88_p30_p2C { /* size >= 0xB0 */
    /* 0x000 */ s16 unk0; /* 3 uses */
    /* 0x002 */ u8 pad2[0x26];
    /* 0x028 */ struct T_func_8037DD6C_a1_p2C_p28_elem *value; /* 4 uses */
    /* 0x02C */ s16 unk2C; /* 3 uses */
    /* 0x02E */ u8 pad2E[0x3E];
    /* 0x06C */ u16 unk6C; /* 4 uses */
    /* 0x06E */ u8 pad6E[0x36];
    /* 0x0A4 */ s32 unkA4; /* 1 use */
    /* 0x0A8 */ s32 unkA8; /* 1 use */
    /* 0x0AC */ s32 unkAC; /* 1 use */
} T_D_8008DA88_p30_p2C;

/* pointed to by T_D_8008DA88.0x3C; 3 functions */
typedef struct T_D_8008DA88_p3C { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_D_8008DA88_p3C_p2C *unk2C; /* 3 uses */
} T_D_8008DA88_p3C;

/* pointed to by T_D_8008DA88_p3C.0x2C; 2 functions */
typedef struct T_D_8008DA88_p3C_p2C { /* size >= 0xB0 */
    /* 0x000 */ u8 pad0[0x6C];
    /* 0x06C */ u16 unk6C; /* 2 uses */
    /* 0x06E */ u8 pad6E[0x36];
    /* 0x0A4 */ s32 unkA4; /* 1 use */
    /* 0x0A8 */ s32 unkA8; /* 1 use */
    /* 0x0AC */ s32 unkAC; /* 1 use */
} T_D_8008DA88_p3C_p2C;

/* pointed to by T_D_8008DA88.0x48; 3 functions */
typedef struct T_D_8008DA88_p48 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_D_8008DA88_p48_p2C *unk2C; /* 4 uses */
} T_D_8008DA88_p48;

/* pointed to by T_D_8008DA88_p48.0x2C; 2 functions */
typedef struct T_D_8008DA88_p48_p2C { /* size >= 0xB0 */
    /* 0x000 */ u8 pad0[0x6C];
    /* 0x06C */ u16 unk6C; /* 4 uses */
    /* 0x06E */ u8 pad6E[0x36];
    /* 0x0A4 */ s32 unkA4; /* 1 use */
    /* 0x0A8 */ s32 unkA8; /* 1 use */
    /* 0x0AC */ s32 unkAC; /* 1 use */
} T_D_8008DA88_p48_p2C;

/* pointed to by T_D_8008DA88.0x4C; 3 functions */
typedef struct T_D_8008DA88_p4C { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 2 uses */
    /* 0x023 */ u8 pad23[0x9];
    /* 0x02C */ struct T_D_8008DA88_p4C_p2C *unk2C; /* 1 use */
} T_D_8008DA88_p4C;

/* pointed to by T_D_8008DA88.0x60; 3 functions */
typedef struct T_D_8008DA88_p60 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_D_8008DA88_p60_p2C *unk2C; /* 3 uses */
} T_D_8008DA88_p60;

/* pointed to by T_D_8008DA88_p60.0x2C; 2 functions */
typedef struct T_D_8008DA88_p60_p2C { /* size >= 0xB0 */
    /* 0x000 */ u8 pad0[0x6C];
    /* 0x06C */ u16 unk6C; /* 2 uses */
    /* 0x06E */ u8 pad6E[0x36];
    /* 0x0A4 */ s32 unkA4; /* 1 use */
    /* 0x0A8 */ s32 unkA8; /* 1 use */
    /* 0x0AC */ s32 unkAC; /* 1 use */
} T_D_8008DA88_p60_p2C;

/* pointed to by T_D_8008DA88.0x8; 4 functions */
typedef struct T_D_8008DA88_p8 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_D_8008DA88_p8_p2C *unk2C; /* 2 uses */
    /* 0x030 */ struct T_D_8008DA88_p8_p30 *unk30; /* 12 uses */
} T_D_8008DA88_p8;

/* pointed to by T_D_8008DA88_p8.0x2C; 2 functions */
typedef struct T_D_8008DA88_p8_p2C { /* size >= 0x6E */
    /* 0x000 */ u8 pad0[0x4B];
    /* 0x04B */ u8 unk4B; /* 1 use */
    /* 0x04C */ u8 pad4C[0x20];
    /* 0x06C */ u16 unk6C; /* 2 uses */
} T_D_8008DA88_p8_p2C;

/* D_801636F8; 5 functions */
typedef struct T_D_801636F8 { /* size >= 0x4 */
    /* 0x000 */ s32 unk0; /* 67 uses; also u8@0x0 */
} T_D_801636F8;

/* D_80163FEC; 1 functions */
typedef struct T_D_80163FEC { /* size >= 0x2C */
    /* 0x000 */ u8 pad0[0x1];
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 pad3[0x1];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ f32 unk10; /* 1 use */
    /* 0x014 */ f32 unk14; /* 1 use */
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 1 use */
    /* 0x024 */ f32 unk24; /* 1 use */
    /* 0x028 */ f32 unk28; /* 1 use */
} T_D_80163FEC;

/* D_80164404; 1 functions */
typedef struct T_D_80164404 { /* size >= 0x2C */
    /* 0x000 */ u8 pad0[0x1];
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 pad3[0x1];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ f32 unk10; /* 1 use */
    /* 0x014 */ f32 unk14; /* 1 use */
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 1 use */
    /* 0x024 */ f32 unk24; /* 1 use */
    /* 0x028 */ f32 unk28; /* 1 use */
} T_D_80164404;

/* D_80164698; 1 functions */
typedef struct T_D_80164698 { /* size >= 0x2C */
    /* 0x000 */ u8 pad0[0x1];
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 pad3[0x1];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ f32 unk10; /* 1 use */
    /* 0x014 */ f32 unk14; /* 1 use */
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 1 use */
    /* 0x024 */ f32 unk24; /* 1 use */
    /* 0x028 */ f32 unk28; /* 1 use */
} T_D_80164698;

/* D_80164F30; 10 functions */
typedef struct T_D_80164F30 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_80164F30;

/* D_80164F40; 235 functions */
typedef struct T_D_80164F40 { /* size >= 0x10 */
    /* 0x000 */ s32 w; /* 142 uses */
    /* 0x004 */ s32 unk4; /* 142 uses */
    /* 0x008 */ s32 unk8; /* 142 uses */
    /* 0x00C */ s32 unkC; /* 142 uses */
} T_D_80164F40;

/* pointed to by T_D_80171CF0_elem.0x0; 9 functions */
typedef struct T_D_80171CF0_elem_p0 { /* size >= 0x8 */
    /* 0x000 */ struct T_D_80171CF0_elem_p0_p0 *unk0; /* 18 uses */
    /* 0x004 */ struct T_func_8037DD6C_a1_p2C_p28_elem * *unk4; /* 14 uses */
} T_D_80171CF0_elem_p0;

/* pointed to by T_D_80171CF0_elem_p0.0x0; 8 functions */
typedef struct T_D_80171CF0_elem_p0_p0 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 11 uses */
    /* 0x002 */ u16 unk2; /* 7 uses */
} T_D_80171CF0_elem_p0_p0;

/* pointed to by T_D_80171CF0.0x984; 2 functions */
typedef struct T_D_80171CF0_p984 { /* size >= 0x8 */
    /* 0x000 */ struct T_D_80171CF0_p984_p0 *unk0; /* 4 uses */
    /* 0x004 */ s32 *unk4; /* 2 uses */
} T_D_80171CF0_p984;

/* pointed to by T_D_80171CF0_p984.0x0; 2 functions */
typedef struct T_D_80171CF0_p984_p0 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 2 uses */
    /* 0x002 */ u16 unk2; /* 2 uses */
} T_D_80171CF0_p984_p0;

/* pointed to by T_D_80172594.0x0; 2 functions */
typedef struct T_D_80172594_p0 { /* size >= 0x8 */
    /* 0x000 */ u16 *unk0; /* 2 uses */
    /* 0x004 */ s32 *unk4; /* 2 uses */
} T_D_80172594_p0;

/* D_80175D98; 2 functions */
typedef struct T_D_80175D98_elem { /* size 0x1C */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 2 uses */
    /* 0x004 */ u16 unk4; /* 2 uses */
    /* 0x006 */ u16 unk6; /* 2 uses */
    /* 0x008 */ u16 unk8; /* 4 uses */
    /* 0x00A */ u16 unkA; /* 5 uses */
    /* 0x00C */ u16 unkC; /* 2 uses */
    /* 0x00E */ u8 padE[0x2];
    /* 0x010 */ s32 unk10; /* 2 uses */
    /* 0x014 */ s32 unk14; /* 2 uses */
    /* 0x018 */ s32 unk18; /* 2 uses */
} T_D_80175D98_elem;

/* D_8017D250; 2 functions */
typedef struct T_D_8017D250_elem { /* size 0xA */
    /* 0x000 */ u16 unk0; /* 6 uses */
    /* 0x002 */ u16 unk2; /* 1 use */
    /* 0x004 */ u8 pad4[0x6];
} T_D_8017D250_elem;

/* D_8017DC2C; 2 functions */
typedef struct T_D_8017DC2C { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_8017DC2C;

/* D_8017DC40; 28 functions */
typedef struct T_D_8017DC40 { /* size >= 0x9E */
    /* 0x000 */ u16 unk0; /* 25 uses */
    /* 0x002 */ u16 unk2; /* 25 uses */
    /* 0x004 */ u8 unk4; /* 5 uses */
    /* 0x005 */ u8 pad5[0x1];
    /* 0x006 */ u16 unk6; /* 4 uses */
    /* 0x008 */ u16 unk8; /* 5 uses */
    /* 0x00A */ u8 unkA; /* 5 uses */
    /* 0x00B */ u8 padB[0x1];
    /* 0x00C */ u16 unkC; /* 4 uses */
    /* 0x00E */ u16 unkE; /* 6 uses */
    /* 0x010 */ u16 unk10; /* 1 use */
    /* 0x012 */ u16 unk12; /* 1 use */
    /* 0x014 */ u16 unk14; /* 1 use */
    /* 0x016 */ u16 unk16; /* 1 use */
    /* 0x018 */ u16 unk18; /* 1 use */
    /* 0x01A */ u16 unk1A; /* 1 use */
    /* 0x01C */ u16 unk1C; /* 1 use */
    /* 0x01E */ u16 unk1E; /* 1 use */
    /* 0x020 */ u16 unk20; /* 1 use */
    /* 0x022 */ u16 unk22; /* 1 use */
    /* 0x024 */ u16 unk24; /* 1 use */
    /* 0x026 */ u16 unk26; /* 2 uses */
    /* 0x028 */ u8 pad28[0x18];
    /* 0x040 */ u16 unk40; /* 8 uses */
    /* 0x042 */ u16 unk42; /* 7 uses */
    /* 0x044 */ u16 unk44; /* 6 uses */
    /* 0x046 */ u16 unk46; /* 8 uses */
    /* 0x048 */ u16 unk48; /* 3 uses */
    /* 0x04A */ u16 unk4A; /* 4 uses */
    /* 0x04C */ u16 unk4C; /* 4 uses */
    /* 0x04E */ u16 unk4E; /* 4 uses */
    /* 0x050 */ u16 unk50; /* 4 uses */
    /* 0x052 */ u8 unk52; /* 5 uses */
    /* 0x053 */ u8 unk53; /* 5 uses */
    /* 0x054 */ u8 unk54; /* 5 uses */
    /* 0x055 */ u8 unk55; /* 5 uses */
    /* 0x056 */ u8 pad56[0xC];
    /* 0x062 */ u8 unk62; /* 1 use */
    /* 0x063 */ u8 unk63; /* 1 use */
    /* 0x064 */ u8 unk64; /* 1 use */
    /* 0x065 */ u8 unk65; /* 1 use */
    /* 0x066 */ u16 unk66; /* 2 uses */
    /* 0x068 */ u8 pad68[0xC];
    /* 0x074 */ u16 unk74; /* 2 uses */
    /* 0x076 */ u8 pad76[0xC];
    /* 0x082 */ u16 unk82; /* 3 uses */
    /* 0x084 */ u16 unk84; /* 3 uses */
    /* 0x086 */ u8 unk86; /* 2 uses */
    /* 0x087 */ u8 unk87; /* 2 uses */
    /* 0x088 */ u8 unk88; /* 3 uses */
    /* 0x089 */ u8 unk89; /* 3 uses */
    /* 0x08A */ u16 unk8A; /* 2 uses */
    /* 0x08C */ u8 pad8C[0x2];
    /* 0x08E */ u16 unk8E; /* 1 use */
    /* 0x090 */ u16 unk90; /* 1 use */
    /* 0x092 */ u16 unk92; /* 1 use */
    /* 0x094 */ u16 unk94; /* 1 use */
    /* 0x096 */ u16 unk96; /* 1 use */
    /* 0x098 */ u16 unk98; /* 1 use */
    /* 0x09A */ u16 unk9A; /* 3 uses */
    /* 0x09C */ u16 unk9C; /* 2 uses */
} T_D_8017DC40;

/* D_8017DC44; 2 functions */
typedef struct T_D_8017DC44_elem { /* size 0x9E */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 pad1[0x9D];
} T_D_8017DC44_elem;

/* D_8017DC4A; 2 functions */
typedef struct T_D_8017DC4A_elem { /* size 0x9E */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 pad1[0x9D];
} T_D_8017DC4A_elem;

/* D_8017DC92; 2 functions */
typedef struct T_D_8017DC92_elem { /* size 0x9E */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 pad1[0x9D];
} T_D_8017DC92_elem;

/* D_8017DC93; 2 functions */
typedef struct T_D_8017DC93_elem { /* size 0x9E */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 pad1[0x9D];
} T_D_8017DC93_elem;

/* D_8017DC94; 2 functions */
typedef struct T_D_8017DC94_elem { /* size 0x9E */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 pad1[0x9D];
} T_D_8017DC94_elem;

/* D_8017DC95; 2 functions */
typedef struct T_D_8017DC95_elem { /* size 0x9E */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 pad1[0x9D];
} T_D_8017DC95_elem;

/* D_8017DCDE; 4 functions */
typedef struct T_D_8017DCDE_elem { /* size 0xC */
    /* 0x000 */ s16 unk0; /* 2 uses */
    /* 0x002 */ u8 pad2[0xA];
} T_D_8017DCDE_elem;

/* D_8017DD7C; 23 functions */
typedef struct T_D_8017DD7C { /* size >= 0x28 */
    /* 0x000 */ u8 unk0; /* 5 uses */
    /* 0x001 */ u8 unk1; /* 4 uses */
    /* 0x002 */ u8 unk2; /* 2 uses */
    /* 0x003 */ u8 unk3; /* 2 uses */
    /* 0x004 */ u8 unk4; /* 2 uses */
    /* 0x005 */ u8 unk5; /* 2 uses */
    /* 0x006 */ u8 unk6; /* 2 uses */
    /* 0x007 */ u8 unk7; /* 4 uses */
    /* 0x008 */ u8 pad8[0x6];
    /* 0x00E */ u8 unkE; /* 1 use */
    /* 0x00F */ s8 unkF; /* 2 uses */
    /* 0x010 */ u16 unk10; /* 3 uses */
    /* 0x012 */ u16 unk12; /* 6 uses */
    /* 0x014 */ u16 unk14; /* 3 uses */
    /* 0x016 */ u8 unk16; /* 10 uses */
    /* 0x017 */ u8 unk17; /* 5 uses */
    /* 0x018 */ s16 unk18; /* 1 use */
    /* 0x01A */ s16 unk1A; /* 1 use */
    /* 0x01C */ s16 unk1C; /* 1 use */
    /* 0x01E */ s16 unk1E; /* 1 use */
    /* 0x020 */ s16 unk20; /* 1 use */
    /* 0x022 */ u8 unk22; /* 7 uses */
    /* 0x023 */ u8 pad23[0x1];
    /* 0x024 */ u32 unk24; /* 2 uses */
} T_D_8017DD7C;

/* D_8017DDA4; 7 functions */
typedef struct T_D_8017DDA4 { /* size >= 0x6 */
    /* 0x000 */ u16 unk0; /* 5 uses; also s32@0x0 */
    /* 0x002 */ u8 unk2; /* 4 uses; also s32@0x0 */
    /* 0x003 */ u8 unk3; /* 4 uses; also s32@0x0 */
    /* 0x004 */ u16 unk4; /* 6 uses */
} T_D_8017DDA4;

/* D_8017DF14; 10 functions */
typedef struct T_D_8017DF14_elem { /* size 0x7 */
    /* 0x000 */ u8 value; /* 2 uses */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ u8 unk4; /* 4 uses */
    /* 0x005 */ u8 unk5; /* 4 uses */
    /* 0x006 */ u8 unk6; /* 4 uses */
} T_D_8017DF14_elem;

/* D_8017E004; 6 functions */
typedef struct T_D_8017E004_elem { /* size 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ u8 unk4; /* 7 uses */
    /* 0x005 */ u8 pad5[0x3];
} T_D_8017E004_elem;

/* D_8018294C; 22 functions */
typedef struct T_D_8018294C_elem { /* size 0x14 */
    /* 0x000 */ struct T_D_8018294C_elem_p0_elem *unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 4 uses */
    /* 0x006 */ u16 unk6; /* 46 uses */
    /* 0x008 */ f32 unk8; /* 99 uses */
    /* 0x00C */ u16 unkC; /* 2 uses */
    /* 0x00E */ u16 unkE; /* 2 uses */
    /* 0x010 */ u16 unk10; /* 1 use */
    /* 0x012 */ u16 unk12; /* 8 uses */
} T_D_8018294C_elem;

/* D_80182952; 1 functions */
typedef struct T_D_80182952_elem { /* size 0x14 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x12];
} T_D_80182952_elem;

/* D_80182954; 11 functions */
typedef struct T_D_80182954_elem { /* size 0x14 */
    /* 0x000 */ f32 unk0; /* 21 uses */
    /* 0x004 */ u8 pad4[0x10];
} T_D_80182954_elem;

/* D_8018295A; 4 functions */
typedef struct T_D_8018295A_elem { /* size 0x14 */
    /* 0x000 */ u16 unk0; /* 4 uses */
    /* 0x002 */ u8 pad2[0x12];
} T_D_8018295A_elem;

/* D_8018295C; 3 functions */
typedef struct T_D_8018295C_elem { /* size 0x14 */
    /* 0x000 */ u16 unk0; /* 5 uses */
    /* 0x002 */ u8 pad2[0x12];
} T_D_8018295C_elem;

/* D_80183CE0; 12 functions */
typedef struct T_D_80183CE0_elem { /* size 0x6 */
    /* 0x000 */ u8 unk0; /* 5 uses */
    /* 0x001 */ u8 pad1[0x1];
    /* 0x002 */ s16 unk2; /* 6 uses; also u8@0x3 */
    /* 0x004 */ u8 count; /* 6 uses; also u16@0x4 */
    /* 0x005 */ u8 pad5[0x1];
} T_D_80183CE0_elem;

/* D_801842A0; 28 functions */
typedef struct T_D_801842A0_elem { /* size 0x1C */
    /* 0x000 */ s32 *unk0; /* 2 uses */
    /* 0x004 */ u8 pad4[0x5];
    /* 0x009 */ u8 unk9; /* 7 uses */
    /* 0x00A */ u8 padA[0x6];
    /* 0x010 */ u8 unk10; /* 2 uses */
    /* 0x011 */ u8 pad11[0x9];
    /* 0x01A */ u8 unk1A; /* 3 uses */
    /* 0x01B */ u8 pad1B[0x1];
} T_D_801842A0_elem;

/* D_801842A5; 1 functions */
typedef struct T_D_801842A5_elem { /* size 0x1C */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x1B];
} T_D_801842A5_elem;

/* D_801842A9; 1 functions */
typedef struct T_D_801842A9_elem { /* size 0x1C */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x1B];
} T_D_801842A9_elem;

/* D_801842AB; 1 functions */
typedef struct T_D_801842AB_elem { /* size 0x1C */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x1B];
} T_D_801842AB_elem;

/* D_801842B0; 1 functions */
typedef struct T_D_801842B0_elem { /* size 0x1C */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x1B];
} T_D_801842B0_elem;

/* anonymous; 2 functions */
typedef struct T_D_801BBBF0_elem_3 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 7 uses */
    /* 0x004 */ f32 unk4; /* 7 uses */
    /* 0x008 */ f32 unk8; /* 7 uses */
} T_D_801BBBF0_elem_3;

/* D_801BBBFA; 3 functions */
typedef struct T_D_801BBBFA { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 2 uses */
    /* 0x002 */ s16 unk2; /* 1 use */
} T_D_801BBBFA;

/* D_801BBC06; 17 functions */
typedef struct T_D_801BBC06 { /* size >= 0x7 */
    /* 0x000 */ u8 unk0; /* 5 uses */
    /* 0x001 */ u8 unk1; /* 3 uses */
    /* 0x002 */ s8 unk2; /* 3 uses */
    /* 0x003 */ s8 unk3; /* 3 uses */
    /* 0x004 */ u8 unk4; /* 2 uses */
    /* 0x005 */ u8 unk5; /* 3 uses */
    /* 0x006 */ u8 unk6; /* 3 uses */
} T_D_801BBC06;

/* D_801BBC30; 3 functions */
typedef struct T_D_801BBC30 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ struct T_D_80089378 *unk4; /* 3 uses */
} T_D_801BBC30;

/* D_801BBC8E; 7 functions */
typedef struct T_D_801BBC8E { /* size >= 0xC */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u16 unk2; /* 4 uses */
    /* 0x004 */ u8 pad4[0x6];
    /* 0x00A */ u16 unkA; /* 6 uses */
} T_D_801BBC8E;

/* pointed to by T_D_801BBCD0.0x0; 170 functions */
typedef struct T_D_801BBCD0_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_801EFE0C_ret *inner; /* 348 uses */
} T_D_801BBCD0_p0;

/* pointed to by T_D_801BBCD8.0x0; 107 functions */
typedef struct T_D_801BBCD8_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_80130CBC_a0 *inner; /* 204 uses */
} T_D_801BBCD8_p0;

/* D_801BBCDC; 11 functions */
typedef struct T_D_801BBCDC { /* size >= 0xC */
    /* 0x000 */ struct T_func_80107830_a0 *unk0; /* 5 uses */
    /* 0x004 */ u8 pad4[0x4];
    /* 0x008 */ u8 unk8; /* 1 use */
    /* 0x009 */ u8 pad9[0x1];
    /* 0x00A */ u8 unkA; /* 3 uses */
    /* 0x00B */ u8 unkB; /* 5 uses */
} T_D_801BBCDC;

/* D_801BBD6E; 6 functions */
typedef struct T_D_801BBD6E { /* size >= 0x4 */
    /* 0x000 */ u8 unk0; /* 5 uses */
    /* 0x001 */ u8 pad1[0x2];
    /* 0x003 */ u8 unk3; /* 1 use */
} T_D_801BBD6E;

/* D_801BBD7E; 5 functions */
typedef struct T_D_801BBD7E { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 3 uses */
    /* 0x002 */ u16 unk2; /* 2 uses */
} T_D_801BBD7E;

/* D_801BBD86; 9 functions */
typedef struct T_D_801BBD86 { /* size >= 0x10 */
    /* 0x000 */ u16 unk0; /* 3 uses */
    /* 0x002 */ u8 pad2[0xC];
    /* 0x00E */ s16 unkE; /* 2 uses */
} T_D_801BBD86;

/* D_801BBDA0; 10 functions */
typedef struct T_D_801BBDA0 { /* size >= 0x5C */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u16 unk2; /* 2 uses */
    /* 0x004 */ u8 pad4[0x4];
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ s32 unk20; /* 1 use */
    /* 0x024 */ s32 unk24; /* 1 use */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s16 unk2C; /* 1 use */
    /* 0x02E */ u8 pad2E[0xE];
    /* 0x03C */ f32 unk3C; /* 1 use */
    /* 0x040 */ u8 pad40[0x15];
    /* 0x055 */ u8 unk55; /* 1 use */
    /* 0x056 */ u8 unk56; /* 3 uses */
    /* 0x057 */ u8 pad57[0x1];
    /* 0x058 */ u8 unk58; /* 2 uses */
    /* 0x059 */ u8 unk59; /* 2 uses */
    /* 0x05A */ u8 pad5A[0x2];
} T_D_801BBDA0;

/* D_801BBE08; 4 functions */
typedef struct T_D_801BBE08 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 3 uses */
    /* 0x006 */ u8 pad6[0x2];
} T_D_801BBE08;

/* D_801BBE1A; 3 functions */
typedef struct T_D_801BBE1A { /* size >= 0x8 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x4];
    /* 0x006 */ u8 unk6; /* 2 uses */
    /* 0x007 */ u8 unk7; /* 1 use */
} T_D_801BBE1A;

/* D_801BBE22; 11 functions */
typedef struct T_D_801BBE22 { /* size >= 0x14 */
    /* 0x000 */ s16 unk0; /* 8 uses */
    /* 0x002 */ u8 pad2[0x10];
    /* 0x012 */ u16 unk12; /* 12 uses */
} T_D_801BBE22;

/* D_801BBE8A; 2 functions */
typedef struct T_D_801BBE8A { /* size >= 0x1 */
    /* 0x000 */ s8 unk0; /* 1 use */
} T_D_801BBE8A;

/* D_801BBF0A; 6 functions */
typedef struct T_D_801BBF0A { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x32];
    /* 0x032 */ u8 unk32; /* 3 uses */
    /* 0x033 */ u8 unk33; /* 4 uses */
} T_D_801BBF0A;

/* D_801BBF44; 8 functions */
typedef struct T_D_801BBF44 { /* size >= 0xC */
    /* 0x000 */ u16 unk0; /* 2 uses */
    /* 0x002 */ u8 pad2[0x4];
    /* 0x006 */ u8 unk6; /* 5 uses */
    /* 0x007 */ u8 unk7; /* 5 uses */
    /* 0x008 */ f32 unk8; /* 3 uses */
} T_D_801BBF44;

/* D_801BBF7C; 7 functions */
typedef struct T_D_801BBF7C { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 3 uses */
    /* 0x004 */ u8 pad4[0xC];
    /* 0x010 */ u8 unk10; /* 4 uses */
    /* 0x011 */ u8 pad11[0x3];
} T_D_801BBF7C;

/* D_801BBF90; 10 functions */
typedef struct T_D_801BBF90 { /* size >= 0x6 */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ s16 unk4; /* 8 uses */
} T_D_801BBF90;

/* D_801BBFAC; 6 functions */
typedef struct T_D_801BBFAC { /* size >= 0x79 */
    /* 0x000 */ u8 pad0[0x78];
    /* 0x078 */ u8 unk78; /* 5 uses */
} T_D_801BBFAC;

/* D_801BC025; 25 functions */
typedef struct T_D_801BC025 { /* size >= 0x1 */
    /* 0x000 */ u8 unk0; /* 1 use */
} T_D_801BC025;

/* anonymous; 2 functions */
typedef struct T_D_801BC03C_elem_2 { /* size >= 0x6 */
    /* 0x000 */ u8 unk0; /* 4 uses */
    /* 0x001 */ u8 pad1[0x1];
    /* 0x002 */ s16 unk2; /* 4 uses */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 pad5[0x1];
} T_D_801BC03C_elem_2;

/* D_801BC918; 2 functions */
typedef struct T_D_801BC918_elem { /* size 0xC0 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ u8 pad4[0x14];
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ u8 pad1C[0x3C];
    /* 0x058 */ f32 unk58; /* 1 use */
    /* 0x05C */ u8 pad5C[0x3C];
    /* 0x098 */ f32 unk98; /* 1 use */
    /* 0x09C */ u8 pad9C[0x24];
} T_D_801BC918_elem;

/* D_801BCAE0; 29 functions */
typedef struct T_D_801BCAE0 { /* size >= 0x48 */
    /* 0x000 */ u16 unk0; /* 26 uses */
    /* 0x002 */ u8 pad2[0x4];
    /* 0x006 */ u8 unk6; /* 1 use */
    /* 0x007 */ u8 unk7; /* 1 use */
    /* 0x008 */ u8 pad8[0x6];
    /* 0x00E */ u16 unkE; /* 1 use */
    /* 0x010 */ u8 pad10[0x10];
    /* 0x020 */ s32 unk20; /* 1 use */
    /* 0x024 */ u8 pad24[0xC];
    /* 0x030 */ u8 unk30; /* 6 uses */
    /* 0x031 */ u8 unk31; /* 6 uses */
    /* 0x032 */ u8 unk32; /* 6 uses */
    /* 0x033 */ u8 pad33[0x3];
    /* 0x036 */ s8 unk36; /* 2 uses */
    /* 0x037 */ s8 unk37; /* 2 uses */
    /* 0x038 */ s8 unk38; /* 2 uses */
    /* 0x039 */ u8 pad39[0x9];
    /* 0x042 */ u8 unk42; /* 1 use */
    /* 0x043 */ u8 unk43; /* 1 use */
    /* 0x044 */ u8 unk44; /* 1 use */
    /* 0x045 */ u8 unk45; /* 1 use */
    /* 0x046 */ u8 pad46[0x2];
} T_D_801BCAE0;

/* D_801BCC21; 38 functions */
typedef struct T_D_801BCC21 { /* size >= 0x4 */
    /* 0x000 */ u8 unk0; /* 41 uses */
    /* 0x001 */ u8 pad1[0x2];
    /* 0x003 */ u8 unk3; /* 1 use */
} T_D_801BCC21;

/* D_801BCC25; 45 functions */
typedef struct T_D_801BCC25 { /* size >= 0x1 */
    /* 0x000 */ u8 unk0; /* 14 uses */
} T_D_801BCC25;

/* pointed to by T_D_801BCC25.0x9B; 4 functions */
typedef struct T_D_801BCC25_p9B { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0x92];
    /* 0x092 */ s16 unk92; /* 4 uses */
} T_D_801BCC25_p9B;

/* D_801BD980; 4 functions */
typedef struct T_D_801BD980_elem { /* size 0xE0 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x4];
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ s16 unkE; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ u8 pad18[0x2];
    /* 0x01A */ s16 unk1A; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ s32 unk20; /* 1 use */
    /* 0x024 */ s32 unk24; /* 1 use */
    /* 0x028 */ u8 pad28[0x4C];
    /* 0x074 */ u8 unk74; /* 1 use */
    /* 0x075 */ u8 unk75; /* 1 use */
    /* 0x076 */ u8 pad76[0x26];
    /* 0x09C */ u8 unk9C; /* 1 use */
    /* 0x09D */ u8 unk9D; /* 1 use */
    /* 0x09E */ s16 unk9E; /* 1 use */
    /* 0x0A0 */ s16 unkA0; /* 1 use */
    /* 0x0A2 */ u8 padA2[0x3E];
} T_D_801BD980_elem;

/* D_801BEC60; 15 functions */
typedef struct T_D_801BEC60 { /* size >= 0x28 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ u8 unk8; /* 2 uses */
    /* 0x009 */ u8 unk9; /* 3 uses */
    /* 0x00A */ u8 unkA; /* 2 uses */
    /* 0x00B */ u8 padB[0x1];
    /* 0x00C */ u8 unkC; /* 3 uses */
    /* 0x00D */ u8 unkD; /* 3 uses */
    /* 0x00E */ u8 unkE; /* 1 use */
    /* 0x00F */ u8 unkF; /* 1 use */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ u8 unk12; /* 5 uses */
    /* 0x013 */ u8 unk13; /* 5 uses */
    /* 0x014 */ u8 unk14; /* 3 uses */
    /* 0x015 */ u8 unk15; /* 2 uses */
    /* 0x016 */ u8 unk16; /* 4 uses */
    /* 0x017 */ u8 unk17; /* 3 uses */
    /* 0x018 */ u8 pad18[0x1];
    /* 0x019 */ u8 unk19; /* 3 uses */
    /* 0x01A */ u8 unk1A; /* 3 uses */
    /* 0x01B */ u8 pad1B[0x4];
    /* 0x01F */ u8 unk1F; /* 2 uses */
    /* 0x020 */ u8 unk20; /* 3 uses */
    /* 0x021 */ u8 unk21; /* 1 use */
    /* 0x022 */ u8 unk22; /* 4 uses */
    /* 0x023 */ u8 unk23; /* 4 uses */
    /* 0x024 */ u8 unk24; /* 3 uses */
    /* 0x025 */ u8 unk25; /* 3 uses */
    /* 0x026 */ u8 unk26; /* 3 uses */
    /* 0x027 */ u8 unk27; /* 7 uses */
} T_D_801BEC60;

/* D_801BEF38; 12 functions */
typedef struct T_D_801BEF38_elem { /* size 0x30 */
    /* 0x000 */ u8 unk0; /* 12 uses */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u16 unk2; /* 3 uses */
    /* 0x004 */ struct T_D_801BEF38_elem_p4 *unk4; /* 2 uses */
    /* 0x008 */ u8 unk8; /* 1 use */
    /* 0x009 */ u8 unk9; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
    /* 0x00C */ u8 unkC; /* 9 uses */
    /* 0x00D */ u8 unkD; /* 1 use */
    /* 0x00E */ u16 unkE; /* 3 uses */
    /* 0x010 */ struct T_D_801BEF38_elem_p10 *unk10; /* 2 uses */
    /* 0x014 */ u8 unk14; /* 1 use */
    /* 0x015 */ u8 unk15; /* 1 use */
    /* 0x016 */ u8 pad16[0x2];
    /* 0x018 */ u8 unk18; /* 9 uses */
    /* 0x019 */ u8 unk19; /* 1 use */
    /* 0x01A */ u16 unk1A; /* 3 uses */
    /* 0x01C */ struct T_D_801BEF38_elem_p1C *unk1C; /* 2 uses */
    /* 0x020 */ u8 unk20; /* 1 use */
    /* 0x021 */ u8 unk21; /* 1 use */
    /* 0x022 */ u8 pad22[0x2];
    /* 0x024 */ u8 unk24; /* 9 uses */
    /* 0x025 */ u8 unk25; /* 1 use */
    /* 0x026 */ u16 unk26; /* 3 uses */
    /* 0x028 */ struct T_D_801BEF38_elem_p28 *unk28; /* 2 uses */
    /* 0x02C */ u8 unk2C; /* 1 use */
    /* 0x02D */ u8 unk2D; /* 1 use */
    /* 0x02E */ u8 pad2E[0x2];
} T_D_801BEF38_elem;

/* D_801CD094; 4 functions */
typedef struct T_D_801CD094_file024 { /* size >= 0xC */
    /* 0x000 */ f32 x; /* 3 uses */
    /* 0x004 */ f32 y; /* 3 uses */
    /* 0x008 */ f32 z; /* 3 uses */
} T_D_801CD094_file024;

/* D_801D9FD8; 1 functions */
typedef struct T_D_801D9FD8_file025 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 3 uses */
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_801D9FD8_file025;

/* D_801E05D0; 7 functions */
typedef struct T_D_801E05D0_file025_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_801E05D0_file025_elem;

/* D_801E0650; 5 functions */
typedef struct T_D_801E0650_file025 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 3 uses */
    /* 0x004 */ f32 unk4; /* 3 uses */
    /* 0x008 */ f32 unk8; /* 3 uses */
} T_D_801E0650_file025;

/* D_801E0A48, D_8038DD90, D_8038DDC0 (+1); 79 functions */
typedef struct T_D_801E0A48_file026 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x4];
    /* 0x00C */ void *unkC; /* 1 use */
    /* 0x010 */ void *unk10; /* 1 use */
} T_D_801E0A48_file026;

/* D_801E0BB0, D_801E0CF8, D_801E1188 (+6); 14 functions */
typedef struct T_D_801E0BB0_file025 { /* size >= 0xC */
    /* 0x000 */ u32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 4 uses */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_801E0BB0_file025;

/* D_801E0BC0; 4 functions */
typedef struct T_D_801E0BC0_file025_elem { /* size 0x10 */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u8 unk2; /* 2 uses */
    /* 0x003 */ u8 unk3; /* 2 uses */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 unk5; /* 1 use */
    /* 0x006 */ u8 unk6; /* 1 use */
    /* 0x007 */ u8 unk7; /* 1 use */
    /* 0x008 */ u8 unk8; /* 1 use */
    /* 0x009 */ u8 unk9; /* 1 use */
    /* 0x00A */ u8 unkA; /* 1 use */
    /* 0x00B */ u8 unkB; /* 1 use */
    /* 0x00C */ u8 unkC; /* 1 use */
    /* 0x00D */ u8 unkD; /* 1 use */
    /* 0x00E */ u8 unkE; /* 1 use */
    /* 0x00F */ u8 unkF; /* 1 use */
} T_D_801E0BC0_file025_elem;

/* D_801E0CA0; 4 functions */
typedef struct T_D_801E0CA0 { /* size >= 0x14 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 unk3; /* 1 use */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 unk5; /* 1 use */
    /* 0x006 */ u8 unk6; /* 1 use */
    /* 0x007 */ u8 unk7; /* 1 use */
    /* 0x008 */ u8 unk8; /* 1 use */
    /* 0x009 */ u8 unk9; /* 1 use */
    /* 0x00A */ u8 unkA; /* 1 use */
    /* 0x00B */ u8 unkB; /* 1 use */
    /* 0x00C */ u8 unkC; /* 1 use */
    /* 0x00D */ u8 unkD; /* 1 use */
    /* 0x00E */ u8 unkE; /* 1 use */
    /* 0x00F */ u8 unkF; /* 1 use */
    /* 0x010 */ u8 unk10; /* 1 use */
    /* 0x011 */ u8 unk11; /* 1 use */
    /* 0x012 */ u8 pad12[0x1];
    /* 0x013 */ u8 unk13; /* 1 use */
} T_D_801E0CA0;

/* D_801E0D68, D_801E0D88, D_801E4070 (+17); 23 functions */
typedef struct T_D_801E0D68 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 13 uses */
    /* 0x004 */ u16 unk4; /* 7 uses */
    /* 0x006 */ u16 unk6; /* 5 uses */
    /* 0x008 */ struct T_D_801E0D68 *unk8; /* 6 uses */
    /* 0x00C */ u16 unkC; /* 5 uses */
    /* 0x00E */ u8 padE[0x2];
} T_D_801E0D68;

/* D_801E11A0; 3 functions */
typedef struct T_D_801E11A0_file025 { /* size >= 0xC */
    /* 0x000 */ f32 x; /* 2 uses */
    /* 0x004 */ s32 y; /* 1 use */
    /* 0x008 */ f32 z; /* 3 uses */
} T_D_801E11A0_file025;

/* D_801E11C0, D_801E11D0, D_801E12A0 (+5); 13 functions */
typedef struct T_D_801E11C0_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 4 uses */
    /* 0x008 */ s32 unk8; /* 4 uses */
} T_D_801E11C0_file025;

/* D_801E1238; 3 functions */
typedef struct T_D_801E1238_file025 { /* size >= 0xC */
    /* 0x000 */ s32 x; /* 2 uses */
    /* 0x004 */ s32 y; /* 2 uses */
    /* 0x008 */ s32 z; /* 2 uses */
} T_D_801E1238_file025;

/* D_801E5200; 14 functions */
typedef struct T_D_801E5200_file036 { /* size >= 0x1C */
    /* 0x000 */ f32 unk0; /* 14 uses */
    /* 0x004 */ f32 unk4; /* 14 uses */
    /* 0x008 */ f32 unk8; /* 14 uses */
    /* 0x00C */ f32 unkC; /* 14 uses */
    /* 0x010 */ f32 unk10; /* 2 uses */
    /* 0x014 */ f32 unk14; /* 14 uses */
    /* 0x018 */ f32 unk18; /* 14 uses */
} T_D_801E5200_file036;

/* D_80216B90; 23 functions */
typedef struct T_D_80216B90_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 24 uses */
    /* 0x004 */ s32 unk4; /* 23 uses */
    /* 0x008 */ s32 unk8; /* 23 uses */
} T_D_80216B90_file010;

/* D_8021B028; 16 functions */
typedef struct T_D_8021B028_file010 { /* size >= 0xC */
    /* 0x000 */ f32 x; /* 29 uses */
    /* 0x004 */ f32 y; /* 22 uses */
    /* 0x008 */ f32 z; /* 23 uses */
} T_D_8021B028_file010;

/* D_80240730; 10 functions */
typedef struct T_D_80240730_file011 { /* size >= 0x23 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ u8 unk14; /* 2 uses */
    /* 0x015 */ u8 unk15; /* 2 uses */
    /* 0x016 */ u8 unk16; /* 2 uses */
    /* 0x017 */ u8 unk17; /* 2 uses */
    /* 0x018 */ u8 unk18; /* 2 uses */
    /* 0x019 */ u8 unk19; /* 2 uses */
    /* 0x01A */ u8 unk1A; /* 2 uses */
    /* 0x01B */ u8 unk1B; /* 2 uses */
    /* 0x01C */ u8 unk1C; /* 2 uses */
    /* 0x01D */ u8 unk1D; /* 2 uses */
    /* 0x01E */ u8 unk1E; /* 2 uses */
    /* 0x01F */ u8 unk1F; /* 2 uses */
    /* 0x020 */ u8 unk20; /* 10 uses */
    /* 0x021 */ u8 unk21; /* 16 uses */
    /* 0x022 */ u8 unk22; /* 16 uses */
} T_D_80240730_file011;

/* D_80244430, D_8024443C, D_80244448 (+64); 62 functions */
typedef struct T_D_80253968_file015 { /* size >= 0xC */
    /* 0x000 */ struct T_func_8013C8F0_a0 *x; /* 3 uses */
    /* 0x004 */ struct T_D_801E4058_p0 *y; /* 3 uses */
    /* 0x008 */ void *z; /* 3 uses */
} T_D_80253968_file015;

/* D_8038DD68; 3 functions */
typedef struct T_D_8038DD68_file100 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x4];
    /* 0x00C */ s32 unkC; /* 3 uses */
    /* 0x010 */ s32 unk10; /* 4 uses */
} T_D_8038DD68_file100;

/* D_8038E158; 2 functions */
typedef struct T_D_8038E158_file100 { /* size >= 0x34 */
    /* 0x000 */ f32 unk0; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 2 uses */
    /* 0x010 */ f32 unk10; /* 2 uses */
    /* 0x014 */ f32 unk14; /* 2 uses */
    /* 0x018 */ s32 unk18; /* 2 uses; used signed x1, unsigned x1 */
    /* 0x01C */ u8 pad1C[0x2];
    /* 0x01E */ u16 unk1E; /* 2 uses; also s32@0x1C */
    /* 0x020 */ s32 unk20; /* 2 uses */
    /* 0x024 */ s32 unk24; /* 2 uses */
    /* 0x028 */ u32 unk28; /* 2 uses */
    /* 0x02C */ s32 unk2C; /* 5 uses; used signed x1, unsigned x1 */
    /* 0x030 */ s32 unk30; /* 6 uses */
} T_D_8038E158_file100;

/* pointed to by T_func_80005FAC_ret.0x2C; 10 functions */
typedef struct T_func_80005FAC_ret_p2C { /* size >= 0x50 */
    /* 0x000 */ s16 unk0; /* 9 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ f32 unk4; /* 9 uses */
    /* 0x008 */ f32 unk8; /* 9 uses */
    /* 0x00C */ f32 unkC; /* 9 uses */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 unk12; /* 9 uses */
    /* 0x014 */ s16 unk14; /* 1 use */
    /* 0x016 */ u8 pad16[0x2];
    /* 0x018 */ f32 unk18; /* 9 uses */
    /* 0x01C */ f32 unk1C; /* 9 uses */
    /* 0x020 */ f32 unk20; /* 9 uses */
    /* 0x024 */ s32 unk24; /* 17 uses */
    /* 0x028 */ s32 unk28; /* 9 uses */
    /* 0x02C */ s16 unk2C; /* 9 uses */
    /* 0x02E */ u8 pad2E[0x2];
    /* 0x030 */ s32 unk30; /* 3 uses */
    /* 0x034 */ u8 pad34[0x14];
    /* 0x048 */ u8 unk48; /* 1 use */
    /* 0x049 */ u8 unk49; /* 1 use */
    /* 0x04A */ u8 unk4A; /* 1 use */
    /* 0x04B */ u8 unk4B; /* 2 uses */
    /* 0x04C */ u8 unk4C; /* 1 use */
    /* 0x04D */ u8 unk4D; /* 1 use */
    /* 0x04E */ u8 unk4E; /* 1 use */
    /* 0x04F */ u8 unk4F; /* 1 use */
} T_func_80005FAC_ret_p2C;

/* pointed to by T_func_80107830_a0.0x38; 19 functions */
typedef struct T_func_80107830_a0_p38 { /* size >= 0x20 */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 9 uses */
    /* 0x004 */ u8 pad4[0x2];
    /* 0x006 */ s16 unk6; /* 7 uses */
    /* 0x008 */ s16 unk8; /* 7 uses */
    /* 0x00A */ s16 unkA; /* 7 uses */
    /* 0x00C */ s16 unkC; /* 2 uses */
    /* 0x00E */ u8 padE[0x2];
    /* 0x010 */ s32 unk10; /* 10 uses */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 4 uses */
    /* 0x01C */ u8 pad1C[0x2];
    /* 0x01E */ u16 unk1E; /* 3 uses */
} T_func_80107830_a0_p38;

/* pointed to by T_func_8010E680_a0.0x38; 4 functions */
typedef struct T_func_8010E680_a0_p38 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x6];
    /* 0x006 */ s16 unk6; /* 1 use */
    /* 0x008 */ s16 unk8; /* 1 use */
    /* 0x00A */ s16 unkA; /* 1 use */
    /* 0x00C */ u8 padC[0x4];
    /* 0x010 */ s32 unk10; /* 4 uses */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_func_8010E680_a0_p38;

/* pointed to by T_D_801BBBF0.0x1044, T_D_802170B0_file010.0x0; 93 functions */
typedef struct T_func_8012636C_a0 { /* size >= 0xB0 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_8012636C_a0_pC *unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ u8 pad1C[0x4];
    /* 0x020 */ s32 unk20; /* 1 use */
    /* 0x024 */ struct T_func_8012C9C0_ret *unk24; /* 88 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s32 unk2C; /* 33 uses */
    /* 0x030 */ s32 unk30; /* 30 uses */
    /* 0x034 */ u8 pad34[0x2];
    /* 0x036 */ u16 unk36; /* 22 uses */
    /* 0x038 */ struct T_func_8012636C_a0_p38 *unk38; /* 109 uses */
    /* 0x03C */ u8 pad3C[0x2];
    /* 0x03E */ u8 unk3E; /* 2 uses */
    /* 0x03F */ u8 unk3F; /* 2 uses */
    /* 0x040 */ f32 unk40; /* 15 uses */
    /* 0x044 */ f32 unk44; /* 31 uses */
    /* 0x048 */ f32 unk48; /* 15 uses */
    /* 0x04C */ u8 unk4C; /* 7 uses */
    /* 0x04D */ u8 unk4D; /* 9 uses */
    /* 0x04E */ u8 unk4E; /* 7 uses */
    /* 0x04F */ s8 unk4F; /* 13 uses */
    /* 0x050 */ s8 unk50; /* 11 uses */
    /* 0x051 */ u8 pad51[0x3];
    /* 0x054 */ s32 unk54; /* 1 use */
    /* 0x058 */ s32 unk58; /* 2 uses */
    /* 0x05C */ struct T_func_8012CE9C_a1 *obj; /* 34 uses */
    /* 0x060 */ u8 pad60[0x1];
    /* 0x061 */ u8 unk61; /* 2 uses */
    /* 0x062 */ u8 pad62[0x1];
    /* 0x063 */ u8 unk63; /* 2 uses */
    /* 0x064 */ struct T_func_8010E680_a0 *unk64; /* 3 uses */
    /* 0x068 */ u8 pad68[0x8];
    /* 0x070 */ u16 unk70; /* 2 uses */
    /* 0x072 */ u8 pad72[0x2];
    /* 0x074 */ struct T_func_801395E4_a1_elem *unk74; /* 11 uses */
    /* 0x078 */ f32 unk78; /* 7 uses */
    /* 0x07C */ f32 unk7C; /* 7 uses */
    /* 0x080 */ f32 unk80; /* 7 uses */
    /* 0x084 */ s16 unk84; /* 7 uses */
    /* 0x086 */ s16 unk86; /* 7 uses */
    /* 0x088 */ s16 unk88; /* 7 uses */
    /* 0x08A */ u8 pad8A[0x2];
    /* 0x08C */ s32 unk8C; /* 1 use */
    /* 0x090 */ void *unk90; /* 3 uses */
    /* 0x094 */ f32 unk94; /* 3 uses */
    /* 0x098 */ f32 unk98; /* 3 uses */
    /* 0x09C */ f32 unk9C; /* 1 use */
    /* 0x0A0 */ s32 unkA0; /* 1 use */
    /* 0x0A4 */ u8 padA4[0xB];
    /* 0x0AF */ u8 unkAF; /* 1 use */
} T_func_8012636C_a0;

/* pointed to by T_func_8012636C_a0.0x38; 12 functions */
typedef struct T_func_8012636C_a0_p38 { /* size >= 0x1C */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 1 use */
    /* 0x004 */ u8 pad4[0x2];
    /* 0x006 */ s16 unk6; /* 2 uses */
    /* 0x008 */ s16 unk8; /* 2 uses */
    /* 0x00A */ s16 unkA; /* 2 uses */
    /* 0x00C */ s16 unkC; /* 2 uses */
    /* 0x00E */ u8 padE[0x2];
    /* 0x010 */ s32 unk10; /* 64 uses */
    /* 0x014 */ s32 unk14; /* 31 uses */
    /* 0x018 */ s32 unk18; /* 11 uses */
} T_func_8012636C_a0_p38;

/* parameter file008:func_80129C20:0, file008:func_8012D064:0; 62 functions */
typedef struct T_func_80129C20_a0 { /* size >= 0xB0 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_80129C20_a0_pC *unkC; /* 9 uses */
    /* 0x010 */ u8 pad10[0x14];
    /* 0x024 */ struct T_func_80129C20_a0_p24 *entry; /* 5 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ u8 pad30[0x8];
    /* 0x038 */ struct T_func_80129C20_a0_p38 *unk38; /* 4 uses */
    /* 0x03C */ u16 unk3C; /* 6 uses */
    /* 0x03E */ u8 pad3E[0x16];
    /* 0x054 */ f32 unk54; /* 1 use */
    /* 0x058 */ f32 unk58; /* 1 use */
    /* 0x05C */ f32 unk5C; /* 1 use */
    /* 0x060 */ f32 unk60; /* 5 uses */
    /* 0x064 */ f32 unk64; /* 1 use */
    /* 0x068 */ f32 unk68; /* 1 use */
    /* 0x06C */ f32 unk6C; /* 5 uses */
    /* 0x070 */ f32 unk70; /* 5 uses */
    /* 0x074 */ f32 unk74; /* 5 uses */
    /* 0x078 */ u8 unk78; /* 3 uses */
    /* 0x079 */ u8 unk79; /* 3 uses */
    /* 0x07A */ u8 unk7A; /* 3 uses */
    /* 0x07B */ u8 unk7B; /* 1 use */
    /* 0x07C */ u8 pad7C[0x4];
    /* 0x080 */ u8 unk80; /* 1 use */
    /* 0x081 */ u8 unk81; /* 1 use */
    /* 0x082 */ u8 unk82; /* 1 use */
    /* 0x083 */ u8 unk83; /* 1 use */
    /* 0x084 */ u8 pad84[0x4];
    /* 0x088 */ f32 unk88; /* 6 uses */
    /* 0x08C */ u8 pad8C[0x4];
    /* 0x090 */ u8 unk90; /* 47 uses */
    /* 0x091 */ u8 unk91; /* 1 use */
    /* 0x092 */ s16 unk92; /* 5 uses */
    /* 0x094 */ u8 count; /* 80 uses */
    /* 0x095 */ u8 unk95; /* 1 use */
    /* 0x096 */ u8 unk96; /* 2 uses */
    /* 0x097 */ u8 index; /* 5 uses */
    /* 0x098 */ f32 unk98; /* 1 use */
    /* 0x09C */ f32 unk9C; /* 2 uses */
    /* 0x0A0 */ f32 unkA0; /* 1 use */
    /* 0x0A4 */ f32 unkA4; /* 3 uses */
    /* 0x0A8 */ u8 unkA8; /* 1 use */
    /* 0x0A9 */ u8 unkA9; /* 1 use */
    /* 0x0AA */ u8 unkAA; /* 1 use */
    /* 0x0AB */ u8 unkAB; /* 1 use */
    /* 0x0AC */ u8 unkAC; /* 1 use */
    /* 0x0AD */ u8 unkAD; /* 1 use */
    /* 0x0AE */ u8 unkAE; /* 1 use */
    /* 0x0AF */ u8 padAF[0x1];
} T_func_80129C20_a0;

/* pointed to by T_func_80129C20_a0.0x24; 4 functions */
typedef struct T_func_80129C20_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ struct T_func_80129C20_a0_p24_p30 *unk30; /* 3 uses */
} T_func_80129C20_a0_p24;

/* pointed to by T_func_80129C20_a0_p24.0x30; 2 functions */
typedef struct T_func_80129C20_a0_p24_p30 { /* size >= 0x44 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ u8 pad8[0x4];
    /* 0x00C */ f32 unkC; /* 2 uses */
    /* 0x010 */ u8 pad10[0x30];
    /* 0x040 */ s32 unk40; /* 1 use */
} T_func_80129C20_a0_p24_p30;

/* parameter file008:func_8012A564:0, file010:func_801F3F70:0; 45 functions */
typedef struct T_func_8012A564_a0 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_8012A564_a0_p24 *unk24; /* 48 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s32 unk2C; /* 61 uses */
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ u8 pad34[0x4];
    /* 0x038 */ struct T_func_8012A564_a0_p38 *unk38; /* 1 use */
    /* 0x03C */ u8 pad3C[0x2];
    /* 0x03E */ u8 unk3E; /* 3 uses */
    /* 0x03F */ u8 pad3F[0x1];
    /* 0x040 */ f32 unk40; /* 2 uses */
    /* 0x044 */ f32 unk44; /* 7 uses */
    /* 0x048 */ f32 unk48; /* 2 uses */
    /* 0x04C */ u8 pad4C[0x8];
    /* 0x054 */ s32 unk54; /* 1 use */
    /* 0x058 */ u8 pad58[0x4];
    /* 0x05C */ struct T_func_8012CE9C_a1 *unk5C; /* 28 uses */
    /* 0x060 */ u8 pad60[0x10];
    /* 0x070 */ u16 unk70; /* 1 use */
    /* 0x072 */ u8 pad72[0x1E];
    /* 0x090 */ s16 unk90; /* 6 uses */
    /* 0x092 */ s16 unk92; /* 8 uses */
    /* 0x094 */ f32 unk94; /* 4 uses */
    /* 0x098 */ u8 pad98[0xA];
    /* 0x0A2 */ u16 unkA2; /* 3 uses */
    /* 0x0A4 */ u8 padA4[0xA];
    /* 0x0AE */ u8 unkAE; /* 13 uses */
    /* 0x0AF */ u8 unkAF; /* 5 uses */
    /* 0x0B0 */ s32 unkB0; /* 1 use */
} T_func_8012A564_a0;

/* pointed to by T_func_8012A564_a0.0x24; 22 functions */
typedef struct T_func_8012A564_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 2 uses */
    /* 0x023 */ u8 pad23[0x9];
    /* 0x02C */ struct T_func_8012A564_a0_p24_p2C *unk2C; /* 36 uses */
    /* 0x030 */ struct T_func_8012A564_a0_p24_p30 *unk30; /* 9 uses */
} T_func_8012A564_a0_p24;

/* pointed to by T_func_8012A564_a0_p24.0x2C; 21 functions */
typedef struct T_func_8012A564_a0_p24_p2C { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 x; /* 17 uses */
    /* 0x008 */ f32 y; /* 19 uses */
    /* 0x00C */ f32 z; /* 17 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 10 uses */
} T_func_8012A564_a0_p24_p2C;

/* pointed to by T_func_8012A564_a0_p24.0x30; 2 functions */
typedef struct T_func_8012A564_a0_p24_p30 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 x; /* 7 uses */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 y; /* 7 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 1 use */
} T_func_8012A564_a0_p24_p30;

/* parameter file008:func_8012A630:0, file008:func_8012A774:0; 21 functions */
typedef struct T_func_8012A630_a0 { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_8012A630_a0_p24 *link; /* 35 uses */
    /* 0x028 */ u8 pad28[0x10];
    /* 0x038 */ struct T_func_8012A630_a0_p38 *unk38; /* 43 uses */
    /* 0x03C */ u8 pad3C[0x20];
    /* 0x05C */ struct T_func_8012CE9C_a1 *unk5C; /* 7 uses */
    /* 0x060 */ u8 pad60[0x30];
    /* 0x090 */ s16 unk90; /* 4 uses; loaded both signed (lh x2) and unsigned (lhu x1) */
    /* 0x092 */ s16 unk92; /* 3 uses */
} T_func_8012A630_a0;

/* pointed to by T_func_8012A630_a0.0x24; 9 functions */
typedef struct T_func_8012A630_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8012A630_a0_p24_p2C *unk2C; /* 9 uses */
    /* 0x030 */ struct T_func_8012A630_a0_p24_p30 *pos; /* 27 uses */
} T_func_8012A630_a0_p24;

/* pointed to by T_func_8012A630_a0_p24.0x2C; 5 functions */
typedef struct T_func_8012A630_a0_p24_p2C { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 6 uses */
    /* 0x008 */ f32 unk8; /* 4 uses */
    /* 0x00C */ f32 unkC; /* 6 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 6 uses */
} T_func_8012A630_a0_p24_p2C;

/* pointed to by T_func_8012A630_a0.0x38; 15 functions */
typedef struct T_func_8012A630_a0_p38 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ u8 padE[0x2];
    /* 0x010 */ s32 unk10; /* 27 uses */
    /* 0x014 */ s32 unk14; /* 15 uses */
} T_func_8012A630_a0_p38;

/* pointed to by T_D_8025C6F4_file018.0x0; 3 functions */
typedef struct T_func_8012C228_a0 { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_8012C228_a0_p24 *unk24; /* 2 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ u8 pad30[0x44];
    /* 0x074 */ struct T_func_801395E4_a1_elem *unk74; /* 1 use */
    /* 0x078 */ f32 unk78; /* 1 use */
    /* 0x07C */ f32 unk7C; /* 1 use */
    /* 0x080 */ f32 unk80; /* 1 use */
    /* 0x084 */ s16 unk84; /* 1 use */
    /* 0x086 */ s16 unk86; /* 1 use */
    /* 0x088 */ s16 unk88; /* 1 use */
    /* 0x08A */ u8 pad8A[0x6];
    /* 0x090 */ s16 unk90; /* 1 use */
    /* 0x092 */ u8 pad92[0x2];
} T_func_8012C228_a0;

/* pointed to by T_func_8012C228_a0.0x24; 2 functions */
typedef struct T_func_8012C228_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_8012C228_a0_p24_p30 *unk30; /* 7 uses */
} T_func_8012C228_a0_p24;

/* pointed to by T_func_8012C228_a0_p24.0x30; 2 functions */
typedef struct T_func_8012C228_a0_p24_p30 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 2 uses */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 unk12; /* 1 use */
    /* 0x014 */ s16 unk14; /* 1 use */
    /* 0x016 */ u8 pad16[0x2];
} T_func_8012C228_a0_p24_p30;

/* pointed to by T_func_8012636C_a0.0x24; 23 functions */
typedef struct T_func_8012C9C0_ret { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0x9];
    /* 0x02C */ struct T_func_8012C9C0_ret_p2C *unk2C; /* 49 uses */
    /* 0x030 */ struct T_func_8012C9C0_ret_p30 *unk30; /* 40 uses */
} T_func_8012C9C0_ret;

/* pointed to by T_func_8012C9C0_ret.0x2C; 12 functions */
typedef struct T_func_8012C9C0_ret_p2C { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 15 uses */
    /* 0x008 */ f32 unk8; /* 16 uses */
    /* 0x00C */ f32 unkC; /* 15 uses */
    /* 0x010 */ s16 unk10; /* 3 uses */
    /* 0x012 */ s16 unk12; /* 8 uses */
} T_func_8012C9C0_ret_p2C;

/* pointed to by T_func_8012C9C0_ret.0x30; 8 functions */
typedef struct T_func_8012C9C0_ret_p30 { /* size >= 0x2C */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ f32 unk4; /* 11 uses */
    /* 0x008 */ f32 unk8; /* 11 uses */
    /* 0x00C */ f32 unkC; /* 11 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 7 uses */
    /* 0x014 */ u8 pad14[0x14];
    /* 0x028 */ void *unk28; /* 1 use */
} T_func_8012C9C0_ret_p30;

/* parameter file008:func_8012D40C:0, file008:func_8012D7A8:0; 49 functions */
typedef struct T_func_8012D40C_a0 { /* size >= 0x98 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_8012D40C_a0_pC *config; /* 62 uses */
    /* 0x010 */ u8 pad10[0x14];
    /* 0x024 */ struct T_func_801451C0_a0 *unk24; /* 2 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s32 unk2C; /* 1 use */
    /* 0x030 */ s32 unk30; /* 6 uses */
    /* 0x034 */ u8 pad34[0x18];
    /* 0x04C */ u16 unk4C; /* 2 uses */
    /* 0x04E */ u16 unk4E; /* 2 uses */
    /* 0x050 */ u8 pad50[0x4];
    /* 0x054 */ f32 unk54; /* 3 uses */
    /* 0x058 */ f32 unk58; /* 3 uses */
    /* 0x05C */ f32 unk5C; /* 3 uses */
    /* 0x060 */ f32 value; /* 17 uses */
    /* 0x064 */ u8 pad64[0x8];
    /* 0x06C */ f32 unk6C; /* 11 uses */
    /* 0x070 */ f32 unk70; /* 3 uses */
    /* 0x074 */ f32 unk74; /* 11 uses */
    /* 0x078 */ u8 unk78; /* 8 uses */
    /* 0x079 */ u8 unk79; /* 8 uses */
    /* 0x07A */ u8 unk7A; /* 8 uses */
    /* 0x07B */ u8 unk7B; /* 6 uses */
    /* 0x07C */ u8 unk7C; /* 4 uses */
    /* 0x07D */ u8 unk7D; /* 4 uses */
    /* 0x07E */ u8 unk7E; /* 4 uses */
    /* 0x07F */ u8 unk7F; /* 4 uses */
    /* 0x080 */ u8 unk80; /* 2 uses */
    /* 0x081 */ u8 unk81; /* 2 uses */
    /* 0x082 */ u8 unk82; /* 2 uses */
    /* 0x083 */ u8 unk83; /* 2 uses */
    /* 0x084 */ u8 unk84; /* 2 uses */
    /* 0x085 */ u8 unk85; /* 2 uses */
    /* 0x086 */ u8 unk86; /* 2 uses */
    /* 0x087 */ u8 unk87; /* 2 uses */
    /* 0x088 */ f32 unk88; /* 1 use */
    /* 0x08C */ u8 pad8C[0x4];
    /* 0x090 */ u16 unk90; /* 53 uses */
    /* 0x092 */ u16 timer; /* 140 uses */
    /* 0x094 */ u8 count; /* 91 uses */
    /* 0x095 */ u8 pad95[0x2];
    /* 0x097 */ u8 unk97; /* 1 use */
} T_func_8012D40C_a0;

/* pointed to by T_func_8012D40C_a0.0xC; 40 functions */
typedef struct T_func_8012D40C_a0_pC { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_8012D40C_a0_pC_pC *unkC; /* 8 uses */
    /* 0x010 */ u8 pad10[0x1C];
    /* 0x02C */ u16 unk2C; /* 1 use */
    /* 0x02E */ u8 pad2E[0x10];
    /* 0x03E */ u16 unk3E; /* 2 uses */
    /* 0x040 */ u8 pad40[0xC];
    /* 0x04C */ u16 flags; /* 42 uses */
    /* 0x04E */ u8 pad4E[0x1E];
    /* 0x06C */ f32 unk6C; /* 4 uses */
    /* 0x070 */ f32 unk70; /* 4 uses */
    /* 0x074 */ f32 unk74; /* 4 uses */
    /* 0x078 */ u8 pad78[0x4];
    /* 0x07C */ u8 unk7C; /* 1 use */
    /* 0x07D */ u8 unk7D; /* 3 uses */
    /* 0x07E */ u8 pad7E[0x12];
    /* 0x090 */ struct T_func_80107830_a0 *unk90; /* 1 use */
} T_func_8012D40C_a0_pC;

/* pointed to by T_func_8012E25C_a1.0x0; 2 functions */
typedef struct T_func_8012E25C_a1_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_80223DD0_a0 *unk2C; /* 2 uses */
} T_func_8012E25C_a1_p0;

/* pointed to by T_D_801BBCD8_p0.0x2C; 103 functions */
typedef struct T_func_80130CBC_a0 { /* size >= 0x54 */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ s16 scale; /* 1 use */
    /* 0x00A */ s16 unkA; /* 1 use */
    /* 0x00C */ u8 padC[0x4];
    /* 0x010 */ s16 offset; /* 1 use */
    /* 0x012 */ s16 angle; /* 1 use */
    /* 0x014 */ u8 pad14[0x8];
    /* 0x01C */ f32 unk1C; /* 11 uses */
    /* 0x020 */ u8 pad20[0x10];
    /* 0x030 */ f32 x; /* 105 uses */
    /* 0x034 */ f32 y; /* 83 uses */
    /* 0x038 */ f32 z; /* 110 uses */
    /* 0x03C */ f32 unk3C; /* 90 uses */
    /* 0x040 */ f32 unk40; /* 70 uses */
    /* 0x044 */ f32 unk44; /* 89 uses */
    /* 0x048 */ f32 unk48; /* 2 uses */
    /* 0x04C */ f32 unk4C; /* 2 uses */
    /* 0x050 */ f32 unk50; /* 2 uses */
} T_func_80130CBC_a0;

/* pointed to by T_func_80234724_a0.0x98, T_D_80253968_file015.0x0; 71 functions */
typedef struct T_func_8013C8F0_a0 { /* size >= 0x390 */
    /* 0x000 */ s16 unk0; /* 13 uses */
    /* 0x002 */ s16 unk2; /* 13 uses */
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ s16 unk6; /* 7 uses */
    /* 0x008 */ u8 pad8[0x2];
    /* 0x00A */ s16 unkA; /* 4 uses */
    /* 0x00C */ u8 padC[0x25];
    /* 0x031 */ u8 unk31; /* 7 uses; also s32@0x30, u16@0x30 */
    /* 0x032 */ u8 pad32[0x1];
    /* 0x033 */ u8 unk33; /* 4 uses; loaded both signed (lb x2) and unsigned (lbu x2); also s32@0x30 */
    /* 0x034 */ u8 pad34[0x4];
    /* 0x038 */ s32 unk38; /* 38 uses */
    /* 0x03C */ u8 pad3C[0x8];
    /* 0x044 */ s16 timer; /* 4 uses */
    /* 0x046 */ u8 pad46[0x40];
    /* 0x086 */ u16 unk86; /* 1 use */
    /* 0x088 */ u16 unk88; /* 1 use */
    /* 0x08A */ u16 unk8A; /* 1 use */
    /* 0x08C */ u16 unk8C; /* 1 use */
    /* 0x08E */ u8 pad8E[0x10];
    /* 0x09E */ u16 unk9E; /* 2 uses */
    /* 0x0A0 */ u16 unkA0; /* 2 uses */
    /* 0x0A2 */ u8 padA2[0x4];
    /* 0x0A6 */ u8 unkA6; /* 6 uses */
    /* 0x0A7 */ u8 padA7[0x215];
    /* 0x2BC */ s16 unk2BC; /* 4 uses */
    /* 0x2BE */ s16 unk2BE; /* 4 uses */
    /* 0x2C0 */ s16 unk2C0; /* 6 uses */
    /* 0x2C2 */ s16 unk2C2; /* 4 uses */
    /* 0x2C4 */ u8 pad2C4[0x10];
    /* 0x2D4 */ struct T_func_8013C8F0_a0_p2D4 *unk2D4; /* 4 uses */
    /* 0x2D8 */ u8 unk2D8; /* 259 uses */
    /* 0x2D9 */ u8 unk2D9; /* 181 uses */
    /* 0x2DA */ u8 pad2DA[0x22];
    /* 0x2FC */ u8 unk2FC; /* 1 use */
    /* 0x2FD */ u8 pad2FD[0x37];
    /* 0x334 */ struct T_func_8013C8F0_a0_p334 *unk334; /* 25 uses */
    /* 0x338 */ u8 pad338[0x3D];
    /* 0x375 */ u8 unk375; /* 6 uses */
    /* 0x376 */ u8 unk376; /* 14 uses */
    /* 0x377 */ u8 unk377; /* 1 use */
    /* 0x378 */ u8 unk378; /* 1 use */
    /* 0x379 */ u8 pad379[0x4];
    /* 0x37D */ u8 unk37D; /* 1 use */
    /* 0x37E */ u8 pad37E[0x2];
    /* 0x380 */ u8 *unk380; /* 13 uses */
    /* 0x384 */ u8 pad384[0x1];
    /* 0x385 */ u8 unk385; /* 2 uses */
    /* 0x386 */ u8 unk386; /* 3 uses */
    /* 0x387 */ u8 unk387; /* 2 uses */
    /* 0x388 */ u8 unk388; /* 2 uses */
    /* 0x389 */ u8 unk389; /* 3 uses */
    /* 0x38A */ u8 unk38A; /* 2 uses */
    /* 0x38B */ u8 unk38B; /* 2 uses */
    /* 0x38C */ u8 unk38C; /* 3 uses */
    /* 0x38D */ u8 unk38D; /* 2 uses */
    /* 0x38E */ u8 unk38E; /* 1 use */
    /* 0x38F */ u8 unk38F; /* 1 use */
} T_func_8013C8F0_a0;

/* pointed to by T_func_801451C0_a0.0x30; 68 functions */
typedef struct T_func_80146BE0_ret { /* size >= 0x50 */
    /* 0x000 */ s16 unk0; /* 19 uses */
    /* 0x002 */ s16 unk2; /* 11 uses */
    /* 0x004 */ s16 unk4; /* 9 uses */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ u8 unk8; /* 9 uses */
    /* 0x009 */ u8 unk9; /* 9 uses */
    /* 0x00A */ u8 unkA; /* 7 uses */
    /* 0x00B */ u8 value; /* 17 uses */
    /* 0x00C */ u8 unkC; /* 15 uses */
    /* 0x00D */ u8 unkD; /* 11 uses */
    /* 0x00E */ u8 unkE; /* 12 uses */
    /* 0x00F */ u8 unkF; /* 1 use */
    /* 0x010 */ s16 unk10; /* 5 uses */
    /* 0x012 */ s16 unk12; /* 3 uses */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ f32 unk18; /* 29 uses */
    /* 0x01C */ f32 unk1C; /* 30 uses */
    /* 0x020 */ f32 unk20; /* 48 uses */
    /* 0x024 */ s32 unk24; /* 83 uses */
    /* 0x028 */ u8 pad28[0x8];
    /* 0x030 */ void *unk30; /* 51 uses */
    /* 0x034 */ f32 unk34; /* 1 use */
    /* 0x038 */ u8 pad38[0x10];
    /* 0x048 */ u8 unk48; /* 19 uses */
    /* 0x049 */ u8 unk49; /* 19 uses */
    /* 0x04A */ u8 unk4A; /* 19 uses */
    /* 0x04B */ u8 unk4B; /* 22 uses */
    /* 0x04C */ u8 unk4C; /* 42 uses */
    /* 0x04D */ u8 unk4D; /* 42 uses */
    /* 0x04E */ u8 unk4E; /* 42 uses */
    /* 0x04F */ u8 unk4F; /* 34 uses */
} T_func_80146BE0_ret;

/* pointed to by T_func_80147148_a0.0x2C; 456 functions */
typedef struct T_func_80147148_a0_p2C { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 474 uses */
    /* 0x008 */ f32 unk8; /* 456 uses */
    /* 0x00C */ f32 unkC; /* 479 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 335 uses */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ f32 unk18; /* 2 uses */
    /* 0x01C */ f32 unk1C; /* 2 uses */
    /* 0x020 */ f32 unk20; /* 2 uses */
    /* 0x024 */ u8 pad24[0x10];
    /* 0x034 */ s32 unk34; /* 1 use */
    /* 0x038 */ u8 pad38[0x13];
    /* 0x04B */ u8 unk4B; /* 4 uses */
} T_func_80147148_a0_p2C;

/* pointed to by T_func_80147148_a0.0x30; 7 functions */
typedef struct T_func_80147148_a0_p30 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 18 uses */
    /* 0x008 */ f32 unk8; /* 13 uses */
    /* 0x00C */ f32 unkC; /* 18 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 26 uses */
} T_func_80147148_a0_p30;

/* pointed to by T_D_80089378.0x2C; 4 functions */
typedef struct T_func_80147250_ret { /* size >= 0x50 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 7 uses */
    /* 0x008 */ f32 unk8; /* 6 uses */
    /* 0x00C */ f32 unkC; /* 6 uses */
    /* 0x010 */ s16 unk10; /* 2 uses */
    /* 0x012 */ s16 unk12; /* 2 uses */
    /* 0x014 */ s16 unk14; /* 2 uses */
    /* 0x016 */ u8 pad16[0x1A];
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ u8 pad34[0x14];
    /* 0x048 */ u8 unk48; /* 1 use */
    /* 0x049 */ u8 unk49; /* 1 use */
    /* 0x04A */ u8 unk4A; /* 1 use */
    /* 0x04B */ u8 unk4B; /* 1 use */
    /* 0x04C */ u8 unk4C; /* 1 use */
    /* 0x04D */ u8 unk4D; /* 1 use */
    /* 0x04E */ u8 unk4E; /* 1 use */
    /* 0x04F */ u8 unk4F; /* 1 use */
} T_func_80147250_ret;

/* pointed to by T_func_8010E680_a0.0xC, T_func_80107830_a0.0xC; 26 functions */
typedef struct T_func_80147370_a0 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_801451C0_a0 *unk24; /* 17 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ u16 unk2C; /* 2 uses */
    /* 0x02E */ u8 pad2E[0x1E];
    /* 0x04C */ u16 unk4C; /* 2 uses */
    /* 0x04E */ u8 pad4E[0xE];
    /* 0x05C */ struct T_func_8012CE9C_a1 *unk5C; /* 7 uses */
    /* 0x060 */ u8 pad60[0x3];
    /* 0x063 */ u8 unk63; /* 1 use */
    /* 0x064 */ u8 pad64[0x8];
    /* 0x06C */ u8 unk6C; /* 1 use */
    /* 0x06D */ u8 pad6D[0x27];
    /* 0x094 */ struct T_D_801BC03C *unk94; /* 1 use */
    /* 0x098 */ u8 pad98[0xC];
    /* 0x0A4 */ s16 unkA4; /* 2 uses */
    /* 0x0A6 */ u8 padA6[0x2];
    /* 0x0A8 */ struct T_func_801FA410_a0 *unkA8; /* 3 uses */
    /* 0x0AC */ u8 padAC[0x1];
    /* 0x0AD */ u8 unkAD; /* 2 uses */
    /* 0x0AE */ u8 unkAE; /* 1 use */
    /* 0x0AF */ u8 unkAF; /* 1 use */
    /* 0x0B0 */ u8 padB0[0x3];
    /* 0x0B3 */ u8 unkB3; /* 3 uses */
} T_func_80147370_a0;

/* pointed to by T_func_803758FC_a0.0x2C; 7 functions */
typedef struct T_func_80147828_a0 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_80147828_a0_p24 *unk24; /* 3 uses */
    /* 0x028 */ u8 pad28[0xE];
    /* 0x036 */ u16 unk36; /* 1 use */
    /* 0x038 */ struct T_func_80147828_a0_p38 *unk38; /* 1 use */
    /* 0x03C */ u8 pad3C[0x20];
    /* 0x05C */ struct T_func_80375560_ret *unk5C; /* 5 uses */
    /* 0x060 */ u8 pad60[0x4E];
    /* 0x0AE */ u8 unkAE; /* 2 uses */
    /* 0x0AF */ u8 padAF[0x1];
    /* 0x0B0 */ s32 unkB0; /* 3 uses */
} T_func_80147828_a0;

/* pointed to by T_func_80149580_a1.0x24; 10 functions */
typedef struct T_func_80149580_a1_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 10 uses */
    /* 0x023 */ u8 pad23[0xD];
    /* 0x030 */ struct T_func_80149580_a1_p24_p30 *pos; /* 28 uses */
} T_func_80149580_a1_p24;

/* pointed to by T_func_80149580_a1_p24.0x30; 5 functions */
typedef struct T_func_80149580_a1_p24_p30 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 10 uses */
    /* 0x008 */ f32 y; /* 8 uses */
    /* 0x00C */ f32 unkC; /* 10 uses */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 unk12; /* 9 uses */
    /* 0x014 */ s16 unk14; /* 1 use */
    /* 0x016 */ u8 pad16[0x2];
} T_func_80149580_a1_p24_p30;

/* pointed to by T_func_80149580_a1.0x38; 3 functions */
typedef struct T_func_80149580_a1_p38 { /* size >= 0x1C */
    /* 0x000 */ u8 pad0[0x6];
    /* 0x006 */ s16 x; /* 3 uses */
    /* 0x008 */ s16 y; /* 3 uses */
    /* 0x00A */ s16 z; /* 3 uses */
    /* 0x00C */ u8 padC[0x4];
    /* 0x010 */ s32 unk10; /* 4 uses */
    /* 0x014 */ s32 unk14; /* 3 uses */
    /* 0x018 */ s32 unk18; /* 2 uses */
} T_func_80149580_a1_p38;

/* parameter file008:func_8015180C:1, file016:func_80243204:0; 2 functions */
typedef struct T_func_8015180C_a1 { /* size >= 0xAC */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ u8 pad30[0xC];
    /* 0x03C */ s16 unk3C; /* 1 use */
    /* 0x03E */ u8 pad3E[0x2];
    /* 0x040 */ f32 unk40; /* 1 use */
    /* 0x044 */ f32 unk44; /* 1 use */
    /* 0x048 */ f32 unk48; /* 1 use */
    /* 0x04C */ u8 pad4C[0x26];
    /* 0x072 */ u16 unk72; /* 1 use */
    /* 0x074 */ struct T_func_801395E4_a1_elem *unk74; /* 1 use */
    /* 0x078 */ f32 unk78; /* 1 use */
    /* 0x07C */ f32 unk7C; /* 1 use */
    /* 0x080 */ f32 unk80; /* 1 use */
    /* 0x084 */ s16 unk84; /* 1 use */
    /* 0x086 */ s16 unk86; /* 1 use */
    /* 0x088 */ s16 unk88; /* 1 use */
    /* 0x08A */ u8 pad8A[0x6];
    /* 0x090 */ u8 unk90; /* 1 use */
    /* 0x091 */ u8 pad91[0x1];
    /* 0x092 */ s16 unk92; /* 1 use */
    /* 0x094 */ f32 unk94; /* 1 use */
    /* 0x098 */ f32 unk98; /* 1 use */
    /* 0x09C */ f32 unk9C; /* 1 use */
    /* 0x0A0 */ s16 unkA0; /* 1 use */
    /* 0x0A2 */ u16 unkA2; /* 2 uses */
    /* 0x0A4 */ s16 unkA4; /* 1 use */
    /* 0x0A6 */ u8 padA6[0x2];
    /* 0x0A8 */ struct T_func_80107830_a0 *unkA8; /* 1 use */
} T_func_8015180C_a1;

/* element of file025:func_801BF6B0, file026:func_801E34F0:801E3518; 987 functions */
typedef struct T_func_801BF6B0_ret_elem_2 { /* size 0x18 */
    /* 0x000 */ void *unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x4];
    /* 0x008 */ void *unk8; /* 7 uses */
    /* 0x00C */ s32 unkC; /* 987 uses; also s16@0xC */
    /* 0x010 */ s32 unk10; /* 6 uses */
    /* 0x014 */ u8 pad14[0x4];
} T_func_801BF6B0_ret_elem_2;

/* parameter file009:func_801C3C60:0, file015:func_80249A84:0; 3 functions */
typedef struct T_func_801C3C60_a0 { /* size >= 0xA0 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_801C3C60_a0_p24 *unk24; /* 3 uses */
    /* 0x028 */ u8 pad28[0x34];
    /* 0x05C */ struct T_func_8012CE9C_a1 *unk5C; /* 2 uses */
    /* 0x060 */ u8 pad60[0x3C];
    /* 0x09C */ u16 unk9C; /* 3 uses */
    /* 0x09E */ u8 pad9E[0x2];
} T_func_801C3C60_a0;

/* parameter file009:func_801CC260:0, file009:func_801CCFEC:0; 8 functions */
typedef struct T_func_801CC260_a0 { /* size >= 0x8C */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_80107830_a0 *unkC; /* 5 uses */
    /* 0x010 */ u8 pad10[0x2E];
    /* 0x03E */ s16 unk3E; /* 1 use */
    /* 0x040 */ u8 pad40[0xC];
    /* 0x04C */ s16 unk4C; /* 1 use */
    /* 0x04E */ u16 unk4E; /* 3 uses */
    /* 0x050 */ u8 pad50[0x1C];
    /* 0x06C */ f32 unk6C; /* 9 uses */
    /* 0x070 */ f32 unk70; /* 9 uses */
    /* 0x074 */ f32 unk74; /* 9 uses */
    /* 0x078 */ u8 unk78; /* 1 use */
    /* 0x079 */ u8 pad79[0x1];
    /* 0x07A */ u8 unk7A; /* 4 uses */
    /* 0x07B */ u8 pad7B[0x1];
    /* 0x07C */ f32 unk7C; /* 1 use */
    /* 0x080 */ f32 unk80; /* 1 use */
    /* 0x084 */ f32 unk84; /* 1 use */
    /* 0x088 */ s16 unk88; /* 1 use */
    /* 0x08A */ u8 pad8A[0x2];
} T_func_801CC260_a0;

/* anonymous; 2 functions */
typedef struct T_func_801CE1C8_ret { /* size >= 0x9C */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 1 use */
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ u8 pad34[0x18];
    /* 0x04C */ s16 unk4C; /* 1 use */
    /* 0x04E */ s16 unk4E; /* 1 use */
    /* 0x050 */ u8 pad50[0x10];
    /* 0x060 */ f32 unk60; /* 1 use */
    /* 0x064 */ f32 unk64; /* 1 use */
    /* 0x068 */ f32 unk68; /* 1 use */
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
    /* 0x088 */ f32 unk88; /* 1 use */
    /* 0x08C */ s32 unk8C; /* 1 use */
    /* 0x090 */ s16 unk90; /* 1 use */
    /* 0x092 */ s16 unk92; /* 1 use */
    /* 0x094 */ u8 unk94; /* 1 use */
    /* 0x095 */ u8 unk95; /* 1 use */
    /* 0x096 */ u8 unk96; /* 1 use */
    /* 0x097 */ u8 unk97; /* 1 use */
    /* 0x098 */ s16 unk98; /* 2 uses */
    /* 0x09A */ u8 pad9A[0x2];
} T_func_801CE1C8_ret;

/* parameter file009:func_801DBE94:0, file010:func_801F4284:0; 8 functions */
typedef struct T_func_801DBE94_a0 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_801DBE94_a0_p24 *unk24; /* 1 use */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ u8 pad30[0x8];
    /* 0x038 */ struct T_func_801F4284_ret *unk38; /* 13 uses */
    /* 0x03C */ s16 unk3C; /* 3 uses */
    /* 0x03E */ u8 pad3E[0xE];
    /* 0x04C */ u8 unk4C; /* 1 use */
    /* 0x04D */ u8 unk4D; /* 1 use */
    /* 0x04E */ u8 unk4E; /* 1 use */
    /* 0x04F */ u8 unk4F; /* 1 use */
    /* 0x050 */ u8 unk50; /* 1 use */
    /* 0x051 */ u8 pad51[0x3];
    /* 0x054 */ s32 unk54; /* 1 use */
    /* 0x058 */ u8 pad58[0x4];
    /* 0x05C */ struct T_func_8012CE9C_a1 *unk5C; /* 2 uses */
    /* 0x060 */ u8 pad60[0x30];
    /* 0x090 */ s16 unk90; /* 5 uses */
    /* 0x092 */ u8 unk92; /* 1 use */
    /* 0x093 */ u8 unk93; /* 3 uses */
    /* 0x094 */ s16 unk94; /* 1 use */
    /* 0x096 */ s16 unk96; /* 1 use */
    /* 0x098 */ u8 pad98[0x2];
    /* 0x09A */ s16 unk9A; /* 2 uses */
    /* 0x09C */ u8 unk9C; /* 2 uses */
    /* 0x09D */ u8 pad9D[0x11];
    /* 0x0AE */ u8 unkAE; /* 3 uses */
    /* 0x0AF */ u8 unkAF; /* 1 use */
    /* 0x0B0 */ s32 unkB0; /* 13 uses */
} T_func_801DBE94_a0;

/* pointed to by T_D_801BBCD0_p0.0x2C; 170 functions */
typedef struct T_func_801EFE0C_ret { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 x; /* 182 uses */
    /* 0x008 */ f32 y; /* 117 uses */
    /* 0x00C */ f32 z; /* 169 uses */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 angle; /* 134 uses */
    /* 0x014 */ s16 unk14; /* 1 use */
    /* 0x016 */ u8 pad16[0x2];
} T_func_801EFE0C_ret;

/* pointed to by T_D_801BBBF0.0xE8, T_func_8010E680_a0.0x24; 142 functions */
typedef struct T_func_801FA248_a0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8038BDC0_ret *unk2C; /* 1107 uses */
    /* 0x030 */ struct T_func_801FA248_a0_p30 *unk30; /* 9 uses */
} T_func_801FA248_a0;

/* pointed to by T_func_801FA248_a0.0x30; 3 functions */
typedef struct T_func_801FA248_a0_p30 { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ u8 pad10[0x8];
    /* 0x018 */ f32 unk18; /* 2 uses */
    /* 0x01C */ f32 unk1C; /* 2 uses */
    /* 0x020 */ u8 pad20[0x2B];
    /* 0x04B */ u8 unk4B; /* 3 uses */
} T_func_801FA248_a0_p30;

/* parameter file010:func_801FCF98:0, file010:func_801FD260:1; 24 functions */
typedef struct T_func_801FCF98_a0 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_801FCF98_a0_p24 *model; /* 9 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s32 unk2C; /* 10 uses */
    /* 0x030 */ u8 pad30[0x8];
    /* 0x038 */ struct T_func_801FCF98_a0_p38 *unk38; /* 3 uses */
    /* 0x03C */ u16 timer; /* 185 uses */
    /* 0x03E */ u8 pad3E[0x2];
    /* 0x040 */ f32 unk40; /* 111 uses */
    /* 0x044 */ f32 unk44; /* 66 uses */
    /* 0x048 */ f32 unk48; /* 105 uses */
    /* 0x04C */ u8 pad4C[0x26];
    /* 0x072 */ u16 unk72; /* 1 use */
    /* 0x074 */ struct T_func_801395E4_a1_elem *handle; /* 3 uses */
    /* 0x078 */ f32 oldx; /* 4 uses */
    /* 0x07C */ f32 oldy; /* 4 uses */
    /* 0x080 */ f32 oldz; /* 4 uses */
    /* 0x084 */ s16 oldrx; /* 3 uses */
    /* 0x086 */ s16 oldry; /* 3 uses */
    /* 0x088 */ s16 oldrz; /* 3 uses */
    /* 0x08A */ u8 pad8A[0x6];
    /* 0x090 */ u8 state; /* 190 uses */
    /* 0x091 */ u8 unk91; /* 18 uses */
    /* 0x092 */ s16 ticks; /* 45 uses */
    /* 0x094 */ f32 x; /* 306 uses */
    /* 0x098 */ f32 y; /* 261 uses */
    /* 0x09C */ f32 z; /* 282 uses */
    /* 0x0A0 */ u16 unkA0; /* 41 uses; loaded both signed (lh x8) and unsigned (lhu x26) */
    /* 0x0A2 */ s16 ry; /* 164 uses; loaded both signed (lh x84) and unsigned (lhu x62) */
    /* 0x0A4 */ u16 rz; /* 29 uses; loaded both signed (lh x1) and unsigned (lhu x26) */
    /* 0x0A6 */ s16 unkA6; /* 48 uses */
    /* 0x0A8 */ struct T_func_80107830_a0 *actor; /* 6 uses */
    /* 0x0AC */ u8 unkAC; /* 43 uses */
    /* 0x0AD */ u8 unkAD; /* 2 uses */
    /* 0x0AE */ s16 unkAE; /* 7 uses */
    /* 0x0B0 */ u8 health; /* 24 uses */
    /* 0x0B1 */ u8 padB1[0x3];
} T_func_801FCF98_a0;

/* pointed to by T_func_801FCF98_a0.0x24; 2 functions */
typedef struct T_func_801FCF98_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_801FCF98_a0_p24_p30 *unk30; /* 9 uses */
} T_func_801FCF98_a0_p24;

/* pointed to by T_func_8014B7CC_ret.0x4; 6 functions */
typedef struct T_func_801FF348_a0 { /* size >= 0xAC */
    /* 0x000 */ u8 pad0[0x90];
    /* 0x090 */ f32 unk90; /* 2 uses */
    /* 0x094 */ f32 unk94; /* 2 uses */
    /* 0x098 */ f32 unk98; /* 2 uses */
    /* 0x09C */ s16 unk9C; /* 2 uses */
    /* 0x09E */ u8 unk9E; /* 4 uses */
    /* 0x09F */ u8 unk9F; /* 1 use */
    /* 0x0A0 */ u16 unkA0; /* 1 use */
    /* 0x0A2 */ s16 unkA2; /* 2 uses */
    /* 0x0A4 */ u8 *unkA4; /* 3 uses */
    /* 0x0A8 */ u16 unkA8; /* 4 uses */
    /* 0x0AA */ u8 padAA[0x2];
} T_func_801FF348_a0;

/* pointed to by T_D_801BBBF0.0x1100, T_D_801BCC25.0x53; 5 functions */
typedef struct T_func_80203830_a0 { /* size >= 0xA4 */
    /* 0x000 */ u8 pad0[0x35];
    /* 0x035 */ u8 unk35; /* 3 uses */
    /* 0x036 */ u8 pad36[0x5A];
    /* 0x090 */ s16 unk90; /* 4 uses */
    /* 0x092 */ u8 pad92[0x2];
    /* 0x094 */ void *unk94; /* 1 use */
    /* 0x098 */ u8 unk98; /* 1 use */
    /* 0x099 */ u8 pad99[0x2];
    /* 0x09B */ u8 unk9B; /* 1 use */
    /* 0x09C */ s16 unk9C; /* 1 use */
    /* 0x09E */ u8 pad9E[0x2];
    /* 0x0A0 */ s32 unkA0; /* 1 use */
} T_func_80203830_a0;

/* parameter file010:func_802039B0:0, file013:func_80242E90:0; 3 functions */
typedef struct T_func_802039B0_a0 { /* size >= 0xAC */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_802039B0_a0_p24 *unk24; /* 6 uses */
    /* 0x028 */ u8 pad28[0x68];
    /* 0x090 */ u8 unk90; /* 4 uses */
    /* 0x091 */ u8 unk91; /* 3 uses */
    /* 0x092 */ u16 unk92; /* 4 uses */
    /* 0x094 */ struct T_func_802039B0_a0_p94_elem *unk94; /* 61 uses */
    /* 0x098 */ u8 unk98; /* 11 uses */
    /* 0x099 */ u8 pad99[0x2];
    /* 0x09B */ u8 unk9B; /* 2 uses */
    /* 0x09C */ s16 unk9C; /* 6 uses */
    /* 0x09E */ u8 pad9E[0x2];
    /* 0x0A0 */ struct T_func_802039B0_a0_p94_elem *unkA0; /* 2 uses */
    /* 0x0A4 */ u8 padA4[0x4];
    /* 0x0A8 */ u16 timer; /* 2 uses */
    /* 0x0AA */ u8 padAA[0x2];
} T_func_802039B0_a0;

/* pointed to by T_func_802039B0_a0.0x24; 2 functions */
typedef struct T_func_802039B0_a0_p24 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_802039B0_a0_p24_p2C *unk2C; /* 6 uses */
} T_func_802039B0_a0_p24;

/* pointed to by T_func_802039B0_a0_p24.0x2C; 2 functions */
typedef struct T_func_802039B0_a0_p24_p2C { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 x; /* 2 uses */
    /* 0x008 */ f32 y; /* 2 uses */
    /* 0x00C */ f32 z; /* 2 uses */
} T_func_802039B0_a0_p24_p2C;

/* pointed to by T_func_802237EC_ret_802238B8.0x94, T_func_8022397C_ret_80223A28.0x94; 23 functions */
typedef struct T_func_802237EC_ret_802238B8_p94 { /* size >= 0xA */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 18 uses */
    /* 0x004 */ u16 unk4; /* 24 uses */
    /* 0x006 */ s16 x; /* 11 uses */
    /* 0x008 */ s16 y; /* 10 uses */
} T_func_802237EC_ret_802238B8_p94;

/* pointed to by T_func_8012E25C_a1_p0.0x2C; 3 functions */
typedef struct T_func_80223DD0_a0 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 9 uses */
    /* 0x008 */ f32 unk8; /* 3 uses */
    /* 0x00C */ f32 unkC; /* 9 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 3 uses */
} T_func_80223DD0_a0;

/* parameter file011:func_80228C20:0, file011:func_80228D90:0; 177 functions */
typedef struct T_func_80228C20_a0 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_80228C20_a0_pC *unkC; /* 148 uses */
    /* 0x010 */ u8 pad10[0x80];
    /* 0x090 */ u8 unk90; /* 194 uses */
    /* 0x091 */ u8 unk91; /* 312 uses */
    /* 0x092 */ u8 unk92; /* 599 uses */
    /* 0x093 */ u8 unk93; /* 53 uses */
    /* 0x094 */ u8 unk94; /* 6 uses */
    /* 0x095 */ u8 unk95; /* 211 uses */
    /* 0x096 */ s16 unk96; /* 35 uses */
    /* 0x098 */ s16 unk98; /* 122 uses; also u8@0x99 */
    /* 0x09A */ s16 unk9A; /* 501 uses */
    /* 0x09C */ u32 unk9C; /* 34 uses */
    /* 0x0A0 */ u8 unkA0; /* 62 uses */
    /* 0x0A1 */ u8 unkA1; /* 40 uses */
    /* 0x0A2 */ u8 unkA2; /* 40 uses */
    /* 0x0A3 */ u8 unkA3; /* 4 uses */
    /* 0x0A4 */ u8 unkA4; /* 2 uses */
    /* 0x0A5 */ u8 padA5[0x3];
    /* 0x0A8 */ u8 unkA8; /* 130 uses */
    /* 0x0A9 */ u8 padA9[0x3];
    /* 0x0AC */ s32 unkAC; /* 5 uses */
    /* 0x0B0 */ s32 unkB0; /* 41 uses */
} T_func_80228C20_a0;

/* pointed to by T_func_80228C20_a0.0xC; 43 functions */
typedef struct T_func_80228C20_a0_pC { /* size >= 0xA4 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_80107830_a0 *unkC; /* 46 uses */
    /* 0x010 */ u8 pad10[0x83];
    /* 0x093 */ u8 unk93; /* 1 use */
    /* 0x094 */ u8 pad94[0x4];
    /* 0x098 */ s16 unk98; /* 12 uses */
    /* 0x09A */ s16 unk9A; /* 1 use */
    /* 0x09C */ u8 pad9C[0x4];
    /* 0x0A0 */ u8 unkA0; /* 13 uses */
    /* 0x0A1 */ u8 padA1[0x3];
} T_func_80228C20_a0_pC;

/* parameter file011:func_8022A824:0, file011:func_8022A834:0; 27 functions */
typedef struct T_func_8022A824_a0 { /* size >= 0xA8 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_80107830_a0 *unkC; /* 1 use */
    /* 0x010 */ u8 pad10[0x95];
    /* 0x0A5 */ u8 state; /* 62 uses */
    /* 0x0A6 */ u8 padA6[0x2];
} T_func_8022A824_a0;

/* parameter file011:func_8022A834:1, file011:func_8022AAA8:1; 25 functions */
typedef struct T_func_8022A834_a1 { /* size >= 0x394 */
    /* 0x000 */ s16 unk0; /* 3 uses */
    /* 0x002 */ s16 unk2; /* 3 uses */
    /* 0x004 */ u8 pad4[0x2];
    /* 0x006 */ s16 unk6; /* 25 uses */
    /* 0x008 */ u8 pad8[0x28];
    /* 0x030 */ s32 unk30; /* 2 uses; also u8@0x33 */
    /* 0x034 */ u8 pad34[0x4];
    /* 0x038 */ s32 unk38; /* 1 use */
    /* 0x03C */ u8 pad3C[0x29D];
    /* 0x2D9 */ u8 direction; /* 11 uses */
    /* 0x2DA */ u8 pad2DA[0x59];
    /* 0x333 */ u8 unk333; /* 81 uses */
    /* 0x334 */ u8 pad334[0x5F];
    /* 0x393 */ u8 flag; /* 4 uses */
} T_func_8022A834_a1;

/* parameter file011:func_8022FFFC:0, file057:func_803796D0:0; 6 functions */
typedef struct T_func_8022FFFC_a0 { /* size >= 0x2DA */
    /* 0x000 */ s16 hp; /* 11 uses */
    /* 0x002 */ s16 hpNow; /* 10 uses */
    /* 0x004 */ u8 pad4[0x4];
    /* 0x008 */ s16 mp; /* 18 uses */
    /* 0x00A */ s16 mpNow; /* 10 uses */
    /* 0x00C */ u8 padC[0x24];
    /* 0x030 */ u16 unk30; /* 1 use */
    /* 0x032 */ u8 pad32[0xE];
    /* 0x040 */ s16 deltaHP; /* 12 uses */
    /* 0x042 */ s16 deltaMP; /* 8 uses */
    /* 0x044 */ u8 pad44[0x6];
    /* 0x04A */ s16 mpTotal; /* 20 uses */
    /* 0x04C */ u8 pad4C[0x52];
    /* 0x09E */ u16 timer; /* 4 uses */
    /* 0x0A0 */ s16 timer2; /* 1 use */
    /* 0x0A2 */ u8 padA2[0x2];
    /* 0x0A4 */ u8 statA4; /* 1 use */
    /* 0x0A5 */ u8 padA5[0x1];
    /* 0x0A6 */ u8 flags; /* 12 uses */
    /* 0x0A7 */ u8 padA7[0x232];
    /* 0x2D9 */ u8 item; /* 1 use */
} T_func_8022FFFC_a0;

/* pointed to by T_func_80148500_a0.0x98; 3 functions */
typedef struct T_func_80232128_a0 { /* size >= 0x2DB */
    /* 0x000 */ u8 pad0[0x2D9];
    /* 0x2D9 */ u8 unk2D9; /* 4 uses */
    /* 0x2DA */ u8 unk2DA; /* 3 uses */
} T_func_80232128_a0;

/* pointed to by T_D_801BBBF0.0x1088, T_D_801BBBF0.0x10B8; 21 functions */
typedef struct T_func_802409B4_a0 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0x18];
    /* 0x018 */ s32 unk18; /* 4 uses */
    /* 0x01C */ u8 pad1C[0x4];
    /* 0x020 */ s32 unk20; /* 4 uses */
    /* 0x024 */ u8 pad24[0x11];
    /* 0x035 */ u8 unk35; /* 8 uses */
    /* 0x036 */ s16 unk36; /* 4 uses */
    /* 0x038 */ struct T_func_802409B4_a0_p38 *unk38; /* 6 uses */
    /* 0x03C */ s16 unk3C; /* 1 use */
    /* 0x03E */ u8 pad3E[0x34];
    /* 0x072 */ u16 unk72; /* 10 uses */
    /* 0x074 */ u8 pad74[0x1C];
    /* 0x090 */ s16 unk90; /* 8 uses */
    /* 0x092 */ s16 unk92; /* 13 uses */
    /* 0x094 */ s16 unk94; /* 1 use */
    /* 0x096 */ u8 pad96[0x2];
    /* 0x098 */ s16 unk98; /* 10 uses */
    /* 0x09A */ s16 unk9A; /* 1 use */
    /* 0x09C */ u8 pad9C[0x3];
    /* 0x09F */ u8 unk9F; /* 1 use */
    /* 0x0A0 */ u8 padA0[0xF];
    /* 0x0AF */ u8 unkAF; /* 1 use */
    /* 0x0B0 */ s16 unkB0; /* 1 use */
    /* 0x0B2 */ u8 padB2[0x2];
} T_func_802409B4_a0;

/* pointed to by T_func_802409B4_a0.0x38; 4 functions */
typedef struct T_func_802409B4_a0_p38 { /* size >= 0x4 */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 4 uses */
} T_func_802409B4_a0_p38;

/* pointed to by T_func_80240DA4_ret_80240DF0.0x58, T_func_80240DA4_a1.0x8; 4 functions */
typedef struct T_func_80240DA4_a1 { /* size >= 0xC */
    /* 0x000 */ u16 unk0; /* 4 uses */
    /* 0x002 */ u16 unk2; /* 4 uses */
    /* 0x004 */ u8 pad4[0x4];
    /* 0x008 */ struct T_func_80240DA4_a1 *unk8; /* 2 uses */
} T_func_80240DA4_a1;

/* pointed to by T_D_801BBBF0.0x1118; 10 functions */
typedef struct T_func_80240DA4_ret_80240DF0 { /* size >= 0x7C */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_80107830_a0 *unk2C; /* 5 uses */
    /* 0x030 */ s16 unk30; /* 3 uses */
    /* 0x032 */ s16 unk32; /* 3 uses */
    /* 0x034 */ f32 unk34; /* 3 uses */
    /* 0x038 */ f32 unk38; /* 3 uses */
    /* 0x03C */ f32 unk3C; /* 3 uses */
    /* 0x040 */ s16 unk40; /* 11 uses */
    /* 0x042 */ s16 unk42; /* 4 uses */
    /* 0x044 */ f32 unk44; /* 3 uses */
    /* 0x048 */ f32 unk48; /* 3 uses */
    /* 0x04C */ u8 unk4C; /* 5 uses */
    /* 0x04D */ u8 pad4D[0x3];
    /* 0x050 */ f32 unk50; /* 3 uses */
    /* 0x054 */ struct T_func_80240DA4_ret_80240DF0_p54 *unk54; /* 3 uses */
    /* 0x058 */ struct T_func_80240DA4_a1 *unk58; /* 5 uses */
    /* 0x05C */ u16 unk5C; /* 7 uses */
    /* 0x05E */ u16 unk5E; /* 8 uses */
    /* 0x060 */ f32 unk60; /* 3 uses */
    /* 0x064 */ f32 unk64; /* 3 uses */
    /* 0x068 */ f32 unk68; /* 3 uses */
    /* 0x06C */ f32 unk6C; /* 3 uses */
    /* 0x070 */ f32 unk70; /* 3 uses */
    /* 0x074 */ f32 unk74; /* 3 uses */
    /* 0x078 */ f32 unk78; /* 3 uses */
} T_func_80240DA4_ret_80240DF0;

/* pointed to by T_D_801BBBF0.0x24, T_D_801BBBF0.0x38C; 3 functions */
typedef struct T_func_80247294_a0 { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_80247294_a0_p24 *unk24; /* 4 uses */
    /* 0x028 */ u8 pad28[0x10];
    /* 0x038 */ struct T_func_80247294_a0_p38 *unk38; /* 6 uses */
    /* 0x03C */ u8 pad3C[0x54];
    /* 0x090 */ u8 unk90; /* 1 use */
    /* 0x091 */ u8 pad91[0x3];
} T_func_80247294_a0;

/* pointed to by T_D_801BCC25.0xE3; 6 functions */
typedef struct T_func_8037488C_ret { /* size >= 0x7C */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8037488C_ret_p2C *unk2C; /* 1 use */
    /* 0x030 */ u16 unk30; /* 1 use */
    /* 0x032 */ u16 unk32; /* 1 use */
    /* 0x034 */ f32 unk34; /* 1 use */
    /* 0x038 */ f32 unk38; /* 1 use */
    /* 0x03C */ f32 unk3C; /* 1 use */
    /* 0x040 */ u8 pad40[0x2];
    /* 0x042 */ s16 unk42; /* 2 uses */
    /* 0x044 */ f32 unk44; /* 1 use */
    /* 0x048 */ f32 unk48; /* 1 use */
    /* 0x04C */ u8 unk4C; /* 1 use */
    /* 0x04D */ u8 pad4D[0x3];
    /* 0x050 */ f32 unk50; /* 1 use */
    /* 0x054 */ struct T_func_8037488C_ret_p54 *unk54; /* 1 use */
    /* 0x058 */ struct T_func_8037488C_ret_p58 *unk58; /* 1 use */
    /* 0x05C */ u16 unk5C; /* 1 use */
    /* 0x05E */ u16 unk5E; /* 3 uses */
    /* 0x060 */ f32 unk60; /* 1 use */
    /* 0x064 */ f32 unk64; /* 1 use */
    /* 0x068 */ f32 unk68; /* 1 use */
    /* 0x06C */ f32 unk6C; /* 1 use */
    /* 0x070 */ f32 unk70; /* 1 use */
    /* 0x074 */ f32 unk74; /* 1 use */
    /* 0x078 */ f32 unk78; /* 1 use */
} T_func_8037488C_ret;

/* pointed to by T_func_80147828_a0.0x5C; 5 functions */
typedef struct T_func_80375560_ret { /* size >= 0xE */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ u16 count; /* 6 uses */
} T_func_80375560_ret;

/* pointed to by T_func_80237694_a0.0x98; 2 functions */
typedef struct T_func_80376CCC_a0 { /* size >= 0x2DA */
    /* 0x000 */ u8 pad0[0x31];
    /* 0x031 */ u8 unk31; /* 3 uses */
    /* 0x032 */ u8 pad32[0x2A6];
    /* 0x2D8 */ u8 unk2D8; /* 3 uses */
    /* 0x2D9 */ u8 unk2D9; /* 1 use */
} T_func_80376CCC_a0;

/* pointed to by T_D_8008DA88_elem.0x0, T_D_80240880_file011.0x8; 40 functions */
typedef struct T_func_8037DD6C_a1 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ struct T_func_80149580_a1 *unk10; /* 6 uses */
    /* 0x014 */ u8 pad14[0x8];
    /* 0x01C */ s32 unk1C; /* 2 uses */
    /* 0x020 */ u8 pad20[0x2];
    /* 0x022 */ u8 unk22; /* 18 uses */
    /* 0x023 */ u8 pad23[0x9];
    /* 0x02C */ struct T_func_8037DD6C_a1_p2C *unk2C; /* 38 uses */
    /* 0x030 */ struct T_func_8037DD6C_a1_p30 *unk30; /* 77 uses */
} T_func_8037DD6C_a1;

/* pointed to by T_func_8037DD6C_a1.0x2C; 17 functions */
typedef struct T_func_8037DD6C_a1_p2C { /* size >= 0x74 */
    /* 0x000 */ s16 unk0; /* 2 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ f32 unk4; /* 4 uses */
    /* 0x008 */ f32 unk8; /* 4 uses */
    /* 0x00C */ f32 unkC; /* 4 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 3 uses */
    /* 0x014 */ u8 pad14[0x14];
    /* 0x028 */ struct T_func_8037DD6C_a1_p2C_p28_elem *unk28; /* 2 uses */
    /* 0x02C */ s16 unk2C; /* 2 uses */
    /* 0x02E */ u8 pad2E[0x2];
    /* 0x030 */ void *unk30; /* 1 use */
    /* 0x034 */ void *unk34; /* 4 uses */
    /* 0x038 */ s16 unk38; /* 1 use */
    /* 0x03A */ u8 unk3A; /* 1 use */
    /* 0x03B */ u8 pad3B[0xD];
    /* 0x048 */ u8 unk48; /* 2 uses */
    /* 0x049 */ u8 unk49; /* 2 uses */
    /* 0x04A */ u8 unk4A; /* 6 uses */
    /* 0x04B */ u8 unk4B; /* 4 uses */
    /* 0x04C */ u8 unk4C; /* 2 uses */
    /* 0x04D */ u8 unk4D; /* 2 uses */
    /* 0x04E */ u8 unk4E; /* 2 uses */
    /* 0x04F */ u8 unk4F; /* 2 uses */
    /* 0x050 */ u8 pad50[0xC];
    /* 0x05C */ void *unk5C; /* 1 use */
    /* 0x060 */ void *unk60; /* 1 use */
    /* 0x064 */ void *unk64; /* 1 use */
    /* 0x068 */ u8 pad68[0x8];
    /* 0x070 */ f32 unk70; /* 4 uses */
} T_func_8037DD6C_a1_p2C;

/* pointed to by T_func_8037DD6C_a1.0x30; 19 functions */
typedef struct T_func_8037DD6C_a1_p30 { /* size >= 0x50 */
    /* 0x000 */ s16 unk0; /* 2 uses */
    /* 0x002 */ s16 unk2; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 4 uses */
    /* 0x008 */ u8 unk8; /* 9 uses; also f32@0x8 */
    /* 0x009 */ u8 unk9; /* 10 uses; also f32@0x8 */
    /* 0x00A */ u8 unkA; /* 13 uses; also f32@0x8 */
    /* 0x00B */ u8 padB[0x1];
    /* 0x00C */ f32 unkC; /* 4 uses; also u8@0xE, u8@0xC, u8@0xD */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 2 uses */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 1 use */
    /* 0x024 */ s32 unk24; /* 2 uses */
    /* 0x028 */ struct T_func_8037DD6C_a1_p2C_p28_elem *unk28; /* 2 uses */
    /* 0x02C */ s16 unk2C; /* 2 uses */
    /* 0x02E */ u8 pad2E[0x2];
    /* 0x030 */ void *unk30; /* 2 uses */
    /* 0x034 */ u8 pad34[0x4];
    /* 0x038 */ s16 unk38; /* 1 use */
    /* 0x03A */ u8 unk3A; /* 1 use */
    /* 0x03B */ u8 unk3B; /* 1 use */
    /* 0x03C */ u8 pad3C[0xC];
    /* 0x048 */ u8 unk48; /* 1 use */
    /* 0x049 */ u8 unk49; /* 1 use */
    /* 0x04A */ u8 unk4A; /* 1 use */
    /* 0x04B */ u8 pad4B[0x1];
    /* 0x04C */ u8 unk4C; /* 2 uses */
    /* 0x04D */ u8 unk4D; /* 2 uses */
    /* 0x04E */ u8 unk4E; /* 2 uses */
    /* 0x04F */ u8 unk4F; /* 1 use */
} T_func_8037DD6C_a1_p30;

/* pointed to by T_func_801FA248_a0.0x2C; 136 functions */
typedef struct T_func_8038BDC0_ret { /* size >= 0x5C */
    /* 0x000 */ s16 unk0; /* 2 uses */
    /* 0x002 */ s16 unk2; /* 2 uses */
    /* 0x004 */ s16 unk4; /* 2 uses */
    /* 0x006 */ s16 unk6; /* 2 uses */
    /* 0x008 */ f32 y; /* 4 uses */
    /* 0x00C */ s32 z; /* 2 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
    /* 0x014 */ s32 unk14; /* 2 uses */
    /* 0x018 */ u16 unk18; /* 2 uses */
    /* 0x01A */ u8 pad1A[0x2];
    /* 0x01C */ f32 unk1C; /* 21 uses */
    /* 0x020 */ f32 unk20; /* 2 uses */
    /* 0x024 */ f32 unk24; /* 22 uses */
    /* 0x028 */ f32 unk28; /* 20 uses */
    /* 0x02C */ f32 unk2C; /* 2 uses */
    /* 0x030 */ f32 unk30; /* 350 uses */
    /* 0x034 */ f32 unk34; /* 299 uses */
    /* 0x038 */ f32 unk38; /* 347 uses */
    /* 0x03C */ f32 unk3C; /* 226 uses */
    /* 0x040 */ f32 unk40; /* 196 uses */
    /* 0x044 */ f32 unk44; /* 226 uses */
    /* 0x048 */ f32 unk48; /* 5 uses */
    /* 0x04C */ f32 unk4C; /* 5 uses */
    /* 0x050 */ f32 unk50; /* 5 uses */
    /* 0x054 */ f32 unk54; /* 2 uses */
    /* 0x058 */ s32 unk58; /* 2 uses */
} T_func_8038BDC0_ret;


#endif
