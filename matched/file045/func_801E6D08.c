#include "context.h"

typedef struct func_801E6D08_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6D08_Struct;

extern func_801E6D08_Struct D_801E8628;

s32 func_801E6D08(s32 arg0, s32 arg1) {
    func_801E6D08_Struct sp1C;

    sp1C = D_801E8628;
    func_801C18CC(1, (void *) &sp1C);
    return 0xB;
}
