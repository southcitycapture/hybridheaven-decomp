#ifndef TYPES_FILE011_H
#define TYPES_FILE011_H

/* Recovered types for file011 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* anonymous; 1 functions */
typedef struct T_D_801BBBF0_elem_5 { /* size >= 0x6 */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 pad3[0x1];
    /* 0x004 */ s16 unk4; /* 1 use */
} T_D_801BBBF0_elem_5;

/* pointed to by T_D_801BBBF0.0x720; 1 functions */
typedef struct T_D_801BBBF0_p720 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0xB];
    /* 0x00B */ u8 unkB; /* 1 use */
} T_D_801BBBF0_p720;

/* anonymous; 1 functions */
typedef struct T_D_801BC03C_elem { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_801BC03C_elem;

/* D_8023C268; 1 functions */
typedef struct T_D_8023C268_file011 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8023C268_file011;

/* D_8023C290; 1 functions */
typedef struct T_D_8023C290_file011 { /* size >= 0x8 */
    /* 0x000 */ s32 w; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_8023C290_file011;

/* D_8023C29C; 1 functions */
typedef struct T_D_8023C29C_file011 { /* size >= 0x20 */
    /* 0x000 */ s32 w; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_8023C29C_file011;

/* D_8023C2BC; 1 functions */
typedef struct T_D_8023C2BC_file011 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8023C2BC_file011;

/* D_8023C2C8; 1 functions */
typedef struct T_D_8023C2C8_file011 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8023C2C8_file011;

/* D_8023C2D4; 1 functions */
typedef struct T_D_8023C2D4_file011 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8023C2D4_file011;

/* D_8023C90C; 1 functions */
typedef struct T_D_8023C90C_file011 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_8023C90C_file011;

/* D_8023C940; 1 functions */
typedef struct T_D_8023C940_file011_elem { /* size 0xA0 */
    /* 0x000 */ u8 pad0[0x4E];
    /* 0x04E */ u16 unk4E; /* 2 uses */
    /* 0x050 */ u8 pad50[0x50];
} T_D_8023C940_file011_elem;

/* D_8023E300; 1 functions */
typedef struct T_D_8023E300_file011 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8023E300_file011;

/* D_8023E30C; 1 functions */
typedef struct T_D_8023E30C_file011 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_8023E30C_file011;

/* D_8023E314; 1 functions */
typedef struct T_D_8023E314_file011 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_8023E314_file011;

/* D_8023E31C; 1 functions */
typedef struct T_D_8023E31C_file011 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_8023E31C_file011;

/* D_8023E324; 1 functions */
typedef struct T_D_8023E324_file011_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8023E324_file011_elem;

/* D_8023E3EC; 1 functions */
typedef struct T_D_8023E3EC_file011 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8023E3EC_file011;

/* D_8023E4F4; 1 functions */
typedef struct T_D_8023E4F4_file011 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 pad5[0x3];
} T_D_8023E4F4_file011;

/* D_8023E500; 1 functions */
typedef struct T_D_8023E500_file011 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_8023E500_file011;

/* D_8023E508; 1 functions */
typedef struct T_D_8023E508_file011 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_8023E508_file011;

/* D_8023E510; 1 functions */
typedef struct T_D_8023E510_file011 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_8023E510_file011;

/* D_8023E51C; 1 functions */
typedef struct T_D_8023E51C_file011 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u8 unk8; /* 1 use */
    /* 0x009 */ u8 pad9[0x3];
} T_D_8023E51C_file011;

/* D_8023E530; 1 functions */
typedef struct T_D_8023E530_file011 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8023E530_file011;

/* D_802407E0; 3 functions */
typedef struct T_D_802407E0_file011 { /* size >= 0x3 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u8 unk2; /* 1 use */
} T_D_802407E0_file011;

/* D_802407E8; 9 functions */
typedef struct T_D_802407E8_file011_elem { /* size 0xC */
    /* 0x000 */ s16 unk0; /* 8 uses */
    /* 0x002 */ s16 unk2; /* 5 uses */
    /* 0x004 */ u8 *unk4; /* 7 uses */
    /* 0x008 */ u8 unk8; /* 9 uses */
    /* 0x009 */ u8 pad9[0x3];
} T_D_802407E8_file011_elem;

/* D_80240828; 3 functions */
typedef struct T_D_80240828_file011_elem { /* size 0xC */
    /* 0x000 */ s16 unk0; /* 5 uses */
    /* 0x002 */ s16 unk2; /* 3 uses */
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ u8 pad8[0x4];
} T_D_80240828_file011_elem;

/* pointed to by T_D_80240864_file011_p0_elem.0x0; 1 functions */
typedef struct T_D_80240864_file011_p0_elem_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s16 *unk30; /* 1 use */
} T_D_80240864_file011_p0_elem_p0;

