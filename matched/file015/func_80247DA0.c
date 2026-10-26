#include "context.h"

extern void func_800179B0(void *);
extern void func_80247FA4();
extern u8 D_80252B64[];
extern u8 D_80258C48[];
extern u8 D_80258C84[];
extern f32 D_80258D50;
extern f32 D_80258D54;
extern f32 D_80258D58;
extern f32 D_80258D5C;
extern f32 D_80258D60;
extern f32 D_80258D64;
extern f32 D_80258D68;
extern f32 D_80258D6C;

struct func_80247DA0_Struct {
    u8 pad[0x1E8];
    f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC;
};
struct func_80247DA0_Pkt {
    f32 f0, f4, f8;
    s16 hC;
    u8 pad[2];
    s32 s10;
    f32 f14;
    s16 h18, h1A;
    s32 pad2;
};

void func_80247DA0(s32 arg0, s32 arg1) {
    struct func_80247DA0_Pkt p;
    extern s32 D_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
#define G (*(struct func_80247DA0_Struct *)&D_801BBBF0)

    if (func_800178E8() != 0 && D_8011AAF4(D_80258C48, 0x14C, arg0, 0, 2, 0.1f, G.f1E8, G.f1EC, G.f1F0, 4294967296.0f, G.f1F4, G.f1F8, G.f1FC, 0.0f, 35.0f, -1, -1) == 0) {
        G.f1E8 = -399.1f;
        G.f1EC = -110.7f;
        G.f1F0 = 201.0f;
        G.f1F4 = -420.2f;
        G.f1F8 = -151.6f;
        G.f1FC = 188.9f;
        func_8011AAF4(D_80258C84, 0x157, arg0, 0, 1, 0.0f, G.f1E8, G.f1EC, G.f1F0, 0.0f, G.f1F4, G.f1F8, G.f1FC, 0.0f, 35.0f, -1, -1);
        p.hC = 0x1100;
        p.s10 = 0x0168003E;
        p.h18 = 0;
        p.h1A = 0x5A;
        p.f0 = -425.0f;
        p.f4 = 188.0f;
        p.f8 = 0.15f;
        p.f14 = 1.0f;
        func_801C2F0C(2, (s16 *)&p);
        func_800179B0(D_80252B64);
        func_800058DC(arg0, (void *)func_80247FA4);
    }
}
