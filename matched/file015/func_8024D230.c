#include "context.h"
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);
void func_8024D2A4(void *arg0, void *arg1);

/* Forward declarations needed because this function sits before func_8024D2A4 in the file. */
struct func_8024D2A4_Arg;

extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern void func_8024D898();

void func_8024D230(struct func_8024D2A4_Arg *arg0, s32 arg1) {
    if (func_80126CC0(arg0, (void *)func_80126EAC) != 0) {
        if (func_80133A24(0x7E) != 0) {
            func_800058DC(arg0, (void *)func_8024D898);
            return;
        }
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_800058DC(arg0, (void *)func_8024D2A4);
    }
}
