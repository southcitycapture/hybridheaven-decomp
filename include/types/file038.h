#ifndef TYPES_FILE038_H
#define TYPES_FILE038_H

/* Recovered types for file038 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_801E6A50; 2 functions */
typedef struct T_D_801E6A50_file038 { /* size >= 0x4 */
    /* 0x000 */ s32 unk0; /* 4 uses; also s8@0x3 */
} T_D_801E6A50_file038;

/* D_801E6CF0; 1 functions */
typedef struct T_D_801E6CF0_file038 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E6CF0_file038;

/* D_801E6D08; 1 functions */
typedef struct T_D_801E6D08_file038 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E6D08_file038;

/* D_801E6D20; 1 functions */
typedef struct T_D_801E6D20_file038 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E6D20_file038;

/* D_801E6D38; 1 functions */
typedef struct T_D_801E6D38_file038 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E6D38_file038;

/* D_801E6D50; 1 functions */
typedef struct T_D_801E6D50_file038 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E6D50_file038;

/* func_801DAAF0; 8 functions */
typedef struct T_func_801DAAF0_file038 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 32 uses */
} T_func_801DAAF0_file038;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file038 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file038;

/* func_8038D8B8; 1 functions */
typedef struct T_func_8038D8B8_file038 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_func_80107830_a0 *unk14; /* 11 uses */
} T_func_8038D8B8_file038;

