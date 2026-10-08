#include "context.h"

struct func_80242F10_Inner {
    u8 pad[4];
    f32 unk4;
};

struct func_80242F10_Outer {
    u8 pad[0x2C];
    struct func_80242F10_Inner *unk2C;
};

extern struct func_80242F10_Outer *D_801BBCD0;
extern void func_80242F80();
extern void func_80243124();
extern s32 func_80150584();

void func_80242F10(void *arg0, void *arg1) {
    if (func_80150584() == 0) {
        if (D_801BBCD0->unk2C->unk4 < 0.0f) {
            func_800058DC(arg0, func_80242F80);
            return;
        }
        func_800058DC(arg0, func_80243124);
    }
}
