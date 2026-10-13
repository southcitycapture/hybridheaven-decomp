#include "context.h"

typedef struct func_801E9014_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E9014_Struct;

extern func_801E9014_Struct D_801EACCC;

s32 func_801E9014(s32 arg0, s32 arg1) {
    func_801E9014_Struct sp1C;

    sp1C = D_801EACCC;
    func_801C18CC(1, (void *) &sp1C);
    return 0x53;
}
