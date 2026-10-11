#include "common.h"

extern s32 func_801BF968(void);
extern void func_801BF850(void *a0, s32 a1, void *a2);
extern void func_8038D1B0(void);
extern u8 D_8038DB80[];
extern s32 D_8038DB90;
extern s32 D_8038DB94;
extern u8 D_8038E118[];

void func_8038CA8C(void) {
    if (func_801BF968() != 0) {
        D_8038DB90 = 0;
        D_8038DB94 = 0;
        func_801BF850(D_8038DB80, 7, D_8038E118);
        func_8038D1B0();
    }
}
