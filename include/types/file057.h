#ifndef TYPES_FILE057_H
#define TYPES_FILE057_H

/* Recovered types for file057 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* anonymous; 1 functions */
typedef struct T_D_700000_elem { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_700000_elem;

/* anonymous; 3 functions */
typedef struct T_D_8008DA88_elem_2 { /* size >= 0x8 */
    /* 0x000 */ struct T_D_8008DA88_elem_2_p0 *unk0; /* 7 uses */
    /* 0x004 */ struct T_D_8008DA88_elem_2_p4 *unk4; /* 5 uses */
} T_D_8008DA88_elem_2;

/* pointed to by T_D_8008DA88_elem_2.0x0; 2 functions */
typedef struct T_D_8008DA88_elem_2_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_D_8008DA88_elem_2_p0_p30 *unk30; /* 6 uses */
} T_D_8008DA88_elem_2_p0;

/* pointed to by T_D_8008DA88_elem_2_p0.0x30; 2 functions */
typedef struct T_D_8008DA88_elem_2_p0_p30 { /* size >= 0xB */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ u8 unk8; /* 2 uses */
    /* 0x009 */ u8 unk9; /* 2 uses */
    /* 0x00A */ u8 unkA; /* 2 uses */
} T_D_8008DA88_elem_2_p0_p30;

/* pointed to by T_D_8008DA88_elem_2.0x4; 3 functions */
typedef struct T_D_8008DA88_elem_2_p4 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_D_8008DA88_elem_2_p4_p30 *unk30; /* 5 uses */
} T_D_8008DA88_elem_2_p4;

/* pointed to by T_D_8008DA88_elem_2_p4.0x30; 3 functions */
typedef struct T_D_8008DA88_elem_2_p4_p30 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ u8 unk8; /* 1 use */
    /* 0x009 */ u8 unk9; /* 2 uses */
    /* 0x00A */ u8 unkA; /* 1 use */
    /* 0x00B */ u8 unkB; /* 1 use */
} T_D_8008DA88_elem_2_p4_p30;

/* pointed to by T_D_8008DA88.0x1C; 2 functions */
typedef struct T_D_8008DA88_p1C { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_802257F4_a0 *unk2C; /* 2 uses */
} T_D_8008DA88_p1C;

/* pointed to by T_D_8008DA88_p20.0x2C; 2 functions */
typedef struct T_D_8008DA88_p20_p2C { /* size >= 0x6E */
    /* 0x000 */ u8 pad0[0x6C];
    /* 0x06C */ u16 unk6C; /* 4 uses */
} T_D_8008DA88_p20_p2C;

/* pointed to by T_D_8008DA88.0x28; 2 functions */
typedef struct T_D_8008DA88_p28 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_802257F4_a0 *unk2C; /* 2 uses */
} T_D_8008DA88_p28;

/* pointed to by T_D_8008DA88.0x2C; 2 functions */
typedef struct T_D_8008DA88_p2C { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_D_8008DA88_p2C_p2C *unk2C; /* 2 uses */
} T_D_8008DA88_p2C;

/* pointed to by T_D_8008DA88_p2C.0x2C; 2 functions */
typedef struct T_D_8008DA88_p2C_p2C { /* size >= 0x6E */
    /* 0x000 */ u8 pad0[0x6C];
    /* 0x06C */ u16 unk6C; /* 4 uses */
} T_D_8008DA88_p2C_p2C;

/* pointed to by T_D_8008DA88.0x38; 1 functions */
typedef struct T_D_8008DA88_p38 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_802257F4_a0 *unk2C; /* 1 use */
} T_D_8008DA88_p38;

/* pointed to by T_D_8008DA88.0x44; 1 functions */
typedef struct T_D_8008DA88_p44 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_802257F4_a0 *unk2C; /* 2 uses */
} T_D_8008DA88_p44;

/* pointed to by T_D_8008DA88_p4C.0x2C; 1 functions */
typedef struct T_D_8008DA88_p4C_p2C { /* size >= 0x30 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x22];
    /* 0x024 */ s32 unk24; /* 1 use */
    /* 0x028 */ s32 unk28; /* 1 use */
    /* 0x02C */ u16 unk2C; /* 1 use */
    /* 0x02E */ u8 pad2E[0x2];
} T_D_8008DA88_p4C_p2C;

/* pointed to by T_D_8008DA88.0x58; 1 functions */
typedef struct T_D_8008DA88_p58 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_802257F4_a0 *unk2C; /* 1 use */
} T_D_8008DA88_p58;

/* pointed to by T_D_8008DA88.0x5C; 1 functions */
typedef struct T_D_8008DA88_p5C { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_D_8008DA88_p5C_p2C *unk2C; /* 1 use */
} T_D_8008DA88_p5C;

/* pointed to by T_D_8008DA88_p5C.0x2C; 1 functions */
typedef struct T_D_8008DA88_p5C_p2C { /* size >= 0x6E */
    /* 0x000 */ u8 pad0[0x6C];
    /* 0x06C */ u16 unk6C; /* 2 uses */
} T_D_8008DA88_p5C_p2C;

/* pointed to by T_D_8008DA88_p8.0x30; 2 functions */
typedef struct T_D_8008DA88_p8_p30 { /* size >= 0xF */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ u8 unk8; /* 2 uses */
    /* 0x009 */ u8 unk9; /* 1 use */
    /* 0x00A */ u8 unkA; /* 1 use */
    /* 0x00B */ u8 padB[0x1];
    /* 0x00C */ u8 unkC; /* 4 uses */
    /* 0x00D */ u8 unkD; /* 3 uses */
    /* 0x00E */ u8 unkE; /* 4 uses */
} T_D_8008DA88_p8_p30;

/* pointed to by T_D_8017251C.0x0; 1 functions */
typedef struct T_D_8017251C_p0 { /* size >= 0x8 */
    /* 0x000 */ u16 *unk0; /* 1 use */
    /* 0x004 */ s32 *unk4; /* 1 use */
} T_D_8017251C_p0;

/* pointed to by T_D_80172574.0x0; 8 functions */
typedef struct T_D_80172574_p0 { /* size >= 0x8 */
    /* 0x000 */ u16 *unk0; /* 8 uses */
    /* 0x004 */ s32 *unk4; /* 8 uses */
} T_D_80172574_p0;

