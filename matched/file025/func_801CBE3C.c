#include "context.h"

struct func_801CBE3C_Inner {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_801CBE3C_Outer {
    u8 pad[0x30];
    struct func_801CBE3C_Inner *unk30;
};
struct func_801CBE3C_Arg {
    u8 pad[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
};
extern u8 D_801D9908[];
extern u8 D_801DAA50[];
extern u8 func_801CBFE8[];

void func_801CBE3C(struct func_801CBE3C_Arg *arg0, struct func_801CBE3C_Outer **arg1) {
    func_80005E44((s32)arg0, D_801DAA50);
    func_80006214((s32)arg0);
    *(u32 *)((u8 *)(*arg1)->unk30 + 0x30) = 0;
    (*arg1)->unk30->unk28 = D_801D9908;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, 0);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = 0;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = arg0->unkA0;
    (*arg1)->unk30->unk1C = arg0->unkA4;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0x78;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xF4;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4F = 0xFF;
    func_800058DC((s32)arg0, (void (*)(void))func_801CBFE8);
}
