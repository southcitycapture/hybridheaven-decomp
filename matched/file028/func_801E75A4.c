#include "context.h"

typedef struct func_801E75A4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E75A4_Struct;

extern func_801E75A4_Struct D_802059E8;

s32 func_801E75A4(s32 arg0, s32 arg1) {
    func_801E75A4_Struct sp1C;

    sp1C = D_802059E8;
    func_801C18CC(1, &sp1C);
    return 0x1B;
}
