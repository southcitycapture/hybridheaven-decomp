#include "context.h"

typedef struct func_80239CF4_B {
    u8 pad[0x74];
    u8 unk74;
} func_80239CF4_B;
typedef struct func_80239CF4_E {
    u8 pad[0xA];
    u8 unkA;
} func_80239CF4_E;
typedef struct func_80239CF4_F {
    func_80239CF4_E *unk0;
    s32 unk4;
} func_80239CF4_F;
typedef struct func_80239CF4_D {
    s32 unk0;
    s32 unk4;
    func_80239CF4_F arr[1];
} func_80239CF4_D;
typedef struct func_80239CF4_A {
    u8 pad0[0x90];
    func_80239CF4_B *unk90;
    u8 pad1[0xA1 - 0x94];
    s8 unkA1;
    u8 pad2[3];
    s8 unkA5;
    u8 pad3[0xAC - 0xA6];
    u16 unkAC;
    u8 pad4[2];
    func_80239CF4_D *unkB0;
} func_80239CF4_A;
typedef struct func_80239CF4_C {
    u8 pad[0x2D4];
    func_80239CF4_E *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
} func_80239CF4_C;

void func_80239CF4(func_80239CF4_A *arg0, s32 arg1) {
    u8 pad[8];
    func_80239CF4_C *a;
    u8 t;
    u8 idx;
    func_80239CF4_E *e;
    func_80239CF4_D *b;
    func_80239CF4_B *p;

    p = arg0->unk90;
    t = p->unk74;
    a = (t == 0 || t == 2) ? (func_80239CF4_C *)D_801BC03C : (func_80239CF4_C *)D_801BC3D8;
    b = arg0->unkB0;
    if (arg0->unkAC >= 0x20) {
        idx = arg0->unkA5 + arg0->unkA1 * 5 - 5;
        a->unk2D4 = b->arr[idx].unk0;
        a->unk2D9 = a->unk2D4->unkA;
        a->unk2D8 = 9;
        if ((u8)D_8023E3A4 == 1) {
            func_8013CD04(a, 0, 1, arg0);
        }
        D_8023E3A4 = 2;
        D_8023E3AC += 1;
        func_80231CE4(a);
        func_800058DC(arg0, func_8023A09C);
    }
}
