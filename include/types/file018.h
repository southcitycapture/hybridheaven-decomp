#ifndef TYPES_FILE018_H
#define TYPES_FILE018_H

/* Recovered types for file018 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"

/* pointed to by T_D_801BCC25.0x6B; 1 functions */
typedef struct T_D_801BCC25_p6B { /* size >= 0x58 */
    /* 0x000 */ u8 pad0[0x54];
    /* 0x054 */ s32 unk54; /* 1 use */
} T_D_801BCC25_p6B;

/* pointed to by T_D_801BCC25.0xCF; 2 functions */
typedef struct T_D_801BCC25_pCF { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0x92];
    /* 0x092 */ s16 unk92; /* 2 uses */
} T_D_801BCC25_pCF;

/* D_8024F6A0; 1 functions */
typedef struct T_D_8024F6A0_file018 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8024F6A0_file018;

/* D_8024F740; 1 functions */
typedef struct T_D_8024F740_file018 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8024F740_file018;

/* D_8024F754; 1 functions */
typedef struct T_D_8024F754_file018 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8024F754_file018;

/* D_8024F768; 1 functions */
typedef struct T_D_8024F768_file018 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8024F768_file018;

/* D_80258D80; 2 functions */
typedef struct T_D_80258D80_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80258D80_file018;

/* D_80258D8C; 2 functions */
typedef struct T_D_80258D8C_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80258D8C_file018;

/* D_80258D98; 2 functions */
typedef struct T_D_80258D98_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80258D98_file018;

/* D_80258DA4; 8 functions */
typedef struct T_D_80258DA4_file018 { /* size >= 0xC */
    /* 0x000 */ s32 x; /* 8 uses */
    /* 0x004 */ s32 y; /* 8 uses */
    /* 0x008 */ s32 z; /* 8 uses */
} T_D_80258DA4_file018;

/* D_80258DB0; 2 functions */
typedef struct T_D_80258DB0_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80258DB0_file018;

/* D_80258DC8; 2 functions */
typedef struct T_D_80258DC8_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80258DC8_file018;

/* D_80258DD4; 1 functions */
typedef struct T_D_80258DD4_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80258DD4_file018;

/* D_80258DE0; 1 functions */
typedef struct T_D_80258DE0_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80258DE0_file018;

/* D_80258DEC; 1 functions */
typedef struct T_D_80258DEC_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80258DEC_file018;

/* D_80258EA4; 1 functions */
typedef struct T_D_80258EA4_file018 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80258EA4_file018;

/* D_80258EB8; 1 functions */
typedef struct T_D_80258EB8_file018 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80258EB8_file018;

/* D_80258F00; 1 functions */
typedef struct T_D_80258F00_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80258F00_file018;

/* D_80258F0C; 4 functions */
typedef struct T_D_80258F0C_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 4 uses */
    /* 0x008 */ s32 unk8; /* 4 uses */
} T_D_80258F0C_file018;

/* D_80258F18; 5 functions */
typedef struct T_D_80258F18_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 5 uses */
    /* 0x004 */ s32 unk4; /* 5 uses */
    /* 0x008 */ s32 unk8; /* 5 uses */
} T_D_80258F18_file018;

/* D_80258F24; 1 functions */
typedef struct T_D_80258F24_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80258F24_file018;

/* D_80258F30; 1 functions */
typedef struct T_D_80258F30_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80258F30_file018;

/* D_80258F3C; 12 functions */
typedef struct T_D_80258F3C_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 12 uses */
    /* 0x004 */ s32 unk4; /* 12 uses */
    /* 0x008 */ s32 unk8; /* 12 uses */
} T_D_80258F3C_file018;

/* D_80258F48; 5 functions */
typedef struct T_D_80258F48_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 5 uses */
    /* 0x004 */ s32 unk4; /* 5 uses */
    /* 0x008 */ s32 unk8; /* 5 uses */
} T_D_80258F48_file018;

/* D_80258F54; 1 functions */
typedef struct T_D_80258F54_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80258F54_file018;

/* D_80258F60; 1 functions */
typedef struct T_D_80258F60_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80258F60_file018;

/* D_80258F6C; 1 functions */
typedef struct T_D_80258F6C_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80258F6C_file018;

/* D_80258F78; 1 functions */
typedef struct T_D_80258F78_file018 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80258F78_file018;

