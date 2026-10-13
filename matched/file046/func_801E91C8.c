#include "context.h"

typedef struct func_801E91C8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E91C8_Struct;

extern func_801E91C8_Struct D_801EACE4;

s32 func_801E91C8(s32 arg0, s32 arg1) {
    func_801E91C8_Struct sp1C;

    sp1C = D_801EACE4;
    func_801C18CC(1, (void *) &sp1C);
    return 0x5B;
}
