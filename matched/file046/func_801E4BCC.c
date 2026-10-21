#include "context.h"

struct func_801E4BCC_StructB {
    u8 pad[0x18];
    f32 a;
    f32 b;
    f32 c;
};
struct func_801E4BCC_StructA {
    u8 pad[0x30];
    struct func_801E4BCC_StructB *unk30;
};

void func_801E4BCC(void) {
    f32 t;
    f32 d;
    s32 v1;
    s32 v;

    if (D_801EA7A0 != 0) {
        v = D_801EA7A4;
    } else {
        v = 0x3B - D_801EA7A4;
    }
    d = (f32) v / 60.0f;
    t = 4.0f * d + 1.0f;
    ((struct func_801E4BCC_StructA *)D_8038D8D0->unkC)->unk30->a = t;
    ((struct func_801E4BCC_StructA *)D_8038D8D0->unkC)->unk30->b = t;
    ((struct func_801E4BCC_StructA *)D_8038D8D0->unkC)->unk30->c = t;
    D_801EA7A4 += 1;
    v1 = D_801EA7A4;
    if (v1 >= 0x3C) {
        if (D_801EA7A0 != 0) {
            D_801EA7A0 = 0;
        } else {
            D_801EA7A0 = 1;
        }
    }
    D_801EA7A4 = v1 % 60;
}
