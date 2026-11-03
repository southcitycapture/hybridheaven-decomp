#ifndef TYPES_FILE013_H
#define TYPES_FILE013_H

/* Recovered types for file013 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"

/* pointed to by T_D_80171EEC.0x0; 1 functions */
typedef struct T_D_80171EEC_p0 { /* size >= 0x8 */
    /* 0x000 */ u16 *unk0; /* 1 use */
    /* 0x004 */ struct T_D_80171EEC_p0_p4 *unk4; /* 1 use */
} T_D_80171EEC_p0;

/* pointed to by T_D_80171EEC_p0.0x4; 1 functions */
typedef struct T_D_80171EEC_p0_p4 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ s32 unk24; /* 1 use */
} T_D_80171EEC_p0_p4;

/* D_80245DD4; 1 functions */
typedef struct T_D_80245DD4_file013 { /* size >= 0xC */
    /* 0x000 */ s32 x; /* 1 use */
    /* 0x004 */ s32 y; /* 1 use */
    /* 0x008 */ s32 z; /* 1 use */
} T_D_80245DD4_file013;

/* D_80245DE0; 1 functions */
typedef struct T_D_80245DE0_file013 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80245DE0_file013;

/* D_80245DEC; 1 functions */
typedef struct T_D_80245DEC_file013 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80245DEC_file013;

/* D_80245DF8; 1 functions */
typedef struct T_D_80245DF8_file013 { /* size >= 0xC */
    /* 0x000 */ s32 x; /* 1 use */
    /* 0x004 */ s32 y; /* 1 use */
    /* 0x008 */ s32 z; /* 1 use */
} T_D_80245DF8_file013;

/* D_80245E04; 1 functions */
typedef struct T_D_80245E04_file013 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80245E04_file013;

/* D_80246C64; 4 functions */
typedef struct T_D_80246C64_file013 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 4 uses; also s16@0x4 */
    /* 0x008 */ s32 unk8; /* 4 uses */
} T_D_80246C64_file013;

/* D_80246C70; 1 functions */
typedef struct T_D_80246C70_file013 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80246C70_file013;

/* D_80246C7C; 2 functions */
typedef struct T_D_80246C7C_file013 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80246C7C_file013;

/* D_80246C88; 1 functions */
typedef struct T_D_80246C88_file013 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80246C88_file013;

/* D_80246C94; 1 functions */
typedef struct T_D_80246C94_file013 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80246C94_file013;

/* D_80246CA0; 1 functions */
typedef struct T_D_80246CA0_file013 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80246CA0_file013;

/* parameter file013:func_80242F60:0, file013:func_80242F70:0; 2 functions */
typedef struct T_func_80242F60_a0 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x6];
    /* 0x006 */ u16 unk6; /* 4 uses */
} T_func_80242F60_a0;

/* parameter file013:func_80242F80:0, file013:func_80242FD0:0; 6 functions */
typedef struct T_func_80242F80_a0 { /* size >= 0xA4 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_80242F80_a0_p24 *unk24; /* 17 uses */
    /* 0x028 */ u8 pad28[0x34];
    /* 0x05C */ struct T_func_8012CE9C_a1 *unk5C; /* 4 uses */
    /* 0x060 */ u8 pad60[0x10];
    /* 0x070 */ u16 unk70; /* 1 use */
    /* 0x072 */ u8 pad72[0x1E];
    /* 0x090 */ u8 unk90; /* 3 uses */
    /* 0x091 */ u8 pad91[0x1];
    /* 0x092 */ u8 unk92; /* 4 uses */
    /* 0x093 */ u8 pad93[0x1];
    /* 0x094 */ u8 unk94; /* 6 uses */
    /* 0x095 */ u8 unk95; /* 1 use */
    /* 0x096 */ u8 unk96; /* 1 use */
    /* 0x097 */ u8 pad97[0x1];
    /* 0x098 */ s16 unk98; /* 2 uses */
    /* 0x09A */ u8 pad9A[0x6];
    /* 0x0A0 */ s16 unkA0; /* 6 uses */
    /* 0x0A2 */ u8 padA2[0x2];
} T_func_80242F80_a0;

/* pointed to by T_func_80242F80_a0.0x24; 4 functions */
typedef struct T_func_80242F80_a0_p24 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_80242F80_a0_p24_p2C *unk2C; /* 16 uses */
} T_func_80242F80_a0_p24;

/* pointed to by T_func_80242F80_a0_p24.0x2C; 4 functions */
typedef struct T_func_80242F80_a0_p24_p2C { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 10 uses */
    /* 0x008 */ f32 unk8; /* 5 uses */
    /* 0x00C */ f32 unkC; /* 9 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 2 uses */
} T_func_80242F80_a0_p24_p2C;

extern T_D_80162DD0 D_80245D68;
extern T_D_80162DD0 D_80245D7C;
extern T_D_80162DD0 D_80245DA4;
extern T_D_80245DD4_file013 D_80245DD4;
extern T_D_80245DE0_file013 D_80245DE0;
extern T_D_80245DEC_file013 D_80245DEC;
extern T_D_80245DF8_file013 D_80245DF8;
extern T_D_80245E04_file013 D_80245E04;
extern T_D_80246C64_file013 D_80246C64;
extern T_D_80246C70_file013 D_80246C70;
extern T_D_80246C7C_file013 D_80246C7C;
extern T_D_80246C88_file013 D_80246C88;
extern T_D_80246C94_file013 D_80246C94;
extern T_D_80246CA0_file013 D_80246CA0;
extern f32 D_80246CA8;
extern f32 D_80249A90;
extern f64 D_80249A98;
extern f64 D_80249AA0;
extern f32 D_80249AA8;
extern f32 D_80249AAC;
extern f32 D_80249AB0;
extern f32 D_80249AB4;
extern f32 D_80249AB8;
extern f32 D_80249ABC;
extern f32 D_80249AC0;
extern f32 D_80249AC4;
extern f32 D_80249AC8;
extern f32 D_80249ACC;
extern f32 D_80249AD0;
extern f32 D_80249AD4;
extern f32 D_80249AD8;
extern f32 D_80249ADC;
extern f32 D_80249AE0;
extern f32 D_80249AE4;
extern f32 D_80249AE8;
extern f64 D_80249AF0;
extern f64 D_80249AF8;
extern f64 D_80249B00;
extern f64 D_80249B08;
extern f32 D_80249B10;
extern f32 D_80249B14;
extern f32 D_80249B18;
extern f64 D_80249B20;
extern f32 D_80249B30;
extern f32 D_80249B40;
extern f64 D_80249B48;
extern f64 D_80249B50;
extern f64 D_80249B58;
extern f32 D_80249B60;
extern f32 D_80249B64;

#endif
