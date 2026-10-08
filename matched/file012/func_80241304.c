#include "context.h"

struct func_80241304_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};

extern void *func_80005670(s32 arg0, void *arg1);
extern u8 D_80248E78[];

void *func_80241304(s32 arg0, s32 arg1) {
    struct func_80241304_Struct *temp_v0;

    temp_v0 = func_80005670(arg0, D_80248E78);
    if (temp_v0 != NULL) {
        temp_v0->unk2C = arg1;
    }
    return temp_v0;
}
