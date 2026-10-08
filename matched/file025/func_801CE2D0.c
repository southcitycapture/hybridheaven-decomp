#include "context.h"

struct func_801CE2D0_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801CE2D0_Struct D_801E11B0;

s32 func_801CE2D0(s32 arg0, u16 arg1) {
    if (arg0 != D_801E11B0.unk0) {
        return 0;
    }
    return D_801E11B0.unk4 == arg1;
}