/* anonymous; 1 functions */
typedef struct T_D_8025C728_file018_elem { /* size >= 0x3D */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x13];
    /* 0x014 */ u8 unk14; /* 1 use */
    /* 0x015 */ u8 pad15[0x13];
    /* 0x028 */ u8 unk28; /* 1 use */
    /* 0x029 */ u8 pad29[0x13];
    /* 0x03C */ u8 unk3C; /* 1 use */
} T_D_8025C728_file018_elem;

/* D_8025C728; 12 functions */
typedef struct T_D_8025C728_file018_elem_2 { /* size 0x14 */
    /* 0x000 */ u8 unk0; /* 18 uses */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ s32 unk8; /* 3 uses */
    /* 0x00C */ s32 unkC; /* 3 uses */
    /* 0x010 */ s32 unk10; /* 3 uses */
} T_D_8025C728_file018_elem_2;

/* parameter file018:func_80248D10:0, file018:func_802492E8:0; 3 functions */
typedef struct T_func_80248D10_a0 { /* size >= 0x9C */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 3 uses */
    /* 0x030 */ u8 pad30[0x5];
    /* 0x035 */ u8 unk35; /* 2 uses */
    /* 0x036 */ u8 pad36[0xA];
    /* 0x040 */ f32 unk40; /* 4 uses */
    /* 0x044 */ f32 unk44; /* 1 use */
    /* 0x048 */ f32 unk48; /* 4 uses */
    /* 0x04C */ u8 pad4C[0x44];
    /* 0x090 */ s16 unk90; /* 4 uses */
    /* 0x092 */ s16 unk92; /* 3 uses */
    /* 0x094 */ s16 unk94; /* 1 use */
    /* 0x096 */ u8 pad96[0x2];
    /* 0x098 */ s16 unk98; /* 1 use */
    /* 0x09A */ u8 pad9A[0x2];
} T_func_80248D10_a0;

/* parameter file018:func_80248D34:0, file018:func_8024951C:0; 3 functions */
typedef struct T_func_80248D34_a0 { /* size >= 0x9C */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ s32 unk2C; /* 2 uses */
    /* 0x030 */ u8 pad30[0x14];
    /* 0x044 */ f32 unk44; /* 2 uses */
    /* 0x048 */ u8 pad48[0x48];
    /* 0x090 */ s16 unk90; /* 1 use */
    /* 0x092 */ s16 unk92; /* 8 uses */
    /* 0x094 */ s16 unk94; /* 3 uses */
    /* 0x096 */ u8 pad96[0x2];
    /* 0x098 */ u16 unk98; /* 2 uses */
    /* 0x09A */ s16 unk9A; /* 2 uses */
} T_func_80248D34_a0;

/* parameter file018:func_80248E34:0, file018:func_8024CA4C:0; 2 functions */
typedef struct T_func_80248E34_a0 { /* size >= 0x98 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_80248E34_a0_p24 *unk24; /* 3 uses */
    /* 0x028 */ u8 pad28[0x6A];
    /* 0x092 */ s16 unk92; /* 7 uses */
    /* 0x094 */ s16 unk94; /* 2 uses */
    /* 0x096 */ s16 unk96; /* 5 uses */
} T_func_80248E34_a0;

/* pointed to by T_func_80248E34_a0.0x24; 1 functions */
typedef struct T_func_80248E34_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_80248E34_a0_p24_p30 *unk30; /* 3 uses */
} T_func_80248E34_a0_p24;

/* pointed to by T_func_80248E34_a0_p24.0x30; 1 functions */
typedef struct T_func_80248E34_a0_p24_p30 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ u8 pad8[0x4];
    /* 0x00C */ f32 unkC; /* 2 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 2 uses */
} T_func_80248E34_a0_p24_p30;

/* parameter file018:func_80248FA0:0, file018:func_80249704:0; 3 functions */
typedef struct T_func_80248FA0_a0 { /* size >= 0x9C */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_80248FA0_a0_p24 *unk24; /* 5 uses */
    /* 0x028 */ u8 pad28[0x68];
    /* 0x090 */ s16 unk90; /* 2 uses */
    /* 0x092 */ s16 unk92; /* 10 uses */
    /* 0x094 */ s16 unk94; /* 4 uses */
    /* 0x096 */ u8 pad96[0x2];
    /* 0x098 */ u16 unk98; /* 2 uses */
    /* 0x09A */ s16 unk9A; /* 1 use */
} T_func_80248FA0_a0;

