#include "context.h"

struct func_80244E28_Arg0;
struct func_80244E28_Outer;
void func_80244E28(struct func_80244E28_Arg0 *arg0, struct func_80244E28_Outer **arg1);



void func_80244DA0(func_80244DA0_Struct *arg0, s32 arg1) {
    if (func_80133A24(arg0->unk38->unk14 >> 16) != 0) {
        arg0->unk2C = 0x60;
        arg0->unk44 = (f32) (arg0->unk38->unk14 & 0xFFFF);
        arg0->unk90 = 0x20;
        func_800058DC((s32) arg0, (void *) func_80244E28);
    }
}
