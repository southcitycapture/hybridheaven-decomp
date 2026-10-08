#include "common.h"

extern s32 func_801CE0E8(void *, s8 *);
extern void func_800058DC(void *, void *);
extern void func_801CF894(void);

void func_801CF824(void *arg0, void **arg1) {
    s32 i;
    s8 sp23;
    void **p;

    sp23 = 0;
    if (func_801CE0E8(arg0, &sp23) == 0) {
        i = 0;
        p = arg1;
        if (((u8 *) arg0)[0x94] > 0) {
            do {
                ((u8 *) *p)[0x22] = 0;
                i++;
                p++;
            } while (i < (s32) ((u8 *) arg0)[0x94]);
        }
        func_800058DC(arg0, func_801CF894);
    }
}
