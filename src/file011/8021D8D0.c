#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021D8D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021DC6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021DEA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021DFA8.s")

struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_8021E59C();
void func_8021E52C(s32 arg0, s32 arg1);
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern s32 func_80224AC4(s32, s32);
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);
struct func_80221720_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2F9 - 0x2D9];
    u8 unk2F9;
    u8 pad3[0x392 - 0x2FA];
    u8 unk392;
};
extern s32 D_801BBCCC;

struct func_8021E414_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};

void func_8021E414(s32 arg0, s32 arg1) {
    s32 sp3C;
    struct func_80221720_Struct *sp38;
    u16 sp36;
    struct func_8021E52C_Struct sp28;

    sp3C = ((struct func_8021E414_Actor *) arg0)->unk5C;
    if (arg0 == D_801BBCCC) {
        sp38 = (struct func_80221720_Struct *) &D_801BC03C;
    } else {
        sp38 = (struct func_80221720_Struct *) &D_801BC3D8;
    }
    sp36 = func_80224AC4(arg0, 0);
    if (sp38->u30.b.f == 0) {
        sp38->u30.b.f = sp38->unk2F9 + 2;
    }
    sp38->unk392 = 0;
    func_802256E4(&sp28, arg0, 0);
    if (func_80011140(arg1, sp3C, sp28, 0xA) != 0) {
        if (sp36 == 0) {
            func_800058DC(arg0, (void *) func_8021E59C);
            return;
        }
        func_800058DC(arg0, (void *) func_8021E52C);
    }
}



extern s32 func_80224F5C();
extern void func_8013A28C(s32 arg0, struct func_8021E52C_Struct arg1);

void func_8021E52C(s32 arg0, s32 arg1) {
    struct func_8021E52C_Struct sp1C;

    if (func_80224F5C() == 0) {
        func_802256E4(&sp1C, arg0, 0);
        func_8013A28C(arg1, sp1C);
        func_800058DC(arg0, func_8021E59C);
    }
}


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

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021EB88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021ECD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021F184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021F7AC.s")



struct func_8021F9C8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct func_8021F9C8_Dev {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};

extern s32 func_80010550(s32, s32);
extern void func_802237B0(s32, s32);

