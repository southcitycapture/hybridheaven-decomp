#include "context.h"
extern struct func_802488E8_StructBBBF0 D_801BBBF0;
extern void func_800058DC(void *arg0, void *arg1);

struct func_802476B0_StructObj {
    u8 pad0[0x18];
    u32 unk18;
};
struct func_802476B0_StructArg2 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_802476B0_StructArg1 {
    u8 pad0[0x30];
    struct func_802476B0_StructArg2 *unk30;
};
struct func_802476B0_StructArg0 {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x38 - 0x30];
    struct func_802476B0_StructObj *unk38;
};

extern void func_80005E44(void *arg0, void *arg1);
extern void func_80006214(void *arg0);
extern void func_8012636C(void *arg0, s32 arg1);
extern void func_8012C89C(void *arg0, s32 arg1, u32 arg2, u32 arg3);
extern void func_800062F8(void *arg0, u32 arg1);
extern s32 func_8000C3B0(void *arg0);
extern void func_802477BC(void);
extern u8 D_80164F40[];
extern s32 D_801BBCD0;

void func_802476B0(void *arg0, void **arg1) {
    struct func_802476B0_StructArg0 *a0 = (struct func_802476B0_StructArg0 *) arg0;
    u32 temp_v0;
    u8 *b;

    if (D_801BBCD0 != 0) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        a0->unk2C = a0->unk2C | 0x20;
        func_8012636C(arg0, 0);
        temp_v0 = a0->unk38->unk18;
        func_8012C89C(arg0, 0, temp_v0 >> 0x10, temp_v0 & 0xFFFF);
        func_800062F8(*arg1, 0x80000C00);
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk24 = 0x13;
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        b = (u8 *) &D_801BBBF0;
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4C = b[0xF32];
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4D = b[0xF33];
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4E = b[0xF34];
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4F = b[0xF35];
        func_800058DC(arg0, func_802477BC);
    }
}
