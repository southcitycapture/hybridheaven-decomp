#include "context.h"

extern void func_8024244C(s32 arg0, s32 arg1);

typedef struct func_802423E0_Struct {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
} func_802423E0_Struct;

void func_802423E0(s32 arg0, s32 arg1) {
    s32 pad[5];
    func_802423E0_Struct sp;

    if (func_801C3044() == 0) {
        sp.unk0 = 0x1100;
        sp.unk4 = 0x04100026;
        sp.unk8 = 5.0f;
        func_801C2F0C(4, &sp.unk0);
        func_80133980(0x73);
        func_800058DC((void *) arg0, (void *) func_8024244C);
    }
}
