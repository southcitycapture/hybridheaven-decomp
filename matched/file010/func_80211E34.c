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


typedef struct func_80211E34_StructA {
    u8 pad0[0x3C]; u16 unk3C; u8 pad3E[2];
    f32 unk40, unk44, unk48;
    u8 pad4C[0x44]; u8 unk90, unk91; s16 unk92;
    f32 unk94, unk98, unk9C;
    u16 unkA0, unkA2, unkA4; u8 padA6[6]; u8 unkAC;
    u8 padAD[3]; u8 unkB0;
} func_80211E34_StructA;
typedef struct func_80211E34_StructI {
    u8 pad0[4]; f32 unk4, unk8, unkC; u16 unk10, unk12, unk14;
    u8 pad16[0x32]; u8 unk48, unk49, unk4A;
} func_80211E34_StructI;
typedef struct func_80211E34_StructO {
    u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; func_80211E34_StructI *unk30;
} func_80211E34_StructO;
typedef struct func_80211E34_StructB {
    func_80211E34_StructO *unk0, *unk4;
} func_80211E34_StructB;
extern s16 func_801FD284(s16, s16, f32);
extern f32 D_801BBF44[];
extern f32 D_801BBF54;
extern u16 D_80217C88[];
extern u16 D_80217C90[];
extern f64 D_8021AD48;

