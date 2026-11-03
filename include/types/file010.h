#ifndef TYPES_FILE010_H
#define TYPES_FILE010_H

/* Recovered types for file010 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* pointed to by T_D_80089378.0x68; 1 functions */
typedef struct T_D_80089378_p68 { /* size >= 0xA */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 5 uses */
    /* 0x004 */ u16 unk4; /* 13 uses */
    /* 0x006 */ s16 unk6; /* 1 use */
    /* 0x008 */ s16 unk8; /* 1 use */
} T_D_80089378_p68;

/* pointed to by T_D_80172570.0x0; 1 functions */
typedef struct T_D_80172570_p0 { /* size >= 0x8 */
    /* 0x000 */ u16 *unk0; /* 1 use */
    /* 0x004 */ s32 *unk4; /* 1 use */
} T_D_80172570_p0;

/* pointed to by T_D_80172578.0x0; 1 functions */
typedef struct T_D_80172578_p0 { /* size >= 0x8 */
    /* 0x000 */ u16 *unk0; /* 1 use */
    /* 0x004 */ s32 *unk4; /* 1 use */
} T_D_80172578_p0;

/* anonymous; 3 functions */
typedef struct T_D_801BBBF0_elem_4 { /* size >= 0x18 */
    /* 0x000 */ f32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ struct T_func_80107830_a0 *unk8; /* 13 uses */
    /* 0x00C */ struct T_D_801BBBF0_elem_4_pC *unkC; /* 3 uses */
    /* 0x010 */ u8 unk10; /* 8 uses */
    /* 0x011 */ u8 unk11; /* 5 uses */
    /* 0x012 */ u8 pad12[0x2];
    /* 0x014 */ struct T_func_8000E634_a0 *unk14; /* 2 uses */
} T_D_801BBBF0_elem_4;

/* pointed to by T_D_801BBBF0_elem_4.0xC; 1 functions */
typedef struct T_D_801BBBF0_elem_4_pC { /* size >= 0x7A */
    /* 0x000 */ u8 pad0[0x78];
    /* 0x078 */ s16 unk78; /* 2 uses */
} T_D_801BBBF0_elem_4_pC;

/* D_80216B9C; 4 functions */
typedef struct T_D_80216B9C_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 4 uses */
    /* 0x008 */ s32 unk8; /* 4 uses */
} T_D_80216B9C_file010;

/* D_80216BA8; 3 functions */
typedef struct T_D_80216BA8_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 6 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
    /* 0x008 */ s32 unk8; /* 6 uses */
} T_D_80216BA8_file010;

/* D_80216BC0; 1 functions */
typedef struct T_D_80216BC0_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216BC0_file010;

/* D_80216BCC; 3 functions */
typedef struct T_D_80216BCC_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 3 uses */
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ s32 unk8; /* 3 uses */
} T_D_80216BCC_file010;

/* D_80216BD8; 1 functions */
typedef struct T_D_80216BD8_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216BD8_file010;

/* D_80216BE4; 1 functions */
typedef struct T_D_80216BE4_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80216BE4_file010;

/* D_80216C14; 1 functions */
typedef struct T_D_80216C14_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80216C14_file010;

/* D_80216C20; 1 functions */
typedef struct T_D_80216C20_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 6 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
    /* 0x008 */ s32 unk8; /* 6 uses */
} T_D_80216C20_file010;

/* D_80216C2C; 1 functions */
typedef struct T_D_80216C2C_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 6 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
    /* 0x008 */ s32 unk8; /* 6 uses */
} T_D_80216C2C_file010;

/* D_80216C38; 1 functions */
typedef struct T_D_80216C38_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 6 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
    /* 0x008 */ s32 unk8; /* 6 uses */
} T_D_80216C38_file010;

/* D_80216C44; 1 functions */
typedef struct T_D_80216C44_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 6 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
    /* 0x008 */ s32 unk8; /* 6 uses */
} T_D_80216C44_file010;

/* D_80216C50; 1 functions */
typedef struct T_D_80216C50_file010_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216C50_file010_elem;

/* D_80216C80; 1 functions */
typedef struct T_D_80216C80_file010_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216C80_file010_elem;

/* D_80216E7C; 1 functions */
typedef struct T_D_80216E7C_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216E7C_file010;

