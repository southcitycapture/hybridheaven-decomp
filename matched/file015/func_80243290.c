#include "context.h"

struct func_80243290_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_80243290_StructOuter {
    u8 pad0[0x2C];
    struct func_80243290_StructInner *unk2C;
};

struct func_80243290_StructArg {
    u8 pad0[0x90];
    s16 unk90;
};

struct func_80243290_StructTriple {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern void func_800058DC(void *arg0, void *arg1);
extern s32 func_8013A1B4(void **arg0, struct func_80243290_StructTriple arg1, s32 arg2);
extern struct func_80243290_StructTriple D_8025211C;
extern f32 D_80258638;
extern f32 D_8025863C;
extern void func_80243348(void);

void func_80243290(struct func_80243290_StructArg *arg0, void **arg1) {
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk4 = D_80258638;
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk8 = 0.0f;
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unkC = D_8025863C;
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk12 = 0x1C00;
    func_8013A1B4(arg1, D_8025211C, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_80243348);
}
