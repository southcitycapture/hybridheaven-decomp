#include "context.h"

extern u8 D_801DA840[];
struct func_801CA1EC_Inner;
void func_801CA1EC(u8 *arg0, struct func_801CA1EC_Inner **arg1);

struct func_801C9FF0_Inner {
    u8 pad0[4];
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
    s32 unk24;
    u8 pad28[8];
    u8 *unk30;
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
struct func_801C9FF0_Outer {
    u8 pad0[0x30];
    struct func_801C9FF0_Inner *unk30;
};
struct func_801C9FF0_Arg {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
};

void func_801C9FF0(struct func_801C9FF0_Arg *arg0, struct func_801C9FF0_Outer **arg1) {
    func_80005E44((s32)arg0, D_801DA840);
    func_80006214((s32)arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk10 = (s16)(s32)((arg0->unk9C * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk12 = (s16)(s32)((arg0->unkA0 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk14 = (s16)(s32)((arg0->unkA4 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk18 = arg0->unkA8;
    (*arg1)->unk30->unk1C = arg0->unkAC;
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
    (*arg1)->unk30->unk30 = (u8 *)((s32)D_801D8FA0 | 0x40000000);
    func_800058DC((s32)arg0, (void (*)(void))func_801CA1EC);
}
