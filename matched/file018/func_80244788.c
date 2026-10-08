#include "context.h"

struct func_80244788_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80244788_Mid {
    u8 pad0[0x30];
    struct func_80244788_Inner *unk30;
};

struct func_80244788_Struct {
    u8 pad0[0x24];
    struct func_80244788_Mid *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
};

void func_80244788(struct func_80244788_Struct *arg0, s32 arg1) {
    struct func_80244788_Inner *temp_v0;
    extern s32 func_80133A24();

    if (func_80133A24(0x146, arg0) == 0) {
        if (arg0->unk90 != 0) {
            arg0->unk90 = arg0->unk90 - 1;
            temp_v0 = arg0->unk24->unk30;
            temp_v0->unk8 = temp_v0->unk8 - 2.0f;
        }
    }
}
