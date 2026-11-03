#ifndef TYPES_MAIN_H
#define TYPES_MAIN_H

/* Recovered types for main (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "gga/audio.h"
#include "gga/heap.h"
#include "gga/snd.h"

/* D_700000, D_800433E0, D_80043430 (+12); 12 functions */
typedef struct T_D_700000 { /* size >= 0x24 */
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
    /* 0x012 */ u8 unk12; /* 1 use */
    /* 0x013 */ u8 unk13; /* 1 use */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ u8 unk18; /* 1 use */
    /* 0x019 */ u8 unk19; /* 1 use */
    /* 0x01A */ u8 unk1A; /* 1 use */
    /* 0x01B */ u8 unk1B; /* 1 use */
    /* 0x01C */ u8 unk1C; /* 1 use */
    /* 0x01D */ u8 unk1D; /* 1 use */
    /* 0x01E */ u8 unk1E; /* 1 use */
    /* 0x01F */ u8 unk1F; /* 1 use */
    /* 0x020 */ u8 unk20; /* 1 use */
    /* 0x021 */ u8 unk21; /* 1 use */
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 unk23; /* 1 use */
} T_D_700000;

/* D_80037358, D_800374A8, D_8003761C; 2 functions */
typedef struct T_D_80037358_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ u8 pad8[0x4];
} T_D_80037358_elem;

/* D_80037790; 2 functions */
typedef struct T_D_80037790 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
    /* 0x014 */ s32 unk14; /* 2 uses */
    /* 0x018 */ s32 unk18; /* 2 uses */
    /* 0x01C */ s32 unk1C; /* 2 uses */
} T_D_80037790;

/* D_800377B0; 1 functions */
typedef struct T_D_800377B0_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_800377B0_elem;

/* D_80037A30; 3 functions */
typedef struct T_D_80037A30_elem { /* size 0x4 */
    /* 0x000 */ u16 unk0; /* 9 uses */
    /* 0x002 */ u8 pad2[0x1];
    /* 0x003 */ u8 unk3; /* 1 use */
} T_D_80037A30_elem;

