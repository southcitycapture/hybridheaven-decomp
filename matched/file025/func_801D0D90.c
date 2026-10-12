#include "context.h"

struct func_801D0D90_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_800058DC(void *arg0, void *arg1);
extern void func_8012D844(void *arg0, s32 arg1, s32 arg2);
extern void func_8012D894(void *arg0, s32 arg1, s32 arg2);
extern void func_801D0DFC();

void func_801D0D90(struct func_801D0D90_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x140, 0);
        func_8012D894(arg0, 0x140, 3);
        func_800058DC(arg0, func_801D0DFC);
        return;
    }
    func_800058DC(arg0, func_801D0D90);
}
