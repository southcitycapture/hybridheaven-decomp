#include "context.h"
struct func_801D2CF4_Struct { u8 pad[0x24]; s32 unk24; };
extern void func_801D2D3C();
extern u8 D_801D2CF4[];

void func_801D2CF4(struct func_801D2CF4_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_800058DC(arg0, (void (*)(void))func_801D2D3C);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D2CF4);
}
