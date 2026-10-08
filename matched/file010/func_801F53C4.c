#include "context.h"

typedef struct func_801F53C4_Struct {
    u8 pad0[0x92];
    s16 unk92;
} func_801F53C4_Struct;

s32 func_801F53C4(func_801F53C4_Struct *arg0) {
    if (arg0->unk92 >= 0x97) {
        return 1;
    }
    return 0;
}
