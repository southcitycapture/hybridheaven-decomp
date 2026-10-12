#include "context.h"
s32 func_801C18CC(s32 arg0, func_801EB248_Struct *arg1);

typedef struct func_801EB8C8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EB8C8_Struct;

extern func_801EB8C8_Struct D_801ED324;

s32 func_801EB8C8(s32 arg0, s32 arg1) {
    func_801EB8C8_Struct sp1C;

    sp1C = D_801ED324;
    func_801C18CC(1, &sp1C);
    return 0x24;
}
