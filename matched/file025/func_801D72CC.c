#include "context.h"
/* starting point: func_801D8764 (file025), whose assembly is 100% the same as this function's */
struct func_801D72CC_Struct { u8 pad[0x24]; s32 unk24; };
extern void func_801D7314();
extern u8 D_801D72CC[];

void func_801D72CC(struct func_801D72CC_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_800058DC(arg0, (void (*)(void))func_801D7314);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D72CC);
}
