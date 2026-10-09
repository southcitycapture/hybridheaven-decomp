#include "context.h"

struct func_801E3F24_StructA {
    u8 pad[0x30];
    struct func_801E3F24_StructB *unk30;
};

struct func_801E3F24_StructB {
    u8 pad[4];
    f32 unk4;
};

struct func_801E3F24_StructC {
    u8 pad[0xC];
    struct func_801E3F24_StructA *unkC;
};

extern f64 func_80034C24(u64);
extern u64 func_801C0B2C(void);
extern f64 D_801F5818;

s32 func_801E3F24(s32 arg0, s32 arg1) {
    u64 temp;

    if (func_801C0B8C(0x14FB180) != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x3D0900) != 0) {
        temp = func_801C0B2C();
        ((struct func_801E3F24_StructC *) D_8038D8D0)->unkC->unk30->unk4 =
            ((f32) ((func_80034C24(temp) / D_801F5818) - 4.0) / 18.0f) * 8.0f;
    }
    return 9;
}
