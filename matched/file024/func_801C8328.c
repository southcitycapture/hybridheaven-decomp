#include "context.h"

typedef struct func_801C8328_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801C8328_Inner;
typedef struct func_801C8328_Mid {
    u8 pad[0x2C];
    func_801C8328_Inner *unk2C;
} func_801C8328_Mid;
typedef struct func_801C8328_Src {
    u8 pad[0x50];
    f32 unk50;
} func_801C8328_Src;
typedef struct func_801C8328_Struct {
    u8 pad0[0x24];
    func_801C8328_Mid *unk24;
    u8 pad28[0x14];
    s16 unk3C;
    u8 pad3E[0x1E];
    func_801C8328_Src *unk5C;
    u8 pad60[0x30];
    u8 unk90;
    u8 pad91[3];
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801C8328_Struct;

extern u8 D_801CD13C[];
extern f32 D_801CD094[];
extern u8 D_801CCC40[];
extern u8 D_801CCCA8[];
extern u16 D_801CFDAC[];
extern s32 func_801C5AD4(u8);
extern void func_8014753C(void *, s32);
extern void func_80147370(void *, s32, s32, s32, s32);
extern u8 func_801C8568[];

void func_801C8328(func_801C8328_Struct *arg0, s32 arg1) {
    func_801C8328_Src *sp2C;
    f32 t;
    f32 v;
    func_801C8328_Struct *r;

    sp2C = arg0->unk5C;
    r = func_80005670((s32)arg0, D_801CD13C);
    if (r != NULL) {
        r->unk90 = arg0->unk90;
    }
    arg0->unk24->unk2C->unk4 = D_801CD094[0];
    arg0->unk24->unk2C->unk8 = D_801CD094[1];
    arg0->unk24->unk2C->unkC = D_801CD094[2];
    if (arg0->unk90 == 0) {
        arg0->unk24->unk2C->unk12 = 0;
    }
    if (func_801C5AD4(arg0->unk90) != 0) {
        func_8014753C(arg0, (s32)D_801CCC40 | 0x40000000);
        func_80147370(arg0, 0, 0, 0, 0);
    } else {
        func_8014753C(arg0, (s32)D_801CCCA8 | 0x40000000);
        func_80147370(arg0, 0, 0, 0, 0xFF);
    }
    arg0->unk98 = 0;
    arg0->unk3C = 0;
    arg0->unk96 = arg0->unk98;
    arg0->unk94 = arg0->unk98;
    arg0->unk9A = arg0->unk98;
    t = sp2C->unk50 - 18.0f;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk34 = 6.0f + t;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk40 = 16.0f + t;
    if (D_801CFDAC[arg0->unk90] == 0xFA) {
        v = 2.0f;
    } else {
        v = 0.0f;
    }
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk44 = v;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk38 = 25.0f + v;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk28 = (2.0f - 1.0f) * v + 50.0f;
    {
        extern void func_800058DC();
        func_800058DC(arg0, func_801C8568);
    }
}