/* D_80216E88; 1 functions */
typedef struct T_D_80216E88_file010 { /* size >= 0xC */
    /* 0x000 */ void *unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216E88_file010;

/* D_80216EB8; 1 functions */
typedef struct T_D_80216EB8_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216EB8_file010;

/* D_80216EC4; 1 functions */
typedef struct T_D_80216EC4_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 3 uses */
} T_D_80216EC4_file010;

/* D_80216ED0; 2 functions */
typedef struct T_D_80216ED0_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses; also s16@0x6 */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_80216ED0_file010;

/* D_80216EDC; 1 functions */
typedef struct T_D_80216EDC_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216EDC_file010;

/* D_80216EE8; 6 functions */
typedef struct T_D_80216EE8_file010 { /* size >= 0xC */
    /* 0x000 */ void *unk0; /* 6 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
    /* 0x008 */ s32 unk8; /* 6 uses */
} T_D_80216EE8_file010;

/* D_80216EF4; 1 functions */
typedef struct T_D_80216EF4_file010 { /* size >= 0xC */
    /* 0x000 */ void *unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216EF4_file010;

/* D_80216F00; 1 functions */
typedef struct T_D_80216F00_file010 { /* size >= 0xC */
    /* 0x000 */ void *unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216F00_file010;

/* D_80216F0C; 1 functions */
typedef struct T_D_80216F0C_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216F0C_file010;

/* D_80216F18; 1 functions */
typedef struct T_D_80216F18_file010 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80216F18_file010;

/* D_80217000; 1 functions */
typedef struct T_D_80217000_file010 { /* size >= 0x14 */
    /* 0x000 */ s32 w; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80217000_file010;

/* D_80217028; 1 functions */
typedef struct T_D_80217028_file010 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80217028_file010;

/* D_8021703C; 1 functions */
typedef struct T_D_8021703C_file010 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8021703C_file010;

/* D_80217064; 1 functions */
typedef struct T_D_80217064_file010 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80217064_file010;

/* D_80217078; 1 functions */
typedef struct T_D_80217078_file010 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80217078_file010;

/* D_8021708C; 1 functions */
typedef struct T_D_8021708C_file010 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8021708C_file010;

/* D_802170C4; 1 functions */
typedef struct T_D_802170C4_file010 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_802170C4_file010;

/* D_802172A4; 1 functions */
typedef struct T_D_802172A4_file010 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_802172A4_file010;

/* D_802172B8; 1 functions */
typedef struct T_D_802172B8_file010 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_802172B8_file010;

/* pointed to by T_D_80217434_file010_elem.0x0; 1 functions */
typedef struct T_D_80217434_file010_elem_p0 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80217434_file010_elem_p0;

/* D_802176C0; 2 functions */
typedef struct T_D_802176C0_file010 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_802176C0_file010;

/* D_80217710; 1 functions */
typedef struct T_D_80217710_file010 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80217710_file010;

/* D_80217724; 1 functions */
typedef struct T_D_80217724_file010 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80217724_file010;

/* D_80217738; 1 functions */
typedef struct T_D_80217738_file010 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80217738_file010;

/* D_802179D8; 4 functions */
typedef struct T_D_802179D8_file010_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 4 uses */
    /* 0x001 */ u8 unk1; /* 3 uses */
    /* 0x002 */ u8 unk2; /* 3 uses */
    /* 0x003 */ u8 unk3; /* 1 use */
} T_D_802179D8_file010_elem;

/* D_802179D9; 1 functions */
typedef struct T_D_802179D9_file010_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x3];
} T_D_802179D9_file010_elem;

/* D_802179DA; 1 functions */
typedef struct T_D_802179DA_file010_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x3];
} T_D_802179DA_file010_elem;

/* D_8021AFE8; 6 functions */
typedef struct T_D_8021AFE8_file010 { /* size >= 0xC */
    /* 0x000 */ void *unk0; /* 7 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
    /* 0x008 */ f32 unk8; /* 8 uses */
} T_D_8021AFE8_file010;

/* D_8021AFF8; 5 functions */
typedef struct T_D_8021AFF8_file010 { /* size >= 0xC */
    /* 0x000 */ void *unk0; /* 6 uses */
    /* 0x004 */ s32 unk4; /* 5 uses */
    /* 0x008 */ f32 unk8; /* 6 uses */
} T_D_8021AFF8_file010;

/* D_8021B018; 5 functions */
typedef struct T_D_8021B018_file010 { /* size >= 0xC */
    /* 0x000 */ void *unk0; /* 5 uses */
    /* 0x004 */ s32 unk4; /* 5 uses */
    /* 0x008 */ s32 unk8; /* 5 uses */
} T_D_8021B018_file010;

