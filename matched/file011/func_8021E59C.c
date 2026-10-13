#include "context.h"

typedef struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x74 - 0x10];
    u8 unk74;
    u8 pad75[0x9C - 0x75];
    u8 unk9C;
} func_8021E59C_Struct3C;

typedef struct {
    u8 pad0[0x2];
    u16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8021E59C_Struct68;

typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_8021E59C_Struct3C *unk5C;
    u8 pad60[0x68 - 0x60];
    func_8021E59C_Struct68 *unk68;
} func_8021E59C_Actor;

typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x6 - 0x4];
    s16 unk6;
    u8 pad8[0xA - 0x8];
    s16 unkA;
    u8 padC[0x30 - 0xC];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad3 : 6;
            u32 c : 2;
            u32 d : 2;
            u32 pad13 : 19;
        } f;
        struct {
            u16 pad0 : 13;
            u16 e : 3;
            u8 b2;
            u8 top : 1;
            u8 pad1 : 7;
        } g;
    } unk30;
    u8 pad34[0x42 - 0x34];
    s16 unk42;
    s16 unk44;
    u8 pad46[0x328 - 0x46];
    u8 unk328;
    u8 pad329[0x390 - 0x329];
    u8 unk390;
    u8 pad391[0x3A8 - 0x391];
    f32 unk3A8;
} func_8021E59C_Player;

typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8021E59C_Dev;

extern struct func_80220F60_Struct D_801BBBF0;
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern void func_800058DC(s32 arg0, void *arg1);
extern s32 func_802233B0();
extern s32 func_8022397C();
void func_8022310C(s32 arg0, s32 arg1);
extern u16 D_801BBC1C;
extern void func_8021DFA8();
extern void func_8022518C();
extern s32 func_8022560C();
extern void func_802237EC();
extern s32 func_802242D0();
extern s32 func_8012C6B4(s32);
extern void func_8036DD08(s32, s32);
extern void func_8035C98C(s32, s32);
extern void func_80362EC8(s32, s32);
extern void func_8036E960(s32, s32);
extern void func_8021F7AC(s32, s32);
extern void func_8021FE14(s32, s32);
extern void func_8021EB88(s32, s32);

#define A ((func_8021E59C_Actor *)arg0)
#define DEV ((func_8021E59C_Dev *)&D_801BBBF0)

void func_8021E59C(s32 arg0, s32 arg1) {
    func_8021E59C_Struct3C *sp3C;
    func_8021E59C_Struct68 *t0;
    func_8021E59C_Player *a2;
    func_8021E59C_Player *a1;
    f32 x;
    f32 z;
    u32 ret;
    u8 pad[4];
    u8 ok;
    u16 flags;

    sp3C = ((func_8021E59C_Actor *)arg0)->unk5C;
    t0 = ((func_8021E59C_Actor *)arg0)->unk68;
    if (arg0 == DEV->unkDC) {
        a2 = (func_8021E59C_Player *)&D_801BC03C;
    } else {
        a2 = (func_8021E59C_Player *)&D_801BC3D8;
    }
    if (arg0 == DEV->unkDC) {
        a1 = (func_8021E59C_Player *)&D_801BC3D8;
    } else {
        a1 = (func_8021E59C_Player *)&D_801BC03C;
    }
    if (a2->unk2 <= 0 || a2->unk30.f.b != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (DEV->unk1031 >= 10 && DEV->unk1031 != 15) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (DEV->unk1031 != 5 || a2->unk30.f.a != 0) {
        return;
    }
    x = -t0->unk6 / 20.0;
    z = t0->unk8 / 20.0;
    func_8022518C(arg0, a1, a2);
    if (sp3C->unkE == 0x11D) {
        if (t0->unk2 & 0x2000) {
            a2->unk390 = 2;
        } else {
            a2->unk390 = 0;
            a2->unk30.b[3] &= 0xFFE7;
        }
    } else if (sp3C->unkE == 0x148) {
        if (t0->unk2 & 0x2000) {
            if (a2->unk390 == 0) {
                a2->unk390 = 4;
            }
        } else if (a2->unk390 == 4) {
            a2->unk390 = 0;
            a2->unk30.b[3] &= 0xFFE7;
        }
    }
    if ((t0->unk4 & 4) && D_801BBC1C == 10) {
        if (A->unk36 == 0x148 || A->unk36 == 0xF9 || A->unk36 == 0xFC) {
            if (a2->unk6 >= 0x46 && a2->unkA >= 0x14) {
                a2->unk390 = 1;
                a2->unk44 += 0x46;
                a2->unk42 += 0x14;
                goto done;
            }
        }
        if (A->unk36 == 0xFD || A->unk36 == 0xF1) {
            if (sp3C->unk9C == 0 || sp3C->unk9C == 3) {
                if (a2->unk6 >= 100 && a2->unkA >= 100) {
                    sp3C->unk9C = 1;
                    a2->unk44 += 100;
                    a2->unk42 += 100;
                }
            } else {
                sp3C->unk9C = 3;
            }
        }
    }
done:
    ret =func_8022560C(sp3C, a1, a2);
    if (a2->unk30.g.e == 5) {
        func_8022397C(arg0, a1, a2);
        return;
    }
    if (a2->unk30.g.top == 1) {
        a2->unk328 = 0;
        func_800058DC(arg0, func_8021DFA8);
        return;
    }
    flags = t0->unk4;
    if ((flags & 0x8000) &&!(a1->unk30.b[0] & 1) && a2->unk6 >= 0x1F && ret != 6 && ret != 5 &&
        ret != 4 && ret != 9 && ret != 8 && ret != 7 && a1->unk2 != 0) {
        func_802237EC(arg0, a1, a2);
        return;
    }
    if ((flags & 0x10) &&!(a1->unk30.b[0] & 1)) {
        if (func_802242D0(arg0, a1, a2) != 0) {
            a2->unk328 = 0;
            if (a1->unk30.f.d != 0) {
                if (((func_8021E59C_Player *)&D_801BC3D8)->unk3A8 <= 20.0) {
                    ok = 1;
                    if (sp3C->unk74 == 3 || sp3C->unk74 == 2) {
                        if (func_8012C6B4(10) >= 7) {
                            ok = 0;
                        }
                    }
                    if (ok) {
                        func_8036DD08(arg0, arg1);
                    }
                }
            } else {
                func_8035C98C(arg0, arg1);
                return;
            }
        }
    }
    if (sp3C->unk74 == 2 || sp3C->unk74 == 3) {
        if ((t0->unk2 & 0x20) && (t0->unk2 & 0xF) && a2->unk30.f.c != 0) {
            func_80362EC8(arg0, arg1);
            return;
        }
    }
    if (a2->unk390 != 0) {
        a2->unk328 = 0;
        func_8036E960(arg0, arg1);
        return;
    }
    if (a2->unk328 == 3) {
        func_8021F7AC(arg0, arg1);
        return;
    }
    if ((t0->unk2 & 0x2000) && (a2->unk390 == 4 || x * x + z * z > 1.0)) {
        func_8021FE14(arg0, arg1);
        return;
    }
    func_8021EB88(arg0, arg1);
}
