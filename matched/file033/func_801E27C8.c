#include "context.h"

extern f32 D_801F45D8;
extern f32 D_801F45DC;
extern f32 D_801F45E0;
extern f32 D_801F45E4;
extern f32 D_801F45E8;
extern f32 D_801F45EC;
extern f32 D_801F45F0;
extern f32 D_801F45F4;
extern f32 D_801F45F8;
extern f32 D_801F45FC;
extern f32 D_801F4600;
extern f32 D_801F4604;
extern f32 D_801F4608;
extern f32 D_801F460C;
extern f32 D_801F4610;
extern f32 D_801F4614;
extern f32 D_801F4618;
extern f32 D_801F461C;

s32 func_801E27C8(s32 arg0, s32 arg1) {
    if (D_801F2A58 == 0) goto state0;
    if (D_801F2A58 == 1) goto state1;
    return 0x22;
state0:
    {
        if (func_8038BEF8(0.0f, D_801F45D8, 17.8f, 47.5f, D_801F45DC, D_801F45E0, D_801F45E4, -68.0f, 1.0f, D_801F45E8, -51.5f, D_801F45EC, D_801F45F0, D_801F45F4) != 0) {
            func_8038BED4();
            D_801F2A58 = 1;
        }
    }
    goto done;
state1:
    {
        if (func_8038BEF8(0.0f, 1.0f, 5.0f, 25.5f, D_801F45F8, D_801F45FC, D_801F4600, D_801F4604, D_801F4608, D_801F460C, D_801F4610, D_801F4614, D_801F4618, D_801F461C) != 0) {
            return 0x23;
        }
    }
done:
    return 0x22;
}
