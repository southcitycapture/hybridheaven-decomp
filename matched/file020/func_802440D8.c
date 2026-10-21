#include "context.h"

struct func_802440D8_Struct {
    u8 pad[0x8];
    f32 unk8;
};
struct func_802440D8_Struct2 {
    u8 pad[0x30];
    struct func_802440D8_Struct *unk30;
};
struct func_802440D8_Struct3 {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    f32 unk94;
};
extern void func_80133980(s32);
extern f64 D_80246C48;
extern f64 D_80246C50;
void func_80244248(s32 arg0, s32 arg1);

void func_802440D8(struct func_802440D8_Struct3 *arg0, struct func_802440D8_Struct2 **arg1) {
    s32 t;
    struct func_802440D8_Struct *p;

    t = arg0->unk3C++;
    if (t >= 0x1E) {
        if (t < 0x5A) {
            arg0->unk94 = arg0->unk94 - D_80246C48;
        } else if (t >= 0xF0 && t < 0x12D) {
            arg0->unk94 = arg0->unk94 + D_80246C50;
        }
    }
    if (t == 0x12C) {
        func_80020718(0x666);
        func_80020718(0x1AB);
        func_80020718(0xA);
        func_80133980(0x1A0);
        *(u16 *)((u8 *)&D_801BBBF0 + 6) = 0x21;
        D_801BBBF0.unk4 = 0x50;
        func_8012FE50(0x10, D_801BBBF0.unk4, 1, 1, 2);
        func_800058DC(arg0, func_80244248);
        return;
    }
    p = (*arg1)->unk30;
    p->unk8 = p->unk8 + arg0->unk94;
    p = (*arg1)->unk30;
    if (p->unk8 <= 10.0) {
        p->unk8 = p->unk8 + 20.0;
    }
}
