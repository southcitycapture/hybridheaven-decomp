#include "common.h"
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
extern u16 D_801BCAE0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_8012C6B4();
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
extern s32 func_801FD4F4(s16, s16, s32);
extern s32 func_801FD68C(func_8020FB98_Struct *);
extern void func_801FDB3C(s32);
struct func_80212A28_Struct {
    u8 pad0[0xAD];
    u8 unkAD;
};
void func_80212A28(struct func_80212A28_Struct *arg0);
u8 func_80212A48(struct func_80212A28_Struct *arg0);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


struct func_8020D5DC_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x48 - 0x16];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
};
struct func_8020D5DC_StructOuter {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_8020D5DC_StructInner *unk30;
};
struct func_8020D5DC_StructArg1 {
    struct func_8020D5DC_StructOuter *unk0;
    struct func_8020D5DC_StructOuter *unk4;
};
struct func_8020D5DC_StructPl {
    u8 pad0[0x2C];
    struct func_8020D5DC_StructInner *unk2C;
};
struct func_8020D5DC_StructA {
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
    u8 padAD[3];
    u8 unkB0;
};

extern const f64 D_8021AB20;
extern const f64 D_8021AB38;
extern const f64 D_8021AB40;
extern const f64 D_8021AB48;
extern const f64 D_8021AB88;
extern const f64 D_8021AB90;
extern const f64 D_8021AB98;
extern f32 D_801BBF44[];
extern f32 D_801BBF54;
extern u16 D_80217C88[];
extern u16 D_80217C90[];
extern u16 func_801FD284(s16, s16, f32);

#define PL D_801BBCD0