/* pointed to by T_D_80240864_file011_p0.0x0; 1 functions */
typedef struct T_D_80240864_file011_p0_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_D_80240864_file011_p0_p0_p30 *unk30; /* 1 use */
} T_D_80240864_file011_p0_p0;

/* pointed to by T_D_80240864_file011_p0_p0.0x30; 1 functions */
typedef struct T_D_80240864_file011_p0_p0_p30 { /* size >= 0x6 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ s16 unk4; /* 1 use */
} T_D_80240864_file011_p0_p0_p30;

/* pointed to by T_D_80240864_file011_p0.0x4; 1 functions */
typedef struct T_D_80240864_file011_p0_p4 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s16 *unk30; /* 1 use */
} T_D_80240864_file011_p0_p4;

/* pointed to by T_D_80240868_file011_p0_elem.0x0; 1 functions */
typedef struct T_D_80240868_file011_p0_elem_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s16 *unk30; /* 1 use */
} T_D_80240868_file011_p0_elem_p0;

/* pointed to by T_D_8024086C_file011_p0_elem.0x0; 2 functions */
typedef struct T_D_8024086C_file011_p0_elem_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_D_8024086C_file011_p0_elem_p0_p30 *unk30; /* 2 uses */
} T_D_8024086C_file011_p0_elem_p0;

/* pointed to by T_D_8024086C_file011_p0_elem_p0.0x30; 2 functions */
typedef struct T_D_8024086C_file011_p0_elem_p0_p30 { /* size >= 0xC */
    /* 0x000 */ s16 unk0; /* 2 uses */
    /* 0x002 */ u8 pad2[0x9];
    /* 0x00B */ u8 unkB; /* 2 uses */
} T_D_8024086C_file011_p0_elem_p0_p30;

/* pointed to by T_D_8024086C_file011_p0.0x0; 1 functions */
typedef struct T_D_8024086C_file011_p0_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_D_8024086C_file011_p0_p0_p30 *unk30; /* 1 use */
} T_D_8024086C_file011_p0_p0;

/* pointed to by T_D_8024086C_file011_p0_p0.0x30; 1 functions */
typedef struct T_D_8024086C_file011_p0_p0_p30 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0xB];
    /* 0x00B */ u8 unkB; /* 1 use */
} T_D_8024086C_file011_p0_p0_p30;

/* pointed to by T_D_8024087C_file011.0x0, T_func_8023448C_ret.0x14; 1 functions */
typedef struct T_D_8024087C_file011_p0 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ struct T_func_80147174_a0 *unk10; /* 1 use */
} T_D_8024087C_file011_p0;

/* D_80240880; 21 functions */
typedef struct T_D_80240880_file011 { /* size >= 0x6C */
    /* 0x000 */ struct T_func_801451C0_a0 *unk0; /* 5 uses */
    /* 0x004 */ struct T_func_801451C0_a0 *unk4; /* 6 uses */
    /* 0x008 */ struct T_func_8037DD6C_a1 *unk8; /* 2 uses */
    /* 0x00C */ u8 *unkC; /* 2 uses */
    /* 0x010 */ s16 unk10; /* 5 uses */
    /* 0x012 */ s16 unk12; /* 3 uses */
    /* 0x014 */ s16 unk14; /* 6 uses */
    /* 0x016 */ s16 unk16; /* 8 uses */
    /* 0x018 */ u8 unk18; /* 4 uses */
    /* 0x019 */ u8 unk19; /* 4 uses */
    /* 0x01A */ u8 unk1A; /* 3 uses */
    /* 0x01B */ u8 unk1B; /* 2 uses */
    /* 0x01C */ u8 unk1C; /* 3 uses */
    /* 0x01D */ u8 unk1D; /* 2 uses */
    /* 0x01E */ u8 unk1E; /* 1 use */
    /* 0x01F */ u8 unk1F; /* 1 use */
    /* 0x020 */ u8 unk20; /* 27 uses */
    /* 0x021 */ u8 unk21; /* 6 uses */
    /* 0x022 */ u8 unk22; /* 6 uses */
    /* 0x023 */ u8 unk23; /* 6 uses */
    /* 0x024 */ void *unk24; /* 2 uses */
    /* 0x028 */ void *unk28; /* 2 uses */
    /* 0x02C */ void *unk2C; /* 4 uses */
    /* 0x030 */ void *unk30; /* 2 uses */
    /* 0x034 */ void *unk34; /* 1 use */
    /* 0x038 */ u8 pad38[0x32];
    /* 0x06A */ u8 unk6A; /* 6 uses */
    /* 0x06B */ u8 unk6B; /* 6 uses */
} T_D_80240880_file011;

