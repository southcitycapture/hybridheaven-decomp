#include "context.h"

extern s32 func_8011A3D4(void);
extern void func_800058DC(s32, s32);
extern void func_8011AA88(s32, s32);

void func_8011AA0C(s32 arg0, s32 arg1, s32 arg2) {
    if (func_8011A3D4() != 0) {
        func_800058DC(arg0, arg1);
        return;
    }
    func_8011AA88(arg0, arg2);
}
