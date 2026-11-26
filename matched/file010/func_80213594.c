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
extern f32 D_801BBF74;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern void func_80020718(s32);
extern f32 func_8002FC20(f32);
extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4();
extern void func_8012D918(void *, s32, s32, s32, s32);
extern u16 func_8012FF58();
extern s32 func_80150584();
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
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern s32 func_801FD68C(func_8020FB98_Struct *);
extern f32 func_801FD780(u8);
extern void func_801FDB3C(s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x4B - 0x16];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
} func_80213594_StructInner;
typedef struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_80213594_StructInner *unk30;
} func_80213594_StructOuter;
typedef struct {
    func_80213594_StructOuter *unk0;
    func_80213594_StructOuter *unk4;
} func_80213594_StructArg1;
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80213594_StructPos;
typedef struct {
    u8 pad0[0x24];
    func_80213594_StructOuter *unk24;
    u8 pad28[0x3C - 0x28];
    u16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x90 - 0x4C];
    u8 unk90;
    u8 unk91;
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    s16 unkA0;
    u16 unkA2;
    u16 unkA4;
    s16 unkA6;
    u8 padA8[0xB0 - 0xA8];
    u8 unkB0;
} func_80213594_StructArg0;
typedef struct {
    u8 pad0[0x2C];
    func_80213594_StructPos *unk2C;
} func_80213594_StructPlayer;
extern f32 func_80130038(f32, f32, f32);
extern void func_8013E5C4(void *, s32, s32, s32, s32);
extern void func_8002096C(s32, s32, s16);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern void func_801FCAE0(f32, f32, f32, s32);
extern f32 D_801BBF44[];
extern f32 D_801BBF40[];
extern f32 D_801BBF54;

