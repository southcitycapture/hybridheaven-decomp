#include "common.h"
extern s32 D_8017B3E0;
extern void func_800058DC(void *, void *);
extern s8 func_8012C6B4(s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D814(void *, s32, s32, s32, s32);


typedef struct func_80128EB0_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    u8 pad1[0x4];
    s32 unk24;
    u8 pad2[0x8];
    s32 unk30;
    u8 pad3[0x17];
    u8 unk4B;
} func_80128EB0_StructB;
typedef struct func_80128EB0_StructA {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    func_80128EB0_StructB *unk30;
} func_80128EB0_StructA;
typedef struct func_80128EB0_Struct {
    u8 pad0[0x24];
    func_80128EB0_StructA *unk24;
    u8 pad1[0x4];
    s32 unk2C;
    u8 pad2[0xC];
    u16 unk3C;
    u8 pad3[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4[0x50];
    f32 unk9C;
} func_80128EB0_Struct;
typedef struct func_80128EB0_Root {
    u8 pad0[0x30];
    func_80128EB0_StructB *unk30;
} func_80128EB0_Root;
extern void func_80129040();
extern f64 D_8018CD30;
extern f32 D_8018CD38;
extern f64 D_8018CD40;

void func_80128EB0(func_80128EB0_Struct *arg0, func_80128EB0_Root **arg1) {
    s32 t;

    t = arg0->unk3C;
    arg0->unk3C = t - 1;
    if (t == 0) {
        (*arg1)->unk30->unk4B = 0xF8;
        func_8012C89C(arg0, 0, 3, 2);
        arg0->unk2C |= 0x20;
        func_8012D814(arg0, 1, 4, 0x3F800000, 2);
        ((func_80128EB0_StructB *)arg0->unk24->unk30)->unk24 = 0x60100;
        (*arg1)->unk30->unk30 = (s32)&D_8017B3E0 | 0x40000000;
        arg0->unk24->unk24 = 0x80000500;
        arg0->unk40 = ((f32)func_8012C6B4(200) - 100.0) / D_8018CD30;
        if (arg0->unk9C != 0.0f) {
            arg0->unk44 = arg0->unk9C;
        } else {
            arg0->unk44 = D_8018CD38;
        }
        arg0->unk48 = ((f32)func_8012C6B4(200) - 100.0) / D_8018CD40;
        (*arg1)->unk30->unk18 = 0.0f;
        (*arg1)->unk30->unk1C = 0.0f;
        func_800058DC(arg0, (void *)func_80129040);
    }
}
