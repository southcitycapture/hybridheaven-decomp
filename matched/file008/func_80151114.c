#include "common.h"

typedef struct func_80151114_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_80151114_Struct;

extern s32 func_8001F7B0();
void func_800058DC(void *arg0, void *arg1);
extern void func_80150EA8(func_80150EA8_Struct *arg0, s32 arg1);

s32 func_80151114(func_80151114_Struct *arg0) {
    if ((arg0 != NULL) && (func_8001F7B0() != 0)) {
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80150EA8);
        return 1;
    }
    return 0;
}
