#include "common.h"

s32 func_801C3044();
void func_801C2F0C(s32, s16 *);
void func_800058DC(s32, void *);
void func_8024800C();

struct func_80247FA4_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

void func_80247FA4(s32 arg0, s32 arg1) {
    struct func_80247FA4_Struct s;

    if (func_801C3044() == 0) {
        s.a = 0;
        s.b = 0x03480017;
        s.d = 0x14;
        s.c = 1.0f;
        func_801C2F0C(3, &s.a);
        func_800058DC(arg0, func_8024800C);
    }
}