/* anonymous; 1 functions */
typedef struct T_D_8024088C_file011_p0_elem { /* size 0x8 */
    /* 0x000 */ struct T_func_8013C8F0_a0_p2D4 *unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x4];
} T_D_8024088C_file011_p0_elem;

/* anonymous; 1 functions */
typedef struct T_D_8038CD70_file011_elem { /* size >= 0x8 */
    /* 0x000 */ u8 ***unk0; /* 2 uses */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 pad5[0x3];
} T_D_8038CD70_file011_elem;

/* pointed to by T_func_8013C8F0_a0.0x2D4, T_D_8024088C_file011_p0_elem.0x0; 1 functions */
typedef struct T_func_8013C8F0_a0_p2D4 { /* size >= 0xB */
    /* 0x000 */ u8 pad0[0xA];
    /* 0x00A */ u8 value; /* 1 use */
} T_func_8013C8F0_a0_p2D4;

/* pointed to by T_func_8013C8F0_a0.0x334; 2 functions */
typedef struct T_func_8013C8F0_a0_p334 { /* size >= 0x83 */
    /* 0x000 */ u8 pad0[0x4C];
    /* 0x04C */ u8 unk4C; /* 1 use */
    /* 0x04D */ u8 pad4D[0x32];
    /* 0x07F */ u8 unk7F; /* 1 use */
    /* 0x080 */ u8 unk80; /* 1 use */
    /* 0x081 */ u8 unk81; /* 1 use */
    /* 0x082 */ u8 unk82; /* 1 use */
} T_func_8013C8F0_a0_p334;

/* parameter file011:func_80223D0C:0, file011:func_80223DD0:2; 2 functions */
typedef struct T_func_80223D0C_a0 { /* size >= 0x10 */
    /* 0x000 */ f32 unk0; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
} T_func_80223D0C_a0;

/* parameter file011:func_80225A68:0, file011:func_80225BF0:0; 5 functions */
typedef struct T_func_80225A68_a0 { /* size >= 0x60 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_80225A68_a0_p24 *unk24; /* 2 uses */
    /* 0x028 */ u8 pad28[0x24];
    /* 0x04C */ u8 unk4C; /* 5 uses */
    /* 0x04D */ u8 pad4D[0x1];
    /* 0x04E */ u8 unk4E; /* 5 uses */
    /* 0x04F */ u8 pad4F[0xD];
    /* 0x05C */ struct T_func_80225A68_a0_p5C *unk5C; /* 3 uses */
} T_func_80225A68_a0;

/* pointed to by T_func_80225A68_a0.0x24; 2 functions */
typedef struct T_func_80225A68_a0_p24 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_802257F4_a0 *unk2C; /* 2 uses */
} T_func_80225A68_a0_p24;

/* pointed to by T_func_80225A68_a0.0x5C; 3 functions */
typedef struct T_func_80225A68_a0_p5C { /* size >= 0x78 */
    /* 0x000 */ u8 pad0[0x50];
    /* 0x050 */ f32 unk50; /* 1 use */
    /* 0x054 */ u8 pad54[0xC];
    /* 0x060 */ f32 unk60; /* 1 use */
    /* 0x064 */ u8 pad64[0x4];
    /* 0x068 */ f32 unk68; /* 2 uses */
    /* 0x06C */ f32 unk6C; /* 1 use */
    /* 0x070 */ u8 pad70[0x4];
    /* 0x074 */ u8 unk74; /* 2 uses */
    /* 0x075 */ u8 pad75[0x3];
} T_func_80225A68_a0_p5C;

