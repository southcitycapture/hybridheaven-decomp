#include "context.h"

typedef struct func_801D18BC_StructInner {
    u8 pad0[0x12];
    s16 unk12;
} func_801D18BC_StructInner;

typedef struct func_801D18BC_StructOuter {
    u8 pad0[0x30];
    func_801D18BC_StructInner *unk30;
} func_801D18BC_StructOuter;

typedef struct func_801D18BC_Struct {
    u8 pad0[0x94];
    u8 unk94;
    u8 pad95[0x98 - 0x95];
    s16 unk98;
} func_801D18BC_Struct;

extern void func_801D1918(void);

void func_801D18BC(func_801D18BC_Struct *arg0, func_801D18BC_StructOuter **arg1) {
    func_801D18BC_StructInner *inner;
    s8 sp1B;

    sp1B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1B) == 0) {
        inner = (*arg1)->unk30;
        inner->unk12 = arg0->unk98;
        func_800058DC(arg0, (s32) func_801D1918);
    }
}
