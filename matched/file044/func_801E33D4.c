#include "context.h"

typedef struct func_801E33D4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E33D4_Struct;

s32 func_801E33D4(s32 arg0, s32 arg1) {
    if (((func_801E33D4_Struct *)func_801BF6B0(1))->unkC >= 2) {
        return 1;
    }
    return 0;
}
