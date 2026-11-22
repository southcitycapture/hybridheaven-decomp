#include "common.h"

extern u8 D_80164F40[];
extern void func_800058DC(void *, void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern void func_8012C89C(void *, s32, s32, s32);
typedef struct func_80240D74_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_80240D74_StructC;
typedef struct func_80240D74_StructB {
    u8 pad0[0x30];
    func_80240D74_StructC *unk30;
} func_80240D74_StructB;
typedef struct func_80240D74_StructA {
    u8 pad0[0x24];
    func_80240D74_StructB *unk24;
    u8 pad1[0x94 - 0x28];
    s16 unk94;
} func_80240D74_StructA;
void func_8024101C(s32 arg0, s32 arg1);
void func_80240F54(func_80240D74_StructA *arg0, s32 arg1) {
    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        arg0->unk24->unk30->unk4 = -151.0f;
        arg0->unk24->unk30->unk8 = (-489.799988f);
        arg0->unk24->unk30->unkC = (-100.800003f);
        arg0->unk24->unk30->unk12 = 0;
        func_8012C89C(arg0, 0, 0x23B, 0);
        func_800058DC(arg0, &func_8024101C);
    }
}
