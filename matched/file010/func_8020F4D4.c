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
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
extern u16 func_8012FF58();
extern void func_801FC830(f32, f32, f32, f32, s32);
extern s32 func_801FD5BC(f32, f32, f32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
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


typedef struct func_8020F4D4_StructA {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[2];
    f32 unk40, unk44, unk48;
    u8 pad4C[0x44];
    u8 unk90, unk91;
    s16 unk92;
    f32 unk94, unk98, unk9C;
    u16 unkA0, unkA2, unkA4;
    u8 padA6[10];
    u8 unkB0;
} func_8020F4D4_StructA;
typedef struct func_8020F4D4_StructI {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u16 unk10, unk12, unk14;
} func_8020F4D4_StructI;
typedef struct func_8020F4D4_StructO {
    u8 pad0[0x30];
    func_8020F4D4_StructI *unk30;
} func_8020F4D4_StructO;
extern u16 D_80217CA0[];
extern f64 D_8021AC08;
extern f64 D_8021AC10;
extern f64 D_8021AC18;
extern f64 D_8021AC20;
extern f64 D_8021AC28;
extern f64 D_8021AC30;

#define A28(p) ((struct func_80212A28_Struct *)(p))

s32 func_8020F4D4(func_8020F4D4_StructA *arg0, func_8020F4D4_StructO **arg1) {
    struct {
        u8 pad0[4];
        f32 v34, v38;
        u16 v3C;
        u8 padE[10];
        s32 v48;
        f32 v4C;
        u8 pad20[2];
        s16 v52;
        u8 pad24[4];
    } locals;
#define sp52 locals.v52
#define sp4C locals.v4C
#define sp48 locals.v48
#define sp3C locals.v3C
#define sp38 locals.v38
#define sp34 locals.v34
    s32 temp_v0_3;
    f64 k;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    s32 temp_v0_4;
extern s32 func_801FD68C();    u8 temp_t4;
    struct func_8020C39C_StructInner *temp_v0_2;

    sp48 = arg0->unk3C++;
    if (arg0->unk90 != 2) {
        if (arg0->unk90 != 9) goto state_done;
        goto state_nine;
    } else {
        arg0->unk44 = (f64) arg0->unk44 - D_8021AC08;
        if ((arg0->unk44 < 0.0f) && ((f64) arg0->unk98 < (f64) D_801BBCD0->inner->y + 30.0)) {
            arg0->unk90 = 9;
            arg0->unk3C = 0;
        }
        goto state_done;
    }
state_nine:
    {
        arg0->unk44 = (f64) arg0->unk44 * D_8021AC10;
        if (sp48 < 60) {
            temp_v0_2 = D_801BBCD0->inner;
            temp_v0_3 = func_8001EF38(temp_v0_2->x - arg0->unk94, temp_v0_2->z - arg0->unk9C);
            sp52 = temp_v0_3;
            temp_v0_3 = (s16)temp_v0_3;
            arg0->unk40 += func_8001EAD0(temp_v0_3) * D_8021AC18;
            arg0->unk48 += func_8001EB64(sp52) * D_8021AC20;
        }
        if (sp48 >= 150) {
            k = D_8021AC28;
            arg0->unk40 = (f64) arg0->unk40 * k;
            arg0->unk48 = (f64) arg0->unk48 * k;
        }
    }
state_done:
    if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C)) return 0;
    arg0->unkA0 = (s16)(0x2000 - func_8001EF38(arg0->unk44, func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40))) & 0x1FFF;
    arg0->unkA2 = func_8001EF38(arg0->unk40, arg0->unk48);
    if (arg0->unk92 >= 4) {
        temp_fa1 = arg0->unk98;
        temp_fa0 = arg0->unk94;
        temp_fv0_2 = arg0->unk9C;
        if (func_80108590(temp_fa0, temp_fa1, temp_fv0_2, arg0->unk40 + temp_fa0, arg0->unk44 + temp_fa1, arg0->unk48 + temp_fv0_2)) {
            func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 30);
            func_80212A28(A28(arg0));
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217CA0[(s32)func_80212A48(A28(arg0)) % 4]);
            return 0;
        }
    }
    temp_v0_4 = func_801FD68C((void *)arg0);
    if (temp_v0_4) {
        func_801FDB3C(temp_v0_4);
        if (--arg0->unkB0 == 0) {
            func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 30);
            func_80212A28(A28(arg0));
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217CA0[(s32)func_80212A48(A28(arg0)) % 4]);
            return 0;
        }
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3A9);
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 16);
        k = D_8021AC30;
        arg0->unk40 = (f64) arg0->unk40 * k;
        arg0->unk48 = (f64) arg0->unk48 * k;
    }
    sp4C = func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40);
    sp34 = func_8001EAD0(arg0->unkA2);
    sp38 = func_8001EB64(arg0->unkA2);
    sp3C = func_8012FF58();
    if (func_801FD644(sp34 * sp4C + arg0->unk94, arg0->unk98, sp38 * sp4C + arg0->unk9C, 0.3f, arg0->unkA2, 1.0f, 1.0f, (u32)(func_801FD780(arg0->unk91) * (f32)(((s32)sp3C / 10) * 10 + 20)))) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 30);
        func_80212A28(A28(arg0));
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217CA0[(s32)func_80212A48(A28(arg0)) % 4]);
        return 0;
    }
    if (!(sp48 % 2)) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 22);
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = arg0->unkA0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = arg0->unkA4;
    arg0->unk92++;
    return 1;
}
#undef sp52
#undef sp4C
#undef sp48
#undef sp3C
#undef sp38
#undef sp34
