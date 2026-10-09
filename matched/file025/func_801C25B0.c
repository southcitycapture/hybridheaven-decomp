#include "context.h"

typedef struct func_801C25B0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C25B0_Struct;

s32 func_801C25B0(func_801C25B0_Struct *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0->unk8 != 0) {
        func_801C288C(arg0->unk0);
        func_8001F540(arg0->unk8);
        arg0->unk4 = 0;
        arg0->unk8 = 0;
        return 1;
    }
    return var_v0;
}