/* pointed to by T_D_8017257C.0x0; 4 functions */
typedef struct T_D_8017257C_p0 { /* size >= 0x8 */
    /* 0x000 */ u16 *unk0; /* 4 uses */
    /* 0x004 */ s32 *unk4; /* 4 uses */
} T_D_8017257C_p0;

/* anonymous; 1 functions */
typedef struct T_D_801BBBF0_pABC_elem { /* size 0x1C */
    /* 0x000 */ u8 pad0[0xA];
    /* 0x00A */ u8 unkA; /* 7 uses */
    /* 0x00B */ u8 padB[0x3];
    /* 0x00E */ u8 unkE; /* 1 use */
    /* 0x00F */ u8 padF[0x5];
    /* 0x014 */ u8 unk14; /* 1 use */
    /* 0x015 */ u8 pad15[0x7];
} T_D_801BBBF0_pABC_elem;

/* pointed to by T_D_801BBBF0.0xB1C; 1 functions */
typedef struct T_D_801BBBF0_pB1C { /* size >= 0xA */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ u16 unk8; /* 1 use */
} T_D_801BBBF0_pB1C;

/* pointed to by T_D_801BC03C.0x334; 1 functions */
typedef struct T_D_801BC03C_p334 { /* size >= 0xC */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u16 unk2; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u16 unk6; /* 1 use */
    /* 0x008 */ u8 pad8[0x2];
    /* 0x00A */ u16 unkA; /* 1 use */
} T_D_801BC03C_p334;

/* D_801E4070; 4 functions */
typedef struct T_D_801E4070_file057 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s16 unk4; /* 2 uses */
    /* 0x006 */ s16 unk6; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s16 unkC; /* 2 uses */
    /* 0x00E */ u8 padE[0x2];
} T_D_801E4070_file057;

/* D_80385650; 5 functions */
typedef struct T_D_80385650_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 7 uses */
    /* 0x004 */ s32 unk4; /* 7 uses */
    /* 0x008 */ s32 unk8; /* 7 uses */
} T_D_80385650_file057;

/* D_8038565C; 1 functions */
typedef struct T_D_8038565C_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8038565C_file057;

/* D_80385668; 1 functions */
typedef struct T_D_80385668_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80385668_file057;

/* D_80385674; 1 functions */
typedef struct T_D_80385674_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80385674_file057;

/* D_80385680; 1 functions */
typedef struct T_D_80385680_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80385680_file057;

/* D_8038568C; 1 functions */
typedef struct T_D_8038568C_file057 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_8038568C_file057;

/* D_80385694; 1 functions */
typedef struct T_D_80385694_file057 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80385694_file057;

/* D_80385E6C, D_80387A40; 4 functions */
typedef struct T_D_80385E6C_file057_elem { /* size 0x20 */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 pad1[0x1F];
} T_D_80385E6C_file057_elem;

/* D_8038638C; 1 functions */
typedef struct T_D_8038638C_file057_elem { /* size 0x2 */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 unk1; /* 2 uses */
} T_D_8038638C_file057_elem;

/* D_803863B0; 1 functions */
typedef struct T_D_803863B0_file057_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_803863B0_file057_elem;

/* D_803863EC; 1 functions */
typedef struct T_D_803863EC_file057 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_803863EC_file057;

/* D_803863FC; 1 functions */
typedef struct T_D_803863FC_file057_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_803863FC_file057_elem;

/* D_80386830; 1 functions */
typedef struct T_D_80386830_file057_elem { /* size 0x8 */
    /* 0x000 */ s32 unk0; /* 3 uses */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 unk6; /* 1 use */
    /* 0x007 */ u8 pad7[0x1];
} T_D_80386830_file057_elem;

/* D_8038692C; 1 functions */
typedef struct T_D_8038692C_file057_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8038692C_file057_elem;

/* D_8038696C; 1 functions */
typedef struct T_D_8038696C_file057_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8038696C_file057_elem;

/* D_803869AC; 1 functions */
typedef struct T_D_803869AC_file057_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_803869AC_file057_elem;

/* D_803869EC; 1 functions */
typedef struct T_D_803869EC_file057 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ u16 unk10; /* 1 use */
    /* 0x012 */ u8 pad12[0x2];
} T_D_803869EC_file057;

/* D_80386A00; 1 functions */
typedef struct T_D_80386A00_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80386A00_file057;

/* D_80387010; 5 functions */
typedef struct T_D_80387010_file057_elem { /* size 0x14 */
    /* 0x000 */ u8 unk0; /* 4 uses */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u16 unk2; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ s16 unk6; /* 2 uses */
    /* 0x008 */ s16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
    /* 0x00C */ struct T_D_801E0D68 *unkC; /* 2 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
} T_D_80387010_file057_elem;

/* D_80387258; 1 functions */
typedef struct T_D_80387258_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80387258_file057;

/* D_80387264; 1 functions */
typedef struct T_D_80387264_file057 { /* size >= 0x10 */
    /* 0x000 */ s32 w; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_80387264_file057;

/* D_80387274; 1 functions */
typedef struct T_D_80387274_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80387274_file057;

/* D_803872D0; 1 functions */
typedef struct T_D_803872D0_file057_elem { /* size 0xC */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ struct T_D_801E0D68 *unk8; /* 1 use */
} T_D_803872D0_file057_elem;

/* D_80387860; 1 functions */
typedef struct T_D_80387860_file057_elem { /* size 0x20 */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 pad1[0x1F];
} T_D_80387860_file057_elem;

/* D_80387AE4; 1 functions */
typedef struct T_D_80387AE4_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80387AE4_file057;

/* D_80387AF0; 1 functions */
typedef struct T_D_80387AF0_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80387AF0_file057;

/* D_80387AFC; 1 functions */
typedef struct T_D_80387AFC_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80387AFC_file057;

/* D_80387B08; 1 functions */
typedef struct T_D_80387B08_file057 { /* size >= 0x18 */
    /* 0x000 */ s32 w; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_80387B08_file057;

/* D_80387B20; 1 functions */
typedef struct T_D_80387B20_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80387B20_file057;

/* D_80387B2C; 1 functions */
typedef struct T_D_80387B2C_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80387B2C_file057;

/* D_80387B38; 1 functions */
typedef struct T_D_80387B38_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80387B38_file057;

/* D_80387B70; 1 functions */
typedef struct T_D_80387B70_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80387B70_file057;

/* D_80387B7C; 1 functions */
typedef struct T_D_80387B7C_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80387B7C_file057;

/* D_80387B88; 1 functions */
typedef struct T_D_80387B88_file057 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80387B88_file057;

/* D_80388098; 1 functions */
typedef struct T_D_80388098_file057_elem { /* size 0x14 */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 pad1[0x13];
} T_D_80388098_file057_elem;

/* D_80388400; 1 functions */
typedef struct T_D_80388400_file057 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80388400_file057;

/* D_80389754; 1 functions */
typedef struct T_D_80389754_file057_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80389754_file057_elem;

/* D_80389794; 1 functions */
typedef struct T_D_80389794_file057 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80389794_file057;

/* D_803897F4; 1 functions */
typedef struct T_D_803897F4_file057 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_803897F4_file057;

/* D_803898E0; 2 functions */
typedef struct T_D_803898E0_file057_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 12 uses */
    /* 0x004 */ s32 unk4; /* 12 uses */
    /* 0x008 */ s32 unk8; /* 12 uses */
} T_D_803898E0_file057_elem;

/* D_80389AD8; 1 functions */
typedef struct T_D_80389AD8_file057 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_80389AD8_file057;

/* D_80389BB4; 5 functions */
typedef struct T_D_80389BB4_file057 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ s32 unkC; /* 5 uses */
} T_D_80389BB4_file057;

/* D_8038BB50; 1 functions */
typedef struct T_D_8038BB50_file057_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ u16 unk8; /* 1 use; also s32@0x8 */
    /* 0x00A */ u8 padA[0x2];
} T_D_8038BB50_file057_elem;

