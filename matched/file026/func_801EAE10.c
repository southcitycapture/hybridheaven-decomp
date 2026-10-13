#include "context.h"

extern f32 D_801FC810;
extern f32 D_801FC814;
extern f32 D_801FC818;
extern f32 D_801FD498;
extern f32 D_801FD49C;
extern f32 D_801FD4A0;
extern f32 D_801FD4A4;
extern f32 D_801FD4A8;
extern f32 D_801FD4AC;

s32 func_801EAE10(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7399E9A) != 0) {
        return 8;
    }
    D_801FD498 += D_801FC810;
    D_801FD49C += D_801FC810;
    D_801FD4A0 += D_801FC810;
    D_801FD4A4 += 0;
    D_801FD4A8 += D_801FC814;
    D_801FD4AC += D_801FC818;
    func_801CCE88(0, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    func_801CCEC8(0, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)D_801FD4AC);
    func_801CCE88(1, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
    func_801CCEC8(1, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)-D_801FD4AC);
    return 7;
}
