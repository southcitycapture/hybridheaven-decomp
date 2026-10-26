#include "common.h"
typedef struct func_8024148C_StructArg func_8024148C_StructArg;
typedef struct func_80242F38_StructGlobal func_80242F38_StructGlobal;
struct func_80243290_StructTriple { int a, b, c; };
extern struct func_80243290_StructTriple D_80252400;
extern void func_800058DC(void *, void *);
extern s32 func_800178E8();
extern s32 func_8013A1B4();
void func_802441A8(void *arg0, s32 volatile arg1);


void func_80244138(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_8013A1B4((void **)arg1, D_80252400, 0xFFFFFF);
        func_800058DC((void *)arg0, (void *)func_802441A8);
    }
}
