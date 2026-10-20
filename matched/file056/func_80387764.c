#include "context.h"

struct func_80387764_In {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[4];
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};
struct func_80387764_Out {
    u8 pad0[0x30];
    struct func_80387764_In *unk30;
};
extern f64 D_80389DB8;

void func_80387764(s32 arg0, struct func_80387764_Out **arg1) {
    f64 k = D_80389DB8;

    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk18 + k;
    (*arg1)->unk30->unk20 = (*arg1)->unk30->unk20 + k;
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 0x10;
    if ((*arg1)->unk30->unk4B < 0x10) {
        func_80005700(arg0);
    }
}
