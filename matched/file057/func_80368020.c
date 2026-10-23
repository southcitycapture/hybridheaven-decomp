#include "context.h"

typedef struct func_80368020_Struct {
    u8 pad0[0x30];
    u32 pad30a:9;
    u32 unk30:2;
    u32 pad30b:21;
    u8 pad34[4];
    u32 pad38a:3;
    u32 unk38:1;
    u32 pad38b:28;
} func_80368020_Struct;

typedef struct func_80368020_Tmp {
    s32 a;
    s32 b;
    s32 c;
} func_80368020_Tmp;

extern void func_80225664(func_80368020_Tmp *, s32, s32);
extern void D_8013A28C(s32, func_80368020_Tmp);
extern u8 func_80367D58(s32, func_80368020_Struct *);

void func_80368020(void *arg0, void *arg1) {
    s32 other;
    func_80368020_Struct *s;
    s32 lo;
    s32 hi;
    u8 r;
    func_80368020_Tmp tmp;

    if ((s32)arg0 != *(s32 *)(D_801BBBF0 + 0xDC)) {
        other = *(s32 *)(D_801BBBF0 + 0xDC);
    } else {
        other = *(s32 *)(D_801BBBF0 + 0xEC);
    }
    if ((s32)arg0 == *(s32 *)(D_801BBBF0 + 0xDC)) {
        s = (func_80368020_Struct *)&D_801BC03C;
    } else {
        s = (func_80368020_Struct *)&D_801BC3D8;
    }
    if (++D_80387254 >= 2) {
        func_8036780C((s32)arg0, (s32)arg1);
        return;
    }
    r = func_80367D58((s32)arg0, s);
    if (r == 0 || r == 0xF) {
        func_8036780C((s32)arg0, (s32)arg1);
        return;
    }
    if ((lo = r & 2) && !(r & 1)) {
        if (s->unk38 == 1) {
            lo = 0x019000A4;
            hi = 0x019000A5;
        } else {
            lo = 0x01900084;
            hi = 0x01900085;
        }
    } else if ((r & 1) && !lo) {
        if (s->unk38 == 1) {
            lo = 0x019000A2;
            hi = 0x019000A3;
        } else {
            lo = 0x01900082;
            hi = 0x01900083;
        }
    } else if ((s->unk30 == 2 && (r & 8)) || (s->unk30 == 3 && (r & 4))) {
        lo = 0x01900088;
        hi = 0x01900089;
    } else {
        lo = 0x01900086;
        hi = 0x01900087;
    }
    func_80225664(&tmp, (s32)arg0, lo);
    D_8013A28C((s32)arg1, tmp);
    func_800058DC((s32)arg0, func_80367C30);
    func_80006214(other);
    func_80225664(&tmp, other, hi);
    D_8013A28C((s32)D_8008DA88, tmp);
    func_80006214(arg0);
    func_800058DC(other, func_80367C24);
}
