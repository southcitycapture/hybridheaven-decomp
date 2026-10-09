#include "context.h"

typedef struct func_801E333C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E333C_Struct;

extern s32 func_801E2980();

s32 func_801E333C(s32 arg0, s32 arg1) {
    if (((func_801E333C_Struct *)func_801BF6B0(0))->unkC > 0) {
        return 2;
    }
    func_801E2980();
    return 1;
}
