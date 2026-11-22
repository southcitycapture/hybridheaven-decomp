#include "common.h"

extern void D_8038BD88(f32, f32, s32);
struct func_801E1D84_StructA {
    u8 pad[0xC];
    s32 unkC;
};
extern struct func_801E1D84_StructA *func_801BF6B0(s32 a0);
struct func_801EBDC4_Struct {
    u8 pad[0x3C];
    s32 unk3C;
};
extern void func_8038BD50(f32, f32, s32);
s32 func_801EBDC4(s32 arg0, s32 arg1) {
    if (((struct func_801EBDC4_Struct *)func_801BF6B0(4))->unk3C >= 8) {
        func_8038BD50(11.0f, 43.2000008f, 0xC1D26666);
        D_8038BD88(31.6000004f, 13.5f, 0xC1F33333);
        return 3;
    }
    return 2;
}