/* pointed to by T_func_80248FA0_a0.0x24; 2 functions */
typedef struct T_func_80248FA0_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_80248FA0_a0_p24_p30 *unk30; /* 3 uses */
} T_func_80248FA0_a0_p24;

/* pointed to by T_func_80248FA0_a0_p24.0x30; 2 functions */
typedef struct T_func_80248FA0_a0_p24_p30 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 1 use */
} T_func_80248FA0_a0_p24_p30;

/* parameter file018:func_802490C4:0, file018:func_80249A58:0; 3 functions */
typedef struct T_func_802490C4_a0 { /* size >= 0x9A */
    /* 0x000 */ u8 pad0[0x90];
    /* 0x090 */ s16 unk90; /* 2 uses */
    /* 0x092 */ s16 unk92; /* 2 uses */
    /* 0x094 */ u8 pad94[0x2];
    /* 0x096 */ s16 unk96; /* 2 uses */
    /* 0x098 */ u16 unk98; /* 2 uses */
} T_func_802490C4_a0;

/* parameter file018:func_802491C4:0, file018:func_8024A168:0; 3 functions */
typedef struct T_func_802491C4_a0 { /* size >= 0x9C */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_802491C4_a0_p24 *mid; /* 8 uses */
    /* 0x028 */ u8 pad28[0x68];
    /* 0x090 */ s16 unk90; /* 2 uses */
    /* 0x092 */ s16 unk92; /* 12 uses */
    /* 0x094 */ s16 unk94; /* 4 uses */
    /* 0x096 */ s16 unk96; /* 10 uses */
    /* 0x098 */ u16 kind; /* 2 uses */
    /* 0x09A */ u8 pad9A[0x2];
} T_func_802491C4_a0;

/* pointed to by T_func_802491C4_a0.0x24; 3 functions */
typedef struct T_func_802491C4_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_802491C4_a0_p24_p30 *node; /* 6 uses */
} T_func_802491C4_a0_p24;

/* pointed to by T_func_802491C4_a0_p24.0x30; 3 functions */
typedef struct T_func_802491C4_a0_p24_p30 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 x; /* 2 uses */
    /* 0x008 */ f32 y; /* 2 uses */
    /* 0x00C */ s32 z; /* 2 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 4 uses */
} T_func_802491C4_a0_p24_p30;

