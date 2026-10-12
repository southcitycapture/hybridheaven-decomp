#include "common.h"

extern void func_8011AA54(s32 arg0, void (*arg1)(void));
extern void func_80115734();

void func_8011570C(s32 arg0, s32 arg1) {
    func_8011AA54(arg0, func_80115734);
}
