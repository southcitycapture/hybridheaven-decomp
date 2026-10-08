#include "context.h"

extern void func_8022A834();
extern u8 D_801BC3D8[];

void func_8038DDD4(u8 *arg0) {
    if (*(f32 *)&D_801BC3D8[0x3A8] < 15.0) {
        arg0[0xA5] = 0;
        return;
    }
    func_8022A834();
}
