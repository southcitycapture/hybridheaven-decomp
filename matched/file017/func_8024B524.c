#include "context.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8024B7A8();

typedef struct func_8024B524_StructA { u8 pad0[0x4]; f32 f4; u8 pad8[4]; f32 fC; u8 pad10[2]; s16 s12; } func_8024B524_StructA;
typedef struct func_8024B524_StructE { u8 pad[0x2C]; func_8024B524_StructA *p; } func_8024B524_StructE;
#define E0P ((*(func_8024B524_StructE **)(D_801BBBF0 + 0xE0))->p)
typedef struct func_8024B524_StructO { u8 pad[0x22]; u8 b22; } func_8024B524_StructO;
typedef struct func_8024B524_StructP { u8 pad[0x4B]; u8 b4B; } func_8024B524_StructP;

void func_8024B524(u8 *arg0, u8 *arg1) {
    s32 pad;
    s32 sp38;
    s32 i;
    u8 t;
    func_8024B524_StructP *p;

    sp38 = (*(u16 *)(arg0 + 0x3C))++;
    func_8024CCC4(arg0, arg1);
    D_801C4058(arg0, 0.0f, 0.0f, -0x22);
    t = arg0[0x98];
    if (t < 0xFB) {
        arg0[0x98] = t + 4;
    }
    i = 0;
    if (func_801516CC(D_8025DDE0) > 0) {
        do {
            func_801515B0(D_8025DDE0, i, arg0[0x98]);
            i += 1;
        } while (i < func_801516CC(D_8025DDE0));
    }
    if (sp38 >= 0x34) {
        if (sp38 == 0x34) {
            func_80020718(0x186);
        }
        if (!(sp38 % 4)) {
            func_80380F94(-128.0f, 0.0f, 150.0f, 0.0f, 0.0f, 0.0f, 0xB);
        }
        p = *(func_8024B524_StructP **)(*(u8 **)(arg1 + 0x18) + 0x30);
        p->b4B += 0x10;
        p = *(func_8024B524_StructP **)(*(u8 **)(arg1 + 0x18) + 0x30);
        if (p->b4B >= 0xF0) {
            p->b4B = 0xFF;
            (*(func_8024B524_StructO **)(arg1 + 0x14))->b22 = 0;
            (*(func_8024B524_StructO **)(arg1 + 0x8))->b22 = 1;
            (*(func_8024B524_StructO **)(arg1 + 0x10))->b22 = 1;
            E0P->f4 += func_8001EAD0(E0P->s12) * 20.0f;
            E0P->fC += func_8001EB64(E0P->s12) * 20.0f;
            D_801BBBF0[0xF20] = 1;
            D_801BBBF0[0xF21] = 1;
            D_801BBBF0[0xF22] = 1;
            D_801BBBF0[0xF23] = 0x5A;
            D_801BBBF0[0xF24] = 0xA0;
            D_801BBBF0[0xF25] = 0xFF;
            ((s8 *)D_801BBBF0)[0xF26] = -0x28;
            ((s8 *)D_801BBBF0)[0xF27] = -0x7D;
            D_801BBBF0[0xF28] = 0x48;
            D_801BBBF0[0xF29] = 0xDC;
            D_801BBBF0[0xF2A] = 0xDC;
            D_801BBBF0[0xF2B] = 0xFF;
            D_801BBBF0[0xF2C] = 0x3C;
            D_801BBBF0[0xF2D] = 0x7D;
            D_801BBBF0[0xF2E] = 0;
            D_801BBBF0[0xF32] = 0;
            D_801BBBF0[0xF33] = 0;
            D_801BBBF0[0xF34] = 0;
            D_801BBBF0[0xF35] = 0xB9;
            *(f32 *)(D_801BBBF0 + 0x29C) = 5.0f;
            *(f32 *)(D_801BBBF0 + 0x2A0) = 200.0f;
            *(u16 *)(arg0 + 0x3C) = 0;
            func_800058DC((s32)arg0, (void (*)())func_8024B7A8);
        }
    }
}
