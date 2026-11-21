#include "common.h"
extern s32 func_800058DC(s32, void *);


struct func_80243CA4_Inner {
    u8 pad0[0xC];
    s16 unkC;
};

struct func_80243CA4_Struct {
    u8 pad0[0x34];
    struct func_80243CA4_Inner *unk34;
    u8 pad38[0xA];
    u8 unk42;
};
extern void func_80243CF4();

void func_80243CA4(struct func_80243CA4_Struct *arg0, s32 arg1) {
    struct func_80243CA4_Inner *inner;

    inner = arg0->unk34;
    if (++arg0->unk42 >= 0xB) {
        arg0->unk42 = 0;
        inner->unkC = 0x100;
        func_800058DC((s32)arg0, func_80243CF4);
    }
}
