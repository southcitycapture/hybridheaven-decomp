#include "context.h"

struct func_801D8AA4_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D8AA4_Struct D_801E1BC8;

s32 func_801D8AA4(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1BC8.unk0) {
        return 0;
    }
    return D_801E1BC8.unk4 == arg1;
}
