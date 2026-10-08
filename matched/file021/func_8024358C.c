#include "context.h"

struct func_8024358C_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
};

struct func_8024358C_StructZ {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_8024358C_StructY {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    void *unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_8024358C_StructX {
    u8 pad0[0x30];
    struct func_8024358C_StructY *unk30;
};

struct func_8024358C_StructArg1 {
    struct func_8024358C_StructX *unk0;
    struct func_8024358C_StructZ *unk4;
    struct func_8024358C_StructZ *unk8;
};

void func_8012C89C(void *, s32, s32, s32);
void func_8012D918(void *, s32, s32, s32, s32);
void func_802436A8(void);

extern u8 D_8017AF38[];

void func_8024358C(struct func_8024358C_StructArg0 *arg0, struct func_8024358C_StructArg1 *arg1) {
    f32 temp_fv0;
    s32 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg1->unk4->unk22 = 0;
        arg1->unk8->unk22 = 0;
        arg1->unk0->unk30->unk30 = D_8017AF38;
        arg1->unk0->unk30->unk24 = 0x400;
        arg1->unk0->unk30->unk4C = ((u8 *) &D_801BBBF0)[0xF32];
        arg1->unk0->unk30->unk4D = ((u8 *) &D_801BBBF0)[0xF33];
        arg1->unk0->unk30->unk4E = ((u8 *) &D_801BBBF0)[0xF34];
        arg1->unk0->unk30->unk4F = ((u8 *) &D_801BBBF0)[0xF35];
        func_8012C89C(arg0, 0, 0x501, 0x12);
        func_8012D918(arg0, 0x500, 1, 0, 0);
        arg1->unk0->unk30->unk20 = 1.0f;
        temp_fv0 = arg1->unk0->unk30->unk20;
        arg1->unk0->unk30->unk1C = temp_fv0;
        arg1->unk0->unk30->unk18 = temp_fv0;
        func_800058DC((s32) arg0, (void *) func_802436A8);
    }
}
