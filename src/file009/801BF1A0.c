#include "common.h"


extern s8 D_801E4010;

void func_801BF1A0(s32 arg0) {
    s32 *p = &arg0;
    D_801E4010 = arg0;
}


extern s8 D_801BC3D8[];

void func_801BF1B0(u8 arg0) {
    D_801BC3D8[0x3BB] = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801BF1A0/D_801E2560.s")

#define B_801E4012 B_801E4012__func_801BF1C0
#define D_801BBBF0 D_801BBBF0__func_801BF1C0
#define D_801BBCD8 D_801BBCD8__func_801BF1C0
#define D_801E0974 D_801E0974__func_801BF1C0
#define D_801E09B0 D_801E09B0__func_801BF1C0
#define D_801E09E0 D_801E09E0__func_801BF1C0
#define D_801E2170 D_801E2170__func_801BF1C0
#define D_801E21B4 D_801E21B4__func_801BF1C0
#define D_801E21F8 D_801E21F8__func_801BF1C0
#define D_801E223C D_801E223C__func_801BF1C0
#define D_801E2280 D_801E2280__func_801BF1C0
#define D_801E22C4 D_801E22C4__func_801BF1C0
#define D_801E2308 D_801E2308__func_801BF1C0
#define D_801E234C D_801E234C__func_801BF1C0
#define D_801E2390 D_801E2390__func_801BF1C0
#define D_801E23D4 D_801E23D4__func_801BF1C0
#define D_801E2418 D_801E2418__func_801BF1C0
#define D_801E245C D_801E245C__func_801BF1C0
#define D_801E24A0 D_801E24A0__func_801BF1C0
#define D_801E24E4 D_801E24E4__func_801BF1C0
#define D_801E2528 D_801E2528__func_801BF1C0
#define D_801E4011 D_801E4011__func_801BF1C0
#define D_801E4012 D_801E4012__func_801BF1C0
#define D_801E4013 D_801E4013__func_801BF1C0
#define D_801E4014 D_801E4014__func_801BF1C0
#define D_801E4018 D_801E4018__func_801BF1C0
#define D_801E401C D_801E401C__func_801BF1C0
#define D_8021AFC8 D_8021AFC8__func_801BF1C0
#define func_8001EAD0 func_8001EAD0__func_801BF1C0
#define func_8001EB64 func_8001EB64__func_801BF1C0
#define func_8002FC20 func_8002FC20__func_801BF1C0
#define func_801084C4 func_801084C4__func_801BF1C0
#define func_8011AAF4 func_8011AAF4__func_801BF1C0
#define func_8011B260 func_8011B260__func_801BF1C0
#define func_80126944 func_80126944__func_801BF1C0
#define func_801BF1A0 func_801BF1A0__func_801BF1C0
#define func_801C5A1C func_801C5A1C__func_801BF1C0
void func_801BF1A0(s32 arg0);


typedef struct func_801BF1C0_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x1C];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801BF1C0_Struct2C;

typedef struct func_801BF1C0_StructObj {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[4];
    func_801BF1C0_Struct2C *unk2C;
} func_801BF1C0_StructObj;

typedef struct func_801BF1C0_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0xD6];
    func_801BF1C0_StructObj *unkDC;
    func_801BF1C0_StructObj *unkE0;
    u8 padE4[4];
    func_801BF1C0_StructObj *unkE8;
    u8 padEC[9];
    u8 unkF5;
    u8 padF6[0x264];
    u8 unk35A;
    u8 pad35B[0x25];
    f32 unk380;
    f32 unk384;
    f32 unk388;
    u8 pad38C[0x816];
    u8 unkBA2;
    u8 unkBA3;
    u8 padBA4[0x34C];
    u16 unkEF0;
} func_801BF1C0_Struct;

typedef struct func_801BF1C0_Way {
    f32 x, y, z;
} func_801BF1C0_Way;

typedef struct func_801BF1C0_Spl {
    f32 ex, ey, ez;
    f32 tx, ty, tz;
} func_801BF1C0_Spl;

