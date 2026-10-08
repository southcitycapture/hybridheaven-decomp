#include "context.h"

extern void func_80005700(void *);
extern void func_80126E88(s32, void *);

void func_80384ED0(struct func_803833A8_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0) {
        ((u8 *) arg0->unkC)[0xB3] = 1;
        func_80126E88(0xC1, arg0);
        func_80005700(arg0);
    }
}