/* parameter file011:func_8022F248:0, file011:func_8023011C:1; 3 functions */
typedef struct T_func_8022F248_a0 { /* size >= 0x338 */
    /* 0x000 */ s16 unk0; /* 4 uses */
    /* 0x002 */ s16 unk2; /* 1 use */
    /* 0x004 */ u8 pad4[0x2C];
    /* 0x030 */ u8 unk30; /* 2 uses */
    /* 0x031 */ u8 pad31[0xF];
    /* 0x040 */ s16 unk40; /* 1 use */
    /* 0x042 */ u8 pad42[0x58];
    /* 0x09A */ s16 unk9A; /* 1 use */
    /* 0x09C */ u8 pad9C[0x23C];
    /* 0x2D8 */ u8 unk2D8; /* 1 use */
    /* 0x2D9 */ u8 pad2D9[0x2];
    /* 0x2DB */ u8 unk2DB; /* 3 uses */
    /* 0x2DC */ u8 pad2DC[0x14];
    /* 0x2F0 */ u8 unk2F0; /* 5 uses */
    /* 0x2F1 */ u8 pad2F1[0x7];
    /* 0x2F8 */ u8 unk2F8; /* 5 uses */
    /* 0x2F9 */ u8 pad2F9[0x3B];
    /* 0x334 */ struct T_func_8022F248_a0_p334 *unk334; /* 11 uses */
} T_func_8022F248_a0;

/* pointed to by T_func_8022F248_a0.0x334; 1 functions */
typedef struct T_func_8022F248_a0_p334 { /* size >= 0x66 */
    /* 0x000 */ u8 pad0[0x5B];
    /* 0x05B */ u8 unk5B; /* 1 use */
    /* 0x05C */ u8 unk5C; /* 1 use */
    /* 0x05D */ u8 unk5D; /* 1 use */
    /* 0x05E */ u8 unk5E; /* 1 use */
    /* 0x05F */ u8 unk5F; /* 1 use */
    /* 0x060 */ u8 unk60; /* 1 use */
    /* 0x061 */ u8 unk61; /* 1 use */
    /* 0x062 */ u8 unk62; /* 1 use */
    /* 0x063 */ u8 unk63; /* 1 use */
    /* 0x064 */ u8 unk64; /* 1 use */
    /* 0x065 */ u8 unk65; /* 1 use */
} T_func_8022F248_a0_p334;

/* parameter file011:func_8022F630:0, file011:func_8022F680:1; 2 functions */
typedef struct T_func_8022F630_a0 { /* size >= 0x2C8 */
    /* 0x000 */ u8 pad0[0x18];
    /* 0x018 */ f32 unk18; /* 4 uses */
    /* 0x01C */ u8 pad1C[0x8];
    /* 0x024 */ f32 unk24; /* 4 uses */
    /* 0x028 */ u8 pad28[0x8];
    /* 0x030 */ u8 unk30; /* 2 uses */
    /* 0x031 */ u8 pad31[0x6F];
    /* 0x0A0 */ s16 unkA0; /* 2 uses */
    /* 0x0A2 */ u8 padA2[0x20A];
    /* 0x2AC */ s16 unk2AC; /* 2 uses */
    /* 0x2AE */ s16 unk2AE; /* 2 uses */
    /* 0x2B0 */ s16 unk2B0; /* 2 uses */
    /* 0x2B2 */ s16 unk2B2; /* 2 uses */
    /* 0x2B4 */ s16 unk2B4; /* 2 uses */
    /* 0x2B6 */ s16 unk2B6; /* 2 uses */
    /* 0x2B8 */ s16 unk2B8; /* 1 use */
    /* 0x2BA */ s16 unk2BA; /* 3 uses */
    /* 0x2BC */ s16 unk2BC; /* 3 uses */
    /* 0x2BE */ s16 unk2BE; /* 4 uses */
    /* 0x2C0 */ s16 unk2C0; /* 4 uses */
    /* 0x2C2 */ s16 unk2C2; /* 2 uses */
    /* 0x2C4 */ s16 unk2C4; /* 1 use */
    /* 0x2C6 */ u8 pad2C6[0x2];
} T_func_8022F630_a0;

