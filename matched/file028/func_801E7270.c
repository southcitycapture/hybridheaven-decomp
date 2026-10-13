#include "context.h"

typedef struct func_801E7270_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7270_Struct;

extern func_801E7270_Struct D_802059A0;

s32 func_801E7270(s32 arg0, s32 arg1) {
    func_801E7270_Struct sp1C;

    sp1C = D_802059A0;
    func_801C18CC(1, (void *) &sp1C);
    return 0xD;
}
