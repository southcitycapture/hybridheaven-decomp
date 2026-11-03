#ifndef TYPES_FILE035_H
#define TYPES_FILE035_H

/* Recovered types for file035 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/shared.h"

/* D_801E841C; 2 functions */
typedef struct T_D_801E841C_file035 { /* size >= 0x4 */
    /* 0x000 */ s32 unk0; /* 4 uses; also s8@0x3 */
} T_D_801E841C_file035;

/* D_801E8460; 1 functions */
typedef struct T_D_801E8460_file035 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E8460_file035;

/* D_801E84E8; 1 functions */
typedef struct T_D_801E84E8_file035 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E84E8_file035;

/* D_801E84F8; 1 functions */
typedef struct T_D_801E84F8_file035 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E84F8_file035;

/* D_8038DF70; 1 functions */
typedef struct T_D_8038DF70_file035 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x8];
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8038DF70_file035;

/* func_801DAAF0; 12 functions */
typedef struct T_func_801DAAF0_file035 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 49 uses */
} T_func_801DAAF0_file035;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file035 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file035;

/* func_8038D830; 2 functions */
typedef struct T_func_8038D830_file035 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x20];
    /* 0x020 */ struct T_func_80107830_a0 *unk20; /* 3 uses */
    /* 0x024 */ struct T_func_8038D830_file035_p24_p0 **unk24; /* 8 uses */
} T_func_8038D830_file035;

/* pointed to by T_func_8038D830_file035_p24.0x0; 1 functions */
typedef struct T_func_8038D830_file035_p24_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8038D830_file035_p24_p0_p2C *unk2C; /* 8 uses */
} T_func_8038D830_file035_p24_p0;

/* pointed to by T_func_8038D830_file035_p24_p0.0x2C; 1 functions */
typedef struct T_func_8038D830_file035_p24_p0_p2C { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 1 use */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 1 use */
    /* 0x024 */ u8 pad24[0xC];
    /* 0x030 */ void *unk30; /* 1 use */
} T_func_8038D830_file035_p24_p0_p2C;

/* func_8038D8B8; 2 functions */
typedef struct T_func_8038D8B8_file035 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_func_80107830_a0 *unk14; /* 19 uses */
} T_func_8038D8B8_file035;

