#include "common.h"

extern void func_801BF850(void *arg0, s32 arg1, void *arg2);
extern u8 D_8038D860[];
extern u8 D_8038E060[];
extern s32 D_8038D8CC;
extern s32 D_8038D8D0;

void func_8038BA20(s32 arg0, s32 arg1) {
    D_8038D8CC = arg0;
    D_8038D8D0 = arg1;
    func_801BF850(D_8038D860, 3, D_8038E060);
}