/* D_80037C5C; 6 functions */
typedef struct T_D_80037C5C_elem { /* size 0x8 */
    /* 0x000 */ s32 unk0; /* 6 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
} T_D_80037C5C_elem;

/* D_800433A0; 5 functions */
typedef struct T_D_800433A0 { /* size >= 0x10 */
    /* 0x000 */ s32 w; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 4 uses */
    /* 0x008 */ s32 unk8; /* 4 uses */
    /* 0x00C */ s32 unkC; /* 4 uses */
} T_D_800433A0;

/* D_800433B0; 2 functions */
typedef struct T_D_800433B0 { /* size >= 0x10 */
    /* 0x000 */ s32 w; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_800433B0;

/* D_800433C0; 3 functions */
typedef struct T_D_800433C0 { /* size >= 0x10 */
    /* 0x000 */ s32 w; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_800433C0;

/* D_800433D0; 2 functions */
typedef struct T_D_800433D0 { /* size >= 0x10 */
    /* 0x000 */ s32 w; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_800433D0;

/* D_80043570; 1 functions */
typedef struct T_D_80043570 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80043570;

/* D_80043578; 1 functions */
typedef struct T_D_80043578 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_D_80043578;

/* D_80043584; 1 functions */
typedef struct T_D_80043584 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80043584;

/* D_80043750; 1 functions */
typedef struct T_D_80043750 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80043750;

/* D_80043758; 1 functions */
typedef struct T_D_80043758 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80043758;

/* pointed to by T_D_80044124_elem.0x0; 4 functions */
typedef struct T_D_80044124_elem_p0 { /* size >= 0xE */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ u16 unk4; /* 4 uses */
    /* 0x006 */ u8 pad6[0x6];
    /* 0x00C */ u16 unkC; /* 4 uses */
} T_D_80044124_elem_p0;

/* D_8004413C; 1 functions */
typedef struct T_D_8004413C_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8004413C_elem;

/* D_80044184; 1 functions */
typedef struct T_D_80044184 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 pad5[0x3];
} T_D_80044184;

/* D_8004418C; 1 functions */
typedef struct T_D_8004418C { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_D_8004418C;

/* D_80044198; 1 functions */
typedef struct T_D_80044198 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80044198;

/* D_800441A0; 1 functions */
typedef struct T_D_800441A0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_D_800441A0;

/* D_800441AC; 1 functions */
typedef struct T_D_800441AC { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_800441AC;

/* D_800441B4; 1 functions */
typedef struct T_D_800441B4 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_D_800441B4;

/* D_800441C0; 1 functions */
typedef struct T_D_800441C0 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_800441C0;

/* D_800441C8; 1 functions */
typedef struct T_D_800441C8 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_800441C8;

/* D_800441D0; 1 functions */
typedef struct T_D_800441D0 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_800441D0;

/* D_800441D8; 1 functions */
typedef struct T_D_800441D8 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ u16 unk1C; /* 1 use */
    /* 0x01E */ u8 pad1E[0x2];
} T_D_800441D8;

/* D_800441F8; 1 functions */
typedef struct T_D_800441F8 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_D_800441F8;

/* D_80044204; 1 functions */
typedef struct T_D_80044204 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80044204;

/* D_8004420C; 1 functions */
typedef struct T_D_8004420C { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 pad5[0x3];
} T_D_8004420C;

/* D_80044214; 1 functions */
typedef struct T_D_80044214 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 pad5[0x3];
} T_D_80044214;

/* D_800442E8; 1 functions */
typedef struct T_D_800442E8_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_800442E8_elem;

/* D_800444E0; 1 functions */
typedef struct T_D_800444E0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_D_800444E0;

/* D_800444EC; 1 functions */
typedef struct T_D_800444EC { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_800444EC;

/* D_800444F4; 1 functions */
typedef struct T_D_800444F4 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_800444F4;

/* D_80044514; 1 functions */
typedef struct T_D_80044514 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_D_80044514;

/* D_80044520; 1 functions */
typedef struct T_D_80044520 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80044520;

/* D_80044528; 1 functions */
typedef struct T_D_80044528 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_80044528;

/* D_80044548; 1 functions */
typedef struct T_D_80044548_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80044548_elem;

/* D_80044608; 1 functions */
typedef struct T_D_80044608 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_D_80044608;

/* D_80044614; 1 functions */
typedef struct T_D_80044614 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80044614;

/* D_8004461C; 1 functions */
typedef struct T_D_8004461C { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_8004461C;

/* D_80044624; 1 functions */
typedef struct T_D_80044624 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_80044624;

/* D_8004462C; 1 functions */
typedef struct T_D_8004462C { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8004462C;

/* D_80044638; 1 functions */
typedef struct T_D_80044638 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_80044638;

/* D_80044640; 1 functions */
typedef struct T_D_80044640 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_80044640;

/* D_80044648; 1 functions */
typedef struct T_D_80044648_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80044648_elem;

/* D_800446A4; 1 functions */
typedef struct T_D_800446A4 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_800446A4;

/* D_800446AC; 1 functions */
typedef struct T_D_800446AC_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_800446AC_elem;

/* D_800446F8; 1 functions */
typedef struct T_D_800446F8_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_800446F8_elem;

/* D_8004474C; 1 functions */
typedef struct T_D_8004474C_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8004474C_elem;

/* D_800447A0; 1 functions */
typedef struct T_D_800447A0 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_800447A0;

/* D_800447B0; 1 functions */
typedef struct T_D_800447B0 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_800447B0;

/* D_800447D0; 1 functions */
typedef struct T_D_800447D0 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_800447D0;

/* D_8004481C; 1 functions */
typedef struct T_D_8004481C_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8004481C_elem;

/* D_80044918; 1 functions */
typedef struct T_D_80044918 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_80044918;

/* anonymous; 1 functions */
typedef struct T_D_800479A4_elem_p0_elem { /* size 0x8 */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ s32 *unk4; /* 2 uses */
} T_D_800479A4_elem_p0_elem;

/* D_80047E00; 1 functions */
typedef struct T_D_80047E00_elem { /* size 0x4 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ s16 unk2; /* 1 use */
} T_D_80047E00_elem;

/* D_8004889C; 1 functions */
typedef struct T_D_8004889C_elem { /* size 0x8 */
    /* 0x000 */ s8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x7];
} T_D_8004889C_elem;

/* D_80049900; 1 functions */
typedef struct T_D_80049900 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ void (*unk8)(); /* 1 use */
} T_D_80049900;

/* pointed to by T_D_80049938.0x0; 3 functions */
typedef struct T_D_80049938_p0 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 3 uses */
} T_D_80049938_p0;

/* D_80049940; 12 functions */
typedef struct T_D_80049940 { /* size >= 0x11C */
    /* 0x000 */ struct T_func_80027824_ret_80027828 *unk0; /* 15 uses */
    /* 0x004 */ u8 pad4[0x114];
    /* 0x118 */ s32 unk118; /* 1 use */
} T_D_80049940;

/* D_8004AB10; 4 functions */
typedef struct T_D_8004AB10 { /* size >= 0x1C */
    /* 0x000 */ s32 unk0; /* 5 uses */
    /* 0x004 */ void *unk4; /* 1 use */
    /* 0x008 */ void *unk8; /* 1 use */
    /* 0x00C */ void *unkC; /* 1 use */
    /* 0x010 */ void *unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
} T_D_8004AB10;

/* pointed to by T_D_8004AB30_elem.0x0; 3 functions */
typedef struct T_D_8004AB30_elem_p0 { /* size >= 0x9 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ u8 unk4; /* 6 uses */
    /* 0x005 */ u8 unk5; /* 9 uses */
    /* 0x006 */ u8 unk6; /* 9 uses */
    /* 0x007 */ u8 unk7; /* 9 uses */
    /* 0x008 */ u8 unk8; /* 9 uses */
} T_D_8004AB30_elem_p0;

/* D_8004AE10; 2 functions */
typedef struct T_D_8004AE10_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8004AE10_elem;

/* pointed to by T_D_8004AE60.0x0, T_D_8004AE60_p0.0x0; 4 functions */
typedef struct T_D_8004AE60_p0 { /* size >= 0x20 */
    /* 0x000 */ struct T_D_8004AE60_p0 *unk0; /* 9 uses */
    /* 0x004 */ struct T_D_8004AE60_p0 *unk4; /* 6 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
    /* 0x010 */ u32 unk10; /* 8 uses */
    /* 0x014 */ u32 unk14; /* 8 uses */
    /* 0x018 */ s32 unk18; /* 2 uses */
    /* 0x01C */ s32 unk1C; /* 2 uses */
} T_D_8004AE60_p0;

/* D_8004AE70; 10 functions */
typedef struct T_D_8004AE70 { /* size >= 0x34 */
    /* 0x000 */ u16 unk0; /* 16 uses */
    /* 0x002 */ s16 unk2; /* 2 uses */
    /* 0x004 */ void *unk4; /* 8 uses */
    /* 0x008 */ struct T_D_8004AEE0_elem *unk8; /* 8 uses */
    /* 0x00C */ s32 unkC; /* 23 uses */
    /* 0x010 */ void *unk10; /* 1 use */
    /* 0x014 */ void *unk14; /* 1 use */
    /* 0x018 */ u8 pad18[0x8];
    /* 0x020 */ s32 unk20; /* 4 uses */
    /* 0x024 */ f32 unk24; /* 2 uses */
    /* 0x028 */ u16 unk28; /* 1 use */
    /* 0x02A */ u8 pad2A[0x2];
    /* 0x02C */ s32 unk2C; /* 6 uses */
    /* 0x030 */ u8 pad30[0x2];
    /* 0x032 */ s16 unk32; /* 1 use */
} T_D_8004AE70;

/* anonymous; 1 functions */
typedef struct T_D_8004AE70_elem { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_8004AE70_elem;

/* D_8004AEE0, D_8004AF30, D_8004AF80; 4 functions */
typedef struct T_D_8004AEE0_elem { /* size 0x14 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 7 uses */
    /* 0x008 */ s32 unk8; /* 3 uses */
    /* 0x00C */ s32 unkC; /* 4 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
} T_D_8004AEE0_elem;

/* D_8004AFF0; 1 functions */
typedef struct T_D_8004AFF0 { /* size >= 0x1C */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ void *unk4; /* 1 use */
    /* 0x008 */ void *unk8; /* 1 use */
    /* 0x00C */ void *unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
} T_D_8004AFF0;

/* D_8004D300; 1 functions */
typedef struct T_D_8004D300 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ f64 unk8; /* 2 uses */
    /* 0x010 */ f64 unk10; /* 2 uses */
    /* 0x018 */ f64 unk18; /* 2 uses */
    /* 0x020 */ f64 unk20; /* 2 uses */
} T_D_8004D300;

/* D_8004D480; 1 functions */
typedef struct T_D_8004D480 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ f64 unk8; /* 1 use */
    /* 0x010 */ f64 unk10; /* 1 use */
    /* 0x018 */ f64 unk18; /* 1 use */
    /* 0x020 */ f64 unk20; /* 1 use */
} T_D_8004D480;

/* D_8005C3A8; 2 functions */
typedef struct T_D_8005C3A8_elem { /* size 0x58 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ u8 padC[0x10];
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ u8 pad20[0x18];
    /* 0x038 */ void *unk38; /* 1 use */
    /* 0x03C */ s32 unk3C; /* 1 use */
    /* 0x040 */ s32 unk40; /* 1 use */
    /* 0x044 */ s32 unk44; /* 1 use */
    /* 0x048 */ u8 pad48[0x10];
} T_D_8005C3A8_elem;

/* D_8005C4B0; 16 functions */
typedef struct T_D_8005C4B0 { /* size >= 0x8C8 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ s16 unk2; /* 1 use */
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x882];
    /* 0x888 */ struct T_func_80000934_a1 *unk888; /* 5 uses */
    /* 0x88C */ s32 unk88C; /* 3 uses */
    /* 0x890 */ s32 unk890; /* 2 uses */
    /* 0x894 */ s32 unk894; /* 3 uses */
    /* 0x898 */ void *unk898; /* 11 uses */
    /* 0x89C */ void *unk89C; /* 6 uses */
    /* 0x8A0 */ s32 unk8A0; /* 3 uses */
    /* 0x8A4 */ s32 unk8A4; /* 3 uses */
    /* 0x8A8 */ s32 unk8A8; /* 1 use */
    /* 0x8AC */ s32 unk8AC; /* 1 use */
    /* 0x8B0 */ s32 unk8B0; /* 1 use */
    /* 0x8B4 */ s32 unk8B4; /* 1 use */
    /* 0x8B8 */ s32 unk8B8; /* 1 use */
    /* 0x8BC */ s32 unk8BC; /* 1 use */
    /* 0x8C0 */ s32 unk8C0; /* 1 use */
    /* 0x8C4 */ s32 unk8C4; /* 1 use */
} T_D_8005C4B0;

/* D_8005CD80; 1 functions */
typedef struct T_D_8005CD80 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 pad3[0x1];
    /* 0x004 */ void *unk4; /* 1 use */
    /* 0x008 */ void *unk8; /* 1 use */
    /* 0x00C */ void *unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8005CD80;

/* D_8005CDA0, D_800CD6F0; 3 functions */
typedef struct T_D_8005CDA0 { /* size >= 0x14 */
    /* 0x000 */ struct T_D_8005CDA0 *next; /* 2 uses */
    /* 0x004 */ u8 unk4; /* 2 uses */
    /* 0x005 */ u8 unk5; /* 2 uses */
    /* 0x006 */ u8 unk6; /* 2 uses */
    /* 0x007 */ u8 unk7; /* 2 uses */
    /* 0x008 */ u8 unk8; /* 2 uses */
    /* 0x009 */ u8 unk9; /* 2 uses */
    /* 0x00A */ u8 padA[0x2];
    /* 0x00C */ s32 unkC; /* 4 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
} T_D_8005CDA0;

/* D_8005CE50; 1 functions */
typedef struct T_D_8005CE50_elem { /* size 0x6 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ s8 unk2; /* 1 use */
    /* 0x003 */ s8 unk3; /* 1 use */
    /* 0x004 */ u8 pad4[0x2];
} T_D_8005CE50_elem;

/* D_80062D30; 2 functions */
typedef struct T_D_80062D30_elem { /* size 0x6 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ s16 unk2; /* 2 uses */
    /* 0x004 */ s16 unk4; /* 5 uses; loaded both signed (lh x3) and unsigned (lhu x2) */
} T_D_80062D30_elem;

/* D_800631B0; 2 functions */
typedef struct T_D_800631B0 { /* size >= 0x30 */
    /* 0x000 */ f32 unk0; /* 10 uses */
    /* 0x004 */ f32 unk4; /* 6 uses */
    /* 0x008 */ f32 unk8; /* 8 uses */
    /* 0x00C */ f32 unkC; /* 5 uses */
    /* 0x010 */ f32 unk10; /* 2 uses */
    /* 0x014 */ f32 unk14; /* 2 uses */
    /* 0x018 */ f32 unk18; /* 5 uses */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 3 uses */
    /* 0x024 */ f32 unk24; /* 4 uses */
    /* 0x028 */ f32 unk28; /* 2 uses */
    /* 0x02C */ f32 unk2C; /* 2 uses */
} T_D_800631B0;

/* D_800631BC; 1 functions */
typedef struct T_D_800631BC { /* size >= 0xC */
    /* 0x000 */ s32 x; /* 1 use */
    /* 0x004 */ s32 y; /* 1 use */
    /* 0x008 */ s32 z; /* 1 use */
} T_D_800631BC;

/* D_800631C8; 2 functions */
typedef struct T_D_800631C8 { /* size >= 0xC */
    /* 0x000 */ s32 x; /* 2 uses */
    /* 0x004 */ s32 y; /* 2 uses */
    /* 0x008 */ s32 z; /* 2 uses */
} T_D_800631C8;

/* D_800631D4; 1 functions */
typedef struct T_D_800631D4 { /* size >= 0xC */
    /* 0x000 */ s32 x; /* 1 use */
    /* 0x004 */ s32 y; /* 1 use */
    /* 0x008 */ s32 z; /* 1 use */
} T_D_800631D4;

/* D_800631E0; 5 functions */
typedef struct T_D_800631E0 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 3 uses */
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ u16 unk8; /* 1 use; also s32@0x8 */
    /* 0x00A */ u16 unkA; /* 2 uses; also s32@0x8 */
    /* 0x00C */ u8 unkC; /* 2 uses; also s32@0xC */
    /* 0x00D */ u8 unkD; /* 1 use; also s32@0xC */
    /* 0x00E */ u8 padE[0x2];
} T_D_800631E0;

/* D_800631F0; 4 functions */
typedef struct T_D_800631F0_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ u16 unk4; /* 13 uses; also s32@0x4 */
    /* 0x006 */ u16 unk6; /* 4 uses; also s32@0x4 */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_800631F0_elem;

/* D_80063670; 3 functions */
typedef struct T_D_80063670_elem { /* size 0x14 */
    /* 0x000 */ s16 unk0; /* 1 use; also s32@0x0 */
    /* 0x002 */ s16 unk2; /* 1 use; also s32@0x0 */
    /* 0x004 */ s16 unk4; /* 1 use; also s32@0x4 */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ f32 x; /* 2 uses */
    /* 0x00C */ f32 y; /* 2 uses */
    /* 0x010 */ f32 z; /* 2 uses */
} T_D_80063670_elem;

/* D_80063A30; 2 functions */
typedef struct T_D_80063A30_elem { /* size 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80063A30_elem;

/* D_80063DF0; 5 functions */
typedef struct T_D_80063DF0_elem_2 { /* size 0x8 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ s16 unk2; /* 2 uses */
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ s16 unk6; /* 1 use */
} T_D_80063DF0_elem_2;

/* D_800692B0; 10 functions */
typedef struct T_D_800692B0_elem { /* size 0x20 */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ u16 unk8; /* 40 uses */
    /* 0x00A */ u8 padA[0x6];
    /* 0x010 */ u16 unk10; /* 9 uses */
    /* 0x012 */ u8 pad12[0xE];
} T_D_800692B0_elem;

/* anonymous; 1 functions */
typedef struct T_D_800692B0_elem_2 { /* size >= 0x10044 */
    /* 0x000 */ u8 pad0[0x10040];
    /* 0x10040 */ void *unk10040; /* 1 use */
} T_D_800692B0_elem_2;

/* D_800892B0; 68 functions */
typedef struct T_D_800892B0 { /* size >= 0x4304 */
    /* 0x000 */ u8 pad0[0x90];
    /* 0x090 */ u16 unk90; /* 2 uses */
    /* 0x092 */ u16 unk92; /* 5 uses */
    /* 0x094 */ u16 unk94; /* 5 uses */
    /* 0x096 */ u16 unk96; /* 5 uses */
    /* 0x098 */ u16 unk98; /* 6 uses */
    /* 0x09A */ s16 unk9A; /* 1 use */
    /* 0x09C */ s16 unk9C; /* 6 uses */
    /* 0x09E */ s16 unk9E; /* 1 use */
    /* 0x0A0 */ s16 unkA0; /* 3 uses */
    /* 0x0A2 */ u8 padA2[0x2];
    /* 0x0A4 */ s16 unkA4; /* 15 uses */
    /* 0x0A6 */ s16 unkA6; /* 7 uses */
    /* 0x0A8 */ u16 unkA8; /* 1 use */
    /* 0x0AA */ u8 padAA[0x2];
    /* 0x0AC */ struct T_D_80089378 *free; /* 7 uses */
    /* 0x0B0 */ struct T_D_80089378 *unkB0; /* 7 uses */
    /* 0x0B4 */ u16 unkB4; /* 2 uses */
    /* 0x0B6 */ u16 unkB6; /* 2 uses */
    /* 0x0B8 */ struct T_D_80089378 *unkB8; /* 3 uses */
    /* 0x0BC */ struct T_D_80089378 *unkBC; /* 3 uses */
    /* 0x0C0 */ u8 *unkC0; /* 3 uses */
    /* 0x0C4 */ u8 *unkC4; /* 3 uses */
    /* 0x0C8 */ struct T_D_80089378 *unkC8; /* 2 uses */
    /* 0x0CC */ u8 padCC[0x10];
    /* 0x0DC */ s32 unkDC; /* 1 use */
    /* 0x0E0 */ u8 padE0[0x9C];
    /* 0x17C */ struct T_D_800892B0_p17C *unk17C; /* 3 uses */
    /* 0x180 */ u8 pad180[0x20];
    /* 0x1A0 */ s32 unk1A0; /* 1 use */
    /* 0x1A4 */ u8 pad1A4[0xC];
    /* 0x1B0 */ struct T_func_800069A8_a0 *arg; /* 5 uses */
    /* 0x1B4 */ s16 unk1B4; /* 7 uses */
    /* 0x1B6 */ s16 unk1B6; /* 7 uses */
    /* 0x1B8 */ s16 unk1B8; /* 7 uses */
    /* 0x1BA */ s16 unk1BA; /* 7 uses */
    /* 0x1BC */ u8 unk1BC; /* 3 uses */
    /* 0x1BD */ u8 unk1BD; /* 3 uses */
    /* 0x1BE */ u8 pad1BE[0x6];
    /* 0x1C4 */ u16 unk1C4; /* 1 use */
    /* 0x1C6 */ u16 unk1C6; /* 3 uses */
    /* 0x1C8 */ u16 unk1C8; /* 27 uses */
    /* 0x1CA */ s16 unk1CA; /* 1 use */
    /* 0x1CC */ s16 unk1CC; /* 1 use */
    /* 0x1CE */ u16 unk1CE; /* 1 use */
    /* 0x1D0 */ u16 unk1D0; /* 14 uses */
    /* 0x1D2 */ u8 pad1D2[0x14];
    /* 0x1E6 */ u16 unk1E6; /* 1 use */
    /* 0x1E8 */ u16 unk1E8; /* 5 uses */
    /* 0x1EA */ u8 pad1EA[0x6];
    /* 0x1F0 */ u16 unk1F0; /* 1 use */
    /* 0x1F2 */ u8 pad1F2[0x14];
    /* 0x206 */ u16 unk206; /* 1 use */
    /* 0x208 */ u8 pad208[0x1E];
    /* 0x226 */ u16 unk226; /* 1 use */
    /* 0x228 */ u8 pad228[0x4058];
    /* 0x4280 */ struct T_D_80089378 *unk4280; /* 1 use */
    /* 0x4284 */ s32 unk4284; /* 1 use */
    /* 0x4288 */ struct T_D_80089378 *unk4288; /* 1 use */
    /* 0x428C */ s32 unk428C; /* 1 use */
    /* 0x4290 */ struct T_func_8000BC5C_a0 *unk4290; /* 30 uses */
    /* 0x4294 */ u8 unk4294; /* 5 uses */
    /* 0x4295 */ u8 unk4295; /* 2 uses */
    /* 0x4296 */ u8 pad4296[0x2];
    /* 0x4298 */ struct T_D_800892B0_p4298 *unk4298; /* 7 uses */
    /* 0x429C */ s32 unk429C; /* 10 uses */
    /* 0x42A0 */ u8 unk42A0; /* 4 uses */
    /* 0x42A1 */ u8 pad42A1[0x3];
    /* 0x42A4 */ s32 unk42A4; /* 1 use */
    /* 0x42A8 */ struct T_D_80089378 *unk42A8; /* 6 uses */
    /* 0x42AC */ u8 unk42AC; /* 1 use */
    /* 0x42AD */ u8 unk42AD; /* 4 uses */
    /* 0x42AE */ u8 pad42AE[0x2];
    /* 0x42B0 */ s32 unk42B0; /* 6 uses */
    /* 0x42B4 */ void *unk42B4; /* 6 uses */
    /* 0x42B8 */ u32 unk42B8; /* 5 uses */
    /* 0x42BC */ u8 *unk42BC; /* 8 uses */
    /* 0x42C0 */ u8 unk42C0; /* 5 uses */
    /* 0x42C1 */ u8 unk42C1; /* 1 use */
    /* 0x42C2 */ u8 pad42C2[0x2];
    /* 0x42C4 */ void *unk42C4; /* 6 uses */
    /* 0x42C8 */ u8 unk42C8; /* 4 uses */
    /* 0x42C9 */ u8 pad42C9[0x3];
    /* 0x42CC */ void *unk42CC; /* 5 uses */
    /* 0x42D0 */ u32 unk42D0; /* 5 uses */
    /* 0x42D4 */ u8 *unk42D4; /* 18 uses */
    /* 0x42D8 */ u8 *unk42D8; /* 5 uses */
    /* 0x42DC */ u32 unk42DC; /* 7 uses */
    /* 0x42E0 */ u8 unk42E0; /* 3 uses */
    /* 0x42E1 */ u8 unk42E1; /* 5 uses */
    /* 0x42E2 */ u16 unk42E2; /* 17 uses */
    /* 0x42E4 */ u16 unk42E4; /* 3 uses */
    /* 0x42E6 */ u8 pad42E6[0x2];
    /* 0x42E8 */ s32 unk42E8; /* 9 uses */
    /* 0x42EC */ u8 unk42EC; /* 10 uses */
    /* 0x42ED */ u8 pad42ED[0x3];
    /* 0x42F0 */ void *unk42F0; /* 4 uses */
    /* 0x42F4 */ struct T_D_800892B0_p42F4_elem *unk42F4; /* 4 uses */
    /* 0x42F8 */ u8 *unk42F8; /* 13 uses */
    /* 0x42FC */ u16 unk42FC; /* 9 uses */
    /* 0x42FE */ u8 unk42FE; /* 4 uses */
    /* 0x42FF */ u8 unk42FF; /* 4 uses */
    /* 0x4300 */ u8 unk4300; /* 1 use */
    /* 0x4301 */ u8 pad4301[0x3];
} T_D_800892B0;

/* anonymous; 1 functions */
typedef struct T_D_800892B0_elem { /* size >= 0x6 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s16 unk4; /* 3 uses */
} T_D_800892B0_elem;

/* pointed to by T_D_800892B0.0x17C; 2 functions */
typedef struct T_D_800892B0_p17C { /* size >= 0x2C */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ u32 unk24; /* 2 uses */
    /* 0x028 */ u8 pad28[0x2];
    /* 0x02A */ u16 unk2A; /* 2 uses */
} T_D_800892B0_p17C;

/* pointed to by T_D_800892B0.0x4298; 1 functions */
typedef struct T_D_800892B0_p4298 { /* size >= 0x10 */
    /* 0x000 */ s8 unk0; /* 1 use; also s32@0x0 */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ u32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_800892B0_p4298;

/* anonymous; 2 functions */
typedef struct T_D_800892B0_p42F4_elem { /* size 0x8 */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
} T_D_800892B0_p42F4_elem;

/* D_80089378; 584 functions */
typedef struct T_D_80089378 { /* size >= 0xB4 */
    /* 0x000 */ struct T_D_80089378 *next; /* 69 uses */
    /* 0x004 */ struct T_D_80089378 *x; /* 59 uses */
    /* 0x008 */ struct T_D_80089378 *y; /* 3840 uses */
    /* 0x00C */ struct T_D_80089378 *z; /* 18 uses */
    /* 0x010 */ struct T_D_80089378 *unk10; /* 10 uses */
    /* 0x014 */ struct T_D_80089378 *unk14; /* 11 uses */
    /* 0x018 */ void (*unk18)(); /* 5 uses */
    /* 0x01C */ void (*unk1C)(); /* 4 uses */
    /* 0x020 */ void (*unk20)(); /* 3 uses */
    /* 0x024 */ struct T_func_80147148_a0 *unk24; /* 1623 uses */
    /* 0x028 */ s32 unk28; /* 1 use */
    /* 0x02C */ struct T_func_80147250_ret *unk2C; /* 138 uses */
    /* 0x030 */ struct T_D_80089378_p30 *unk30; /* 82 uses */
    /* 0x034 */ s32 unk34; /* 1 use */
    /* 0x038 */ struct T_D_80089378_p38 *unk38; /* 52 uses */
    /* 0x03C */ s32 unk3C; /* 1 use */
    /* 0x040 */ f32 unk40; /* 50 uses */
    /* 0x044 */ f32 unk44; /* 13 uses */
    /* 0x048 */ f32 unk48; /* 50 uses */
    /* 0x04C */ s32 unk4C; /* 1 use */
    /* 0x050 */ s32 unk50; /* 1 use */
    /* 0x054 */ s32 unk54; /* 3 uses */
    /* 0x058 */ s32 unk58; /* 1 use */
    /* 0x05C */ struct T_func_8012CE9C_a1 *unk5C; /* 30 uses */
    /* 0x060 */ s32 unk60; /* 1 use */
    /* 0x064 */ struct T_func_8010E680_a0 *unk64; /* 5 uses */
    /* 0x068 */ struct T_D_80089378_p68 *unk68; /* 3 uses */
    /* 0x06C */ s32 unk6C; /* 1 use */
    /* 0x070 */ u8 pad70[0x20];
    /* 0x090 */ u8 unk90; /* 61 uses */
    /* 0x091 */ u8 unk91; /* 6 uses */
    /* 0x092 */ u8 unk92; /* 4 uses */
    /* 0x093 */ u8 unk93; /* 22 uses */
    /* 0x094 */ f32 unk94; /* 59 uses */
    /* 0x098 */ u8 pad98[0x4];
    /* 0x09C */ struct T_func_8010E680_a0 *unk9C; /* 3 uses */
    /* 0x0A0 */ u8 padA0[0x4];
    /* 0x0A4 */ s16 unkA4; /* 5 uses */
    /* 0x0A6 */ u8 padA6[0x2];
    /* 0x0A8 */ struct T_D_80089378 *unkA8; /* 1 use */
    /* 0x0AC */ u8 padAC[0x1];
    /* 0x0AD */ u8 unkAD; /* 1 use */
    /* 0x0AE */ u8 unkAE; /* 4 uses */
    /* 0x0AF */ u8 padAF[0x1];
    /* 0x0B0 */ s16 unkB0; /* 5 uses */
    /* 0x0B2 */ u8 unkB2; /* 3 uses */
    /* 0x0B3 */ u8 unkB3; /* 1 use */
} T_D_80089378;

/* D_8008942C; 5 functions */
typedef struct T_D_8008942C { /* size >= 0x22 */
    /* 0x000 */ u8 pad0[0x20];
    /* 0x020 */ u16 unk20; /* 1 use */
} T_D_8008942C;

/* pointed to by T_D_80089460.0x0; 2 functions */
typedef struct T_D_80089460_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_D_80089460_p0_p2C *unk2C; /* 3 uses */
} T_D_80089460_p0;

/* pointed to by T_D_80089460_p0.0x2C; 2 functions */
typedef struct T_D_80089460_p0_p2C { /* size >= 0x48 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ f32 unk30; /* 2 uses */
    /* 0x034 */ f32 unk34; /* 1 use */
    /* 0x038 */ f32 unk38; /* 2 uses */
    /* 0x03C */ f32 unk3C; /* 2 uses */
    /* 0x040 */ f32 unk40; /* 1 use */
    /* 0x044 */ f32 unk44; /* 2 uses */
} T_D_80089460_p0_p2C;

/* D_80089474; 45 functions */
typedef struct T_D_80089474 { /* size >= 0x20 */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 11 uses; also s32@0x0 */
    /* 0x004 */ u16 buttons; /* 46 uses; also s32@0x4 */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ s32 unk8; /* 5 uses */
    /* 0x00C */ s32 unkC; /* 5 uses; also u16@0xC */
    /* 0x010 */ s32 unk10; /* 5 uses */
    /* 0x014 */ s32 unk14; /* 5 uses */
    /* 0x018 */ s32 unk18; /* 5 uses */
    /* 0x01C */ s32 unk1C; /* 5 uses */
} T_D_80089474;

/* anonymous; 3 functions */
typedef struct T_D_80089474_elem { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 2 uses */
    /* 0x004 */ u16 unk4; /* 3 uses */
    /* 0x006 */ s16 unk6; /* 6 uses */
    /* 0x008 */ s16 unk8; /* 3 uses */
    /* 0x00A */ u16 unkA; /* 3 uses */
    /* 0x00C */ u16 unkC; /* 2 uses */
    /* 0x00E */ u8 padE[0x2];
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80089474_elem;

/* D_80089494; 3 functions */
typedef struct T_D_80089494 { /* size >= 0x20 */
    /* 0x000 */ u16 unk0; /* 2 uses; also s32@0x0 */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_80089494;

/* D_800894D4; 1 functions */
typedef struct T_D_800894D4 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_800894D4;

/* D_8008D530; 1 functions */
typedef struct T_D_8008D530_elem { /* size 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x4];
} T_D_8008D530_elem;

/* D_8008D54C; 5 functions */
typedef struct T_D_8008D54C { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 unk4; /* 5 uses */
    /* 0x005 */ u8 pad5[0x3];
    /* 0x008 */ s32 unk8; /* 4 uses */
} T_D_8008D54C;

/* D_8008D558; 6 functions */
typedef struct T_D_8008D558 { /* size >= 0x2C */
    /* 0x000 */ s32 unk0; /* 3 uses */
    /* 0x004 */ u8 unk4; /* 2 uses */
    /* 0x005 */ u8 pad5[0x14];
    /* 0x019 */ u8 unk19; /* 2 uses */
    /* 0x01A */ u8 pad1A[0x2];
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ u8 pad20[0x8];
    /* 0x028 */ u32 unk28; /* 4 uses */
} T_D_8008D558;

/* D_8008D5AC; 4 functions */
typedef struct T_D_8008D5AC { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 2 uses */
    /* 0x002 */ u8 unk2; /* 22 uses */
    /* 0x003 */ u8 pad3[0x1];
} T_D_8008D5AC;

/* D_8008DC18; 12 functions */
typedef struct T_D_8008DC18_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 14 uses */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 unk3; /* 1 use */
} T_D_8008DC18_elem;

/* anonymous; 1 functions */
typedef struct T_D_8008DCA8_elem { /* size >= 0x18 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ s16 unk2; /* 1 use */
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ s16 unk6; /* 1 use */
    /* 0x008 */ s16 unk8; /* 1 use */
    /* 0x00A */ s16 unkA; /* 1 use */
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ s16 unkE; /* 1 use */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 unk12; /* 1 use */
    /* 0x014 */ s16 unk14; /* 1 use */
    /* 0x016 */ s16 unk16; /* 1 use */
} T_D_8008DCA8_elem;

/* D_8008DCA8; 3 functions */
typedef struct T_D_8008DCA8_elem_2 { /* size 0x6 */
    /* 0x000 */ s16 value; /* 8 uses */
    /* 0x002 */ s16 unk2; /* 10 uses */
    /* 0x004 */ s16 next; /* 14 uses */
} T_D_8008DCA8_elem_2;

/* D_8008DFC0; 2 functions */
typedef struct T_D_8008DFC0_elem { /* size 0x8 */
    /* 0x000 */ u16 unk0; /* 2 uses */
    /* 0x002 */ u8 pad2[0x6];
} T_D_8008DFC0_elem;

/* D_8008DFC4; 2 functions */
typedef struct T_D_8008DFC4_elem { /* size 0x8 */
    /* 0x000 */ void *value; /* 2 uses */
    /* 0x004 */ u8 pad4[0x4];
} T_D_8008DFC4_elem;

/* D_8008EBE6; 8 functions */
typedef struct T_D_8008EBE6 { /* size >= 0x2 */
    /* 0x000 */ u8 pad0[0x1];
    /* 0x001 */ u8 unk1; /* 17 uses; also u16@0x0 */
} T_D_8008EBE6;

/* D_8008EC18; 10 functions */
typedef struct T_D_8008EC18_elem { /* size 0x26 */
    /* 0x000 */ s16 unk0; /* 7 uses */
    /* 0x002 */ s16 unk2; /* 5 uses */
    /* 0x004 */ u8 unk4; /* 11 uses */
    /* 0x005 */ u8 pad5[0x1];
    /* 0x006 */ s16 unk6; /* 5 uses */
    /* 0x008 */ s16 unk8; /* 7 uses */
    /* 0x00A */ u8 unkA; /* 6 uses */
    /* 0x00B */ u8 padB[0x1];
    /* 0x00C */ s16 unkC; /* 3 uses */
    /* 0x00E */ s16 unkE; /* 3 uses */
    /* 0x010 */ u8 unk10; /* 10 uses */
    /* 0x011 */ u8 unk11; /* 10 uses */
    /* 0x012 */ u16 unk12; /* 4 uses */
    /* 0x014 */ u16 unk14; /* 4 uses */
    /* 0x016 */ u16 unk16; /* 4 uses */
    /* 0x018 */ u8 pad18[0x4];
    /* 0x01C */ s16 unk1C; /* 7 uses */
    /* 0x01E */ s16 unk1E; /* 7 uses */
    /* 0x020 */ s16 unk20; /* 1 use */
    /* 0x022 */ s16 unk22; /* 1 use */
    /* 0x024 */ s16 unk24; /* 1 use */
} T_D_8008EC18_elem;

/* D_8008EC1C; 1 functions */
typedef struct T_D_8008EC1C_elem { /* size 0x26 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x25];
} T_D_8008EC1C_elem;

/* D_8008ED28; 3 functions */
typedef struct T_D_8008ED28_elem { /* size 0xC */
    /* 0x000 */ u8 unk0; /* 7 uses */
    /* 0x001 */ u8 unk1; /* 8 uses */
    /* 0x002 */ u8 unk2; /* 12 uses */
    /* 0x003 */ u8 pad3[0x1];
    /* 0x004 */ u16 unk4; /* 10 uses */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ void *****unk8; /* 2 uses */
} T_D_8008ED28_elem;

/* pointed to by T_D_8008EE90.0x0; 2 functions */
typedef struct T_D_8008EE90_p0 { /* size >= 0xA */
    /* 0x000 */ u8 pad0[0x1];
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ s16 unk4; /* 2 uses */
    /* 0x006 */ s16 unk6; /* 1 use */
    /* 0x008 */ s16 unk8; /* 2 uses */
} T_D_8008EE90_p0;

/* D_8008EEA0; 3 functions */
typedef struct T_D_8008EEA0_elem { /* size 0x14 */
    /* 0x000 */ u8 flag; /* 4 uses */
    /* 0x001 */ u8 pad1[0x1];
    /* 0x002 */ s16 x; /* 4 uses */
    /* 0x004 */ s16 y; /* 3 uses */
    /* 0x006 */ u8 unk6; /* 3 uses */
    /* 0x007 */ u8 unk7; /* 3 uses */
    /* 0x008 */ u8 unk8; /* 3 uses */
    /* 0x009 */ u8 unk9; /* 3 uses */
    /* 0x00A */ u8 unkA; /* 3 uses */
    /* 0x00B */ u8 unkB; /* 3 uses */
    /* 0x00C */ u8 unkC; /* 3 uses */
    /* 0x00D */ u8 unkD; /* 3 uses */
    /* 0x00E */ u16 unkE; /* 4 uses */
    /* 0x010 */ u16 unk10; /* 3 uses */
    /* 0x012 */ u16 unk12; /* 3 uses */
} T_D_8008EEA0_elem;

/* D_8008EF70; 6 functions */
typedef struct T_D_8008EF70_elem { /* size 0x11A */
    /* 0x000 */ u8 unk0; /* 7 uses */
    /* 0x001 */ u8 unk1; /* 6 uses */
    /* 0x002 */ s16 unk2; /* 10 uses */
    /* 0x004 */ s16 unk4; /* 6 uses */
    /* 0x006 */ u16 unk6; /* 5 uses */
    /* 0x008 */ u8 unk8; /* 2 uses */
    /* 0x009 */ u8 pad9[0x7];
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ u8 pad12[0x108];
} T_D_8008EF70_elem;

/* D_8008EF78; 2 functions */
typedef struct T_D_8008EF78_elem { /* size 0x11A */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ s16 unk8; /* 2 uses */
    /* 0x00A */ u8 padA[0x110];
} T_D_8008EF78_elem;

/* anonymous; 1 functions */
typedef struct T_D_80090E50_elem { /* size >= 0x103 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x55];
    /* 0x056 */ u8 unk56; /* 1 use */
    /* 0x057 */ u8 pad57[0x55];
    /* 0x0AC */ u8 unkAC; /* 1 use */
    /* 0x0AD */ u8 padAD[0x55];
    /* 0x102 */ u8 unk102; /* 1 use */
} T_D_80090E50_elem;

/* D_80090E50; 3 functions */
typedef struct T_D_80090E50_elem_2 { /* size 0xAC */
    /* 0x000 */ u8 unk0; /* 4 uses */
    /* 0x001 */ u8 pad1[0x1];
    /* 0x002 */ s16 unk2; /* 1 use */
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x50];
    /* 0x056 */ u8 unk56; /* 3 uses */
    /* 0x057 */ u8 pad57[0x1];
    /* 0x058 */ s16 unk58; /* 1 use */
    /* 0x05A */ s16 unk5A; /* 1 use */
    /* 0x05C */ u8 pad5C[0x50];
} T_D_80090E50_elem_2;

/* anonymous; 1 functions */
typedef struct T_D_80090E50_elem_3 { /* size >= 0x8 */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 pad1[0x1];
    /* 0x002 */ s16 unk2; /* 1 use */
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ s16 unk6; /* 1 use */
} T_D_80090E50_elem_3;

/* pointed to by T_D_80091BC8.0x0; 1 functions */
typedef struct T_D_80091BC8_p0 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ s32 *unkC; /* 1 use */
} T_D_80091BC8_p0;

/* pointed to by T_D_80091BCC.0x0; 1 functions */
typedef struct T_D_80091BCC_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x4];
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80091BCC_p0;

/* D_80096A70; 2 functions */
typedef struct T_D_80096A70 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ struct T_D_80096A70 *unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80096A70;

/* pointed to by T_D_80096A98_elem.0x0; 2 functions */
typedef struct T_D_80096A98_elem_p0 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ struct T_D_80096A98_elem_p0_p4_elem_p0 * *unk4; /* 2 uses */
} T_D_80096A98_elem_p0;

/* pointed to by T_D_80096A98_elem_p0_p4_elem.0x0; 2 functions */
typedef struct T_D_80096A98_elem_p0_p4_elem_p0 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ struct T_D_80096A98_elem_p0_p4_elem_p0_p10 *unk10; /* 2 uses */
} T_D_80096A98_elem_p0_p4_elem_p0;

/* pointed to by T_D_80096A98_elem_p0_p4_elem_p0.0x10; 2 functions */
typedef struct T_D_80096A98_elem_p0_p4_elem_p0_p10 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80096A98_elem_p0_p4_elem_p0_p10;

/* D_800CBABC; 3 functions */
typedef struct T_D_800CBABC { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 3 uses */
    /* 0x002 */ u16 unk2; /* 5 uses */
} T_D_800CBABC;

/* D_800CBAC0; 4 functions */
typedef struct T_D_800CBAC0 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 4 uses */
    /* 0x002 */ u16 unk2; /* 7 uses */
} T_D_800CBAC0;

/* D_800CBAC4; 6 functions */
typedef struct T_D_800CBAC4_elem { /* size 0x4 */
    /* 0x000 */ u16 unk0; /* 3 uses */
    /* 0x002 */ u16 unk2; /* 7 uses */
} T_D_800CBAC4_elem;

/* D_800CBAD0; 5 functions */
typedef struct T_D_800CBAD0 { /* size >= 0x2 */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 unk1; /* 3 uses */
} T_D_800CBAD0;

/* D_800CBAD8; 6 functions */
typedef struct T_D_800CBAD8 { /* size >= 0x14 */
    /* 0x000 */ u8 unk0; /* 8 uses */
    /* 0x001 */ u8 unk1; /* 7 uses */
    /* 0x002 */ u8 unk2; /* 11 uses */
    /* 0x003 */ u8 unk3; /* 6 uses */
    /* 0x004 */ u8 unk4; /* 6 uses */
    /* 0x005 */ u8 unk5; /* 6 uses */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ s32 *unk8; /* 6 uses */
    /* 0x00C */ s16 unkC; /* 2 uses */
    /* 0x00E */ s16 unkE; /* 2 uses */
    /* 0x010 */ s16 unk10; /* 2 uses */
    /* 0x012 */ u8 pad12[0x2];
} T_D_800CBAD8;

