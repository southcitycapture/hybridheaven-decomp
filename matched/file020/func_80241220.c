#include "context.h"
struct func_80241220_Inner {
    u8 pad0[0x4];
    f32 u4;
    f32 u8;
    f32 uC;
    u8 pad10[0x14];
    s32 u24;
    u8 pad28[0x8];
    s32 u30;
    u8 pad34[0x18];
    u8 u4C;
    u8 u4D;
    u8 u4E;
    u8 u4F;
};
struct func_80241220_Outer {
    u8 pad[0x30];
    struct func_80241220_Inner *unk30;
};
void func_802413A0(void *arg0, s32 arg1);
void func_802418D4(s32 arg0, s32 arg1);
extern s32 func_80126CC0(s32, void *);
struct func_80241220_Buf {
    s32 w0;
    s32 w4;
    s32 w8;
    s32 wC;
};
extern s32 func_80133A24(s32);
extern u8 func_80126EAC[];
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];

void func_80241220(s32 arg0, struct func_80241220_Outer **arg1) {
    struct func_80241220_Buf sp20;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp20 = *(struct func_80241220_Buf *)&D_80164F40;
        sp20.w4 = 0x80000600;
        func_80005E44(arg0, &sp20);
        func_80006214(arg0);
        func_8012C89C((void *)arg0, 0, 0x292, 2);
        (*arg1)->unk30->u24 |= 0x400;
        (*arg1)->unk30->u30 = (s32)D_8017AF90 | 0x40000000;
        (*arg1)->unk30->u4 = 0.0f;
        (*arg1)->unk30->u8 = 0.0f;
        (*arg1)->unk30->uC = 0.0f;
        (*arg1)->unk30->u4C = D_801BBBF0[0xF32];
        (*arg1)->unk30->u4D = D_801BBBF0[0xF33];
        (*arg1)->unk30->u4E = D_801BBBF0[0xF34];
        (*arg1)->unk30->u4F = D_801BBBF0[0xF35];
        if (func_80133A24(0x171) != 0) {
            func_8012C89C((void *)arg0, 0, 0x292, 3);
            func_800058DC((void *)arg0, (void *)func_802418D4);
            return;
        }
        func_800058DC((void *)arg0, (void *)func_802413A0);
    }
}
