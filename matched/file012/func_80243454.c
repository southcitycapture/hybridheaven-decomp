#include "context.h"

extern u8 func_80237250[];
void func_802434C0();

struct func_80243454_S2C {
    u8 pad0[0x1C];
    void *unk1C;
};

struct func_80243454_S34 {
    u8 pad0[0xC];
    s16 unkC;
};

struct func_80243454_Struct {
    u8 pad0[0x2C];
    struct func_80243454_S2C *unk2C;
    u8 pad30[4];
    struct func_80243454_S34 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};

void func_80243454(struct func_80243454_Struct *arg0, s32 arg1) {
    struct func_80243454_S2C *a = arg0->unk2C;
    u8 *p = &arg0->unk42;
    struct func_80243454_S34 *v1 = arg0->unk34;

    if (a->unk1C == (void *)func_80237250) {
        if (++*p >= 0x15) {
            *p = 0;
            v1->unkC = 0x200;
            func_800058DC((s32)arg0, (void *)func_802434C0);
        }
    }
}
