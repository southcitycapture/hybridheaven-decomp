#ifndef TYPES_FILE024_H
#define TYPES_FILE024_H

/* Recovered types for file024 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* anonymous; 1 functions */
typedef struct T_D_80089378_elem { /* size >= 0x50 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ s32 unk20; /* 2 uses */
    /* 0x024 */ struct T_func_801395E4_a1_elem *unk24; /* 2 uses */
    /* 0x028 */ s32 unk28; /* 2 uses */
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ s32 unk34; /* 1 use */
    /* 0x038 */ s32 unk38; /* 1 use */
    /* 0x03C */ s32 unk3C; /* 1 use */
    /* 0x040 */ s32 unk40; /* 1 use */
    /* 0x044 */ s32 unk44; /* 1 use */
    /* 0x048 */ s32 unk48; /* 1 use */
    /* 0x04C */ s32 unk4C; /* 1 use */
} T_D_80089378_elem;

/* D_801CC988; 1 functions */
typedef struct T_D_801CC988_file024_elem { /* size 0x8 */
    /* 0x000 */ u8 pad0[0x1];
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u16 unk2; /* 1 use */
    /* 0x004 */ u8 pad4[0x1];
    /* 0x005 */ u8 unk5; /* 1 use */
    /* 0x006 */ u16 unk6; /* 1 use */
} T_D_801CC988_file024_elem;

/* D_801CC9D0; 1 functions */
typedef struct T_D_801CC9D0_file024 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_801CC9D0_file024;

/* D_801CCA48; 1 functions */
typedef struct T_D_801CCA48_file024_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CCA48_file024_elem;

/* D_801CCAD4; 1 functions */
typedef struct T_D_801CCAD4_file024 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801CCAD4_file024;

/* D_801CCAE0; 1 functions */
typedef struct T_D_801CCAE0_file024 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CCAE0_file024;

/* D_801CCF48; 1 functions */
typedef struct T_D_801CCF48_file024_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801CCF48_file024_elem;

/* D_801CCF68; 4 functions */
typedef struct T_D_801CCF68_file024_elem { /* size 0xC */
    /* 0x000 */ f32 unk0; /* 6 uses */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
} T_D_801CCF68_file024_elem;

