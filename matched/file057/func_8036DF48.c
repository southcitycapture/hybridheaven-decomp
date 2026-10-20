#include "context.h"
struct func_8036DF48_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 a:1, b:2, p:8, c:2, d:3, rest:16;
};
extern void func_8036DD64(s32 *, s32, void *);
extern void func_802233B0(s32, s32, void *);
extern void func_8022397C(s32);
extern u8 D_801BCC21;
extern u8 func_8021E59C[];
extern u8 func_8036E0A4[];

void func_8036DF48(s32 arg0, s32 arg1) {
    struct func_8036DF48_Struct *v1;
    struct func_8036DF48_Struct *a2;
    s32 sp24[3];

    if (arg0 == D_801BBCCC) {
        v1 = (void *)D_801BC03C;
    } else {
        v1 = (void *)D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        a2 = (void *)D_801BC03C;
    } else {
        a2 = (void *)D_801BC3D8;
    }
    func_8036DD64(sp24, arg0, a2);
    if (D_801BCC21 != 0xF) {
        if (v1->unk2 <= 0 || v1->b != 0) {
            func_802233B0(arg0, arg1, a2);
            return;
        }
        if ((*(u16 *)v1 ,(((u16 *)v1)[0x18]) & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        if (a2->c == 0 || a2->b != 0 || a2->unk2 <= 0) {
            func_800058DC(arg0, func_8021E59C);
            return;
        }
        if (func_80224F5C(arg0, arg1) == 0) {
            func_8036A5AC(arg0, arg1, sp24[0], sp24[2]);
            func_800058DC(arg0, func_8036E0A4);
        }
    }
}
