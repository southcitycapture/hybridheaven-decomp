#include "context.h"

typedef struct func_8037A320_StructE {
    u32 w0;
    s16 h4;
    s16 h6;
    s32 w8;
} func_8037A320_StructE;
typedef struct func_8037A320_StructP {
    u8 pad[0x1C];
    func_8037A320_StructE e;
} func_8037A320_StructP;
typedef struct func_8037A320_StructV {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8037A320_StructV;
typedef struct func_8037A320_StructG {
    u8 pad[0x2C];
    func_8037A320_StructV *unk2C;
} func_8037A320_StructG;
typedef struct func_8037A320_StructA {
    u8 pad[0x30];
    u32 unk30;
    u8 pad2[0xC];
    f32 unk40;
    u8 pad3[4];
    f32 unk48;
    u8 pad4[0x10];
    func_8037A320_StructP *unk5C;
} func_8037A320_StructA;

void func_800058DC(void *, void *);
struct func_8037B9F0_StructB;
s32 func_8037B9F0(struct func_8037B9F0_StructB *arg0);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern void func_801DFAA4(void *, s32);
extern void func_801518D4(s32, s32, s32);
extern void func_8013A28C(s32, func_8037A320_StructE);
extern void func_801CD228(void *, s32);
extern u16 D_801BBBF4;
extern func_8037A320_StructG *D_801BBCD0;
extern u8 D_801BBF44[];
extern u8 D_80388A6C;
extern u8 func_8037AC08[];
extern u8 func_8037A6F4[];

void func_8037A320(func_8037A320_StructA *arg0, s32 arg1) {
    func_8037A320_StructP *sp2C;
    s32 sp28;
    u16 sp26;
    func_8037A320_StructV *v;
    func_8037A320_StructE *e;
    extern s32 func_80010550();

    sp2C = arg0->unk5C;
    sp26 = func_80010550(arg1, sp2C);
    if (func_8037B9F0((struct func_8037B9F0_StructB *)arg0) == 0) {
        if (arg0->unk30 & 8) {
            v = D_801BBCD0->unk2C;
            if (func_801C5A1C(v->unk4, v->unk8 + 0.5, v->unkC, v->unk4, v->unk8 - 6.0, v->unkC) == 0) {
                func_801DFAA4(arg0, 2);
                if (D_80388A6C < 4) {
                    func_801518D4(0, 7, 6);
                } else {
                    func_801518D4(0, 3, 5);
                }
                e = &sp2C->e;
                if ((D_80388A6C == 1) || (D_80388A6C == 2) || (D_80388A6C == 5) || (D_80388A6C == 6)) {
                    e->w0 = 0x0190006D;
                } else {
                    e->w0 = 0x0190006A;
                }
                e->h4 = 0;
                e->h6 = 0;
                func_8013A28C(arg1, *e);
                D_80388A6C = D_80388A6C % 4;
                func_800058DC(arg0, func_8037AC08);
                return;
            }
            arg0->unk48 = 0.0f;
            arg0->unk40 = 0.0f;
        }
        if ((sp26 != 0) && (arg0->unk30 & 4)) {
            if (D_80388A6C < 4) {
                func_801518D4(0, 7, 6);
            } else {
                func_801518D4(0, 3, 5);
            }
            e = &sp2C->e;
            if ((D_80388A6C == 1) || (D_80388A6C == 2)) {
                e->w0 = 0x01900070;
            } else if ((D_80388A6C == 5) || (D_80388A6C == 6)) {
                e->w0 = 0x01900072;
            } else if ((D_80388A6C == 4) || (D_80388A6C == 7)) {
                e->w0 = 0x01900071;
            } else {
                e->w0 = 0x0190006F;
            }
            e->h4 = 0;
            e->h6 = 0;
            func_8013A28C(arg1, *e);
            v = D_801BBCD0->unk2C;
            if ((func_801C5A1C(v->unk4, v->unk8 + 0.5, v->unkC, v->unk4, v->unk8 - 1.0, v->unkC) == 0) || ((((D_801BBBF4 != 0x4D) && (D_801BBBF4 != 0x50)) || (D_801BBF44[7] < 2)) && ((D_801BBBF4 != 0x51) || (D_801BBF44[7] != 2)))) {
                func_801CD228(arg0, arg1);
            }
            D_80388A6C = D_80388A6C % 4;
            func_800058DC(arg0, func_8037A6F4);
        }
    }
}
