#include "context.h"
extern void func_801C2F0C(s32 arg0, struct func_80240EF8_Struct *arg1);
extern void func_800058DC(void *arg0, void *arg1);
extern void func_80241524();

struct func_802414B8_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

void func_802414B8(void *arg0, s32 arg1) {
    struct func_802414B8_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0x1000;
        sp18.b = 0x0168002D;
        sp18.d = 0xF;
        sp18.c = 3.0f;
        func_801C2F0C(5, (void *) &sp18);
        func_800058DC(arg0, (void *) func_80241524);
    }
}
