#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E785C_Struct *arg1);

typedef struct func_80200F24_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80200F24_Struct;

extern func_80200F24_Struct D_80207D10;

s32 func_80200F24(s32 arg0, s32 arg1) {
    func_80200F24_Struct sp1C;

    sp1C = D_80207D10;
    func_801C18CC(1, &sp1C);
    return 0xB;
}
