#include "common.h"

extern void D_8038BA70(void);
extern s32 func_801C2420(s32 id, void *data);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];

s32 func_801EC390(s32 arg0, s32 arg1) {
    func_801C2420(0x2D2, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D4, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x84, D_8038DDC0);
    D_8038BA70();
    return 1;
}
