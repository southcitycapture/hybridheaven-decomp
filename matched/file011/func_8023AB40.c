#include "common.h"

s32 func_80146178(s32 a0, u8 *buf, s32 a2, s32 a3, s32 s4, s32 s5, s32 s6, s32 s7, s32 s8, s32 s9, s32 s10);

void func_8023AB40(s32 a0) {
    u8 buf[4];

    func_80146178(a0, &buf[3],0x3A, 0x4D, 0xCC, 0x54, 2, 0, 0, 0, 0x66);
}
