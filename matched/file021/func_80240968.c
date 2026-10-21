#include "context.h"
extern u8 D_80256EB8[];
extern f32 D_80256F30, D_80256F34, D_80256F38, D_80256F3C, D_80256F40, D_80256F44;
extern void func_801C3B2C();
extern void func_801C3B10();
extern void func_801C2F0C(s32 arg0, s16 *arg1);
extern void D_8011AAF4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, s32 a15, s32 a16);
struct func_80240B24_Struct;
void func_80240B24(struct func_80240B24_Struct *arg0, s32 arg1);
struct func_80240E30_Struct;
extern struct func_80240E30_Struct D_801BBBF0;
struct func_80240968_Struct0 { u8 pad0[0x2C]; struct func_80240968_Struct1 *unk2C; };
struct func_80240968_Struct1 { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; };
struct func_80240968_Local {
    f32 a, b, c; s16 d; s32 e; f32 f; s16 g; s16 h;
};
struct func_80240968_Obj { u8 pad[0x3C]; u16 unk3C; };

void func_80240968(struct func_80240968_Obj *arg0, s32 arg1) {
    u8 *b;

    if (arg0->unk3C == 1) {
        D_8011AAF4(D_80256EB8, 0x99, (s32)arg0, 0, 1, 0.0f, D_80256F30, D_80256F34, D_80256F38, 0.0f, -231.0f, D_80256F3C, D_80256F40, 0.0f, 35.0f, -1, -1);
        b = (u8 *)&D_801BBBF0;
        b[0x434] = 1;
        ((struct func_80240968_Struct0 *)(*(u8 **)(b + 0xE0)))->unk2C->unk4 = -198.0f;
        ((struct func_80240968_Struct0 *)(*(u8 **)(b + 0xE0)))->unk2C->unk8 = -600.0f;
        ((struct func_80240968_Struct0 *)(*(u8 **)(b + 0xE0)))->unk2C->unkC = 478.0f;
        ((struct func_80240968_Struct0 *)(*(u8 **)(b + 0xE0)))->unk2C->unk12 = 0x1C00;
        func_801C3B2C(2);
        func_801C3B10(1);
    }
    if (arg0->unk3C++ >= 0x1E) {
        struct func_80240968_Local l;
        l.d = 0x1100;
        l.e = 0x0168003E;
        l.g = 0;
        l.h = 0x96;
        l.a = -231.0f;
        l.b = D_80256F44;
        l.c = 0.0f;
        l.f = 1.0f;
        func_801C2F0C(2, (s16 *)&l);
        func_800058DC(arg0, func_80240B24);
    }
}
