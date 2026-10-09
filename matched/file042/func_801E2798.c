#include "context.h"

typedef struct func_801E2798_Struct30 {
    u8 pad0[0x8];
    f32 unk8;
} func_801E2798_Struct30;

typedef struct func_801E2798_Struct4 {
    u8 pad0[0x30];
    func_801E2798_Struct30 *unk30;
} func_801E2798_Struct4;

typedef struct func_801E2798_Struct0 {
    u8 pad0[0x4];
    func_801E2798_Struct4 *unk4;
} func_801E2798_Struct0;

extern f64 D_801E5018;

s32 func_801E2798(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 0x40200000) != 0) {
        func_801C0EB0(3, 1);
        return 3;
    }
    temp_ret = func_801C0F18(3, 1);
    ((func_801E2798_Struct0 *) D_8038D8D0)->unk4->unk30->unk8 = (f32) ((f32) (func_80034C24(temp_ret) / D_801E5018) / 2.5f * 13.0f + -32.0f);
    return 2;
}
