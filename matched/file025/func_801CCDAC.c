#include "common.h"

extern void func_801BF850(void *a, s32 b, void *c);
extern void func_801CD804();
extern void func_801CD8D0();
extern u8 D_801DAB88[];
extern s32 D_801DABB8;
extern s32 D_801DABBC;
extern u8 D_801E0CF8[];

void func_801CCDAC(s32 arg0, s32 arg1) {
    D_801DABB8 = arg0;
    D_801DABBC = arg1;
    func_801BF850(D_801DAB88, 1, D_801E0CF8);
    func_801CD804();
    func_801CD8D0();
}