/* D_800CBAF0; 2 functions */
typedef struct T_D_800CBAF0_elem { /* size 0x6 */
    /* 0x000 */ u16 unk0; /* 2 uses */
    /* 0x002 */ s16 unk2; /* 1 use */
    /* 0x004 */ u8 unk4; /* 2 uses */
    /* 0x005 */ u8 pad5[0x1];
} T_D_800CBAF0_elem;

/* D_800CBAF2; 1 functions */
typedef struct T_D_800CBAF2_elem { /* size 0x6 */
    /* 0x000 */ s16 unk0; /* 2 uses */
    /* 0x002 */ u8 pad2[0x4];
} T_D_800CBAF2_elem;

/* D_800CBB98; 2 functions */
typedef struct T_D_800CBB98_elem { /* size 0x4 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ s16 unk2; /* 1 use */
} T_D_800CBB98_elem;

/* D_800CBDB8; 2 functions */
typedef struct T_D_800CBDB8_elem { /* size 0xC */
    /* 0x000 */ u16 flags; /* 2 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ struct T_D_800CBDB8_elem_p4 *lim; /* 2 uses */
    /* 0x008 */ u16 hi; /* 3 uses */
    /* 0x00A */ u8 padA[0x2];
} T_D_800CBDB8_elem;

/* pointed to by T_D_800CBDB8_elem.0x4; 1 functions */
typedef struct T_D_800CBDB8_elem_p4 { /* size >= 0x6 */
    /* 0x000 */ u16 w; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 unk3; /* 3 uses */
    /* 0x004 */ u8 unk4; /* 2 uses */
    /* 0x005 */ u8 pad5[0x1];
} T_D_800CBDB8_elem_p4;

/* D_800CBDD8; 4 functions */
typedef struct T_D_800CBDD8_elem { /* size 0x6 */
    /* 0x000 */ u16 unk0; /* 2 uses */
    /* 0x002 */ u8 kind; /* 2 uses */
    /* 0x003 */ u8 ticks; /* 7 uses */
    /* 0x004 */ s16 target; /* 2 uses */
} T_D_800CBDD8_elem;

/* D_800CBE20; 1 functions */
typedef struct T_D_800CBE20 { /* size >= 0x3C */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ void *unk10; /* 2 uses */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ void *unk18; /* 2 uses */
    /* 0x01C */ u8 pad1C[0x4];
    /* 0x020 */ void *unk20; /* 2 uses */
    /* 0x024 */ u8 pad24[0x4];
    /* 0x028 */ void *unk28; /* 2 uses */
    /* 0x02C */ void *unk2C; /* 2 uses */
    /* 0x030 */ void *unk30; /* 2 uses */
    /* 0x034 */ u8 pad34[0x4];
    /* 0x038 */ void *unk38; /* 2 uses */
} T_D_800CBE20;

/* D_800CBE60; 2 functions */
typedef struct T_D_800CBE60_elem { /* size 0x40 */
    /* 0x000 */ u8 pad0[0x3C];
    /* 0x03C */ s32 unk3C; /* 1 use */
} T_D_800CBE60_elem;

/* D_800CBF80; 6 functions */
typedef struct T_D_800CBF80 { /* size >= 0x40 */
    /* 0x000 */ u8 pad0[0x3C];
    /* 0x03C */ s32 unk3C; /* 1 use */
} T_D_800CBF80;

/* D_800CC1D0; 8 functions */
typedef struct T_D_800CC1D0 { /* size >= 0x40 */
    /* 0x000 */ u8 pad0[0x3C];
    /* 0x03C */ s32 unk3C; /* 3 uses */
} T_D_800CC1D0;

/* D_800CD5F0; 2 functions */
typedef struct T_D_800CD5F0_elem { /* size 0x8 */
    /* 0x000 */ void *unk0; /* 1 use */
    /* 0x004 */ void *unk4; /* 1 use */
} T_D_800CD5F0_elem;

/* D_800CD690; 3 functions */
typedef struct T_D_800CD690 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ u32 unk4; /* 2 uses */
} T_D_800CD690;

/* D_800CE950; 1 functions */
typedef struct T_D_800CE950 { /* size >= 0x8 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 pad3[0x1];
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_800CE950;

/* D_800CE968; 1 functions */
typedef struct T_D_800CE968 { /* size >= 0x8 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 pad3[0x1];
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_800CE968;

/* D_801077C0; 3 functions */
typedef struct T_D_801077C0 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
    /* 0x014 */ s32 unk14; /* 2 uses */
    /* 0x018 */ s32 unk18; /* 2 uses */
    /* 0x01C */ s32 unk1C; /* 2 uses */
} T_D_801077C0;

/* D_80153032; 1 functions */
typedef struct T_D_80153032_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x3];
} T_D_80153032_elem;

/* D_80153070; 2 functions */
typedef struct T_D_80153070_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 3 uses */
    /* 0x003 */ u8 unk3; /* 3 uses */
} T_D_80153070_elem;

/* D_80153072; 1 functions */
typedef struct T_D_80153072_elem { /* size 0x4 */
    /* 0x000 */ u8 bank; /* 1 use */
    /* 0x001 */ u8 pad1[0x3];
} T_D_80153072_elem;

/* D_8015327C; 1 functions */
typedef struct T_D_8015327C_elem { /* size 0x8 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ s32 *value; /* 1 use */
} T_D_8015327C_elem;

/* D_801628F8; 1 functions */
typedef struct T_D_801628F8_elem { /* size 0x8 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ s32 *unk4; /* 1 use */
} T_D_801628F8_elem;

/* D_80044090, D_80044220, D_80044420 (+202); 192 functions */
typedef struct T_D_80162DD0 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 3 uses */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80162DD0;

/* D_8004444C, D_8004480C, D_800448F4 (+85); 83 functions */
typedef struct T_D_8016379C { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ u16 flags; /* 3 uses */
    /* 0x00A */ u16 unkA; /* 4 uses */
    /* 0x00C */ struct T_func_80007BD0_a1 *unkC; /* 29 uses */
} T_D_8016379C;

/* pointed to by T_D_80171CEC_elem.0x0; 36 functions */
typedef struct T_D_80171CEC_elem_p0 { /* size >= 0x8 */
    /* 0x000 */ u16 *unk0; /* 42 uses */
    /* 0x004 */ struct T_D_8017BC50 * *unk4; /* 27 uses */
} T_D_80171CEC_elem_p0;

/* D_8017BC50; 6 functions */
typedef struct T_D_8017BC50 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ u16 unk1C; /* 1 use */
    /* 0x01E */ u16 unk1E; /* 3 uses */
} T_D_8017BC50;

/* anonymous; 3 functions */
typedef struct T_D_801B5520_elem_2 { /* size >= 0x28C */
    /* 0x000 */ s32 unk0; /* 3 uses */
    /* 0x004 */ u8 pad4[0xBA];
    /* 0x0BE */ u8 unkBE; /* 1 use */
    /* 0x0BF */ u8 padBF[0x19];
    /* 0x0D8 */ s32 unkD8; /* 2 uses */
    /* 0x0DC */ u8 padDC[0xD4];
    /* 0x1B0 */ s32 unk1B0; /* 2 uses */
    /* 0x1B4 */ u8 pad1B4[0xD4];
    /* 0x288 */ s32 unk288; /* 2 uses */
} T_D_801B5520_elem_2;

/* pointed to by T_D_801B5520.0x8, T_D_801B5520.0x60; 32 functions */
typedef struct T_D_801B5520_p8 { /* size >= 0x3 */
    /* 0x000 */ u8 unk0; /* 43 uses; loaded both signed (lb x3) and unsigned (lbu x40) */
    /* 0x001 */ u8 unk1; /* 19 uses; loaded both signed (lb x3) and unsigned (lbu x16) */
    /* 0x002 */ u8 unk2; /* 1 use */
} T_D_801B5520_p8;

