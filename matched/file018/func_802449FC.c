#include "common.h"

extern void func_80005700(void);

typedef struct func_802449FC_StructB {
    u8 pad0[0x8];
    f32 unk8;
    f32 unkC;
    s16 unk10;
} func_802449FC_StructB;

typedef struct func_802449FC_StructC {
    u8 pad0[0x30];
    func_802449FC_StructB *unk30;
} func_802449FC_StructC;

typedef struct func_802449FC_StructA {
    u8 pad0[0x24];
    func_802449FC_StructC *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
} func_802449FC_StructA;

void func_802449FC(func_802449FC_StructA *arg0, s32 arg1) {
    func_802449FC_StructB *temp_v0;

    arg0->unk90 = arg0->unk90 + 1;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unkC = temp_v0->unkC + 1.0f;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk10 = temp_v0->unk10 - 0x80;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 - (f32) ((s32) arg0->unk90 / 10);
    if (arg0->unk24->unk30->unk8 < -800.0f) {
        func_80005700();
    }
}
