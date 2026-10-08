#include "context.h"

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
