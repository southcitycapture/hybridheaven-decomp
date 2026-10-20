#include "context.h"

struct func_802438A4_S2C {
    u8 pad0[0x1C];
    void *unk1C;
};
struct func_802438A4_S34 {
    u8 pad0[0xC];
    s16 unkC;
};
struct func_802438A4_Struct {
    u8 pad0[0x2C];
    struct func_802438A4_S2C *unk2C;
    u8 pad30[4];
    struct func_802438A4_S34 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};
extern void func_8022696C();
extern u8 func_80237250[];
extern u8 func_80243920[];

void func_802438A4(struct func_802438A4_Struct *arg0, s32 arg1) {
    struct func_802438A4_S2C *s = arg0->unk2C;
    struct func_802438A4_S34 *p = arg0->unk34;
    u8 *c = &arg0->unk42;

    if (s->unk1C !=(void *)func_80237250) {
        func_8022696C();
        return;
    }
    *c += 1;
    if (*c >= 0x15) {
        *c = 0;
        p->unkC = 0x100;
        func_800058DC((s32)arg0, func_80243920);
    }
}
