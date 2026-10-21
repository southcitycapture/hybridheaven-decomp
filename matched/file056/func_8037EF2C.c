#include "context.h"

struct func_8037EF2C_Struct { u8 pad[0x96]; s8 unk96; };
extern s32 D_80388C18[][3];
extern u8 D_80389A0C[];
extern u8 D_80389A14[];
extern u8 D_80389A1C[];

void func_8037EF2C(void *arg) {
    struct func_8037EF2C_Struct *arg0 = arg;
    u8 s0 = 2;
    s32 s1 = 0;
    u8 s4 = 0;
    s32 k = 0x14;
    s32 s5, s6, v;
    s16 y;
    s32 *p;

    do {
        s5 = 0x6E;
        s6 = 0x6E;
        if (s1 == arg0->unk96) v = 0xFF; else v = 0x6E;
        p = D_80388C18[s4];
        y = s1 * k + 0x46;
        func_8001B204(s0++ & 0xFF, 0x37, y, D_80389A0C, v, 0, p[0]);
        if (s1 == arg0->unk96) {
            v = D_8038A950[s4];
            if (v == 2) s6 = 0xFF;
            if (v == 1) s5 = 0xFF;
        }
        func_8001B204(s0++ & 0xFF, 0x49C, y, D_80389A14, s5, 0, p[1]);
        func_8001B204(s0++ & 0xFF, 0x4E2, y, D_80389A1C, s6, 0, p[2]);
        s1 = ++s4;
    } while (s4 < 6);
}
