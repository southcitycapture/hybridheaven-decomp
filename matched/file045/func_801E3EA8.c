#include "context.h"

typedef struct func_801E3EA8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E3EA8_Struct;

extern func_801E3EA8_Struct D_801E8298;

s32 func_801E3EA8(s32 arg0, s32 arg1) {
    func_801E3EA8_Struct sp1C;

    sp1C = D_801E8298;
    func_801C18CC(1, (void *) &sp1C);
    return 0x8;
}
