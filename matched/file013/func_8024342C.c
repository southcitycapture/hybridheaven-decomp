#include "context.h"

typedef struct func_8024342C_V {
    s32 a;
    s32 b;
    s32 c;
} func_8024342C_V;

typedef struct func_8024342C_E {
    u8 pad0[0x78];
    u16 unk78;
} func_8024342C_E;

typedef struct func_8024342C_Struct {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_8024342C_E *unk5C;
    u8 pad60[0x90 - 0x60];
    u8 unk90;
    u8 pad91[4];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    u8 pad9A[2];
    s16 unk9C;
} func_8024342C_Struct;

extern s32 D_8012CE9C(s32, s32, func_8024342C_V, s32);
extern func_8024342C_V D_80246C70;

void func_8024342C(func_8024342C_Struct *arg0, s32 arg1) {
    func_8024342C_E *sp2C;
    f32 temp_fa0;
    f32 temp_fv0;
    s16 temp_v1;
    func_80242FD0_StructB *temp_v0;

    sp2C = arg0->unk5C;
    if (D_8012CE9C(arg1, (s32)sp2C, D_80246C70, 1) == 0) {
        temp_v1 = arg0->unk98;
        temp_v0 = arg0->unk24->unk2C;
        temp_fv0 = ((f32) temp_v1 - temp_v0->unk4) / 3.0f;
        temp_fa0 = ((f32) (arg0->unk9C - temp_v1) - temp_v0->unkC) / 3.0f;
        temp_v0->unk4 += temp_fv0;
        temp_v0 = arg0->unk24->unk2C;
        temp_v0->unkC = temp_v0->unkC + temp_fa0;
        if (func_80010550(arg1, sp2C) != 0) {
            sp2C->unk78 = 1;
            arg0->unk95 ^= 1;
            arg0->unk90 = 1;
            ((u16 *)D_80246C64)[2] = 0;
            func_80242F70(D_80246C64);
            func_8013A1B4(arg1, *(func_8024342C_V *)D_80246C64, 0x1FFFFF);
            func_800058DC(arg0, func_802431C4);
        }
    }
}
