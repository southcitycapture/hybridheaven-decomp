#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s8 D_8023E3A4;
extern u8 D_8023E3AC;
extern s32 D_8024086C;
extern s32 D_80240870;
extern void (*D_80216D10[])(void *, s32);
extern void func_800058DC();
u8 func_80006214();
extern void func_80145310(s32, s32, s32);
void func_80146208(s32, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_80234450(void);
typedef struct func_80237004_Struct {
    u8 pad[0xA2];
    s8 unkA2;
    u8 pad2;
    s8 unkA4;
    u8 pad3[3];
    u8 unkA8;
    u8 unkA9;
} func_80237004_Struct;
extern void func_8023448C(func_80237004_Struct *, s32 *, s32, s16, s32, s32, s32);
s32 func_802345B0(s32 arg0, s32 *arg1, u8 arg2, s16 arg3, s16 arg4, u8 arg5);
typedef struct func_80235B40_Struct {
    u8 pad[0xA4];
    s8 unkA4;
    s8 unkA5;
} func_80235B40_Struct;
void func_80235B40(func_80235B40_Struct *arg0);
typedef struct func_80238254_StructP {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80238254_StructP;
typedef struct func_80238254_Struct {
    u8 pad0[0x94];
    func_80238254_StructP *unk94;
    u8 pad1[8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
    s8 unkA6;
    u8 unkA7;
} func_80238254_Struct;
void func_80238254(func_80238254_Struct *arg0, s32 arg1);
struct func_802387D4_Glob {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xC];
    s32 unkEC;
    u8 pad2[0xF40];
    u8 unk1030;
};


typedef struct func_80238484_Struct3 {
    u8 b[3];
} func_80238484_Struct3;

typedef struct func_80238484_StructC {
    u8 pad[0x5C];
    s32 unk5C;
} func_80238484_StructC;

typedef struct func_80238484_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x80];
    s32 unk90;
    void *unk94;
    void *unk98;
    void *unk9C;
    u8 padA0[2];
    s8 unkA2;
    u8 padA3;
    s8 unkA4;
    s8 unkA5;
} func_80238484_Struct;

typedef struct func_80238484_Node {
    u8 pad[0x22];
    u8 unk22;
} func_80238484_Node;
extern void func_80002364(s32, s32, s32, u8);
extern void func_80116E80(s32);
extern void func_80376B2C(void *);
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern func_80238484_Struct3 D_8023E518;

void func_80238484(func_80238484_Struct *arg0, s32 *arg1) {
    u8 buf[16];
#define sp71 buf[1]
#define sp72 ((s8 *)&buf[2])
    void *var_v0_2;
    func_80238484_Struct3 sp68;
    void *var_v0;
    s16 temp_s4;
    u8 var_s1;
    s32 t5c;

    t5c = ((struct func_802387D4_Glob *)D_801BBBF0)->unkDC ^ arg0->unkC;
    if (t5c == 0) {
        var_v0 =D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    arg0->unk98 = var_v0;
    var_v0_2 = var_v0;
    var_v0 = (void *)(*(s32 *)(D_801BBBF0 + 0xDC) ^ arg0->unkC);
    if (var_v0 == NULL) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    arg0->unk9C = var_v0;
    t5c = ((func_80238484_StructC *)arg0->unkC)->unk5C;
    arg0->unk90 = t5c;
    sp68 = D_8023E518;
    var_v0 = (void *)(*(s32 *)(D_801BBBF0 + 0xDC) ^ arg0->unkC);
    if (var_v0 == NULL) {
        arg0->unk94 = D_801BBC8C;
    } else {
        arg0->unk94 = D_801BBCAC;
    }
    func_80002364(0x0F000000, 8, 2, D_801BBBF0[0x1030]);
    func_80116E80(0x10);
    func_80376B2C(var_v0_2);
    D_8023E3A4 = 2;
    func_80234450();
    func_80146208((s32)arg0, sp72, 0xE6, 0x40, 0x72, 0x20, 0x20, 0x20, 0, 0xFF, 0x220, 0x15);
    func_80146208((s32)arg0, sp72, 0x66, 0xE0, 0x72, 0x20, 0x20, 0, 0, 0xFF, 0x220, 0x15);
    func_80145310(arg1[0], 1, 3);
    func_80145310(arg1[1], 1, 3);
    ((func_80238484_Node *)arg1[0])->unk22 = 0;
    if (D_8023E3AC >= 2) {
        *(u8 *)&arg0->unkA4 = 3;
    } else {
        *(u8 *)&arg0->unkA4 = 2;
    }
    temp_s4 = arg0->unkA4 * -9 + 9;
    sp71 = func_80006214(arg0);
    for (var_s1 = 0; var_s1 < arg0->unkA4; var_s1++) {
        func_8023448C((func_80237004_Struct *)arg0, arg1, 1, 0, temp_s4 + var_s1 * 0x12, 8, 9);
    }
    D_8024086C = (s32)(arg1 + sp71);
    sp71 = func_80006214(arg0);
    for (var_s1 = 0; var_s1 < arg0->unkA4; var_s1++) {
        func_802345B0((s32)arg0, arg1, sp68.b[var_s1], 0, temp_s4 + var_s1 * 0x12, 1);
    }
    D_80240870 = (s32)(arg1 + sp71);
    arg0->unkA2 = 0;
    arg0->unkA5 = arg0->unkA4 - 2;
    func_80235B40((func_80235B40_Struct *)arg0);
    func_800058DC(arg0, func_80238254);
}
