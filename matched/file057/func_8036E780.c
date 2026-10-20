#include "context.h"

typedef struct func_8036E780_State {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 a : 1;
    u32 m : 2;
    u32 p1 : 4;
    u32 b : 1;
    u32 p2 : 3;
    u32 f : 2;
    u32 g : 3;
} func_8036E780_State;
extern void func_8022397C(void *);
extern void func_80365FE0(void *, void *);
extern u8 func_80222E84[];
extern func_8036D30C_Anim D_80387B38;

void func_8036E780(void *arg0, struct func_80369C7C_Obj2 **arg1) {
    s32 sp34;
    func_8036E780_State *st;
    func_8036D30C_Anim sp24;

    sp34 = *(s32 *)((u8 *)arg0 + 0x5C);
    if (arg0 == (void *)D_801BBBF0.unkDC) {
        st = (func_8036E780_State *)D_801BC03C;
    } else {
        st = (func_8036E780_State *)D_801BC3D8;
    }
    sp24 = D_80387B38;
    st->b = 1;
    st->a = 1;
    if (st->unk2 <= 0 || st->m != 0) {
        func_800058DC((s32)arg0, func_80222E84);
        return;
    }
    if (*((u8 *)&D_801BBBF0 + 0x1031) != 0xF) {
        if (st->g == 5) {
            func_8022397C(arg0);
            return;
        }
        func_802237B0(arg0, 1);
        if (func_80010550(arg1, sp34) != 0) {
            if (st->f == 1) {
                st->f = 2;
                *(u32 *)&sp24 = 0x0190001C;
            } else {
                st->f = 1;
                *(u32 *)&sp24 = 0x0190001B;
            }
            (*arg1)->unk2C->unk12 += 0x1000;
            (*arg1)->unk2C->unk12 &= 0x1FFF;
            func_8013A28C(arg1, sp24);
            func_80010550(arg1, sp34);
            func_802237B0(arg0, 0);
            func_80365FE0(arg0, arg1);
        }
    }
}
