#include "common.h"

struct func_801CD1CC_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

extern void func_800058DC(void *, void *);
extern u8 func_801CD208[];

void func_801CD1CC(struct func_801CD1CC_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk4C >= (s32) arg0->unk4E) {
        func_800058DC(arg0, func_801CD208);
    }
}