/* pointed to by T_func_80147828_a0.0x38; 1 functions */
typedef struct T_func_80147828_a0_p38 { /* size >= 0x1C */
    /* 0x000 */ u8 pad0[0x18];
    /* 0x018 */ s32 unk18; /* 1 use */
} T_func_80147828_a0_p38;

/* pointed to by T_func_801DBE94_a0.0x24; 1 functions */
typedef struct T_func_801DBE94_a0_p24 { /* size >= 0x23 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
} T_func_801DBE94_a0_p24;

/* parameter file010:func_801EEC58:0, file010:func_801EF440:0; 2 functions */
typedef struct T_func_801EEC58_a0 { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ u8 pad34[0xA];
    /* 0x03E */ u8 unk3E; /* 3 uses */
    /* 0x03F */ u8 pad3F[0x1];
    /* 0x040 */ f32 unk40; /* 12 uses */
    /* 0x044 */ f32 unk44; /* 3 uses */
    /* 0x048 */ f32 unk48; /* 12 uses */
} T_func_801EEC58_a0;

/* pointed to by T_func_80107830_a0.0x64; 1 functions */
typedef struct T_func_801F1FD0_ret { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_801F1FD0_ret_p24 *unk24; /* 1 use */
} T_func_801F1FD0_ret;

/* pointed to by T_func_801F1FD0_ret.0x24; 1 functions */
typedef struct T_func_801F1FD0_ret_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_801F1FD0_ret_p24_p30 *unk30; /* 1 use */
} T_func_801F1FD0_ret_p24;

/* pointed to by T_func_801F1FD0_ret_p24.0x30; 1 functions */
typedef struct T_func_801F1FD0_ret_p24_p30 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x8];
    /* 0x008 */ f32 unk8; /* 1 use */
} T_func_801F1FD0_ret_p24_p30;

/* parameter file010:func_801F3B6C:0, file010:func_801F42E4:0; 16 functions */
typedef struct T_func_801F3B6C_a0 { /* size >= 0xB0 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_801F3B6C_a0_p24 *unk24; /* 8 uses */
    /* 0x028 */ u8 pad28[0x10];
    /* 0x038 */ struct T_func_801F3B6C_a0_p38 *unk38; /* 4 uses */
    /* 0x03C */ u16 unk3C; /* 7 uses */
    /* 0x03E */ u8 pad3E[0x1E];
    /* 0x05C */ struct T_func_8012CE9C_a1 *unk5C; /* 7 uses */
    /* 0x060 */ u8 pad60[0x30];
    /* 0x090 */ s16 unk90; /* 10 uses */
    /* 0x092 */ u8 unk92; /* 3 uses */
    /* 0x093 */ u8 unk93; /* 6 uses */
    /* 0x094 */ s16 unk94; /* 6 uses */
    /* 0x096 */ s16 unk96; /* 6 uses */
    /* 0x098 */ s16 unk98; /* 3 uses */
    /* 0x09A */ u16 unk9A; /* 5 uses */
    /* 0x09C */ u8 unk9C; /* 3 uses */
    /* 0x09D */ u8 unk9D; /* 8 uses */
    /* 0x09E */ u8 pad9E[0x10];
    /* 0x0AE */ u8 unkAE; /* 6 uses */
    /* 0x0AF */ u8 unkAF; /* 6 uses */
} T_func_801F3B6C_a0;

/* pointed to by T_func_801F3B6C_a0.0x24; 6 functions */
typedef struct T_func_801F3B6C_a0_p24 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_801F3B6C_a0_p24_p2C *unk2C; /* 8 uses */
} T_func_801F3B6C_a0_p24;

/* pointed to by T_func_801F3B6C_a0_p24.0x2C; 6 functions */
typedef struct T_func_801F3B6C_a0_p24_p2C { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 3 uses */
    /* 0x008 */ f32 unk8; /* 4 uses */
    /* 0x00C */ f32 unkC; /* 3 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 2 uses */
} T_func_801F3B6C_a0_p24_p2C;

/* pointed to by T_func_801F3B6C_a0.0x38; 4 functions */
typedef struct T_func_801F3B6C_a0_p38 { /* size >= 0x20 */
    /* 0x000 */ u8 pad0[0x6];
    /* 0x006 */ s16 unk6; /* 3 uses */
    /* 0x008 */ u8 pad8[0x2];
    /* 0x00A */ s16 unkA; /* 3 uses */
    /* 0x00C */ u8 padC[0x12];
    /* 0x01E */ u16 unk1E; /* 1 use */
} T_func_801F3B6C_a0_p38;