s32 func_80211E34(func_80211E34_StructA *arg0, func_80211E34_StructB *arg1) {
    s32 hit;
    s32 sp78;
    f32 sp74, sp70;
    f32 speed;
    u16 sp6A;
    s32 sp64;
    s16 angle;
    u16 timer;

    sp64 = arg0->unk3C++;
    switch (arg0->unk90) {
    case 0: return 1;
    case 2:
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        if ((func_80150584() == 0) && (func_801C3D20(arg0->unk94, arg0->unk9C, 60.0f) != 0)) {
            if ((arg0->unk98 - 18.0f <= D_801BBCD0->inner->y) && (D_801BBCD0->inner->y < arg0->unk98 + 3.0f) && (func_80108590(arg0->unk94, arg0->unk98, arg0->unk9C, D_801BBCD0->inner->x, arg0->unk98, D_801BBCD0->inner->z) == 0)) {
                arg0->unk90 = 4;
                arg0->unk3C = 0;
                arg1->unk4->unk30->unk48 = 0xFF;
                arg1->unk4->unk30->unk49 = 0x40;
                arg1->unk4->unk30->unk4A = 0x80;
            }
        }
        break;
    case 4:
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        sp6A = (s16)(func_8012C6B4(0x555) + D_801BBCD0->inner->angle - 0x2AA) & 0x1FFF;
        sp74 = func_8001EAD0((s16)sp6A) * 40.0f + D_801BBCD0->inner->x;
        sp70 = func_8001EB64((s16)sp6A) * 40.0f + D_801BBCD0->inner->z;
        sp6A = func_8001EF38(D_801BBCD0->inner->x - arg0->unk94, D_801BBCD0->inner->z - arg0->unk9C);
        arg0->unkA2 = func_801FD284(arg0->unkA2, (s16)(u16)sp6A, 0.4f);
        timer = sp6A;
        if (func_801FD4F4(arg0->unkA2, (s16)(u16)timer, 0x71)) {
            arg0->unk40 = (sp74 - arg0->unk94) / 9.0f;
            arg0->unk48 = (sp70 - arg0->unk9C) / 9.0f;
            arg0->unk90 = 5;
            arg0->unk3C = 0;
            func_80212A28((void *)arg0);
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217C88[func_80212A48((void *)arg0) % 3]);
        }
        break;
    case 5:
        arg0->unkA2 = func_801FD284(arg0->unkA2, func_8001EF38(D_801BBCD0->inner->x - arg0->unk94, D_801BBCD0->inner->z - arg0->unk9C), 0.3f);
        hit = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, arg0->unkA0, arg0->unkA2, arg0->unkA4, 0x12, 0, 1);
        if (hit) func_801FD260(hit, arg0);
        if (sp64 >= 6) {
            arg0->unk40 = (f64)arg0->unk40 * 0.6;
            arg0->unk48 = (f64)arg0->unk48 * 0.6;
        }
        if (sp64 >= 15) {
            if (!(arg0->unkAC & 0x40)) {
                arg0->unk90 = 9;
                arg0->unk3C = 0;
                arg0->unk40 = 0.0f;
                arg0->unk48 = 0.0f;
            } else {
                arg0->unk90 = 2;
                arg0->unk3C = 0;
            }
        }
        break;
    case 9:
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        if (sp64 == 9) {
            hit = func_801FD168((f32)((f64)func_8001EAD0(arg0->unkA2) * 7.9 + (f64)arg0->unk94), (f32)((f64)arg0->unk98 + 0.3), (f32)((f64)func_8001EB64(arg0->unkA2) * 7.9 + (f64)arg0->unk9C), (f32)((f64)func_8001EAD0(arg0->unkA2) * 3.0), (f32)((f64)-func_8001EAD0(arg0->unkA0) * 3.0), (f32)((f64)func_8001EB64(arg0->unkA2) * 3.0), arg0->unkA0, arg0->unkA2, arg0->unkA4, 0x13, 0, 0);
            if (hit) func_801FD260(hit, arg0);
            hit = func_801FD168((f32)((f64)func_8001EAD0(arg0->unkA2) * 3.9 + (f64)arg0->unk94), (f32)((f64)arg0->unk98 + D_8021AD48), (f32)((f64)func_8001EB64(arg0->unkA2) * 3.9 + (f64)arg0->unk9C), 0.0f, 0.0f, 0.0f, arg0->unkA0, arg0->unkA2, arg0->unkA4, 0x15, 0, 0);
            if (hit) func_801FD260(hit, arg0);
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, D_80217C90[func_80212A48((void *)arg0) % 3]);
        }
        if (sp64 >= 45) {
            arg0->unk90 = 11;
            arg0->unk3C = 0;
            arg1->unk4->unk30->unk48 = 0x80;
            arg1->unk4->unk30->unk49 = 0x80;
            arg1->unk4->unk30->unk4A = 0xFF;
        }
        break;
    case 11:
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        if (sp64 >= 60) { arg0->unk90 = 2; arg0->unk3C = 0; }
        break;
    case 7:
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        if (sp64 == 0) {
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x116);
            func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x12);
        }
        if (sp64 >= 4) {
            arg1->unk0->unk22 = 0;
            arg1->unk4->unk22 = 0;
            arg0->unk90 = 0;
            func_801FCF98((void *)arg0);
            return 0;
        }
        break;
    }
    if (func_801C3D20(arg0->unk94, arg0->unk9C, 8.0f)) {
        if ((f64)arg0->unk98 - 20.0 <= (f64)D_801BBCD0->inner->y && (f64)D_801BBCD0->inner->y <= (f64)arg0->unk98 + 4.0) {
            sp6A = (s16)(func_8001EF38(arg0->unk94 - D_801BBCD0->inner->x, arg0->unk9C - D_801BBCD0->inner->z) + 0x16) & 0x1FFF;
            speed = func_8001EAD0((s16)sp6A);
            arg0->unk40 = (f64)D_801BBCD0->inner->x + speed * 8.0 - (f64)arg0->unk94;
            speed = func_8001EB64((s16)(u16)sp6A);
            arg0->unk48 = (f64)D_801BBCD0->inner->z + speed * 8.0 - (f64)arg0->unk9C;
        }
    }
    if (arg0->unk40 != 0.0f || arg0->unk44 != 0.0f) {
        sp6A = func_8001EF38(arg0->unk40, arg0->unk48);
        speed = func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40);
        if ((f64)speed < 6.0) speed = 6.0f;
        if (func_80108590(arg0->unk94, arg0->unk98, arg0->unk9C, func_8001EAD0((s16)(u16)sp6A) * speed + arg0->unk94, arg0->unk98, func_8001EB64((s16)(u16)sp6A) * speed + arg0->unk9C)) {
            sp6A = func_8001EF38(D_801BBF44[2], D_801BBF54);
            arg0->unk40 = (f64)func_8001EAD0((s16)sp6A) * 3.0;
            arg0->unk48 = (f64)func_8001EB64((s16)(u16)sp6A) * 3.0;
        }
    }
    if (arg0->unk90 != 7 && arg0->unk90 != 0) {
        hit = func_801FD68C((void *)arg0);
        sp78 = hit;
        if (hit) {
            arg0->unk40 = 0.0f;
            arg0->unk48 = 0.0f;
            if (--arg0->unkB0 == 0) {
                arg0->unk90 = 7;
                arg0->unk3C = 0;
            } else {
                func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3A9);
                func_80380F94(arg0->unk94, arg0->unk98 + 2.0f, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x10);
                arg0->unk90 = 4;
                arg0->unk3C = 0;
                arg1->unk4->unk30->unk48 = 0xFF;
                arg1->unk4->unk30->unk49 = 0;
                arg1->unk4->unk30->unk4A = 0;
            }
            func_801FDB3C(sp78);
        }
    }
    arg1->unk0->unk30->unk4 = arg0->unk94;
    arg1->unk0->unk30->unk8 = (f64)func_8001EAD0(arg0->unk92) * 0.5 + (f64)arg0->unk98;
    arg1->unk0->unk30->unkC = arg0->unk9C;
    arg1->unk0->unk30->unk10 = 0;
    arg1->unk0->unk30->unk12 = arg0->unkA2;
    arg1->unk0->unk30->unk14 = 0;
    arg1->unk4->unk30->unk4 = arg1->unk0->unk30->unk4;
    arg1->unk4->unk30->unk8 = arg1->unk0->unk30->unk8;
    arg1->unk4->unk30->unkC = arg1->unk0->unk30->unkC;
    arg1->unk4->unk30->unk10 = 0;
    arg1->unk4->unk30->unk12 = arg0->unkA2;
    arg1->unk4->unk30->unk14 = 0;
    arg0->unk92 = (s16)(arg0->unk92 + 0x155) & 0x1FFF;
    return 1;
}
