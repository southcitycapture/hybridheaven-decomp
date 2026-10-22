#include "context.h"
struct func_80222C30_Actor { u8 pad0[0x1C]; struct func_8021E52C_Struct v; };
extern struct func_8021E52C_Struct D_8023C2C8;
struct func_8021F9C8_Actor;
void func_80222CFC(struct func_8021F9C8_Actor *arg0, s32 arg1);

void func_80222C30(s32 arg0, s32 arg1) {
    struct func_80222C30_Actor *p;
    u32 dev;
    struct func_8021E52C_Struct sp;
    struct func_8021E52C_Struct *q;
    extern s32 func_80010550();

    p = *(struct func_80222C30_Actor **)(arg0 + 0x5C);
    sp = D_8023C2C8;
    dev = (u32)&D_801BBBF0;
    if (dev >= 0 && ((func_8021E59C_Dev *)dev)->unk1031 != 0xF) {
        if (func_80010550(arg1, (s32)p * 1, p, arg0) != 0) {
            q = &p->v;
            *q = sp;
            func_8013A28C(arg1, *q);
            func_800058DC(arg0, func_80222CFC);
        }
    }
}
