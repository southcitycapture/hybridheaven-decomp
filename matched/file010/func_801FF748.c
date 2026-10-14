#include "context.h"

extern void func_801FF774();

typedef struct func_801FF748_Struct {
    u8 pad0[0xA2];
    s16 unkA2;
} func_801FF748_Struct;

void func_801FF748(func_801FF748_Struct *arg0, s32 arg1) {
    arg0->unkA2 = 0;
    func_800058DC(arg0, func_801FF774);
}
