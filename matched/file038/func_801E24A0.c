#include "context.h"

extern f32 D_801E70D8;
extern f32 D_801E70DC;
extern f32 D_801E70E0;
extern f32 D_801E70E4;
extern f32 D_801E70E8;
extern f32 D_801E70EC;
extern f32 D_801E70F0;
extern f32 D_801E70F4;
extern f32 D_801E70F8;
extern f32 D_801E70FC;
extern f32 D_801E7100;

s32 func_801E24A0(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 4.0f, 0xC24E6666, 0x41EC0000,
        D_801E70D8, D_801E70DC, D_801E70E0, 60.0f,
        D_801E70E4, D_801E70E8, D_801E70EC, D_801E70F0,
        D_801E70F4, D_801E70F8, D_801E70FC, D_801E7100) != 0) {
        return 0x13;
    }
    return 0x12;
}