extern T_D_8024F6A0_file018 D_8024F6A0;
extern T_D_80162DD0 D_8024F718;
extern T_D_80162DD0 D_8024F72C;
extern T_D_8024F740_file018 D_8024F740;
extern T_D_8024F754_file018 D_8024F754;
extern T_D_8024F768_file018 D_8024F768;
extern T_D_80258D80_file018 D_80258D80;
extern T_D_80258D8C_file018 D_80258D8C;
extern T_D_80258D98_file018 D_80258D98;
extern T_D_80258DA4_file018 D_80258DA4;
extern T_D_80258DB0_file018 D_80258DB0;
extern T_D_80258DC8_file018 D_80258DC8;
extern T_D_80258DD4_file018 D_80258DD4;
extern T_D_80258DE0_file018 D_80258DE0;
extern T_D_80258DEC_file018 D_80258DEC;
extern T_D_80162DD0 D_80258E90;
extern T_D_80258EA4_file018 D_80258EA4;
extern T_D_80258EB8_file018 D_80258EB8;
extern T_D_80162DD0 D_80258ECC;
extern T_D_80258F00_file018 D_80258F00;
extern T_D_80258F0C_file018 D_80258F0C;
extern T_D_80258F18_file018 D_80258F18;
extern T_D_80258F24_file018 D_80258F24;
extern T_D_80258F30_file018 D_80258F30;
extern T_D_80258F3C_file018 D_80258F3C;
extern T_D_80258F48_file018 D_80258F48;
extern T_D_80258F54_file018 D_80258F54;
extern T_D_80258F60_file018 D_80258F60;
extern T_D_80258F6C_file018 D_80258F6C;
extern T_D_80258F78_file018 D_80258F78;
extern s32 D_80258FD8;
extern f32 D_8025BE00;
extern f64 D_8025BE08;
extern f64 D_8025BE10;
extern f32 D_8025BE18;
extern f32 D_8025BE1C;
extern f32 D_8025BE20;
extern f32 D_8025BE24;
extern f64 D_8025BE28;
extern f32 D_8025BE30;
extern f32 D_8025BE34;
extern f64 D_8025BE38;
extern f64 D_8025BE40;
extern f32 D_8025BE48;
extern f64 D_8025BE50;
extern f32 D_8025BE58;
extern f32 D_8025BE5C;
extern f32 D_8025BE60;
extern f32 D_8025BE64;
extern f32 D_8025BE68;
extern f32 D_8025BE6C;
extern f32 D_8025BF58;
extern f32 D_8025BF5C;
extern f32 D_8025BF60;
extern f32 D_8025BF64;
extern f32 D_8025BF68;
extern f32 D_8025BF6C;
extern f32 D_8025BF70;
extern f32 D_8025BF74;
extern f32 D_8025BF78;
extern f32 D_8025BF7C;
extern f32 D_8025BF80;
extern f32 D_8025C57C;
extern f32 D_8025C580;
extern f32 D_8025C584;
extern f32 D_8025C588;
extern f32 D_8025C58C;
extern f32 D_8025C590;
extern f32 D_8025C594;
extern f32 D_8025C598;
extern f32 D_8025C59C;
extern f32 D_8025C5A0;
extern f32 D_8025C5A4;
extern f32 D_8025C5A8;
extern f32 D_8025C5AC;
extern f32 D_8025C5B0;
extern f32 D_8025C5B4;
extern f32 D_8025C5B8;
extern f32 D_8025C5BC;
extern f32 D_8025C5C0;
extern f32 D_8025C5C4;
extern f32 D_8025C5C8;
extern f32 D_8025C5CC;
extern f32 D_8025C5D0;
extern f32 D_8025C5D4;
extern f32 D_8025C5D8;
extern f32 D_8025C5DC;
extern f32 D_8025C5E0;
extern f32 D_8025C5E4;
extern f32 D_8025C5E8;
extern f64 D_8025C5F0;
extern f64 D_8025C5F8;
extern f64 D_8025C600;
extern f64 D_8025C608;
extern f64 D_8025C610;
extern f64 D_8025C618;
extern f32 D_8025C620;
extern f64 D_8025C628;
extern f64 D_8025C630;
extern f32 D_8025C638;
extern f32 D_8025C63C;
extern f32 D_8025C640;
extern f32 D_8025C644;
extern f64 D_8025C648;
extern f64 D_8025C650;
extern f64 D_8025C658;
extern f64 D_8025C660;
extern f64 D_8025C668;
extern f64 D_8025C670;
extern f32 D_8025C678;
extern f64 D_8025C680;
extern f64 D_8025C688;
extern f32 D_8025C690;
extern f32 D_8025C694;
extern f64 D_8025C698;
extern f64 D_8025C6A0;
extern f64 D_8025C6A8;
extern f32 D_8025C6B0;
extern f64 D_8025C6B8;
extern f64 D_8025C6C0;
extern f64 D_8025C6C8;
extern f64 D_8025C6D0;
extern f32 D_8025C6D8;
extern s32 D_8025C6E0;
extern s16 D_8025C6E2;
extern s32 D_8025C6E4;
extern struct T_D_80089378 *D_8025C6E8;
extern struct T_func_80107830_a0 *D_8025C6EC;
extern struct T_func_80107830_a0 *D_8025C6F0;
extern struct T_func_8012C228_a0 *D_8025C6F4;
extern u8 D_8025C6F8;
extern u8 D_8025C6F9;
extern u8 D_8025C6FA;
extern u8 D_8025C6FB;
extern u8 D_8025C6FC;
extern u8 D_8025C6FD;
extern u32 D_8025C700;
extern u8 D_8025C704;
extern u8 D_8025C705;
extern s32 D_8025C708;
extern f32 D_8025C70C;
extern f32 D_8025C710;
extern f32 D_8025C714;
extern f32 D_8025C718;
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;
extern struct T_D_8025C728_file018_elem_2 D_8025C728[];
extern s32 D_8025C7E0;
extern s16 D_8025C7E2;
extern s32 D_8025C7E4;
extern s16 D_8025C7E6;
extern u8 D_8025C7E8;

#endif
