#include "context.h"

struct func_801D1220_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D1220_Struct D_801E1348;

s32 func_801D1220(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1348.unk0) {
        return 0;
    }
    return D_801E1348.unk4 == arg1;
}
