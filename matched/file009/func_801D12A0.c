#include "context.h"

extern void func_801D12FC();

typedef struct func_801D12A0_StructInner {
    u8 pad0[0x10];
    s16 unk10;
} func_801D12A0_StructInner;

typedef struct func_801D12A0_StructOuter {
    u8 pad0[0x30];
    func_801D12A0_StructInner *unk30;
} func_801D12A0_StructOuter;

typedef struct func_801D12A0_Struct {
    u8 pad0[0x94];
    u8 unk94;
} func_801D12A0_Struct;

void func_801D12A0(func_801D12A0_Struct *arg0, func_801D12A0_StructOuter **arg1) {
    func_801D12A0_StructInner *inner;
    s8 sp1B;

    sp1B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1B) == 0) {
        inner = (*arg1)->unk30;
        inner->unk10 = 0x800;
        func_800058DC(arg0, (s32) func_801D12FC);
    }
}
