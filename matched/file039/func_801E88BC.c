/* starting point: func_801E704C (file032), whose assembly is 100% the same as this function's */
#include "context.h"

typedef struct func_801E88BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E88BC_Struct;

extern func_801E88BC_Struct D_801EA908;

s32 func_801E88BC(s32 arg0, s32 arg1) {
    func_801E88BC_Struct sp18;

    sp18 = D_801EA908;
    func_801C18CC(2, (void *) &sp18);
    return 4;
}