/* pointed to by T_func_801DBE94_a0.0x38; 7 functions */
typedef struct T_func_801F4284_ret { /* size >= 0x1C */
    /* 0x000 */ u8 pad0[0x2];
    /* 0x002 */ u16 unk2; /* 1 use */
    /* 0x004 */ u8 pad4[0x2];
    /* 0x006 */ s16 unk6; /* 1 use */
    /* 0x008 */ u8 pad8[0x2];
    /* 0x00A */ s16 unkA; /* 1 use */
    /* 0x00C */ u8 padC[0x8];
    /* 0x014 */ s32 unk14; /* 5 uses */
    /* 0x018 */ s32 unk18; /* 5 uses */
} T_func_801F4284_ret;

/* pointed to by T_func_80147370_a0.0xA8; 4 functions */
typedef struct T_func_801FA410_a0 { /* size >= 0xB4 */
    /* 0x000 */ u8 pad0[0x38];
    /* 0x038 */ struct T_func_801FA410_a0_p38 *unk38; /* 1 use */
    /* 0x03C */ u8 pad3C[0x36];
    /* 0x072 */ u16 unk72; /* 2 uses */
    /* 0x074 */ u8 pad74[0x38];
    /* 0x0AC */ struct T_func_802409B4_a0 *unkAC; /* 3 uses */
    /* 0x0B0 */ struct T_func_802409B4_a0 *unkB0; /* 3 uses */
} T_func_801FA410_a0;

/* pointed to by T_func_801FA410_a0.0x38; 1 functions */
typedef struct T_func_801FA410_a0_p38 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ s32 unk10; /* 1 use */
} T_func_801FA410_a0_p38;

/* pointed to by T_D_802170F4_file010.0x0; 1 functions */
typedef struct T_func_801FBDF4_ret_801FBF88 { /* size >= 0x91 */
    /* 0x000 */ u8 pad0[0x90];
    /* 0x090 */ u8 unk90; /* 1 use */
} T_func_801FBDF4_ret_801FBF88;

/* pointed to by T_func_801FCF98_a0.0x38; 1 functions */
typedef struct T_func_801FCF98_a0_p38 { /* size >= 0x1C */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ s32 unk10; /* 4 uses */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ s32 unk18; /* 2 uses */
} T_func_801FCF98_a0_p38;

/* parameter file010:func_801FEC58:0, file010:func_801FEE94:0; 2 functions */
typedef struct T_func_801FEC58_a0 { /* size >= 0xB2 */
    /* 0x000 */ u8 pad0[0x90];
    /* 0x090 */ u8 unk90; /* 12 uses */
    /* 0x091 */ u8 pad91[0x3];
    /* 0x094 */ s16 unk94; /* 1 use */
    /* 0x096 */ u8 unk96; /* 1 use */
    /* 0x097 */ u8 unk97; /* 1 use */
    /* 0x098 */ u8 unk98; /* 2 uses */
    /* 0x099 */ u8 pad99[0xB];
    /* 0x0A4 */ s16 unkA4; /* 3 uses */
    /* 0x0A6 */ s16 unkA6; /* 3 uses */
    /* 0x0A8 */ u8 padA8[0x3];
    /* 0x0AB */ u8 unkAB; /* 1 use */
    /* 0x0AC */ u8 padAC[0x4];
    /* 0x0B0 */ s16 unkB0; /* 1 use */
} T_func_801FEC58_a0;

