#include "context.h"
s32 func_801C18CC(s32 arg0, func_801EB248_Struct *arg1);

typedef struct func_801EB608_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EB608_Struct;

extern func_801EB608_Struct D_801ED300;

s32 func_801EB608(s32 arg0, s32 arg1) {
    func_801EB608_Struct sp1C;

    sp1C = D_801ED300;
    func_801C18CC(1, &sp1C);
    return 0x17;
}
