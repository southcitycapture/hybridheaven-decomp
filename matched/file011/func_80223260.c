#include "context.h"
void func_802233A4(s32 arg0, s32 arg1);
extern void func_802408F0();
extern void func_80225664();

void func_80223260(func_8021E59C_Actor *arg0, s32 arg1) {
    s32 sp34;
    struct func_8021E52C_Struct sp28;
    s32 t;

    sp34 = (s32)arg0->unk5C;
    if (D_801BBC1C == 0xA) {
        func_802408F0(arg0);
        return;
    }
    t = arg0->unk36;
    if (t == 0x29 || t == 0x2B || t == 0x11B || t == 0x11C || t == 0x31 || t == 0x2E || t == 0x57 || t == 0x58 || t == 0x59) {
        func_80225664(&sp28, arg0, 0x01680041);
    } else {
        func_802256E4(&sp28, (s32)arg0, 0);
    }
    if (func_80011140(arg1, sp34, sp28, 5) != 0) {
        func_8013A28C(arg1, sp28);
        func_80010550(arg1, sp34);
        func_800058DC((s32)arg0, func_802233A4);
    }
}
