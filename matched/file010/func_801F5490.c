#include "context.h"

typedef struct func_801F5490_Sub {
    u8 pad0[0x14];
    u32 unk14;
} func_801F5490_Sub;

typedef struct func_801F5490_Struct {
    u8 pad0[0x38];
    func_801F5490_Sub *unk38;
} func_801F5490_Struct;

s32 func_801F5490(void *arg0) {
    if (!(((func_801F5490_Struct *)arg0)->unk38->unk14 & 0xFFFF)) {
        return 1;
    }
    return 0;
}
