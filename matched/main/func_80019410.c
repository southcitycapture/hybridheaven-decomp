#include "context.h"

extern s32 func_800058DC(s32, void *);
extern void func_80018AB4(void);
extern s32 func_80018BD8(void);
extern void func_80018C9C(u8);
extern u8 D_8008EE81;
extern void func_80017BB8(void);

void func_80019410(s32 arg0, s32 arg1) {
    if (func_80018BD8() == 0) {
        func_80018AB4();
        func_80018C9C(D_8008EE81);
        func_800058DC(arg0, func_80017BB8);
    }
}
