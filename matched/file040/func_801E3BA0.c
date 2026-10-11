#include "context.h"

typedef struct func_801E3BA0_Struct30 {
    u8 pad0[0x8];
    f32 unk8;
} func_801E3BA0_Struct30;

typedef struct func_801E3BA0_Struct4 {
    u8 pad0[0x30];
    func_801E3BA0_Struct30 *unk30;
} func_801E3BA0_Struct4;

typedef struct func_801E3BA0_Struct0 {
    u8 pad0[0x4];
    func_801E3BA0_Struct4 *unk4;
} func_801E3BA0_Struct0;

extern f64 D_801E8808;

s32 func_801E3BA0(s32 arg0, s32 arg1) {
    u64 temp_ret;
    f32 divisor;

    divisor = 4.0f;
    if (func_801C0DE4(3, 1, 0x40800000) != 0) {
        func_801C0EB0(3, 1);
        func_801C0D04(3, 1);
        return 6;
    }
    temp_ret = func_801C0F18(3, 1);
    ((func_801E3BA0_Struct0 *) D_8038D8D0)->unk4->unk30->unk8 = (f32) ((f32) (func_80034C24(temp_ret) / D_801E8808) / divisor * 122.0f + 25.0f);
    return 5;
}
