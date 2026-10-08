#include "context.h"

typedef struct func_80150E60_Struct {
    u8 pad[0x91];
    u8 unk91;
} func_80150E60_Struct;

extern s32 (*D_801832F0[])(void);

void func_80150E60(func_80150E60_Struct *arg0) {
    s32 (*temp_v0)(void);

    temp_v0 = D_801832F0[arg0->unk91];
    if ((temp_v0 != NULL) && (temp_v0() == 0)) {
        arg0->unk91 = 0;
    }
}
