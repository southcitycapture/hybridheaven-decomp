#include "context.h"

extern u8 D_8038CA30[];

void func_80382140(u8 arg0, u8 arg1, u8 arg2) {
    func_8001B204((arg1 + 1) & 0xFF, 0x75, (s16) ((arg1 * 0xE) + 0x64), D_8038CA30, 1, (s32) arg2, (s32) arg0);
}
