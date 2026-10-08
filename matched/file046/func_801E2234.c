#include "common.h"

extern void D_8038C158(void);
extern void *func_801BF6B0(s32);

typedef struct func_801E2234_Struct {
    u8 pad[0x3C];
    s32 unk3C;
} func_801E2234_Struct;

s32 func_801E2234(s32 arg0, s32 arg1) {
    if (((func_801E2234_Struct *)func_801BF6B0(4))->unk3C >= 0xA) {
        D_8038C158();
        return 0x11;
    }
    return 0x10;
}
