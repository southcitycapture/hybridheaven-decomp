#include "common.h"

struct func_80150970_Struct {
    s16 a;
    s16 pad0;
    s32 b;
    f32 c;
    s16 d;
    s16 pad1;
};

extern void func_800058DC(s32 arg0, void *arg1);
extern void func_801C2F0C(s32 arg0, struct func_80150970_Struct *arg1);
extern s32 func_801C3044();
extern void func_801509D8();

void func_80150970(s32 arg0, s32 arg1) {
    u8 pad[0x10];
    struct func_80150970_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0;
        sp18.b = 0x0168002D;
        sp18.d = 0x14;
        sp18.c = 1.0f;
        func_801C2F0C(3, &sp18);
        func_800058DC(arg0, &func_801509D8);
    }
}
