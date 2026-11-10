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
extern f32 D_801BBF74;
extern u16 D_80217C70[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
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
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern s32 func_801FD68C(func_8020FB98_Struct *);
extern f32 func_801FD780(u8);
extern void func_801FDB3C(s32);
struct func_80212A28_Struct {
    u8 pad0[0xAD];
    u8 unkAD;
};
void func_80212A28(struct func_80212A28_Struct *arg0);
u8 func_80212A48(struct func_80212A28_Struct *arg0);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


typedef struct func_80210160_StructL {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_80210160_StructL;

typedef struct func_80210160_StructI {
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
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80210160_StructI;

typedef struct func_80210160_StructO {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_80210160_StructI *unk30;
} func_80210160_StructO;

typedef struct func_80210160_StructA1 {
    func_80210160_StructO *unk0;
    func_80210160_StructO *unk4;
} func_80210160_StructA1;

typedef struct func_80210160_StructA0 {
    u8 pad0[0x3C];
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
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    s16 unkA6;
    u8 padA8[0xAC - 0xA8];
    u8 unkAC;
    u8 padAD[0xB0 - 0xAD];
    u8 unkB0;
} func_80210160_StructA0;

extern u16 D_80217C98[];
extern s16 func_801FD3EC(s16, s16, s16);

s32 func_80210160(func_80210160_StructA0 *arg0, func_80210160_StructA1 *arg1) {
    u8 temp_v1;
    s32 pad48;
    s32 sp44;
    s32 sp40;
    s32 pad3C;
    u16 pad3A;
    u16 sp38;
    s32 pad34;
    f32 sp30;

    sp40 = arg0->unk3C;
    arg0->unk3C++;
    temp_v1 = arg0->unk90;
    if (temp_v1 == 2 || temp_v1 == 4 || temp_v1 == 5) {
        if (func_801C3D20(arg0->unk94, arg0->unk9C, 3.0f) != 0) {
            if (arg0->unk98 - 15.0f <= D_801BBCD0->inner->y && D_801BBCD0->inner->y < arg0->unk98 + 1.0f) {
                arg0->unk90 = 8;
                arg0->unk40 = 0.0f;
                arg0->unk48 = 0.0f;
                arg0->unk3C = 0;
                sp40 = (u16)arg0->unk3C;
            }
        }
    }
    switch (arg0->unk90) {
    case 0:
        return 1;
    case 2:
        if (sp40 >= 0x15) {
            if (arg0->unkAC & 1) {
                if (func_801C3D20(arg0->unk94, arg0->unk9C, 100.0f) != 0 &&
                    arg0->unk98 - 40.0f <= D_801BBCD0->inner->y &&
                    D_801BBCD0->inner->y < arg0->unk98 + 20.0f &&
                    func_80108590(arg0->unk94, arg0->unk98 + 1.0, arg0->unk9C, D_801BBCD0->inner->x, arg0->unk98 + 1.0, D_801BBCD0->inner->z) == 0) {
                    arg0->unk90 = 4;
                    arg0->unk3C = func_8012C6B4(9);
                    arg0->unk92 = func_8012C6B4(0x111) + 0x16;
                    func_80212A28(arg0);
                    if (func_80133A24(0x287) == 0) {
                        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217C98[func_80212A48(arg0) % 3]);
                    }
                } else {
                    arg0->unk90 = 5;
                    arg0->unk3C = 0;
                    arg0->unk92 = func_8012C6B4(0x111) - 0x88;
                }
            } else {
                arg0->unk90 = 4;
                arg0->unk3C = func_8012C6B4(9);
                arg0->unk92 = func_8012C6B4(0xCC) + 0x16;
                func_80212A28(arg0);
                if (func_80133A24(0x287) == 0) {
                    func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217C98[func_80212A48(arg0) % 3]);
                }
            }
        }
        goto common;
    case 4:
        arg0->unkA2 = func_801FD3EC(arg0->unkA2, func_8001EF38(D_801BBCD0->inner->x - arg0->unk94, D_801BBCD0->inner->z - arg0->unk9C), arg0->unk92);
        arg0->unk40 = 2.0 * func_8001EAD0(arg0->unkA2);
        arg0->unk48 = 2.0 * func_8001EB64(arg0->unkA2);
        sp30 = func_8001EAD0(arg0->unkA2);
        if (func_80108590(arg0->unk94, arg0->unk98 + 0.1, arg0->unk9C, sp30 * 4.0 + arg0->unk94, arg0->unk98 + 0.1, func_8001EB64(arg0->unkA2) * 4.0 + arg0->unk9C) != 0) {
            arg0->unk40 = 0.0f;
            arg0->unk48 = 0.0;
        }
        if (sp40 >= 0x13) {
            arg0->unk90 = 2;
            arg0->unk3C = 0;
            arg0->unk40 = 0.0;
            arg0->unk48 = 0.0;
        }
        if (!(arg0->unkAC & 2)) {
            if (func_80108590(arg0->unk94, arg0->unk98 + 0.5, arg0->unk9C, arg0->unk94, arg0->unk98 - 0.6, arg0->unk9C) == 0) {
                arg0->unk90 = 6;
                arg0->unk3C = 0;
                arg0->unk40 = arg0->unk40 * 0.5;
                arg0->unk48 = arg0->unk48 * 0.5;
            }
        }
        goto common;
    case 5:
        arg0->unkA2 = (s16)(arg0->unk92 + arg0->unkA2) & 0x1FFF;
        if (sp40 >= 0x10) {
            arg0->unk90 = 2;
            arg0->unk3C = 0;
        }
        goto common;
    case 6:
        arg0->unk44 = arg0->unk44 - 0.2;
        arg0->unkA4 = func_801FD3EC(arg0->unkA4, 0, 0xE3);
        if (func_80108590(arg0->unk94, arg0->unk98 - arg0->unk44, arg0->unk9C, arg0->unk94, arg0->unk98 - 0.6, arg0->unk9C) != 0) {
            arg0->unk90 = 2;
            arg0->unk98 = D_801BBF74;
            arg0->unkA4 = 0;
            arg0->unk3C = 0;
            arg0->unk44 = 0.0f;
        }
        goto common;
    case 10:
        arg0->unkA6 = arg0->unkA6 + 0x1C7;
        if (arg0->unkA6 >= 0x2000) {
            arg0->unk90 = 2;
            arg0->unk3C = 0;
            arg0->unkA6 = func_8012C6B4(0xA3);
        }
        goto common;
    case 7:
        arg0->unk40 = 0.0;
        arg0->unk48 = 0.0;
        if (sp40 == 0) {
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x116);
            func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x12);
        }
        if (sp40 >= 4) {
            arg1->unk0->unk22 = 0;
            arg1->unk4->unk22 = 0;
            arg0->unk90 = 0;
            func_801FCF98(arg0);
            return 0;
        }
        goto common;
    case 8:
        if (sp40 == 0) {
            func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0, 0.0, 0.0, 0);
            if (func_80133A24(0x287) == 0) {
                func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217C70[func_80212A48(arg0) % 3]);
            }
            if (func_80150584() == 0) {
                sp38 = (u16)func_8012FF58();
                if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 10.5f, (s16)(D_801BBCD0->inner->angle + 0x1000) & 0x1FFF, 2.0f, 0.4f, func_801FD780(arg0->unk91) * (f32)((((s32)sp38 / 10) * 10) + 20)) != 0) {
                    func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0, 0.0, 0.0, 2);
                }
            }
        }
        if (sp40 >= 4) {
            arg1->unk0->unk22 = 0;
            arg1->unk4->unk22 = 0;
            arg0->unk90 = 0;
            func_801FCF98(arg0);
        }
        goto common;
    default:
    common:
        if (arg0->unk90 != 0xA && arg0->unk90 != 0) {
            arg1->unk4->unk30->unk4C = func_8001EAD0((s16)(arg0->unkA6 * 0x78) & 0x1FFF) * 16.0f + 48.0f;
            arg1->unk4->unk30->unk4D = func_8001EAD0((s16)(arg0->unkA6 * 0x78) & 0x1FFF) * 32.0f + 96.0f;
            arg1->unk4->unk30->unk4E = func_8001EAD0((s16)(arg0->unkA6 * 0x78) & 0x1FFF) * 63.0f + 192.0f;
            arg1->unk4->unk30->unk48 = func_8001EAD0((s16)(arg0->unkA6 * 0x78) & 0x1FFF) * 63.0f + 192.0f;
            arg1->unk4->unk30->unk49 = func_8001EAD0((s16)(arg0->unkA6 * 0x78) & 0x1FFF) * 63.0f + 192.0f;
            arg1->unk4->unk30->unk4A = func_8001EAD0((s16)(arg0->unkA6 * 0x78) & 0x1FFF) * 63.0f + 192.0f;
            arg0->unkA6 = arg0->unkA6 + 1;
        }
        sp44 = func_801FD68C(arg0);
        if (sp44 != 0) {
            if (arg0->unk90 != 8 && arg0->unk90 != 0) {
                arg0->unkB0 = arg0->unkB0 - 1;
                arg0->unk40 = 0.0;
                arg0->unk48 = 0.0;
                if ((u8)arg0->unkB0 == 0) {
                    arg0->unk90 = 7;
                    arg0->unk3C = 0;
                } else {
                    func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3A9);
                    arg0->unk90 = 0xA;
                    arg0->unk3C = 0;
                    arg0->unkA6 = 0;
                    func_80380F94(arg0->unk94, arg0->unk98 + 1.0f, arg0->unk9C, 0.0, 0.0, 0.0, 0x10);
                    if (arg0->unkAC & 2) {
                        if (func_80108590(arg0->unk94, arg0->unk98 + 0.5, arg0->unk9C, arg0->unk94, arg0->unk98 - 0.6, arg0->unk9C) == 0) {
                            arg0->unk90 = 6;
                            arg0->unk3C = 0;
                            arg0->unkAC = arg0->unkAC & 0xFFFD;
                            arg0->unk40 = 0.0;
                            arg0->unk48 = 0.0;
                        }
                    }
                }
                func_801FDB3C(sp44);
            }
        }
        arg1->unk4->unk30->unk4 = arg0->unk94;
        arg1->unk4->unk30->unk8 = arg0->unk98;
        arg1->unk4->unk30->unkC = arg0->unk9C;
        arg1->unk4->unk30->unk10 = 0;
        arg1->unk4->unk30->unk12 = arg0->unkA2;
        arg1->unk4->unk30->unk14 = arg0->unkA4;
        arg1->unk0->unk30->unk4 = arg0->unk94;
        arg1->unk0->unk30->unk8 = arg0->unk98;
        arg1->unk0->unk30->unkC = arg0->unk9C;
        arg1->unk0->unk30->unk10 = 0;
        arg1->unk0->unk30->unk12 = arg0->unkA2;
        arg1->unk0->unk30->unk14 = arg0->unkA4;
        if (arg0->unk90 == 0xA) {
            arg1->unk4->unk30->unk8 += func_8001EAD0((s32)(arg0->unkA6 * 0.5)) * 3.0f;
            arg1->unk4->unk30->unk10 = (s16)(s32)(func_8001EAD0(arg0->unkA6 * 4) * 682.0f + (f32)arg1->unk4->unk30->unk10) & 0x1FFF;
            arg1->unk4->unk30->unk12 = (s16)(s32)(func_8001EAD0(arg0->unkA6 * 2) * 682.0f + (f32)arg1->unk4->unk30->unk12) & 0x1FFF;
            arg1->unk4->unk30->unk14 = (s16)(s32)(func_8001EAD0(arg0->unkA6 * 8) * 682.0f + (f32)arg1->unk4->unk30->unk14) & 0x1FFF;
            arg1->unk0->unk30->unk8 += func_8001EAD0((s32)(arg0->unkA6 * 0.5)) * 3.0f;
            arg1->unk0->unk30->unk10 = (s16)(s32)(func_8001EAD0(arg0->unkA6 * 4) * 682.0f + (f32)arg1->unk0->unk30->unk10) & 0x1FFF;
            arg1->unk0->unk30->unk12 = (s16)(s32)(func_8001EAD0(arg0->unkA6 * 2) * 682.0f + (f32)arg1->unk0->unk30->unk12) & 0x1FFF;
            arg1->unk0->unk30->unk14 = (s16)(s32)(func_8001EAD0(arg0->unkA6 * 8) * 682.0f + (f32)arg1->unk0->unk30->unk14) & 0x1FFF;
        }
        return 1;
    }
}
