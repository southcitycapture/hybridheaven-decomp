#include "context.h"

extern void func_8001B204(s32, s32, s32, void *, s32, s32, s32);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s16 D_80037750;
extern u16 D_80089474[];
extern u8 D_801CFB44[];
extern u8 D_801CFB80[];
extern u8 D_801CFBD4[];
extern u8 D_801CFC10[];
extern u8 D_801CFC4C[];
extern u8 D_801CFC80[];
extern f32 D_801CFCDC;
extern f32 D_801CFCE0;
extern f32 D_801CFCE4;

#define ST (*(u8 *)&D_801CFE02)
#define CNT (*(u8 *)&D_801CFE03)
#define TMR (*(u16 *)&D_801CFE00)

void func_801CBE88(void *arg0, s32 arg1) {
    s32 v;
    s32 k;
    void *p;

    if (D_80089474[2] & 0xB000) {
        if (ST < 4) {
            ST = 4;
            func_8011AAF4(D_801CFB44, 0xC1, arg0, 0, 2, 0.0f, 15.0f, 226.0f, 860.0f, 0.0f, 12.0f, 160.0f, D_801CFCDC, 0.0f, 35.0f, -1, -1);
            func_8001B204(0xF, 0x7D0, 0xB4, D_801CFB80, 0xFF, 4, 1);
        } else {
            D_80037750 = 1;
            return;
        }
    }
    if (ST == 4) {
        v = TMR++ >= 0x97;
        if (v) {
            D_80037750 = 1;
            return;
        }
    }
    k = ST;
    if (k == 1) goto c1;
    if (k == 2) goto c2;
    if (k == 3) goto c3;
    if (k != 4) return;
    goto c4;
c1:
    func_8011AAF4(D_801CFBD4, 0xDC, arg0, 0, 1, 10.0f, 0.0f, 120.0f, 50.0f, 10.0f, 0.0f, 95.0f, -200.0f, 0.0f, 35.0f, -1, -1);
    return;
c2:
    if (func_8011AAF4(D_801CFC10, 0xE2, arg0, 0, 2, 10.0f, 15.0f, 226.0f, 860.0f, 4294967296.0f, 12.0f, 160.0f, D_801CFCE0, 0.0f, 35.0f, -1, -1) == 0) {
        ST = 3;
    }
    return;
c3:
    v = CNT;
    if (v < 0xFF) {
        v = ++CNT;
    } else {
        ST = 4;
    }
    func_8001B204(0xF, 0x7D0, 0xB4, D_801CFC4C, v, 4, 1);
c4:
    func_8011AAF4(D_801CFC80, 0xEE, arg0, 0, 1, 10.0f, 15.0f, 226.0f, 860.0f, 10.0f, 12.0f, 160.0f, D_801CFCE4, 0.0f, 35.0f, -1, -1);
    p = ((void **)((u8 *)((void **)arg0)[9]))[12];
    *(s16 *)((u8 *)p + 0x12) += 0x20;
    p = ((void **)((void **)arg0)[9])[12];
    *(s16 *)((u8 *)p + 0x12) &= 0x1FFF;
}
