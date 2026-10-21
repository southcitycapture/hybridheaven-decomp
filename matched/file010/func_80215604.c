#include "context.h"

struct func_80215604_StructI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x48 - 0x10];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_80215604_StructO {
    u8 pad0[0x30];
    struct func_80215604_StructI *unk30;
};
struct func_80215604_StructA {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x94 - 0x4C];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

extern f64 D_8021AF40;
extern f64 D_8021AF48;

s32 func_80215604(struct func_80215604_StructA *arg0, struct func_80215604_StructO **arg1) {
    s32 old;
    s32 t;

    old = arg0->unk3C++;
    arg0->unk44 = arg0->unk44 - 0.25;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4C = 0x66;
    (*arg1)->unk30->unk4D = 0xCD;
    (*arg1)->unk30->unk4E = 0x4C;
    if (old % 2 == 0) {
        (*arg1)->unk30->unk48 = (u32)((u32)(*arg1)->unk30->unk48 * 0.5);
        (*arg1)->unk30->unk49 = (u32)((u32)(*arg1)->unk30->unk49 * 0.5);
        (*arg1)->unk30->unk4A = (u32)((u32)(*arg1)->unk30->unk4A * 0.5);
        (*arg1)->unk30->unk4C = (u32)((u32)(*arg1)->unk30->unk4C * 0.5);
        (*arg1)->unk30->unk4D = (u32)((u32)(*arg1)->unk30->unk4D * 0.5);
        (*arg1)->unk30->unk4E = (u32)((u32)(*arg1)->unk30->unk4E * 0.5);
    }
    if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
        return 0;
    }
    if (old % 2 == 0) {
        func_80129FB8((func_8012C6B4(0xA0) - 0x50) / 100.0 + arg0->unk94, (func_8012C6B4(0xA0) - 0x50) / 100.0 + arg0->unk98, (func_8012C6B4(0xA0) - 0x50) / 100.0 + arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x34, 0x78, -6, func_8012C6B4(0x14) / D_8021AF40 + D_8021AF48, 9, 0);
    }
    if (func_80108590(arg0->unk94, arg0->unk98, arg0->unk9C, arg0->unk40 + arg0->unk94, arg0->unk44 + arg0->unk98, arg0->unk48 + arg0->unk9C) != 0) {
        t = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0x1E, 0, 0);
        if (t != 0) {
            func_801FD260(t, arg0);
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x317);
        }
        return 0;
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    return 1;
}
