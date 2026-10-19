#include "context.h"

typedef struct func_801E3A44_StructC {
    u8 pad0[4];
    f32 unk4;
} func_801E3A44_StructC;

typedef struct func_801E3A44_StructB {
    u8 pad0[0x30];
    func_801E3A44_StructC *unk30;
} func_801E3A44_StructB;

typedef struct func_801E3A44_StructA {
    u8 pad0[4];
    func_801E3A44_StructB *unk4;
} func_801E3A44_StructA;

extern u64 func_801C0B2C();
extern f64 func_80034C24();
extern f64 D_801F5808;

s32 func_801E3A44(s32 arg0, s32 arg1) {
    u64 temp_ret;
    f32 two;

    two = 2.0f;
    if (func_801C0B8C(0x018CBA80) != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x016E3600) != 0) {
        temp_ret = func_801C0B2C();
        ((func_801E3A44_StructA *) D_8038D8D0)->unk4->unk30->unk4 = (f32) (((f32) (func_80034C24(temp_ret) / D_801F5808 - 24.0)) / two * -2.5 + 2.5);
    }
    return 9;
}
