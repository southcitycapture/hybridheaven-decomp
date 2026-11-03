#ifndef TYPES_FILE040_H
#define TYPES_FILE040_H

/* Recovered types for file040 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_801E821C; 2 functions */
typedef struct T_D_801E821C_file040 { /* size >= 0x4 */
    /* 0x000 */ s32 unk0; /* 4 uses; also s8@0x3 */
} T_D_801E821C_file040;

/* D_8038DF70; 1 functions */
typedef struct T_D_8038DF70_file040 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x8];
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8038DF70_file040;

/* func_801DAAF0; 12 functions */
typedef struct T_func_801DAAF0_file040 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 30 uses */
} T_func_801DAAF0_file040;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file040 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file040;

/* func_8038D830; 1 functions */
typedef struct T_func_8038D830_file040 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x20];
    /* 0x020 */ struct T_func_80107830_a0 *unk20; /* 3 uses */
    /* 0x024 */ struct T_func_8038D830_file040_p24_p0 **unk24; /* 8 uses */
} T_func_8038D830_file040;

/* pointed to by T_func_8038D830_file040_p24.0x0; 1 functions */
typedef struct T_func_8038D830_file040_p24_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8038D830_file040_p24_p0_p2C *unk2C; /* 8 uses */
} T_func_8038D830_file040_p24_p0;

/* pointed to by T_func_8038D830_file040_p24_p0.0x2C; 1 functions */
typedef struct T_func_8038D830_file040_p24_p0_p2C { /* size >= 0x34 */
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
} T_func_8038D830_file040_p24_p0_p2C;

/* func_8038D8B8; 1 functions */
typedef struct T_func_8038D8B8_file040 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_func_80107830_a0 *unk14; /* 12 uses */
} T_func_8038D8B8_file040;

