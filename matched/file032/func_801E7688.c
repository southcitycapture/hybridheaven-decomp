#include "context.h"

typedef struct func_801E7688_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7688_Struct;

extern func_801E7688_Struct D_801EAFB4;

s32 func_801E7688(s32 arg0, s32 arg1) {
    func_801E7688_Struct sp1C;

    sp1C = D_801EAFB4;
    func_801C18CC(1, &sp1C);
    return 0x1F;
}
