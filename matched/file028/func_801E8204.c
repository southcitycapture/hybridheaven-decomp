#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E785C_Struct *arg1);

typedef struct func_801E8204_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8204_Struct;

extern func_801E8204_Struct D_80205B8C;

s32 func_801E8204(s32 arg0, s32 arg1) {
    func_801E8204_Struct sp1C;

    sp1C = D_80205B8C;
    func_801C18CC(1, &sp1C);
    return 0x50;
}
