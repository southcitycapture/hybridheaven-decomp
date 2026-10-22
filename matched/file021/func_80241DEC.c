#include "context.h"

struct func_80241DEC_Struct_E { u8 pad0[0x8]; f32 unk8; u8 pad1[0x4B - 0xC]; u8 unk4B; };
struct func_80241DEC_Struct_O { u8 pad0[0x30]; struct func_80241DEC_Struct_E *unk30; };

void func_80241DEC(func_80241D58_Struct_Arg0 *arg0, struct func_80241DEC_Struct_O **arg1) {
    s32 i;

    for (i = 0; i < 5; i++) {
        arg1[i]->unk30->unk8 = arg1[i]->unk30->unk8 + 0.125;
        if (arg1[i]->unk30->unk8 >= 21.0f) {
            arg1[i]->unk30->unk8 = 3.0f;
        }
    }
    if (arg0->unk92 != 0) {
        for (i = 0; i < 5; i++) {
            arg1[i]->unk30->unk4B = 0;
        }
        D_801BCCC0->unk92 = 1;
        func_80020744(0x64F);
        arg0->unk92 = 0x14;
        func_800058DC(arg0, func_80241F00);
    }
}
