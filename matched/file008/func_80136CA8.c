#include "context.h"
s32 func_80150584();
void func_80136D7C(s32 arg0, s32 arg1);

typedef struct func_80136CA8_StructInner {
    u8 pad[0x10];
    s32 unk10;
    u32 unk14;
    u32 unk18;
} func_80136CA8_StructInner;

typedef struct func_80136CA8_Struct {
    u8 pad[0x38];
    func_80136CA8_StructInner *unk38;
} func_80136CA8_Struct;

typedef struct func_80136CA8_StructGlobal {
    u8 pad0[0x110];
    u16 unk110;
    u8 pad1[0x18A];
    f32 unk29C;
    f32 unk2A0;
    f32 unk2A4;
    f32 unk2A8;
    u8 pad2[0xC89];
    u8 unkF35;
    u8 pad3[0x12];
    u8 unkF48;
} func_80136CA8_StructGlobal;

void func_80136CA8(func_80136CA8_Struct *arg0, s32 arg1) {
    if (func_80150584() != 0) {
        ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk29C = ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk2A4;
        ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk2A0 = ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk2A8;
        ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unkF35 = ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unkF48;
        return;
    }
    ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unkF35 = ((u32)arg0->unk38->unk10 >> 16) & 0xFF;
    ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk29C = (f32)arg0->unk38->unk14;
    ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk2A0 = (f32)arg0->unk38->unk18;
    if (((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk110 == 1) {
        func_800058DC(arg0, func_80136D7C);
    }
}