/* D_8038BBD0; 1 functions */
typedef struct T_D_8038BBD0_file057 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_8038BBD0_file057;

/* D_8038CC20; 1 functions */
typedef struct T_D_8038CC20_file057 { /* size >= 0x3C */
    /* 0x000 */ f32 x; /* 1 use */
    /* 0x004 */ f32 y; /* 1 use */
    /* 0x008 */ f32 z; /* 1 use */
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ s16 unkE; /* 1 use */
    /* 0x010 */ s16 unk10; /* 2 uses */
    /* 0x012 */ u8 pad12[0x2];
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s16 unk18; /* 1 use */
    /* 0x01A */ u8 pad1A[0x2];
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ s16 unk20; /* 1 use */
    /* 0x022 */ u8 pad22[0xE];
    /* 0x030 */ f32 unk30; /* 1 use */
    /* 0x034 */ f32 unk34; /* 1 use */
    /* 0x038 */ f32 unk38; /* 2 uses */
} T_D_8038CC20_file057;

/* pointed to by T_D_8038CC64_file057.0x0; 1 functions */
typedef struct T_D_8038CC64_file057_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses; also u8@0x1, u16@0x2 */
    /* 0x004 */ s16 unk4; /* 3 uses */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ s32 *unk8; /* 1 use */
} T_D_8038CC64_file057_p0;

/* D_8038CC70; 1 functions */
typedef struct T_D_8038CC70_file057 { /* size >= 0x40 */
    /* 0x000 */ f32 unk0; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 2 uses */
    /* 0x010 */ f32 unk10; /* 2 uses */
    /* 0x014 */ f32 unk14; /* 2 uses */
    /* 0x018 */ f32 unk18; /* 2 uses */
    /* 0x01C */ s16 unk1C; /* 1 use; also s32@0x1C */
    /* 0x01E */ u8 pad1E[0x2];
    /* 0x020 */ f32 unk20; /* 1 use */
    /* 0x024 */ f32 unk24; /* 1 use */
    /* 0x028 */ f32 unk28; /* 1 use */
    /* 0x02C */ f32 unk2C; /* 1 use */
    /* 0x030 */ f32 unk30; /* 1 use */
    /* 0x034 */ f32 unk34; /* 1 use */
    /* 0x038 */ f32 unk38; /* 1 use */
    /* 0x03C */ s16 unk3C; /* 1 use */
    /* 0x03E */ u8 pad3E[0x2];
} T_D_8038CC70_file057;

/* D_8038CCB0; 5 functions */
typedef struct T_D_8038CCB0_file057 { /* size >= 0xC */
    /* 0x000 */ u16 unk0; /* 5 uses */
    /* 0x002 */ u16 unk2; /* 4 uses */
    /* 0x004 */ u16 unk4; /* 4 uses */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ f32 unk8; /* 3 uses */
} T_D_8038CCB0_file057;

/* D_8038CD74; 1 functions */
typedef struct T_D_8038CD74_file057_elem { /* size 0x8 */
    /* 0x000 */ u8 enabled; /* 3 uses */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ s32 entry; /* 1 use */
} T_D_8038CD74_file057_elem;

/* D_8038CE1C; 2 functions */
typedef struct T_D_8038CE1C_file057_elem { /* size 0x8 */
    /* 0x000 */ u8 enabled; /* 6 uses */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ s32 entry; /* 2 uses */
} T_D_8038CE1C_file057_elem;

/* D_8038CEC4; 3 functions */
typedef struct T_D_8038CEC4_file057_elem { /* size 0x8 */
    /* 0x000 */ u8 flag; /* 10 uses */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ s32 unk4; /* 3 uses */
} T_D_8038CEC4_file057_elem;

/* D_8038CF70; 1 functions */
typedef struct T_D_8038CF70_file057 { /* size >= 0x20 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s16 unk18; /* 1 use */
    /* 0x01A */ u8 pad1A[0x2];
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_8038CF70_file057;

/* pointed to by T_func_80147828_a0.0x24; 1 functions */
typedef struct T_func_80147828_a0_p24 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_80147828_a0_p24_p2C *unk2C; /* 1 use */
} T_func_80147828_a0_p24;

/* pointed to by T_func_80147828_a0_p24.0x2C; 1 functions */
typedef struct T_func_80147828_a0_p24_p2C { /* size >= 0x38 */
    /* 0x000 */ u8 pad0[0x34];
    /* 0x034 */ s32 unk34; /* 1 use */
} T_func_80147828_a0_p24_p2C;

