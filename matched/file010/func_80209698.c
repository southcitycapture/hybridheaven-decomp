#include "common.h"
extern u8 D_801BBBF0[];
struct func_8020C39C_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
};
struct func_8020C39C_StructPlayer {
    u8 pad0[0x2C];
    struct func_8020C39C_StructInner *inner;
};
extern struct func_8020C39C_StructPlayer *D_801BBCD0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4();
extern u16 func_8012FF58();
extern s32 func_80150584();
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FC830(f32, f32, f32, f32, s32);
typedef struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C - 0x30];
    u16 unk3C;
    u8 pad3E[0x44 - 0x3E];
    f32 unk44;
    u8 pad48[0x74 - 0x48];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x90 - 0x8A];
    u8 unk90;
    u8 unk91;
    u8 pad92[0x94 - 0x92];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 padA6[0xAC - 0xA6];
    u8 unkAC;
    u8 padAD[0xB0 - 0xAD];
    u8 unkB0;
} func_8020FB98_Struct;
extern void func_801FCF98(func_8020FB98_Struct *);
extern s32 func_801FD168(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern void func_801FD260(s32, void *);
extern s32 func_801FD68C(func_8020FB98_Struct *);
extern void func_801FDB3C(s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


struct func_80209698_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x4B - 0x24];
    u8 unk4B;
};
struct func_80209698_Outer {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_80209698_Inner *unk30;
};
struct func_80209698_Arg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x90 - 0x4C];
    u8 unk90;
    u8 pad91;
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    s16 unkA6;
    u8 padA8[4];
    u8 unkAC;
    u8 padAD;
    s16 unkAE;
    u8 unkB0;
};
struct func_80209698_Global {
    u8 pad0[0x35C];
    f32 unk35C;
    f32 unk360;
    f32 unk364;
};
extern void func_80020718(s32);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80126944(void);
extern s32 func_801FD4F4(s16, s16, s32);
extern u16 D_801BCAE0;

