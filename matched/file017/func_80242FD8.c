#include "context.h"

struct func_80242FD8_S2 { u8 pad[4]; f32 f4; };
struct func_80242FD8_S1 { u8 pad[0x30]; struct func_80242FD8_S2 *p30; };
struct func_80242FD8_S3 { u8 pad[0x1C]; struct func_80242FD8_S1 *p1C; };
struct func_80242FD8_Sp { s16 a; s16 pad; s32 b; f32 c; s16 d; u8 pad2[0xE]; };
extern u8 D_8025C51C[];
extern u8 D_8025C554[];
extern u8 D_8025C58C[];
extern f32 D_8025C750;
extern f64 D_8025C758;
extern f32 D_8025C760;
extern u8 func_80243290[];

void func_80242FD8(u16 *arg0, struct func_80242FD8_S3 *arg1) {
    s32 v;
    struct func_80242FD8_S2 *p;
    struct func_80242FD8_Sp sp;

    v = arg0[0x3C / 2]++;
    if (v == 0x1E) {
        func_8011AAF4(D_8025C51C, 0x38A, arg0, 0, 1, 0.0f, 36.0f, -310.0f, -115.0f, 0.0f, 83.0f, D_8025C750, -50.0f, 0.0f, 55.0f, -1, -1);
    }
    if (v >= 0x3C) {
        p = arg1->p1C->p30;
        p->f4 = p->f4 - D_8025C758;
        p = arg1->p1C->p30;
        if (p->f4 <= 0.0f) {
            p->f4 = 0.0f;
        }
        if (v == 0x78) {
            sp.a = 0x1100;
            sp.b = 0x0348005E;
            sp.d = 0xA;
            sp.c = 6.0f;
            func_801C2F0C(5, &sp);
        } else if (v == 0x96) {
            func_8011AAF4(D_8025C554, 0x39C, arg0, 0, 1, 0.0f, 160.0f, -316.0f, 0.0f, 0.0f, 69.0f, -342.0f, -2.0f, 0.0f, 30.0f, -1, -1);
        } else if (v == 0xC3) {
            func_8011AAF4(D_8025C58C, 0x3A1, arg0, 0, 1, 0.0f, 80.0f, -340.0f, 0.0f, 0.0f, 65.0f, D_8025C760, 0.0f, 0.0f, 20.0f, -1, -1);
            arg0[0x3C / 2] = 0;
            func_800058DC(arg0, func_80243290);
        }
    }
    func_80243CC0(arg0, (s32)arg1);
}
