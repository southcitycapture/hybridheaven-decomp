#ifndef TYPES_FILE016_H
#define TYPES_FILE016_H

/* Recovered types for file016 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_802496DC; 1 functions */
typedef struct T_D_802496DC_file016 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_802496DC_file016;

/* D_802496F0; 1 functions */
typedef struct T_D_802496F0_file016 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_802496F0_file016;

/* D_802497A8; 1 functions */
typedef struct T_D_802497A8_file016_elem { /* size 0xC */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_802497A8_file016_elem;

/* D_80249880; 1 functions */
typedef struct T_D_80249880_file016_elem { /* size 0xC */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_80249880_file016_elem;

/* D_80249958; 1 functions */
typedef struct T_D_80249958_file016_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x1];
    /* 0x002 */ u16 unk2; /* 2 uses */
} T_D_80249958_file016_elem;

/* D_8024995A; 1 functions */
typedef struct T_D_8024995A_file016_elem { /* size 0x4 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x2];
} T_D_8024995A_file016_elem;

/* D_8024996C; 1 functions */
typedef struct T_D_8024996C_file016_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x1];
    /* 0x002 */ u16 unk2; /* 1 use */
} T_D_8024996C_file016_elem;

/* D_80249CBC; 1 functions */
typedef struct T_D_80249CBC_file016 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80249CBC_file016;

/* D_80249CC8; 1 functions */
typedef struct T_D_80249CC8_file016 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80249CC8_file016;

/* D_80249D2C; 1 functions */
typedef struct T_D_80249D2C_file016_elem { /* size 0x8 */
    /* 0x000 */ s32 *unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x4];
} T_D_80249D2C_file016_elem;

/* D_80249D34; 1 functions */
typedef struct T_D_80249D34_file016_elem { /* size 0x8 */
    /* 0x000 */ struct T_D_80249D34_file016_elem_p0 *unk0; /* 3 uses */
    /* 0x004 */ u8 unk4; /* 2 uses */
    /* 0x005 */ u8 pad5[0x3];
} T_D_80249D34_file016_elem;

/* pointed to by T_D_80249D34_file016_elem.0x0; 1 functions */
typedef struct T_D_80249D34_file016_elem_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 5 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80249D34_file016_elem_p0;

/* D_80249D7C; 1 functions */
typedef struct T_D_80249D7C_file016 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80249D7C_file016;

/* D_80249DA0; 1 functions */
typedef struct T_D_80249DA0_file016_elem { /* size 0x8 */
    /* 0x000 */ struct T_D_80249DA0_file016_elem_p0 *unk0; /* 3 uses */
    /* 0x004 */ u8 unk4; /* 2 uses */
    /* 0x005 */ u8 pad5[0x3];
} T_D_80249DA0_file016_elem;

/* pointed to by T_D_80249DA0_file016_elem.0x0; 1 functions */
typedef struct T_D_80249DA0_file016_elem_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 5 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80249DA0_file016_elem_p0;

/* D_80249DD0; 1 functions */
typedef struct T_D_80249DD0_file016_elem { /* size 0x1C */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ f32 unk10; /* 1 use */
    /* 0x014 */ f32 unk14; /* 1 use */
    /* 0x018 */ u8 unk18; /* 2 uses */
    /* 0x019 */ u8 pad19[0x1];
    /* 0x01A */ u16 unk1A; /* 1 use */
} T_D_80249DD0_file016_elem;

/* D_8024F51E; 2 functions */
typedef struct T_D_8024F51E_file016 { /* size >= 0x2 */
    /* 0x000 */ u8 unk0; /* 5 uses */
    /* 0x001 */ u8 unk1; /* 5 uses */
} T_D_8024F51E_file016;

