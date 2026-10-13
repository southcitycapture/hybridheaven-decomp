#include "context.h"

extern void *func_801BF6B0(s32);
extern s32 func_801C1B1C(void);

typedef struct func_801E6404_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6404_Struct;

s32 func_801E6404(s32 arg0, s32 arg1) {
    if ((((func_801E6404_Struct *)func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}
