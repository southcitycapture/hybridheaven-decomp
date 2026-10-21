#include "context.h"


extern struct func_801CEE30_Struct D_801E1208;

s32 func_801CEE30(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1208.unk0) {
        return 0;
    }
    return D_801E1208.unk4 == arg1;
}