/* pointed to by T_func_8023448C_a1_elem.0x0, T_D_80240874_file011.0x0; 3 functions */
typedef struct T_func_8023448C_ret { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_D_8024087C_file011_p0 *unk14; /* 2 uses */
    /* 0x018 */ u8 pad18[0x18];
    /* 0x030 */ struct T_func_8023448C_ret_p30 *unk30; /* 4 uses */
} T_func_8023448C_ret;

/* pointed to by T_func_8023448C_ret.0x30; 1 functions */
typedef struct T_func_8023448C_ret_p30 { /* size >= 0x8 */
    /* 0x000 */ s16 x; /* 3 uses */
    /* 0x002 */ s16 y; /* 4 uses */
    /* 0x004 */ s16 w; /* 1 use */
    /* 0x006 */ s16 unk6; /* 1 use */
} T_func_8023448C_ret_p30;

/* parameter file011:func_8023466C:0, file011:func_80235FF8:0; 4 functions */
typedef struct T_func_8023466C_a0 { /* size >= 0xB0 */
    /* 0x000 */ u8 pad0[0x94];
    /* 0x094 */ struct T_func_8023466C_a0_p94 *unk94; /* 2 uses */
    /* 0x098 */ u8 pad98[0xB];
    /* 0x0A3 */ s8 unkA3; /* 3 uses */
    /* 0x0A4 */ u8 padA4[0x1];
    /* 0x0A5 */ s8 unkA5; /* 24 uses */
    /* 0x0A6 */ u8 padA6[0x2];
    /* 0x0A8 */ u8 unkA8; /* 1 use */
    /* 0x0A9 */ u8 padA9[0x3];
    /* 0x0AC */ u16 unkAC; /* 1 use */
    /* 0x0AE */ u8 padAE[0x2];
} T_func_8023466C_a0;

/* pointed to by T_func_8023466C_a0.0x94; 2 functions */
typedef struct T_func_8023466C_a0_p94 { /* size >= 0xE */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ u16 unk4; /* 4 uses */
    /* 0x006 */ u8 pad6[0x6];
    /* 0x00C */ u16 unkC; /* 2 uses */
} T_func_8023466C_a0_p94;

/* pointed to by T_D_8023E3B8_file011.0x0; 45 functions */
typedef struct T_func_80234724_a0 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ u8 padC[0x10];
    /* 0x01C */ s32 unk1C; /* 5 uses */
    /* 0x020 */ u8 pad20[0x4];
    /* 0x024 */ struct T_func_80147148_a0 *unk24; /* 4 uses */
    /* 0x028 */ u8 pad28[0x68];
    /* 0x090 */ struct T_func_80234724_a0_p90 *unk90; /* 1 use */
    /* 0x094 */ struct T_func_80234724_a0_p94 *unk94; /* 12 uses */
    /* 0x098 */ struct T_func_8013C8F0_a0 *unk98; /* 11 uses */
    /* 0x09C */ struct T_func_80234724_a0_p9C *unk9C; /* 2 uses */
    /* 0x0A0 */ s8 unkA0; /* 6 uses */
    /* 0x0A1 */ s8 unkA1; /* 22 uses */
    /* 0x0A2 */ s8 unkA2; /* 65 uses */
    /* 0x0A3 */ s8 unkA3; /* 46 uses */
    /* 0x0A4 */ s8 unkA4; /* 33 uses */
    /* 0x0A5 */ s8 unkA5; /* 61 uses */
    /* 0x0A6 */ s8 unkA6; /* 3 uses */
    /* 0x0A7 */ u8 unkA7; /* 15 uses */
    /* 0x0A8 */ u8 unkA8; /* 5 uses */
    /* 0x0A9 */ u8 unkA9; /* 11 uses */
    /* 0x0AA */ u8 unkAA; /* 7 uses */
    /* 0x0AB */ u8 unkAB; /* 1 use */
    /* 0x0AC */ u16 unkAC; /* 7 uses */
    /* 0x0AE */ u8 padAE[0x2];
    /* 0x0B0 */ u8 *unkB0; /* 5 uses */
} T_func_80234724_a0;

/* pointed to by T_func_80234724_a0.0x90; 1 functions */
typedef struct T_func_80234724_a0_p90 { /* size >= 0x75 */
    /* 0x000 */ u8 pad0[0x74];
    /* 0x074 */ u8 unk74; /* 3 uses */
} T_func_80234724_a0_p90;