/* D_801B5524; 1 functions */
typedef struct T_D_801B5524_elem { /* size 0xD8 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0xD7];
} T_D_801B5524_elem;

/* D_801B55F8; 2 functions */
typedef struct T_D_801B55F8_elem { /* size 0x360 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0xBA];
    /* 0x0BE */ u8 unkBE; /* 1 use */
    /* 0x0BF */ u8 padBF[0x2A1];
} T_D_801B55F8_elem;

/* D_801B56D0; 1 functions */
typedef struct T_D_801B56D0_elem { /* size 0x360 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0xBA];
    /* 0x0BE */ u8 unkBE; /* 1 use */
    /* 0x0BF */ u8 padBF[0x2A1];
} T_D_801B56D0_elem;

/* D_801B57A8; 1 functions */
typedef struct T_D_801B57A8_elem { /* size 0x360 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0xBA];
    /* 0x0BE */ u8 unkBE; /* 1 use */
    /* 0x0BF */ u8 padBF[0x2A1];
} T_D_801B57A8_elem;

/* D_801B5958; 1 functions */
typedef struct T_D_801B5958_elem { /* size 0xD8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0xD4];
} T_D_801B5958_elem;

/* D_801B60F0; 1 functions */
typedef struct T_D_801B60F0_elem { /* size 0x1B0 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x1AC];
} T_D_801B60F0_elem;

/* D_801B62A0; 5 functions */
typedef struct T_D_801B62A0_elem { /* size 0xD8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0xD4];
} T_D_801B62A0_elem;

/* D_801BB610; 2 functions */
typedef struct T_D_801BB610 { /* size >= 0x202 */
    /* 0x000 */ u8 pad0[0x200];
    /* 0x200 */ u8 unk200; /* 5 uses */
    /* 0x201 */ u8 unk201; /* 4 uses */
} T_D_801BB610;

/* D_801BBBF0; 1127 functions */
typedef struct T_D_801BBBF0 { /* size >= 0x1154 */
    /* 0x000 */ u8 unk0; /* 6 uses */
    /* 0x001 */ u8 pad1[0x1];
    /* 0x002 */ u16 unk2; /* 47 uses */
    /* 0x004 */ u16 unk4; /* 107 uses */
    /* 0x006 */ u16 unk6; /* 31 uses */
    /* 0x008 */ u16 unk8; /* 14 uses */
    /* 0x00A */ u16 unkA; /* 10 uses */
    /* 0x00C */ u16 unkC; /* 3 uses */
    /* 0x00E */ u16 unkE; /* 3 uses */
    /* 0x010 */ u16 unk10; /* 3 uses */
    /* 0x012 */ u16 unk12; /* 4 uses */
    /* 0x014 */ u16 unk14; /* 4 uses */
    /* 0x016 */ u8 unk16; /* 3 uses */
    /* 0x017 */ u8 unk17; /* 6 uses */
    /* 0x018 */ s8 unk18; /* 7 uses */
    /* 0x019 */ s8 unk19; /* 6 uses */
    /* 0x01A */ u8 unk1A; /* 5 uses */
    /* 0x01B */ u8 unk1B; /* 8 uses */
    /* 0x01C */ u8 unk1C; /* 7 uses */
    /* 0x01D */ u8 unk1D; /* 13 uses */
    /* 0x01E */ u8 pad1E[0x2];
    /* 0x020 */ s32 unk20; /* 3 uses */
    /* 0x024 */ struct T_func_80247294_a0 *unk24; /* 10 uses */
    /* 0x028 */ u8 unk28; /* 10 uses */
    /* 0x029 */ u8 pad29[0x1];
    /* 0x02A */ u16 unk2A; /* 3 uses */
    /* 0x02C */ u16 unk2C; /* 68 uses */
    /* 0x02E */ s16 unk2E; /* 1 use */
    /* 0x030 */ u16 unk30; /* 44 uses; loaded both signed (lh x1) and unsigned (lhu x41) */
    /* 0x032 */ s16 unk32; /* 18 uses */
    /* 0x034 */ u16 unk34; /* 11 uses */
    /* 0x036 */ u16 unk36; /* 10 uses */
    /* 0x038 */ u8 pad38[0x4];
    /* 0x03C */ struct T_D_80089378 *unk3C; /* 14 uses */
    /* 0x040 */ struct T_func_80107830_a0 *unk40; /* 36 uses */
    /* 0x044 */ struct T_func_8010E680_a0 *unk44; /* 13 uses */
    /* 0x048 */ u8 pad48[0x4];
    /* 0x04C */ struct T_func_80107830_a0 *unk4C; /* 9 uses */
    /* 0x050 */ struct T_func_80107830_a0 *unk50; /* 13 uses */
    /* 0x054 */ struct T_func_8010E680_a0 *unk54; /* 17 uses */
    /* 0x058 */ struct T_func_8010E680_a0 *unk58; /* 3 uses */
    /* 0x05C */ u8 pad5C[0x2];
    /* 0x05E */ s16 unk5E; /* 1 use */
    /* 0x060 */ s16 unk60; /* 1 use */
    /* 0x062 */ u8 pad62[0x1C];
    /* 0x07E */ u16 unk7E; /* 14 uses */
    /* 0x080 */ u16 unk80; /* 18 uses */
    /* 0x082 */ u8 pad82[0x4];
    /* 0x086 */ u16 unk86; /* 5 uses */
    /* 0x088 */ u16 unk88; /* 4 uses */
    /* 0x08A */ u8 pad8A[0x14];
    /* 0x09E */ u16 unk9E; /* 5 uses */
    /* 0x0A0 */ u16 unkA0; /* 5 uses */
    /* 0x0A2 */ s16 unkA2; /* 6 uses */
    /* 0x0A4 */ s16 unkA4; /* 4 uses */
    /* 0x0A6 */ u8 padA6[0x2];
    /* 0x0A8 */ u16 unkA8; /* 1 use */
    /* 0x0AA */ u8 padAA[0x16];
    /* 0x0C0 */ u16 unkC0; /* 1 use */
    /* 0x0C2 */ u8 padC2[0x6];
    /* 0x0C8 */ u16 unkC8; /* 2 uses */
    /* 0x0CA */ u8 padCA[0x12];
    /* 0x0DC */ struct T_func_80107830_a0 *inner; /* 406 uses */
    /* 0x0E0 */ struct T_func_801451C0_a0 *unkE0; /* 1028 uses */
    /* 0x0E4 */ struct T_func_8010E680_a0 *unkE4; /* 10 uses */
    /* 0x0E8 */ struct T_func_801FA248_a0 *unkE8; /* 1116 uses */
    /* 0x0EC */ struct T_func_80107830_a0 *unkEC; /* 117 uses */
    /* 0x0F0 */ struct T_func_801451C0_a0 *unkF0; /* 24 uses */
    /* 0x0F4 */ u8 unkF4; /* 16 uses */
    /* 0x0F5 */ u8 unkF5; /* 19 uses */
    /* 0x0F6 */ u8 padF6[0x1];
    /* 0x0F7 */ u8 unkF7; /* 11 uses */
    /* 0x0F8 */ s32 unkF8; /* 4 uses */
    /* 0x0FC */ u8 unkFC; /* 2 uses */
    /* 0x0FD */ u8 padFD[0x1];
    /* 0x0FE */ u16 unkFE; /* 2 uses */
    /* 0x100 */ f32 unk100; /* 1 use */
    /* 0x104 */ u16 unk104; /* 49 uses */
    /* 0x106 */ u8 pad106[0x2];
    /* 0x108 */ u8 unk108; /* 6 uses */
    /* 0x109 */ u8 pad109[0x7];
    /* 0x110 */ u16 unk110; /* 1 use */
    /* 0x112 */ s16 unk112; /* 1 use */
    /* 0x114 */ s16 unk114; /* 1 use */
    /* 0x116 */ s16 unk116; /* 1 use */
    /* 0x118 */ s16 unk118; /* 1 use */
    /* 0x11A */ s16 unk11A; /* 1 use */
    /* 0x11C */ s16 unk11C; /* 1 use */
    /* 0x11E */ u8 pad11E[0x36];
    /* 0x154 */ u16 unk154; /* 8 uses */
    /* 0x156 */ u16 unk156; /* 5 uses */
    /* 0x158 */ u16 unk158; /* 14 uses */
    /* 0x15A */ u8 unk15A; /* 2 uses */
    /* 0x15B */ u8 unk15B; /* 2 uses */
    /* 0x15C */ u8 unk15C; /* 2 uses */
    /* 0x15D */ u8 unk15D; /* 26 uses */
    /* 0x15E */ u8 unk15E; /* 3 uses */
    /* 0x15F */ u8 pad15F[0x1];
    /* 0x160 */ struct T_func_8010E680_a0 *unk160; /* 4 uses */
    /* 0x164 */ u8 unk164; /* 15 uses */
    /* 0x165 */ u8 unk165; /* 2 uses */
    /* 0x166 */ u8 unk166; /* 3 uses */
    /* 0x167 */ u8 pad167[0x1];
    /* 0x168 */ u16 unk168; /* 6 uses */
    /* 0x16A */ u8 pad16A[0x4];
    /* 0x16E */ u16 unk16E; /* 8 uses */
    /* 0x170 */ struct T_D_801BBBF0_p170_elem *unk170; /* 6 uses */
    /* 0x174 */ s32 unk174; /* 1 use */
    /* 0x178 */ u16 unk178; /* 5 uses */
    /* 0x17A */ u16 unk17A; /* 4 uses */
    /* 0x17C */ u8 unk17C; /* 1 use */
    /* 0x17D */ u8 unk17D; /* 4 uses */
    /* 0x17E */ u8 unk17E; /* 8 uses */
    /* 0x17F */ u8 unk17F; /* 7 uses */
    /* 0x180 */ u8 unk180; /* 2 uses */
    /* 0x181 */ u8 unk181; /* 24 uses */
    /* 0x182 */ u8 unk182; /* 12 uses */
    /* 0x183 */ u8 pad183[0x1];
    /* 0x184 */ u16 unk184; /* 4 uses */
    /* 0x186 */ u8 unk186; /* 4 uses */
    /* 0x187 */ u8 unk187; /* 10 uses */
    /* 0x188 */ struct T_func_80107830_a0 *unk188; /* 14 uses */
    /* 0x18C */ u16 unk18C; /* 4 uses */
    /* 0x18E */ u16 unk18E; /* 37 uses */
    /* 0x190 */ u16 unk190; /* 25 uses */
    /* 0x192 */ u16 unk192; /* 23 uses */
    /* 0x194 */ u16 unk194; /* 26 uses */
    /* 0x196 */ u16 unk196; /* 10 uses */
    /* 0x198 */ f32 unk198; /* 63 uses */
    /* 0x19C */ f32 unk19C; /* 24 uses */
    /* 0x1A0 */ f32 unk1A0; /* 63 uses */
    /* 0x1A4 */ u16 unk1A4; /* 3 uses */
    /* 0x1A6 */ u8 pad1A6[0x2];
    /* 0x1A8 */ s32 unk1A8; /* 1 use */
    /* 0x1AC */ s32 unk1AC; /* 1 use */
    /* 0x1B0 */ s16 unk1B0; /* 2 uses */
    /* 0x1B2 */ s16 unk1B2; /* 1 use */
    /* 0x1B4 */ u16 unk1B4; /* 17 uses */
    /* 0x1B6 */ u8 pad1B6[0x2];
    /* 0x1B8 */ f32 unk1B8; /* 6 uses; also u16@0x1B8 */
    /* 0x1BC */ f32 unk1BC; /* 9 uses */
    /* 0x1C0 */ f32 unk1C0; /* 5 uses */
    /* 0x1C4 */ u16 unk1C4; /* 4 uses */
    /* 0x1C6 */ u8 pad1C6[0x2];
    /* 0x1C8 */ s32 unk1C8; /* 2 uses */
    /* 0x1CC */ f32 unk1CC; /* 2 uses */
    /* 0x1D0 */ u16 unk1D0; /* 4 uses */
    /* 0x1D2 */ u16 unk1D2; /* 4 uses */
    /* 0x1D4 */ s16 unk1D4; /* 1 use */
    /* 0x1D6 */ u8 pad1D6[0x2];
    /* 0x1D8 */ u16 unk1D8; /* 2 uses */
    /* 0x1DA */ u16 unk1DA; /* 9 uses */
    /* 0x1DC */ u16 unk1DC; /* 5 uses */
    /* 0x1DE */ u8 pad1DE[0x2];
    /* 0x1E0 */ f32 unk1E0; /* 2 uses */
    /* 0x1E4 */ void *unk1E4; /* 6 uses */
    /* 0x1E8 */ f32 unk1E8; /* 222 uses */
    /* 0x1EC */ f32 unk1EC; /* 264 uses */
    /* 0x1F0 */ f32 unk1F0; /* 222 uses */
    /* 0x1F4 */ f32 unk1F4; /* 220 uses */
    /* 0x1F8 */ f32 unk1F8; /* 222 uses */
    /* 0x1FC */ f32 unk1FC; /* 221 uses */
    /* 0x200 */ f32 unk200; /* 2 uses */
    /* 0x204 */ u8 unk204; /* 19 uses */
    /* 0x205 */ u8 unk205; /* 19 uses */
    /* 0x206 */ u8 unk206; /* 19 uses */
    /* 0x207 */ u8 unk207; /* 5 uses */
    /* 0x208 */ u8 unk208; /* 23 uses */
    /* 0x209 */ u8 unk209; /* 22 uses */
    /* 0x20A */ u8 unk20A; /* 22 uses */
    /* 0x20B */ u8 pad20B[0x1];
    /* 0x20C */ s32 unk20C; /* 3 uses */
    /* 0x210 */ u8 pad210[0xC];
    /* 0x21C */ u16 unk21C; /* 9 uses */
    /* 0x21E */ u8 pad21E[0x2];
    /* 0x220 */ void *unk220; /* 3 uses */
    /* 0x224 */ s16 unk224; /* 5 uses */
    /* 0x226 */ s16 unk226; /* 11 uses */
    /* 0x228 */ u16 unk228; /* 9 uses */
    /* 0x22A */ u16 unk22A; /* 2 uses */
    /* 0x22C */ s32 unk22C; /* 2 uses */
    /* 0x230 */ u8 unk230; /* 27 uses */
    /* 0x231 */ u8 unk231; /* 7 uses */
    /* 0x232 */ s16 unk232; /* 66 uses; loaded both signed (lh x54) and unsigned (lhu x1) */
    /* 0x234 */ u8 unk234; /* 17 uses */
    /* 0x235 */ u8 pad235[0x3];
    /* 0x238 */ f32 unk238; /* 3 uses */
    /* 0x23C */ f32 unk23C; /* 3 uses */
    /* 0x240 */ f32 unk240; /* 3 uses */
    /* 0x244 */ u16 unk244; /* 10 uses */
    /* 0x246 */ u8 pad246[0x2];
    /* 0x248 */ struct T_func_8010E680_a0 *unk248; /* 3 uses */
    /* 0x24C */ struct T_func_80107830_a0 *unk24C; /* 13 uses */
    /* 0x250 */ s32 unk250; /* 1 use */
    /* 0x254 */ u8 unk254; /* 10 uses */
    /* 0x255 */ u8 unk255; /* 13 uses */
    /* 0x256 */ u8 unk256; /* 11 uses */
    /* 0x257 */ u8 pad257[0x15];
    /* 0x26C */ struct T_D_801BBBF0_p26C *unk26C; /* 37 uses */
    /* 0x270 */ u8 pad270[0x28];
    /* 0x298 */ u8 unk298; /* 4 uses */
    /* 0x299 */ u8 unk299; /* 6 uses */
    /* 0x29A */ u8 unk29A; /* 2 uses */
    /* 0x29B */ u8 pad29B[0x1];
    /* 0x29C */ f32 unk29C; /* 53 uses */
    /* 0x2A0 */ f32 unk2A0; /* 52 uses */
    /* 0x2A4 */ f32 unk2A4; /* 12 uses */
    /* 0x2A8 */ f32 unk2A8; /* 12 uses */
    /* 0x2AC */ u8 unk2AC; /* 18 uses */
    /* 0x2AD */ u8 unk2AD; /* 31 uses */
    /* 0x2AE */ s8 unk2AE; /* 11 uses */
    /* 0x2AF */ u8 pad2AF[0x1];
    /* 0x2B0 */ void *unk2B0; /* 6 uses */
    /* 0x2B4 */ s8 unk2B4; /* 8 uses */
    /* 0x2B5 */ u8 unk2B5; /* 40 uses */
    /* 0x2B6 */ u8 pad2B6[0x2];
    /* 0x2B8 */ f32 unk2B8; /* 8 uses */
    /* 0x2BC */ f32 unk2BC; /* 3 uses */
    /* 0x2C0 */ f32 unk2C0; /* 17 uses */
    /* 0x2C4 */ f32 unk2C4; /* 3 uses */
    /* 0x2C8 */ f32 unk2C8; /* 3 uses */
    /* 0x2CC */ f32 unk2CC; /* 15 uses */
    /* 0x2D0 */ f32 unk2D0; /* 3 uses */
    /* 0x2D4 */ f32 unk2D4; /* 3 uses */
    /* 0x2D8 */ f32 unk2D8; /* 15 uses */
    /* 0x2DC */ f32 unk2DC; /* 3 uses */
    /* 0x2E0 */ f32 unk2E0; /* 9 uses */
    /* 0x2E4 */ f32 unk2E4; /* 3 uses */
    /* 0x2E8 */ f32 unk2E8; /* 15 uses */
    /* 0x2EC */ f32 unk2EC; /* 3 uses */
    /* 0x2F0 */ f32 unk2F0; /* 3 uses */
    /* 0x2F4 */ f32 unk2F4; /* 15 uses */
    /* 0x2F8 */ f32 unk2F8; /* 3 uses */
    /* 0x2FC */ f32 unk2FC; /* 3 uses */
    /* 0x300 */ f32 unk300; /* 15 uses */
    /* 0x304 */ f32 unk304; /* 3 uses */
    /* 0x308 */ f32 unk308; /* 3 uses */
    /* 0x30C */ f32 unk30C; /* 3 uses */
    /* 0x310 */ f32 unk310; /* 6 uses */
    /* 0x314 */ u8 pad314[0x4];
    /* 0x318 */ s16 unk318; /* 3 uses */
    /* 0x31A */ s16 unk31A; /* 2 uses */
    /* 0x31C */ s16 unk31C; /* 6 uses */
    /* 0x31E */ u8 pad31E[0x2];
    /* 0x320 */ f32 unk320; /* 13 uses */
    /* 0x324 */ f32 unk324; /* 11 uses */
    /* 0x328 */ f32 unk328; /* 6 uses */
    /* 0x32C */ f32 unk32C; /* 6 uses */
    /* 0x330 */ f32 unk330; /* 6 uses */
    /* 0x334 */ f32 unk334; /* 11 uses */
    /* 0x338 */ f32 unk338; /* 10 uses */
    /* 0x33C */ f32 unk33C; /* 11 uses */
    /* 0x340 */ f32 unk340; /* 6 uses */
    /* 0x344 */ f32 unk344; /* 6 uses */
    /* 0x348 */ f32 unk348; /* 6 uses */
    /* 0x34C */ u8 pad34C[0x1];
    /* 0x34D */ u8 unk34D; /* 1 use */
    /* 0x34E */ u16 unk34E; /* 2 uses */
    /* 0x350 */ u16 unk350; /* 2 uses */
    /* 0x352 */ u16 unk352; /* 2 uses */
    /* 0x354 */ u16 unk354; /* 10 uses */
    /* 0x356 */ s16 unk356; /* 2 uses */
    /* 0x358 */ u16 unk358; /* 1 use */
    /* 0x35A */ u8 unk35A; /* 75 uses */
    /* 0x35B */ u8 unk35B; /* 24 uses */
    /* 0x35C */ f32 unk35C; /* 35 uses */
    /* 0x360 */ f32 unk360; /* 27 uses */
    /* 0x364 */ f32 unk364; /* 37 uses */
    /* 0x368 */ f32 unk368; /* 84 uses */
    /* 0x36C */ f32 unk36C; /* 61 uses */
    /* 0x370 */ f32 unk370; /* 88 uses */
    /* 0x374 */ f32 unk374; /* 19 uses */
    /* 0x378 */ f32 unk378; /* 17 uses */
    /* 0x37C */ f32 unk37C; /* 17 uses */
    /* 0x380 */ f32 unk380; /* 67 uses */
    /* 0x384 */ f32 unk384; /* 54 uses */
    /* 0x388 */ f32 unk388; /* 67 uses */
    /* 0x38C */ struct T_func_80247294_a0 *unk38C; /* 21 uses */
    /* 0x390 */ f32 unk390; /* 5 uses */
    /* 0x394 */ f32 unk394; /* 5 uses */
    /* 0x398 */ f32 unk398; /* 5 uses */
    /* 0x39C */ u8 unk39C; /* 7 uses */
    /* 0x39D */ u8 unk39D; /* 2 uses */
    /* 0x39E */ u8 unk39E; /* 2 uses */
    /* 0x39F */ u8 unk39F; /* 1 use */
    /* 0x3A0 */ u8 pad3A0[0x2];
    /* 0x3A2 */ u16 unk3A2; /* 7 uses */
    /* 0x3A4 */ u16 unk3A4; /* 6 uses */
    /* 0x3A6 */ u8 unk3A6; /* 12 uses */
    /* 0x3A7 */ u8 unk3A7; /* 5 uses */
    /* 0x3A8 */ f32 unk3A8; /* 4 uses */
    /* 0x3AC */ f32 unk3AC; /* 2 uses */
    /* 0x3B0 */ f32 unk3B0; /* 4 uses */
    /* 0x3B4 */ f32 unk3B4; /* 2 uses */
    /* 0x3B8 */ u16 unk3B8; /* 9 uses */
    /* 0x3BA */ u8 pad3BA[0x2];
    /* 0x3BC */ s32 unk3BC; /* 1 use */
    /* 0x3C0 */ u8 pad3C0[0x74];
    /* 0x434 */ u8 unk434; /* 18 uses */
    /* 0x435 */ u8 unk435; /* 7 uses */
    /* 0x436 */ u8 pad436[0x2];
    /* 0x438 */ f32 unk438; /* 4 uses */
    /* 0x43C */ f32 unk43C; /* 6 uses */
    /* 0x440 */ f32 unk440; /* 6 uses */
    /* 0x444 */ struct T_func_8012CE9C_a1 *unk444; /* 6 uses */
    /* 0x448 */ struct T_func_8012CE9C_a1 *link; /* 52 uses */
    /* 0x44C */ s16 unk44C; /* 7 uses; loaded both signed (lh x5) and unsigned (lhu x1) */
    /* 0x44E */ s16 unk44E; /* 11 uses; loaded both signed (lh x8) and unsigned (lhu x1) */
    /* 0x450 */ s16 unk450; /* 2 uses */
    /* 0x452 */ s16 unk452; /* 2 uses */
    /* 0x454 */ u8 pad454[0x2];
    /* 0x456 */ s16 unk456; /* 1 use */
    /* 0x458 */ u8 pad458[0x21];
    /* 0x479 */ u8 unk479; /* 1 use */
    /* 0x47A */ u8 pad47A[0x2];
    /* 0x47C */ u8 unk47C; /* 15 uses; also s32@0x47C */
    /* 0x47D */ u8 unk47D; /* 12 uses; loaded both signed (lb x1) and unsigned (lbu x4); also s32@0x47C */
    /* 0x47E */ u8 unk47E; /* 3 uses; also s32@0x47C */
    /* 0x47F */ u8 pad47F[0x5];
    /* 0x484 */ u8 unk484; /* 3 uses */
    /* 0x485 */ u8 pad485[0xD];
    /* 0x492 */ s16 unk492; /* 2 uses */
    /* 0x494 */ s16 unk494; /* 2 uses */
    /* 0x496 */ s16 unk496; /* 1 use */
    /* 0x498 */ s16 unk498; /* 1 use */
    /* 0x49A */ u16 unk49A; /* 2 uses */
    /* 0x49C */ u16 unk49C; /* 2 uses */
    /* 0x49E */ u8 pad49E[0x4];
    /* 0x4A2 */ s16 unk4A2; /* 1 use */
    /* 0x4A4 */ u8 pad4A4[0x42];
    /* 0x4E6 */ u16 unk4E6; /* 1 use */
    /* 0x4E8 */ u8 pad4E8[0x2];
    /* 0x4EA */ s16 unk4EA; /* 1 use */
    /* 0x4EC */ u8 pad4EC[0x2];
    /* 0x4EE */ u8 unk4EE; /* 1 use */
    /* 0x4EF */ u8 unk4EF; /* 1 use */
    /* 0x4F0 */ u8 unk4F0; /* 1 use */
    /* 0x4F1 */ u8 unk4F1; /* 1 use */
    /* 0x4F2 */ u8 pad4F2[0x22A];
    /* 0x71C */ u8 unk71C; /* 4 uses */
    /* 0x71D */ u8 pad71D[0x3];
    /* 0x720 */ struct T_D_801BBBF0_p720 *unk720; /* 2 uses */
    /* 0x724 */ u8 unk724; /* 1 use */
    /* 0x725 */ u8 unk725; /* 2 uses */
    /* 0x726 */ u8 pad726[0x4];
    /* 0x72A */ u8 unk72A; /* 2 uses */
    /* 0x72B */ u8 pad72B[0x9];
    /* 0x734 */ u8 unk734; /* 2 uses */
    /* 0x735 */ u8 pad735[0x7];
    /* 0x73C */ u8 unk73C; /* 1 use */
    /* 0x73D */ u8 pad73D[0x7];
    /* 0x744 */ u8 unk744; /* 1 use */
    /* 0x745 */ u8 unk745; /* 1 use */
    /* 0x746 */ u8 pad746[0x1];
    /* 0x747 */ u8 unk747; /* 6 uses */
    /* 0x748 */ u8 unk748; /* 5 uses */
    /* 0x749 */ u8 unk749; /* 1 use */
    /* 0x74A */ u8 pad74A[0x1];
    /* 0x74B */ u8 unk74B; /* 1 use */
    /* 0x74C */ u8 pad74C[0x10];
    /* 0x75C */ s16 unk75C; /* 2 uses */
    /* 0x75E */ u8 pad75E[0x63];
    /* 0x7C1 */ u8 unk7C1; /* 4 uses */
    /* 0x7C2 */ u8 pad7C2[0xF];
    /* 0x7D1 */ u8 unk7D1; /* 2 uses */
    /* 0x7D2 */ u8 pad7D2[0x2];
    /* 0x7D4 */ u8 unk7D4; /* 2 uses */
    /* 0x7D5 */ u8 pad7D5[0x2];
    /* 0x7D7 */ u8 unk7D7; /* 2 uses */
    /* 0x7D8 */ u8 pad7D8[0x10];
    /* 0x7E8 */ s16 unk7E8; /* 2 uses */
    /* 0x7EA */ s16 unk7EA; /* 7 uses */
    /* 0x7EC */ s16 unk7EC; /* 1 use */
    /* 0x7EE */ s16 unk7EE; /* 2 uses */
    /* 0x7F0 */ u8 pad7F0[0x2];
    /* 0x7F2 */ s16 unk7F2; /* 1 use */
    /* 0x7F4 */ u8 pad7F4[0x21];
    /* 0x815 */ u8 unk815; /* 1 use */
    /* 0x816 */ u8 pad816[0x2];
    /* 0x818 */ u8 unk818; /* 14 uses; also s32@0x818 */
    /* 0x819 */ u8 unk819; /* 11 uses; loaded both signed (lb x1) and unsigned (lbu x4); also s32@0x818 */
    /* 0x81A */ u8 unk81A; /* 3 uses; also s32@0x818 */
    /* 0x81B */ u8 pad81B[0x5];
    /* 0x820 */ u8 unk820; /* 3 uses */
    /* 0x821 */ u8 pad821[0xD];
    /* 0x82E */ s16 unk82E; /* 1 use */
    /* 0x830 */ s16 unk830; /* 2 uses */
    /* 0x832 */ s16 unk832; /* 1 use */
    /* 0x834 */ s16 unk834; /* 1 use */
    /* 0x836 */ u8 pad836[0x8];
    /* 0x83E */ s16 unk83E; /* 1 use */
    /* 0x840 */ u8 pad840[0x42];
    /* 0x882 */ u16 unk882; /* 1 use */
    /* 0x884 */ u8 pad884[0x2];
    /* 0x886 */ u16 unk886; /* 2 uses */
    /* 0x888 */ u8 pad888[0x230];
    /* 0xAB8 */ u8 unkAB8; /* 4 uses */
    /* 0xAB9 */ u8 padAB9[0x3];
    /* 0xABC */ struct T_D_801BBBF0_pABC_elem *unkABC; /* 2 uses */
    /* 0xAC0 */ u8 unkAC0; /* 1 use */
    /* 0xAC1 */ u8 padAC1[0x5];
    /* 0xAC6 */ u8 unkAC6; /* 2 uses */
    /* 0xAC7 */ u8 padAC7[0x9];
    /* 0xAD0 */ u8 unkAD0; /* 2 uses */
    /* 0xAD1 */ u8 padAD1[0xF];
    /* 0xAE0 */ u8 unkAE0; /* 2 uses */
    /* 0xAE1 */ u8 padAE1[0x2];
    /* 0xAE3 */ u8 unkAE3; /* 2 uses */
    /* 0xAE4 */ u8 unkAE4; /* 5 uses */
    /* 0xAE5 */ u8 unkAE5; /* 1 use */
    /* 0xAE6 */ u8 padAE6[0x12];
    /* 0xAF8 */ s16 unkAF8; /* 2 uses */
    /* 0xAFA */ u8 padAFA[0x22];
    /* 0xB1C */ struct T_D_801BBBF0_pB1C *unkB1C; /* 1 use */
    /* 0xB20 */ u8 padB20[0x5D];
    /* 0xB7D */ u8 unkB7D; /* 1 use */
    /* 0xB7E */ u8 padB7E[0x6];
    /* 0xB84 */ f32 unkB84; /* 3 uses */
    /* 0xB88 */ f32 unkB88; /* 2 uses */
    /* 0xB8C */ f32 unkB8C; /* 3 uses */
    /* 0xB90 */ f32 unkB90; /* 132 uses */
    /* 0xB94 */ f32 unkB94; /* 24 uses */
    /* 0xB98 */ s16 angle; /* 30 uses */
    /* 0xB9A */ u16 unkB9A; /* 10 uses */
    /* 0xB9C */ u16 unkB9C; /* 9 uses */
    /* 0xB9E */ u16 unkB9E; /* 7 uses */
    /* 0xBA0 */ u16 unkBA0; /* 4 uses */
    /* 0xBA2 */ u8 unkBA2; /* 11 uses */
    /* 0xBA3 */ u8 unkBA3; /* 2 uses */
    /* 0xBA4 */ u8 unkBA4; /* 4 uses */
    /* 0xBA5 */ u8 padBA5[0x183];
    /* 0xD28 */ s32 unkD28; /* 3 uses */
    /* 0xD2C */ s32 unkD2C; /* 11 uses; also u16@0xD2E */
    /* 0xD30 */ s32 unkD30; /* 2 uses */
    /* 0xD34 */ s32 unkD34; /* 1 use */
    /* 0xD38 */ s32 unkD38; /* 2 uses */
    /* 0xD3C */ s32 unkD3C; /* 3 uses */
    /* 0xD40 */ f32 unkD40; /* 1 use */
    /* 0xD44 */ u8 padD44[0x3C];
    /* 0xD80 */ f32 unkD80; /* 1 use */
    /* 0xD84 */ u8 padD84[0x3C];
    /* 0xDC0 */ f32 unkDC0; /* 1 use */
    /* 0xDC4 */ u8 padDC4[0xFC];
    /* 0xEC0 */ void *unkEC0; /* 6 uses */
    /* 0xEC4 */ s32 unkEC4; /* 32 uses; also u16@0xEC6 */
    /* 0xEC8 */ u8 padEC8[0x10];
    /* 0xED8 */ f32 unkED8; /* 2 uses */
    /* 0xEDC */ f32 unkEDC; /* 2 uses */
    /* 0xEE0 */ f32 unkEE0; /* 3 uses */
    /* 0xEE4 */ f32 unkEE4; /* 6 uses */
    /* 0xEE8 */ f32 unkEE8; /* 6 uses */
    /* 0xEEC */ f32 unkEEC; /* 8 uses */
    /* 0xEF0 */ u16 unkEF0; /* 297 uses */
    /* 0xEF2 */ u16 unkEF2; /* 13 uses */
    /* 0xEF4 */ u8 unkEF4; /* 13 uses */
    /* 0xEF5 */ u8 unkEF5; /* 57 uses */
    /* 0xEF6 */ u8 unkEF6; /* 10 uses */
    /* 0xEF7 */ u8 unkEF7; /* 2 uses */
    /* 0xEF8 */ struct T_func_80247294_a0 *unkEF8; /* 26 uses */
    /* 0xEFC */ void *unkEFC; /* 30 uses; also u16@0xEFE */
    /* 0xF00 */ u16 unkF00; /* 25 uses */
    /* 0xF02 */ u8 padF02[0x2];
    /* 0xF04 */ f32 unkF04; /* 13 uses */
    /* 0xF08 */ f32 unkF08; /* 25 uses */
    /* 0xF0C */ u16 unkF0C; /* 22 uses */
    /* 0xF0E */ u8 padF0E[0x2];
    /* 0xF10 */ s32 unkF10; /* 25 uses */
    /* 0xF14 */ f32 unkF14; /* 9 uses */
    /* 0xF18 */ f32 unkF18; /* 9 uses */
    /* 0xF1C */ u8 padF1C[0x4];
    /* 0xF20 */ u8 unkF20; /* 55 uses */
    /* 0xF21 */ u8 unkF21; /* 52 uses */
    /* 0xF22 */ u8 unkF22; /* 52 uses */
    /* 0xF23 */ u8 unkF23; /* 48 uses */
    /* 0xF24 */ u8 unkF24; /* 50 uses */
    /* 0xF25 */ u8 unkF25; /* 52 uses */
    /* 0xF26 */ s8 unkF26; /* 45 uses */
    /* 0xF27 */ s8 unkF27; /* 41 uses */
    /* 0xF28 */ s8 unkF28; /* 41 uses */
    /* 0xF29 */ u8 unkF29; /* 33 uses */
    /* 0xF2A */ u8 unkF2A; /* 36 uses */
    /* 0xF2B */ u8 unkF2B; /* 33 uses */
    /* 0xF2C */ s8 unkF2C; /* 34 uses */
    /* 0xF2D */ s8 unkF2D; /* 34 uses */
    /* 0xF2E */ s8 unkF2E; /* 34 uses */
    /* 0xF2F */ s8 unkF2F; /* 2 uses */
    /* 0xF30 */ s8 unkF30; /* 2 uses */
    /* 0xF31 */ s8 unkF31; /* 2 uses */
    /* 0xF32 */ u8 unkF32; /* 190 uses */
    /* 0xF33 */ u8 unkF33; /* 190 uses */
    /* 0xF34 */ u8 unkF34; /* 190 uses */
    /* 0xF35 */ u8 unkF35; /* 192 uses */
    /* 0xF36 */ u8 unkF36; /* 9 uses */
    /* 0xF37 */ u8 unkF37; /* 9 uses */
    /* 0xF38 */ u8 unkF38; /* 8 uses */
    /* 0xF39 */ u8 unkF39; /* 8 uses */
    /* 0xF3A */ u8 unkF3A; /* 8 uses */
    /* 0xF3B */ u8 unkF3B; /* 8 uses */
    /* 0xF3C */ s8 unkF3C; /* 8 uses */
    /* 0xF3D */ s8 unkF3D; /* 8 uses */
    /* 0xF3E */ s8 unkF3E; /* 8 uses */
    /* 0xF3F */ u8 unkF3F; /* 8 uses */
    /* 0xF40 */ u8 unkF40; /* 8 uses */
    /* 0xF41 */ u8 unkF41; /* 8 uses */
    /* 0xF42 */ s8 unkF42; /* 8 uses */
    /* 0xF43 */ s8 unkF43; /* 8 uses */
    /* 0xF44 */ s8 unkF44; /* 8 uses */
    /* 0xF45 */ u8 unkF45; /* 8 uses */
    /* 0xF46 */ u8 unkF46; /* 8 uses */
    /* 0xF47 */ u8 unkF47; /* 8 uses */
    /* 0xF48 */ u8 unkF48; /* 11 uses */
    /* 0xF49 */ u8 padF49[0xE7];
    /* 0x1030 */ u8 unk1030; /* 53 uses */
    /* 0x1031 */ u8 unk1031; /* 291 uses */
    /* 0x1032 */ u8 unk1032; /* 3 uses */
    /* 0x1033 */ u8 unk1033; /* 2 uses */
    /* 0x1034 */ u8 unk1034; /* 5 uses */
    /* 0x1035 */ u8 unk1035; /* 8 uses */
    /* 0x1036 */ u8 unk1036; /* 6 uses */
    /* 0x1037 */ u8 pad1037[0x1];
    /* 0x1038 */ f32 unk1038; /* 6 uses */
    /* 0x103C */ f32 unk103C; /* 4 uses */
    /* 0x1040 */ f32 unk1040; /* 6 uses */
    /* 0x1044 */ struct T_func_8012636C_a0 *unk1044; /* 2 uses */
    /* 0x1048 */ struct T_D_801BBBF0_p1048 *unk1048; /* 2 uses */
    /* 0x104C */ s32 unk104C; /* 4 uses */
    /* 0x1050 */ s32 unk1050; /* 4 uses */
    /* 0x1054 */ s32 unk1054; /* 4 uses */
    /* 0x1058 */ s32 unk1058; /* 7 uses */
    /* 0x105C */ s32 unk105C; /* 7 uses */
    /* 0x1060 */ s32 unk1060; /* 7 uses */
    /* 0x1064 */ s32 unk1064; /* 2 uses */
    /* 0x1068 */ s32 unk1068; /* 2 uses */
    /* 0x106C */ s32 unk106C; /* 2 uses */
    /* 0x1070 */ u8 pad1070[0x18];
    /* 0x1088 */ struct T_func_802409B4_a0 *unk1088; /* 11 uses */
    /* 0x108C */ u8 pad108C[0x14];
    /* 0x10A0 */ struct T_func_80107830_a0 *unk10A0; /* 16 uses */
    /* 0x10A4 */ u8 pad10A4[0x14];
    /* 0x10B8 */ struct T_func_802409B4_a0 *unk10B8; /* 4 uses */
    /* 0x10BC */ u8 pad10BC[0x14];
    /* 0x10D0 */ struct T_func_802409B4_a0 *unk10D0; /* 4 uses */
    /* 0x10D4 */ u8 pad10D4[0x2C];
    /* 0x1100 */ struct T_func_80203830_a0 *unk1100; /* 9 uses */
    /* 0x1104 */ struct T_func_802409B4_a0 *unk1104; /* 4 uses */
    /* 0x1108 */ u8 pad1108[0xC];
    /* 0x1114 */ s16 unk1114; /* 1 use */
    /* 0x1116 */ u8 pad1116[0x2];
    /* 0x1118 */ struct T_func_80240DA4_ret_80240DF0 *unk1118; /* 90 uses */
    /* 0x111C */ f32 unk111C; /* 3 uses */
    /* 0x1120 */ f32 unk1120; /* 3 uses */
    /* 0x1124 */ f32 unk1124; /* 3 uses */
    /* 0x1128 */ f32 unk1128; /* 3 uses */
    /* 0x112C */ s32 unk112C; /* 6 uses */
    /* 0x1130 */ f32 unk1130; /* 8 uses */
    /* 0x1134 */ u8 pad1134[0x4];
    /* 0x1138 */ void *unk1138; /* 3 uses */
    /* 0x113C */ u8 pad113C[0x8];
    /* 0x1144 */ f32 unk1144; /* 2 uses */
    /* 0x1148 */ f32 unk1148; /* 2 uses */
    /* 0x114C */ f32 unk114C; /* 2 uses */
    /* 0x1150 */ s32 unk1150; /* 1 use */
} T_D_801BBBF0;

/* D_801BBC8C, D_801BBCAC; 50 functions */
typedef struct T_D_801BBC8C { /* size >= 0x20 */
    /* 0x000 */ s32 w; /* 9 uses */
    /* 0x004 */ s32 unk4; /* 9 uses */
    /* 0x008 */ s32 unk8; /* 9 uses */
    /* 0x00C */ s32 unkC; /* 9 uses */
    /* 0x010 */ s32 unk10; /* 9 uses */
    /* 0x014 */ s32 unk14; /* 9 uses */
    /* 0x018 */ s32 unk18; /* 9 uses */
    /* 0x01C */ s32 unk1C; /* 9 uses */
} T_D_801BBC8C;

/* D_801BC028; 3 functions */
typedef struct T_D_801BC028 { /* size >= 0xC */
    /* 0x000 */ s32 x; /* 3 uses */
    /* 0x004 */ s32 y; /* 3 uses */
    /* 0x008 */ s32 z; /* 3 uses */
} T_D_801BC028;

/* D_801BC03C, D_801BC3D8; 482 functions */
typedef struct T_D_801BC03C { /* size >= 0x3BC */
    /* 0x000 */ s16 unk0; /* 19 uses; loaded both signed (lh x16) and unsigned (lhu x1) */
    /* 0x002 */ s16 unk2; /* 14 uses */
    /* 0x004 */ s16 unk4; /* 22 uses; loaded both signed (lh x18) and unsigned (lhu x3) */
    /* 0x006 */ s16 unk6; /* 27 uses */
    /* 0x008 */ s16 unk8; /* 11 uses */
    /* 0x00A */ s16 unkA; /* 15 uses */
    /* 0x00C */ u16 unkC; /* 1 use */
    /* 0x00E */ u8 padE[0x2];
    /* 0x010 */ f32 unk10; /* 2 uses */
    /* 0x014 */ f32 unk14; /* 1 use */
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 2 uses */
    /* 0x024 */ u8 pad24[0x8];
    /* 0x02C */ u8 unk2C; /* 3 uses */
    /* 0x02D */ u8 unk2D; /* 2 uses */
    /* 0x02E */ u8 pad2E[0x2];
    /* 0x030 */ s32 w; /* 5 uses; also u16@0x32 */
    /* 0x034 */ u8 pad34[0x4];
    /* 0x038 */ s32 unk38; /* 3 uses */
    /* 0x03C */ u8 pad3C[0x4];
    /* 0x040 */ s16 unk40; /* 4 uses */
    /* 0x042 */ s16 unk42; /* 4 uses */
    /* 0x044 */ s16 unk44; /* 3 uses */
    /* 0x046 */ u16 unk46; /* 3 uses */
    /* 0x048 */ s16 unk48; /* 1 use */
    /* 0x04A */ s16 unk4A; /* 7 uses */
    /* 0x04C */ s16 unk4C; /* 11 uses */
    /* 0x04E */ u16 unk4E; /* 5 uses */
    /* 0x050 */ u16 unk50; /* 5 uses */
    /* 0x052 */ u16 unk52; /* 4 uses */
    /* 0x054 */ u16 unk54; /* 3 uses */
    /* 0x056 */ u8 pad56[0x2];
    /* 0x058 */ u16 unk58; /* 4 uses */
    /* 0x05A */ u16 unk5A; /* 4 uses */
    /* 0x05C */ u16 unk5C; /* 2 uses */
    /* 0x05E */ u16 unk5E; /* 7 uses */
    /* 0x060 */ u16 unk60; /* 9 uses */
    /* 0x062 */ u16 unk62; /* 2 uses */
    /* 0x064 */ u16 unk64; /* 2 uses */
    /* 0x066 */ u16 unk66; /* 4 uses */
    /* 0x068 */ u16 unk68; /* 6 uses */
    /* 0x06A */ u8 pad6A[0x20];
    /* 0x08A */ u16 unk8A; /* 1 use */
    /* 0x08C */ s16 unk8C; /* 1 use */
    /* 0x08E */ u8 pad8E[0x2];
    /* 0x090 */ u16 unk90; /* 1 use */
    /* 0x092 */ u16 unk92; /* 1 use */
    /* 0x094 */ u16 unk94; /* 1 use */
    /* 0x096 */ u8 pad96[0x8];
    /* 0x09E */ u16 unk9E; /* 5 uses */
    /* 0x0A0 */ u16 unkA0; /* 2 uses */
    /* 0x0A2 */ u8 unkA2; /* 1 use */
    /* 0x0A3 */ u8 unkA3; /* 1 use */
    /* 0x0A4 */ u8 unkA4; /* 1 use */
    /* 0x0A5 */ u8 unkA5; /* 1 use */
    /* 0x0A6 */ u8 unkA6; /* 7 uses */
    /* 0x0A7 */ u8 padA7[0x211];
    /* 0x2B8 */ s16 unk2B8; /* 1 use */
    /* 0x2BA */ s16 unk2BA; /* 2 uses */
    /* 0x2BC */ s16 unk2BC; /* 1 use */
    /* 0x2BE */ s16 unk2BE; /* 1 use */
    /* 0x2C0 */ s16 unk2C0; /* 1 use */
    /* 0x2C2 */ s16 unk2C2; /* 1 use */
    /* 0x2C4 */ s16 unk2C4; /* 1 use */
    /* 0x2C6 */ s16 unk2C6; /* 1 use */
    /* 0x2C8 */ s16 unk2C8; /* 1 use */
    /* 0x2CA */ s16 unk2CA; /* 1 use */
    /* 0x2CC */ s16 unk2CC; /* 1 use */
    /* 0x2CE */ s16 unk2CE; /* 1 use */
    /* 0x2D0 */ u8 unk2D0; /* 1 use */
    /* 0x2D1 */ u8 unk2D1; /* 1 use */
    /* 0x2D2 */ u8 pad2D2[0x2];
    /* 0x2D4 */ s32 **unk2D4; /* 1 use */
    /* 0x2D8 */ u8 unk2D8; /* 2 uses */
    /* 0x2D9 */ u8 unk2D9; /* 3 uses */
    /* 0x2DA */ u8 pad2DA[0x1E];
    /* 0x2F8 */ u8 unk2F8; /* 1 use */
    /* 0x2F9 */ u8 unk2F9; /* 1 use */
    /* 0x2FA */ u8 pad2FA[0x1];
    /* 0x2FB */ u8 unk2FB; /* 1 use */
    /* 0x2FC */ u8 unk2FC; /* 5 uses */
    /* 0x2FD */ u8 unk2FD; /* 2 uses */
    /* 0x2FE */ u8 unk2FE; /* 2 uses */
    /* 0x2FF */ u8 unk2FF; /* 3 uses */
    /* 0x300 */ s16 unk300; /* 1 use */
    /* 0x302 */ s16 unk302; /* 2 uses */
    /* 0x304 */ u8 pad304[0x4];
    /* 0x308 */ f32 unk308; /* 7 uses */
    /* 0x30C */ u8 unk30C; /* 4 uses */
    /* 0x30D */ u8 pad30D[0x1];
    /* 0x30E */ u16 unk30E; /* 6 uses */
    /* 0x310 */ s16 unk310; /* 1 use */
    /* 0x312 */ u8 pad312[0x22];
    /* 0x334 */ struct T_D_801BC03C_p334 *unk334; /* 5 uses */
    /* 0x338 */ u8 pad338[0x3D];
    /* 0x375 */ u8 unk375; /* 5 uses */
    /* 0x376 */ u8 pad376[0xE];
    /* 0x384 */ u8 unk384; /* 1 use */
    /* 0x385 */ u8 unk385; /* 1 use */
    /* 0x386 */ u8 unk386; /* 1 use */
    /* 0x387 */ u8 unk387; /* 1 use */
    /* 0x388 */ u8 unk388; /* 1 use */
    /* 0x389 */ u8 unk389; /* 1 use */
    /* 0x38A */ u8 unk38A; /* 1 use */
    /* 0x38B */ u8 unk38B; /* 1 use */
    /* 0x38C */ u8 unk38C; /* 1 use */
    /* 0x38D */ u8 unk38D; /* 1 use */
    /* 0x38E */ u8 pad38E[0xA];
    /* 0x398 */ u8 unk398; /* 5 uses */
    /* 0x399 */ u8 unk399; /* 1 use */
    /* 0x39A */ u8 pad39A[0xE];
    /* 0x3A8 */ f32 unk3A8; /* 38 uses */
    /* 0x3AC */ f32 unk3AC; /* 2 uses */
    /* 0x3B0 */ u8 pad3B0[0x2];
    /* 0x3B2 */ u16 unk3B2; /* 7 uses */
    /* 0x3B4 */ u8 pad3B4[0x6];
    /* 0x3BA */ u8 unk3BA; /* 4 uses */
    /* 0x3BB */ u8 unk3BB; /* 1 use */
} T_D_801BC03C;

/* pointed to by T_D_801BCD4C.0x0; 1 functions */
typedef struct T_D_801BCD4C_p0 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_801BCD4C_p0;

/* D_801BD860; 3 functions */
typedef struct T_D_801BD860_elem { /* size 0x8 */
    /* 0x000 */ u16 unk0; /* 8 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ struct T_D_8016379C *unk4; /* 7 uses */
} T_D_801BD860_elem;

/* parameter main:func_8000070C:0, main:func_80000774:0; 2 functions */
typedef struct T_func_8000070C_a0 { /* size >= 0x898 */
    /* 0x000 */ u8 pad0[0x888];
    /* 0x888 */ struct T_func_8000070C_a0_p888 *unk888; /* 1 use */
    /* 0x88C */ s32 unk88C; /* 1 use */
    /* 0x890 */ u8 pad890[0x4];
    /* 0x894 */ s32 unk894; /* 1 use */
} T_func_8000070C_a0;

/* pointed to by T_func_8000070C_a0.0x888; 1 functions */
typedef struct T_func_8000070C_a0_p888 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
} T_func_8000070C_a0_p888;

/* pointed to by T_D_8005C4B0.0x888, T_func_80000984_a1.0x0; 1 functions */
typedef struct T_func_80000934_a1 { /* size >= 0x8 */
    /* 0x000 */ struct T_func_80000934_a1 *unk0; /* 1 use */
    /* 0x004 */ void *unk4; /* 1 use */
} T_func_80000934_a1;

/* pointed to by T_func_80149580_a1.0x30; 14 functions */
typedef struct T_func_80005CDC_ret { /* size >= 0x38 */
    /* 0x000 */ s16 x; /* 1 use */
    /* 0x002 */ s16 y; /* 1 use */
    /* 0x004 */ f32 unk4; /* 25 uses */
    /* 0x008 */ f32 unk8; /* 30 uses */
    /* 0x00C */ f32 unkC; /* 11 uses */
    /* 0x010 */ s16 unk10; /* 8 uses */
    /* 0x012 */ s16 unk12; /* 16 uses */
    /* 0x014 */ s16 unk14; /* 8 uses */
    /* 0x016 */ u8 pad16[0x2];
    /* 0x018 */ f32 unk18; /* 17 uses */
    /* 0x01C */ f32 unk1C; /* 16 uses */
    /* 0x020 */ f32 unk20; /* 20 uses */
    /* 0x024 */ s32 unk24; /* 4 uses */
    /* 0x028 */ u8 pad28[0x8];
    /* 0x030 */ s32 unk30; /* 6 uses */
    /* 0x034 */ s32 unk34; /* 2 uses */
} T_func_80005CDC_ret;

/* pointed to by T_func_80149580_a1.0x2C; 5 functions */
typedef struct T_func_80005D3C_ret { /* size >= 0x70 */
    /* 0x000 */ s16 unk0; /* 6 uses */
    /* 0x002 */ s16 unk2; /* 6 uses */
    /* 0x004 */ s16 unk4; /* 5 uses */
    /* 0x006 */ s16 unk6; /* 5 uses */
    /* 0x008 */ s32 unk8; /* 4 uses */
    /* 0x00C */ s32 unkC; /* 4 uses */
    /* 0x010 */ s32 unk10; /* 4 uses */
    /* 0x014 */ s32 unk14; /* 4 uses */
    /* 0x018 */ s16 unk18; /* 2 uses */
    /* 0x01A */ u8 pad1A[0x2];
    /* 0x01C */ f32 unk1C; /* 3 uses */
    /* 0x020 */ f32 unk20; /* 2 uses */
    /* 0x024 */ f32 unk24; /* 2 uses */
    /* 0x028 */ f32 unk28; /* 4 uses */
    /* 0x02C */ f32 unk2C; /* 2 uses */
    /* 0x030 */ f32 unk30; /* 3 uses */
    /* 0x034 */ f32 unk34; /* 4 uses */
    /* 0x038 */ f32 unk38; /* 4 uses */
    /* 0x03C */ f32 unk3C; /* 3 uses */
    /* 0x040 */ f32 unk40; /* 4 uses */
    /* 0x044 */ f32 unk44; /* 4 uses */
    /* 0x048 */ f32 unk48; /* 2 uses */
    /* 0x04C */ f32 unk4C; /* 2 uses */
    /* 0x050 */ f32 unk50; /* 2 uses */
    /* 0x054 */ f32 unk54; /* 2 uses */
    /* 0x058 */ s32 unk58; /* 2 uses */
    /* 0x05C */ u8 pad5C[0x10];
    /* 0x06C */ u16 unk6C; /* 2 uses */
    /* 0x06E */ u8 pad6E[0x2];
} T_func_80005D3C_ret;

/* pointed to by T_D_80089378.0x18; 2 functions */
typedef struct T_func_80005E44_a0 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 4 uses */
} T_func_80005E44_a0;

/* pointed to by T_D_801DAD50_file025.0x0, T_D_801DAEE4_file025.0x0; 17 functions */
typedef struct T_func_80005FAC_ret { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 17 uses */
    /* 0x023 */ u8 pad23[0x9];
    /* 0x02C */ struct T_func_80005FAC_ret_p2C *unk2C; /* 113 uses */
} T_func_80005FAC_ret;

/* pointed to by T_func_801451C0_a0.0xC; 2 functions */
typedef struct T_func_8000659C_ret { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ struct T_D_80089378 *unk8; /* 3 uses */
} T_func_8000659C_ret;

/* parameter main:func_800065EC:0, main:func_80007BD0:0; 7 functions */
typedef struct T_func_800065EC_a0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x20];
    /* 0x020 */ s16 unk20; /* 1 use */
    /* 0x022 */ u8 flag; /* 6 uses */
    /* 0x023 */ u8 pad23[0x1];
    /* 0x024 */ s32 unk24; /* 1 use */
    /* 0x028 */ s16 unk28; /* 1 use */
    /* 0x02A */ s16 unk2A; /* 1 use */
    /* 0x02C */ struct T_func_800065EC_a0_p2C *unk2C; /* 65 uses */
    /* 0x030 */ struct T_func_800065EC_a0_p30 *unk30; /* 1 use */
} T_func_800065EC_a0;