/* D_801CCF80; 1 functions */
typedef struct T_D_801CCF80_file024_elem { /* size 0x3 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
} T_D_801CCF80_file024_elem;

/* D_801CCF88; 1 functions */
typedef struct T_D_801CCF88_file024_elem { /* size 0xC */
    /* 0x000 */ f32 x; /* 1 use */
    /* 0x004 */ f32 y; /* 1 use */
    /* 0x008 */ f32 z; /* 1 use */
} T_D_801CCF88_file024_elem;

/* D_801CCFC4; 1 functions */
typedef struct T_D_801CCFC4_file024_elem { /* size 0xC */
    /* 0x000 */ f32 x; /* 2 uses */
    /* 0x004 */ f32 y; /* 2 uses */
    /* 0x008 */ f32 z; /* 2 uses */
} T_D_801CCFC4_file024_elem;

/* D_801CD000; 1 functions */
typedef struct T_D_801CD000_file024_elem { /* size 0xC */
    /* 0x000 */ f32 x; /* 1 use */
    /* 0x004 */ f32 y; /* 1 use */
    /* 0x008 */ f32 z; /* 1 use */
} T_D_801CD000_file024_elem;

/* D_801CD03C; 1 functions */
typedef struct T_D_801CD03C_file024_elem { /* size 0x3 */
    /* 0x000 */ u8 unk0; /* 6 uses */
    /* 0x001 */ u8 unk1; /* 6 uses */
    /* 0x002 */ u8 unk2; /* 6 uses */
} T_D_801CD03C_file024_elem;

/* D_801CD050; 1 functions */
typedef struct T_D_801CD050_file024_elem { /* size 0x3 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
} T_D_801CD050_file024_elem;

/* D_801CD064; 1 functions */
typedef struct T_D_801CD064_file024_elem { /* size 0xC */
    /* 0x000 */ f32 x; /* 1 use */
    /* 0x004 */ f32 y; /* 1 use */
    /* 0x008 */ f32 z; /* 1 use */
} T_D_801CD064_file024_elem;

/* D_801CD0A0; 2 functions */
typedef struct T_D_801CD0A0_file024_elem { /* size 0x8 */
    /* 0x000 */ struct T_func_801C5CC8_a2 *unk0; /* 2 uses */
    /* 0x004 */ struct T_D_801CD0A0_file024_elem_p4 *unk4; /* 2 uses */
} T_D_801CD0A0_file024_elem;

/* pointed to by T_D_801CD0A0_file024_elem.0x4; 1 functions */
typedef struct T_D_801CD0A0_file024_elem_p4 { /* size >= 0xB */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ u8 unk8; /* 1 use */
    /* 0x009 */ u8 unk9; /* 1 use */
    /* 0x00A */ u8 unkA; /* 1 use */
} T_D_801CD0A0_file024_elem_p4;

/* D_801CD114; 2 functions */
typedef struct T_D_801CD114_file024 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 3 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
} T_D_801CD114_file024;

/* D_801CD178; 2 functions */
typedef struct T_D_801CD178_file024_elem { /* size 0x10 */
    /* 0x000 */ s32 w; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_801CD178_file024_elem;

/* D_801CD1A0; 1 functions */
typedef struct T_D_801CD1A0_file024_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ u16 unk4; /* 1 use; also s32@0x4 */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CD1A0_file024_elem;

/* D_801CE384; 1 functions */
typedef struct T_D_801CE384_file024_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CE384_file024_elem;

/* D_801CE3DC; 2 functions */
typedef struct T_D_801CE3DC_file024_elem { /* size 0x30 */
    /* 0x000 */ void (*unk0)(); /* 2 uses */
    /* 0x004 */ void (*unk4)(); /* 1 use */
    /* 0x008 */ u8 pad8[0x28];
} T_D_801CE3DC_file024_elem;

/* D_801CE688; 1 functions */
typedef struct T_D_801CE688_file024 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CE688_file024;

/* D_801CE694; 1 functions */
typedef struct T_D_801CE694_file024 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CE694_file024;

/* D_801CE6AC; 1 functions */
typedef struct T_D_801CE6AC_file024 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CE6AC_file024;

/* D_801CE6B8; 1 functions */
typedef struct T_D_801CE6B8_file024 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CE6B8_file024;

/* D_801CE6C4; 1 functions */
typedef struct T_D_801CE6C4_file024 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CE6C4_file024;

/* D_801CE6D0; 1 functions */
typedef struct T_D_801CE6D0_file024 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CE6D0_file024;

/* D_801CE6DC; 1 functions */
typedef struct T_D_801CE6DC_file024 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CE6DC_file024;

/* D_801CE6E8; 1 functions */
typedef struct T_D_801CE6E8_file024 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801CE6E8_file024;

/* pointed to by T_D_801CFCF0_file024.0x0; 3 functions */
typedef struct T_D_801CFCF0_file024_p0 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 7 uses */
    /* 0x002 */ u16 unk2; /* 36 uses */
} T_D_801CFCF0_file024_p0;

/* pointed to by T_D_801CFD08_file024.0x0, T_func_801C205C_a1_elem.0x0; 1 functions */
typedef struct T_D_801CFD08_file024_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_D_801CFD08_file024_p0_p30 *unk30; /* 1 use */
} T_D_801CFD08_file024_p0;

/* pointed to by T_D_801CFD08_file024_p0.0x30; 1 functions */
typedef struct T_D_801CFD08_file024_p0_p30 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0xB];
    /* 0x00B */ u8 unkB; /* 1 use */
} T_D_801CFD08_file024_p0_p30;

/* D_801CFD10; 2 functions */
typedef struct T_D_801CFD10_file024_elem { /* size 0xC */
    /* 0x000 */ f32 unk0; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
} T_D_801CFD10_file024_elem;

