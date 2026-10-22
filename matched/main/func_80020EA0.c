#include "context.h"

typedef struct func_80020EA0_Struct {
    u32 value;
    u8 pad[0xD4];
} func_80020EA0_Struct;

s32 func_80020EA0(s32 arg0) {
    func_80020EA0_Struct *p;
    s32 i;

    if (arg0 == 0) {
        return (u16)(D_801B5520 & 0x7FFF);
    }
    arg0--;
    if (D_800CBDAC[arg0] == 0) {
        return 0;
    }
    for (i = 0; i < 16; i++) {
        if ((((func_80020EA0_Struct *)&D_801B5520)[i].value & 0x7FFF) == D_800CBDAC[arg0]) {
            return D_800CBDAC[arg0];
        }
    }
    return 0;
}
