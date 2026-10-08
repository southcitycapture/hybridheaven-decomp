#include "context.h"

struct func_801E651C_Struct {
    u8 pad[0x24];
    s32 unk24;
};

s32 func_801E651C(s32 arg0, s32 arg1) {
    if (((struct func_801E651C_Struct *) func_801BF6B0(4))->unk24 >= 0x1D) {
        func_801D3688(1, 2, 0x40000000, 0, 0xFF, 1, 1);
        func_8038D28C(0x205);
        return 8;
    }
    return 7;
}
