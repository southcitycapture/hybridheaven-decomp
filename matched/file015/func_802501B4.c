#include "common.h"

struct func_802501B4_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};

extern void func_800058DC(void *, void *);
extern s32 func_80010550(void **, s32, void **);
extern void func_802501F4();

void func_802501B4(struct func_802501B4_Struct *arg0, s32 arg1) {
    s32 temp = arg0->unk5C;

    if (func_80010550(arg1, temp, arg1) != 0) {
        func_800058DC(arg0, &func_802501F4);
    }
}
