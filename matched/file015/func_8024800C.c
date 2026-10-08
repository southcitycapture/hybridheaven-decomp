#include "context.h"

struct func_8024800C_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

extern void func_8024806C();

void func_8024800C(s32 arg0, s32 arg1) {
    struct func_8024800C_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0;
        sp18.b = 0x03480017;
        sp18.c = 3.0f;
        func_801C2F0C(4, &sp18.a);
        func_800058DC(arg0, func_8024806C);
    }
}
