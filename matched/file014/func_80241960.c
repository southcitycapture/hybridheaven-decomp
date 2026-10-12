#include "context.h"

struct func_80241960_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0xA0 - 0x3E];
    f32 unkA0;
};
struct func_80241960_StructC {
    u8 pad0[0xC];
    f32 unkC;
};
struct func_80241960_StructObj {
    u8 pad0[0x2C];
    struct func_80241960_StructC *unk2C;
};
extern struct func_80241960_StructObj *D_801BBCD0;
extern void func_802419CC();

void func_80241960(struct func_80241960_StructArg0 *arg0, s32 arg1) {
    struct func_80241960_StructC *temp_v0_2;

    if (arg0->unk3C++ >= 0xF) {
        arg0->unk3C = 0U;
        arg0->unkA0 = 0.0f;
        temp_v0_2 = D_801BBCD0->unk2C;
        temp_v0_2->unkC = (f32) (temp_v0_2->unkC + 30.0f);
        func_800058DC(arg0, &func_802419CC);
    }
}
