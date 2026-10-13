#include "context.h"

typedef struct func_801E8DB8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8DB8_Struct;

extern func_801E8DB8_Struct D_801EACA8;

s32 func_801E8DB8(s32 arg0, s32 arg1) {
    func_801E8DB8_Struct sp1C;

    sp1C = D_801EACA8;
    func_801C18CC(1, &sp1C);
    return 0x48;
}