/* pointed to by T_func_800065EC_a0.0x2C; 3 functions */
typedef struct T_func_800065EC_a0_p2C { /* size >= 0x58 */
    /* 0x000 */ s16 unk0; /* 7 uses */
    /* 0x002 */ s16 unk2; /* 7 uses */
    /* 0x004 */ s16 unk4; /* 7 uses */
    /* 0x006 */ s16 unk6; /* 7 uses */
    /* 0x008 */ u32 w; /* 7 uses */
    /* 0x00C */ s32 unkC; /* 5 uses */
    /* 0x010 */ s32 unk10; /* 5 uses */
    /* 0x014 */ s32 unk14; /* 5 uses */
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ f32 unk1C; /* 2 uses */
    /* 0x020 */ f32 unk20; /* 2 uses */
    /* 0x024 */ f32 unk24; /* 2 uses */
    /* 0x028 */ f32 unk28; /* 2 uses */
    /* 0x02C */ f32 unk2C; /* 2 uses */
    /* 0x030 */ f32 unk30; /* 2 uses */
    /* 0x034 */ f32 unk34; /* 2 uses */
    /* 0x038 */ f32 unk38; /* 2 uses */
    /* 0x03C */ f32 unk3C; /* 2 uses */
    /* 0x040 */ f32 unk40; /* 2 uses */
    /* 0x044 */ f32 unk44; /* 2 uses */
    /* 0x048 */ f32 unk48; /* 2 uses */
    /* 0x04C */ f32 unk4C; /* 2 uses */
    /* 0x050 */ f32 unk50; /* 2 uses */
    /* 0x054 */ f32 unk54; /* 1 use */
} T_func_800065EC_a0_p2C;

/* pointed to by T_func_800065EC_a0.0x30; 1 functions */
typedef struct T_func_800065EC_a0_p30 { /* size >= 0x4C */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 unk12; /* 1 use */
    /* 0x014 */ s16 unk14; /* 1 use */
    /* 0x016 */ u8 pad16[0x2];
    /* 0x018 */ f32 unk18; /* 3 uses */
    /* 0x01C */ f32 unk1C; /* 3 uses */
    /* 0x020 */ f32 unk20; /* 3 uses */
    /* 0x024 */ s32 unk24; /* 1 use */
    /* 0x028 */ s32 unk28; /* 1 use */
    /* 0x02C */ s16 unk2C; /* 1 use */
    /* 0x02E */ u8 pad2E[0x2];
    /* 0x030 */ void *unk30; /* 1 use */
    /* 0x034 */ s32 unk34; /* 1 use */
    /* 0x038 */ u8 pad38[0x2];
    /* 0x03A */ u8 unk3A; /* 1 use */
    /* 0x03B */ u8 pad3B[0x5];
    /* 0x040 */ s32 unk40; /* 1 use */
    /* 0x044 */ u8 pad44[0x4];
    /* 0x048 */ u8 unk48; /* 1 use */
    /* 0x049 */ u8 unk49; /* 1 use */
    /* 0x04A */ u8 unk4A; /* 1 use */
    /* 0x04B */ u8 unk4B; /* 1 use */
} T_func_800065EC_a0_p30;

/* pointed to by T_D_8008D5C0.0x0; 1 functions */
typedef struct T_func_80006754_ret { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_func_80006754_ret;

/* pointed to by T_D_800892B0.0x1B0; 4 functions */
typedef struct T_func_800069A8_a0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x1C];
    /* 0x01C */ void *matrix; /* 2 uses */
    /* 0x020 */ u8 pad20[0xA];
    /* 0x02A */ u16 unk2A; /* 1 use */
    /* 0x02C */ struct T_func_800069A8_a0_p2C *rect; /* 17 uses */
    /* 0x030 */ struct T_func_800069A8_a0_p30_elem *unk30; /* 1 use */
} T_func_800069A8_a0;

/* pointed to by T_func_800069A8_a0.0x2C; 2 functions */
typedef struct T_func_800069A8_a0_p2C { /* size >= 0x54 */
    /* 0x000 */ s16 unk0; /* 4 uses */
    /* 0x002 */ s16 unk2; /* 4 uses */
    /* 0x004 */ s16 unk4; /* 4 uses */
    /* 0x006 */ s16 unk6; /* 4 uses */
    /* 0x008 */ u32 mode; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ u16 unk18; /* 1 use */
    /* 0x01A */ u8 pad1A[0x2];
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ s32 unk20; /* 1 use */
    /* 0x024 */ f32 unk24; /* 1 use */
    /* 0x028 */ f32 unk28; /* 1 use */
    /* 0x02C */ f32 unk2C; /* 1 use */
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ s32 unk34; /* 1 use */
    /* 0x038 */ s32 unk38; /* 1 use */
    /* 0x03C */ f32 unk3C; /* 1 use */
    /* 0x040 */ f32 unk40; /* 1 use */
    /* 0x044 */ f32 unk44; /* 1 use */
    /* 0x048 */ f32 unk48; /* 1 use */
    /* 0x04C */ f32 unk4C; /* 1 use */
    /* 0x050 */ f32 unk50; /* 1 use */
} T_func_800069A8_a0_p2C;

/* anonymous; 1 functions */
typedef struct T_func_800069A8_a0_p30_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_800069A8_a0_p30_elem;

/* parameter main:func_80007114:0, main:func_80007328:0; 2 functions */
typedef struct T_func_80007114_a0 { /* size >= 0x84 */
    /* 0x000 */ struct T_func_80007114_a0_p0 *unk0; /* 3 uses */
    /* 0x004 */ u8 pad4[0x78];
    /* 0x07C */ f32 unk7C; /* 1 use */
    /* 0x080 */ s8 unk80; /* 10 uses */
    /* 0x081 */ u8 pad81[0x3];
} T_func_80007114_a0;

/* anonymous; 1 functions */
typedef struct T_func_80007114_a0_elem { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
} T_func_80007114_a0_elem;

