#include "common.h"
extern s32 func_800058DC(s32, void *);
extern u8 func_802436A4[];


struct func_80243538_StructInner {
    u8 pad0[4];
    u16 unk4;
};

struct func_80243538_Struct {
    u8 pad0[0x34];
    struct func_80243538_StructInner *unk34;
    u8 pad38[0xA];
    u8 unk42;
};

void func_80243538(struct func_80243538_Struct *arg0, s32 arg1) {
    struct func_80243538_StructInner *inner = arg0->unk34;

    if (++arg0->unk42 >= 0x15) {
        arg0->unk42 = 0;
        inner->unk4 = 0x8000;
        func_800058DC((s32)arg0, (void *)func_802436A4);
    }
}
