#include "context.h"

typedef struct func_801E8E94_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8E94_Struct;

extern func_801E8E94_Struct D_801EA998;

s32 func_801E8E94(s32 arg0, s32 arg1) {
    func_801E8E94_Struct sp1C;

    sp1C = D_801EA998;
    func_801C18CC(1, &sp1C);
    return 0x1D;
}
