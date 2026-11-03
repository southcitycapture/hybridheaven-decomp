#ifndef TYPES_FILE048_H
#define TYPES_FILE048_H

/* Recovered types for file048 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_801EA144; 1 functions */
typedef struct T_D_801EA144_file048 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801EA144_file048;

/* D_801EA150; 1 functions */
typedef struct T_D_801EA150_file048 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801EA150_file048;

/* D_801EA168; 1 functions */
typedef struct T_D_801EA168_file048 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801EA168_file048;

/* D_801EA5F0; 2 functions */
typedef struct T_D_801EA5F0_file048 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 3 uses */
} T_D_801EA5F0_file048;

/* D_8038DF70; 1 functions */
typedef struct T_D_8038DF70_file048 { /* size >= 0x20 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x8];
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ u8 pad14[0x8];
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_8038DF70_file048;

/* func_801DAAF0; 13 functions */
typedef struct T_func_801DAAF0_file048 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 27 uses */
} T_func_801DAAF0_file048;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file048 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file048;

/* func_8038D8B8; 5 functions */
typedef struct T_func_8038D8B8_file048 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_func_80107830_a0 *unk14; /* 46 uses */
} T_func_8038D8B8_file048;

extern s32 D_801D8D60;
extern T_D_80162DD0 D_801DB300;
extern T_D_801E0A48_file026 D_801E0A48;
extern f32 D_801E9CA8;
extern T_D_8016379C D_801E9D68;
extern T_D_8016379C D_801E9D78;
extern s32 D_801E9E6C;
extern s32 D_801E9E70;
extern s32 D_801E9EB0;
extern s32 D_801E9EB4;
extern s32 D_801E9F18;
extern s32 D_801E9FFC;
extern s32 D_801EA000;
extern f32 D_801EA0D0;
extern f32 D_801EA0D4;
extern T_D_801EA144_file048 D_801EA144;
extern T_D_801EA150_file048 D_801EA150;
extern T_D_801EA168_file048 D_801EA168;
extern s32 D_801EA420[];
extern s32 D_801EA440[];
extern f32 D_801EA460;
extern f32 D_801EA464;
extern f32 D_801EA468;
extern f32 D_801EA46C;
extern f32 D_801EA470;
extern f32 D_801EA474;
extern f32 D_801EA478;
extern f32 D_801EA47C;
extern f32 D_801EA480;
extern f32 D_801EA484;
extern f32 D_801EA488;
extern f32 D_801EA48C;
extern f32 D_801EA490;
extern f32 D_801EA494;
extern f32 D_801EA498;
extern f32 D_801EA49C;
extern f32 D_801EA4A0;
extern f32 D_801EA4A4;
extern f32 D_801EA4A8;
extern f32 D_801EA4AC;
extern f32 D_801EA4B0;
extern f32 D_801EA4B4;
extern f32 D_801EA4B8;
extern f32 D_801EA4BC;
extern f32 D_801EA4C0;
extern f32 D_801EA4C4;
extern f32 D_801EA4C8;
extern f32 D_801EA4CC;
extern f32 D_801EA4D0;
extern f32 D_801EA4D4;
extern f32 D_801EA4D8;
extern f32 D_801EA4DC;
extern f32 D_801EA4E0;
extern f32 D_801EA4E4;
extern f32 D_801EA4E8;
extern f32 D_801EA4EC;
extern f32 D_801EA4F0;
extern f32 D_801EA4F4;
extern f32 D_801EA4F8;
extern f32 D_801EA4FC;
extern f32 D_801EA500;
extern f32 D_801EA504;
extern f32 D_801EA508;
extern f32 D_801EA50C;
extern f32 D_801EA510;
extern f32 D_801EA514;
extern f32 D_801EA518;
extern f32 D_801EA51C;
extern f32 D_801EA520;
extern f32 D_801EA524;
extern f32 D_801EA528;
extern f32 D_801EA52C;
extern f32 D_801EA530;
extern f32 D_801EA534;
extern f32 D_801EA538;
extern f32 D_801EA53C;
extern f32 D_801EA540;
extern f32 D_801EA544;
extern f32 D_801EA548;
extern f32 D_801EA54C;
extern f32 D_801EA550;
extern f32 D_801EA554;
extern f32 D_801EA558;
extern f32 D_801EA55C;
extern f32 D_801EA560;
extern f32 D_801EA564;
extern f32 D_801EA568;
extern f32 D_801EA56C;
extern f32 D_801EA570;
extern f64 D_801EA578;
extern f32 D_801EA580;
extern f32 D_801EA584;
extern f32 D_801EA588;
extern f32 D_801EA58C;
extern f32 D_801EA590;
extern f32 D_801EA594;
extern f64 D_801EA598;
extern f32 D_801EA5A0;
extern f32 D_801EA5A4;
extern f32 D_801EA5A8;
extern f32 D_801EA5AC;
extern f32 D_801EA5B0;
extern f32 D_801EA5B4;
extern f32 D_801EA5B8;
extern f32 D_801EA5BC;
extern f64 D_801EA5C0;
extern f32 D_801EA5C8;
extern f32 D_801EA5CC;
extern f32 D_801EA5D0;
extern f32 D_801EA5D4;
extern f64 D_801EA5D8;
extern f32 D_801EA5E0;
extern f32 D_801EA5E4;
extern T_D_801EA5F0_file048 D_801EA5F0;
extern f32 D_801EA5F8;
extern T_D_801E0A48_file026 D_8038DD90;
extern T_D_801E0A48_file026 D_8038DDC0;
extern T_D_8038DF70_file048 D_8038DF70;

#endif