/* pointed to by T_func_80240DA4_ret_80240DF0.0x54; 1 functions */
typedef struct T_func_80240DA4_ret_80240DF0_p54 { /* size >= 0x2 */
    /* 0x000 */ u8 pad0[0x1];
    /* 0x001 */ u8 unk1; /* 2 uses */
} T_func_80240DA4_ret_80240DF0_p54;

/* pointed to by T_D_8038CC10_file057.0x0; 20 functions */
typedef struct T_func_80359560_ret_803595EC { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ u8 unk30; /* 7 uses */
    /* 0x031 */ u8 pad31[0x3];
    /* 0x034 */ u8 unk34; /* 7 uses */
    /* 0x035 */ u8 unk35; /* 6 uses */
    /* 0x036 */ u8 unk36; /* 6 uses */
    /* 0x037 */ u8 pad37[0x5];
    /* 0x03C */ s16 unk3C; /* 2 uses */
    /* 0x03E */ u8 pad3E[0x2];
    /* 0x040 */ u8 unk40; /* 2 uses */
    /* 0x041 */ u8 pad41[0xB];
    /* 0x04C */ u16 unk4C; /* 24 uses */
    /* 0x04E */ u8 pad4E[0x1E];
    /* 0x06C */ f32 unk6C; /* 2 uses */
    /* 0x070 */ f32 unk70; /* 2 uses */
    /* 0x074 */ f32 unk74; /* 2 uses */
    /* 0x078 */ u8 pad78[0x4];
    /* 0x07C */ u8 unk7C; /* 2 uses */
    /* 0x07D */ u8 pad7D[0x3];
    /* 0x080 */ f32 unk80; /* 2 uses */
    /* 0x084 */ f32 unk84; /* 2 uses */
    /* 0x088 */ f32 unk88; /* 2 uses */
    /* 0x08C */ struct T_D_80089378 *unk8C; /* 2 uses */
    /* 0x090 */ s32 unk90; /* 2 uses */
} T_func_80359560_ret_803595EC;

/* parameter file057:func_8035A938:0, file057:func_8035AA44:0; 2 functions */
typedef struct T_func_8035A938_a0 { /* size >= 0x80 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_8035A938_a0_pC *unkC; /* 1 use */
    /* 0x010 */ u8 pad10[0x24];
    /* 0x034 */ u8 unk34; /* 5 uses */
    /* 0x035 */ u8 unk35; /* 5 uses */
    /* 0x036 */ u8 unk36; /* 5 uses */
    /* 0x037 */ u8 unk37; /* 3 uses */
    /* 0x038 */ u8 unk38; /* 5 uses */
    /* 0x039 */ u8 unk39; /* 5 uses */
    /* 0x03A */ u8 unk3A; /* 5 uses */
    /* 0x03B */ u8 unk3B; /* 3 uses */
    /* 0x03C */ u8 pad3C[0x4];
    /* 0x040 */ u8 unk40; /* 1 use */
    /* 0x041 */ u8 pad41[0xB];
    /* 0x04C */ s16 unk4C; /* 1 use */
    /* 0x04E */ u8 pad4E[0x1E];
    /* 0x06C */ s32 unk6C; /* 2 uses */
    /* 0x070 */ s32 unk70; /* 2 uses */
    /* 0x074 */ f32 unk74; /* 3 uses */
    /* 0x078 */ u8 pad78[0x5];
    /* 0x07D */ u8 unk7D; /* 1 use */
    /* 0x07E */ u8 pad7E[0x2];
} T_func_8035A938_a0;

/* pointed to by T_func_8035A938_a0.0xC; 1 functions */
typedef struct T_func_8035A938_a0_pC { /* size >= 0x38 */
    /* 0x000 */ u8 pad0[0x36];
    /* 0x036 */ u16 unk36; /* 1 use */
} T_func_8035A938_a0_pC;

/* parameter file057:func_8035ABAC:0, file057:func_8035C638:0; 5 functions */
typedef struct T_func_8035ABAC_a0 { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_8035AFEC_a0 *unkC; /* 7 uses */
    /* 0x010 */ u8 pad10[0x24];
    /* 0x034 */ u8 unk34; /* 7 uses */
    /* 0x035 */ u8 unk35; /* 7 uses */
    /* 0x036 */ u8 unk36; /* 7 uses */
    /* 0x037 */ u8 pad37[0x1];
    /* 0x038 */ u8 unk38; /* 7 uses */
    /* 0x039 */ u8 unk39; /* 7 uses */
    /* 0x03A */ u8 unk3A; /* 7 uses */
    /* 0x03B */ u8 pad3B[0x1];
    /* 0x03C */ u16 unk3C; /* 5 uses */
    /* 0x03E */ u8 pad3E[0x2];
    /* 0x040 */ u8 unk40; /* 4 uses */
    /* 0x041 */ u8 pad41[0x3];
    /* 0x044 */ f32 unk44; /* 11 uses */
    /* 0x048 */ u8 pad48[0x4];
    /* 0x04C */ u16 unk4C; /* 4 uses */
    /* 0x04E */ u16 unk4E; /* 2 uses */
    /* 0x050 */ u8 pad50[0x1C];
    /* 0x06C */ f32 unk6C; /* 6 uses */
    /* 0x070 */ f32 unk70; /* 2 uses */
    /* 0x074 */ f32 unk74; /* 3 uses */
    /* 0x078 */ u8 pad78[0x4];
    /* 0x07C */ u8 unk7C; /* 5 uses */
    /* 0x07D */ u8 unk7D; /* 1 use */
    /* 0x07E */ u8 pad7E[0x2];
    /* 0x080 */ f32 unk80; /* 11 uses */
    /* 0x084 */ f32 unk84; /* 9 uses */
    /* 0x088 */ f32 unk88; /* 10 uses */
    /* 0x08C */ struct T_func_8035ABAC_a0_p8C *unk8C; /* 1 use */
    /* 0x090 */ struct T_func_8035ABAC_a0_p90 *unk90; /* 2 uses */
} T_func_8035ABAC_a0;

