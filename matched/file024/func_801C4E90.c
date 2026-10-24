#include "context.h"

extern u8 D_801CEF78[];
extern u8 D_801CEF84[];
extern u8 D_801CEF90[];
extern u8 D_801CEF9C[];
extern u8 D_801CEFA8[];
extern u8 D_801CEFB4[];
extern u8 D_801CEFC0[];
extern u8 D_801CEFCC[];
extern u8 D_801CEFD8[];
extern u8 D_801CEFE4[];
extern u8 D_801C3940[];

void func_801C4E90(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 3;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 3) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CEF78);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C3940);
    }
    if (func_801C1334() & 0xB000) {
        if (D_801CC8C8 == 0) goto c0;
        if (D_801CC8C8 == 1) goto c1;
        if (D_801CC8C8 == 2) goto c2;
        if (D_801CC8C8 != 3) goto end;
        goto c3;
c0:
        func_8001B204(1, 0x7D0, 0x8A, D_801CEF84, 2);
        func_8001B204(2, 0x7D0, 0x94, D_801CEF90, 6);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEF9C, 6);
        D_801BBC0D = 2;
        goto end;
c1:
        func_8001B204(1, 0x7D0, 0x8A, D_801CEFA8, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEFB4, 2);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEFC0, 6);
        D_801BBC0D = 1;
        goto end;
c2:
        func_8001B204(1, 0x7D0, 0x8A, D_801CEFCC, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEFD8, 6);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEFE4, 2);
        D_801BBC0D = 0;
        goto end;
c3:
        func_800058DC(arg0, func_801C3940);
    }
end:
    return;
}
