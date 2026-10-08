#include "common.h"

void func_801C039C(s32 *);
extern s16 D_801BBBF4;
extern s32 D_801D8CE4;
extern s32 D_801DC930[];

void func_801C08B0(void) {
    func_801C039C(&D_801D8CE4);
    D_801BBBF4 = (s16) D_801DC930[D_801D8CE4];
}
