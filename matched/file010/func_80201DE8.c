#include "context.h"

struct func_80201DE8_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_80201DE8_StructC {
    u8 pad0[0x30];
    struct func_80201DE8_StructB *unk30;
};

struct func_80201DE8_StructA {
    u8 pad0[0x24];
    struct func_80201DE8_StructC *unk24;
    u8 pad28[0x90 - 0x28];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

void func_80201DE8(struct func_80201DE8_StructA *arg0, s32 arg1) {
    arg0->unk24->unk30->unk4 = arg0->unk90;
    arg0->unk24->unk30->unk8 = (f32) ((f64) arg0->unk94 + 1.5);
    arg0->unk24->unk30->unkC = arg0->unk98;
}