s32 func_80209698(struct func_80209698_Arg0 *arg0, struct func_80209698_Outer **arg1) {
    s32 b;
    f32 dx;
    f32 dz;
    f32 dist;
    f32 d;
    s32 ang;
    s32 a;
    s32 hit;
    s32 t;

    switch (arg0->unk90) {
    case 0:
        return 1;
    case 2:
        arg0->unk40 += func_8001EAD0(arg0->unkA2) * 0.03;
        arg0->unk48 += func_8001EB64(arg0->unkA2) * 0.03;
        if (arg0->unkAC & 1) {
            t = 0;
        } else {
            ang = func_8001EF38(arg0->unk40, arg0->unk48);
            t = func_8010843C(arg0->unk94, arg0->unk98, arg0->unk9C, func_8001EAD0(ang) * 20.0f + arg0->unk94, arg0->unk98,
                              func_8001EB64(ang) * 20.0f + arg0->unk9C);
        }
        b = arg0->unk3C == 0;
        a = arg0->unk3C;
        arg0->unk3C = a - 1;
        if (b || t != 0) {
            arg0->unk90 = 4;
            if (arg0->unkAC & 1) {
                arg0->unkAE = 0xF;
                if (arg0->unk92 < 0) {
                    arg0->unk92 = 0x88;
                } else {
                    arg0->unk92 = -0x88;
                }
            } else {
                arg0->unkAE = func_8012C6B4(0x14) + 5;
                if (func_8012C6B4(2) == 0) {
                    arg0->unk92 = 0x88;
                } else {
                    arg0->unk92 = -0x88;
                }
            }
        }
        break;
    case 4:
        arg0->unkA2 = (s16)(arg0->unk92 + arg0->unkA2) & 0x1FFF;
        if ((b = arg0->unkAE--) <= 0) {
            arg0->unkAE = 0;
            arg0->unk90 = 2;
            if (arg0->unkAC & 1) {
                arg0->unk3C = func_8012C6B4(5) + 0x28;
            } else {
                arg0->unk3C = func_8012C6B4(0x32) + 0x14;
            }
        }
        break;
    case 9:
        arg0->unk40 = arg0->unk40 * 0.6;
        arg0->unk48 = arg0->unk48 * 0.6;
        if (arg0->unk3C < 2) {
            arg1[2]->unk30->unk18 = arg1[2]->unk30->unk18 - 0.0045;
            arg1[2]->unk30->unk1C = arg1[2]->unk30->unk1C - 0.0045;
        }
        if (arg0->unk3C == 2) {
            arg1[2]->unk22 = 0;
            arg1[2]->unk30->unk18 = 0.01f;
            arg1[2]->unk30->unk1C = 0.01f;
            arg1[2]->unk30->unk4B = 0;
            if (func_80150584() == 0) {
                t = func_801FD168(func_8001EAD0(arg0->unkA2) * 6.0 + arg0->unk94, arg1[2]->unk30->unk8 - 1.8,
                                  func_8001EB64(arg0->unkA2) * 6.0 + arg0->unk9C,
                                  func_8001EAD0(arg0->unkA2) * 4.5, -func_8001EAD0(arg0->unkA0) * 4.5,
                                  func_8001EB64(arg0->unkA2) * 4.5,
                                  arg0->unkA0, arg0->unkA2, arg0->unkA4, 2, 0, 0);
                if (t != 0) {
                    func_801FD260(t, arg0);
                }
                t = func_801FD168(func_8001EAD0(arg0->unkA2) * 2 + arg0->unk94, arg1[2]->unk30->unk8,
                                  func_8001EB64(arg0->unkA2) * 2 + arg0->unk9C, 0.0f, 0.0f, 0.0f,
                                  arg0->unkA0, arg0->unkA2, arg0->unkA4, 4, 0, 0);
                if (t != 0) {
                    func_801FD260(t, arg0);
                }
                func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3CD);
            }
        }
        b = arg0->unk3C >= 0xF;
        a = arg0->unk3C;
        arg0->unk3C = a + 1;
        if (b) {
            arg1[2]->unk22 = 1;
            arg1[2]->unk30->unk4B += 4;
            if (arg1[2]->unk30->unk4B >= 0x7C) {
                arg1[2]->unk30->unk4B = 0x80;
                if (arg0->unkAE == 0) {
                    arg0->unk90 = 2;
                    arg0->unk3C = func_8012C6B4(0x32) + 0x14;
                } else {
                    arg0->unk90 = 4;
                }
            }
        }
        break;
    case 10:
        arg0->unk3C += 0x1C7;
        if (arg0->unk3C >= 0x2000) {
            arg1[2]->unk22 = 1;
            arg1[2]->unk30->unk4B = 0;
            arg1[0]->unk30->unk10 = 0;
            arg1[0]->unk30->unk14 = 0;
            arg1[1]->unk30->unk10 = 0;
            arg1[1]->unk30->unk14 = 0;
            arg1[2]->unk30->unk18 = 0.01f;
            arg1[2]->unk30->unk1C = 0.01f;
            arg1[2]->unk30->unk20 = 0.01f;
            arg0->unk90 = 3;
            arg0->unk3C = 0;
            arg0->unkAC &= 0xFFBF;
        }
        break;
    case 3:
        arg1[2]->unk30->unk4B += 4;
        if (arg1[2]->unk30->unk4B >= 0x7C) {
            arg1[2]->unk30->unk4B = 0x80;
            if (arg0->unkAE == 0) {
                arg0->unk90 = 2;
                arg0->unk3C = func_8012C6B4(0x32) + 0x14;
            } else {
                arg0->unk90 = 4;
            }
        }
        break;
    case 7:
        t = arg0->unk3C;
        a = arg0->unk3C;
        arg0->unk3C = a + 1;
        if (t == 0) {
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x116);
            func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x12);
        }
        if (t >= 4) {
            if (arg0->unkAC & 0x20) {
                arg1[3]->unk22 = 0;
            }
            arg1[0]->unk22 = 0;
            arg1[1]->unk22 = 0;
            arg1[2]->unk22 = 0;
            arg0->unk90 = 0;
            func_801FCF98(arg0);
        }
        break;
    }

    if (arg0->unk40 < -0.3) {
        arg0->unk40 = -0.3f;
    } else if (arg0->unk40 > 0.3) {
        arg0->unk40 = 0.3f;
    }
    if (arg0->unk48 < -0.3) {
        arg0->unk48 = -0.3f;
    } else if (arg0->unk48 > 0.3) {
        arg0->unk48 = 0.3f;
    }
    if ((arg0->unkAC & 1) || func_80126944() != 0) {
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
    }
    if (func_801C3D20(arg0->unk94, arg0->unk9C, 4.0f) != 0) {
        if (arg0->unk98 - 18.0 <= D_801BBCD0->inner->y && D_801BBCD0->inner->y <= arg0->unk98 - 2.0) {
            ang = (s16)(func_8001EF38(arg0->unk94 - D_801BBCD0->inner->x, arg0->unk9C - D_801BBCD0->inner->z) + 0x2D) & 0x1FFF;
            dx = func_8001EAD0(ang);
            arg0->unk40 = D_801BBCD0->inner->x + dx * 4.0 - arg0->unk94;
            dx = func_8001EB64(ang);
            arg0->unk48 = D_801BBCD0->inner->z + dx * 4.0 - arg0->unk9C;
        }
    }
    if (0.0f != arg0->unk40 || 0.0f != arg0->unk44) {
        ang = func_8001EF38(arg0->unk40, arg0->unk48);
        d = func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40);
        if (d < 4.0) {
            d = 4.0f;
        }
        if (func_8010843C(arg0->unk94, arg0->unk98, arg0->unk9C, func_8001EAD0(ang) * d + arg0->unk94, arg0->unk98,
                          func_8001EB64(ang) * d + arg0->unk9C) != 0) {
            ang = func_8001EF38(((struct func_80209698_Global *)D_801BBBF0)->unk35C,
                                ((struct func_80209698_Global *)D_801BBBF0)->unk364);
            arg0->unk40 = (f64)func_8001EAD0(ang);
            arg0->unk48 = (f64)func_8001EB64(ang);
        }
    }
    dx = D_801BBCD0->inner->x - arg0->unk94;
    dz = D_801BBCD0->inner->z - arg0->unk9C;
    dist = func_8002FC20(dx * dx + dz * dz);
    if (!(arg0->unkAC & 0x40) && !(D_801BCAE0 & 0x1000) && (arg0->unk90 == 2 || arg0->unk90 == 4)) {
        ang = func_8001EF38(dx, dz);
        if (D_801BCAE0 & 0x100) {
            dx = 15.0f;
        } else {
            dx = 25.0f;
        }
        if (dist <= 45.0) {
            if (arg0->unk98 - dx <= D_801BBCD0->inner->y && D_801BBCD0->inner->y <= arg0->unk98 - 1.0 &&
                func_801FD4F4(arg0->unkA2, ang, 0xCC) != 0) {
                arg0->unk90 = 9;
                arg0->unk3C = 0;
                func_80020718(0x3CC);
            }
        }
    }
    if ((arg0->unkAC & 0x20) && func_801C3D20(arg0->unk94, arg0->unk9C, 6.0f) != 0 &&
        D_801BBCD0->inner->y <= arg0->unk98) {
        arg0->unkAC &= 0xFFDF;
        arg1[3]->unk22 = 0;
        t = func_801FD168(arg1[3]->unk30->unk4, arg1[3]->unk30->unk8, arg1[3]->unk30->unkC, 0.0f, 0.0f, 0.0f, 0, 0, 0,
                          0x21, 0, func_8012FF58() / 10 * 20 + 20);
        if (t != 0) {
            func_801FD260(t, arg0);
        }
        func_80129FB8(arg1[3]->unk30->unk4, arg1[3]->unk30->unk8, arg1[3]->unk30->unkC, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0,
                      0xC8, 0xC8, 0xC8, 0x8C, -6, 0.03f, 1, 0);
    }
    hit = func_801FD68C((func_8020FB98_Struct *)arg0);
    if (hit != 0) {
        if (arg0->unk90 != 7 && arg0->unk90 != 0) {
            arg0->unkB0--;
            arg0->unk40 = 0.0f;
            arg0->unk48 = 0.0f;
            if (arg0->unkB0 == 0) {
                arg0->unk90 = 7;
                arg0->unk3C = 0;
            } else {
                func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3A9);
                arg0->unk90 = 0xA;
                arg0->unk3C = 0;
                arg1[2]->unk22 = 0;
                func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x10);
            }
            func_801FDB3C(hit);
        }
    }
    if (arg0->unk90 != 9) {
        arg0->unkA6 = (s16)(arg0->unkA6 + 0xB6) & 0x1FFF;
    }
    arg1[0]->unk30->unk4 = arg0->unk94;
    arg1[0]->unk30->unk8 = func_8001EAD0(arg0->unkA6) + arg0->unk98;
    arg1[0]->unk30->unkC = arg0->unk9C;
    arg1[0]->unk30->unk12 = arg0->unkA2;
    arg1[1]->unk30->unk4 = arg0->unk94;
    arg1[1]->unk30->unk8 = arg1[0]->unk30->unk8;
    arg1[1]->unk30->unkC = arg0->unk9C;
    arg1[1]->unk30->unk12 = (s16)(arg1[1]->unk30->unk12 + 0x5B) & 0x1FFF;
    arg1[2]->unk30->unk4 = func_8001EAD0(arg0->unkA2) * 2 + arg0->unk94;
    arg1[2]->unk30->unk8 = arg1[0]->unk30->unk8;
    arg1[2]->unk30->unkC = func_8001EB64(arg0->unkA2) * 2 + arg0->unk9C;
    arg1[2]->unk30->unk10 = arg0->unkA0;
    arg1[2]->unk30->unk12 = arg0->unkA2;
    if (arg0->unk90 == 0xA) {
        arg1[1]->unk30->unk10 = (s16)(arg1[1]->unk30->unk10 + func_8001EAD0(arg0->unk3C * 4) * 682.0f) & 0x1FFF;
        arg1[1]->unk30->unk12 = (s16)(arg1[1]->unk30->unk12 + func_8001EAD0(arg0->unk3C * 2) * 682.0f) & 0x1FFF;
        arg1[1]->unk30->unk14 = (s16)(arg1[1]->unk30->unk14 + func_8001EAD0(arg0->unk3C * 8) * 682.0f) & 0x1FFF;
        arg1[0]->unk30->unk10 = (s16)(arg1[0]->unk30->unk10 + func_8001EAD0(arg0->unk3C * 4) * 682.0f) & 0x1FFF;
        arg1[0]->unk30->unk12 = (s16)(arg1[0]->unk30->unk12 + func_8001EAD0(arg0->unk3C * 2) * 682.0f) & 0x1FFF;
        arg1[0]->unk30->unk14 = (s16)(arg1[0]->unk30->unk14 + func_8001EAD0(arg0->unk3C * 8) * 682.0f) & 0x1FFF;
    }
    if (arg0->unkAC & 0x20) {
        arg1[3]->unk30->unk4 = arg0->unk94;
        arg1[3]->unk30->unk8 = arg1[0]->unk30->unk8 - 2.0f;
        arg1[3]->unk30->unkC = arg0->unk9C;
        arg1[3]->unk30->unk12 = arg0->unkA2;
    }
    return 1;
}
