#include "context.h"

typedef struct func_8037BAEC_StructBBBF0 {
    u8 pad[0xEF0];
    u16 unkEF0;
} func_8037BAEC_StructBBBF0;

typedef struct func_8037BAEC_StructA930 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_8037BAEC_StructA930;

extern func_8037BAEC_StructBBBF0 D_801BBBF0;
extern s16 D_80388A68;
extern func_8037BAEC_StructA930 D_8038A930;

s32 func_8037BAEC(f32 arg0, f32 arg1, f32 arg2, s16 arg3) {
    if (D_801BBBF0.unkEF0 & 0x1050) {
        return 0;
    }
    D_801BBBF0.unkEF0 = D_801BBBF0.unkEF0 | 0x1000;
    D_8038A930.unk0 = arg0;
    D_8038A930.unk4 = arg1;
    D_8038A930.unk8 = arg2;
    D_80388A68 = arg3;
    return 1;
}
