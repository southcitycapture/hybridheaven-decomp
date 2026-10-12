#include "context.h"

struct func_801D475C_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_801D47B8();

void func_801D475C(struct func_801D475C_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x30, 0);
        func_800058DC(arg0, func_801D47B8);
        return;
    }
    func_800058DC(arg0, func_801D475C);
}