extern s32 D_801D8D60;
extern T_D_801E0A48_file026 D_801E0A48;
extern s32 D_801E8414;
extern s32 D_801E8418;
extern T_D_801E841C_file035 D_801E841C;
extern s32 D_801E8420;
extern s32 D_801E8424;
extern s32 D_801E8428;
extern T_D_801E8460_file035 D_801E8460;
extern T_D_801E84E8_file035 D_801E84E8;
extern T_D_801E84F8_file035 D_801E84F8;
extern s32 D_801E8580;
extern s32 D_801E8584;
extern s32 D_801E85F4;
extern s32 D_801E8718;
extern s32 D_801E87B0;
extern f32 D_801E88D0;
extern f32 D_801E88D4;
extern f32 D_801E88D8;
extern f32 D_801E88DC;
extern f32 D_801E88E0;
extern f32 D_801E88E4;
extern f32 D_801E88E8;
extern f32 D_801E88EC;
extern f32 D_801E88F0;
extern f32 D_801E88F4;
extern f32 D_801E88F8;
extern f32 D_801E88FC;
extern f32 D_801E8900;
extern f32 D_801E8904;
extern f32 D_801E8908;
extern f32 D_801E890C;
extern f32 D_801E8910;
extern f32 D_801E8914;
extern f32 D_801E8918;
extern f32 D_801E891C;
extern f32 D_801E8920;
extern f32 D_801E8924;
extern f32 D_801E8928;
extern f32 D_801E892C;
extern f32 D_801E8930;
extern f32 D_801E8934;
extern f32 D_801E8938;
extern f32 D_801E893C;
extern f32 D_801E8940;
extern f32 D_801E8944;
extern f32 D_801E8948;
extern f32 D_801E894C;
extern f32 D_801E8950;
extern f32 D_801E8954;
extern f32 D_801E8958;
extern f32 D_801E895C;
extern f32 D_801E8960;
extern f32 D_801E8964;
extern f32 D_801E8968;
extern f32 D_801E896C;
extern f32 D_801E8970;
extern f32 D_801E8974;
extern f32 D_801E8978;
extern f32 D_801E897C;
extern f32 D_801E8980;
extern f32 D_801E8984;
extern f32 D_801E8988;
extern f32 D_801E898C;
extern f32 D_801E8990;
extern f32 D_801E8994;
extern f32 D_801E8998;
extern f32 D_801E899C;
extern f32 D_801E89A0;
extern f32 D_801E89A4;
extern f32 D_801E89A8;
extern f32 D_801E89AC;
extern f32 D_801E89B0;
extern f32 D_801E89B4;
extern f32 D_801E89B8;
extern f32 D_801E89BC;
extern f32 D_801E89C0;
extern f32 D_801E89C4;
extern f32 D_801E89C8;
extern f32 D_801E89CC;
extern f32 D_801E89D0;
extern f32 D_801E89D4;
extern f32 D_801E89D8;
extern f32 D_801E89DC;
extern f32 D_801E89E0;
extern f32 D_801E89E4;
extern f32 D_801E89E8;
extern f32 D_801E89EC;
extern f32 D_801E89F0;
extern f32 D_801E89F4;
extern f32 D_801E89F8;
extern f32 D_801E89FC;
extern f32 D_801E8A00;
extern f32 D_801E8A04;
extern f32 D_801E8A08;
extern f32 D_801E8A0C;
extern f32 D_801E8A10;
extern f32 D_801E8A14;
extern f32 D_801E8A18;
extern f32 D_801E8A1C;
extern f32 D_801E8A20;
extern f32 D_801E8A24;
extern f32 D_801E8A28;
extern f32 D_801E8A2C;
extern f32 D_801E8A30;
extern f32 D_801E8A34;
extern f32 D_801E8A38;
extern f32 D_801E8A3C;
extern f32 D_801E8A40;
extern f32 D_801E8A44;
extern f32 D_801E8A48;
extern f32 D_801E8A4C;
extern f32 D_801E8A50;
extern f32 D_801E8A54;
extern f32 D_801E8A58;
extern f32 D_801E8A5C;
extern f32 D_801E8A60;
extern f32 D_801E8A64;
extern f32 D_801E8A68;
extern f32 D_801E8A6C;
extern f32 D_801E8A70;
extern f32 D_801E8A74;
extern f32 D_801E8A78;
extern f32 D_801E8A7C;
extern f32 D_801E8A80;
extern f32 D_801E8A84;
extern f32 D_801E8A88;
extern f32 D_801E8A8C;
extern f32 D_801E8A90;
extern f32 D_801E8A94;
extern f32 D_801E8A98;
extern f32 D_801E8A9C;
extern f32 D_801E8AA0;
extern f32 D_801E8AA4;
extern f32 D_801E8AA8;
extern f32 D_801E8AAC;
extern f32 D_801E8AB0;
extern f32 D_801E8AB4;
extern f32 D_801E8AB8;
extern f32 D_801E8ABC;
extern f32 D_801E8AC0;
extern f32 D_801E8AC4;
extern f32 D_801E8AC8;
extern f32 D_801E8ACC;
extern f32 D_801E8AD0;
extern f32 D_801E8AD4;
extern f32 D_801E8AD8;
extern f32 D_801E8ADC;
extern f32 D_801E8AE0;
extern f32 D_801E8AE4;
extern f32 D_801E8AE8;
extern f32 D_801E8AEC;
extern f32 D_801E8AF0;
extern f32 D_801E8AF4;
extern f32 D_801E8AF8;
extern f32 D_801E8AFC;
extern f32 D_801E8B00;
extern f32 D_801E8B04;
extern f32 D_801E8B08;
extern f32 D_801E8B0C;
extern f32 D_801E8B10;
extern f32 D_801E8B14;
extern f32 D_801E8B18;
extern f32 D_801E8B1C;
extern f32 D_801E8B20;
extern f32 D_801E8B24;
extern f32 D_801E8B28;
extern f32 D_801E8B2C;
extern f32 D_801E8B30;
extern f32 D_801E8B34;
extern f32 D_801E8B38;
extern f32 D_801E8B3C;
extern f32 D_801E8B40;
extern f32 D_801E8B44;
extern f32 D_801E8B48;
extern f32 D_801E8B4C;
extern f32 D_801E8B50;
extern f32 D_801E8B54;
extern f32 D_801E8B58;
extern f32 D_801E8B5C;
extern f32 D_801E8B60;
extern f32 D_801E8B64;
extern f32 D_801E8B68;
extern f32 D_801E8B6C;
extern f32 D_801E8B70;
extern f32 D_801E8B74;
extern f32 D_801E8B78;
extern f32 D_801E8B7C;
extern f32 D_801E8B80;
extern f32 D_801E8B84;
extern f32 D_801E8B88;
extern f32 D_801E8B8C;
extern f32 D_801E8B90;
extern f32 D_801E8B94;
extern f32 D_801E8B98;
extern f32 D_801E8B9C;
extern f32 D_801E8BA0;
extern f32 D_801E8BA4;
extern f32 D_801E8BA8;
extern f32 D_801E8BAC;
extern f32 D_801E8BB0;
extern f32 D_801E8BB4;
extern f32 D_801E8BB8;
extern f32 D_801E8BBC;
extern f32 D_801E8BC0;
extern f32 D_801E8BC4;
extern f32 D_801E8BC8;
extern f32 D_801E8BCC;
extern f32 D_801E8BD0;
extern f32 D_801E8BD4;
extern f32 D_801E8BD8;
extern f32 D_801E8BDC;
extern f32 D_801E8BE0;
extern f32 D_801E8BE4;
extern f32 D_801E8BE8;
extern f32 D_801E8BEC;
extern f32 D_801E8BF0;
extern f32 D_801E8BF4;
extern f32 D_801E8BF8;
extern f32 D_801E8BFC;
extern f32 D_801E8C00;
extern f32 D_801E8C04;
extern f32 D_801E8C08;
extern f32 D_801E8C0C;
extern f32 D_801E8C10;
extern f32 D_801E8C14;
extern f32 D_801E8C18;
extern f32 D_801E8C1C;
extern f32 D_801E8C20;
extern f32 D_801E8C24;
extern f32 D_801E8C28;
extern f32 D_801E8C2C;
extern f32 D_801E8C30;
extern f32 D_801E8C34;
extern f32 D_801E8C38;
extern f32 D_801E8C3C;
extern f32 D_801E8C40;
extern f32 D_801E8C44;
extern f32 D_801E8C48;
extern f32 D_801E8C4C;
extern f32 D_801E8C50;
extern f32 D_801E8C54;
extern f32 D_801E8C58;
extern f32 D_801E8C5C;
extern f32 D_801E8C60;
extern f32 D_801E8C64;
extern f32 D_801E8C68;
extern f32 D_801E8C6C;
extern f32 D_801E8C70;
extern f32 D_801E8C74;
extern f32 D_801E8C78;
extern f32 D_801E8C7C;
extern f32 D_801E8C80;
extern f32 D_801E8C84;
extern f32 D_801E8C88;
extern f32 D_801E8C8C;
extern f32 D_801E8C90;
extern f32 D_801E8C94;
extern f32 D_801E8C98;
extern f32 D_801E8C9C;
extern f32 D_801E8CA0;
extern f32 D_801E8CA4;
extern f32 D_801E8CA8;
extern f32 D_801E8CAC;
extern f32 D_801E8CB0;
extern f64 D_801E8CB8;
extern f32 D_801E8CC0;
extern f32 D_801E8CC4;
extern f32 D_801E8CC8;
extern f32 D_801E8CCC;
extern f64 D_801E8CD0;
extern f32 D_801E8CD8;
extern f32 D_801E8CDC;
extern f32 D_801E8CE0;
extern f32 D_801E8CE4;
extern f32 D_801E8CE8;
extern f64 D_801E8CF0;
extern f32 D_801E8CF8;
extern f32 D_801E8CFC;
extern f32 D_801E8D00;
extern f32 D_801E8D04;
extern f32 D_801E8D08;
extern f64 D_801E8D10;
extern f32 D_801E8D18;
extern f32 D_801E8D1C;
extern f32 D_801E8D20;
extern f32 D_801E8D24;
extern f32 D_801E8D28;
extern f32 D_801E8D2C;
extern f32 D_801E8D30;
extern f32 D_801E8D34;
extern f32 D_801E8D38;
extern f32 D_801E8D3C;
extern f32 D_801E8D40;
extern f32 D_801E8D44;
extern f32 D_801E8D48;
extern f32 D_801E8D4C;
extern f32 D_801E8D50;
extern f32 D_801E8D54;
extern T_D_801E0A48_file026 D_8038DD90;
extern T_D_801E0A48_file026 D_8038DDC0;
extern T_D_801E0A48_file026 D_8038DE20;
extern T_D_8038DF70_file035 D_8038DF70;

#endif
