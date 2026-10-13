#include "common.h"

struct func_8037118C_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

extern void func_800058DC(void *a0, void *a1);
extern void func_803711C8(s32 arg0, s32 arg1);

void func_8037118C(struct func_8037118C_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk4C >= (s32) arg0->unk4E) {
        func_800058DC(arg0, func_803711C8);
    }
}