/* D_801CFD40; 2 functions */
typedef struct T_D_801CFD40_file024_elem { /* size 0xC */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
} T_D_801CFD40_file024_elem;

/* pointed to by T_D_801CFD90_file024.0x0, T_D_801CFDA0_file024.0x0; 2 functions */
typedef struct T_D_801CFD90_file024_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_D_801CFD90_file024_p0_p30 *unk30; /* 3 uses */
} T_D_801CFD90_file024_p0;

/* pointed to by T_D_801CFD90_file024_p0.0x30; 2 functions */
typedef struct T_D_801CFD90_file024_p0_p30 { /* size >= 0x3C */
    /* 0x000 */ u8 pad0[0xB];
    /* 0x00B */ u8 unkB; /* 3 uses */
    /* 0x00C */ u8 padC[0x28];
    /* 0x034 */ f32 unk34; /* 1 use */
    /* 0x038 */ f32 unk38; /* 1 use */
} T_D_801CFD90_file024_p0_p30;

/* pointed to by T_D_801CD0A0_file024_elem.0x0; 2 functions */
typedef struct T_func_801C5CC8_a2 { /* size >= 0xB */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ s8 unk8; /* 2 uses */
    /* 0x009 */ s8 unk9; /* 2 uses */
    /* 0x00A */ s8 unkA; /* 2 uses */
} T_func_801C5CC8_a2;

/* pointed to by T_D_801CFD78_file024_elem.0x0; 1 functions */
typedef struct T_func_801C659C_ret_801C6948 { /* size >= 0x91 */
    /* 0x000 */ u8 pad0[0x90];
    /* 0x090 */ u8 unk90; /* 1 use */
} T_func_801C659C_ret_801C6948;

