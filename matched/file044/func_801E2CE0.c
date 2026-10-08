#include "context.h"

typedef struct func_801E2CE0_Struct {
    u8 pad[0x3C];
    s32 unk3C;
} func_801E2CE0_Struct;

s32 func_801E2CE0(s32 arg0, s32 arg1) {
    if (((func_801E2CE0_Struct *) func_801BF6B0(4))->unk3C >= 0x42) {
        D_8038C158();
        return 0x32;
    } else {
        return 0x31;
    }
}
