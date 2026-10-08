#include "common.h"

extern s32 func_801BF968(void);
extern void func_801BF850(void *a0, s32 a1, void *a2);
extern void func_8038CA0C(void);
extern u8 D_8038DB60[];
extern s32 D_8038DB70;
extern s32 D_8038DB74;
extern u8 D_8038E100[];

void func_8038C914(void) {
    if (func_801BF968() != 0) {
        D_8038DB70 = 0;
        D_8038DB74 = 0;
        func_801BF850(D_8038DB60, 6, D_8038E100);
        func_8038CA0C();
    }
}
