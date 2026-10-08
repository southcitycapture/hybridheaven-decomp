#include "common.h"

extern void func_800058DC(s32, void *);
extern s32 func_80117610(s32);
extern void func_80119F9C(void *, void *);
extern void func_8011A0F0(void *);
extern u8 D_801BBB90[];
extern u8 D_801BBB92[];
extern u8 D_801BBB94[];
extern void func_80119B80(void);

void func_80119B24(s32 arg0, s32 arg1) {
    if (func_80117610(0) != 0) {
        func_80119F9C(D_801BBB90, D_801BBB92);
        func_8011A0F0(D_801BBB94);
        func_800058DC(arg0, func_80119B80);
    }
}
