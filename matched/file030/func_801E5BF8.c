#include "context.h"

typedef struct func_801E5BF8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5BF8_Struct;

extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C();

s32 func_801E5BF8(s32 arg0, s32 arg1) {
    func_801E5BF8_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0xC || func_801C1B1C() == 0) {
        return 0xE;
    }
    return 0xF;
}
