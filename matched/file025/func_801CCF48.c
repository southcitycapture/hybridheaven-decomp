#define func_801CCF48 func_801CCF48_ctx
#define func_801CD804 func_801CD804_ctx
#define func_801CD8D0 func_801CD8D0_ctx2
#include "context.h"
#undef func_801CCF48
#undef func_801CD804
#undef func_801CD8D0
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern u8 D_801DAB28[];
extern u8 D_801DABA8[];
typedef struct func_801CCF48_S { u8 pad[0x30]; struct func_801CCF48_S *p30; } func_801CCF48_S;
s32 func_801CCF48(s32 arg0, func_801CCF48_S **arg1) {
    s32 i;
    func_80005E44(arg0, D_801DABA8);
    func_80006214(arg0);
    D_801DAB20 = 1;
    *D_801DAB80 = D_801DD3B0[D_801DAB20];
    func_801CCE50(0, 0, 0);
    for (i = 0; i != 5; i++) {
        func_801CCE88(i, 0, 0, 0);
        func_801CCEC8(i, 0, 0, 0);
    }
    *(u32 *)((u8 *)(*arg1)->p30 + 0x30) = (u32)D_801DAB28 | 0x40000000;
    *(u32 *)((u8 *)(*arg1)->p30 + 0x28) = 0;
    return 1;
}
