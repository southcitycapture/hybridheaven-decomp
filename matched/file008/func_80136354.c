#include "common.h"

struct func_80136354_Struct {
    u8 pad[0x90];
    s16 unk90;
};

extern void func_800058DC(void *, void *);
extern void func_800179B0(void *);
extern void func_80020744(s32);
extern u8 D_80217FB0[];
extern void func_801363C8();

void func_80136354(struct func_80136354_Struct *arg0, s32 arg1) {
    s16 var_v0;

    var_v0 = arg0->unk90;
    if (var_v0 == 0x20) {
        func_80020744(0x3DE);
        var_v0 = arg0->unk90;
    }
    arg0->unk90 = var_v0 - 1;
    if (var_v0 == 0) {
        func_800179B0(D_80217FB0);
        func_80020744(0x3DC);
        func_800058DC(arg0, func_801363C8);
    }
}