/* pointed to by T_func_8035ABAC_a0.0x8C; 1 functions */
typedef struct T_func_8035ABAC_a0_p8C { /* size >= 0x38 */
    /* 0x000 */ u8 pad0[0x36];
    /* 0x036 */ u16 unk36; /* 1 use */
} T_func_8035ABAC_a0_p8C;

/* pointed to by T_func_8035ABAC_a0.0x90; 2 functions */
typedef struct T_func_8035ABAC_a0_p90 { /* size >= 0x60 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_8035ABAC_a0_p90_p24 *unk24; /* 2 uses */
    /* 0x028 */ u8 pad28[0x34];
    /* 0x05C */ struct T_func_8035ABAC_a0_p90_p5C *unk5C; /* 2 uses */
} T_func_8035ABAC_a0_p90;

/* pointed to by T_func_8035ABAC_a0_p90.0x24; 2 functions */
typedef struct T_func_8035ABAC_a0_p90_p24 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8035ABAC_a0_p90_p24_p2C *unk2C; /* 2 uses */
} T_func_8035ABAC_a0_p90_p24;

/* pointed to by T_func_8035ABAC_a0_p90_p24.0x2C; 2 functions */
typedef struct T_func_8035ABAC_a0_p90_p24_p2C { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 3 uses */
    /* 0x008 */ u8 pad8[0x4];
    /* 0x00C */ f32 unkC; /* 2 uses */
} T_func_8035ABAC_a0_p90_p24_p2C;

/* pointed to by T_func_8035ABAC_a0_p90.0x5C; 2 functions */
typedef struct T_func_8035ABAC_a0_p90_p5C { /* size >= 0xE0 */
    /* 0x000 */ u8 pad0[0xC8];
    /* 0x0C8 */ f32 unkC8; /* 2 uses */
    /* 0x0CC */ u8 padCC[0x4];
    /* 0x0D0 */ f32 unkD0; /* 4 uses */
    /* 0x0D4 */ f32 unkD4; /* 2 uses */
    /* 0x0D8 */ u8 padD8[0x4];
    /* 0x0DC */ f32 unkDC; /* 4 uses */
} T_func_8035ABAC_a0_p90_p5C;

/* pointed to by T_func_8035AFEC_ret_8035B04C.0x90, T_func_8035ABAC_a0.0xC; 2 functions */
typedef struct T_func_8035AFEC_a0 { /* size >= 0x46 */
    /* 0x000 */ u8 pad0[0x36];
    /* 0x036 */ u16 unk36; /* 1 use */
    /* 0x038 */ u8 pad38[0xC];
    /* 0x044 */ s16 unk44; /* 1 use */
} T_func_8035AFEC_a0;

/* pointed to by T_D_8038CC14_file057.0x0; 8 functions */
typedef struct T_func_8035AFEC_ret_8035B04C { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ u8 unk30; /* 1 use */
    /* 0x031 */ u8 unk31; /* 12 uses */
    /* 0x032 */ u8 pad32[0xE];
    /* 0x040 */ u8 unk40; /* 1 use */
    /* 0x041 */ u8 pad41[0x5];
    /* 0x046 */ s16 unk46; /* 1 use */
    /* 0x048 */ u8 pad48[0x4];
    /* 0x04C */ u16 unk4C; /* 5 uses */
    /* 0x04E */ u16 unk4E; /* 2 uses */
    /* 0x050 */ u8 pad50[0x2C];
    /* 0x07C */ u8 unk7C; /* 1 use */
    /* 0x07D */ u8 pad7D[0xF];
    /* 0x08C */ s32 unk8C; /* 1 use */
    /* 0x090 */ struct T_func_8035AFEC_a0 *unk90; /* 1 use */
} T_func_8035AFEC_ret_8035B04C;

/* parameter file057:func_80361910:2, file057:func_80361B7C:2; 15 functions */
typedef struct T_func_80361910_a2 { /* size >= 0x20 */
    /* 0x000 */ u8 pad0[0x1];
    /* 0x001 */ u8 unk1; /* 9 uses */
    /* 0x002 */ u8 unk2; /* 3 uses */
    /* 0x003 */ u8 unk3; /* 1 use */
    /* 0x004 */ u16 unk4; /* 5 uses */
    /* 0x006 */ u16 unk6; /* 7 uses */
    /* 0x008 */ u16 unk8; /* 4 uses */
    /* 0x00A */ u8 padA[0x2];
    /* 0x00C */ f32 unkC; /* 2 uses */
    /* 0x010 */ struct T_D_801E0D68 *unk10; /* 8 uses */
    /* 0x014 */ struct T_D_801E0D68 *unk14; /* 2 uses */
    /* 0x018 */ struct T_D_801E0D68 *unk18; /* 7 uses */
    /* 0x01C */ struct T_D_801E0D68 *unk1C; /* 1 use */
} T_func_80361910_a2;

/* anonymous; 6 functions */
typedef struct T_func_803698D0_ret { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ u8 pad4[0x6];
    /* 0x00A */ s16 unkA; /* 2 uses */
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ u8 padE[0x2];
    /* 0x010 */ f32 unk10; /* 1 use */
    /* 0x014 */ f32 unk14; /* 1 use */
    /* 0x018 */ struct T_D_801E0D68 *unk18; /* 4 uses */
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_func_803698D0_ret;

/* pointed to by T_func_8037488C_ret.0x2C; 1 functions */
typedef struct T_func_8037488C_ret_p2C { /* size >= 0x60 */
    /* 0x000 */ u8 pad0[0x5C];
    /* 0x05C */ struct T_func_8037488C_ret_p2C_p5C *unk5C; /* 1 use */
} T_func_8037488C_ret_p2C;

/* pointed to by T_func_8037488C_ret_p2C.0x5C; 1 functions */
typedef struct T_func_8037488C_ret_p2C_p5C { /* size >= 0x22 */
    /* 0x000 */ u8 pad0[0x20];
    /* 0x020 */ u16 unk20; /* 1 use */
} T_func_8037488C_ret_p2C_p5C;

/* pointed to by T_func_8037488C_ret.0x54; 1 functions */
typedef struct T_func_8037488C_ret_p54 { /* size >= 0x4 */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 1 use */
} T_func_8037488C_ret_p54;

/* pointed to by T_func_8037488C_ret.0x58; 1 functions */
typedef struct T_func_8037488C_ret_p58 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u16 unk2; /* 1 use */
} T_func_8037488C_ret_p58;

