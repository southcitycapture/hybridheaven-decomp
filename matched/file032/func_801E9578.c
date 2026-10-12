#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E90AC_Struct *arg1);

typedef struct func_801E9578_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E9578_Struct;

extern func_801E9578_Struct D_801EB2C0;

s32 func_801E9578(s32 arg0, s32 arg1) {
    func_801E9578_Struct sp1C;

    sp1C = D_801EB2C0;
    func_801C18CC(1, &sp1C);
    return 0xA6;
}