/* anonymous; 1 functions */
typedef struct T_func_802039B0_a0_p94_elem { /* size 0x14 */
    /* 0x000 */ void (*unk0)(); /* 172 uses; used signed x2, unsigned x16; also u8@0x3, u16@0x2 */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_func_802039B0_a0_p94_elem;

extern u8 D_801E4010;
extern u8 D_801E4011;
extern T_D_80216B90_file010 D_80216B90;
extern T_D_80216B9C_file010 D_80216B9C;
extern T_D_80216BA8_file010 D_80216BA8;
extern T_D_80216BC0_file010 D_80216BC0;
extern T_D_80216BCC_file010 D_80216BCC;
extern T_D_80216BD8_file010 D_80216BD8;
extern T_D_80216BE4_file010 D_80216BE4;
extern u16 D_80216BF0;
extern u16 D_80216BF4;
extern s16 D_80216BF8;
extern u16 D_80216BFC;
extern u16 D_80216C00;
extern u8 D_80216C08;
extern u8 D_80216C0C;
extern u16 D_80216C10;
extern T_D_80216C14_file010 D_80216C14;
extern T_D_80216C20_file010 D_80216C20;
extern T_D_80216C2C_file010 D_80216C2C;
extern T_D_80216C38_file010 D_80216C38;
extern T_D_80216C44_file010 D_80216C44;
extern struct T_D_80216C50_file010_elem D_80216C50[];
extern struct T_D_80216C80_file010_elem D_80216C80[];
extern void *D_80216D10[];
extern T_D_80162DD0 D_80216E54;
extern T_D_80162DD0 D_80216E68;
extern T_D_80216E7C_file010 D_80216E7C;
extern T_D_80216E88_file010 D_80216E88;
extern T_D_80216EB8_file010 D_80216EB8;
extern T_D_80216EC4_file010 D_80216EC4;
extern T_D_80216ED0_file010 D_80216ED0;
extern T_D_80216EDC_file010 D_80216EDC;
extern T_D_80216EE8_file010 D_80216EE8;
extern T_D_80216EF4_file010 D_80216EF4;
extern T_D_80216F00_file010 D_80216F00;
extern T_D_80216F0C_file010 D_80216F0C;
extern T_D_80216F18_file010 D_80216F18;
extern u8 D_80216F24;
extern T_D_80217000_file010 D_80217000;
extern T_D_80162DD0 D_80217014;
extern T_D_80217028_file010 D_80217028;
extern T_D_8021703C_file010 D_8021703C;
extern T_D_80217064_file010 D_80217064;
extern T_D_80217078_file010 D_80217078;
extern T_D_8021708C_file010 D_8021708C;
extern struct T_func_8012636C_a0 *D_802170B0;
extern struct T_func_802409B4_a0 *D_802170B4;
extern struct T_func_802409B4_a0 *D_802170B8;
extern struct T_func_802409B4_a0 *D_802170BC;
extern struct T_func_80107830_a0 *D_802170C0;
extern T_D_802170C4_file010 D_802170C4;
extern u8 D_802170F0;
extern struct T_func_801FBDF4_ret_801FBF88 *D_802170F4;
extern T_D_80162DD0 D_802170F8;
extern T_D_80162DD0 D_8021710C;
extern void *D_80217120[];
extern T_D_80162DD0 D_80217138;
extern void *D_80217150[];
extern void *D_802171F0[];
extern T_D_802172A4_file010 D_802172A4;
extern T_D_802172B8_file010 D_802172B8;
extern struct T_D_80217434_file010_elem_p0 *D_80217434[];
extern T_D_802176C0_file010 D_802176C0;
extern T_D_80162DD0 D_802176D0;
extern T_D_80162DD0 D_802176F0;
extern T_D_80217710_file010 D_80217710;
extern T_D_80217724_file010 D_80217724;
extern T_D_80217738_file010 D_80217738;
extern u16 D_8021774C[];
extern void *D_802177A8[];
extern void *D_802177B8[];
extern void *D_80217870[];
extern void *D_80217880[];
extern void *D_8021793C[];
extern void *D_80217948[];
extern void *D_80217954[];
extern struct T_D_802179D8_file010_elem D_802179D8[];
extern struct T_D_802179D9_file010_elem D_802179D9[];
extern struct T_D_802179DA_file010_elem D_802179DA[];
extern u16 D_80217C68[];
extern u16 D_80217C70[];
extern u16 D_80217C78[];
extern u16 D_80217C80[];
extern u16 D_80217C88[];
extern u16 D_80217C90[];
extern u16 D_80217C98[];
extern u16 D_80217CA0[];
extern u8 D_80217CA8;
extern u16 D_80217CAC;
extern u16 D_80217CB0[];
extern f32 D_80217CC8[];
extern f32 D_80217CD4[];
extern f64 D_80218110;
extern f64 D_80218548;
extern f64 D_80218550;
extern f64 D_80218558;
extern f64 D_80218560;
extern f64 D_80218568;
extern f64 D_80218570;
extern f64 D_80218578;
extern f64 D_80218580;
extern f64 D_80218588;
extern f64 D_80218590;
extern f64 D_802185C8;
extern f64 D_802185D0;
extern f64 D_802185D8;
extern f64 D_802185E0;
extern f64 D_802185E8;
extern f64 D_802185F0;
extern f64 D_802185F8;
extern f64 D_80218600;
extern f32 D_8021866C;
extern f64 D_802186B0;
extern f64 D_802186B8;
extern f64 D_802186C0;
extern f64 D_802186C8;
extern f64 D_802186D0;
extern f64 D_802186D8;
extern f64 D_802186E0;
extern f64 D_802186E8;
extern f64 D_802186F0;
extern f64 D_802186F8;
extern f64 D_80218700;
extern f32 D_802187A0;
extern f32 D_802187A4;
extern f64 D_802187A8;
extern f32 D_802187B0;
extern f64 D_802187B8;
extern f32 D_80218C94;
extern f32 D_80218C98;
extern f32 D_80218C9C;
extern f32 D_80218CA0;
extern f64 D_80218CA8;
extern f64 D_80218CB0;
extern f64 D_80218CB8;
extern f32 D_80218CC0;
extern f32 D_80218CC4;
extern f32 D_80218CC8;
extern f64 D_80218CD0;
extern f64 D_80218CD8;
extern f64 D_80218CE0;
extern f64 D_80218CE8;
extern f64 D_80218CF0;
extern f64 D_80218CF8;
extern f64 D_80218D00;
extern f32 D_80218D08;
extern f64 D_80218D10;
extern f32 D_80218D18;
extern f32 D_80218D1C;
extern f32 D_80218D20;
extern f32 D_80218D24;
extern f32 D_80218D28;
extern f32 D_80218D2C;
extern f32 D_80218D30;
extern f32 D_80218E08;
extern f32 D_80218E0C;
extern f64 D_80218E10;
extern f64 D_80218E18;
extern f64 D_80218E20;
extern f32 D_80218E28;
extern f32 D_80218E2C;
extern f64 D_80218E30;
extern f64 D_80218E38;
extern f32 D_80218E40;
extern f64 D_80218E48;
extern f64 D_80218E50;
extern f32 D_80218F5C;
extern f32 D_80218F60;
extern f64 D_80218F68;
extern f64 D_80218F70;
extern f64 D_80218F78;
extern f32 D_8021922C;
extern f64 D_80219340;
extern f64 D_80219348;
extern f64 D_80219350;
extern f32 D_8021955C;
extern f32 D_80219560;
extern f32 D_80219564;
extern f32 D_80219568;
extern f32 D_8021956C;
extern f32 D_80219570;
extern f32 D_80219574;
extern f32 D_80219578;
extern f32 D_8021957C;
extern f32 D_80219580;
extern f32 D_80219584;
extern f32 D_80219588;
extern f32 D_8021958C;
extern f32 D_80219590;
extern f32 D_80219594;
extern f32 D_80219598;
extern f32 D_8021959C;
extern f32 D_802195A0;
extern f32 D_802195A4;
extern f32 D_802195A8;
extern f32 D_802195AC;
extern f32 D_802195B0;
extern f32 D_802195B4;
extern f32 D_802195B8;
extern f32 D_802195BC;
extern f32 D_802195C0;
extern f32 D_802195C4;
extern f32 D_802195C8;
extern f32 D_802195CC;
extern f32 D_802195D0;
extern f32 D_802195D4;
extern f32 D_802195D8;
extern f32 D_802195DC;
extern f32 D_802195E0;
extern f32 D_802195E4;
extern f32 D_802195E8;
extern f32 D_802195EC;
extern f32 D_802195F0;
extern f64 D_802195F8;
extern f64 D_80219600;
extern f64 D_80219608;
extern f32 D_80219610;
extern f64 D_80219618;
extern f64 D_80219620;
extern f64 D_80219628;
extern f64 D_80219630;
extern f64 D_80219638;
extern f64 D_80219640;
extern f64 D_80219648;
extern f64 D_80219650;
extern f64 D_8021A5E0;
extern f64 D_8021A5E8;
extern f64 D_8021A5F0;
extern f32 D_8021A7B4;
extern f32 D_8021A7B8;
extern f32 D_8021A7BC;
extern f32 D_8021A7C0;
extern f32 D_8021A7C4;
extern f32 D_8021A7C8;
extern f32 D_8021A7CC;
extern f64 D_8021A7D0;
extern f64 D_8021A7D8;
extern f32 D_8021A7E0;
extern f32 D_8021A7E4;
extern f32 D_8021A7E8;
extern f32 D_8021A7EC;
extern f32 D_8021A7F0;
extern f32 D_8021A7F4;
extern f32 D_8021A7F8;
extern f32 D_8021A7FC;
extern f32 D_8021A800;
extern f32 D_8021A804;
extern f64 D_8021A808;
extern f64 D_8021A810;
extern f32 D_8021A818;
extern f32 D_8021A81C;
extern f32 D_8021A820;
extern f32 D_8021A824;
extern f32 D_8021A828;
extern f32 D_8021A82C;
extern f32 D_8021A830;
extern f32 D_8021A834;
extern f32 D_8021A838;
extern f32 D_8021A83C;
extern f32 D_8021A840;
extern f32 D_8021A848;
extern f32 D_8021A84C;
extern f32 D_8021A854;
extern f32 D_8021A858;
extern f32 D_8021A860;
extern f32 D_8021A864;
extern f32 D_8021A868;
extern f32 D_8021A86C;
extern f32 D_8021A870;
extern f32 D_8021A874;
extern f32 D_8021A878;
extern f32 D_8021A87C;
extern f32 D_8021A880;
extern f32 D_8021A884;
extern f64 D_8021A8B8;
extern f64 D_8021A8C0;
extern f64 D_8021A8C8;
extern f64 D_8021A8D0;
extern f32 D_8021A8D8;
extern f64 D_8021A8E0;
extern f32 D_8021A8E8;
extern f64 D_8021A8F0;
extern f32 D_8021A8F8;
extern f64 D_8021A900;
extern f32 D_8021A908;
extern f32 D_8021A90C;
extern f64 D_8021A910;
extern f32 D_8021A918;
extern f64 D_8021A920;
extern f32 D_8021A928;
extern f32 D_8021A92C;
extern f32 D_8021A930;
extern f32 D_8021A934;
extern f32 D_8021A938;
extern f32 D_8021A93C;
extern f32 D_8021A940;
extern f64 D_8021A970;
extern f64 D_8021A978;
extern f64 D_8021A980;
extern f64 D_8021A988;
extern f64 D_8021A990;
extern f64 D_8021A998;
extern f64 D_8021A9A0;
extern f64 D_8021A9A8;
extern f64 D_8021A9B0;
extern f64 D_8021A9B8;
extern f64 D_8021A9C0;
extern f32 D_8021A9C8;
extern f64 D_8021A9D0;
extern f32 D_8021A9D8;
extern f32 D_8021A9DC;
extern f32 D_8021A9E0;
extern f32 D_8021A9E4;
extern f32 D_8021A9E8;
extern f32 D_8021A9EC;
extern f32 D_8021A9F0;
extern f32 D_8021A9F4;
extern f64 D_8021A9F8;
extern f64 D_8021AA00;
extern f64 D_8021AA08;
extern f64 D_8021AA10;
extern f32 D_8021AA18;
extern f32 D_8021AA1C;
extern f64 D_8021AA20;
extern f32 D_8021AA28;
extern f32 D_8021AA2C;
extern f64 D_8021AA30;
extern f64 D_8021AA38;
extern f32 D_8021AA40;
extern f32 D_8021AA44;
extern f32 D_8021AA48;
extern f64 D_8021AA50;
extern f64 D_8021AA98;
extern f64 D_8021AAA0;
extern f64 D_8021AAA8;
extern f64 D_8021AAB0;
extern f64 D_8021AAB8;
extern f64 D_8021AAC0;
extern f64 D_8021AAC8;
extern f32 D_8021AAD0;
extern f64 D_8021AB18;
extern f64 D_8021AB20;
extern f64 D_8021AB28;
extern f64 D_8021AB30;
extern f64 D_8021AB38;
extern f64 D_8021AB40;
extern f64 D_8021AB48;
extern f64 D_8021AB50;
extern f64 D_8021AB58;
extern f64 D_8021AB78;
extern f64 D_8021AB80;
extern f64 D_8021AB88;
extern f64 D_8021AB90;
extern f64 D_8021AB98;
extern f32 D_8021ABA0;
extern f64 D_8021ABA8;
extern f64 D_8021ABE8;
extern f64 D_8021ABF0;
extern f64 D_8021ABF8;
extern f64 D_8021AC00;
extern f64 D_8021AC08;
extern f64 D_8021AC10;
extern f64 D_8021AC18;
extern f64 D_8021AC20;
extern f64 D_8021AC28;
extern f64 D_8021AC30;
extern f64 D_8021AC38;
extern f64 D_8021AC40;
extern f64 D_8021AC78;
extern f64 D_8021AC80;
extern f64 D_8021AC88;
extern f64 D_8021AC90;
extern f32 D_8021AC98;
extern f64 D_8021ACA0;
extern f32 D_8021ACA8;
extern f32 D_8021ACAC;
extern f32 D_8021ACB0;
extern f32 D_8021ACB4;
extern f32 D_8021ACB8;
extern f32 D_8021ACBC;
extern f64 D_8021ACC0;
extern f64 D_8021ACC8;
extern f64 D_8021ACD0;
extern f64 D_8021ACD8;
extern f64 D_8021ACE0;
extern f64 D_8021ACE8;
extern f64 D_8021ACF0;
extern f64 D_8021AD28;
extern f64 D_8021AD30;
extern f64 D_8021AD38;
extern f64 D_8021AD40;
extern f64 D_8021AD48;
extern f32 D_8021ADB0;
extern f32 D_8021ADB4;
extern f32 D_8021ADB8;
extern f32 D_8021ADBC;
extern f32 D_8021ADC0;
extern f32 D_8021ADC4;
extern f32 D_8021ADC8;
extern f32 D_8021ADCC;
extern f32 D_8021ADD0;
extern f32 D_8021ADD4;
extern f64 D_8021AE20;
extern f64 D_8021AE28;
extern f64 D_8021AE30;
extern f64 D_8021AE38;
extern f32 D_8021AE40;
extern f64 D_8021AE48;
extern f64 D_8021AE50;
extern f64 D_8021AE58;
extern f64 D_8021AE60;
extern f64 D_8021AE68;
extern f32 D_8021AE70;
extern f64 D_8021AE78;
extern f32 D_8021AE80;
extern f32 D_8021AE84;
extern f32 D_8021AE88;
extern f64 D_8021AE90;
extern f64 D_8021AE98;
extern f64 D_8021AEA0;
extern f64 D_8021AEA8;
extern f32 D_8021AF0C;
extern f32 D_8021AF10;
extern f64 D_8021AF18;
extern f64 D_8021AF20;
extern f32 D_8021AF28;
extern f64 D_8021AF30;
extern f64 D_8021AF38;
extern f64 D_8021AF40;
extern f64 D_8021AF48;
extern f64 D_8021AF50;
extern f64 D_8021AF58;
extern f64 D_8021AF60;
extern f64 D_8021AF68;
extern f64 D_8021AF70;
extern f64 D_8021AF78;
extern f32 D_8021AFB0;
extern f32 D_8021AFB4;
extern f32 D_8021AFB8;
extern f32 D_8021AFBC;
extern s16 D_8021AFC0;
extern u8 D_8021AFC2;
extern s32 D_8021AFC4;
extern u8 D_8021AFC8;
extern u8 D_8021AFC9;
extern u8 D_8021AFD0;
extern struct T_D_80089378 *D_8021AFE0;
extern struct T_func_8010E680_a0 *D_8021AFE4;
extern T_D_8021AFE8_file010 D_8021AFE8;
extern T_D_8021AFF8_file010 D_8021AFF8;
extern T_D_8021B018_file010 D_8021B018;
extern T_D_8021B028_file010 D_8021B028;
extern f32 D_8021B02C;
extern f32 D_8021B030;
extern s16 D_8021B0C0;
extern s32 D_8021B0C4;
extern u8 D_8021B0D0;
extern u16 D_8021B0D2;
extern f32 D_8021B0E0;
extern u8 D_8021B0E4;
extern u8 D_8021B0F0;
extern u8 D_8021B0F1;
extern u8 D_8021B0F2;
extern f32 D_8021B0F4;
extern s16 D_8021B0F8;
extern struct T_func_8000E634_a0 *D_8021B0FC;
extern s32 *D_8021B100;
extern s32 *D_8021B104;
extern s32 *D_8021B108;
extern s32 *D_8021B10C;
extern s32 *D_8021B110;
extern s32 *D_8021B114;
extern s32 *D_8021B118;
extern s32 *D_8021B11C;
extern s16 D_8021B120;
extern s16 D_8021B122;
extern f32 D_8021B124;
extern f32 D_8021B128;
extern f32 D_8021B12C;
extern u16 D_8021B130;
extern u16 D_8021B132;
extern f32 D_8021B134;
extern f32 D_8021B138;
extern s32 D_8021B13C;
extern s32 D_8021B140;
extern s32 D_8021B144;

#endif
