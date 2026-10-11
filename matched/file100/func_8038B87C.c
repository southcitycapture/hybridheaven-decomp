#include "common.h"

extern void func_801BF850(void *arg0, s32 arg1, void *arg2);
extern u8 D_8038D810[];
extern u8 D_8038DD80[];
extern s32 D_8038D850;
extern s32 D_8038D854;

void func_8038B87C(s32 arg0, s32 arg1) {
    D_8038D850 = arg0;
    D_8038D854 = arg1;
    func_801BF850(D_8038D810, 2, D_8038DD80);
}