extern s32 D_801D8D60;
extern T_D_80162DD0 D_801DB64C;
extern T_D_801E0A48_file026 D_801E0A48;
extern T_D_801E6A50_file038 D_801E6A50;
extern u32 D_801E6B48;
extern s32 D_801E6B4C;
extern s32 D_801E6C34;
extern T_D_801E6CF0_file038 D_801E6CF0;
extern T_D_801E6D08_file038 D_801E6D08;
extern T_D_801E6D20_file038 D_801E6D20;
extern T_D_801E6D38_file038 D_801E6D38;
extern T_D_801E6D50_file038 D_801E6D50;
extern f32 D_801E6FD0;
extern f32 D_801E6FD4;
extern f32 D_801E6FD8;
extern f32 D_801E6FDC;
extern f32 D_801E6FE0;
extern f32 D_801E6FE4;
extern f32 D_801E6FE8;
extern f32 D_801E6FEC;
extern f32 D_801E6FF0;
extern f32 D_801E6FF4;
extern f32 D_801E6FF8;
extern f32 D_801E6FFC;
extern f32 D_801E7000;
extern f32 D_801E7004;
extern f32 D_801E7008;
extern f32 D_801E700C;
extern f32 D_801E7010;
extern f32 D_801E7014;
extern f32 D_801E7018;
extern f32 D_801E701C;
extern f32 D_801E7020;
extern f32 D_801E7024;
extern f32 D_801E7028;
extern f32 D_801E702C;
extern f32 D_801E7030;
extern f32 D_801E7034;
extern f32 D_801E7038;
extern f32 D_801E703C;
extern f32 D_801E7040;
extern f32 D_801E7044;
extern f32 D_801E7048;
extern f32 D_801E704C;
extern f32 D_801E7050;
extern f32 D_801E7054;
extern f32 D_801E7058;
extern f32 D_801E705C;
extern f32 D_801E7060;
extern f32 D_801E7064;
extern f32 D_801E7068;
extern f32 D_801E706C;
extern f32 D_801E7070;
extern f32 D_801E7074;
extern f32 D_801E7078;
extern f32 D_801E707C;
extern f32 D_801E7080;
extern f32 D_801E7084;
extern f32 D_801E7088;
extern f32 D_801E708C;
extern f32 D_801E7090;
extern f32 D_801E7094;
extern f32 D_801E7098;
extern f32 D_801E709C;
extern f32 D_801E70A0;
extern f32 D_801E70A4;
extern f32 D_801E70A8;
extern f32 D_801E70AC;
extern f32 D_801E70B0;
extern f32 D_801E70B4;
extern f32 D_801E70B8;
extern f32 D_801E70BC;
extern f32 D_801E70C0;
extern f32 D_801E70C4;
extern f32 D_801E70C8;
extern f32 D_801E70CC;
extern f32 D_801E70D0;
extern f32 D_801E70D4;
extern f32 D_801E70D8;
extern f32 D_801E70DC;
extern f32 D_801E70E0;
extern f32 D_801E70E4;
extern f32 D_801E70E8;
extern f32 D_801E70EC;
extern f32 D_801E70F0;
extern f32 D_801E70F4;
extern f32 D_801E70F8;
extern f32 D_801E70FC;
extern f32 D_801E7100;
extern f32 D_801E7104;
extern f32 D_801E7108;
extern f32 D_801E710C;
extern f32 D_801E7110;
extern f32 D_801E7114;
extern f32 D_801E7118;
extern f32 D_801E711C;
extern f32 D_801E7120;
extern f32 D_801E7124;
extern f32 D_801E7128;
extern f32 D_801E712C;
extern f32 D_801E7130;
extern f32 D_801E7134;
extern f32 D_801E7138;
extern f32 D_801E713C;
extern f32 D_801E7140;
extern f32 D_801E7144;
extern f32 D_801E7148;
extern f32 D_801E714C;
extern f32 D_801E7150;
extern f32 D_801E7154;
extern f32 D_801E7158;
extern f32 D_801E715C;
extern f32 D_801E7160;
extern f32 D_801E7164;
extern f32 D_801E7168;
extern f32 D_801E716C;
extern f32 D_801E7170;
extern f32 D_801E7174;
extern f32 D_801E7178;
extern f32 D_801E717C;
extern f32 D_801E7180;
extern f32 D_801E7184;
extern f32 D_801E7188;
extern f32 D_801E718C;
extern f32 D_801E7190;
extern f32 D_801E7194;
extern f32 D_801E7198;
extern f32 D_801E719C;
extern f32 D_801E71A0;
extern f32 D_801E71A4;
extern f32 D_801E71A8;
extern f32 D_801E71AC;
extern f32 D_801E71B0;
extern f32 D_801E71B4;
extern f32 D_801E71B8;
extern f32 D_801E71BC;
extern f32 D_801E71C0;
extern f32 D_801E71C4;
extern f32 D_801E71C8;
extern f32 D_801E71CC;
extern f32 D_801E71D0;
extern f32 D_801E71D4;
extern f32 D_801E71D8;
extern f32 D_801E71DC;
extern f32 D_801E71E0;
extern f32 D_801E71E4;
extern f32 D_801E71E8;
extern f32 D_801E71EC;
extern f32 D_801E71F0;
extern f32 D_801E71F4;
extern f32 D_801E71F8;
extern f32 D_801E71FC;
extern f32 D_801E7200;
extern f32 D_801E7204;
extern f32 D_801E7208;
extern f32 D_801E720C;
extern f32 D_801E7210;
extern f32 D_801E7214;
extern f32 D_801E7218;
extern f32 D_801E721C;
extern f32 D_801E7220;
extern f32 D_801E7224;
extern f32 D_801E7228;
extern f32 D_801E722C;
extern f32 D_801E7230;
extern f32 D_801E7234;
extern f32 D_801E7238;
extern f32 D_801E723C;
extern f32 D_801E7240;
extern f32 D_801E7244;
extern f64 D_801E7248;
extern f64 D_801E7250;
extern f32 D_801E7258;
extern f64 D_801E7260;
extern f32 D_801E7268;
extern f64 D_801E7270;
extern f64 D_801E7278;
extern f32 D_801E7280;
extern f64 D_801E7288;
extern f32 D_801E7290;
extern f32 D_801E7294;
extern f32 D_801E7298;
extern f32 D_801E72B0;
extern f32 D_801E72B4;
extern f32 D_801E72B8;
extern T_D_801E0A48_file026 D_8038DD90;
extern T_D_801E0A48_file026 D_8038DDC0;

#endif
