#include "context.h"

typedef struct func_8012C6B4_Struct {
    u8 pad[0x2A];
    u16 unk2A;
} func_8012C6B4_Struct;

extern f64 D_8018D530;
extern u8 D_801BBBF0[];

s32 func_8012C6B4(s32 arg0) {
    f32 result;

    ((func_8012C6B4_Struct *)D_801BBBF0)->unk2A = (((func_8012C6B4_Struct *)D_801BBBF0)->unk2A * 0x17 + 0x929) % 4535;
    result = (f64)(((func_8012C6B4_Struct *)D_801BBBF0)->unk2A * arg0) * D_8018D530;
    return (s32)result;
}
