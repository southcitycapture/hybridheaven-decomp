#include "context.h"

extern f64 D_8004D370;

struct func_8002C780_Struct {
    u8 pad[0x44];
    s32 unk44;
};

s32 func_8002C780(struct func_8002C780_Struct *arg0, s32 arg1) {
    f32 tmp;

    tmp = ((f64) ((f32) arg1 * (f32) arg0->unk44) / D_8004D370) + 0.5;
    return (s32) tmp;
}