/* parameter file057:func_8037D320:0, file057:func_8037D5B4:0; 6 functions */
typedef struct T_func_8037D320_a0_2 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_8037D320_a0_2_pC *unkC; /* 1 use */
    /* 0x010 */ u8 pad10[0x80];
    /* 0x090 */ u8 unk90; /* 7 uses */
    /* 0x091 */ u8 unk91; /* 9 uses */
    /* 0x092 */ u8 unk92; /* 1 use */
    /* 0x093 */ u8 unk93; /* 3 uses */
    /* 0x094 */ u8 unk94; /* 2 uses */
    /* 0x095 */ u8 unk95; /* 2 uses */
    /* 0x096 */ u8 pad96[0x2];
    /* 0x098 */ u8 unk98; /* 2 uses */
    /* 0x099 */ u8 unk99; /* 4 uses */
    /* 0x09A */ u8 unk9A; /* 2 uses */
    /* 0x09B */ u8 unk9B; /* 4 uses */
    /* 0x09C */ u8 pad9C[0x4];
    /* 0x0A0 */ u16 unkA0; /* 2 uses */
    /* 0x0A2 */ u16 unkA2; /* 2 uses */
    /* 0x0A4 */ s16 unkA4; /* 1 use */
    /* 0x0A6 */ s16 unkA6; /* 1 use */
    /* 0x0A8 */ u8 padA8[0x1];
    /* 0x0A9 */ u8 unkA9; /* 2 uses */
    /* 0x0AA */ u8 unkAA; /* 2 uses */
    /* 0x0AB */ u8 padAB[0x1];
    /* 0x0AC */ u8 unkAC; /* 1 use */
    /* 0x0AD */ u8 unkAD; /* 3 uses */
    /* 0x0AE */ u8 padAE[0x2];
    /* 0x0B0 */ s16 unkB0; /* 22 uses */
    /* 0x0B2 */ u8 padB2[0x2];
} T_func_8037D320_a0_2;

/* pointed to by T_func_8037D320_a0_2.0xC; 1 functions */
typedef struct T_func_8037D320_a0_2_pC { /* size >= 0xAF */
    /* 0x000 */ u8 pad0[0xAE];
    /* 0x0AE */ u8 unkAE; /* 1 use */
} T_func_8037D320_a0_2_pC;

/* parameter file057:func_8038005C:0, file057:func_803805A0:0; 2 functions */
typedef struct T_func_8038005C_a0 { /* size >= 0x96 */
    /* 0x000 */ u8 pad0[0x90];
    /* 0x090 */ s16 unk90; /* 2 uses */
    /* 0x092 */ u8 pad92[0x2];
    /* 0x094 */ u8 unk94; /* 4 uses */
    /* 0x095 */ u8 pad95[0x1];
} T_func_8038005C_a0;

/* parameter file057:func_803831B8:0, file057:func_80383210:0; 3 functions */
typedef struct T_func_803831B8_a0 { /* size >= 0xB2 */
    /* 0x000 */ u8 pad0[0x9C];
    /* 0x09C */ u8 unk9C; /* 7 uses */
    /* 0x09D */ u8 pad9D[0xC];
    /* 0x0A9 */ u8 unkA9; /* 5 uses */
    /* 0x0AA */ u8 padAA[0x6];
    /* 0x0B0 */ s16 unkB0; /* 9 uses */
} T_func_803831B8_a0;

