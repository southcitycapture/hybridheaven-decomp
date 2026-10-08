#include "context.h"

extern s32 func_8037D598(void);
extern void func_800058DC(void *, void *);
extern void func_801CB788(void);

void func_801CBB88(void *arg0, void **arg1) {
    s32 i;

    if (func_8037D598() != 0) {
        i = 0;
        do {
            ((u8 *)arg1[i])[0x22] = 1;
            i = (i + 1) & 0xFF;
        } while (i < 9);
        func_800058DC(arg0, func_801CB788);
    }
}
