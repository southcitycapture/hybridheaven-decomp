#include "common.h"

s32 func_8011A3D4(void);
void func_8011AA88(s32 arg0, s32 arg1);

void func_8011AA54(s32 arg0, s32 arg1) {
    if (func_8011A3D4() == 0) {
        func_8011AA88(arg0, arg1);
    }
}
