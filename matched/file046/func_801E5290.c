#include "context.h"

struct func_801E5290_StructC {
    u8 pad[0x4B];
    u8 unk4B;
};
struct func_801E5290_StructB {
    u8 pad[0x30];
    struct func_801E5290_StructC *unk30;
};
struct func_801E5290_StructA {
    u8 pad[0x18];
    struct func_801E5290_StructB *unk18;
};

s32 func_801E5290(s32 arg0, s32 arg1) {
    f32 t;
    if (func_801C1088(3, 6, 0x3C) != 0) {
        func_801C10D8(3, 6);
        return 0xA;
    }
    t = (f32)func_801C1134(3, 6) / 60.0f;
    ((struct func_801E5290_StructA *)D_8038D8D0)->unk18->unk30->unk4B = (u32)(255.0f * t);
    func_801E51C0();
    return 9;
}
