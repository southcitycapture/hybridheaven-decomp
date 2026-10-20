#include "context.h"

typedef struct func_801393D0_Struct {
    u16 id;
    u8 pad[2];
    void *data;
} func_801393D0_Struct;

extern u16 D_8017BC7C[];

void func_801393D0(func_801393D0_Struct *arg0, u8 *arg1, u16 arg2) {
    s32 i;

    for (i = 0; i < arg2; i++) {
        arg0[i].id = D_8017BC7C[i];
        arg0[i].data = arg1 + i * 16;
    }
    arg0->id = arg2;
}
