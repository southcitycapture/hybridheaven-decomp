#include "context.h"

extern f64 D_80257100;
extern f64 D_80257108;

struct func_80244644_Struct_C { u8 pad[0x8]; f32 unk8; u8 pad2[0x4C - 0xC]; u8 unk4C; u8 unk4D; };
struct func_80244644_Struct_B { u8 pad[0x30]; struct func_80244644_Struct_C *unk30; };
struct func_80244644_Struct_A { u8 pad[0x24]; struct func_80244644_Struct_B *unk24; u8 pad2[0x9C - 0x28]; f32 unk9C; };

void func_80244644(struct func_80244644_Struct_A *arg0, struct func_80244644_Struct_B **arg1) {
    arg0->unk24->unk30->unk8 = arg0->unk24->unk30->unk8 - arg0->unk9C;
    if (D_80257100 < arg0->unk9C && arg0->unk24->unk30->unk8 < -20.0f) {
        arg0->unk9C = arg0->unk9C - D_80257108;
    }
    (*arg1)->unk30->unk4C = (*arg1)->unk30->unk4C;
    (*arg1)->unk30->unk4D = (*arg1)->unk30->unk4D + 1;
    if (!(arg0->unk24->unk30->unk8 > -32.0f)) {
        func_800058DC((s32)arg0, func_80244720);
    }
}
