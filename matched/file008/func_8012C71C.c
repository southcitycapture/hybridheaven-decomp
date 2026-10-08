#include "context.h"

typedef struct func_8012C71C_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_8012C71C_Inner;

typedef struct func_8012C71C_Sub {
    u8 pad0[0x2C];
    func_8012C71C_Inner *unk2C;
    func_8012C71C_Inner *unk30;
} func_8012C71C_Sub;

typedef struct func_8012C71C_Outer {
    u8 pad0[0x24];
    func_8012C71C_Sub *unk24;
} func_8012C71C_Outer;

void func_8012C71C(func_8012C71C_Outer *arg0, f32 arg1) {
    func_8012C71C_Sub *temp_v0;

    temp_v0 = arg0->unk24;
    if (temp_v0->unk2C != NULL) {
        temp_v0->unk2C->unk18 = arg1;
        arg0->unk24->unk2C->unk1C = arg1;
        arg0->unk24->unk2C->unk20 = arg1;
        return;
    }
    temp_v0->unk30->unk18 = arg1;
    arg0->unk24->unk30->unk1C = arg1;
    arg0->unk24->unk30->unk20 = arg1;
}