s32 func_8020D5DC(struct func_8020D5DC_StructA *a, struct func_8020D5DC_StructArg1 *arg1) {
    s32 obj;
    s32 hit;
    f32 tx;
    f32 tz;
    f32 speed;
    u16 angle;
    s32 count;
    s32 rem;

    count = a->unk3C;
    a->unk3C = a->unk3C + 1;
    switch (a->unk90) {
    case 0:
        return 1;
    case 2:
        a->unk48 = a->unk40 = 0.0f;
        if (func_80150584() == 0) {
            if (a->unkAC & 1) {
                a->unkA6 = (s16)(s32)((f64)a->unkA6 * 0.6);
                if ((f64)a->unkA6 < D_8021AB20) {
                    a->unkA6 = func_8012C6B4(0x38E) - 0x1C7;
                }
                a->unkA2 = (s16)(a->unkA6 + a->unkA2) & 0x1FFF;
            }
            if (func_801C3D20(a->unk94, a->unk9C, 70.0f) != 0) {
                if ((a->unk98 - 18.0f) <= PL->inner->y && PL->inner->y < (a->unk98 + 3.0f) &&
                    func_8010843C(a->unk94, a->unk98, a->unk9C, PL->inner->x, a->unk98, PL->inner->z) == 0) {
                    a->unk90 = 4;
                    a->unk3C = 0;
                    arg1->unk4->unk30->unk48 = 0xFF;
                    arg1->unk4->unk30->unk49 = 0;
                    arg1->unk4->unk30->unk4A = 0;
                }
            }
        }
        break;
    case 4:
        a->unk48 = a->unk40 = 0.0f;
        angle = (s16)(func_8012C6B4(0x555) + PL->inner->angle - 0x2AA) & 0x1FFF;
        tx = func_8001EAD0((s16)angle) * 40.0f + PL->inner->x;
        tz = func_8001EB64((s16)angle) * 40.0f + PL->inner->z;
        angle = func_8001EF38(PL->inner->x - a->unk94, PL->inner->z - a->unk9C);
        if (!(a->unkAC & 1)) {
            a->unkA2 = func_801FD284(a->unkA2, (s16)angle, 0.3f);
        } else {
            a->unkA2 = func_801FD284(a->unkA2, (s16)angle, 0.5f);
        }
        if (func_801FD4F4(a->unkA2, (s16)angle, 0x71) != 0) {
            if (!(a->unkAC & 1)) {
                a->unk40 = (tx - a->unk94) / 9.0f;
                a->unk48 = (tz - a->unk9C) / 9.0f;
                a->unk90 = 5;
                a->unk3C = 0;
                func_80212A28((void *)a);
                func_801FC830(a->unk94, a->unk98, a->unk9C, 400.0f, D_80217C88[func_80212A48((void *)a) % 3]);
            } else {
                a->unk90 = 0xF;
                a->unk3C = 0;
                a->unkA6 = 0;
            }
        }
        break;
    case 5:
        a->unkA2 = func_801FD284(a->unkA2, func_8001EF38(PL->inner->x - a->unk94, PL->inner->z - a->unk9C), 0.4f);
        obj = func_801FD168(a->unk94, a->unk98, a->unk9C, 0.0f, 0.0f, 0.0f, a->unkA0, a->unkA2, a->unkA4, 0x12, 0, 1);
        if (obj != 0) {
            func_801FD260(obj, a);
        }
        if (count >= 6) {
            a->unk40 = (f64)a->unk40 * 0.6;
            a->unk48 = (f64)a->unk48 * 0.6;
        }
        if (count >= 9) {
            a->unk90 = 9;
            a->unk3C = 0;
            a->unk48 = a->unk40 = 0.0f;
        }
        break;
    case 9:
        a->unk48 = a->unk40 = 0.0f;
        if (count == 9) {
            if (!(D_801BCAE0 & 0x100)) {
                obj = func_801FD168((f64)func_8001EAD0(a->unkA2) * 7.9 + a->unk94,
                                    a->unk98 + D_8021AB38,
                                    (f64)func_8001EB64(a->unkA2) * 7.9 + a->unk9C,
                                    (f64)func_8001EAD0(a->unkA2) * 5.0,
                                    -func_8001EAD0(a->unkA0) * 5.0,
                                    (f64)func_8001EB64(a->unkA2) * 5.0,
                                    a->unkA0, a->unkA2, a->unkA4, 0x13, 0, 0);
                if (obj != 0) {
                    func_801FD260(obj, a);
                }
                obj = func_801FD168((f64)func_8001EAD0(a->unkA2) * D_8021AB40 + a->unk94,
                                    a->unk98 + D_8021AB48,
                                    (f64)func_8001EB64(a->unkA2) * D_8021AB40 + a->unk9C,
                                    0.0f, 0.0f, 0.0f,
                                    a->unkA0, a->unkA2, a->unkA4, 0x15, 0, 0);
                if (obj != 0) {
                    func_801FD260(obj, a);
                }
                func_801FC830(a->unk94, a->unk98, a->unk9C, 400.0f, D_80217C90[func_80212A48((void *)a) % 3]);
            } else {
                obj = func_801FD168((f64)func_8001EAD0(a->unkA2) * 1.1 + a->unk94,
                                    a->unk98 - 6.0,
                                    (f64)func_8001EB64(a->unkA2) * 1.1 + a->unk9C,
                                    (f64)func_8001EAD0(a->unkA2) * 4.9,
                                    -func_8001EAD0(a->unkA0 + 0xE3) * 5.0,
                                    (f64)func_8001EB64(a->unkA2) * 4.9,
                                    a->unkA0 + 0xE3, a->unkA2, a->unkA4, 0x13, 0, 0);
                if (obj != 0) {
                    func_801FD260(obj, a);
                }
                obj = func_801FD168((f64)func_8001EAD0(a->unkA2) * 1.1 + a->unk94,
                                    a->unk98 - 6.0,
                                    (f64)func_8001EB64(a->unkA2) * 1.1 + a->unk9C,
                                    0.0f, 0.0f, 0.0f,
                                    a->unkA0 + 0xE3, a->unkA2, a->unkA4, 0x15, 0, 0);
                if (obj != 0) {
                    func_801FD260(obj, a);
                }
                func_801FC830(a->unk94, a->unk98, a->unk9C, 400.0f, D_80217C90[func_80212A48((void *)a) % 3]);
            }
        }
        if (count >= 0x1E) {
            a->unk90 = 0xB;
            a->unk3C = 0;
            arg1->unk4->unk30->unk48 = 0;
            arg1->unk4->unk30->unk49 = 0xFF;
            arg1->unk4->unk30->unk4A = 0;
        }
        break;
    case 15:
        rem = count % 6;
        if (rem < 4) {
            a->unkA2 = func_801FD284(a->unkA2, func_8001EF38(PL->inner->x - a->unk94, PL->inner->z - a->unk9C), 0.4f);
        }
        if (rem == 4) {
            obj = func_801FD168((f64)func_8001EAD0(a->unkA2) * 7.9 + a->unk94,
                                a->unk98 + D_8021AB88,
                                (f64)func_8001EB64(a->unkA2) * 7.9 + a->unk9C,
                                (f64)func_8001EAD0(a->unkA2) * 6.0,
                                -func_8001EAD0(a->unkA0) * 6.0,
                                (f64)func_8001EB64(a->unkA2) * 6.0,
                                a->unkA0, a->unkA2, a->unkA4, 0x13, 0, 0);
            if (obj != 0) {
                func_801FD260(obj, a);
            }
            obj = func_801FD168((f64)func_8001EAD0(a->unkA2) * D_8021AB90 + a->unk94,
                                a->unk98 + D_8021AB98,
                                (f64)func_8001EB64(a->unkA2) * D_8021AB90 + a->unk9C,
                                0.0f, 0.0f, 0.0f,
                                a->unkA0, a->unkA2, a->unkA4, 0x15, 0, 0);
            if (obj != 0) {
                func_801FD260(obj, a);
            }
            func_80212A28((void *)a);
            func_801FC830(a->unk94, a->unk98, a->unk9C, 400.0f, D_80217C90[func_80212A48((void *)a) % 3]);
        }
        if (count >= 0x12) {
            a->unk90 = 0xB;
            a->unk3C = 0;
            arg1->unk4->unk30->unk48 = 0xFF;
            arg1->unk4->unk30->unk49 = 0xFF;
            arg1->unk4->unk30->unk4A = 0;
        }
        break;
    case 11:
        a->unk48 = a->unk40 = 0.0f;
        if (count >= 0x2D) {
            a->unk90 = 2;
            a->unk3C = 0;
        }
        break;
    case 7:
        a->unk48 = a->unk40 = 0.0f;
        if (count == 0) {
            func_801FC830(a->unk94, a->unk98, a->unk9C, 400.0f, 0x116);
            func_80380F94(a->unk94, a->unk98, a->unk9C, 0, 0.0f, 0.0f, 0x12);
        }
        if (count >= 4) {
            arg1->unk0->unk22 = 0;
            arg1->unk4->unk22 = 0;
            a->unk90 = 0;
            func_801FCF98((void *)a);
            return 0;
        }
        break;
    }
    if (func_801C3D20(a->unk94, a->unk9C, 8.0f) != 0) {
        if ((f64)a->unk98 - 20.0 <= (f64)PL->inner->y && (f64)PL->inner->y <= (f64)a->unk98 + 4.0) {
            angle = (s16)(func_8001EF38(a->unk94 - PL->inner->x, a->unk9C - PL->inner->z) + 0x16) & 0x1FFF;
            speed = func_8001EAD0(angle);
            a->unk40 = PL->inner->x + speed * 8.0 - a->unk94;
            speed = func_8001EB64(angle);
            a->unk48 = PL->inner->z + speed * 8.0 - a->unk9C;
        }
    }
    if (a->unk40 != 0.0f || a->unk44 != 0.0f) {
        angle = func_8001EF38(a->unk40, a->unk48);
        speed = func_8002FC20(a->unk48 * a->unk48 + a->unk40 * a->unk40);
        if ((f64)speed < 6.0) {
            speed = 6.0f;
        }
        if (func_8010843C(a->unk94, a->unk98, a->unk9C,
                          func_8001EAD0((s16)angle) * speed + a->unk94,
                          a->unk98,
                          func_8001EB64((s16)angle) * speed + a->unk9C) != 0) {
            angle = func_8001EF38(D_801BBF44[2], D_801BBF54);
            a->unk40 = func_8001EAD0(angle) * 3.0;
            a->unk48 = func_8001EB64(angle) * 3.0;
        }
    }
    if (a->unk90 != 7 && a->unk90 != 0) {
        hit = func_801FD68C((void *)a);
        if (hit != 0) {
            a->unkB0 = a->unkB0 - 1;
            a->unk48 = a->unk40 = 0.0f;
            if ((u8)a->unkB0 == 0) {
                a->unk90 = 7;
                a->unk3C = 0;
            } else {
                func_801FC830(a->unk94, a->unk98, a->unk9C, 400.0f, 0x3A9);
                func_80380F94(a->unk94, a->unk98 + 2.0f, a->unk9C, 0.0f, 0.0f, 0.0f, 0x10);
                a->unk90 = 4;
                a->unk3C = 0;
                arg1->unk4->unk30->unk48 = 0xFF;
                arg1->unk4->unk30->unk49 = 0;
                arg1->unk4->unk30->unk4A = 0;
            }
            func_801FDB3C(hit);
        }
    }
    arg1->unk0->unk30->unk4 = a->unk94;
    arg1->unk0->unk30->unk8 = func_8001EAD0(a->unk92) * 0.5 + a->unk98;
    arg1->unk0->unk30->unkC = a->unk9C;
    arg1->unk0->unk30->unk10 = 0;
    arg1->unk0->unk30->unk12 = a->unkA2;
    arg1->unk0->unk30->unk14 = 0;
    arg1->unk4->unk30->unk4 = arg1->unk0->unk30->unk4;
    arg1->unk4->unk30->unk8 = arg1->unk0->unk30->unk8;
    arg1->unk4->unk30->unkC = arg1->unk0->unk30->unkC;
    arg1->unk4->unk30->unk10 = 0;
    arg1->unk4->unk30->unk12 = a->unkA2;
    arg1->unk4->unk30->unk14 = 0;
    a->unk92 = (s16)(a->unk92 + 0x155) & 0x1FFF;
    return 1;
}