/* pointed to by T_func_80007114_a0.0x0; 2 functions */
typedef struct T_func_80007114_a0_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_80007114_a0_p0_p2C *unk2C; /* 3 uses */
} T_func_80007114_a0_p0;

/* pointed to by T_func_80007114_a0_p0.0x2C; 2 functions */
typedef struct T_func_80007114_a0_p0_p2C { /* size >= 0xB0 */
    /* 0x000 */ u8 pad0[0x70];
    /* 0x070 */ f32 unk70; /* 1 use */
    /* 0x074 */ u8 pad74[0x24];
    /* 0x098 */ s32 unk98; /* 1 use */
    /* 0x09C */ s32 unk9C; /* 1 use */
    /* 0x0A0 */ s32 unkA0; /* 1 use */
    /* 0x0A4 */ s32 unkA4; /* 1 use */
    /* 0x0A8 */ s32 unkA8; /* 1 use */
    /* 0x0AC */ s32 unkAC; /* 1 use */
} T_func_80007114_a0_p0_p2C;

/* pointed to by T_D_8008D5BC.0x0; 20 functions */
typedef struct T_func_800078AC_ret { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 377 uses */
    /* 0x004 */ struct T_D_700000 *unk4; /* 379 uses */
} T_func_800078AC_ret;

/* pointed to by T_D_8016379C.0xC; 3 functions */
typedef struct T_func_80007BD0_a1 { /* size >= 0x40 */
    /* 0x000 */ f32 unk0; /* 3 uses */
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 2 uses */
    /* 0x010 */ f32 unk10; /* 2 uses */
    /* 0x014 */ f32 unk14; /* 2 uses */
    /* 0x018 */ f32 unk18; /* 2 uses */
    /* 0x01C */ f32 unk1C; /* 2 uses */
    /* 0x020 */ f32 unk20; /* 2 uses */
    /* 0x024 */ f32 unk24; /* 2 uses */
    /* 0x028 */ f32 unk28; /* 2 uses */
    /* 0x02C */ f32 unk2C; /* 2 uses */
    /* 0x030 */ f32 unk30; /* 2 uses */
    /* 0x034 */ f32 unk34; /* 2 uses */
    /* 0x038 */ f32 unk38; /* 1 use */
    /* 0x03C */ f32 unk3C; /* 1 use */
} T_func_80007BD0_a1;

/* parameter main:func_8000B1E8:1, main:func_8000B83C:0; 6 functions */
typedef struct T_func_8000B1E8_a1 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_8000B578_a1 *unkC; /* 3 uses */
    /* 0x010 */ u8 pad10[0xC];
    /* 0x01C */ void *unk1C; /* 2 uses */
    /* 0x020 */ u8 pad20[0x4];
    /* 0x024 */ s32 unk24; /* 1 use */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ struct T_func_8000B1E8_a1_p2C *unk2C; /* 12 uses */
    /* 0x030 */ struct T_func_8000B1E8_a1_p30 *unk30; /* 6 uses */
} T_func_8000B1E8_a1;

/* pointed to by T_func_8000B1E8_a1.0x2C; 3 functions */
typedef struct T_func_8000B1E8_a1_p2C { /* size >= 0xA4 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x22];
    /* 0x024 */ s32 unk24; /* 1 use */
    /* 0x028 */ s32 unk28; /* 1 use */
    /* 0x02C */ u8 pad2C[0x18];
    /* 0x044 */ struct T_D_700000 *unk44; /* 3 uses */
    /* 0x048 */ u8 pad48[0x10];
    /* 0x058 */ u16 unk58; /* 2 uses */
    /* 0x05A */ u8 pad5A[0x3E];
    /* 0x098 */ f32 unk98; /* 1 use */
    /* 0x09C */ f32 unk9C; /* 1 use */
    /* 0x0A0 */ f32 unkA0; /* 1 use */
} T_func_8000B1E8_a1_p2C;

/* pointed to by T_func_8000B1E8_a1.0x30; 1 functions */
typedef struct T_func_8000B1E8_a1_p30 { /* size >= 0x2C */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x22];
    /* 0x024 */ s32 unk24; /* 1 use */
    /* 0x028 */ s32 unk28; /* 1 use */
} T_func_8000B1E8_a1_p30;

/* pointed to by T_func_8000B1E8_a1.0xC; 2 functions */
typedef struct T_func_8000B578_a1 { /* size >= 0x20 */
    /* 0x000 */ u8 pad0[0x1C];
    /* 0x01C */ s32 unk1C; /* 2 uses */
} T_func_8000B578_a1;

/* pointed to by T_D_800892B0.0x4290; 2 functions */
typedef struct T_func_8000BC5C_a0 { /* size >= 0x12 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ s16 unk2; /* 4 uses */
    /* 0x004 */ s16 unk4; /* 4 uses */
    /* 0x006 */ s16 unk6; /* 1 use */
    /* 0x008 */ s16 unk8; /* 4 uses */
    /* 0x00A */ s16 unkA; /* 4 uses */
    /* 0x00C */ u8 unkC; /* 1 use */
    /* 0x00D */ u8 unkD; /* 1 use */
    /* 0x00E */ u8 unkE; /* 1 use */
    /* 0x00F */ u8 unkF; /* 1 use */
    /* 0x010 */ s16 unk10; /* 3 uses */
} T_func_8000BC5C_a0;

/* pointed to by T_D_801BBBF0_elem_3.0x8, T_D_801BBBF0_elem_4.0x14; 2 functions */
typedef struct T_func_8000E634_a0 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 3 uses */
    /* 0x004 */ u8 pad4[0x4];
    /* 0x008 */ f32 unk8; /* 1 use */
} T_func_8000E634_a0;

/* pointed to by T_func_8000F458_a0_elem.0x0; 1 functions */
typedef struct T_func_8000F458_a0_elem_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 1 use */
} T_func_8000F458_a0_elem_p0;

/* pointed to by T_func_8000F458_a0.0x0; 2 functions */
typedef struct T_func_8000F458_a0_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8000F458_a0_p0_p2C *unk2C; /* 2 uses */
} T_func_8000F458_a0_p0;

/* pointed to by T_func_8000F458_a0_p0.0x2C; 2 functions */
typedef struct T_func_8000F458_a0_p0_p2C { /* size >= 0x68 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 4 uses */
    /* 0x008 */ f32 unk8; /* 4 uses */
    /* 0x00C */ f32 unkC; /* 4 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 2 uses */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 1 use */
    /* 0x024 */ u8 pad24[0x2C];
    /* 0x050 */ f32 unk50; /* 2 uses */
    /* 0x054 */ u8 pad54[0x8];
    /* 0x05C */ s32 unk5C; /* 2 uses */
    /* 0x060 */ s32 unk60; /* 2 uses */
    /* 0x064 */ s32 unk64; /* 2 uses */
} T_func_8000F458_a0_p0_p2C;

/* pointed to by T_func_8000F458_a0.0x4; 3 functions */
typedef struct T_func_8000F458_a0_p4 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8000F458_a0_p4_p2C *unk2C; /* 3 uses */
} T_func_8000F458_a0_p4;

/* pointed to by T_func_8000F458_a0_p4.0x2C; 2 functions */
typedef struct T_func_8000F458_a0_p4_p2C { /* size >= 0x68 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 8 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 6 uses */
    /* 0x010 */ u8 pad10[0x40];
    /* 0x050 */ f32 unk50; /* 1 use */
    /* 0x054 */ u8 pad54[0x8];
    /* 0x05C */ s32 unk5C; /* 2 uses */
    /* 0x060 */ s32 unk60; /* 2 uses */
    /* 0x064 */ s32 unk64; /* 2 uses */
} T_func_8000F458_a0_p4_p2C;

/* element of main:func_80014B88:0, main:func_80014E14:0; 3 functions */
typedef struct T_func_80014B88_a0_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 28 uses */
    /* 0x004 */ f32 unk4; /* 25 uses */
} T_func_80014B88_a0_elem;

/* parameter main:func_80015420:1, main:func_80015B50:0; 2 functions */
typedef struct T_func_80015420_a1 { /* size >= 0x24 */
    /* 0x000 */ void *unk0; /* 1 use */
    /* 0x004 */ void *unk4; /* 1 use */
    /* 0x008 */ void *unk8; /* 3 uses */
    /* 0x00C */ s32 unkC; /* 3 uses */
    /* 0x010 */ s32 unk10; /* 3 uses */
    /* 0x014 */ void *unk14; /* 1 use */
    /* 0x018 */ u8 *unk18; /* 2 uses */
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ s32 unk20; /* 1 use */
} T_func_80015420_a1;

/* parameter main:func_80015488:2, main:func_8001559C:2; 14 functions */
typedef struct T_func_80015488_a2 { /* size >= 0x2C */
    /* 0x000 */ u32 unk0; /* 9 uses; used signed x3, unsigned x4 */
    /* 0x004 */ u32 unk4; /* 9 uses; used signed x4, unsigned x5 */
    /* 0x008 */ s32 unk8; /* 6 uses */
    /* 0x00C */ u8 padC[0x4];
    /* 0x010 */ s32 unk10; /* 2 uses */
    /* 0x014 */ s32 unk14; /* 3 uses */
    /* 0x018 */ u8 pad18[0x4];
    /* 0x01C */ void *unk1C; /* 5 uses */
    /* 0x020 */ s32 unk20; /* 4 uses */
    /* 0x024 */ void (*unk24)(); /* 15 uses */
    /* 0x028 */ void (*unk28)(); /* 9 uses */
} T_func_80015488_a2;

/* pointed to by T_D_8008EE8C.0x0; 2 functions */
typedef struct T_func_80018E9C_ret { /* size >= 0x8 */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u8 unk2; /* 4 uses */
    /* 0x003 */ u8 unk3; /* 2 uses */
    /* 0x004 */ u8 unk4; /* 3 uses */
    /* 0x005 */ u8 unk5; /* 3 uses */
    /* 0x006 */ u8 pad6[0x1];
    /* 0x007 */ u8 unk7; /* 2 uses */
} T_func_80018E9C_ret;

/* element of main:func_8001B154, main:func_800189C8:800189E0; 6 functions */
typedef struct T_func_8001B154_ret_elem { /* size 0x11A */
    /* 0x000 */ u8 unk0; /* 4 uses */
    /* 0x001 */ u8 unk1; /* 5 uses */
    /* 0x002 */ s16 unk2; /* 1 use */
    /* 0x004 */ s16 unk4; /* 4 uses */
    /* 0x006 */ s16 unk6; /* 3 uses */
    /* 0x008 */ u8 pad8[0x2];
    /* 0x00A */ u8 unkA; /* 2 uses */
    /* 0x00B */ u8 unkB; /* 3 uses */
    /* 0x00C */ u8 padC[0x2];
    /* 0x00E */ s16 unkE; /* 1 use */
    /* 0x010 */ u16 unk10; /* 3 uses */
    /* 0x012 */ u8 unk12; /* 3 uses */
    /* 0x013 */ u8 pad13[0x4];
    /* 0x017 */ u8 unk17; /* 1 use */
    /* 0x018 */ u8 pad18[0x102];
} T_func_8001B154_ret_elem;

/* pointed to by T_D_80089470.0x0, Heap.0x0; 2 functions */
typedef struct T_func_8001F204_a0 { /* size >= 0x10 */
    /* 0x000 */ struct T_func_8001F204_a0 *unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 3 uses */
} T_func_8001F204_a0;

/* pointed to by T_func_8001F498_ret.0x8; 1 functions */
typedef struct T_func_8001F498_a0 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_func_8001F498_a0;

/* pointed to by Heap.0xC; 1 functions */
typedef struct T_func_8001F498_ret { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ struct T_func_8001F498_a0 *unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_func_8001F498_ret;

/* parameter main:func_8001F790:0; 2 functions */
typedef struct T_func_8001F790_a0 { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0x28];
    /* 0x028 */ u16 unk28; /* 2 uses */
    /* 0x02A */ u8 pad2A[0x2];
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ u8 pad30[0x10];
    /* 0x040 */ f32 unk40; /* 1 use */
    /* 0x044 */ f32 unk44; /* 1 use */
    /* 0x048 */ f32 unk48; /* 1 use */
    /* 0x04C */ u8 pad4C[0x44];
    /* 0x090 */ u8 unk90; /* 1 use */
    /* 0x091 */ u8 unk91; /* 1 use */
    /* 0x092 */ s16 unk92; /* 1 use */
} T_func_8001F790_a0;

/* pointed to by AMAudioMgr_elem.0x0, T_func_8001FD14_a0.0x48; 2 functions */
typedef struct T_func_8001FD14_a0 { /* size >= 0x68 */
    /* 0x000 */ void *unk0; /* 2 uses */
    /* 0x004 */ s16 unk4; /* 4 uses */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ u8 padC[0xC];
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ s32 unk20; /* 1 use */
    /* 0x024 */ s32 unk24; /* 1 use */
    /* 0x028 */ void *unk28; /* 1 use */
    /* 0x02C */ u8 pad2C[0x4];
    /* 0x030 */ void *unk30; /* 1 use */
    /* 0x034 */ s32 unk34; /* 1 use */
    /* 0x038 */ u8 pad38[0x10];
    /* 0x048 */ struct T_func_8001FD14_a0 *unk48; /* 1 use */
    /* 0x04C */ s32 unk4C; /* 1 use */
    /* 0x050 */ s32 unk50; /* 1 use */
    /* 0x054 */ s32 unk54; /* 1 use */
    /* 0x058 */ void *unk58; /* 1 use */
    /* 0x05C */ s32 unk5C; /* 1 use */
    /* 0x060 */ s16 unk60; /* 1 use */
    /* 0x062 */ u8 pad62[0x2];
    /* 0x064 */ struct T_func_8001FD14_a0 *unk64; /* 1 use */
} T_func_8001FD14_a0;

/* parameter main:func_80026450:0, main:func_800296B0:0; 19 functions */
typedef struct T_func_80026450_a0 { /* size >= 0x68 */
    /* 0x000 */ s32 unk0; /* 19 uses */
    /* 0x004 */ void *unk4; /* 45 uses */
    /* 0x008 */ void *unk8; /* 42 uses */
    /* 0x00C */ u8 padC[0x40];
    /* 0x04C */ s32 unk4C; /* 2 uses */
    /* 0x050 */ s32 unk50; /* 22 uses */
    /* 0x054 */ s32 unk54; /* 5 uses */
    /* 0x058 */ s32 unk58; /* 4 uses */
    /* 0x05C */ s32 unk5C; /* 22 uses */
    /* 0x060 */ s32 unk60; /* 15 uses; also u16@0x62 */
    /* 0x064 */ u8 unk64; /* 21 uses */
    /* 0x065 */ u8 unk65; /* 16 uses */
    /* 0x066 */ u8 pad66[0x2];
} T_func_80026450_a0;

/* pointed to by T_D_800498F0.0x0; 6 functions */
typedef struct T_func_8002691C_a0 { /* size >= 0x4C */
    /* 0x000 */ struct T_func_8002691C_a0_p0 *unk0; /* 2 uses */
    /* 0x004 */ u8 pad4[0x18];
    /* 0x01C */ void *unk1C; /* 8 uses */
    /* 0x020 */ s32 base; /* 7 uses */
    /* 0x024 */ u8 pad24[0x8];
    /* 0x02C */ void *****unk2C; /* 4 uses */
    /* 0x030 */ u8 pad30[0x8];
    /* 0x038 */ struct T_func_8002691C_a0_p38 *unk38; /* 1 use */
    /* 0x03C */ u8 pad3C[0x8];
    /* 0x044 */ s32 unk44; /* 2 uses */
    /* 0x048 */ s32 unk48; /* 1 use */
} T_func_8002691C_a0;

/* pointed to by T_func_8002691C_a0.0x0; 1 functions */
typedef struct T_func_8002691C_a0_p0 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ s32 key; /* 1 use */
} T_func_8002691C_a0_p0;

/* pointed to by T_func_8002691C_a0.0x38; 1 functions */
typedef struct T_func_8002691C_a0_p38 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ void (*unk4)(); /* 1 use */
    /* 0x008 */ void (*unk8)(); /* 1 use */
} T_func_8002691C_a0_p38;

/* pointed to by T_D_80049940.0x0; 9 functions */
typedef struct T_func_80027824_ret_80027828 { /* size >= 0x1B0 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ u8 pad8[0x8];
    /* 0x010 */ s16 unk10; /* 8 uses */
    /* 0x012 */ u8 pad12[0x86];
    /* 0x098 */ s64 unk98; /* 1 use */
    /* 0x0A0 */ s64 unkA0; /* 1 use */
    /* 0x0A8 */ s64 unkA8; /* 1 use */
    /* 0x0B0 */ s64 unkB0; /* 1 use */
    /* 0x0B8 */ s64 unkB8; /* 1 use */
    /* 0x0C0 */ s64 unkC0; /* 1 use */
    /* 0x0C8 */ s64 unkC8; /* 1 use */
    /* 0x0D0 */ s64 unkD0; /* 1 use */
    /* 0x0D8 */ u8 padD8[0x10];
    /* 0x0E8 */ s64 unkE8; /* 1 use */
    /* 0x0F0 */ s64 unkF0; /* 1 use */
    /* 0x0F8 */ s64 unkF8; /* 1 use */
    /* 0x100 */ s64 unk100; /* 1 use */
    /* 0x108 */ u8 pad108[0x10];
    /* 0x118 */ s32 unk118; /* 1 use */
    /* 0x11C */ s32 unk11C; /* 1 use */
    /* 0x120 */ u8 pad120[0x8];
    /* 0x128 */ s32 unk128; /* 1 use */
    /* 0x12C */ u8 pad12C[0x4];
    /* 0x130 */ f64 unk130; /* 1 use */
    /* 0x138 */ f64 unk138; /* 1 use */
    /* 0x140 */ f64 unk140; /* 1 use */
    /* 0x148 */ f64 unk148; /* 1 use */
    /* 0x150 */ f64 unk150; /* 1 use */
    /* 0x158 */ f64 unk158; /* 1 use */
    /* 0x160 */ f64 unk160; /* 1 use */
    /* 0x168 */ f64 unk168; /* 1 use */
    /* 0x170 */ f64 unk170; /* 1 use */
    /* 0x178 */ f64 unk178; /* 1 use */
    /* 0x180 */ f64 unk180; /* 2 uses */
    /* 0x188 */ f64 unk188; /* 2 uses */
    /* 0x190 */ f64 unk190; /* 2 uses */
    /* 0x198 */ f64 unk198; /* 2 uses */
    /* 0x1A0 */ f64 unk1A0; /* 2 uses */
    /* 0x1A8 */ f64 unk1A8; /* 2 uses */
} T_func_80027824_ret_80027828;

/* pointed to by T_D_8004993C.0x0, T_func_80028260_a0.0xC; 2 functions */
typedef struct T_func_80028260_a0 { /* size >= 0x130 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ struct T_func_80028260_a0 *unkC; /* 2 uses */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 unk12; /* 1 use */
    /* 0x014 */ void *unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ u8 pad1C[0x1C];
    /* 0x038 */ s32 unk38; /* 1 use */
    /* 0x03C */ void *unk3C; /* 1 use */
    /* 0x040 */ u8 pad40[0xB0];
    /* 0x0F0 */ s32 unkF0; /* 1 use */
    /* 0x0F4 */ s32 unkF4; /* 1 use */
    /* 0x0F8 */ u8 padF8[0x8];
    /* 0x100 */ s32 unk100; /* 1 use */
    /* 0x104 */ void *unk104; /* 1 use */
    /* 0x108 */ u8 pad108[0x10];
    /* 0x118 */ s32 unk118; /* 1 use */
    /* 0x11C */ void *unk11C; /* 1 use */
    /* 0x120 */ u8 pad120[0x8];
    /* 0x128 */ s32 unk128; /* 1 use */
    /* 0x12C */ s32 unk12C; /* 1 use */
} T_func_80028260_a0;

/* parameter main:func_800296B0:2, main:func_8002BCB4:1; 2 functions */
typedef struct T_func_800296B0_a2 { /* size >= 0x101 */
    /* 0x000 */ u8 pad0[0x1];
    /* 0x001 */ u8 unk1; /* 3 uses */
    /* 0x002 */ u8 pad2[0xFE];
    /* 0x100 */ u8 unk100; /* 3 uses */
} T_func_800296B0_a2;

/* element of main:func_8002B484:0, main:func_8002B8D0:1; 2 functions */
typedef struct T_func_8002B484_a0_elem { /* size 0x8 */
    /* 0x000 */ u16 unk0; /* 2 uses */
    /* 0x002 */ u16 unk2; /* 2 uses */
    /* 0x004 */ u16 unk4; /* 2 uses */
    /* 0x006 */ u16 unk6; /* 2 uses */
} T_func_8002B484_a0_elem;

/* parameter main:func_8002D150:0, main:func_8002D704:0; 4 functions */
typedef struct T_func_8002D150_a0 { /* size >= 0x28 */
    /* 0x000 */ struct T_func_8002D150_a0_p0 *unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x10];
    /* 0x014 */ u32 unk14; /* 5 uses */
    /* 0x018 */ s32 unk18; /* 8 uses */
    /* 0x01C */ s32 unk1C; /* 4 uses */
    /* 0x020 */ struct T_func_8002D150_a0_p20_elem *unk20; /* 1 use */
    /* 0x024 */ u8 unk24; /* 2 uses */
    /* 0x025 */ u8 pad25[0x3];
} T_func_8002D150_a0;

/* pointed to by T_func_8002D150_a0.0x0; 1 functions */
typedef struct T_func_8002D150_a0_p0 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ void (*unk4)(); /* 1 use */
} T_func_8002D150_a0_p0;

/* anonymous; 1 functions */
typedef struct T_func_8002D150_a0_p20_elem { /* size 0x28 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s16 unk8; /* 1 use */
    /* 0x00A */ s16 unkA; /* 2 uses */
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ u8 padE[0x12];
    /* 0x020 */ s32 unk20; /* 2 uses */
    /* 0x024 */ s32 unk24; /* 3 uses */
} T_func_8002D150_a0_p20_elem;

/* parameter main:func_8002DEC0:0, main:func_8002E4A8:0; 2 functions */
typedef struct T_func_8002DEC0_a0 { /* size >= 0x4C */
    /* 0x000 */ struct T_func_8002DEC0_a0_p0 *unk0; /* 3 uses */
    /* 0x004 */ u8 pad4[0x4];
    /* 0x008 */ void (*unk8)(); /* 10 uses */
    /* 0x00C */ u8 padC[0x8];
    /* 0x014 */ s32 unk14; /* 2 uses */
    /* 0x018 */ s16 unk18; /* 6 uses */
    /* 0x01A */ s16 unk1A; /* 6 uses */
    /* 0x01C */ s16 unk1C; /* 9 uses */
    /* 0x01E */ s16 unk1E; /* 10 uses */
    /* 0x020 */ s16 unk20; /* 3 uses */
    /* 0x022 */ s16 unk22; /* 3 uses */
    /* 0x024 */ u16 unk24; /* 2 uses */
    /* 0x026 */ s16 unk26; /* 3 uses */
    /* 0x028 */ s16 unk28; /* 5 uses */
    /* 0x02A */ u16 unk2A; /* 2 uses */
    /* 0x02C */ s16 unk2C; /* 3 uses */
    /* 0x02E */ s16 unk2E; /* 5 uses */
    /* 0x030 */ s32 unk30; /* 9 uses */
    /* 0x034 */ s32 unk34; /* 6 uses */
    /* 0x038 */ s32 unk38; /* 4 uses */
    /* 0x03C */ struct T_func_8002DEC0_a0_p3C *unk3C; /* 9 uses */
    /* 0x040 */ s32 unk40; /* 1 use */
    /* 0x044 */ u8 pad44[0x4];
    /* 0x048 */ s32 unk48; /* 1 use */
} T_func_8002DEC0_a0;

