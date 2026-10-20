#include "context.h"


extern struct func_801D27D8_Struct D_801E1418;

s32 func_801D27D8(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1418.unk0) {
        return 0;
    }
    return D_801E1418.unk4 == arg1;
}
