#include "context.h"

struct func_801CFE28_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801CFE28_Struct D_801E1290;

s32 func_801CFE28(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1290.unk0) {
        return 0;
    }
    return D_801E1290.unk4 == arg1;
}
