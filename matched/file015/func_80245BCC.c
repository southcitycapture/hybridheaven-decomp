#include "context.h"

struct func_80245BCC_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
};

extern s32 func_801C3B5C();
extern void func_801C2F0C(s32, void *);
extern void func_80246598(void *, s32);
extern void func_8024770C(void);
extern void func_80245C60(void);
extern void *D_8025A2A4;

void func_80245BCC(void *arg0, s32 arg1) {
    struct func_80245BCC_Struct sp18;

    if (func_801C3B5C() == 4) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x04100022;
        sp18.unkC = 6;
        sp18.unk8 = 1.5f;
        func_801C2F0C(5, &sp18);
        func_800058DC(D_8025A2A4, func_8024770C);
        ((s16 *)arg0)[0x3C / 2] = 0;
        func_800058DC(arg0, func_80245C60);
    }
    func_80246598(arg0, arg1);
}