s32 func_80213594(func_80213594_StructArg0 *arg0, func_80213594_StructArg1 *arg1) {
    u16 cnt;
    s16 v1;
    s32 s0;
    u16 spAE;
    f32 fs0;
    f32 fs1;
    f32 spA0;
    s32 i;
    s32 r2;
    s32 hit;
    f32 sp90;
    s32 v0;
    s32 obj;
    f32 sp84;
    f32 sp80;
    f32 len;
    f32 sp78;

    cnt = arg0->unk3C;
    arg0->unk3C = cnt + 1;
    s0 = cnt;
    if (func_80150584() != 0) {
        return 1;
    }
    if ((arg0->unk90 != 7) && (arg0->unk90 != 8) && (func_80133A24(0x287) != 0)) {
        arg0->unk98 = -127.0f;
        arg0->unk90 = 2;
        arg0->unk3C = 0;
        arg0->unk92 = 0;
        arg0->unkA6 = 0;
        arg0->unk40 = 0.0;
        arg0->unk44 = 0.0;
        arg0->unk48 = 0.0;
        arg1->unk4->unk22 = 0;
        return 1;
    }
    switch (arg0->unk90) {
    case 0:
        return 1;
    case 2:
        fs0 = arg0->unk98;
        if (func_80108590(arg0->unk94, fs0 - arg0->unk44, arg0->unk9C, arg0->unk94, (f32) ((f64) fs0 - 3.6), arg0->unk9C) == 0) {
            arg0->unk90 = 6;
            arg0->unk3C = 0;
        } else if (s0 >= 0x4B) {
            arg0->unk90 = 4;
            arg0->unk3C = 0;
            func_80020718(0x581);
        }
        break;
    case 4:
        if (s0 < 0x14) {
            arg0->unk40 += func_8001EAD0(arg0->unkA0) * 0.15;
            arg0->unk48 += func_8001EB64(arg0->unkA0) * 0.15;
            arg0->unkA6 = arg0->unkA6 + 0xB;
        }
        if (s0 >= 0x28) {
            arg0->unk40 -= func_8001EAD0(arg0->unkA0) * 0.15;
            arg0->unk48 -= func_8001EB64(arg0->unkA0) * 0.15;
            arg0->unkA6 = arg0->unkA6 - 0xB;
        }
        if (s0 >= 0x3C) {
            arg0->unk90 = 0xB;
            arg0->unk3C = 0;
            arg0->unkA6 = 0x16;
            arg0->unk92 = arg0->unk92 + 1;
            arg0->unk40 = 0.0;
            arg0->unk48 = 0.0;
            func_80020718(0x649);
            if (func_8012FF58() >= 0x28) {
                spA0 = ((func_80213594_StructPlayer *) D_801BBCD0)->unk2C->unk4 - arg0->unk94;
                fs1 = ((func_80213594_StructPlayer *) D_801BBCD0)->unk2C->unkC - arg0->unk9C;
                fs0 = (f32) ((f64) func_8002FC20((spA0 * spA0) + (fs1 * fs1)) * 0.023437499999999997);
                if ((f64) fs0 > 3.0) {
                    fs0 = 3.0f;
                }
                v0 = func_8001EF38(spA0, fs1); fs1 = func_8001EAD0((s16)v0 + (spAE = v0, 0)); r2 = *(u16 *) &spAE;
                v0 = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, fs1 * fs0, 3.2f, func_8001EB64(r2) * fs0, 0, 0, 0, 0x22, 0, 0x64);
                if (v0 != 0) {
                    func_801FD260(v0, arg0);
                }
            }
        }
        if (!(s0 % 2)) {
            hit = 0;
            do {
                r2 = (s16)(arg0->unkA2 + hit) & 0x1FFF; v1 = r2 | (s16)spAE * 0; if (v1) goto use_angle; use_angle: ;
                sp80 = func_8001EAD0(v1), sp84 = func_8001EB64(v1), fs1 = func_8001EAD0(v1), sp90 = func_8001EB64(v1);
                func_801FD168((f32) (((f64) sp80 * 10.0) + (f64) arg0->unk94), arg0->unk98, (f32) (((f64) sp84 * 10.0) + (f64) arg0->unk9C), (f32) (f64) fs1, 0.0, (f32) (f64) sp90, 0, 0, 0, 0x10, 0, (func_8012FF58() / 10) * 0x14);
                hit += 0x1000;
            } while (hit != 0x2000);
        }
        if (func_80150584() != 0) {
            arg0->unk90 = 0;
            func_80020718(0x649);
        }
        break;
    case 11:
        if (s0 >= 0xF) {
            if (arg0->unk92 < 5) {
                arg0->unk90 = 4;
                arg0->unkA0 = func_8001EF38(((func_80213594_StructPlayer *) D_801BBCD0)->unk2C->unk4 - arg0->unk94, ((func_80213594_StructPlayer *) D_801BBCD0)->unk2C->unkC - arg0->unk9C);
                arg0->unk3C = 0;
                func_80020718(0x581);
            } else {
                arg0->unk90 = 9;
                arg0->unk3C = 0;
                arg0->unk92 = 0;
            }
        }
        break;
    case 9:
        if (s0 < 0x16) {
            arg0->unkA6 = arg0->unkA6 - 1;
        }
        if (s0 == 0x1E) {
            v0 = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0, 10.0f, 0.0, 0, 0, 0, 0x1C, 0, 0);
            if (v0 != 0) {
                func_801FD260(v0, arg0);
            }
        }
        if (s0 >= 0x5A) {
            arg0->unk90 = 5;
            arg0->unk3C = 0;
            arg0->unk44 = 6.0f;
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x582);
        }
        break;
    case 5:
        arg0->unk44 = (f32) ((f64) arg0->unk44 * 0.8);
        if ((f64) arg0->unk44 < 0.01) {
            arg0->unk90 = 0xF;
            arg0->unk3C = 0;
            arg0->unk44 = 0.0;
            func_80020718(0x581);
        }
        break;
    case 15:
        if (arg0->unkA6 < 0x1C7) {
            arg0->unkA6 = arg0->unkA6 + 0x16;
        }
        if (s0 >= 0x4B) {
            arg0->unkA6 = arg0->unkA6 - 0x16;
        }
        switch (s0) {
        case 0x1E:
            v0 = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0, -4.0f, 0.0, 0x800, 0, 0, 0x17, 0, 0);
            if (v0 != 0) {
                func_801FD260(v0, arg0);
            }
        case 0x30:
            hit = 0;
            do {
                r2 = (s16)(arg0->unkA2 + hit) & 0x1FFF; v1 = (s16)r2;
                sp78 = func_8001EAD0(v1), sp80 = func_8001EB64(v1), sp84 = func_8001EAD0(v1), fs1 = func_8001EAD0(0x1C7), v0 = func_801FD168((f32) (((f64) sp78 * 10.0) + (f64) arg0->unk94), arg0->unk98, (f32) (((f64) sp80 * 10.0) + (f64) arg0->unk9C), (f32) ((f64) sp84 * 5.0), (f32) ((f64) -fs1 * 4.7), (f32) ((f64) func_8001EB64(v1) * 5.0), 0x1C7, v1, arg0->unkA4, 0x13, 0, 0);
                if (v0 != 0) {
                    func_801FD260(v0, arg0);
                }
                fs1 = func_8001EAD0(v1), v0 = func_801FD168((f32) (((f64) fs1 * 10.0) + (f64) arg0->unk94), arg0->unk98, (f32) (((f64) func_8001EB64(v1) * 10.0) + (f64) arg0->unk9C), 0.0, 0.0, 0.0, 0x1C7, v1, arg0->unkA4, 0x15, 0, 0);
                if (v0 != 0) {
                    func_801FD260(v0, arg0);
                }
                hit += 0x800;
            } while (hit != 0x2000);
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x224);
            break;
        case 0x2A:
        case 0x36:
            if (func_8012FF58() >= 0x28) {
                v0 = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0, -4.0f, 0.0, 0x800, 0, 0, 0x17, 0, 0);
                if (v0 != 0) {
                    func_801FD260(v0, arg0);
                }
            }
            break;
        case 0x5F:
            arg0->unk90 = 0x10;
            arg0->unk3C = 0;
            func_80020718(0x5D1);
            arg1->unk4->unk22 = 1;
            break;
        }
        break;
    case 16:
        func_801FCA4C(arg0->unk94, arg0->unk98, arg0->unk9C, 300.0f, 0x5D1);
        func_801FCAE0(arg0->unk94, arg0->unk98, arg0->unk9C, 0x5D1);
        if (arg0->unkA6 < 0x3C) {
            arg0->unkA6 = arg0->unkA6 + 0xB;
        }
        if (s0 >= 0x96) {
            arg0->unkA6 = arg0->unkA6 - 0xB;
        }
        if (s0 < 0x3C) {
            if (arg1->unk4->unk30->unk4B < 0xC8) {
                arg1->unk4->unk30->unk4B = arg1->unk4->unk30->unk4B + 0xA;
            }
        } else if (s0 >= 0x96) {
            if (s0 == 0x96) {
                func_80020718(0x6C0);
            }
            if (arg1->unk4->unk30->unk4B >= 0xB) {
                arg1->unk4->unk30->unk4B = arg1->unk4->unk30->unk4B - 0xA;
            }
        }
        if (s0 >= 0xD2) {
            arg0->unk90 = 6;
            arg0->unk3C = 0;
            arg0->unk44 = 0.0;
            arg1->unk4->unk22 = 0;
        } else {
            v0 = func_8001EF38(((func_80213594_StructPlayer *) D_801BBCD0)->unk2C->unk4 - arg0->unk94, ((func_80213594_StructPlayer *) D_801BBCD0)->unk2C->unkC - arg0->unk9C);
            arg0->unk40 = (f32) (((f64) func_8001EAD0((s16)v0 + (spAE = v0, 0)) * 0.02) + (r2 = *(u16 *) &spAE, (f64) arg0->unk40));
            arg0->unk48 = (f32) ((f64) func_8001EB64(r2) * 0.02 + (r2 = 0, (f64) arg0->unk48));
            if ((f64) arg0->unk40 < -0.8) {
                arg0->unk40 = -0.8f;
            }
            if ((f64) arg0->unk40 > 0.8) {
                arg0->unk40 = 0.8f;
            }
            if ((f64) arg0->unk48 < -0.8) {
                arg0->unk48 = -0.8f;
            }
            if ((f64) arg0->unk48 > 0.8) {
                arg0->unk48 = 0.8f;
            }
            func_8012D918(arg0, 0xD9, 2, 1, 0);
            arg1->unk4->unk30->unk4C = arg1->unk4->unk30->unk4C + 4;
            arg1->unk4->unk30->unk4D = arg1->unk4->unk30->unk4D - 0xC;
            arg1->unk4->unk30->unk4 = arg0->unk94;
            arg1->unk4->unk30->unk8 = arg0->unk98;
            arg1->unk4->unk30->unkC = arg0->unk9C;
            if ((s0 >= 0x1E) && (s0 < 0x96)) {
                if (!(s0 % 4)) {
                    fs0 = arg0->unk98;
                    if (func_80108590(arg0->unk94, fs0 - arg0->unk44, arg0->unk9C, arg0->unk94, (f32) ((f64) fs0 - 60.0), arg0->unk9C) != 0) {
                        func_80380F94(arg0->unk94, D_801BBF74, arg0->unk9C, 0, 0.0, 0.0, 0x20);
                    }
                }
                s0 = func_8012FF58() & 0xFFFF;
                if (func_801FD644(arg0->unk94, arg0->unk98 - 8.0f, arg0->unk9C, 5.0f, arg0->unkA2, 1.0f, 1.0f, (u32) (func_801FD780(arg0->unk91) * (f32) (((s0 / 10) * 0x19) + 0xA))) == 0) {
                    s0 = func_8012FF58() & 0xFFFF;
                    func_801FD644(arg0->unk94, arg0->unk98 - 20.0f, arg0->unk9C, 5.0f, arg0->unkA2, 1.0f, 1.0f, (u32) (func_801FD780(arg0->unk91) * (f32) (((s0 / 10) * 0x19) + 0xA)));
                }
            }
        }
        break;
    case 6:
        fs0 = arg0->unk98;
        arg0->unk44 = (f32) ((f64) arg0->unk44 - 0.1);
        if (func_80108590(arg0->unk94, fs0 - arg0->unk44, arg0->unk9C, arg0->unk94, (f32) ((f64) fs0 - 3.6), arg0->unk9C) != 0) {
            if ((f64) arg0->unk44 < -0.5) {
                func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x1FE);
                func_80380F94(arg0->unk94, arg0->unk98 - 2.0f, arg0->unk9C, 0, 0.0, 0.0, 0x1F);
            }
            arg0->unk98 = D_801BBF74 + 3.0f;
            arg0->unk90 = 4;
            arg0->unk44 = 0.0;
            arg0->unkA0 = func_8001EF38(((func_80213594_StructPlayer *) D_801BBCD0)->unk2C->unk4 - arg0->unk94, ((func_80213594_StructPlayer *) D_801BBCD0)->unk2C->unkC - arg0->unk9C);
            arg0->unk3C = 0;
        }
        break;
    case 7:
        fs0 = arg0->unk98;
        arg0->unk44 = (f32) ((f64) arg0->unk44 - 0.1);
        if (func_80108590(arg0->unk94, fs0 - arg0->unk44, arg0->unk9C, arg0->unk94, (f32) ((f64) fs0 - 3.6), arg0->unk9C) != 0) {
            arg0->unk98 = D_801BBF74 + 3.0f;
            arg0->unk90 = 8;
            arg0->unk3C = 0;
            arg0->unk44 = 0.0;
            func_80380F94(arg0->unk94, arg0->unk98 - 2.0f, arg0->unk9C, 0, 0.0, 0.0, 0x1F);
            func_80020718(0x117);
            func_80020718(0x649);
        }
        break;
    case 8:
        if ((s0 < 0xF) && (!(s0 % 2))) {
            func_80380F94(arg0->unk94, (f32) (((f64) arg0->unk98 + ((f64) s0 * 1.5)) - 2.0), arg0->unk9C, 0, 0.0, 0.0, 0x14);
        }
        switch (s0) {
        case 0:
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, 0, 0.0, 0.0, 0.0, 0xFF, 0xFF, 0xFF, 0xFF, 0xA4, 0, 0xB4, -4, 0.24f, 4, 0);
            break;
        case 9:
        case 15:
        case 21:
            s0 = func_8012C6B4(0xA);
            i = func_8012C6B4(0xA);
            func_80380F94((f32) (s0 - 5) + arg0->unk94, (f32) i + arg0->unk98, (f32) (func_8012C6B4(0xA) - 5) + arg0->unk9C, 0, 0.0, 0.0, 0x12);
            break;
        case 18:
            arg1->unk0->unk22 = 0;
            break;
        case 22:
            arg0->unk90 = 0;
            arg0->unk3C = 0;
            func_801FCF98((void *) arg0);
            return 0;
        }
        break;
    }
    spA0 = func_80130038(arg0->unk40, 0.0, arg0->unk48);
    if (spA0 != (f32) 0.0) {
        v0 = func_8001EF38(arg0->unk40, arg0->unk48); fs1 = func_8001EAD0((s16)v0 + (spAE = v0, 0)); r2 = *(u16 *) &spAE;
        if (func_80108590(arg0->unk94, fs0 = arg0->unk98, arg0->unk9C, (f32) (((f64) fs1 * 12.0) + (f64) arg0->unk94), fs0, (f32) (((f64) func_8001EB64(r2) * 12.0) + (f64) arg0->unk9C)) != 0) {
            len = func_80130038(*(f32 *) (D_801BBBF0 + 0x35C), 0.0, *(f32 *) (D_801BBBF0 + 0x364));
            sp84 = D_801BBF44[2];
            fs1 = -(((arg0->unk48 * D_801BBF54) + (arg0->unk40 * sp84)) / (spA0 * len));
            fs0 = spA0 * fs1;
            arg0->unk40 = arg0->unk40 + (((fs0 * sp84) / len) * (f32) 2.0);
            arg0->unk48 = ((((sp84 = fs0) * D_801BBF40[5]) / len) * (f32) 2.0) + (sp80 = arg0->unk48);
            arg0->unkA0 = func_8001EF38(arg0->unk40, arg0->unk48);
        }
    }
    if ((arg0->unk90 != 7) && (arg0->unk90 != 8) && (arg0->unk90 != 0)) {
        s0 = func_801FD68C((void *) arg0);
        if (s0 != 0) {
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3A9);
            func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0, 0.0, 0.0, 0x11);
            if (--arg0->unkB0 == 0) {
                arg0->unk90 = 7;
                arg0->unk40 = 0.0;
                arg0->unk44 = 0.0;
                arg0->unk48 = 0.0;
                arg0->unk3C = 0;
                arg1->unk4->unk22 = 0;
                obj = (s32) arg0->unk24->unk30;
                func_8013E5C4(arg1->unk0, 0, obj + 4, obj + 8, obj + 0xC);
                func_80020718(0x649);
                func_80020718(0x6C0);
            }
            func_801FDB3C(s0);
        }
    }
    s0 = func_8012FF58() & 0xFFFF;
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 3.0f, arg0->unkA2, 1.0f, 1.0f, (u32) (func_801FD780(arg0->unk91) * (f32) ((s0 / 10) * 0xF))) != 0) {
        func_80129FB8(((func_80213594_StructPlayer *) D_801BBCD0)->unk2C->unk4, (f32) ((f64) ((func_80213594_StructPlayer *) D_801BBCD0)->unk2C->unk8 + 9.0), ((func_80213594_StructPlayer *) D_801BBCD0)->unk2C->unkC, 0, 0.0, 0.0, 0.0, 0xFF, 0xFF, 0xFF, 0, 0, 0xFF, 0xD2, -6, 0.1f, 0x16, 0);
    }
    arg0->unkA2 = (s16) (arg0->unkA6 + arg0->unkA2) & 0x1FFF;
    func_801FCA4C(arg0->unk94, arg0->unk98, arg0->unk9C, 300.0f, 0x581);
    func_801FCAE0(arg0->unk94, arg0->unk98, arg0->unk9C, 0x581);
    fs0 = (f32) ((arg0->unkA6 * 3) - 0x153);
    if (fs0 > 768.0f) {
        fs0 = 768.0f;
    }
    func_8002096C(0x581, 0, (s16) (s32) fs0);
    arg1->unk0->unk30->unk4 = arg0->unk94;
    arg1->unk0->unk30->unk8 = arg0->unk98;
    arg1->unk0->unk30->unkC = arg0->unk9C;
    arg1->unk0->unk30->unk10 = 0;
    arg1->unk0->unk30->unk12 = arg0->unkA2;
    arg1->unk0->unk30->unk14 = 0;
    return 1;
}
