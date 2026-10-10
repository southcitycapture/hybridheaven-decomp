#include "context.h"

extern void func_800058DC(s32, void (*)(void));
extern void func_8013225C(void);

void func_8013222C(void *arg0, s32 arg1) {
    *(u16 *)((u8 *)arg0 + 0x90) = 0x23;
    func_800058DC((s32)arg0, func_8013225C);
}
