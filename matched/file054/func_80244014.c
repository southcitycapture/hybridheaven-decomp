#include "context.h"
typedef struct { u8 pad[0x3C]; u16 unk3C; u8 pad3E[0x56]; f32 unk94; } func_80244014_Struct;
extern u8 D_80247DFC[];
extern f64 D_80248588, D_80248590, D_80248598, D_802485A0, D_802485A8, D_802485B0, D_802485B8;
extern f32 D_802485C0, D_802485C4, D_802485C8, D_802485CC, D_802485D0, D_802485D4;
struct func_8024421C_Arg0;
struct func_8024421C_Arg1;
void func_8024421C(struct func_8024421C_Arg0 *arg0, struct func_8024421C_Arg1 *arg1);
#define F80244014(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))
void func_80244014(func_80244014_Struct *arg0, s32 arg1) {
    s32 v;
    f64 k;
    v = arg0->unk3C++;
    func_8011AAF4(D_80247DFC, 0x632, arg0, 0, 1, 0.0f, F80244014(0x1E8), F80244014(0x1EC), F80244014(0x1F0), 0.0f, F80244014(0x1F4), F80244014(0x1F8), F80244014(0x1FC), 0.0f, 35.0f, -1, -1);
    F80244014(0x1E8) = F80244014(0x1E8) + D_80248588;
    F80244014(0x1EC) = F80244014(0x1EC) + D_80248590;
    F80244014(0x1F0) = F80244014(0x1F0);
    F80244014(0x1F4) = F80244014(0x1F4) + D_80248598;
    F80244014(0x1F8) = F80244014(0x1F8) + D_802485A0;
    F80244014(0x1FC) = F80244014(0x1FC) + D_802485A8;
    if (!(v % 2)) {
        k = D_802485B0;
    } else {
        k = D_802485B8;
    }
    F80244014(0x1EC) = F80244014(0x1EC) + k;
    if (v >= 0x1E) {
        F80244014(0x1E8) = D_802485C0;
        F80244014(0x1EC) = D_802485C4;
        F80244014(0x1F0) = D_802485C8;
        F80244014(0x1F4) = D_802485CC;
        F80244014(0x1F8) = D_802485D0;
        F80244014(0x1FC) = D_802485D4;
        arg0->unk3C = 0;
        arg0->unk94 = 0.0f;
        func_800058DC(arg0, (void (*)(void))func_8024421C);
    }
}
