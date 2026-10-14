#include "context.h"

typedef struct func_80358C6C_Vec6 {
    s32 w[3];
} func_80358C6C_Vec6;

typedef struct func_80358C6C_Obj {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad1[0x50 - 0x10];
    f32 unk50;
    u8 pad2[0xC8 - 0x54];
    func_80358C6C_Vec6 unkC8;
    func_80358C6C_Vec6 unkD4;
} func_80358C6C_Obj;

typedef struct func_80358C6C_Holder {
    u8 pad0[0x5C];
    func_80358C6C_Obj *unk5C;
} func_80358C6C_Holder;

typedef struct func_80358C6C_Arg {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x6C - 0x10];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
    u8 pad2[0x7C - 0x78];
    u8 unk7C;
    u8 pad3[0x8C - 0x7D];
    func_80358C6C_Holder *unk8C;
} func_80358C6C_Arg;

typedef struct func_80358C6C_Flags {
    u8 pad0[0x30];
    u32 b0 : 11;
    u32 bf2 : 2;
    u32 b1 : 14;
    u32 bf1 : 2;
    u32 b2 : 3;
    u8 pad1[0x390 - 0x34];
    u8 unk390;
} func_80358C6C_Flags;

typedef struct func_80358C6C_Out {
    s32 unk0;
    s32 unk4;
    f32 unk8;
    f32 unkC;
} func_80358C6C_Out;

extern void func_80223B2C(s32, func_80358C6C_Out *, func_80358C6C_Vec6, func_80358C6C_Vec6);
extern void func_801CE1C8(void *, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, s32);
extern f64 D_80389ED8;
extern void func_8035908C();
struct func_80359044_Struct;
void func_80359044(struct func_80359044_Struct *arg0, s32 arg1);

void func_80358C6C(func_80358C6C_Arg *arg0, s32 arg1) {
    func_80358C6C_Obj *obj;
    func_80358C6C_Flags *fl;
    func_80358C6C_Out out;
    f32 m;
    s32 n;
    s32 k;
    void *cb;
    volatile s32 flag;

    obj = arg0->unk8C->unk5C;
    if (D_801BBCCC == (s32)arg0->unk8C) {
        fl = (func_80358C6C_Flags *)D_801BC03C;
    } else {
        fl = (func_80358C6C_Flags *)D_801BC3D8;
    }
    func_80223B2C(arg0->unkC, &out, obj->unkC8, obj->unkD4);
    if (out.unkC < out.unk8) {
        m = out.unk8;
    } else {
        m = out.unkC;
    }
    m = m * D_80389ED8;
    m = m + 1.0;
    if (obj->unkE == 0x11D) {
        if (fl->unk390 == 2 && fl->bf1 != 0) {
            n = (u8)(obj->unk50 / 3.0);
        } else {
            n = 5;
        }
        k = n;
    } else {
        if (fl->bf2 != 0) {
            k = n = 2;
        } else {
            k = n = (u8)(obj->unk50 / 3.0);
            if (n <= 0) {
                k = n = 1;
            }
        }
    }
    if (arg0->unk7C != 0) {
        flag = 1;
    } else {
        flag = 0;
    }
    func_801CE1C8(arg0, 0xB, arg0->unk6C, arg0->unk70, arg0->unk74, 0x70, 0xFF, 0xFF, 0, 0x70, 0xFF, 0xFF, 0xC0, 0, 0xA0, 0xFF, 0, 0, 0xA0, 0xFF, 0, n, k * 10 + 0x28, m, m, m, (f32)flag, 0xC);
    func_80020718(0x10D);
    D_8038CC10->unk4C = 1;
    if (arg0->unk7C != 0) {
        cb = func_80359044;
    } else {
        cb = func_8035908C;
    }
    func_800058DC(arg0, cb);
}
