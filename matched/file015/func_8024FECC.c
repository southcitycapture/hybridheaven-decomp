#define XCAT2(a, b) a##b
#define XCAT(a, b) XCAT2(a, b)
#define func_8024F188 XCAT(func_8024F188_, __LINE__)
#define func_8024F24C XCAT(func_8024F24C_, __LINE__)
#define func_8024F818 XCAT(func_8024F818_, __LINE__)
#define func_8024FFF4 XCAT(func_8024FFF4_, __LINE__)
#define func_8024FECC func_8024FECC_ctx
#include "context.h"
#undef func_8024FECC

typedef struct func_8024FECC_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024FECC_Struct;

extern u8 D_8025522C[];

void func_8024FECC(func_8024FECC_Struct *arg0, s32 arg1, s32 arg2) {
    s32 val = arg0->unk5C;

    if ((func_80010550((void **)arg1, val, (void **)arg2) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4((void **)arg1, D_80254AC4, 0xFFFFFF);
        func_800179B0(D_8025522C);
        func_800058DC(arg0, (void *)func_8024FF60);
    }
}