/* pointed to by T_func_80234724_a0.0x94; 12 functions */
typedef struct T_func_80234724_a0_p94 { /* size >= 0xE */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 1 use */
    /* 0x004 */ u16 unk4; /* 13 uses */
    /* 0x006 */ s16 unk6; /* 3 uses */
    /* 0x008 */ s16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
    /* 0x00C */ u16 unkC; /* 11 uses */
} T_func_80234724_a0_p94;

/* pointed to by T_func_80234724_a0.0x9C; 2 functions */
typedef struct T_func_80234724_a0_p9C { /* size >= 0x2DC */
    /* 0x000 */ u8 pad0[0x31];
    /* 0x031 */ s8 unk31; /* 3 uses; loaded both signed (lb x2) and unsigned (lbu x1); also u16@0x30 */
    /* 0x032 */ u8 pad32[0x6];
    /* 0x038 */ s32 unk38; /* 1 use */
    /* 0x03C */ u8 pad3C[0x29C];
    /* 0x2D8 */ u8 unk2D8; /* 3 uses */
    /* 0x2D9 */ u8 pad2D9[0x3];
} T_func_80234724_a0_p9C;

/* parameter file011:func_80235B40:0, file011:func_80238484:0; 2 functions */
typedef struct T_func_80235B40_a0 { /* size >= 0xA8 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_80235B40_a0_pC *unkC; /* 2 uses */
    /* 0x010 */ u8 pad10[0x80];
    /* 0x090 */ s32 unk90; /* 1 use */
    /* 0x094 */ struct T_D_801BBC8C *unk94; /* 2 uses */
    /* 0x098 */ s32 unk98; /* 1 use */
    /* 0x09C */ s32 unk9C; /* 1 use */
    /* 0x0A0 */ u8 padA0[0x2];
    /* 0x0A2 */ u8 unkA2; /* 1 use */
    /* 0x0A3 */ u8 padA3[0x1];
    /* 0x0A4 */ s8 unkA4; /* 11 uses */
    /* 0x0A5 */ s8 unkA5; /* 3 uses */
    /* 0x0A6 */ u8 padA6[0x2];
} T_func_80235B40_a0;

/* pointed to by T_func_80235B40_a0.0xC; 1 functions */
typedef struct T_func_80235B40_a0_pC { /* size >= 0x60 */
    /* 0x000 */ u8 pad0[0x5C];
    /* 0x05C */ s32 unk5C; /* 1 use */
} T_func_80235B40_a0_pC;

/* parameter file011:func_8023639C:0, file011:func_8023ADBC:0; 3 functions */
typedef struct T_func_8023639C_a0 { /* size >= 0xA0 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_80147148_a0 *unk24; /* 2 uses */
    /* 0x028 */ u8 pad28[0x6C];
    /* 0x094 */ struct T_func_8023639C_a0_p94 *unk94; /* 2 uses */
    /* 0x098 */ u8 pad98[0x4];
    /* 0x09C */ struct T_func_8023639C_a0_p9C *unk9C; /* 1 use */
} T_func_8023639C_a0;

/* pointed to by T_func_8023639C_a0.0x94; 2 functions */
typedef struct T_func_8023639C_a0_p94 { /* size >= 0x6 */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 1 use */
    /* 0x004 */ u16 unk4; /* 2 uses */
} T_func_8023639C_a0_p94;

/* pointed to by T_func_8023639C_a0.0x9C; 1 functions */
typedef struct T_func_8023639C_a0_p9C { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s32 unk30; /* 1 use */
} T_func_8023639C_a0_p9C;

