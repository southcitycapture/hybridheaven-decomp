#include "context.h"

extern s32 func_8011A3D4(void);
extern void func_801152B8(void);
extern void func_8011AA88(s32 arg0, void (*arg1)(void));
extern void func_801149C4(void);

void func_80114980(s32 arg0, s32 arg1) {
    if (func_8011A3D4() == 0) {
        func_801152B8();
        func_8011AA88(arg0, func_801149C4);
    }
}
