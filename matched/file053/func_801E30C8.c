#include "context.h"

struct func_801E30C8_Struct2 {
    u8 pad0[0x4B];
    u8 unk4B;
};
struct func_801E30C8_Struct1 {
    u8 pad0[0x30];
    struct func_801E30C8_Struct2 *unk30;
};
struct func_801E30C8_Struct0 {
    u8 pad0[0x20];
    struct func_801E30C8_Struct1 *unk20;
};

s32 func_801E30C8(s32 arg0, s32 arg1) {
    f32 q;

    q = (f32)(u32)func_801C1134(3, 1) / 240.0f;
    ((struct func_801E30C8_Struct0 *)D_8038D8D0)->unk20->unk30->unk4B = (u32)(255.0f * q);
    if (func_801C1088(3, 1, 0xF0) != 0) {
        func_801C10D8(3, 1);
        return 3;
    }
    return 2;
}
