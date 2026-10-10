#include "context.h"

/* Forward declarations needed because this function sits before func_8024A434 in the file. */
struct func_8024A434_Arg;
void func_8024A434(struct func_8024A434_Arg *arg0, s32 arg1);

extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern void func_8024A984(void);

void func_8024A3C0(struct func_8024A434_Arg *arg0, s32 arg1) {
    if (func_80126CC0(arg0, (void *)func_80126EAC) != 0) {
        if (func_80133A24(0x76) != 0) {
            func_800058DC(arg0, (void *)func_8024A984);
            return;
        }
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_800058DC(arg0, (void *)func_8024A434);
    }
}
