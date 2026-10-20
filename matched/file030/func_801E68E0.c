#include "common.h"

typedef struct func_801E68E0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E68E0_Struct;

extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C();

s32 func_801E68E0(s32 arg0, s32 arg1) {
    func_801E68E0_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x1D || func_801C1B1C() == 0) {
        return 0x11;
    }
    return 0x12;
}
