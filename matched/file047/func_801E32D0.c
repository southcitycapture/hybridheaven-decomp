#include "context.h"

struct func_801E32D0_StructB {
    u8 pad[0x18];
    f32 a;
    f32 b;
    f32 c;
};
struct func_801E32D0_StructA {
    u8 pad[0x30];
    struct func_801E32D0_StructB *unk30;
};

struct func_801E32D0_StructRoot {
    u8 pad[0xC];
    struct func_801E32D0_StructA *unkC;
};

s32 func_801E32D0(void) {
    f32 t;
    f32 d;
    s32 v1;
    s32 v;

    if (D_801E3D24 != 0) {
        v = D_801E3D28;
    } else {
        v = 0x3B - D_801E3D28;
    }
    d = (f32) v / 60.0f;
    t = 4.0f * d + 1.0f;
    ((struct func_801E32D0_StructRoot *)D_8038D8D0)->unkC->unk30->a = t;
    ((struct func_801E32D0_StructRoot *)D_8038D8D0)->unkC->unk30->b = t;
    ((struct func_801E32D0_StructRoot *)D_8038D8D0)->unkC->unk30->c = t;
    D_801E3D28 += 1;
    v1 = D_801E3D28;
    if (v1 >= 0x3C) {
        if (D_801E3D24 != 0) {
            D_801E3D24 = 0;
        } else {
            D_801E3D24 = 1;
        }
    }
    D_801E3D28 = v1 % 60;
}
