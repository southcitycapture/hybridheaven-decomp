#include "context.h"

extern void *func_801BF6B0(s32);
extern s32 func_801C1B1C(void);

typedef struct func_801E2180_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2180_Struct;

s32 func_801E2180(s32 arg0, s32 arg1) {
    if ((((func_801E2180_Struct *)func_801BF6B0(7))->unkC < 0xA) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}
