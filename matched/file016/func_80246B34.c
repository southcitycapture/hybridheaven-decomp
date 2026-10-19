#include "context.h"

struct func_80246B34_StructInit {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_80246B34_StructData {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x14];
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80246B34_StructObj {
    u8 pad[0x30];
    struct func_80246B34_StructData *unk30;
};
extern struct func_80246B34_StructInit D_80164F40;
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_8012C89C(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_80133A24(s32 arg0);
extern void func_80246C90(s32 arg0, s32 arg1);

void func_80246B34(s32 arg0, struct func_80246B34_StructObj **arg1) {
    struct func_80246B34_StructInit sp20 = D_80164F40;

    sp20.unk4 = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    if (func_80133A24(0xBF) != 0) {
        func_8012C89C((void *)arg0, 0, 0x3A0, 0xA);
    } else {
        func_8012C89C((void *)arg0, 0, 0x3A0, 9);
    }
    (*arg1)->unk30->unk24 |= 0x400;
    (*arg1)->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk4 = 0.0f;
    (*arg1)->unk30->unk8 = 0.0f;
    (*arg1)->unk30->unkC = 0.0f;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    func_800058DC(arg0, func_80246C90);
}
