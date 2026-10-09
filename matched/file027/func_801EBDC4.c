#include "context.h"

extern f32 D_801F5958;
extern f32 D_801F595C;

struct func_801EBDC4_Struct {
    u8 pad[0x3C];
    s32 unk3C;
};

s32 func_801EBDC4(s32 arg0, s32 arg1) {
    if (((struct func_801EBDC4_Struct *)func_801BF6B0(4))->unk3C >= 8) {
        func_8038BD50(11.0f, D_801F5958, 0xC1D26666);
        D_8038BD88(D_801F595C, 13.5f, 0xC1F33333);
        return 3;
    }
    return 2;
}