typedef struct func_801BF1C0_SplH {
    u16 unk0;
    u16 unk2;
} func_801BF1C0_SplH;

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
f32 func_8002FC20(f32);
s32 func_801084C4(f32, f32, f32, f32, f32, f32);
s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
s32 func_8011B260(void);
s32 func_80126944(void);
s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern func_801BF1C0_Struct D_801BBBF0[];
extern func_801BF1C0_StructObj *D_801BBCD8;
extern func_801BF1C0_Way D_801E0974[];
extern func_801BF1C0_SplH D_801E09B0[];
extern func_801BF1C0_Spl D_801E09E0[];
extern char D_801E2170[];
extern char D_801E21B4[];
extern char D_801E21F8[];
extern char D_801E223C[];
extern char D_801E2280[];
extern char D_801E22C4[];
extern char D_801E2308[];
extern char D_801E234C[];
extern char D_801E2390[];
extern char D_801E23D4[];
extern char D_801E2418[];
extern char D_801E245C[];
extern char D_801E24A0[];
extern char D_801E24E4[];
extern char D_801E2528[];
extern u8 D_801E4011;
extern u8 D_801E4012;
extern u8 B_801E4012;
extern u8 D_801E4012__c;
extern u8 D_801E4012__a;
extern u8 D_801E4012__b;
extern u8 D_801E4013;
extern s16 D_801E4014;
extern f32 D_801E4018;
extern f32 D_801E401C;
extern u8 D_8021AFC8;

#define PL (D_801BBBF0->unkE0->unk2C)
#define CM (D_801BBBF0->unkE8->unk2C)

