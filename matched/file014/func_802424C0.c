#include "context.h"

extern s32 func_801C3044();
extern void func_801C2F0C(s32, s16 *);
extern void func_800058DC(s32, void *);
extern void func_8024252C();

struct func_802424C0_Struct {
    s16 a;
    s16 b;
    s32 c;
    f32 d;
    s16 e;
    u8 pad[0x10];
};

void func_802424C0(s32 arg0, s32 arg1) {
    struct func_802424C0_Struct sp;

    if (func_801C3044() == 0) {
        sp.a = 0x1000;
        sp.c = 0x01680041;
        sp.e = 0xF;
        sp.d = 1.0f;
        func_801C2F0C(3, &sp.a);
        func_800058DC(arg0, func_8024252C);
    }
}
