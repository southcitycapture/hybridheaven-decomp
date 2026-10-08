#include "common.h"

extern f64 D_8023EFF0;

typedef struct func_80225BF0_StructInner {
    u8 pad0[0x68];
    f32 unk68;
    u8 pad6C[0x74 - 0x6C];
    u8 unk74;
} func_80225BF0_StructInner;

typedef struct func_80225BF0_Struct {
    u8 pad0[0x5C];
    func_80225BF0_StructInner *unk5C;
} func_80225BF0_Struct;

s32 func_80225BF0(func_80225BF0_Struct *arg0) {
    func_80225BF0_StructInner *temp_v1;

    temp_v1 = arg0->unk5C;
    if (temp_v1->unk74 == 0) {
        return 3;
    }
    return (u32) ((f64) temp_v1->unk68 + D_8023EFF0) & 0xFF;
}
