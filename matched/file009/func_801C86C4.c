#include "context.h"

typedef struct func_801C86C4_StructV { s32 a, b, c; } func_801C86C4_StructV;
typedef struct func_801C86C4_StructN { u8 pad[0x1C]; func_801C86C4_StructV v; } func_801C86C4_StructN;
extern s32 func_80133A24(s32);
extern s32 func_8013D4A0(s32, s32);
extern void func_801BF1A0(s32);
extern func_801C86C4_StructV D_801E0BF4;
extern func_801C86C4_StructV D_801E0C00;
extern func_801C86C4_StructV D_801E0C0C;
extern func_801C86C4_StructV D_801E0C18;
extern s16 D_80216BFC;

typedef struct func_801C86C4_StructD {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x3A6 - 6];
    u8 unk3A6;
    u8 pad3A7[0xEF0 - 0x3A7];
    u16 unkEF0;
    u16 unkEF2;
} func_801C86C4_StructD;
#define DD ((func_801C86C4_StructD *)&D_801BBBF0)
#define U4 (DD->unk4)
#define EF0 (DD->unkEF0)
#define EF2 (DD->unkEF2)
#define B3A6 (DD->unk3A6)

typedef struct func_801C86C4_StructO { u8 pad[0x5C]; func_801C86C4_StructN *unk5C; } func_801C86C4_StructO;

void func_801C86C4(func_801C86C4_StructO *arg0, s32 arg1) {
    func_801C86C4_StructN *sp1C;
    u32 v;

    sp1C = arg0->unk5C;
    v = U4;
    if (v == 0x12) {
        EF2 |= 0x200;
    }
    if (v == 0) {
        if (func_8013D4A0(0x27, 0) == 0) goto b10;
        v = U4;
    }
    if (v == 0xA) {
        if (func_80133A24(0x46) == 0) goto b10;
        v = U4;
    }
    if (v == 0x32) {
        if (func_80133A24(0x148) == 0) {
b10:
            func_801BF1A0(0);
            sp1C->v = D_801E0C18;
            EF2 = 0x80;
            EF0 = 0x40;
            return;
        }
    }
    if (EF2 & 0x100) {
        if (U4 != 0x11 || B3A6 != 0x13) {
            func_801BF1A0(5);
        } else {
            func_801BF1A0(0);
        }
        sp1C->v = D_801E0C00;
        EF2 = 0;
        EF0 = 0x100;
    } else if (EF2 & 0x200) {
        sp1C->v = D_801E0C0C;
        D_80216BFC = 0;
        EF2 = 0;
        EF0 |= 0x100;
    } else {
        func_801BF1A0(0);
        sp1C->v = D_801E0BF4;
        EF0 = 0x80;
    }
}