extern T_D_801E0D68 D_801E0D68;
extern T_D_801E4070_file057 D_801E4070;
extern T_D_80162DD0 D_80385540;
extern T_D_80162DD0 D_80385554;
extern T_D_80162DD0 D_8038557C;
extern T_D_801E0D68 D_80385630;
extern T_D_801E0D68 D_80385640;
extern T_D_80385650_file057 D_80385650;
extern T_D_8038565C_file057 D_8038565C;
extern T_D_80385668_file057 D_80385668;
extern T_D_80385674_file057 D_80385674;
extern T_D_80385680_file057 D_80385680;
extern T_D_8038568C_file057 D_8038568C;
extern T_D_80385694_file057 D_80385694;
extern u16 D_80385E64[];
extern struct T_D_80385E6C_file057_elem D_80385E6C[];
extern struct T_D_8038638C_file057_elem D_8038638C[];
extern struct T_D_803863B0_file057_elem D_803863B0[];
extern T_D_803863EC_file057 D_803863EC;
extern struct T_D_803863FC_file057_elem D_803863FC[];
extern s32 D_80386438;
extern T_D_801E0D68 D_80386450;
extern T_D_801E0D68 D_80386470;
extern T_D_801E0D68 D_80386480;
extern T_D_801E0D68 D_80386510;
extern T_D_801E0D68 D_80386530;
extern T_D_801E0D68 D_80386550;
extern T_D_801E0D68 D_80386660;
extern struct T_D_80386830_file057_elem D_80386830[];
extern T_D_801E0D68 D_80386878;
extern T_D_801E0D68 D_80386888;
extern T_D_801E0D68 D_80386898;
extern T_D_801E0D68 D_803868A8;
extern T_D_801E0D68 D_803868C8;
extern T_D_801E0D68 D_803868D8;
extern T_D_80162DD0 D_803868E8;
extern T_D_8016379C D_803868FC;
extern T_D_801E0D68 D_8038691C;
extern struct T_D_8038692C_file057_elem D_8038692C[];
extern struct T_D_8038696C_file057_elem D_8038696C[];
extern struct T_D_803869AC_file057_elem D_803869AC[];
extern T_D_803869EC_file057 D_803869EC;
extern T_D_80386A00_file057 D_80386A00;
extern struct T_D_80387010_file057_elem D_80387010[];
extern u8 D_80387254;
extern T_D_80387258_file057 D_80387258;
extern T_D_80387264_file057 D_80387264;
extern T_D_80387274_file057 D_80387274;
extern struct T_D_803872D0_file057_elem D_803872D0[];
extern struct T_D_80387860_file057_elem D_80387860[];
extern struct T_D_80385E6C_file057_elem D_80387A40[];
extern u8 D_80387AE0;
extern T_D_80387AE4_file057 D_80387AE4;
extern T_D_80387AF0_file057 D_80387AF0;
extern T_D_80387AFC_file057 D_80387AFC;
extern T_D_80387B08_file057 D_80387B08;
extern T_D_80387B20_file057 D_80387B20;
extern T_D_80387B2C_file057 D_80387B2C;
extern T_D_80387B38_file057 D_80387B38;
extern T_D_801E0D68 D_80387B60;
extern T_D_80387B70_file057 D_80387B70;
extern T_D_80387B7C_file057 D_80387B7C;
extern T_D_80387B88_file057 D_80387B88;
extern T_D_80162DD0 D_80387B94;
extern T_D_80162DD0 D_80387BB0;
extern T_D_80162DD0 D_80387BC4;
extern T_D_80162DD0 D_80387BD8;
extern T_D_80162DD0 D_80387BEC;
extern T_D_80162DD0 D_80387C00;
extern T_D_80162DD0 D_80387C14;
extern T_D_80162DD0 D_80387C28;
extern T_D_80162DD0 D_80387C3C;
extern T_D_80162DD0 D_80387C50;
extern T_D_80162DD0 D_80387C64;
extern struct T_D_80388098_file057_elem D_80388098[];
extern T_D_80162DD0 D_803883E0;
extern T_D_80388400_file057 D_80388400;
extern u16 D_80388410[];
extern u16 D_80388D56[];
extern u16 D_80388E1C[];
extern u16 D_80388EE2[];
extern u16 D_80388FA8[];
extern u16 D_8038906E[];
extern u16 D_80389134[];
extern u16 D_803891FA[];
extern u16 D_803892C0[];
extern u16 D_80389386[];
extern u16 D_8038944C[];
extern u16 D_80389512[];
extern u16 D_803895D8[];
extern T_D_80162DD0 D_803896DC;
extern struct T_D_80389754_file057_elem D_80389754[];
extern T_D_80162DD0 D_80389780;
extern T_D_80389794_file057 D_80389794;
extern void (*D_803897C0)();
extern T_D_80162DD0 D_803897CC;
extern T_D_80162DD0 D_803897E0;
extern T_D_803897F4_file057 D_803897F4;
extern T_D_8016379C D_80389808;
extern u8 D_80389818;
extern struct T_D_803898E0_file057_elem D_803898E0[];
extern T_D_80389AD8_file057 D_80389AD8;
extern T_D_80162DD0 D_80389B14;
extern T_D_80162DD0 D_80389B28;
extern T_D_80162DD0 D_80389B3C;
extern T_D_80162DD0 D_80389B50;
extern T_D_80162DD0 D_80389B64;
extern T_D_80162DD0 D_80389B78;
extern T_D_80162DD0 D_80389B8C;
extern T_D_80389BB4_file057 D_80389BB4;
extern s32 D_80389BC4;
extern s32 D_80389BCC;
extern s32 D_80389BD4;
extern f32 D_80389EC8;
extern f32 D_80389ECC;
extern f32 D_80389ED0;
extern f64 D_80389ED8;
extern f32 D_80389EE0;
extern f32 D_80389EE4;
extern f32 D_80389EE8;
extern f32 D_8038A034;
extern f32 D_8038A038;
extern f32 D_8038A03C;
extern f32 D_8038A040;
extern f32 D_8038A044;
extern f32 D_8038A048;
extern f32 D_8038A04C;
extern f32 D_8038A064;
extern f32 D_8038A068;
extern f32 D_8038A06C;
extern f32 D_8038A070;
extern f32 D_8038A074;
extern f32 D_8038A078;
extern f32 D_8038A07C;
extern f32 D_8038A080;
extern f64 D_8038A088;
extern f64 D_8038A090;
extern f32 D_8038A098;
extern f32 D_8038A09C;
extern f32 D_8038A0A0;
extern f32 D_8038A0A4;
extern f32 D_8038A0A8;
extern f32 D_8038A0AC;
extern f32 D_8038A0B0;
extern f64 D_8038A150;
extern f64 D_8038A690;
extern f64 D_8038A698;
extern f64 D_8038A6A0;
extern f64 D_8038A6A8;
extern f64 D_8038A6B0;
extern f64 D_8038A6B8;
extern f64 D_8038A6E0;
extern f64 D_8038A9E0;
extern f64 D_8038A9E8;
extern f64 D_8038A9F0;
extern f64 D_8038A9F8;
extern f64 D_8038AA00;
extern f64 D_8038AA08;
extern f32 D_8038AA10;
extern f64 D_8038AA18;
extern f64 D_8038AD60;
extern f64 D_8038B0A8;
extern f64 D_8038B0B0;
extern f64 D_8038B0B8;
extern f64 D_8038B0C0;
extern f64 D_8038B0C8;
extern f64 D_8038B0D0;
extern f64 D_8038B0D8;
extern f64 D_8038B0E0;
extern f64 D_8038B100;
extern f64 D_8038B108;
extern f64 D_8038B110;
extern f64 D_8038B118;
extern f64 D_8038B120;
extern f64 D_8038B128;
extern f64 D_8038B130;
extern f32 D_8038B138;
extern f64 D_8038B260;
extern f64 D_8038B268;
extern f64 D_8038B270;
extern f32 D_8038B394;
extern f32 D_8038B398;
extern f32 D_8038B39C;
extern f32 D_8038B3A0;
extern f32 D_8038B3A4;
extern f32 D_8038B3BC;
extern f32 D_8038B3C0;
extern f32 D_8038B3C4;
extern f32 D_8038B3F0;
extern f32 D_8038B3F4;
extern f32 D_8038B3F8;
extern f32 D_8038B3FC;
extern f32 D_8038B400;
extern f32 D_8038B404;
extern f32 D_8038B408;
extern f32 D_8038B40C;
extern f32 D_8038B410;
extern f32 D_8038B414;
extern f32 D_8038B418;
extern f32 D_8038B41C;
extern f32 D_8038B420;
extern f32 D_8038B424;
extern f32 D_8038B428;
extern f32 D_8038B42C;
extern f32 D_8038B430;
extern f32 D_8038B434;
extern f32 D_8038B438;
extern f32 D_8038B43C;
extern f32 D_8038B440;
extern f32 D_8038B444;
extern f64 D_8038B448;
extern f32 D_8038B450;
extern f64 D_8038B458;
extern f64 D_8038B460;
extern f64 D_8038B468;
extern f64 D_8038B470;
extern f64 D_8038B838;
extern f64 D_8038B840;
extern f32 D_8038BA70;
extern f64 D_8038BA78;
extern f64 D_8038BB18;
extern f64 D_8038BB40;
extern struct T_D_8038BB50_file057_elem D_8038BB50[];
extern T_D_8038BBD0_file057 D_8038BBD0;
extern u8 D_8038BC0C;
extern u8 D_8038BC10;
extern u8 D_8038BC14;
extern u8 D_8038BC1C;
extern u8 D_8038BC24;
extern u8 D_8038BC2C;
extern u8 D_8038BC34;
extern u8 D_8038BC38;
extern u8 D_8038BC40;
extern u8 D_8038BC44;
extern u8 D_8038BC4C;
extern u8 D_8038BC54;
extern u8 D_8038BC5C;
extern u8 D_8038BC60;
extern f32 D_8038BC7C;
extern f32 D_8038BC80;
extern f32 D_8038BC84;
extern u8 D_8038BC90;
extern u8 D_8038BCB4;
extern u8 D_8038BCC0;
extern u8 D_8038BCD4;
extern u8 D_8038BCD8;
extern u8 D_8038BCDC;
extern u8 D_8038BD28;
extern u8 D_8038BD3C;
extern u8 D_8038BD44;
extern u8 D_8038BD4C;
extern u8 D_8038BD54;
extern u8 D_8038BD60;
extern u8 D_8038BD6C;
extern u8 D_8038BD78;
extern u8 D_8038BD7C;
extern u8 D_8038BD80;
extern u8 D_8038BD84;
extern u8 D_8038BD88;
extern u8 D_8038BD8C;
extern u8 D_8038BD90;
extern u8 D_8038BD94;
extern f32 D_8038BDEC;
extern f64 D_8038BDF0;
extern f64 D_8038BDF8;
extern f64 D_8038BE00;
extern f64 D_8038BE08;
extern f64 D_8038BE10;
extern f64 D_8038BE18;
extern f64 D_8038BE20;
extern f64 D_8038BE28;
extern f64 D_8038BE30;
extern f64 D_8038BE38;
extern f32 D_8038BE40;
extern f32 D_8038BE44;
extern f32 D_8038BE48;
extern u8 D_8038C87C;
extern u8 D_8038C884;
extern u8 D_8038C88C;
extern u8 D_8038C894;
extern u8 D_8038C89C;
extern u8 D_8038C8A4;
extern u8 D_8038C8AC;
extern u8 D_8038C8B4;
extern u8 D_8038C8BC;
extern u8 D_8038C8C4;
extern u8 D_8038C8CC;
extern u8 D_8038C8D4;
extern u8 D_8038C8DC;
extern u8 D_8038C8E4;
extern u8 D_8038C8EC;
extern u8 D_8038C8F4;
extern u8 D_8038C8FC;
extern u8 D_8038C904;
extern u8 D_8038C90C;
extern u8 D_8038C914;
extern u8 D_8038C91C;
extern u8 D_8038C924;
extern u8 D_8038C92C;
extern u8 D_8038C934;
extern u8 D_8038C93C;
extern u8 D_8038C944;
extern u8 D_8038C94C;
extern u8 D_8038C954;
extern u8 D_8038C95C;
extern u8 D_8038C964;
extern u8 D_8038C96C;
extern u8 D_8038C974;
extern u8 D_8038C97C;
extern u8 D_8038C984;
extern u8 D_8038C98C;
extern u8 D_8038C994;
extern u8 D_8038C99C;
extern u8 D_8038C9B0;
extern u8 D_8038C9B8;
extern u8 D_8038C9C0;
extern u8 D_8038C9C8;
extern u8 D_8038C9DC;
extern u8 D_8038C9E0;
extern u8 D_8038C9E4;
extern u8 D_8038C9E8;
extern u8 D_8038CA30;
extern u8 D_8038CA3C;
extern u8 D_8038CA54;
extern u8 D_8038CA5C;
extern u8 D_8038CA64;
extern u8 D_8038CA6C;
extern u8 D_8038CA74;
extern u8 D_8038CA7C;
extern u8 D_8038CA80;
extern u8 D_8038CA84;
extern u8 D_8038CA88;
extern u8 D_8038CA8C;
extern u8 D_8038CAE0;
extern u8 D_8038CB00;
extern u8 D_8038CB10;
extern u8 D_8038CB14;
extern u8 D_8038CB1C;
extern u8 D_8038CB20;
extern u8 D_8038CB24;
extern u8 D_8038CB2C;
extern u8 D_8038CB30;
extern u8 D_8038CB40;
extern u8 D_8038CB50;
extern u8 D_8038CB5C;
extern u8 D_8038CB68;
extern u8 D_8038CB74;
extern u8 D_8038CB80;
extern u8 D_8038CB8C;
extern u8 D_8038CB90;
extern u8 D_8038CB94;
extern u8 D_8038CB98;
extern struct T_func_80359560_ret_803595EC *D_8038CC10;
extern struct T_func_8035AFEC_ret_8035B04C *D_8038CC14;
extern T_D_8038CC20_file057 D_8038CC20;
extern u8 D_8038CC60;
extern u8 D_8038CC61;
extern u8 D_8038CC62;
extern struct T_D_8038CC64_file057_p0 *D_8038CC64;
extern T_D_8038CC70_file057 D_8038CC70;
extern T_D_8038CCB0_file057 D_8038CCB0;
extern u8 D_8038CCC0[];
extern u8 D_8038CCC1[];
extern u8 D_8038CCE0[];
extern s32 D_8038CD00[];
extern u8 D_8038CD70;
extern struct T_D_8038CD74_file057_elem D_8038CD74[];
extern u8 D_8038CE18;
extern struct T_D_8038CE1C_file057_elem D_8038CE1C[];
extern u8 D_8038CEC0;
extern struct T_D_8038CEC4_file057_elem D_8038CEC4[];
extern T_D_8038CF70_file057 D_8038CF70;
extern struct T_func_80107830_a0 *D_8038CFB0;
extern struct T_func_801451C0_a0 *D_8038CFB4;

#endif
