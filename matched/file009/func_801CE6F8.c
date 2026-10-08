#include "context.h"

typedef struct func_801CE6F8_Struct {
    u8 pad0[0x8];
    f32 unk8;
} func_801CE6F8_Struct;

extern void func_801CE618(s32 arg0, func_801CE6F8_Struct *arg1);

void func_801CE6F8(s32 arg0, func_801CE6F8_Struct *arg1) {
    func_801CE618(arg0, arg1);
    arg1->unk8 = (f32) ((f64) arg1->unk8 + 18.0);
}
