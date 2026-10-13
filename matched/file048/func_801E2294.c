#include "context.h"
typedef struct func_801E2500_Struct {
    u8 pad[0x3C];
    s32 unk3C;
} func_801E2500_Struct;
extern func_801E2500_Struct *func_801BF6B0();
s32 func_801C1B1C();

typedef struct func_801E2294_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2294_Struct;

s32 func_801E2294(s32 arg0, s32 arg1) {
    if ((((func_801E2294_Struct *)func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}
