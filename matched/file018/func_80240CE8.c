#include "context.h"
extern s32 D_801BCC78;
extern void func_80240D34();

void func_80240CE8(void *arg0, s32 arg1) {
    if (func_80133A24(0x147) != 0) {
        *(u16 *)((u8 *)arg0 + 0x92) = 8;
        D_801BCC78 = 0;
        func_800058DC((s32)arg0, (void *)func_80240D34);
    }
}
