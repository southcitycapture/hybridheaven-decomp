#include "context.h"

extern void func_801D1428();

typedef struct func_801D13CC_StructInner {
    u8 pad0[0x10];
    s16 unk10;
} func_801D13CC_StructInner;

typedef struct func_801D13CC_StructOuter {
    u8 pad0[0x30];
    func_801D13CC_StructInner *unk30;
} func_801D13CC_StructOuter;

typedef struct func_801D13CC_Struct {
    u8 pad0[0x94];
    u8 unk94;
} func_801D13CC_Struct;

void func_801D13CC(func_801D13CC_Struct *arg0, func_801D13CC_StructOuter **arg1) {
    func_801D13CC_StructInner *inner;
    s8 sp1B;

    sp1B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1B) == 0) {
        inner = (*arg1)->unk30;
        inner->unk10 = 0x800;
        func_800058DC(arg0, (s32) func_801D1428);
    }
}
