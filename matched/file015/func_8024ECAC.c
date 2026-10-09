#include "context.h"
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);

struct func_8024ECAC_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

struct func_8024ECAC_Local {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

extern s32 func_801339D0(s32);
extern void func_8024ED2C(void);

void func_8024ECAC(struct func_8024ECAC_Struct *arg0, void *arg1) {
    struct func_8024ECAC_Local sp18;

    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        sp18.a = 0x1100;
        sp18.b = 0x01900016;
        sp18.d = 0x14;
        sp18.c = 1.0f;
        func_801C2F0C(5, (f32 *)&sp18);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024ED2C);
    }
}
