#ifndef TYPES_FILE049_H
#define TYPES_FILE049_H

/* Recovered types for file049 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_801E732C; 1 functions */
typedef struct T_D_801E732C_file049 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E732C_file049;

/* D_801E7344; 1 functions */
typedef struct T_D_801E7344_file049 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E7344_file049;

/* D_801E7350; 1 functions */
typedef struct T_D_801E7350_file049 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E7350_file049;

/* D_801E735C; 1 functions */
typedef struct T_D_801E735C_file049 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E735C_file049;

/* D_801E7374; 1 functions */
typedef struct T_D_801E7374_file049 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E7374_file049;

/* D_801E738C; 1 functions */
typedef struct T_D_801E738C_file049 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E738C_file049;

/* D_801E7398; 1 functions */
typedef struct T_D_801E7398_file049 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E7398_file049;

/* D_801E7770; 2 functions */
typedef struct T_D_801E7770_file049 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801E7770_file049;

/* D_801E7780; 2 functions */
typedef struct T_D_801E7780_file049 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801E7780_file049;

/* func_801DAAF0; 21 functions */
typedef struct T_func_801DAAF0_file049 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 86 uses */
} T_func_801DAAF0_file049;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file049 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file049;

/* func_8038D8B8; 1 functions */
typedef struct T_func_8038D8B8_file049 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_func_80107830_a0 *unk14; /* 28 uses */
} T_func_8038D8B8_file049;

extern s32 D_801D8D60;
extern T_D_80162DD0 D_801DB300;
extern T_D_80162DD0 D_801DB320;
extern T_D_80162DD0 D_801DB340;
extern T_D_801E0A48_file026 D_801E0A48;
extern s32 D_801E703C;
extern T_D_8016379C D_801E70CC;
extern s32 D_801E7144;
extern s32 D_801E72FC;
extern T_D_801E732C_file049 D_801E732C;
extern T_D_801E7344_file049 D_801E7344;
extern T_D_801E7350_file049 D_801E7350;
extern T_D_801E735C_file049 D_801E735C;
extern T_D_801E7374_file049 D_801E7374;
extern T_D_801E738C_file049 D_801E738C;
extern T_D_801E7398_file049 D_801E7398;
extern f32 D_801E7630;
extern f32 D_801E7634;
extern f32 D_801E7638;
extern f32 D_801E763C;
extern f32 D_801E7640;
extern f32 D_801E7644;
extern f32 D_801E7648;
extern f32 D_801E764C;
extern f32 D_801E7650;
extern f32 D_801E7654;
extern f32 D_801E7658;
extern f32 D_801E765C;
extern f32 D_801E7660;
extern f32 D_801E7664;
extern f32 D_801E7668;
extern f32 D_801E766C;
extern f32 D_801E7670;
extern f32 D_801E7674;
extern f32 D_801E7678;
extern f32 D_801E767C;
extern f32 D_801E7680;
extern f32 D_801E7684;
extern f32 D_801E7688;
extern f32 D_801E768C;
extern f32 D_801E7690;
extern f32 D_801E7694;
extern f32 D_801E7698;
extern f32 D_801E769C;
extern f32 D_801E76A0;
extern f32 D_801E76A4;
extern f32 D_801E76A8;
extern f32 D_801E76AC;
extern f32 D_801E76B0;
extern f32 D_801E76B4;
extern f32 D_801E76B8;
extern f32 D_801E76BC;
extern f32 D_801E76C0;
extern f32 D_801E76C4;
extern f32 D_801E76C8;
extern f32 D_801E76CC;
extern f32 D_801E76D0;
extern f32 D_801E76D4;
extern f32 D_801E76D8;
extern f32 D_801E76DC;
extern f32 D_801E76E0;
extern f32 D_801E76E4;
extern f32 D_801E76E8;
extern f32 D_801E76EC;
extern f32 D_801E76F0;
extern f32 D_801E76F4;
extern f32 D_801E76F8;
extern f32 D_801E76FC;
extern f32 D_801E7700;
extern f32 D_801E7704;
extern f32 D_801E7708;
extern f32 D_801E770C;
extern f32 D_801E7710;
extern f32 D_801E7714;
extern f32 D_801E7718;
extern f32 D_801E771C;
extern f32 D_801E7720;
extern f32 D_801E7724;
extern f32 D_801E7728;
extern f32 D_801E772C;
extern f32 D_801E7730;
extern f32 D_801E7734;
extern f32 D_801E7738;
extern f32 D_801E773C;
extern f32 D_801E7740;
extern f32 D_801E7744;
extern f32 D_801E7748;
extern f32 D_801E774C;
extern f32 D_801E7750;
extern f32 D_801E7754;
extern f32 D_801E7758;
extern f32 D_801E7768;
extern T_D_801E7770_file049 D_801E7770;
extern T_D_801E7780_file049 D_801E7780;
extern T_D_801E0A48_file026 D_8038DD90;

#endif
