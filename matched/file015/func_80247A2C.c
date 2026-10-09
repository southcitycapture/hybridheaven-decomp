#include "context.h"
void func_800058DC(s32, void *);
void func_800179B0(void *);
void func_801C2F0C(s32, s16 *);
s32 func_801C3044();

extern void func_800208C4(s32);
extern u8 D_80252A84[];
extern void func_80247AAC();

struct func_80247A2C_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

void func_80247A2C(s32 arg0, s32 arg1) {
    struct func_80247A2C_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0x1000;
        sp18.b = 0x03480017;
        sp18.d = 0x14;
        sp18.c = 1.0f;
        func_801C2F0C(3, (s16 *)&sp18);
        func_800179B0(D_80252A84);
        func_800208C4(0x7C);
        func_800058DC(arg0, (void *)func_80247AAC);
    }
}
