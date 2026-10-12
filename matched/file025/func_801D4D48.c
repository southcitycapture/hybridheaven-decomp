#include "context.h"

struct func_801D4D48_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_801D4DA4();

void func_801D4D48(struct func_801D4D48_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x118, 0);
        func_800058DC(arg0, func_801D4DA4);
        return;
    }
    func_800058DC(arg0, func_801D4D48);
}
