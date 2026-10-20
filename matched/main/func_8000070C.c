#include "context.h"

extern void func_800265F0(void *);
extern void func_80026CE0(void *);

void func_8000070C(u8 *arg0) {
    func_800265F0(arg0 + 0x528);
    func_80026CE0(arg0 + 0x528);
    *(s32 *)(arg0 + 0x88C) = 0;
    *(s32 *)(arg0 + 0x894) = 0;
    func_800265F0(arg0 + 0x6D8);
    func_80026CE0(arg0 + 0x6D8);
    func_800265F0(arg0 + 0x378);
    func_80026CE0(arg0 + 0x378);
}
