#include "context.h"

typedef struct func_803593F0_StructArg {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
    u8 pad1[0x6C - 0x50];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
} func_803593F0_StructArg;

extern f32 D_80389EE4;
extern f32 D_80389EE8;
struct func_80359520_Struct;
extern void func_80359520(struct func_80359520_Struct *arg0, s32 arg1);

void func_803593F0(func_803593F0_StructArg *arg0, s32 arg1) {
    if (arg0->unk4C >= arg0->unk4E + 1) {
        func_801CE330(arg0, 9, arg0->unk6C, arg0->unk70, arg0->unk74,
            ((u8 *)D_8038CC10)[0x34], ((u8 *)D_8038CC10)[0x35], ((u8 *)D_8038CC10)[0x36],
            0xFF, ((u8 *)D_8038CC10)[0x34], ((u8 *)D_8038CC10)[0x35], ((u8 *)D_8038CC10)[0x36],
            0, 0x14, 0x1E, D_80389EE4, 9);
        func_801CE330(arg0, 10, arg0->unk6C, arg0->unk70, arg0->unk74,
            ((u8 *)D_8038CC10)[0x34], ((u8 *)D_8038CC10)[0x35], ((u8 *)D_8038CC10)[0x36],
            0xFF, ((u8 *)D_8038CC10)[0x34], ((u8 *)D_8038CC10)[0x35], ((u8 *)D_8038CC10)[0x36],
            0, 0x14, 0x1E, D_80389EE8, 9);
        func_800058DC(arg0, func_80359520);
    }
}
