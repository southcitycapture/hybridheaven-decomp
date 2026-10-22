#include "context.h"
extern u8 D_801BBBF0[];
extern s8 func_802242D0(s32);
extern s32 func_80236374(void *);
extern void func_8023AFD0(u8);
extern s32 D_80145310(s32, u8, s32);
extern void func_8023B148(void *, s32);
extern void func_8023B608(void *, void *);
extern void func_800058DC(void *, void *);
extern void func_8023BD7C();
struct func_8023B86C_Struct;
void func_8023B86C(struct func_8023B86C_Struct *arg0, s32 arg1);

void func_8023B704(u8 *arg0, s32 *arg1) {
    u8 sp4F;
    u8 sp4E;

    func_8023A2BC();
    arg0[0xA8] = func_802242D0(D_801BBBF0[0x1030] == 0 ? *(s32 *)(D_801BBBF0 + 0xDC) : *(s32 *)(D_801BBBF0 + 0xEC));
    if (func_80236C9C() == 0) {
        sp4E = func_80006214((s32)arg0);
        func_80146208(arg0, &sp4F, 0x66, D_80240880.unk10, D_80240880.unk12, 0x20, 0x18, 0, 0, 0xFF, 0x20C, D_80240880.unk1A);
        D_80145310(arg1[sp4E], D_80240880.unk19, 0);
        *(s32 *)B = arg1[sp4E];
    } else {
        *(s32 *)B = 0;
    }
    if (func_80236374(arg0) != 0) {
        func_8023B608(arg0, D_8038CEC0);
        func_800058DC(arg0, (void *)func_8023BD7C);
        return;
    }
    B[0x20] = 0;
    func_8023A5D4((s32)arg0);
    func_8023AFD0(B[0x20]);
    func_8023B148(arg0, 0xFF);
    func_800058DC(arg0, (void *)func_8023B86C);
}
