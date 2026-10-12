#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80115620/func_80115620.s")


extern void func_8011AA54(s32 arg0, void (*arg1)(void));
extern void func_80115734();

void func_8011570C(s32 arg0, s32 arg1) {
    func_8011AA54(arg0, func_80115734);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80115620/func_80115734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80115620/func_80115B50.s")


extern void func_80115C64();

void func_80115C3C(s32 arg0, s32 arg1) {
    func_8011AA54(arg0, func_80115C64);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80115620/func_80115C64.s")