/* pointed to by T_func_8002DEC0_a0.0x0; 2 functions */
typedef struct T_func_8002DEC0_a0_p0 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ void (*callback)(); /* 1 use */
    /* 0x008 */ void (*unk8)(); /* 1 use */
} T_func_8002DEC0_a0_p0;

/* pointed to by T_func_8002DEC0_a0.0x3C, T_func_8002DEC0_a0_p3C.0x0; 1 functions */
typedef struct T_func_8002DEC0_a0_p3C { /* size >= 0x14 */
    /* 0x000 */ struct T_func_8002DEC0_a0_p3C *unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s16 unk8; /* 5 uses; loaded both signed (lh x4) and unsigned (lhu x1) */
    /* 0x00A */ s16 unkA; /* 2 uses */
    /* 0x00C */ struct T_func_8002DEC0_a0_p3C_pC *unkC; /* 7 uses */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_func_8002DEC0_a0_p3C;

/* pointed to by T_func_8002DEC0_a0_p3C.0xC; 1 functions */
typedef struct T_func_8002DEC0_a0_p3C_pC { /* size >= 0xDC */
    /* 0x000 */ u8 pad0[0xD8];
    /* 0x0D8 */ s32 unkD8; /* 1 use */
} T_func_8002DEC0_a0_p3C_pC;

/* pointed to by T_D_801BBBF0.0x40, T_D_801BBBF0.0x4C; 972 functions */
typedef struct T_func_80107830_a0 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ struct T_func_8010E680_a0 *child; /* 14 uses */
    /* 0x00C */ struct T_func_80147370_a0 *unkC; /* 32 uses */
    /* 0x010 */ u8 pad10[0x8];
    /* 0x018 */ s32 unk18; /* 13 uses */
    /* 0x01C */ void *unk1C; /* 8 uses */
    /* 0x020 */ s32 unk20; /* 17 uses */
    /* 0x024 */ struct T_func_801451C0_a0 *mid; /* 369 uses */
    /* 0x028 */ u16 unk28; /* 5 uses */
    /* 0x02A */ u8 pad2A[0x2];
    /* 0x02C */ struct T_D_801E4058_p0 *flags; /* 287 uses */
    /* 0x030 */ struct T_D_801E4058_p0 *unk30; /* 46 uses */
    /* 0x034 */ u8 unk34; /* 9 uses */
    /* 0x035 */ u8 unk35; /* 8 uses */
    /* 0x036 */ u16 unk36; /* 72 uses */
    /* 0x038 */ struct T_func_80107830_a0_p38 *unk38; /* 37 uses */
    /* 0x03C */ u16 counter; /* 414 uses */
    /* 0x03E */ u8 unk3E; /* 7 uses */
    /* 0x03F */ u8 unk3F; /* 6 uses */
    /* 0x040 */ f32 x; /* 95 uses */
    /* 0x044 */ f32 y; /* 72 uses */
    /* 0x048 */ f32 z; /* 90 uses */
    /* 0x04C */ u8 unk4C; /* 26 uses */
    /* 0x04D */ u8 unk4D; /* 37 uses */
    /* 0x04E */ u8 unk4E; /* 20 uses */
    /* 0x04F */ s8 unk4F; /* 31 uses */
    /* 0x050 */ u8 unk50; /* 4 uses */
    /* 0x051 */ u8 pad51[0x3];
    /* 0x054 */ void *state; /* 52 uses */
    /* 0x058 */ u8 pad58[0x4];
    /* 0x05C */ struct T_func_8012CE9C_a1 *anim; /* 532 uses */
    /* 0x060 */ u8 pad60[0x3];
    /* 0x063 */ u8 unk63; /* 18 uses */
    /* 0x064 */ struct T_func_801F1FD0_ret *unk64; /* 1 use */
    /* 0x068 */ struct T_func_802237EC_ret_802238B8_p94 *input; /* 29 uses */
    /* 0x06C */ s32 key; /* 3 uses */
    /* 0x070 */ u16 frame; /* 5 uses */
    /* 0x072 */ u16 unk72; /* 9 uses */
    /* 0x074 */ struct T_func_801395E4_a1_elem *unk74; /* 17 uses */
    /* 0x078 */ f32 unk78; /* 6 uses */
    /* 0x07C */ f32 unk7C; /* 6 uses */
    /* 0x080 */ f32 unk80; /* 6 uses */
    /* 0x084 */ s16 unk84; /* 6 uses */
    /* 0x086 */ s16 unk86; /* 6 uses */
    /* 0x088 */ s16 unk88; /* 6 uses */
    /* 0x08A */ u8 pad8A[0x2];
    /* 0x08C */ void *unk8C; /* 10 uses */
    /* 0x090 */ u8 flag0; /* 115 uses; loaded both signed (lb x18) and unsigned (lbu x44) */
    /* 0x091 */ s8 flag1; /* 52 uses; loaded both signed (lb x28) and unsigned (lbu x9) */
    /* 0x092 */ u8 unk92; /* 9 uses; loaded both signed (lb x1) and unsigned (lbu x6) */
    /* 0x093 */ u8 unk93; /* 6 uses; loaded both signed (lb x1) and unsigned (lbu x4) */
    /* 0x094 */ s16 timer; /* 113 uses; loaded both signed (lh x32) and unsigned (lhu x2) */
    /* 0x096 */ u16 unk96; /* 8 uses */
    /* 0x098 */ struct T_func_8013C8F0_a0 *unk98; /* 17 uses */
    /* 0x09C */ f32 unk9C; /* 17 uses */
    /* 0x0A0 */ f32 unkA0; /* 8 uses */
    /* 0x0A4 */ struct T_D_801BC03C *unkA4; /* 7 uses */
    /* 0x0A8 */ s32 unkA8; /* 1 use */
    /* 0x0AC */ s32 unkAC; /* 4 uses */
    /* 0x0B0 */ s32 unkB0; /* 4 uses */
} T_func_80107830_a0;

/* pointed to by T_D_801BBBF0.0x44, T_D_801BBBF0.0x54; 135 functions */
typedef struct T_func_8010E680_a0 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ struct T_D_80089378 *child; /* 9 uses */
    /* 0x00C */ struct T_func_80147370_a0 *unkC; /* 23 uses */
    /* 0x010 */ u8 pad10[0x14];
    /* 0x024 */ struct T_func_801FA248_a0 *unk24; /* 23 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ struct T_D_80089378 *unk2C; /* 8 uses */
    /* 0x030 */ s32 unk30; /* 5 uses */
    /* 0x034 */ u8 unk34; /* 2 uses */
    /* 0x035 */ u8 unk35; /* 1 use */
    /* 0x036 */ u16 unk36; /* 4 uses */
    /* 0x038 */ struct T_func_8010E680_a0_p38 *unk38; /* 7 uses */
    /* 0x03C */ u16 unk3C; /* 78 uses */
    /* 0x03E */ u8 unk3E; /* 2 uses */
    /* 0x03F */ u8 pad3F[0x1];
    /* 0x040 */ f32 unk40; /* 4 uses */
    /* 0x044 */ f32 unk44; /* 7 uses */
    /* 0x048 */ f32 unk48; /* 4 uses */
    /* 0x04C */ u16 unk4C; /* 4 uses */
    /* 0x04E */ u16 unk4E; /* 6 uses */
    /* 0x050 */ u8 pad50[0xC];
    /* 0x05C */ struct T_func_8012CE9C_a1 *unk5C; /* 1 use */
    /* 0x060 */ u8 unk60; /* 2 uses */
    /* 0x061 */ u8 pad61[0x7];
    /* 0x068 */ s32 unk68; /* 3 uses */
    /* 0x06C */ f32 unk6C; /* 7 uses */
    /* 0x070 */ f32 unk70; /* 7 uses */
    /* 0x074 */ f32 unk74; /* 7 uses */
    /* 0x078 */ u8 unk78; /* 5 uses */
    /* 0x079 */ u8 unk79; /* 3 uses */
    /* 0x07A */ u8 unk7A; /* 4 uses */
    /* 0x07B */ u8 unk7B; /* 3 uses */
    /* 0x07C */ f32 unk7C; /* 4 uses */
    /* 0x080 */ f32 unk80; /* 4 uses */
    /* 0x084 */ f32 unk84; /* 4 uses */
    /* 0x088 */ f32 unk88; /* 2 uses */
    /* 0x08C */ s32 unk8C; /* 1 use */
    /* 0x090 */ f32 unk90; /* 18 uses */
    /* 0x094 */ f32 x; /* 71 uses */
    /* 0x098 */ f32 y; /* 65 uses */
    /* 0x09C */ f32 z; /* 59 uses */
    /* 0x0A0 */ f32 unkA0; /* 7 uses */
    /* 0x0A4 */ f32 unkA4; /* 6 uses */
    /* 0x0A8 */ u8 unkA8; /* 14 uses */
    /* 0x0A9 */ u8 unkA9; /* 27 uses */
    /* 0x0AA */ u8 unkAA; /* 3 uses */
    /* 0x0AB */ u8 padAB[0x1];
    /* 0x0AC */ u8 unkAC; /* 1 use */
    /* 0x0AD */ u8 unkAD; /* 2 uses */
    /* 0x0AE */ u8 padAE[0x1];
    /* 0x0AF */ u8 unkAF; /* 2 uses */
    /* 0x0B0 */ s16 unkB0; /* 102 uses; loaded both signed (lh x54) and unsigned (lhu x18) */
    /* 0x0B2 */ u16 unkB2; /* 11 uses */
} T_func_8010E680_a0;

/* pointed to by T_D_801BBBF0.0x444, T_D_801BBBF0.0x448; 440 functions */
typedef struct T_func_8012CE9C_a1 { /* size >= 0xE0 */
    /* 0x000 */ struct T_func_80107830_a0 *unk0; /* 61 uses */
    /* 0x004 */ s32 *unk4; /* 19 uses */
    /* 0x008 */ u8 pad8[0x4];
    /* 0x00C */ u16 count; /* 91 uses */
    /* 0x00E */ u16 unkE; /* 25 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ u16 timer; /* 12 uses */
    /* 0x01A */ u16 unk1A; /* 2 uses */
    /* 0x01C */ u32 x; /* 431 uses */
    /* 0x020 */ u16 frame; /* 240 uses; also s32@0x20 */
    /* 0x022 */ u16 flags; /* 199 uses; also s32@0x20 */
    /* 0x024 */ f32 z; /* 272 uses */
    /* 0x028 */ f32 unk28; /* 7 uses */
    /* 0x02C */ f32 unk2C; /* 7 uses */
    /* 0x030 */ f32 unk30; /* 7 uses */
    /* 0x034 */ f32 unk34; /* 3 uses */
    /* 0x038 */ f32 unk38; /* 9 uses */
    /* 0x03C */ f32 unk3C; /* 8 uses */
    /* 0x040 */ f32 unk40; /* 7 uses */
    /* 0x044 */ f32 unk44; /* 6 uses */
    /* 0x048 */ f32 y; /* 5 uses */
    /* 0x04C */ f32 unk4C; /* 6 uses */
    /* 0x050 */ f32 unk50; /* 7 uses */
    /* 0x054 */ f32 unk54; /* 2 uses */
    /* 0x058 */ f32 unk58; /* 3 uses */
    /* 0x05C */ f32 unk5C; /* 3 uses */
    /* 0x060 */ f32 unk60; /* 5 uses */
    /* 0x064 */ f32 unk64; /* 2 uses */
    /* 0x068 */ f32 unk68; /* 5 uses */
    /* 0x06C */ f32 unk6C; /* 5 uses */
    /* 0x070 */ f32 unk70; /* 4 uses */
    /* 0x074 */ u8 mode; /* 29 uses */
    /* 0x075 */ u8 unk75; /* 3 uses */
    /* 0x076 */ u8 unk76; /* 30 uses */
    /* 0x077 */ u8 pad77[0x1];
    /* 0x078 */ u16 unk78; /* 199 uses */
    /* 0x07A */ u8 pad7A[0x2];
    /* 0x07C */ struct T_D_801E0D68 *unk7C; /* 66 uses */
    /* 0x080 */ u16 unk80; /* 48 uses */
    /* 0x082 */ u16 unk82; /* 21 uses */
    /* 0x084 */ u8 unk84; /* 18 uses */
    /* 0x085 */ u8 pad85[0x3];
    /* 0x088 */ s32 unk88; /* 3 uses */
    /* 0x08C */ s32 unk8C; /* 3 uses */
    /* 0x090 */ s32 unk90; /* 3 uses */
    /* 0x094 */ struct T_D_801E0D68 *unk94; /* 2 uses */
    /* 0x098 */ u16 unk98; /* 2 uses */
    /* 0x09A */ u16 unk9A; /* 2 uses */
    /* 0x09C */ u8 unk9C; /* 16 uses */
    /* 0x09D */ u8 unk9D; /* 2 uses */
    /* 0x09E */ u16 unk9E; /* 8 uses */
    /* 0x0A0 */ u16 unkA0; /* 9 uses */
    /* 0x0A2 */ u8 padA2[0x2];
    /* 0x0A4 */ f32 unkA4; /* 10 uses */
    /* 0x0A8 */ f32 unkA8; /* 5 uses */
    /* 0x0AC */ f32 unkAC; /* 9 uses */
    /* 0x0B0 */ f32 unkB0; /* 16 uses */
    /* 0x0B4 */ f32 unkB4; /* 7 uses */
    /* 0x0B8 */ f32 unkB8; /* 16 uses */
    /* 0x0BC */ f32 unkBC; /* 15 uses */
    /* 0x0C0 */ s32 unkC0; /* 5 uses */
    /* 0x0C4 */ f32 unkC4; /* 14 uses */
    /* 0x0C8 */ f32 unkC8; /* 7 uses */
    /* 0x0CC */ s32 unkCC; /* 3 uses */
    /* 0x0D0 */ f32 unkD0; /* 7 uses */
    /* 0x0D4 */ f32 unkD4; /* 7 uses */
    /* 0x0D8 */ s32 unkD8; /* 3 uses */
    /* 0x0DC */ f32 unkDC; /* 7 uses */
} T_func_8012CE9C_a1;

/* element of file008:func_801395E4:1, file008:func_8012C228; 5 functions */
typedef struct T_func_801395E4_a1_elem { /* size 0x18 */
    /* 0x000 */ f32 unk0; /* 14 uses */
    /* 0x004 */ f32 unk4; /* 12 uses */
    /* 0x008 */ f32 unk8; /* 10 uses */
    /* 0x00C */ f32 unkC; /* 12 uses */
    /* 0x010 */ f32 unk10; /* 11 uses */
    /* 0x014 */ f32 unk14; /* 9 uses */
} T_func_801395E4_a1_elem;

/* anonymous; 1 functions */
typedef struct T_func_801395E4_a1_elem_2 { /* size >= 0x1C */
    /* 0x000 */ f32 unk0; /* 3 uses */
    /* 0x004 */ f32 unk4; /* 3 uses */
    /* 0x008 */ f32 unk8; /* 3 uses */
    /* 0x00C */ f32 unkC; /* 3 uses */
    /* 0x010 */ f32 unk10; /* 3 uses */
    /* 0x014 */ f32 unk14; /* 3 uses */
    /* 0x018 */ f32 unk18; /* 3 uses */
} T_func_801395E4_a1_elem_2;

/* pointed to by T_D_801BBBF0.0xE0, T_D_801BBBF0.0xF0; 435 functions */
typedef struct T_func_801451C0_a0 { /* size >= 0x34 */
    /* 0x000 */ struct T_D_80089378 *unk0; /* 5 uses */
    /* 0x004 */ struct T_D_80089378 *unk4; /* 3 uses */
    /* 0x008 */ u8 pad8[0x4];
    /* 0x00C */ struct T_func_8000659C_ret *unkC; /* 3 uses */
    /* 0x010 */ struct T_func_801451C0_a0 *next; /* 9 uses */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ struct T_func_801451C0_a0_p18 *unk18; /* 3 uses */
    /* 0x01C */ s32 unk1C; /* 2 uses */
    /* 0x020 */ u8 pad20[0x2];
    /* 0x022 */ u8 unk22; /* 55 uses */
    /* 0x023 */ u8 pad23[0x1];
    /* 0x024 */ void *unk24; /* 5 uses */
    /* 0x028 */ s16 unk28; /* 5 uses */
    /* 0x02A */ u16 unk2A; /* 3 uses */
    /* 0x02C */ struct T_func_802257F4_a0 *node; /* 1425 uses */
    /* 0x030 */ struct T_func_80146BE0_ret *unk30; /* 550 uses */
} T_func_801451C0_a0;

/* pointed to by T_func_80228ABC_a0.0x24, T_func_80234724_a0.0x24; 465 functions */
typedef struct T_func_80147148_a0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0x9];
    /* 0x02C */ struct T_func_80147148_a0_p2C *unk2C; /* 1547 uses */
    /* 0x030 */ struct T_func_80147148_a0_p30 *unk30; /* 59 uses */
} T_func_80147148_a0;

/* pointed to by T_D_801BBBF0_elem.0x0, T_D_80181D5C.0x0; 50 functions */
typedef struct T_func_80149580_a1 { /* size >= 0xA8 */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ s32 *unk8; /* 1 use */
    /* 0x00C */ struct T_D_80089378 *unkC; /* 3 uses */
    /* 0x010 */ struct T_func_80149580_a1_p10 *unk10; /* 1 use */
    /* 0x014 */ struct T_func_80149580_a1_p14 *unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ u8 pad1C[0x6];
    /* 0x022 */ u8 unk22; /* 8 uses */
    /* 0x023 */ u8 pad23[0x1];
    /* 0x024 */ struct T_func_80149580_a1_p24 *link; /* 33 uses */
    /* 0x028 */ u16 unk28; /* 2 uses */
    /* 0x02A */ s16 unk2A; /* 3 uses */
    /* 0x02C */ struct T_func_80005D3C_ret *unk2C; /* 52 uses */
    /* 0x030 */ struct T_func_80005CDC_ret *unk30; /* 130 uses */
    /* 0x034 */ u8 pad34[0x2];
    /* 0x036 */ u16 unk36; /* 10 uses */
    /* 0x038 */ struct T_func_80149580_a1_p38 *coords; /* 7 uses */
    /* 0x03C */ u8 pad3C[0x38];
    /* 0x074 */ struct T_func_801395E4_a1_elem *unk74; /* 18 uses */
    /* 0x078 */ f32 unk78; /* 1 use */
    /* 0x07C */ f32 unk7C; /* 1 use */
    /* 0x080 */ f32 unk80; /* 1 use */
    /* 0x084 */ s16 unk84; /* 1 use */
    /* 0x086 */ s16 unk86; /* 1 use */
    /* 0x088 */ s16 unk88; /* 1 use */
    /* 0x08A */ u8 pad8A[0x6];
    /* 0x090 */ u8 kind; /* 37 uses */
    /* 0x091 */ u8 flag; /* 23 uses */
    /* 0x092 */ u8 unk92; /* 3 uses */
    /* 0x093 */ u8 state; /* 18 uses */
    /* 0x094 */ f32 timer; /* 30 uses */
    /* 0x098 */ struct T_func_801395E4_a1_elem *handle; /* 2 uses */
    /* 0x09C */ u8 unk9C; /* 2 uses */
    /* 0x09D */ u8 pad9D[0x1];
    /* 0x09E */ s16 unk9E; /* 1 use */
    /* 0x0A0 */ u16 unkA0; /* 5 uses */
    /* 0x0A2 */ u16 unkA2; /* 2 uses */
    /* 0x0A4 */ u8 unkA4; /* 2 uses */
    /* 0x0A5 */ u8 unkA5; /* 2 uses */
    /* 0x0A6 */ u8 unkA6; /* 2 uses */
    /* 0x0A7 */ u8 padA7[0x1];
} T_func_80149580_a1;

/* pointed to by T_func_80149580_a1.0x10; 1 functions */
typedef struct T_func_80149580_a1_p10 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ s32 unk14; /* 1 use */
} T_func_80149580_a1_p10;

/* pointed to by T_func_80149580_a1.0x14; 1 functions */
typedef struct T_func_80149580_a1_p14 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ s32 unk10; /* 1 use */
} T_func_80149580_a1_p14;

/* pointed to by T_func_801451C0_a0.0x2C, T_func_80225A68_a0_p24.0x2C; 335 functions */
typedef struct T_func_802257F4_a0 { /* size >= 0xB0 */
    /* 0x000 */ s16 unk0; /* 2 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ f32 x; /* 534 uses */
    /* 0x008 */ f32 y; /* 416 uses */
    /* 0x00C */ f32 z; /* 509 uses */
    /* 0x010 */ s16 unk10; /* 4 uses */
    /* 0x012 */ s16 angle; /* 671 uses; loaded both signed (lh x484) and unsigned (lhu x5) */
    /* 0x014 */ s16 unk14; /* 4 uses */
    /* 0x016 */ u8 pad16[0x2];
    /* 0x018 */ f32 unk18; /* 8 uses */
    /* 0x01C */ f32 unk1C; /* 6 uses */
    /* 0x020 */ f32 unk20; /* 8 uses */
    /* 0x024 */ s32 flags; /* 1 use */
    /* 0x028 */ void *unk28; /* 2 uses */
    /* 0x02C */ s16 unk2C; /* 1 use */
    /* 0x02E */ u8 pad2E[0x2];
    /* 0x030 */ void *address; /* 3 uses */
    /* 0x034 */ void *py; /* 4 uses */
    /* 0x038 */ u8 pad38[0x2];
    /* 0x03A */ u8 unk3A; /* 1 use */
    /* 0x03B */ u8 pad3B[0x5];
    /* 0x040 */ s32 unk40; /* 1 use */
    /* 0x044 */ s32 unk44; /* 1 use */
    /* 0x048 */ u8 unk48; /* 2 uses */
    /* 0x049 */ u8 unk49; /* 2 uses */
    /* 0x04A */ u8 unk4A; /* 2 uses */
    /* 0x04B */ u8 unk4B; /* 3 uses */
    /* 0x04C */ u8 unk4C; /* 2 uses */
    /* 0x04D */ u8 unk4D; /* 2 uses */
    /* 0x04E */ u8 unk4E; /* 2 uses */
    /* 0x04F */ u8 unk4F; /* 2 uses */
    /* 0x050 */ f32 unk50; /* 1 use */
    /* 0x054 */ s32 unk54; /* 1 use */
    /* 0x058 */ s16 unk58; /* 1 use */
    /* 0x05A */ u8 pad5A[0x2];
    /* 0x05C */ void *unk5C; /* 6 uses */
    /* 0x060 */ void *unk60; /* 6 uses */
    /* 0x064 */ void *unk64; /* 6 uses */
    /* 0x068 */ u8 unk68; /* 1 use */
    /* 0x069 */ u8 unk69; /* 1 use */
    /* 0x06A */ u8 unk6A; /* 5 uses */
    /* 0x06B */ u8 pad6B[0x1];
    /* 0x06C */ u16 unk6C; /* 23 uses */
    /* 0x06E */ u8 pad6E[0x2];
    /* 0x070 */ f32 unk70; /* 3 uses */
    /* 0x074 */ s16 unk74; /* 1 use */
    /* 0x076 */ u8 pad76[0x22];
    /* 0x098 */ f32 unk98; /* 2 uses */
    /* 0x09C */ f32 unk9C; /* 2 uses */
    /* 0x0A0 */ f32 unkA0; /* 2 uses */
    /* 0x0A4 */ f32 unkA4; /* 4 uses */
    /* 0x0A8 */ f32 unkA8; /* 4 uses */
    /* 0x0AC */ f32 unkAC; /* 4 uses */
} T_func_802257F4_a0;

