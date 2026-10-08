#include "common.h"

struct func_802433D4_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};

extern void func_800058DC(void *, void *);
extern s32 func_80010550(s32, s32, s32);
extern void func_80243414(void);

void func_802433D4(struct func_802433D4_Struct *arg0, s32 arg1) {
    s32 temp = arg0->unk5C;

    if (func_80010550(arg1, temp, arg1) != 0) {
        func_800058DC(arg0, &func_80243414);
    }
}
