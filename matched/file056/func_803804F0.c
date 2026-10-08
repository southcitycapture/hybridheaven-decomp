#include "common.h"

typedef struct func_803804F0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x97 - 0x3E];
    s8 unk97;
} func_803804F0_Struct;

extern s32 func_800058DC(void *, void *);
extern s32 func_801471DC(s32);
extern s32 func_8037DD6C(void *, s32, s32, s16);
extern s32 func_8037E118(void *, s32);
extern s32 D_8038A9B0;
extern s32 D_8038A9B4;
extern s32 func_8037FED4;

void func_803804F0(func_803804F0_Struct *arg0, s32 arg1) {
    arg0->unk3C = arg0->unk3C + 1;
    if (func_8037DD6C(arg0, D_8038A9B0, D_8038A9B4, (s16) ((arg0->unk97 * 0x1E) + 0x4B)) == 0) {
        func_801471DC(D_8038A9B0);
        func_8037E118(arg0, arg1);
        func_800058DC(arg0, &func_8037FED4);
    }
}
