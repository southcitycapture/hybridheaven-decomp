#include "context.h"

struct func_803840D0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0xC];
    f32 unk1C;
    u8 pad2[0x2B];
    u8 unk4B;
};
struct func_803840D0_Out {
    u8 pad0[0x30];
    struct func_803840D0_Inner *unk30;
};
struct func_803840D0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[6];
    f32 unk44;
    u8 pad2[0x4C];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern f64 D_80389BC0;
extern f64 D_80389BC8;

void func_803840D0(struct func_803840D0_Struct *arg0, struct func_803840D0_Out **arg1) {
    arg0->unk44 = arg0->unk44 * D_80389BC0;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk1C = arg0->unk44 * D_80389BC8;
    if (arg0->unk3C == 0) goto c0;
    if (arg0->unk3C != 1) goto end;
    goto c1;
c0:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B + 0x20;
    if ((*arg1)->unk30->unk4B >= 0xE0) {
        (*arg1)->unk30->unk4B = 0xFF;
        arg0->unk3C = 1;
    }
    return;
c1:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 0xA;
    if ((*arg1)->unk30->unk4B < 0xA) {
        func_80005700();
    }
end:
    return;
}
