#include "context.h"

typedef struct func_801E3800_Struct {
    u8 pad[0x24];
    s32 unk24;
} func_801E3800_Struct;

s32 func_801E3800(s32 arg0, s32 arg1) {
    if (((func_801E3800_Struct *)func_801BF6B0(4))->unk24 >= 0x21) {
        func_8038D28C(0x202);
        func_801C1000(3, 1);
        return 6;
    }
    return 5;
}
