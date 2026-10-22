#include "context.h"
struct func_801D33A4_Struct { u8 pad[0x24]; s32 unk24; };
extern u8 D_801D33A4[];
extern void func_800058DC(void *, void *);

void func_801D33A4(struct func_801D33A4_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_800058DC(arg0, D_801D33EC);
        return;
    }
    func_800058DC(arg0, D_801D33A4);
}
