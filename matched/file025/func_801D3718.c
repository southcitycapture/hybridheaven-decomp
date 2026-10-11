#include "context.h"

struct func_801D3718_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D3718_Struct D_801E14B8;

s32 func_801D3718(s32 arg0, u16 arg1) {
    if (arg0 != D_801E14B8.unk0) {
        return 0;
    }
    return D_801E14B8.unk4 == arg1;
}
