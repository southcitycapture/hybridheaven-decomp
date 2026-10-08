#include "common.h"

struct func_803800C4_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x59];
    s8 unk97;
};

extern s32 D_8038A9B0;
extern s32 D_8038A9B4;
extern void func_80380168();
extern void func_80380584();
extern s32 func_8037DD6C(void *a0, s32 a1, s32 a2, s32 a3);
extern void func_8037E38C(void *a0, s32 a1);
extern void func_801471DC(s32 a0);
extern void func_800058DC(void *a0, void (*a1)());

void func_803800C4(struct func_803800C4_Struct *arg0, s32 arg1) {
    arg0->unk3C = arg0->unk3C + 1;
    if (func_8037DD6C(arg0, D_8038A9B0, D_8038A9B4, 0x28) == 0) {
        if (arg0->unk97 == 3) {
            arg0->unk97 = 0;
            func_801471DC(D_8038A9B0);
            func_8037E38C(arg0, arg1);
            func_800058DC(arg0, func_80380584);
            return;
        }
        func_800058DC(arg0, func_80380168);
    }
}
