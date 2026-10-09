#include "context.h"

typedef struct func_801E6ACC_Struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E6ACC_Struct;

#define FN_GET(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FN_CHAIN3(p) FN_GET(FN_GET(FN_GET(p, 8), 8), 8)
#define FN_OBJ FN_GET(FN_GET(FN_CHAIN3(D_801DAB14), 0x24), 0x2C)

s32 func_801E6ACC(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = FN_GET(FN_CHAIN3(D_801DAB14), 0x24);
    if (temp_v0 != NULL) {
        ((func_801E6ACC_Struct *)FN_GET(temp_v0, 0x2C))->unk4 = 5120.0f;
        ((func_801E6ACC_Struct *)FN_OBJ)->unk8 = 0.0f;
        ((func_801E6ACC_Struct *)FN_OBJ)->unkC = -39.0f;
        ((func_801E6ACC_Struct *)FN_OBJ)->unk12 = 0xC71;
        func_801CC470(2, 0x02A80060, 0, 0, 1.0f);
        return 2;
    }
    return 1;
}