extern T_D_80162DD0 D_8023C250;
extern u8 D_8023C264;
extern T_D_8023C268_file011 D_8023C268;
extern u8 D_8023C280;
extern T_D_8023C290_file011 D_8023C290;
extern s32 D_8023C298;
extern T_D_8023C29C_file011 D_8023C29C;
extern T_D_8023C2BC_file011 D_8023C2BC;
extern T_D_8023C2C8_file011 D_8023C2C8;
extern T_D_8023C2D4_file011 D_8023C2D4;
extern s32 *D_8023C8D0[];
extern T_D_80162DD0 D_8023C8F8;
extern T_D_8023C90C_file011 D_8023C90C;
extern u8 D_8023C920;
extern T_D_80162DD0 D_8023C924;
extern struct T_D_8023C940_file011_elem D_8023C940[];
extern T_D_80162DD0 D_8023E2E0;
extern T_D_8023E300_file011 D_8023E300;
extern T_D_8023E30C_file011 D_8023E30C;
extern T_D_8023E314_file011 D_8023E314;
extern T_D_8023E31C_file011 D_8023E31C;
extern struct T_D_8023E324_file011_elem D_8023E324[];
extern u8 D_8023E390;
extern u8 D_8023E3A0;
extern u8 D_8023E3A4;
extern u8 D_8023E3A8;
extern u8 D_8023E3AC;
extern u8 D_8023E3B0;
extern u8 D_8023E3B4;
extern struct T_func_80234724_a0 *D_8023E3B8;
extern struct T_func_8010E680_a0 *D_8023E3BC;
extern struct T_func_802409B4_a0 *D_8023E3C0;
extern T_D_80162DD0 D_8023E3C4;
extern T_D_80162DD0 D_8023E3D8;
extern T_D_8023E3EC_file011 D_8023E3EC;
extern u16 D_8023E4E8;
extern u16 D_8023E4EC;
extern T_D_8023E4F4_file011 D_8023E4F4;
extern u16 D_8023E4FC;
extern T_D_8023E500_file011 D_8023E500;
extern T_D_8023E508_file011 D_8023E508;
extern T_D_8023E510_file011 D_8023E510;
extern T_D_8023E51C_file011 D_8023E51C;
extern T_D_8023E530_file011 D_8023E530;
extern struct T_func_802409B4_a0 *D_8023E544;
extern s32 D_8023E548;
extern s32 D_8023E5AC;
extern s32 D_8023E5B0;
extern s16 D_8023E5B4;
extern u8 D_8023E8E0[];
extern f64 D_8023E948;
extern f32 D_8023EF68;
extern f64 D_8023EF70;
extern f64 D_8023EF78;
extern f64 D_8023EF80;
extern f64 D_8023EF88;
extern f64 D_8023EF90;
extern f64 D_8023EF98;
extern f64 D_8023EFA0;
extern f32 D_8023EFC4;
extern f32 D_8023EFC8;
extern f64 D_8023EFE0;
extern f64 D_8023EFE8;
extern f64 D_8023EFF0;
extern f64 D_8023EFF8;
extern f64 D_8023F000;
extern f64 D_8023F008;
extern f64 D_8023F010;
extern f32 D_8023F090;
extern f32 D_8023F93C;
extern f64 D_8023F940;
extern f64 D_8023F948;
extern f64 D_8023F950;
extern f64 D_8023F958;
extern f64 D_8023F960;
extern f64 D_8023F968;
extern f64 D_8023F970;
extern f64 D_8023F978;
extern f64 D_8023F980;
extern f32 D_8023F988;
extern f32 D_8023F98C;
extern f32 D_8023F990;
extern f32 D_8023F994;
extern f64 D_8023F998;
extern f64 D_8023F9A0;
extern f32 D_8023F9A8;
extern f64 D_8023F9B0;
extern f32 D_8023F9B8;
extern f64 D_8023F9C0;
extern f64 D_8023F9C8;
extern f32 D_8023F9D0;
extern f64 D_8023F9D8;
extern f64 D_8023F9E0;
extern f32 D_8023F9E8;
extern f32 D_8023F9EC;
extern f64 D_8023F9F0;
extern f64 D_8023F9F8;
extern f32 D_8023FA00;
extern f64 D_8023FA08;
extern f64 D_8023FA10;
extern f32 D_8023FA18;
extern f64 D_8023FA20;
extern f32 D_8023FA28;
extern f32 D_8023FA2C;
extern f32 D_8023FA30;
extern f32 D_8023FA34;
extern f64 D_8023FA68;
extern f64 D_8023FA70;
extern f64 D_8023FA78;
extern f64 D_8023FA80;
extern f64 D_8023FA88;
extern f64 D_8023FA90;
extern f64 D_8023FA98;
extern f64 D_8023FAA0;
extern f64 D_8023FAA8;
extern f64 D_8023FAB0;
extern f64 D_8023FAB8;
extern f64 D_8023FAC0;
extern f64 D_8023FAE0;
extern f64 D_8023FAE8;
extern f64 D_8023FAF0;
extern f64 D_8023FAF8;
extern f64 D_8023FB00;
extern f64 D_8023FB20;
extern f64 D_8023FB28;
extern f64 D_8023FC88;
extern f64 D_8023FC90;
extern f64 D_8023FC98;
extern f64 D_8023FCA0;
extern f64 D_8023FCA8;
extern f64 D_8023FCB0;
extern f64 D_8023FCB8;
extern f64 D_8023FCC0;
extern f64 D_8023FCC8;
extern f64 D_8023FCD0;
extern f64 D_8023FCD8;
extern f64 D_8023FCE0;
extern u8 D_80240468;
extern u8 D_80240494;
extern u8 D_80240530[];
extern u8 D_80240540[];
extern u8 D_80240550;
extern u8 D_80240558;
extern u8 D_80240560;
extern u8 D_80240568;
extern u8 D_80240570;
extern u8 D_80240578;
extern f64 D_802405A0;
extern f32 D_802405A8;
extern f32 D_802405AC;
extern f32 D_802405B0;
extern f32 D_802405B4;
extern f32 D_802405B8;
extern f32 D_802405BC;
extern u8 D_802405E0;
extern u8 D_802406D0;
extern u8 D_802406DC;
extern u8 D_802406E4;
extern T_D_80240730_file011 D_80240730;
extern s32 D_80240758;
extern u32 D_8024075C;
extern s16 D_80240760[];
extern u8 D_802407DA;
extern T_D_802407E0_file011 D_802407E0;
extern struct T_D_802407E8_file011_elem D_802407E8[];
extern struct T_D_80240828_file011_elem D_80240828[];
extern struct T_D_80240864_file011_p0_elem_p0 * *D_80240864;
extern struct T_D_80240868_file011_p0_elem_p0 * *D_80240868;
extern struct T_D_8024086C_file011_p0_elem_p0 * *D_8024086C;
extern struct T_func_801451C0_a0 * *D_80240870;
extern struct T_func_8023448C_ret *D_80240874;
extern struct T_func_80149580_a1 *D_80240878;
extern struct T_D_8024087C_file011_p0 *D_8024087C;
extern T_D_80240880_file011 D_80240880;
extern struct T_func_8037DD6C_a1 *D_80240884;
extern s32 D_80240888;
extern struct T_D_8024088C_file011_p0_elem *D_8024088C;
extern s16 D_80240894;
extern u8 D_8024089B;
extern u8 D_8024089E;
extern u8 D_8024089F;
extern u8 D_802408A0;
extern u8 D_802408A1;
extern T_D_80162DD0 D_803896A0;
extern T_D_80162DD0 D_803896B4;
extern T_D_80162DD0 D_803896C8;
extern T_D_80162DD0 D_803896DC;
extern T_D_80162DD0 D_80389704;
extern T_D_80162DD0 D_80389718;
extern T_D_80162DD0 D_8038972C;
extern T_D_80162DD0 D_80389740;
extern T_D_80162DD0 D_80389AE8;
extern T_D_80162DD0 D_80389B00;
extern T_D_80162DD0 D_80389BA0;
extern u8 D_8038CD70;
extern u8 D_8038CE18;
extern u8 D_8038CEC0;
extern T_D_80162DD0 D_8038D9B0;
extern T_D_80162DD0 D_8038D9D0;
extern T_D_80162DD0 D_8038DA20;
extern T_D_80162DD0 D_8038DAD0;
extern T_D_80162DD0 D_8038DB40;
extern T_D_80162DD0 D_8038DBC0;
extern T_D_80162DD0 D_8038DBD4;
extern T_D_80162DD0 D_8038DBF0;
extern T_D_80162DD0 D_8038DC30;
extern T_D_80162DD0 D_8038DCB0;
extern T_D_80162DD0 D_8038DCC0;
extern T_D_80162DD0 D_8038DD30;
extern T_D_80162DD0 D_8038DE20;
extern T_D_80162DD0 D_8038E030;
extern T_D_80162DD0 D_8038E090;
extern T_D_80162DD0 D_8038E120;
extern T_D_80162DD0 D_8038E134;

#endif
