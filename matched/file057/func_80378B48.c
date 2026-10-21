#include "context.h"

struct func_80378B48_Ent {
    s16 a;
    u8 b;
    u8 c;
    u8 d;
    u8 e;
};
struct func_80378B48_Struct {
    u8 pad0[0xAA];
    struct func_80378B48_Ent ent[1];
};
extern s32 func_803789B0(void *, u8);

void func_80378B48(void) {
    struct func_80378B48_Struct *p;
    u8 *P;
    u8 i;

    if (D_801BBBF0[0x1030] == 0) {
        p = (struct func_80378B48_Struct *)&D_801BC03C;
    } else {
        p = (struct func_80378B48_Struct *)&D_801BC3D8;
    }
    P = (u8 *)p;
    if (*(u16 *)(D_801BBBF0 + 0x2C) != 0xA && *(u16 *)(D_801BBBF0 + 0x2C) != 0xB && *(u16 *)(D_801BBBF0 + 0x2C) != 0xF) {
        i = P[0x2D9];
        if (p->ent[i].a < 0xFF) {
            if (func_803789B0(p, i)) {
                if (P == D_801BBBF0 + 0x7E8) {
                    p->ent[P[0x2D9]].a++;
                } else if (P[0x2D9] >= 0x52) {
                    p->ent[P[0x2D9]].a++;
                } else if (*(u16 *)(P + 0x300) >= 0x64) {
                    p->ent[P[0x2D9]].a++;
                } else {
                    D_801840E8[P[0x2D9]] += *(u16 *)(P + 0x300);
                    if (D_801840E8[P[0x2D9]] >= 0x64) {
                        D_801840E8[P[0x2D9]] -= 0x64;
                        p->ent[P[0x2D9]].a++;
                    }
                }
            }
        }
        if (P[0x2D8] != 0xA && P[0x2D8] != 9) {
            if (p->ent[P[0x2D9]].b < 0xFF) {
                p->ent[P[0x2D9]].b++;
            }
        }
    }
}
