#include "context.h"

typedef struct func_8024BC80_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
} func_8024BC80_StructB;

typedef struct func_8024BC80_StructA {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024BC80_StructB *unk30;
} func_8024BC80_StructA;

typedef struct func_8024BC80_Arg0 {
    u8 pad[0x3C];
    s16 unk3C;
} func_8024BC80_Arg0;

extern void func_800058DC(void *, void *);
void func_8024C2F4(s32 arg0, s32 arg1);
void func_8024BDE8(void *arg0, void **arg1);
extern s32 func_80126CC0(void *, void *);
extern u8 func_80126EAC[];
typedef struct func_8024BC80_Struct4 {
    s32 w[4];
} func_8024BC80_Struct4;
extern func_8024BC80_Struct4 D_80164F40;
extern u8 D_8017AD28[];
extern u8 D_801BC3D8[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);

void func_8024BC80(func_8024BC80_Arg0 *arg0, func_8024BC80_StructA **arg1) {
    func_8024BC80_Struct4 sp;
    func_8024BC80_StructB *tb;
    f32 t;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        if (func_80133A24(0x7D) != 0) {
            func_800058DC(arg0, func_8024C2F4);
            return;
        }
        sp = D_80164F40;
        sp.w[1] = 0x80000C00;
        func_80005E44(arg0, &sp);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x260, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = 1.0f;
        tb = (*arg1)->unk30;
        t = tb->unk20;
        tb->unk1C = t;
        (*arg1)->unk30->unk18 = t;
        (*arg1)->unk30->unk4 = -600.0f;
        (*arg1)->unk30->unk8 = 0.0f;
        (*arg1)->unk30->unkC = 0.0f;
        (*arg1)->unk30->unk12 = 0;
        (*arg1)->unk22 = 0;
        arg0->unk3C = 0;
        D_801BC3D8[0x3BA] = 1;
        func_800058DC(arg0, func_8024BDE8);
    }
}
