#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801CFDF0[];
extern u8 D_801CFDF3;
extern u8 D_801CFDF4;
extern void func_80005700();
extern void func_8001B204(u8, s16, s16, void *, ...);
s32 func_801CAD70(u8 arg0);

extern void func_80020718();
extern u8 D_801CFDF1;
extern u8 D_801CFDF2;
extern u8 D_801CF724[];
extern u8 D_801BBCE7;

void func_801CAEEC(s32 arg0, s32 arg1) {
    u8 i;
    s32 v;
    u8 selector;

    i = 0;
    do {
        if (func_801CAD70(i) != 0) {
            selector = D_801BBBF0[0xF7];
            if (selector == 1) goto c1;
            if (selector == 2) goto c2;
            if (selector == 3) goto c3;
            v = selector;
            goto call;
c1:
            if (D_801CFDF3 != 0) {
                func_80020718(0x506);
                v = D_801BBCE7;
                goto call;
            }
            D_801BBBF0[0xF7] = 0;
            D_801CFDF0[0] = 0;
            return;
c2:
            if (D_801CFDF4 != 0) {
                func_80020718(0x509);
                v = D_801BBCE7;
                goto call;
            }
            D_801BBBF0[0xF7] = 0;
            D_801CFDF1 = 0;
            return;
c3:
            if (D_801CFDF4 != 0) {
                func_80020718(0x340);
                v = D_801BBCE7;
                goto call;
            }
            D_801BBBF0[0xF7] = 0;
            D_801CFDF2 = 0;
            return;
call:
            func_8001B204(0xF, 0xEF, 0x62, D_801CF724, 0, v - 1, 0);
            func_80005700(arg0);
            return;
        }
        i++;
    } while (i < 3);
}
