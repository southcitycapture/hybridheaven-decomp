#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E6F80_Struct *arg1);

typedef struct func_801E8F6C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8F6C_Struct;

extern func_801E8F6C_Struct D_801EBE18;

s32 func_801E8F6C(s32 arg0, s32 arg1) {
    func_801E8F6C_Struct sp1C;

    sp1C = D_801EBE18;
    func_801C18CC(1, &sp1C);
    return 0x3;
}
