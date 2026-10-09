#include "context.h"

typedef struct func_80004310_Struct {
    u8 pad[0x1BD];
    u8 unk1BD;
} func_80004310_Struct;

extern func_80004310_Struct D_800892B0;
extern s32 D_800894F4[];

void func_80004310(s32 arg0) {
    volatile u8 *p = &D_800892B0.unk1BD;
    D_800894F4[*p] = arg0;
    *p = *p + 1;
}