extern T_D_700000 D_700000;
extern s32 D_80000000;
extern s32 D_80000004;
extern s32 D_80000008;
extern s32 D_8000000C;
extern s32 D_80000300;
extern s32 D_80000308;
extern s32 D_8000030C;
extern s32 D_80037350;
extern s32 D_80037354;
extern struct T_D_80037358_elem D_80037358[];
extern struct T_D_80037358_elem D_800374A8[];
extern struct T_D_80037358_elem D_8003761C[];
extern s32 D_80037730;
extern s32 D_80037734;
extern s32 D_80037738;
extern s32 D_8003773C;
extern u8 D_80037744;
extern u16 D_80037748;
extern s16 D_8003774C;
extern u16 D_80037750;
extern u16 D_80037754;
extern u16 D_80037758;
extern s32 D_80037760;
extern u32 D_80037764;
extern s32 D_80037768;
extern s32 D_8003776C;
extern s32 D_80037770[];
extern s32 D_80037780[];
extern T_D_80037790 D_80037790;
extern struct T_D_800377B0_elem D_800377B0[];
extern struct T_D_80037A30_elem D_80037A30[];
extern u16 D_80037A32[];
extern struct T_D_80037C5C_elem D_80037C5C[];
extern s32 D_80038FE0[];
extern s32 D_80038FEC[];
extern s32 D_80038FF0[];
extern u16 D_800399B8[];
extern f32 D_8003E930[];
extern f32 D_80040930[];
extern f32 D_80042930[];
extern struct T_D_800892B0_p42F4_elem *D_800429B8[];
extern s32 D_80043394;
extern u16 D_80043398;
extern T_D_800433A0 D_800433A0;
extern T_D_800433B0 D_800433B0;
extern T_D_800433C0 D_800433C0;
extern T_D_800433D0 D_800433D0;
extern T_D_700000 D_800433E0;
extern T_D_700000 D_80043430;
extern u16 D_8004347C[];
extern T_D_700000 D_800434A0;
extern u16 D_80043504[];
extern T_D_700000 D_80043510;
extern u16 D_8004353A[];
extern u16 D_80043562[];
extern T_D_80043570 D_80043570;
extern T_D_80043578 D_80043578;
extern T_D_80043584 D_80043584;
extern struct T_D_700000 *D_800435B4[];
extern T_D_80043750 D_80043750;
extern T_D_80043758 D_80043758;
extern T_D_700000 D_80043760;
extern T_D_700000 D_80043778;
extern T_D_700000 D_80043790;
extern T_D_700000 D_800437E0;
extern T_D_700000 D_80043830;
extern T_D_700000 D_80043848;
extern f32 D_80043860[];
extern s32 D_80044080;
extern s32 D_80044084;
extern s32 D_80044088;
extern s32 D_8004408C;
extern T_D_80162DD0 D_80044090;
extern u16 *D_800440A4[];
extern s32 D_80044118;
extern struct T_D_80044124_elem_p0 *D_80044124[];
extern struct T_D_8004413C_elem D_8004413C[];
extern T_D_80044184 D_80044184;
extern T_D_8004418C D_8004418C;
extern T_D_80044198 D_80044198;
extern T_D_800441A0 D_800441A0;
extern T_D_800441AC D_800441AC;
extern T_D_800441B4 D_800441B4;
extern T_D_800441C0 D_800441C0;
extern T_D_800441C8 D_800441C8;
extern T_D_800441D0 D_800441D0;
extern T_D_800441D8 D_800441D8;
extern T_D_800441F8 D_800441F8;
extern T_D_80044204 D_80044204;
extern T_D_8004420C D_8004420C;
extern T_D_80044214 D_80044214;
extern T_D_80162DD0 D_80044220;
extern struct T_D_800442E8_elem D_800442E8[];
extern u16 *D_80044360[];
extern T_D_80162DD0 D_80044420;
extern T_D_80162DD0 D_80044434;
extern T_D_8016379C D_8004444C;
extern T_D_800444E0 D_800444E0;
extern T_D_800444EC D_800444EC;
extern T_D_800444F4 D_800444F4;
extern T_D_80044514 D_80044514;
extern T_D_80044520 D_80044520;
extern T_D_80044528 D_80044528;
extern struct T_D_80044548_elem D_80044548[];
extern T_D_80044608 D_80044608;
extern T_D_80044614 D_80044614;
extern T_D_8004461C D_8004461C;
extern T_D_80044624 D_80044624;
extern T_D_8004462C D_8004462C;
extern T_D_80044638 D_80044638;
extern T_D_80044640 D_80044640;
extern struct T_D_80044648_elem D_80044648[];
extern T_D_800446A4 D_800446A4;
extern struct T_D_800446AC_elem D_800446AC[];
extern struct T_D_800446F8_elem D_800446F8[];
extern struct T_D_8004474C_elem D_8004474C[];
extern T_D_800447A0 D_800447A0;
extern T_D_800447B0 D_800447B0;
extern T_D_800447D0 D_800447D0;
extern T_D_80162DD0 D_800447F0;
extern T_D_8016379C D_8004480C;
extern struct T_D_8004481C_elem D_8004481C[];
extern T_D_80162DD0 D_800448E0;
extern T_D_8016379C D_800448F4;
extern u8 D_80044914;
extern T_D_80044918 D_80044918;
extern f32 D_80044930[];
extern s32 D_80047940;
extern u32 D_80047950;
extern u32 D_80047954;
extern s32 D_80047958;
extern s32 D_8004795C;
extern s32 D_80047960[];
extern s32 D_80047978[];
extern s32 D_80047990[];
extern struct T_D_800479A4_elem_p0_elem *D_800479A4[];
extern s32 D_800479CC;
extern s32 D_800479D0;
extern s32 D_800479E8[];
extern void *D_80047B10[];
extern void *D_80047BD0[];
extern s32 D_80047BF4[];
extern struct T_D_80047E00_elem D_80047E00[];
extern void *D_80047E0C[];
extern u16 D_80047E3A[];
extern f32 D_80047FD8[];
extern s32 D_800482A0[];
extern struct T_D_8004889C_elem D_8004889C[];
extern u16 D_800497A4[];
extern u8 D_800498E8;
extern u8 D_800498EC;
extern struct T_func_8002691C_a0 *D_800498F0;
extern T_D_80049900 D_80049900;
extern struct T_D_80049938_p0 *D_80049938;
extern struct T_func_80028260_a0 *D_8004993C;
extern T_D_80049940 D_80049940;
extern s32 D_80049944;
extern s32 D_80049950;
extern s32 D_80049960;
extern s32 D_80049970;
extern s32 D_80049974;
extern s32 D_80049978;
extern s32 D_8004997C;
extern s32 D_80049980;
extern T_D_8004AB10 D_8004AB10;
extern s32 D_8004AB18;
extern struct T_D_8005CDA0 *D_8004AB2C;
extern struct T_D_8004AB30_elem_p0 *D_8004AB30[];
extern s32 D_8004AB40;
extern s32 D_8004AB50;
extern u8 D_8004AB54;
extern s16 D_8004AD10[];
extern struct T_D_8004AE10_elem D_8004AE10[];
extern s32 D_8004AE50;
extern struct T_D_8004AE60_p0 *D_8004AE60;
extern T_D_8004AE70 D_8004AE70;
extern struct T_D_8004AE70 *D_8004AED0;
extern struct T_D_8004AE70 *D_8004AED4;
extern struct T_D_8004AEE0_elem D_8004AEE0[];
extern struct T_D_8004AEE0_elem D_8004AF30[];
extern struct T_D_8004AEE0_elem D_8004AF80[];
extern s32 D_8004AFD0;
extern s32 D_8004AFE0;
extern T_D_8004AFF0 D_8004AFF0;
extern s32 D_8004B00C;
extern u8 D_8004B010;
extern f64 D_8004B900;
extern f64 D_8004B908;
extern f64 D_8004C7C0;
extern f64 D_8004C7C8;
extern f64 D_8004C7D0;
extern f64 D_8004C7D8;
extern f64 D_8004C7E0;
extern f64 D_8004C7E8;
extern f64 D_8004C7F0;
extern f64 D_8004C7F8;
extern f64 D_8004C800;
extern f64 D_8004C808;
extern f64 D_8004C810;
extern f64 D_8004C818;
extern f64 D_8004C820;
extern f32 D_8004C828;
extern f64 D_8004C830;
extern f64 D_8004C838;
extern f64 D_8004C840;
extern f64 D_8004C848;
extern f64 D_8004C850;
extern f64 D_8004C858;
extern f64 D_8004C860;
extern f64 D_8004C868;
extern f64 D_8004C870;
extern f64 D_8004C878;
extern u8 D_8004CC80[];
extern u8 D_8004CC90;
extern u8 D_8004CC94[];
extern u8 D_8004CCB8[];
extern u8 D_8004CCE0[];
extern u8 D_8004CCE8[];
extern u8 D_8004CCF0[];
extern u8 D_8004CD00[];
extern u8 D_8004CD08[];
extern f64 D_8004D020;
extern f64 D_8004D028;
extern f64 D_8004D030;
extern f64 D_8004D038;
extern f64 D_8004D2F0;
extern T_D_8004D300 D_8004D300;
extern f64 D_8004D328;
extern f64 D_8004D330;
extern f64 D_8004D338;
extern f32 D_8004D340;
extern f64 D_8004D370;
extern f64 D_8004D398;
extern f64 D_8004D3C0;
extern f64 D_8004D418;
extern f64 D_8004D420;
extern f64 D_8004D458;
extern f32 D_8004D460;
extern f64 D_8004D470;
extern f64 D_8004D478;
extern T_D_8004D480 D_8004D480;
extern f64 D_8004D4A8;
extern f64 D_8004D4B0;
extern f64 D_8004D4B8;
extern f32 D_8004D4C0;
extern f32 D_8004D4D0;
extern s64 D_8004D4E0;
extern s64 D_8004D4E8;
extern s16 D_8005C3A0[];
extern struct T_D_8005C3A8_elem D_8005C3A8[];
extern T_D_8005C4B0 D_8005C4B0;
extern s32 D_8005CD78;
extern T_D_8005CD80 D_8005CD80;
extern s32 D_8005CD98;
extern struct T_D_8005CDA0 *D_8005CD9C;
extern T_D_8005CDA0 D_8005CDA0;
extern struct T_D_8005CE50_elem D_8005CE50[];
extern s32 D_8005D010;
extern u32 D_8005D014;
extern s32 D_8005D018;
extern s32 D_8005D01C;
extern s32 D_8005D020;
extern u16 D_8005D024;
extern u16 D_8005D026;
extern s32 D_8005D030;
extern u32 D_8005D034;
extern s32 D_8005D038;
extern s32 D_8005D03C;
extern s32 D_8005D040;
extern struct T_D_80062D30_elem D_80062D30[];
extern T_D_800631B0 D_800631B0;
extern T_D_800631BC D_800631BC;
extern T_D_800631C8 D_800631C8;
extern T_D_800631D4 D_800631D4;
extern T_D_800631E0 D_800631E0;
extern s32 D_800631E4;
extern u16 D_800631EA;
extern u8 D_800631ED;
extern struct T_D_800631F0_elem D_800631F0[];
extern struct T_D_80063670_elem D_80063670[];
extern struct T_D_80063A30_elem D_80063A30[];
extern struct T_D_80063DF0_elem_2 D_80063DF0[];
extern u16 D_80063DF2[];
extern struct T_D_800692B0_elem D_800692B0[];
extern struct T_D_80089378 *D_800792F0;
extern T_D_800892B0 D_800892B0;
extern struct T_D_80089378 *D_80089338;
extern u16 D_8008934A;
extern s16 D_8008934C;
extern s16 D_80089350;
extern s16 D_80089354;
extern s16 D_80089356;
extern u16 D_80089358;
extern s32 *D_8008935C;
extern T_D_80089378 D_80089378;
extern T_D_8008942C D_8008942C;
extern struct T_D_80089460_p0 *D_80089460;
extern u8 D_8008946D;
extern struct T_func_8001F204_a0 *D_80089470;
extern T_D_80089474 D_80089474;
extern T_D_80089494 D_80089494;
extern T_D_800894D4 D_800894D4;
extern s32 D_800894F4[];
extern u8 D_80089518;
extern u8 D_8008B518;
extern struct T_D_8008D530_elem D_8008D530[];
extern s32 D_8008D540;
extern u8 D_8008D544;
extern u8 D_8008D545;
extern s32 D_8008D548;
extern T_D_8008D54C D_8008D54C;
extern T_D_8008D558 D_8008D558;
extern u8 D_8008D59C;
extern s32 D_8008D5A8;
extern T_D_8008D5AC D_8008D5AC;
extern struct T_func_800078AC_ret *D_8008D5BC;
extern struct T_func_80006754_ret *D_8008D5C0;
extern u32 D_8008D5C4;
extern u32 D_8008D5C8;
extern u32 D_8008D5CC;
extern struct T_D_80089378 *D_8008D5D0;
extern struct T_D_80089378 *D_8008D5D4;
extern struct T_D_80089378 *D_8008D5D8[];
extern s32 D_8008D768[];
extern struct T_D_8008D8F8_elem_p0 *D_8008D8F8[];
extern struct T_func_8037DD6C_a1 *D_8008DA88[];
extern struct T_D_8008DC18_elem D_8008DC18[];
extern s32 D_8008DC90;
extern u32 D_8008DC94;
extern s32 D_8008DC98;
extern s32 D_8008DC9C;
extern u8 *D_8008DCA0;
extern u8 D_8008DCA4;
extern struct T_D_8008DCA8_elem_2 D_8008DCA8[];
extern u32 D_8008DFA8;
extern s32 D_8008DFAC;
extern s32 D_8008DFB0;
extern s32 D_8008DFB4;
extern u8 *D_8008DFB8;
extern struct T_D_8008DFC0_elem D_8008DFC0[];
extern struct T_D_8008DFC4_elem D_8008DFC4[];
extern s16 D_8008E7C0[];
extern s16 D_8008E9C0[];
extern u16 D_8008EBC0;
extern u16 D_8008EBC2;
extern u8 D_8008EBC3;
extern u16 D_8008EBC4;
extern u8 D_8008EBC5;
extern s16 D_8008EBC6;
extern u8 D_8008EBC7;
extern s16 D_8008EBC8;
extern s16 D_8008EBCA;
extern u16 D_8008EBCC;
extern u16 D_8008EBCE;
extern u16 D_8008EBD0;
extern u16 D_8008EBD2;
extern u16 D_8008EBD4;
extern u16 D_8008EBD6;
extern u16 D_8008EBD8;
extern u16 D_8008EBDA;
extern u16 D_8008EBDC;
extern u16 D_8008EBDE;
extern u16 D_8008EBE0;
extern u16 D_8008EBE2;
extern u16 D_8008EBE4;
extern T_D_8008EBE6 D_8008EBE6;
extern u8 D_8008EBE7;
extern u16 D_8008EBE8;
extern u16 D_8008EBEA;
extern s16 D_8008EBEC;
extern u16 D_8008EBEE;
extern u16 D_8008EBF0;
extern u16 D_8008EBF2;
extern s16 D_8008EBFC;
extern struct T_D_8008EC18_elem D_8008EC18[];
extern struct T_D_8008EC1C_elem D_8008EC1C[];
extern struct T_D_8008ED28_elem D_8008ED28[];
extern void ****D_8008EE78;
extern void ****D_8008EE7C;
extern u8 D_8008EE80;
extern u8 D_8008EE81;
extern u8 D_8008EE82;
extern u8 D_8008EE83;
extern struct T_D_8008ED28_elem *D_8008EE84;
extern struct T_func_8001B154_ret_elem *D_8008EE88;
extern struct T_func_80018E9C_ret *D_8008EE8C;
extern struct T_D_8008EE90_p0 *D_8008EE90;
extern u8 D_8008EE94;
extern u8 D_8008EE95;
extern u8 D_8008EE96;
extern s16 D_8008EE98;
extern u16 D_8008EE9A;
extern u16 D_8008EE9C;
extern struct T_D_8008EEA0_elem D_8008EEA0[];
extern struct T_D_8008EF70_elem D_8008EF70[];
extern struct T_D_8008EF78_elem D_8008EF78[];
extern u8 D_80090E48;
extern u8 D_80090E49;
extern u8 D_80090E4A;
extern u8 D_80090E4B;
extern u8 D_80090E4C;
extern u8 D_80090E4D;
extern u8 D_80090E4E;
extern u8 D_80090E4F;
extern struct T_D_80090E50_elem_2 D_80090E50[];
extern Heap D_80091BC0;
extern struct T_D_80091BC8_p0 *D_80091BC8;
extern struct T_D_80091BCC_p0 *D_80091BCC;
extern s32 D_80091BD0;
extern AMAudioMgr D_80091BD8;
extern AMDMAState D_80096020;
extern struct AMDMABuffer D_80096030[];
extern u32 D_8009633C;
extern s32 D_80096340;
extern s32 D_80096344;
extern s32 D_80096348;
extern T_D_80096A70 D_80096A70;
extern struct T_D_80096A98_elem_p0 *D_80096A98[];
extern u8 D_800CBAB0;
extern u8 D_800CBAB1;
extern u16 D_800CBAB2;
extern u8 D_800CBAB4;
extern u8 D_800CBAB5;
extern s8 D_800CBAB6;
extern u8 D_800CBAB7;
extern u8 D_800CBAB8;
extern T_D_800CBABC D_800CBABC;
extern u16 D_800CBABE;
extern T_D_800CBAC0 D_800CBAC0;
extern u16 D_800CBAC2;
extern struct T_D_800CBAC4_elem D_800CBAC4[];
extern u16 D_800CBAC8[];
extern u16 D_800CBACA;
extern u8 D_800CBACC;
extern s8 D_800CBACD;
extern u8 D_800CBACE;
extern T_D_800CBAD0 D_800CBAD0;
extern T_D_800CBAD8 D_800CBAD8;
extern struct T_D_800CBAF0_elem D_800CBAF0[];
extern struct T_D_800CBAF2_elem D_800CBAF2[];
extern u8 D_800CBB20;
extern u8 D_800CBB21;
extern u8 D_800CBB22;
extern s32 D_800CBB28[];
extern s32 D_800CBB48;
extern u16 D_800CBB4C;
extern u8 D_800CBB4E;
extern s32 D_800CBB50[];
extern u8 D_800CBB90[];
extern u8 D_800CBB91[];
extern struct T_D_800CBB98_elem D_800CBB98[];
extern u8 D_800CBBD8[];
extern struct T_D_801B5520_p8 *D_800CBDA0;
extern struct SndTrack *D_800CBDA4;
extern u8 D_800CBDB0[];
extern u8 D_800CBDB3;
extern struct T_D_800CBDB8_elem D_800CBDB8[];
extern u8 D_800CBDD0;
extern struct T_D_800CBDD8_elem D_800CBDD8[];
extern s32 D_800CBE08;
extern u16 D_800CBE10;
extern T_D_800CBE20 D_800CBE20;
extern struct T_D_800CBE60_elem D_800CBE60[];
extern T_D_800CBF80 D_800CBF80;
extern s32 D_800CBFBC;
extern u8 D_800CBFC0;
extern u8 D_800CBFC1;
extern s32 D_800CC010;
extern T_D_800CC1D0 D_800CC1D0;
extern s32 D_800CC20C;
extern u8 D_800CC214;
extern u8 D_800CC215;
extern u8 D_800CC216;
extern u8 D_800CC217;
extern u8 D_800CC218;
extern u8 D_800CC28C;
extern u8 D_800CC28D;
extern u8 D_800CC28E;
extern u8 D_800CC28F;
extern u8 D_800CC290;
extern struct T_D_800CD5F0_elem D_800CD5F0[];
extern T_D_800CD690 D_800CD690;
extern u32 D_800CD694;
extern s32 D_800CD698;
extern s32 D_800CD69C;
extern s32 D_800CD6A0;
extern T_D_8005CDA0 D_800CD6F0;
extern T_D_800CE950 D_800CE950;
extern T_D_800CE968 D_800CE968;
extern u16 D_800CE980;
extern T_D_801077C0 D_801077C0;
extern s32 D_A4040000;
extern s32 D_A4040004;
extern s32 D_A4040008;
extern s32 D_A404000C;
extern s32 D_A4040010;
extern s32 D_A4080000;
extern s32 D_A4300000;
extern s32 D_A4300008;
extern s32 D_A430000C;
extern s32 D_A4400000;
extern s32 D_A4400004;
extern s32 D_A4400008;
extern s32 D_A440000C;
extern u32 D_A4400010;
extern s32 D_A4400014;
extern s32 D_A4400018;
extern s32 D_A440001C;
extern s32 D_A4400020;
extern s32 D_A4400024;
extern s32 D_A4400028;
extern s32 D_A440002C;
extern s32 D_A4400030;
extern s32 D_A4400034;
extern s32 D_A4500000;
extern s32 D_A4500004;
extern s32 D_A4500008;
extern s32 D_A450000C;
extern s32 D_A4500010;
extern s32 D_A4500014;
extern s32 D_A4600000;
extern s32 D_A4600004;
extern s32 D_A4600008;
extern s32 D_A460000C;
extern s32 D_A4600010;
extern s32 D_A4600014;
extern s32 D_A4600018;
extern s32 D_A460001C;
extern s32 D_A4600020;
extern s32 D_A4600024;
extern s32 D_A4600028;
extern s32 D_A460002C;
extern s32 D_A4600030;
extern s32 D_A4800000;
extern s32 D_A4800004;
extern s32 D_A4800010;
extern s32 D_A4800018;
extern T_D_700000 D_CE9C0;

#endif