extern struct T_func_8010E680_a0 *D_801CC8A0;
extern struct T_func_80107830_a0 *D_801CC8A4;
extern struct T_func_8010E680_a0 *D_801CC8A8;
extern struct T_func_8010E680_a0 *D_801CC8AC;
extern struct T_func_8010E680_a0 *D_801CC8B0;
extern struct T_func_8010E680_a0 *D_801CC8B4;
extern struct T_func_8010E680_a0 *D_801CC8B8;
extern struct T_func_8010E680_a0 *D_801CC8BC;
extern struct T_func_8010E680_a0 *D_801CC8C0;
extern u8 D_801CC8C4;
extern u8 D_801CC8C8;
extern u8 D_801CC8CC;
extern u16 D_801CC8D0;
extern struct T_D_801CC988_file024_elem D_801CC988[];
extern T_D_80162DD0 D_801CC9BC;
extern T_D_801CC9D0_file024 D_801CC9D0;
extern T_D_80162DD0 D_801CC9E4;
extern T_D_80162DD0 D_801CC9F8;
extern T_D_80162DD0 D_801CCA0C;
extern T_D_80162DD0 D_801CCA20;
extern T_D_80162DD0 D_801CCA34;
extern struct T_D_801CCA48_file024_elem D_801CCA48[];
extern T_D_801CCAD4_file024 D_801CCAD4;
extern T_D_801CCAE0_file024 D_801CCAE0;
extern void (*D_801CCB00)();
extern void (*D_801CCB04)();
extern struct T_D_801CCF48_file024_elem D_801CCF48[];
extern struct T_D_801CCF68_file024_elem D_801CCF68[];
extern struct T_D_801CCF80_file024_elem D_801CCF80[];
extern struct T_D_801CCF88_file024_elem D_801CCF88[];
extern struct T_D_801CCFC4_file024_elem D_801CCFC4[];
extern struct T_D_801CD000_file024_elem D_801CD000[];
extern struct T_D_801CD03C_file024_elem D_801CD03C[];
extern struct T_D_801CD050_file024_elem D_801CD050[];
extern struct T_D_801CD064_file024_elem D_801CD064[];
extern T_D_801CD094_file024 D_801CD094;
extern struct T_D_801CD0A0_file024_elem D_801CD0A0[];
extern u16 D_801CD0C0[];
extern s32 D_801CD0CC;
extern u8 D_801CD0D0;
extern u16 D_801CD0D4[];
extern T_D_80162DD0 D_801CD100;
extern T_D_801CD114_file024 D_801CD114;
extern T_D_80162DD0 D_801CD128;
extern T_D_80162DD0 D_801CD13C;
extern T_D_80162DD0 D_801CD150;
extern T_D_80162DD0 D_801CD164;
extern struct T_D_801CD178_file024_elem D_801CD178[];
extern struct T_D_801CD1A0_file024_elem D_801CD1A0[];
extern struct T_func_8010E680_a0 *D_801CD234;
extern void (*D_801CD238)();
extern struct T_D_801CE384_file024_elem D_801CE384[];
extern struct T_D_801CE3DC_file024_elem D_801CE3DC[];
extern T_D_801CE688_file024 D_801CE688;
extern T_D_801CE694_file024 D_801CE694;
extern T_D_801CE6AC_file024 D_801CE6AC;
extern T_D_801CE6B8_file024 D_801CE6B8;
extern T_D_801CE6C4_file024 D_801CE6C4;
extern T_D_801CE6D0_file024 D_801CE6D0;
extern T_D_801CE6DC_file024 D_801CE6DC;
extern T_D_801CE6E8_file024 D_801CE6E8;
extern u8 D_801CE700;
extern u8 D_801CE70C;
extern u8 D_801CE728;
extern u8 D_801CE744;
extern u8 D_801CE760;
extern u8 D_801CE77C;
extern u8 D_801CE798;
extern u8 D_801CE7B4;
extern u8 D_801CE7D4;
extern u8 D_801CE7E4;
extern u8 D_801CE7F4;
extern u8 D_801CE800;
extern u8 D_801CE80C;
extern u8 D_801CE818;
extern u8 D_801CE824;
extern u8 D_801CE830;
extern u8 D_801CE83C;
extern u8 D_801CE848;
extern u8 D_801CE854;
extern u8 D_801CE860;
extern u8 D_801CE86C;
extern u8 D_801CE878;
extern u8 D_801CE884;
extern u8 D_801CE890;
extern u8 D_801CE89C;
extern u8 D_801CE8A8;
extern u8 D_801CE8B0;
extern u8 D_801CE8B8;
extern u8 D_801CE8C0;
extern u8 D_801CE8C8;
extern u8 D_801CE8D0;
extern u8 D_801CE8D8;
extern u8 D_801CE8E0;
extern u8 D_801CE8E8;
extern u8 D_801CE8F0;
extern u8 D_801CE8F8;
extern u8 D_801CE900;
extern u8 D_801CE908;
extern u8 D_801CE910;
extern u8 D_801CE918;
extern u8 D_801CE920;
extern u8 D_801CE928;
extern u8 D_801CE930;
extern u8 D_801CE978;
extern u8 D_801CE994;
extern u8 D_801CE9B0;
extern u8 D_801CE9CC;
extern f32 D_801CEA84;
extern f32 D_801CEA88;
extern f64 D_801CEA90;
extern f64 D_801CEA98;
extern f64 D_801CEAA0;
extern f64 D_801CEAA8;
extern f64 D_801CEAB0;
extern f64 D_801CEAB8;
extern f32 D_801CEAC0;
extern f32 D_801CEAC4;
extern f32 D_801CEAC8;
extern f32 D_801CEACC;
extern f32 D_801CEAD0;
extern u8 D_801CEB88;
extern u8 D_801CEB9C;
extern u8 D_801CEBB4;
extern u8 D_801CEBC4;
extern u8 D_801CEBD4;
extern u8 D_801CEBE4;
extern u8 D_801CEBF4;
extern u8 D_801CEC04;
extern u8 D_801CEC14;
extern u8 D_801CEC6C;
extern u8 D_801CEC7C;
extern u8 D_801CEC8C;
extern u8 D_801CEC9C;
extern u8 D_801CECAC;
extern u8 D_801CECBC;
extern u8 D_801CECCC;
extern u8 D_801CECEC;
extern u8 D_801CECFC;
extern u8 D_801CED0C;
extern u8 D_801CED10;
extern u8 D_801CED20;
extern u8 D_801CED2C;
extern u8 D_801CED38;
extern u8 D_801CED44;
extern u8 D_801CED48;
extern u8 D_801CED4C;
extern u8 D_801CED50;
extern u8 D_801CED98;
extern u8 D_801CEDA4;
extern u8 D_801CEDB8;
extern u8 D_801CEDCC;
extern u8 D_801CEDE0;
extern u8 D_801CEDF4;
extern u8 D_801CEE08;
extern u8 D_801CEE0C;
extern u8 D_801CEE10;
extern u8 D_801CEE24;
extern u8 D_801CEE38;
extern u8 D_801CEE44;
extern u8 D_801CEE50;
extern u8 D_801CEE5C;
extern u8 D_801CEE60;
extern u8 D_801CEE64;
extern u8 D_801CEE68;
extern u8 D_801CEE74;
extern u8 D_801CEE80;
extern u8 D_801CEE8C;
extern u8 D_801CEE98;
extern u8 D_801CEEA4;
extern u8 D_801CEEA8;
extern u8 D_801CEEAC;
extern u8 D_801CEEB0;
extern u8 D_801CEEBC;
extern u8 D_801CEEC8;
extern u8 D_801CEED4;
extern u8 D_801CEEE0;
extern u8 D_801CEEEC;
extern u8 D_801CEEF8;
extern u8 D_801CEF04;
extern u8 D_801CEF10;
extern u8 D_801CEF1C;
extern u8 D_801CEF28;
extern u8 D_801CEF34;
extern u8 D_801CEF40;
extern u8 D_801CEF4C;
extern u8 D_801CEF58;
extern u8 D_801CEF64;
extern u8 D_801CEF70;
extern u8 D_801CEF74;
extern u8 D_801CEF78;
extern u8 D_801CEF84;
extern u8 D_801CEF90;
extern u8 D_801CEF9C;
extern u8 D_801CEFA8;
extern u8 D_801CEFB4;
extern u8 D_801CEFC0;
extern u8 D_801CEFCC;
extern u8 D_801CEFD8;
extern u8 D_801CEFE4;
extern u8 D_801CEFF0;
extern u8 D_801CEFF4;
extern u8 D_801CEFF8;
extern u8 D_801CF008;
extern u8 D_801CF01C;
extern u8 D_801CF024;
extern u8 D_801CF034;
extern u8 D_801CF048;
extern u8 D_801CF050;
extern u8 D_801CF060;
extern u8 D_801CF074;
extern u8 D_801CF07C;
extern u8 D_801CF084;
extern u8 D_801CF088;
extern u8 D_801CF08C;
extern u8 D_801CF09C;
extern u8 D_801CF0B0;
extern u8 D_801CF0B8;
extern u8 D_801CF0C8;
extern u8 D_801CF0DC;
extern u8 D_801CF0E4;
extern u8 D_801CF0F4;
extern u8 D_801CF108;
extern u8 D_801CF110;
extern u8 D_801CF120;
extern u8 D_801CF130;
extern u8 D_801CF140;
extern u8 D_801CF150;
extern u8 D_801CF160;
extern u8 D_801CF170;
extern f32 D_801CF260;
extern f32 D_801CF27C;
extern f32 D_801CF280;
extern f32 D_801CF284;
extern f32 D_801CF288;
extern f32 D_801CF28C;
extern f32 D_801CF290;
extern f32 D_801CF294;
extern u8 D_801CF2A0;
extern u8 D_801CF2E4;
extern u8 D_801CF2F4;
extern u8 D_801CF300;
extern u8 D_801CF30C;
extern u8 D_801CF314;
extern u8 D_801CF340;
extern u8 D_801CF348;
extern f32 D_801CF39C;
extern f32 D_801CF3A0;
extern f64 D_801CF3A8;
extern f32 D_801CF3B0;
extern f64 D_801CF3B8;
extern f64 D_801CF3C0;
extern f32 D_801CF3C8;
extern f32 D_801CF3CC;
extern f32 D_801CF3D0;
extern f32 D_801CF3D4;
extern f64 D_801CF3D8;
extern f64 D_801CF3E0;
extern u8 D_801CF3F0;
extern u8 D_801CF3F4[];
extern u8 D_801CF41C[];
extern u8 D_801CF444;
extern u8 D_801CF460;
extern u8 D_801CF480;
extern u8 D_801CF49C;
extern u8 D_801CF4A4;
extern u8 D_801CF4C4;
extern u8 D_801CF4E0;
extern u8 D_801CF4FC;
extern u8 D_801CF518;
extern u8 D_801CF534;
extern u8 D_801CF550;
extern u8 D_801CF56C;
extern u8 D_801CF588;
extern u8 D_801CF58C[];
extern u8 D_801CF5B4[];
extern u8 D_801CF5DC[];
extern u8 D_801CF5EC[];
extern f32 D_801CF614;
extern u8 D_801CF620;
extern u8 D_801CF624[];
extern u8 D_801CF64C[];
extern u8 D_801CF674;
extern u8 D_801CF684[];
extern u8 D_801CF724;
extern u8 D_801CF738[];
extern u8 D_801CF760[];
extern u8 D_801CF788;
extern u8 D_801CF79C[];
extern u8 D_801CF7C4;
extern u8 D_801CF7E0;
extern u8 D_801CF7F8;
extern u8 D_801CF810;
extern u8 D_801CF824;
extern u8 D_801CF840;
extern u8 D_801CF85C;
extern u8 D_801CF878;
extern u8 D_801CF894;
extern u8 D_801CF8B4;
extern u8 D_801CF8D0;
extern u8 D_801CF8F4;
extern u8 D_801CF910;
extern u8 D_801CF978;
extern u8 D_801CF9A0;
extern u8 D_801CF9BC;
extern u8 D_801CF9D4;
extern u8 D_801CF9F4;
extern u8 D_801CFA28;
extern u8 D_801CFA4C;
extern u8 D_801CFA6C;
extern u8 D_801CFA70;
extern u8 D_801CFA74;
extern u8 D_801CFA78;
extern u8 D_801CFA7C;
extern u8 D_801CFAAC[];
extern u8 D_801CFB80;
extern u8 D_801CFC4C;
extern f32 D_801CFCDC;
extern f32 D_801CFCE0;
extern f32 D_801CFCE4;
extern f64 D_801CFCE8;
extern struct T_D_801CFCF0_file024_p0 *D_801CFCF0;
extern struct T_func_80107830_a0 *D_801CFCF4;
extern struct T_func_801451C0_a0 *D_801CFD00;
extern struct T_func_801451C0_a0 *D_801CFD04;
extern struct T_D_801CFD08_file024_p0 *D_801CFD08;
extern u16 D_801CFD0E;
extern struct T_D_801CFD10_file024_elem D_801CFD10[];
extern struct T_D_801CFD40_file024_elem D_801CFD40[];
extern struct T_func_801C659C_ret_801C6948 *D_801CFD78[];
extern struct T_D_80089378 *D_801CFD80[];
extern struct T_D_80089378 *D_801CFD88[];
extern struct T_D_80089378 *D_801CFD90[];
extern struct T_D_80089378 *D_801CFD98[];
extern struct T_D_801CFD90_file024_p0 *D_801CFDA0;
extern u16 D_801CFDAC[];
extern s32 D_801CFDB8[];
extern u8 D_801CFDC0;
extern f32 D_801CFDD0;
extern void *D_801CFDD4;
extern u8 D_801CFDE0;
extern u8 D_801CFDE1;
extern u8 D_801CFDE2;
extern s16 D_801CFDE4;
extern u8 D_801CFDF0;
extern u8 D_801CFDF1;
extern u8 D_801CFDF2;
extern u8 D_801CFDF3;
extern u8 D_801CFDF4;
extern u16 D_801CFE00;
extern u8 D_801CFE02;
extern u8 D_801CFE03;
extern f32 D_801CFE04;

#endif
