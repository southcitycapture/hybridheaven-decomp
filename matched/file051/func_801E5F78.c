#include "context.h"

typedef struct func_801E5F78_Struct {
    u8 pad[0x3C];
    s32 unk3C;
} func_801E5F78_Struct;

extern s32 func_801D766C(f32, f32, f32);

s32 func_801E5F78(s32 arg0, s32 arg1) {
    if (((func_801E5F78_Struct *)func_801BF6B0(4))->unk3C >= 0xE) {
        func_8038D28C(0x20F);
        func_801D766C(0.0f, 0.0f, 95.0f);
        return 7;
    }
    return 6;
}