void func_801BF1C0(void *arg0, s32 arg1) {
    s16 ang;
    f32 side;
    f32 padB4;
    f32 ex;
    f32 ey;
    f32 ez;
    f32 padA4;
    f32 tx;
    f32 ty;
    f32 tz;
    f32 pad68[12];
    f32 s1;
    f32 c0;
    f32 s0;
    f32 sp58;
    func_801BF1C0_Struct2C *cam;
    func_801BF1C0_Struct2C *pl;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 d;
    f64 t;
    f32 z;
    u8 i;

    if (D_801BBBF0->unkDC != NULL && D_801BBBF0->unkDC->unk24 != 0 && D_801BBBF0->unkF5 != 0) {
    if (func_8011B260() != 0) {
        func_801BF1A0(0);
    }
    if (D_801BBBF0->unkBA2 != 0) {
        func_801BF1A0(0);
    }
    if (func_80126944() == 1) {
        func_801BF1A0(0);
    }
    switch (*(u8 *)&D_801E4010) {
    case 0:
        break;
    case 1:
        cam = CM;
        ex = cam->unk30;
        ey = cam->unk34;
        ez = cam->unk38;
        tx = cam->unk3C;
        ty = cam->unk40;
        tz = cam->unk44;
        if (func_8011AAF4(D_801E2170, 0xAC, arg0, 2, 1, 10.0f, ex, ey, ez, 10.0f, tx, ty, tz, 0.0f, 35.0f, -1, -1) == 0) {
            func_801BF1A0(0);
        }
        break;
    case 2:
        switch (D_8021AFC8) {
        default:
            cam = D_801BBCD8->unk2C;
            break;
        case 0:
        case 3:
            cam = CM;
            ey = cam->unk34;
            ty = cam->unk40;
            break;
        case 1:
            cam = CM;
            ey = cam->unk34 + 0.1;
            ty = cam->unk40 + 0.4;
            break;
        case 2:
            cam = CM;
            ey = cam->unk34 - 0.1;
            ty = cam->unk40 - 0.4;
            s0 = func_8001EAD0(PL->unk12);
            c0 = func_8001EB64(PL->unk12);
            s1 = func_8001EAD0(PL->unk12);
            d = func_8001EB64(PL->unk12);
            pl = PL;
            if (func_801C5A1C(pl->unk4 - s0 * 30.0, pl->unk8 + 30.0, pl->unkC - c0 * 30.0, pl->unk4 - s1 * 30.0, pl->unk8, pl->unkC - d * 30.0) != 0) {
                ey = D_801BBBF0->unk384 - 25.0;
            }
            cam = D_801BBCD8->unk2C;
            break;
        }
        ex = cam->unk30;
        ez = cam->unk38;
        tx = cam->unk3C;
        tz = cam->unk44;
        if (func_8011AAF4(D_801E21B4, 0xCC, arg0, 0, 1, 10.0f, ex, ey, ez, 10.0f, tx, ty, tz, 0.0f, 35.0f, -1, -1) != 0) {
        }
        break;
    case 3:
        s0 = func_8001EAD0(PL->unk12);
        c0 = func_8001EB64(PL->unk12);
        s1 = func_8001EAD0(PL->unk12);
        d = func_8001EB64(PL->unk12);
        pl = PL;
        func_801C5A1C(pl->unk4 - s0 * 30.0, pl->unk8 + 30.0, pl->unkC - c0 * 30.0, pl->unk4 - s1 * 30.0, pl->unk8 - 30.0, pl->unkC - d * 30.0);
        if (D_801BBBF0->unk4 & 1) {
            ang = (s16)(PL->unk12 + 0x300);
        } else {
            ang = (s16)(PL->unk12 - 0x300);
        }
        d = func_8001EAD0(ang);
        cam = CM;
        ex = ((PL->unk4 - d * 30.0) - cam->unk30) * 0.125 + cam->unk30;
        ey = cam->unk34 + ((D_801BBBF0->unk384 + 25.0) - cam->unk34) * 0.125;
        d = func_8001EB64(ang);
        ez = (pl = PL, cam = CM, ((pl->unkC - d * 30.0) - cam->unk38) * 0.125 + cam->unk38);
        tx = pl->unk4;
        ty = cam->unk40 + ((pl->unk8 + 18.0) - cam->unk40) * 0.125;
        tz = pl->unkC;
        if (func_8011AAF4(D_801E21F8, 0xE0, arg0, 0, 1, 10.0f, ex, ey, ez, 10.0f, tx, ty, tz, 0.0f, 35.0f, -1, -1) != 0) {
        }
        break;
    case 4:
        s0 = func_8001EAD0(PL->unk12);
        c0 = func_8001EB64(PL->unk12);
        s1 = func_8001EAD0(PL->unk12);
        d = func_8001EB64(PL->unk12);
        pl = PL;
        func_801C5A1C(pl->unk4 - s0 * 30.0, pl->unk8 + 30.0, pl->unkC - c0 * 30.0, pl->unk4 - s1 * 30.0, pl->unk8 - 30.0, pl->unkC - d * 30.0);
        cam = CM;
        ex = cam->unk30;
        ey = cam->unk34 + ((D_801BBBF0->unk384 + 20.0) - cam->unk34) * 0.125;
        ez = cam->unk38;
        tx = cam->unk3C;
        ty = cam->unk40 + ((PL->unk8 + 18.0) - cam->unk40) * 0.125;
        tz = cam->unk44;
        if (func_8011AAF4(D_801E223C, 0xF1, arg0, 0, 1, 10.0f, ex, ey, ez, 10.0f, tx, ty, tz, 0.0f, 35.0f, -1, -1) != 0) {
        }
        break;
    case 5:
        if (D_801BBBF0->unkEF0 & 0x100) {
            d = func_8001EAD0((s16)(PL->unk12 + 0x1000));
            ex = (pl = PL, d * 30.0) + pl->unk4;
            ey = pl->unk8 + 8.0;
            d = func_8001EB64((s16)(pl->unk12 + 0x1000));
            ez = (pl = PL, d * 30.0) + pl->unkC;
            tx = pl->unk4;
            ty = pl->unk8 + 4.0;
            tz = pl->unkC;
            func_8011AAF4(D_801E2280, 0x100, arg0, 0, 1, 10.0f, ex, ey, ez, 10.0f, tx, ty, tz, 0.0f, 35.0f, -1, -1);
            func_801BF1A0(6);
        } else {
            func_801BF1A0(0xC);
        }
        break;
    case 6:
        if (D_801BBBF0->unk4 == 0xC || D_801BBBF0->unk4 == 0xE || D_801BBBF0->unk4 == 0x13 || D_801BBBF0->unkBA2 != 0) {
            func_801BF1A0(0);
        } else if (D_801BBBF0->unkEF0 & 0x100) {
            d = func_8001EAD0((s16)(PL->unk12 + 0x1000));
            ex = (pl = PL, d * 30.0) + pl->unk4;
            ey = pl->unk8 + 8.0;
            d = func_8001EB64((s16)(pl->unk12 + 0x1000));
            ez = (pl = PL, d * 30.0) + pl->unkC;
            if (func_801084C4(pl->unk4, pl->unk8 + 4.0, pl->unkC, ex, ey, ez) != 0 && D_801BBBF0->unk35A != 0x1A) {
                d = func_8001EAD0((s16)(PL->unk12 + 0x400));
                ex = (pl = PL, d * 30.0) + pl->unk4;
                ey = pl->unk8 + 25.0;
                d = func_8001EB64((s16)(pl->unk12 + 0x400));
                ez = (pl = PL, d * 30.0) + pl->unkC;
                tx = pl->unk4;
                ty = pl->unk8 + 4.0;
                tz = pl->unkC;
                if (func_801084C4(tx, ty, tz, ex, ey, ez) != 0 && D_801BBBF0->unk35A != 0x1A) {
                    d = func_8001EAD0((s16)(PL->unk12 - 0x400));
                    ex = (pl = PL, d * 30.0) + pl->unk4;
                    ey = pl->unk8 + 25.0;
                    d = func_8001EB64((s16)(pl->unk12 - 0x400));
                    ez = (pl = PL, d * 30.0) + pl->unkC;
                    tx = pl->unk4;
                    ty = pl->unk8 + 4.0;
                    tz = pl->unkC;
                    if (func_801084C4(tx, ty, tz, ex, ey, ez) != 0 && D_801BBBF0->unk35A != 0x1A) {
                        d = func_8001EAD0(PL->unk12);
                        ex = (pl = PL, cam = CM, ((pl->unk4 - d * 10.0) - cam->unk30) * 0.125 + cam->unk30);
                        ey = cam->unk34 + ((pl->unk8 + 25.0) - cam->unk34) * 0.125;
                        d = func_8001EB64(pl->unk12);
                        ez = (pl = PL, cam = CM, ((pl->unkC - d * 10.0) - cam->unk38) * 0.125 + cam->unk38);
                        tx = cam->unk3C + (pl->unk4 - cam->unk3C) * 0.125;
                        ty = cam->unk40 + ((pl->unk8 + 4.0) - cam->unk40) * 0.125;
                        sp58 = cam->unk44;
                        tz = sp58 + (pl->unkC - sp58) * 0.125;
                    }
                }
            } else {
                d = func_8001EAD0((s16)(PL->unk12 + 0x1000));
                ex = (pl = PL, cam = CM, ((d * 30.0 + pl->unk4) - cam->unk30) * 0.125 + cam->unk30);
                ey = cam->unk34 + ((pl->unk8 + 8.0) - cam->unk34) * 0.125;
                d = func_8001EB64((s16)(pl->unk12 + 0x1000));
                ez = (pl = PL, cam = CM, ((d * 30.0 + pl->unkC) - cam->unk38) * 0.125 + cam->unk38);
                tx = pl->unk4;
                ty = cam->unk40 + ((pl->unk8 + 4.0) - cam->unk40) * 0.125;
                tz = pl->unkC;
            }
            if (func_8011AAF4(D_801E22C4, 0x135, arg0, 0, 1, 10.0f, ex, ey, ez, 10.0f, tx, ty, tz, 0.0f, 35.0f, -1, -1) != 0) {
            }
        } else if (D_801BBBF0->unkBA3 != 0) {
            func_801BF1A0(0xC);
        } else {
            func_801BF1A0(0xD);
        }
        break;
    case 7:
        d = func_8001EAD0(PL->unk12);
        ex = (pl = PL, d * 50.0) + pl->unk4;
        ey = pl->unk8 + 8.0;
        d = func_8001EB64(pl->unk12);
        ez = (pl = PL, d * 50.0) + pl->unkC;
        tx = pl->unk4;
        ty = pl->unk8 + 8.0;
        if (func_801084C4(pl->unk4, pl->unk8, tz = pl->unkC, ex, ey, ez) != 0) {
            d = func_8001EAD0((s16)(PL->unk12 + 0x600));
            ex = (pl = PL, d * 50.0) + pl->unk4;
            d = func_8001EB64((s16)(pl->unk12 + 0x600));
            ez = (pl = PL, d * 50.0) + pl->unkC;
            if (func_801084C4(pl->unk4, pl->unk8, pl->unkC, ex, ey, ez) != 0) {
                d = func_8001EAD0((s16)(PL->unk12 - 0x600));
                ex = (pl = PL, d * 50.0) + pl->unk4;
                d = func_8001EB64((s16)(pl->unk12 - 0x600));
                ez = d * 50.0 + PL->unkC;
            }
        }
        func_8011AAF4(D_801E2308, 0x14E, arg0, 0, 1, 10.0f, ex, ey, ez, 10.0f, tx, ty, tz, 0.0f, 35.0f, -1, -1);
        func_801BF1A0(8);
        break;
    case 8:
        cam = CM;
        ex = cam->unk30;
        ey = cam->unk34;
        pl = PL;
        s0 = cam->unk38;
        c0 = pl->unk4;
        z = cam->unk40 + ((pl->unk8 + 8.0) - cam->unk40) * 0.125;
        tz = pl->unkC;
        func_8011AAF4(D_801E234C, 0x15D, arg0, 0, 1, 10.0f, ex, ey, s0, 10.0f, c0, z, tz, 0.0f, 35.0f, -1, -1);
        if (D_801BBBF0->unkEF0 & 0x880) {
            func_801BF1A0(1);
        }
        break;
    case 9:
        if (D_801E4011 == 1) {
            side = 4.0f;
        } else if (D_801E4011 == 2) {
            side = -4.0f;
        } else {
            side = 0.0f;
        }
        if (D_801BBBF0->unkEF0 & 4) {
            d = func_8001EAD0(PL->unk12);
            ex = (pl = PL, cam = CM, ((pl->unk4 - d * 75.0) - cam->unk30) * 0.125 + cam->unk30);
            ey = (t = cam->unk34) + ((pl->unk8 + 25.0) - t) * 0.125;
            d = func_8001EB64(pl->unk12);
            ez = (pl = PL, t = CM->unk38, ((pl->unkC - d * 75.0) - t) * 0.125 + t);
            d = func_8001EAD0((s16)(pl->unk12 + 0x800));
            tx = (pl = PL, cam = CM, ((d * side * 5.0 + pl->unk4) - cam->unk3C) * 0.125 + cam->unk3C);
            ty = cam->unk40 + ((pl->unk8 + 15.0) - cam->unk40) * 0.125;
            d = func_8001EB64((s16)(pl->unk12 + 0x800));
            tz = (pl = PL, ((d * side * 5.0 + pl->unkC) - CM->unk44) * 0.125 + CM->unk44);
            if (func_801084C4(pl->unk4, ty, pl->unkC, tx, ty, tz) != 0) {
                tx = D_801BBBF0->unk380;
                tz = D_801BBBF0->unk388;
            }
            if (func_801084C4(tx, ty, tz, ex, ey, ez) != 0 && D_801BBBF0->unk35A != 0x1A) {
                ex = D_801BBBF0->unk380;
                ey = D_801BBBF0->unk384;
                ez = D_801BBBF0->unk388;
                d = func_8001EAD0((s16)(PL->unk12 + 0x800));
                tx = (pl = PL, cam = CM, ((2.0 * (d * side) + pl->unk4) - cam->unk3C) * 0.125 + cam->unk3C);
                ty = cam->unk40 + ((pl->unk8 + 15.0) - cam->unk40) * 0.125;
                d = func_8001EB64((s16)(pl->unk12 + 0x800));
                tz = ((2.0 * (d * side) + PL->unkC) - CM->unk44) * 0.125 + CM->unk44;
            }
            if (func_8011AAF4(D_801E2390, 0x17D, arg0, 0, 1, 10.0f, ex, ey, ez, 10.0f, tx, ty, tz, 0.0f, 35.0f, -1, -1) != 0) {
            }
        } else {
            func_801BF1A0(0xD);
        }
        break;
    case 10:
        if (D_801E4011 == 1) {
            side = 2.0f;
        } else if (D_801E4011 == 2) {
            side = -2.0f;
        } else {
            side = 0.0f;
        }
        if (D_801BBBF0->unkEF0 & 0x204) {
            d = func_8001EAD0(PL->unk12);
            ex = (pl = PL, cam = CM, ((pl->unk4 - d * 30.0) - cam->unk30) * 0.125 + cam->unk30);
            ey = (t = cam->unk34) + ((pl->unk8 + 50.0) - t) * 0.125;
            d = func_8001EB64(pl->unk12);
            ez = (pl = PL, t = CM->unk38, ((pl->unkC - d * 30.0) - t) * 0.125 + t);
            d = func_8001EAD0((s16)(pl->unk12 + 0x800));
            tx = (pl = PL, cam = CM, ((d * side * 5.0 + pl->unk4) - cam->unk3C) * 0.125 + cam->unk3C);
            ty = cam->unk40 + ((pl->unk8 + 10.0) - cam->unk40) * 0.125;
            d = func_8001EB64((s16)(pl->unk12 + 0x800));
            tz = ((d * side * 5.0 + PL->unkC) - CM->unk44) * 0.125 + CM->unk44;
            if (func_8011AAF4(D_801E23D4, 0x190, arg0, 0, 1, 10.0f, ex, ey, ez, 10.0f, tx, ty, tz, 0.0f, 35.0f, -1, -1) != 0) {
            }
        } else {
            func_801BF1A0(0xD);
        }
        break;
    case 11:
        if (D_801BBBF0->unkEF0 & 0x204) {
            cam = CM;
            ex = cam->unk30;
            ey = cam->unk34;
            ez = cam->unk38;
            pl = PL;
            tx = cam->unk3C + (pl->unk4 - cam->unk3C) * 0.125;
            ty = cam->unk40 + ((pl->unk8 + 10.0) - cam->unk40) * 0.125;
            tz = cam->unk44 + (pl->unkC - cam->unk44) * 0.125;
            if (func_8011AAF4(D_801E2418, 0x1A0, arg0, 0, 1, 10.0f, ex, ey, ez, 10.0f, tx, ty, tz, 0.0f, 35.0f, -1, -1) != 0) {
            }
        } else {
            func_801BF1A0(0xD);
        }
        break;
    case 12:
        if (D_801BBBF0->unkEF0 & 0xA00) {
            func_801BF1A0(1);
        }
        s1 = func_8001EAD0(PL->unk12);
        d = func_8001EB64(PL->unk12);
        pl = PL;
        if (func_801084C4(pl->unk4, pl->unk8 + 15.0, pl->unkC, pl->unk4 - s1 * 75.0, pl->unk8 + 25.0, pl->unkC - d * 75.0) != 0) {
            ex = D_801BBBF0->unk380;
            ey = D_801BBBF0->unk384;
            ez = D_801BBBF0->unk388;
            pl = PL;
            tx = pl->unk4;
            ty = pl->unk8 + 15.0;
            tz = pl->unkC;
        } else {
            d = func_8001EAD0(PL->unk12);
            ex = (pl = PL, pl->unk4 - d * 75.0);
            ey = pl->unk8 + 25.0;
            d = func_8001EB64(pl->unk12);
            ez = (pl = PL, pl->unkC - d * 75.0);
            tx = pl->unk4;
            ty = pl->unk8 + 15.0;
            tz = pl->unkC;
        }
        if (func_8011AAF4(D_801E245C, 0x1BB, arg0, 0, 2, 1.5f, ex, ey, ez, 0.36f, tx, ty, tz, 0.0f, 35.0f, -1, -1) == 0) {
            func_801BF1A0(1);
        }
        break;
    case 13:
        s1 = func_8001EAD0(PL->unk12);
        d = func_8001EB64(PL->unk12);
        pl = PL;
        if (func_801084C4(pl->unk4, pl->unk8 + 15.0, pl->unkC, pl->unk4 - s1 * 75.0, pl->unk8 + 25.0, pl->unkC - d * 75.0) != 0) {
            ex = D_801BBBF0->unk380;
            ey = D_801BBBF0->unk384;
            ez = D_801BBBF0->unk388;
            pl = PL;
            tx = pl->unk4;
            ty = pl->unk8 + 15.0;
            tz = pl->unkC;
        } else {
            d = func_8001EAD0(PL->unk12);
            ex = (pl = PL, pl->unk4 - d * 75.0);
            ey = pl->unk8 + 25.0;
            d = func_8001EB64(pl->unk12);
            ez = (pl = PL, pl->unkC - d * 75.0);
            tx = pl->unk4;
            ty = pl->unk8 + 15.0;
            tz = pl->unkC;
        }
        if (func_8011AAF4(D_801E24A0, 0x1D3, arg0, 2, 1, 1.5f, ex, ey, ez, 0.36f, tx, ty, tz, 0.0f, 35.0f, -1, -1) == 0) {
            func_801BF1A0(0);
        }
        break;
    case 14:
        D_801E4013 = 0;
        D_801E4014 = 0;
        B_801E4012 = 0;
        i = 0;
        if (D_801E0974[i].x != 0.0f) {
            do {
            f32 dx, dy, dz;
            pl = PL;
            dz = pl->unkC - D_801E0974[i].z;
            dx = pl->unk4 - D_801E0974[i].x;
            dy = pl->unk8 - D_801E0974[i].y;
            if (func_8002FC20(dz * dz + (dx * dx + dy * dy)) < 20.0) {
                i = D_801E4012__c * 3;
                D_801E4012__a = i;
                break;
            }
#line 486
            i = D_801E4012 + 1;
#line 485
            if (D_801E0974[i].x) {}
#line 488
            D_801E4012__b = i;
            } while (D_801E0974[i].x != 0.0f);
        }
        func_801BF1A0(0xF);
        break;
    case 15:
        i = D_801E4012;
        cam = (void *)D_801E09B0[i].unk0;
        if (cam != 0) {
            ex = D_801E09E0[i].ex;
            ey = D_801E09E0[i].ey;
            ez = D_801E09E0[i].ez;
            tx = D_801E09E0[i].tx;
            ty = D_801E09E0[i].ty;
            tz = D_801E09E0[i].tz;
            if ((s32)cam == 2) {
                if (D_801E4013 == 0) {
                    f32 dx, dy, dz;
                    cam = CM;
                    dx = cam->unk30 - ex;
                    dy = cam->unk34 - ey;
                    dz = cam->unk38 - ez;
                    d = func_8002FC20(dx * dx + dy * dy + dz * dz);
                    i = D_801E4012;
                    D_801E4018 = d / D_801E09B0[i].unk2;
                    {
                    f32 dx, dy, dz;
                    cam = CM;
                    dx = cam->unk3C - tx;
                    dy = cam->unk40 - ty;
                    dz = cam->unk44 - tz;
                    d = func_8002FC20(dx * dx + dy * dy + dz * dz);
                    i = D_801E4012;
                    D_801E401C = d / D_801E09B0[i].unk2;
                    D_801E4013 = 1;
                    }
                    cam = (void *)D_801E09B0[i].unk0;
                }
            } else {
                D_801E401C = 1.0f;
                D_801E4018 = 1.0f;
            }
            if (func_8011AAF4(D_801E24E4, 0x1FD, arg0, 0, (s32)cam, D_801E4018, ex, ey, ez, D_801E401C, tx, ty, tz, 0.0f, 35.0f, -1, -1) == 0) {
                i = D_801E4012 + 1;
                D_801E4013 = 0;
                B_801E4012 = i;
            }
        } else {
            if (func_8011AAF4(D_801E2528, 0x204, arg0, 2, 1, 1.0f, (cam = CM)->unk30, cam->unk34 - 20.0f, cam->unk38, 1.0f, cam->unk3C, cam->unk40, cam->unk44, 0.0f, 35.0f, -1, -1) == 0) {
                func_801BF1A0(0);
            }
        }
        break;
    }
    }
}
#undef PL
#undef CM
#undef B_801E4012
#undef D_801BBBF0
#undef D_801BBCD8
#undef D_801E0974
#undef D_801E09B0
#undef D_801E09E0
#undef D_801E2170
#undef D_801E21B4
#undef D_801E21F8
#undef D_801E223C
#undef D_801E2280
#undef D_801E22C4
#undef D_801E2308
#undef D_801E234C
#undef D_801E2390
#undef D_801E23D4
#undef D_801E2418
#undef D_801E245C
#undef D_801E24A0
#undef D_801E24E4
#undef D_801E2528
#undef D_801E4011
#undef D_801E4012
#undef D_801E4013
#undef D_801E4014
#undef D_801E4018
#undef D_801E401C
#undef D_8021AFC8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8002FC20
#undef func_801084C4
#undef func_8011AAF4
#undef func_8011B260
#undef func_80126944
#undef func_801BF1A0
#undef func_801C5A1C

