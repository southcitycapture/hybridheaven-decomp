#include "context.h"

extern void func_802467B0(f32, f32, s32, s32);

void func_8024587C(void *arg0, s32 arg1) {
    func_802467B0(((f32 *)arg0)[0x94 / 4], ((f32 *)arg0)[0x98 / 4], ((s32 *)arg0)[0x9C / 4], 0x311);
}