/* pointed to by T_func_801FCF98_a0_p24.0x30; 1 functions */
typedef struct T_func_801FCF98_a0_p24_p30 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 x; /* 1 use */
    /* 0x008 */ f32 y; /* 1 use */
    /* 0x00C */ f32 z; /* 1 use */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 ry; /* 1 use */
    /* 0x014 */ s16 rz; /* 1 use */
    /* 0x016 */ u8 pad16[0x2];
} T_func_801FCF98_a0_p24_p30;

/* pointed to by T_func_80247294_a0.0x38; 1 functions */
typedef struct T_func_80247294_a0_p38 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x6];
    /* 0x006 */ s16 unk6; /* 1 use */
    /* 0x008 */ s16 unk8; /* 1 use */
    /* 0x00A */ s16 unkA; /* 1 use */
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ u8 padE[0x2];
    /* 0x010 */ s32 unk10; /* 2 uses */
} T_func_80247294_a0_p38;

extern T_D_802496DC_file016 D_802496DC;
extern T_D_802496F0_file016 D_802496F0;
extern struct T_D_802497A8_file016_elem D_802497A8[];
extern struct T_D_80249880_file016_elem D_80249880[];
extern struct T_D_80249958_file016_elem D_80249958[];
extern struct T_D_8024995A_file016_elem D_8024995A[];
extern struct T_D_8024996C_file016_elem D_8024996C[];
extern u16 D_80249988[];
extern T_D_80253968_file015 D_802499E0;
extern T_D_80253968_file015 D_802499EC;
extern T_D_80253968_file015 D_802499F8;
extern T_D_80253968_file015 D_80249A04;
extern T_D_80253968_file015 D_80249A10;
extern T_D_80253968_file015 D_80249A1C;
extern T_D_80253968_file015 D_80249A34;
extern T_D_80253968_file015 D_80249A40;
extern T_D_80253968_file015 D_80249A4C;
extern T_D_80162DD0 D_80249B94;
extern u8 D_80249CB0;
extern u8 D_80249CB4;
extern u8 D_80249CB8;
extern T_D_80249CBC_file016 D_80249CBC;
extern T_D_80249CC8_file016 D_80249CC8;
extern struct T_D_80249D2C_file016_elem D_80249D2C[];
extern struct T_D_80249D34_file016_elem D_80249D34[];
extern T_D_80249D7C_file016 D_80249D7C;
extern struct T_D_80249DA0_file016_elem D_80249DA0[];
extern struct T_D_80249DD0_file016_elem D_80249DD0[];
extern f32 D_8024EBE8;
extern f32 D_8024EBEC;
extern f32 D_8024EBF0;
extern f32 D_8024EBF4;
extern f32 D_8024EBF8;
extern f32 D_8024EBFC;
extern f32 D_8024EC00;
extern f32 D_8024EC04;
extern f64 D_8024EC08;
extern f64 D_8024EC10;
extern f32 D_8024EC18;
extern f32 D_8024EC1C;
extern f64 D_8024EC20;
extern f32 D_8024EC28;
extern f64 D_8024EC30;
extern f64 D_8024EC38;
extern f64 D_8024EC40;
extern f64 D_8024EC48;
extern f64 D_8024EC50;
extern f64 D_8024EC58;
extern f32 D_8024ED7C;
extern f32 D_8024ED80;
extern f32 D_8024ED84;
extern f32 D_8024ED88;
extern f32 D_8024ED8C;
extern f32 D_8024ED90;
extern f32 D_8024ED94;
extern f32 D_8024ED98;
extern f32 D_8024ED9C;
extern f32 D_8024EDA0;
extern f32 D_8024EDA4;
extern f32 D_8024EDA8;
extern f32 D_8024EDAC;
extern f32 D_8024EDB0;
extern f32 D_8024EDB4;
extern f32 D_8024EDB8;
extern f32 D_8024EDBC;
extern f32 D_8024EDC0;
extern f32 D_8024EDC4;
extern f32 D_8024EDC8;
extern f32 D_8024EDCC;
extern f32 D_8024EDD0;
extern f32 D_8024EDD4;
extern f32 D_8024EDD8;
extern f32 D_8024EDDC;
extern f32 D_8024EDE0;
extern f32 D_8024EDE4;
extern f32 D_8024EDE8;
extern f32 D_8024EDEC;
extern f32 D_8024EDF0;
extern f32 D_8024EDF4;
extern f32 D_8024EDF8;
extern f64 D_8024EE48;
extern f64 D_8024EE50;
extern f64 D_8024EE58;
extern f64 D_8024EE60;
extern f64 D_8024EE68;
extern f64 D_8024EE70;
extern f32 D_8024EFD0;
extern f32 D_8024F014;
extern f64 D_8024F018;
extern f32 D_8024F020;
extern f32 D_8024F024;
extern f32 D_8024F028;
extern f32 D_8024F02C;
extern f64 D_8024F030;
extern f64 D_8024F038;
extern f64 D_8024F040;
extern f64 D_8024F048;
extern f32 D_8024F050;
extern f32 D_8024F054;
extern f64 D_8024F058;
extern f64 D_8024F060;
extern f64 D_8024F068;
extern f64 D_8024F070;
extern f64 D_8024F078;
extern f64 D_8024F080;
extern f64 D_8024F088;
extern f32 D_8024F090;
extern f32 D_8024F094;
extern f32 D_8024F098;
extern f32 D_8024F09C;
extern f64 D_8024F0A0;
extern f64 D_8024F0A8;
extern f64 D_8024F0B0;
extern f32 D_8024F0B8;
extern f32 D_8024F0BC;
extern f32 D_8024F0C0;
extern f32 D_8024F0C4;
extern f32 D_8024F0C8;
extern f64 D_8024F0D0;
extern f64 D_8024F0D8;
extern f64 D_8024F0E0;
extern f64 D_8024F0E8;
extern f64 D_8024F0F0;
extern f32 D_8024F0F8;
extern f32 D_8024F0FC;
extern f32 D_8024F100;
extern f32 D_8024F128;
extern f32 D_8024F12C;
extern f32 D_8024F130;
extern f64 D_8024F138;
extern u8 D_8024F318[];
extern u8 D_8024F330[];
extern u8 D_8024F348[];
extern f64 D_8024F400;
extern f32 D_8024F408;
extern f32 D_8024F40C;
extern f64 D_8024F410;
extern f64 D_8024F418;
extern f64 D_8024F420;
extern f64 D_8024F428;
extern f64 D_8024F430;
extern f64 D_8024F438;
extern f32 D_8024F440;
extern f32 D_8024F444;
extern f64 D_8024F448;
extern f64 D_8024F450;
extern f64 D_8024F458;
extern f64 D_8024F460;
extern f64 D_8024F468;
extern f64 D_8024F470;
extern f64 D_8024F478;
extern f64 D_8024F480;
extern f32 D_8024F488;
extern f64 D_8024F490;
extern f64 D_8024F498;
extern f64 D_8024F4A0;
extern f32 D_8024F4A8;
extern f32 D_8024F4AC;
extern f32 D_8024F4B0;
extern f32 D_8024F4B4;
extern f32 D_8024F4B8;
extern f32 D_8024F4BC;
extern f32 D_8024F4C0;
extern f32 D_8024F4C4;
extern f32 D_8024F4C8;
extern f32 D_8024F4CC;
extern f32 D_8024F4D0;
extern f32 D_8024F4D4;
extern f32 D_8024F4D8;
extern f32 D_8024F4DC;
extern f32 D_8024F4E0;
extern f32 D_8024F4E4;
extern f32 D_8024F4F0;
extern f32 D_8024F500;
extern struct T_func_80107830_a0 *D_8024F510;
extern u8 D_8024F514;
extern s32 D_8024F518;
extern s16 D_8024F51C;
extern T_D_8024F51E_file016 D_8024F51E;
extern u8 D_8024F520;
extern u8 D_8024F521;
extern u16 D_8024F522;
extern f32 D_8024F524;
extern f32 D_8024F528;

#endif
