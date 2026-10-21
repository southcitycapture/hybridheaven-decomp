#include "context.h"

extern f32 D_8025A0D0;
extern f32 D_8025A0D4;
struct func_8024F984_Struct;
void func_8024F984(struct func_8024F984_Struct *arg0, volatile s32 arg1);

typedef struct func_8024F8C0_StructArg {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_8024F8C0_StructArg;

typedef struct func_8024F8C0_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_8024F8C0_StructInner;

typedef struct func_8024F8C0_StructOuter {
    u8 pad[0x2C];
    func_8024F8C0_StructInner *unk2C;
} func_8024F8C0_StructOuter;

void func_8024F8C0(func_8024F8C0_StructArg *arg0, func_8024F8C0_StructOuter **arg1) {
    s32 temp_v0;
    s32 sp18[1];
    s32 temp_a1;

    temp_v0 = arg0->unk90;
    temp_a1 = arg0->unk5C;
    sp18[0] = temp_v0;
    arg0->unk90 = temp_v0 + 1;
    func_80010550((void **)arg1, temp_a1, (void **)arg0);
    if (sp18[0] == 0) {
        func_80133980(0x77);
    }
    if (sp18[0] >= 0x78) {
        (*arg1)->unk2C->unk4 = D_8025A0D0;
        (*arg1)->unk2C->unkC = D_8025A0D4;
        (*arg1)->unk2C->unk12 = 0x800;
        func_800058DC(arg0, (void *)func_8024F984);
    }
}
