#include "context.h"

struct func_8024A9C8_Inner {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_8024A9C8_Obj {
    u8 pad[0x2C];
    struct func_8024A9C8_Inner *unk2C;
};

extern void func_8024AA38(s32 arg0, s32 arg1);

void func_8024A9C8(void *arg0, struct func_8024A9C8_Obj **arg1) {
    (*arg1)->unk2C->unk4 = -70.0f;
    (*arg1)->unk2C->unk8 = -200.0f;
    (*arg1)->unk2C->unkC = -540.0f;
    (*arg1)->unk2C->unk12 = 0x1800;
    func_800058DC(arg0, (void *) func_8024AA38);
}