extern s32 D_801D8D60;
extern T_D_801E0A48_file026 D_801E0A48;
extern T_D_801E821C_file040 D_801E821C;
extern T_D_8016379C D_801E8248;
extern s32 D_801E82DC;
extern s32 D_801E82E0;
extern u32 D_801E82F4;
extern u32 D_801E83B4;
extern s32 D_801E83B8;
extern s32 D_801E83BC;
extern s32 D_801E83C0;
extern u32 D_801E8468;
extern f32 D_801E846C;
extern f32 D_801E84F0;
extern f32 D_801E84F4;
extern f32 D_801E84F8;
extern f32 D_801E84FC;
extern f32 D_801E8500;
extern f32 D_801E8504;
extern f32 D_801E8508;
extern f32 D_801E850C;
extern f32 D_801E8510;
extern f32 D_801E8514;
extern f32 D_801E8518;
extern f32 D_801E851C;
extern f32 D_801E8520;
extern f32 D_801E8524;
extern f32 D_801E8528;
extern f32 D_801E852C;
extern f32 D_801E8530;
extern f32 D_801E8534;
extern f32 D_801E8538;
extern f32 D_801E853C;
extern f32 D_801E8540;
extern f32 D_801E8544;
extern f32 D_801E8548;
extern f32 D_801E854C;
extern f32 D_801E8550;
extern f32 D_801E8554;
extern f32 D_801E8558;
extern f32 D_801E855C;
extern f32 D_801E8560;
extern f32 D_801E8564;
extern f32 D_801E8568;
extern f32 D_801E856C;
extern f32 D_801E8570;
extern f32 D_801E8574;
extern f32 D_801E8578;
extern f32 D_801E857C;
extern f32 D_801E8580;
extern f32 D_801E8584;
extern f32 D_801E8588;
extern f32 D_801E858C;
extern f32 D_801E8590;
extern f32 D_801E8594;
extern f32 D_801E8598;
extern f32 D_801E859C;
extern f32 D_801E85A0;
extern f32 D_801E85A4;
extern f32 D_801E85A8;
extern f32 D_801E85AC;
extern f32 D_801E85B0;
extern f32 D_801E85B4;
extern f32 D_801E85B8;
extern f32 D_801E85BC;
extern f32 D_801E85C0;
extern f32 D_801E85C4;
extern f32 D_801E85C8;
extern f32 D_801E85CC;
extern f32 D_801E85D0;
extern f32 D_801E85D4;
extern f32 D_801E85D8;
extern f32 D_801E85DC;
extern f32 D_801E85E0;
extern f32 D_801E85E4;
extern f32 D_801E85E8;
extern f32 D_801E85EC;
extern f32 D_801E85F0;
extern f32 D_801E85F4;
extern f32 D_801E85F8;
extern f32 D_801E85FC;
extern f32 D_801E8600;
extern f32 D_801E8604;
extern f32 D_801E8608;
extern f32 D_801E860C;
extern f32 D_801E8610;
extern f32 D_801E8614;
extern f32 D_801E8618;
extern f32 D_801E861C;
extern f32 D_801E8620;
extern f32 D_801E8624;
extern f32 D_801E8628;
extern f32 D_801E862C;
extern f32 D_801E8630;
extern f32 D_801E8634;
extern f32 D_801E8638;
extern f32 D_801E863C;
extern f32 D_801E8640;
extern f32 D_801E8644;
extern f32 D_801E8648;
extern f32 D_801E864C;
extern f32 D_801E8650;
extern f32 D_801E8654;
extern f32 D_801E8658;
extern f32 D_801E865C;
extern f32 D_801E8660;
extern f32 D_801E8664;
extern f32 D_801E8668;
extern f32 D_801E866C;
extern f32 D_801E8670;
extern f32 D_801E8674;
extern f32 D_801E8678;
extern f32 D_801E867C;
extern f32 D_801E8680;
extern f32 D_801E8684;
extern f32 D_801E8688;
extern f32 D_801E868C;
extern f32 D_801E8690;
extern f32 D_801E8694;
extern f32 D_801E8698;
extern f32 D_801E869C;
extern f32 D_801E86A0;
extern f32 D_801E86A4;
extern f32 D_801E86A8;
extern f32 D_801E86AC;
extern f32 D_801E86B0;
extern f32 D_801E86B4;
extern f32 D_801E86B8;
extern f32 D_801E86BC;
extern f32 D_801E86C0;
extern f32 D_801E86C4;
extern f32 D_801E86C8;
extern f32 D_801E86CC;
extern f32 D_801E86D0;
extern f32 D_801E86D4;
extern f32 D_801E86D8;
extern f32 D_801E86DC;
extern f32 D_801E86E0;
extern f32 D_801E86E4;
extern f32 D_801E86E8;
extern f32 D_801E86EC;
extern f32 D_801E86F0;
extern f32 D_801E86F4;
extern f32 D_801E86F8;
extern f32 D_801E86FC;
extern f32 D_801E8700;
extern f32 D_801E8704;
extern f32 D_801E8708;
extern f32 D_801E870C;
extern f32 D_801E8710;
extern f32 D_801E8714;
extern f32 D_801E8718;
extern f32 D_801E871C;
extern f32 D_801E8720;
extern f32 D_801E8724;
extern f32 D_801E8728;
extern f32 D_801E872C;
extern f32 D_801E8730;
extern f32 D_801E8734;
extern f32 D_801E8738;
extern f32 D_801E873C;
extern f32 D_801E8740;
extern f32 D_801E8744;
extern f32 D_801E8748;
extern f32 D_801E874C;
extern f32 D_801E8750;
extern f32 D_801E8754;
extern f32 D_801E8758;
extern f32 D_801E875C;
extern f32 D_801E8760;
extern f32 D_801E8764;
extern f32 D_801E8768;
extern f32 D_801E876C;
extern f32 D_801E8770;
extern f32 D_801E8774;
extern f32 D_801E8778;
extern f32 D_801E877C;
extern f32 D_801E8780;
extern f32 D_801E8784;
extern f32 D_801E8788;
extern f32 D_801E878C;
extern f32 D_801E8790;
extern f32 D_801E8794;
extern f32 D_801E8798;
extern f32 D_801E879C;
extern f32 D_801E87A0;
extern f32 D_801E87A4;
extern f32 D_801E87A8;
extern f32 D_801E87AC;
extern f32 D_801E87B0;
extern f32 D_801E87B4;
extern f32 D_801E87B8;
extern f32 D_801E87BC;
extern f32 D_801E87C0;
extern f32 D_801E87C4;
extern f32 D_801E87C8;
extern f32 D_801E87CC;
extern f32 D_801E87D0;
extern f64 D_801E87D8;
extern f32 D_801E87E0;
extern f64 D_801E87E8;
extern f64 D_801E87F0;
extern f64 D_801E87F8;
extern f32 D_801E8800;
extern f64 D_801E8808;
extern f64 D_801E8810;
extern f32 D_801E8854;
extern f32 D_801E8858;
extern f64 D_801E88A8;
extern f64 D_801E88B0;
extern f32 D_801E88B8;
extern f32 D_801E88BC;
extern f32 D_801E88C0;
extern f64 D_801E88E8;
extern f32 D_801E88F0;
extern f64 D_801E88F8;
extern f64 D_801E8900;
extern s32 D_801E8910;
extern s32 D_801E8914;
extern s32 D_801E8918;
extern s32 D_801E891C;
extern s32 D_801E8920;
extern s32 D_801E8924;
extern s32 D_801E8928;
extern s32 D_801E892C;
extern s32 D_801E8990;
extern s32 D_801E8994;
extern s32 D_801E8998;
extern s32 D_801E899C;
extern s32 D_801E89A0;
extern s32 D_801E89A4;
extern s32 D_801E89A8;
extern s32 D_801E89AC;
extern s32 D_801E89B0;
extern s32 D_801E89B4;
extern s32 D_801E89B8;
extern s32 D_801E89BC;
extern s32 D_801E89C0;
extern s32 D_801E89C4;
extern s32 D_801E89C8;
extern s32 D_801E89CC;
extern T_D_801E0A48_file026 D_8038DD90;
extern T_D_801E0A48_file026 D_8038DDC0;
extern T_D_8038DF70_file040 D_8038DF70;

#endif
