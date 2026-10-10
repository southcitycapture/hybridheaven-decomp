#include "context.h"

/* Copied exactly from context.h: the in-file build strips #include, so these must appear before use. */
void func_80246874(void *arg0, s32 arg1);
extern struct func_802466A4_Vec D_80252964;

void func_802467FC(void *arg0, s32 arg1) {
    s32 temp;

    temp = *(s32 *) ((u8 *) arg0 + 0x5C);
    if (func_80010550(arg1, temp) != 0) {
        func_8013A1B4((void **) arg1, D_80252964, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_80246874);
    }
}
