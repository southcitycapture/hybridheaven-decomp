#include "context.h"

extern s32 func_801C3044(void);
extern void func_801C2F0C(s32, s16 *);
extern void func_80246E00(void);

struct func_80246D90_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x20 - 0x0E];
};

void func_80246D90(void *arg0, s32 arg1) {
    struct func_80246D90_Struct sp;

    if (func_801C3044() == 0) {
        sp.a = 0x1000;
        sp.b = 0x0168002D;
        sp.c = 3.0f;
        sp.d = 0xF;
        func_801C2F0C(5, &sp.a);
        ((s16 *)arg0)[0x3C / 2] = 0;
        func_800058DC(arg0, func_80246E00);
    }
}