void func_8021F9C8(s32 arg0, s32 arg1) {
    s32 sp2C;
    struct func_8021E52C_Struct *sp20;
    struct func_8021F9C8_Struct *var_s0;

    sp2C = ((struct func_8021F9C8_Actor *) arg0)->unk5C;
    if (arg0 == ((struct func_8021F9C8_Dev *) &D_801BBBF0)->unkDC) {
        var_s0 = &D_801BC03C;
    } else {
        var_s0 = &D_801BC3D8;
    }
    if ((var_s0->unk2 <= 0) || ((((*(u32 *) &var_s0->unk30) << 1) >> 30) != 0)) {
        func_802233B0(arg0, arg1);
    } else if (((struct func_8021F9C8_Dev *) &D_801BBBF0)->unk1031 == 5) {
        if ((var_s0->unk30 & 7) - 5 == 0) {
            func_8022397C(arg0);
        } else {
            func_802237B0(arg0, 1);
            if (func_80010550(arg1, sp2C) != 0) {
                var_s0->unk328 = 0;
                var_s0->unk32 = var_s0->unk32 & 0xFF1F;
                sp20 = (struct func_8021E52C_Struct *) (sp2C + 0x1C);
                func_802256E4(sp20, arg0, 0);
                func_8013A28C(arg1, *sp20);
                func_800058DC(arg0, &func_8021E59C);
            }
            var_s0->unk392 = 0;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021FB0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021FD00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021FE14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8021FF78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8022038C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_802208B0.s")


struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};

extern void func_80359560(s32);
extern void func_80220FC0();

void func_80220F60(s32 arg0) {
    s32 sp1C;

    if (arg0 != D_801BBBF0.unkDC) {
        sp1C = D_801BBBF0.unkDC;
    } else {
        sp1C = D_801BBBF0.unkEC;
    }
    if (D_801BBBF0.unk1031 != 0xF) {
        func_80359560(arg0);
        func_800058DC(sp1C, func_80220FC0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80220FC0.s")


extern void func_8035C048();
extern u8 D_801BCC21;

void func_80221040(void) {
    if (D_801BCC21 != 0xF) {
        func_8035C048();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80221070.s")


extern void func_802219F8();
extern void func_80221E9C();
extern void func_80222708();
extern s32 func_803628B8();
struct func_802218D4_Obj;
void func_802218D4(struct func_802218D4_Obj *arg0, s32 arg1);
extern void func_80224BEC(s32, s32);


struct func_80221720_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};

void func_80221720(struct func_80221720_Actor *arg0, s32 arg1) {
    s32 sp44;
    struct func_80221720_Struct *v1;
    u8 pad;
    u8 pad2;
    u8 t0;
    struct func_8021E52C_Struct sp30;

    sp44 = arg0->unk5C;
    if ((s32)arg0 == D_801BBBF0.unkDC) {
        v1 = (struct func_80221720_Struct *)&D_801BC03C;
    } else {
        v1 = (struct func_80221720_Struct *)&D_801BC3D8;
    }
    v1->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        if (v1->unk2D8 == 0xE) {
            t0 = 0;
        } else {
            t0 = func_80224AC4((s32)arg0, 0);
        }
        if (v1->u30.b.f == 0) {
            v1->u30.b.f = v1->unk2F9 + 2;
        }
        func_802256E4(&sp30, (s32)arg0, 0);
        if (func_80011140(arg1, sp44, sp30, 3) != 0) {
            if (t0 == 0) {
                if (v1->unk2D8 == 0xE) {
                    func_800058DC((s32)arg0, func_802219F8);
                } else if (v1->unk2D8 == 0xF) {
                    func_803628B8((s32)arg0, arg1);
                } else if (v1->unk2D8 == 0xD) {
                    func_800058DC((s32)arg0, func_80221E9C);
                } else {
                    func_800058DC((s32)arg0, func_80222708);
                }
            } else {
                func_80224BEC((s32)arg0, arg1);
                func_800058DC((s32)arg0, func_802218D4);
            }
        }
    }
}


struct func_802218D4_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2F9 - 0x2D9];
    u8 unk2F9;
    u8 pad3[0x392 - 0x2FA];
    u8 unk392;
};

struct func_802218D4_Obj {
    u8 pad0[0x36];
    u16 unk36;
};


void func_802218D4(struct func_802218D4_Obj *arg0, s32 arg1) {
    extern s32 func_80224F5C();
    struct func_802218D4_Struct *v1;
    u32 a0;
    u32 t;

    if ((s32) arg0 == D_801BBCCC) {
        v1 = (struct func_802218D4_Struct *) &D_801BC03C;
    } else {
        v1 = (struct func_802218D4_Struct *) &D_801BC3D8;
    }
    v1->unk392 = 0;
    if (arg0->unk36 == 0x11D) {
        a0 = 0;
    } else {
        a0 = func_80224F5C(arg0, arg1) & 0xFFFF;
    }
    if (a0 == 0) {
        t = v1->unk2D8;
        if (t == 0xE) {
            func_800058DC((s32) arg0, func_802219F8);
            return;
        }
        if (t == 0xF) {
            func_803628B8((s32) arg0, arg1);
            return;
        }
        if (t == 0xD) {
            func_800058DC((s32) arg0, func_80221E9C);
            return;
        }
        if (((v1->u30.w << 9) >> 30) == 0) {
            v1->u30.b.f = v1->unk2F9 + 2;
        }
        func_800058DC((s32) arg0, func_80222708);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_802219F8.s")


extern void func_80222B08();

struct func_80221BA8_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad : 6;
            u32 c : 2;
            u32 rest : 21;
        } f;
        struct {
            u8 b0;
            u8 top : 1;
            u8 mode : 2;
            u8 low : 5;
        } b;
    } flags;
    u8 pad34[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2FA[0x392 - 0x2FA];
    u8 unk392;
};

void func_80221BA8(s32 arg0, s32 arg1) {
    s32 temp;
    struct func_80221BA8_Struct *p;

    temp = ((struct func_8021F9C8_Actor *)arg0)->unk5C;
    if (arg0 == D_801BBBF0.unkDC) {
        p = (struct func_80221BA8_Struct *)&D_801BC03C;
    } else {
        p = (struct func_80221BA8_Struct *)&D_801BC3D8;
    }
    p->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        func_802237B0(arg0, 1);
        if (func_80010550(arg1, temp)) {
            if (p->unk2 <= 0 || p->flags.f.b != 0) {
                func_800058DC(arg0, func_80222B08);
                return;
            }
            if (p->flags.f.c == 0) {
                p->flags.b.mode = p->unk2F9 + 2;
            }
            func_800058DC(arg0, func_80222708);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80221CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80221E9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80221FF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222210.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_802227A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222B08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222CFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222E84.s")


void func_80222FCC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80222FD8.s")


extern u8 func_80386420[];
extern void func_80011198(s32 arg0, void *arg1);
extern void func_80223260();
void func_8022321C(s32 arg0, s32 arg1);

struct func_8022310C_Var {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8022310C_Obj {
    u8 pad0[0x7C];
    void *unk7C;
    u16 unk80;
};

void func_8022310C(s32 arg0, s32 arg1) {
    struct func_8022310C_Var *var_v1;
    struct func_8022310C_Obj *sp18;
    u32 temp_v0;

    if (arg0 == D_801BBCCC) {
        var_v1 = (struct func_8022310C_Var *) &D_801BC03C;
    } else {
        var_v1 = (struct func_8022310C_Var *) &D_801BC3D8;
    }
    sp18 = (struct func_8022310C_Obj *) ((struct func_8021F9C8_Actor *) arg0)->unk5C;
    func_80011198(arg1, sp18);
    if (((u32) (var_v1->unk30 << 0xB) >> 0x1E) != 0) {
        func_802237B0(arg0, 1);
        if ((u32) (var_v1->unk30 << 0xB) >> 0x1E == 2) {
            sp18->unk7C = (void *) (func_80386420 + 0x60);
        } else if ((u32) (var_v1->unk30 << 0xB) >> 0x1E == 3) {
            sp18->unk7C = (void *) (func_80386420 + 0x50);
        } else {
            sp18->unk7C = (void *) (func_80386420 + 0x30);
        }
        sp18->unk80 = 2;
        func_800058DC(arg0, (void *) func_8022321C);
        return;
    }
    func_800058DC(arg0, (void *) func_80223260);
}


extern s32 func_801DB6B8(s32, s32, s32);

void func_8022321C(s32 arg0, s32 arg1) {
    if (func_801DB6B8(arg0, arg1, 0) != 0) {
        func_802237B0(arg0, 0);
        func_800058DC(arg0, func_80223260);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_80223260.s")


void func_802233A4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

void func_802234F8(s32 arg0, s32 arg1);
s32 func_802233B0(s32 arg0, s32 arg1) {
    func_8021E59C_Struct3C *s;
    func_8021E59C_Player *p0;
    func_8021E59C_Player *p1;

    s = A->unk5C;
    if (arg0 == DEV->unkDC) {
        p0 = (func_8021E59C_Player *)&D_801BC03C;
    } else {
        p0 = (func_8021E59C_Player *)&D_801BC3D8;
    }
    if (arg0 != DEV->unkDC) {
        p1 = (func_8021E59C_Player *)&D_801BC03C;
    } else {
        p1 = (func_8021E59C_Player *)&D_801BC3D8;
    }
    if (DEV->unk1031 != 0xF) {
        p0->unk30.b[0] = (u16)((p0->unk30.b[0] & 0xFF9F) | 0x20);
        p0->unk30.b[0] = (u16)(p0->unk30.b[0] | 1);
        p0->unk30.b[0] |= 0x80;
        p0->unk30.b[2] &= 0xFF1F;
        p1->unk30.b[0] = (u16)(p1->unk30.b[0] & 0xFFFE);
        p1->unk30.b[0] |= 0x80;
        if (s->unk9C == 1 || s->unk9C == 2) {
            s->unk9C = 3;
        }
        func_802237B0(arg0, 1);
        func_800113D0(arg1, (u8 *)s + 0x22, s);
        func_8013C6FC(arg0, arg1, 0);
        func_8013B808(arg0, arg1, 2);
        if (A->unk36 == 0x11D) {
            func_80366F88(arg0, arg1);
            return;
        }
        func_800058DC(arg0, func_802234F8);
    }
}


struct func_802234F8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
extern struct func_8021E52C_Struct D_8023C2D4;
extern void func_8022359C();

void func_802234F8(s32 arg0, s32 arg1) {
    s32 sp2C;
    struct func_8021E52C_Struct sp20;

    sp2C = ((struct func_802234F8_Actor *) arg0)->unk5C;
    sp20 = D_8023C2D4;
    if ((D_801BCC21 != 0xF) && (func_80011140(arg1, sp2C, sp20, 3) != 0)) {
        func_800058DC(arg0, &func_8022359C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8022359C.s")

