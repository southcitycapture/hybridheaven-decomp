#include "context.h"

extern u8 D_8025C5C4[];
extern u8 D_8025C5FC[];
extern u8 D_8025C634[];
extern f32 D_8025C764;
extern f32 D_8025C768;

struct func_80243290_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_80243290_Obj {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0x14];
    f32 unk44;
};
struct func_80243290_Args {
    s16 a;
    s16 pad0;
    s32 b;
    f32 c;
    s16 d;
    u8 pad1[0x12];
};

void func_80243290(struct func_80243290_Struct *arg0, void *arg1) {
    s32 v = arg0->unk3C++;
    struct func_80243290_Args s;

    if (v == 0x33) {
        func_8011AAF4(D_8025C5C4, 0x3CF, arg0, 0, 1, 0.0f, 66.0f, -340.0f, -15.0f, 0.0f, 65.0f, D_8025C764, 0.0f, 0.0f, 20.0f, -1, -1);
        return;
    }
    if (v == 0x66) {
        func_8011AAF4(D_8025C5FC, 0x3D4, arg0, 0, 1, 0.0f, 66.0f, -340.0f, 15.0f, 0.0f, 65.0f, D_8025C768, 0.0f, 0.0f, 20.0f, -1, -1);
        return;
    }
    if (v == 0x99) {
        func_8011AAF4(D_8025C634, 0x3D9, arg0, 0, 1, 0.0f, 85.0f, -346.0f, 4.0f, 0.0f, 66.0f, -348.0f, -3.0f, 0.0f, 55.0f, -1, -1);
        return;
    }
    if (v == 0xB4) {
        s.a = 0x1000;
        s.b = 0x01B80031;
        s.d = 3;
        s.c = 5.0f;
        func_801C2F0C(5, &s);
        return;
    }
    if (v == 0xDA) {
        s.a = 0x1000;
        s.b = 0x03480025;
        s.c = 4.0f;
        func_801C2F0C(4, &s);
        return;
    }
    if (v == 0x116) {
        s.a = 0x1100;
        s.b = 0x01B8001B;
        s.d = 0xA;
        s.c = 2.0f;
        func_801C2F0C(5, &s);
        (*(struct func_80243290_Obj **)((u8 *)&D_801BBBF0 + 0xDC))->unk2C &= ~0x40;
        (*(struct func_80243290_Obj **)((u8 *)&D_801BBBF0 + 0xDC))->unk44 = 0.0f;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80243588);
    }
}
