#include "context.h"

s32 func_8020C030(u8 *arg0, u8 **arg1) {
    u8 *temp_v0;

    *(f32 *) (*(u8 **) (*arg1 + 0x30) + 0x4) = *(f32 *) (arg0 + 0x94);
    *(f32 *) (*(u8 **) (*arg1 + 0x30) + 0x8) = *(f32 *) (arg0 + 0x98);
    *(f32 *) (*(u8 **) (*arg1 + 0x30) + 0xC) = *(f32 *) (arg0 + 0x9C);
    temp_v0 = *(u8 **) (*arg1 + 0x30);
    temp_v0[0x4B] = (u8) (temp_v0[0x4B] - 0x10);
    if ((s32) (*(u8 **) (*arg1 + 0x30))[0x4B] < 0x19) {
        return 0;
    }
    return 1;
}
