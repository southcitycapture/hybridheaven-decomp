#include "common.h"

typedef struct func_80244720_Struct {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x40];
    u8 unk4C;
    u8 unk4D;
} func_80244720_Struct;

typedef struct func_80244720_Outer {
    u8 pad0[0x30];
    func_80244720_Struct *unk30;
} func_80244720_Outer;

typedef struct func_80244720_Arg0 {
    u8 pad0[0x24];
    func_80244720_Outer *unk24;
} func_80244720_Arg0;

void func_80244720(func_80244720_Arg0 *arg0, func_80244720_Outer **arg1) {
    func_80244720_Struct *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4C = temp_v0->unk4C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4D = temp_v0->unk4D + 1;
    arg0->unk24->unk30->unk8 = -32.0f;
}
