#include "context.h"

extern s32 D_8008DC94;
extern s32 D_8008DFAC;

s32 func_800165CC(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = *(u16 *)(D_8008DFAC + ((u32) D_8008DC94 * arg2 * 2) + (arg1 * 2));
    return (((temp_v1 & 0x3E) >> 1) << 11) | (((temp_v1 & 0x7C0) >> 6) << 6) | (((temp_v1 & 0xF800) >> 11) << 1) | (temp_v1 & 1);
}
