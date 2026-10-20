#include "context.h"
void func_80241A68(void *arg0, s32 arg1);
void func_80241FD4(s32 arg0, s32 arg1);

typedef struct func_802418E0_Struct_In {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x14];
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802418E0_Struct_In;
typedef struct func_802418E0_Struct_Out {
    u8 pad0[0x30];
    func_802418E0_Struct_In *unk30;
} func_802418E0_Struct_Out;
typedef struct func_802418E0_Struct_Q {
    s32 a, b, c, d;
} func_802418E0_Struct_Q;
extern s32 func_80126CC0(s32, void *);
extern u8 func_80126EAC[];
extern s32 func_80133A24(s32);
extern void func_80133980(s32);
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];

void func_802418E0(s32 arg0, func_802418E0_Struct_Out **arg1) {
    func_802418E0_Struct_Q sp20;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp20 = *(func_802418E0_Struct_Q *)&D_80164F40;
        sp20.b =0x80000600;
        func_80005E44(arg0, &sp20);
        func_80006214(arg0);
        func_8012C89C((void *)arg0, 0, 0x292, 4);
        (*arg1)->unk30->unk24 |= 0x400;
        (*arg1)->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
        (*arg1)->unk30->unk4 = 0.0f;
        (*arg1)->unk30->unk8 = 0.0f;
        (*arg1)->unk30->unkC = 0.0f;
        (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
        (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
        (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
        (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
        if (func_80133A24(0x172) != 0) {
            func_8012C89C((void *)arg0, 0, 0x292, 5);
            func_800058DC((void *)arg0, func_80241FD4);
            return;
        }
        func_80133980(0x2A1);
        func_800058DC((void *)arg0, func_80241A68);
    }
}
