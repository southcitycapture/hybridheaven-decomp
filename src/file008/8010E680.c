#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010E680/func_8010E680.s")


extern void func_8011AA54(s32 arg0, void (*arg1)(void));
extern void func_8010E794(void);

void func_8010E76C(s32 arg0, s32 arg1) {
    func_8011AA54(arg0, func_8010E794);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010E680/func_8010E794.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010E680/func_8010E890.s")


extern s32 func_8011A3D4(void);
extern void func_8010F5CC(void);
extern void func_8011AA88(s32 arg0, void (*arg1)(void));
extern void func_8010EA78(void);

void func_8010EA34(s32 arg0, s32 arg1) {
    if (func_8011A3D4() == 0) {
        func_8010F5CC();
        func_8011AA88(arg0, func_8010EA78);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010E680/func_8010EA78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010E680/func_8010F5CC.s")

