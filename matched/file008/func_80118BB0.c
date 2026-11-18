#include "context.h"

extern u8 D_801897E4[];
extern u8 D_80189854[];
extern u8 D_801898CC[];

typedef struct func_80118BB0_Struct {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad20[0x30 - 0x20];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50;
} func_80118BB0_Struct;

void func_80118BB0(func_8011913C_Struct0 *arg0, s32 arg1)
{
    f32 sp9C, sp98, sp94, sp90, sp8C, sp88, sp84, sp80, a, sp78, sp74, sp70;
    s16 sp6E, sp6C;
    f32 sp68;
    func_80118BB0_Struct *c;

    arg0->unk40 = 0.0f;
    arg0->unk44 = 0.0f;
    arg0->unk48 = 0.0f;
    if (G->unkEF0 & 0x1000) {
        func_8011AAF4(D_801897E4, 0x235, (s32)arg0, 2, 1, 0.0f, D_801BBB9C, D_801BBBA0, D_801BBBA4, 0.0f, D_801BBBA8, D_801BBBAC, D_801BBBB0, 0.0f, ((func_80118BB0_Struct *)G->unkE8->unk2C)->unk1C, -1, -1);
        func_800058DC(arg0, func_80379970);
        return;
    }
    if (!(G->unk9E & 1)) goto X;
    if (((func_80117610_Struct *)&D_801BBBF0)->unk18E != 0) goto X;
    if (!(arg0->unk30 & 4)) goto X;
    goto main;
X:
    func_8011AAF4(D_80189854, 0x244, (s32)arg0, 2, 1, 0.0f, D_801BBB9C, D_801BBBA0, D_801BBBA4, 0.0f, D_801BBBA8, D_801BBBAC, D_801BBBB0, 0.0f, ((func_80118BB0_Struct *)G->unkE8->unk2C)->unk1C, -1, -1);
    func_800058DC(arg0, func_801E5010);
    return;
    main: {
    if (arg1) {}
    func_80117F64((func_80117F64_Struct0 *)arg0, arg1);
    func_80118038(D_801BBB90, D_801BBB92);
    sp84 = (sp68 = func_8001EB64(PITCH), func_8001EB64(YAW)) * (D_801BBBB4 * sp68) + D_801BBB9C;
    sp80 = (func_8001EAD0(PITCH) * D_801BBBB4) + D_801BBBA0;
    a = (sp68 = func_8001EB64(PITCH), func_8001EAD0(YAW)) * (D_801BBBB4 * sp68) + D_801BBBA4;
    c = (func_80118BB0_Struct *)G->unkE8->unk2C;
    sp90 = (f32)((f64)c->unk3C + ((f64)(sp84 - c->unk3C) * 0.25));
    sp88 = (f32)((f64)c->unk44 + ((f64)(a - c->unk44) * 0.25));
    sp78 = (f32)(((f64)(sp68 = func_8001EB64(PITCH), func_8001EB64(YAW)) * (8.5 * (f64)sp68)) + (f64)D_801BBB9C);
    sp74 = (f32)(((f64)func_8001EAD0(PITCH) * 8.5) + (f64)D_801BBBA0);
    sp70 = (f32)(((f64)(sp68 = func_8001EB64(PITCH), func_8001EAD0(YAW)) * (8.5 * (f64)sp68)) + (f64)D_801BBBA4);
    if (func_801084C4(D_801BBB9C, D_801BBBA0, D_801BBBA4, sp78, sp74, sp70) != 0) {
        sp9C = (G->unk380 - sp78) + D_801BBB9C;
        sp98 = (G->unk384 - sp74) + D_801BBBA0;
        sp94 = (G->unk388 - sp70) + D_801BBBA4;
        if (0) {
            func_800058DC();
        }
    } else {
        sp9C = D_801BBB9C;
        sp98 = D_801BBBA0;
        sp94 = D_801BBBA4;
    }
    c = (func_80118BB0_Struct *)G->unkE8->unk2C;
    func_80117650(c->unk30, c->unk34, c->unk38, sp90, sp80, sp88);
    func_8011AAF4(D_801898CC, 0x26D, (s32)arg0, 0, 1, 0.0f, sp9C, sp98, sp94, 0.0f, sp90, sp80, sp88, 0.0f, ((func_80118BB0_Struct *)G->unkE8->unk2C)->unk1C, -1, -1);
    func_80119F9C(&sp6E, &sp6C);
    c = (func_80118BB0_Struct *)G->unkE8->unk2C;
    func_8011A148(sp6E, sp6C, *(s16 *)D_801BBB94, &c->unk48, &c->unk4C, &c->unk50);
    }
}
