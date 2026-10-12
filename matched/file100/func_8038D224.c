#include "common.h"

extern s32 func_801BF968(void);
extern void func_801BF850(void *a0, s32 a1, void *a2);
extern s32 func_8038D7E4(void);
extern u8 D_8038DBF0[];
extern s32 D_8038DBFC;
extern s32 D_8038DC00;
extern u8 D_8038E190[];

void func_8038D224(void) {
    if (func_801BF968() != 0) {
        D_8038DBFC = 0;
        D_8038DC00 = 0;
        func_801BF850(D_8038DBF0, 8, D_8038E190);
        func_8038D7E4();
    }
}
