#ifndef TYPES_FILE022_H
#define TYPES_FILE022_H

/* Recovered types for file022 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"

/* pointed to by T_D_801BCC25.0x83; 2 functions */
typedef struct T_D_801BCC25_p83 { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0x92];
    /* 0x092 */ s16 unk92; /* 2 uses */
} T_D_801BCC25_p83;

/* D_80248ADC; 1 functions */
typedef struct T_D_80248ADC_file022 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80248ADC_file022;

/* D_80250428; 1 functions */
typedef struct T_D_80250428_file022_elem { /* size 0x6 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u8 unk2; /* 2 uses */
    /* 0x003 */ u8 unk3; /* 2 uses */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 unk5; /* 1 use */
} T_D_80250428_file022_elem;

/* D_80250454; 1 functions */
typedef struct T_D_80250454_file022_elem { /* size 0x7 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u8 unk2; /* 2 uses */
    /* 0x003 */ u8 unk3; /* 2 uses */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 unk5; /* 1 use */
    /* 0x006 */ s8 unk6; /* 1 use */
} T_D_80250454_file022_elem;

extern T_D_80248ADC_file022 D_80248ADC;
extern T_D_80162DD0 D_80248AF0;
extern T_D_80162DD0 D_802503B4;
extern struct T_D_80250428_file022_elem D_80250428[];
extern struct T_D_80250454_file022_elem D_80250454[];
extern f32 D_8025250C;
extern f64 D_80252510;
extern f64 D_80252518;
extern f32 D_80252520;
extern f32 D_80252524;
extern f32 D_80252528;
extern f64 D_80252530;
extern f64 D_80252538;
extern f32 D_80252540;
extern f32 D_80252544;
extern f32 D_80252568;
extern f32 D_8025256C;
extern f32 D_80252570;
extern f32 D_80252574;
extern f32 D_80252578;
extern f64 D_80252620;
extern f64 D_80252628;
extern f64 D_80252630;
extern f64 D_80252638;
extern f64 D_80252640;
extern f32 D_80252648;
extern f32 D_8025264C;
extern f64 D_80252650;
extern f64 D_80252658;
extern f64 D_80252660;
extern f64 D_80252668;
extern f64 D_80252670;
extern f64 D_80252678;
extern f32 D_80252680;
extern f32 D_80252684;
extern f64 D_80252688;
extern f32 D_80252690;
extern f64 D_80252698;
extern f64 D_802526A0;
extern f32 D_802526A8;
extern f32 D_802526AC;
extern f32 D_802526B0;
extern f32 D_802526B4;
extern f32 D_802526B8;
extern f32 D_802526BC;
extern f32 D_802526C0;
extern f64 D_80252770;
extern f64 D_80252778;
extern f64 D_80252780;
extern f64 D_80252788;
extern f64 D_80252790;
extern f64 D_80252798;
extern f64 D_802527A0;
extern f64 D_802527A8;
extern f64 D_802527B0;
extern f64 D_802527B8;
extern f64 D_802527C0;
extern f64 D_802527C8;
extern f64 D_802527D0;
extern f64 D_802527D8;
extern f64 D_802527E0;
extern f64 D_802527E8;
extern f64 D_802527F0;
extern f64 D_802527F8;
extern f64 D_80252800;
extern f64 D_80252808;
extern f64 D_80252810;
extern f64 D_80252818;
extern f64 D_80252820;
extern f32 D_80252828;
extern f32 D_8025282C;
extern f32 D_80252830;
extern f64 D_80252838;
extern f32 D_80252840;
extern f64 D_80252848;
extern f64 D_80252850;
extern f64 D_80252858;
extern f32 D_80252860;
extern f64 D_80252868;
extern f32 D_80252870;
extern f32 D_80252874;
extern f32 D_80252878;
extern f32 D_8025287C;
extern f32 D_80252880;
extern f32 D_80252884;
extern f32 D_80252888;
extern f32 D_8025288C;
extern f32 D_80252890;
extern f32 D_80252894;
extern f32 D_80252898;
extern u16 D_802528A0[];
extern f32 D_802528B0[];
extern u8 D_802528C0;
extern u8 D_802528C1;
extern u8 D_802528C2;
extern u8 D_802528C3;
extern u8 D_802528C4;
extern u8 D_802528C5;
extern u8 D_802528C6;
extern u8 D_802528C7;
extern u8 D_802528C8;
extern u16 D_802528D0[];
extern u16 D_802528E6;
extern f32 D_802528E8[];
extern u8 D_80252914;
extern u8 D_80252915;
extern u8 D_80252916;
extern u8 D_80252917;
extern u8 D_80252918;
extern u8 D_80252919;
extern u8 D_8025291A;
extern u8 D_8025291B;
extern u8 D_8025291C;

#endif
