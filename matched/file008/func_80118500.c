#define func_80117DA0 func_80117DA0_ctx
#include "context.h"
#undef func_80117DA0
extern s32 func_80117DA0();

typedef struct func_80118500_StructB {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad14[0x1C - 0x14];
    f32 unk1C;
    u8 pad20[0x30 - 0x20];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80118500_StructB;
typedef struct func_80118500_StructA {
    u8 pad0[0x2C];
    func_80118500_StructB *unk2C;
} func_80118500_StructA;
extern u8 D_80189650[];
extern f32 D_801BBBB8;
extern struct func_8011913C_Struct1 *D_801BBCD0;
extern void func_800058DC();
extern void func_80118768();

void func_80118500(s32 arg0, s32 arg1) {
    f32 sp8C, sp88, sp84, sp80, sp7C, sp78, sp74, sp70, sp6C, sp68, sp64, sp60;
    func_80118500_StructB *v;

    *(s16 *)D_801BBB90 = (s16)(0x800 - ((func_80118500_StructA *)D_801BBCD0)->unk2C->unk12) & 0x1FFF;
    *(s16 *)D_801BBB92 = 0;
    func_801182F4(*(s16 *)D_801BBB90, *(s16 *)D_801BBB92,&sp74, &sp70, &sp6C, &sp68, &sp64, &sp60);
    v = ((func_80118500_StructA *)D_801BBCD8)->unk2C;
    sp8C = v->unk30 + (sp74 - v->unk30) * 0.25;
    sp88 = v->unk34 + (sp70 - v->unk34) * 0.25;
    sp84 = v->unk38 + (sp6C - v->unk38) * 0.25;
    sp80 = v->unk3C + (sp68 - v->unk3C) * 0.25;
    sp7C = v->unk40 + (sp64 - v->unk40) * 0.25;
    {
        volatile f32 sp58;
        sp58 = v->unk44;
        sp78 = sp58 + (sp60 - sp58) * 0.25;
    }
    func_8011AAF4(D_80189650, 0x1AD, arg0, 0, 1, 0.0f, sp8C, sp88, sp84, 0.0f, sp80, sp7C, sp78, 0.0f, v->unk1C, -1, -1);
    if (func_80117DA0(arg0, arg1) == 0) {
        *(s16 *)D_801BBB90 = (s16)(0x800 - ((func_80118500_StructA *)D_801BBCD0)->unk2C->unk12) & 0x1FFF;
        *(s16 *)D_801BBB92 = 0;
        *(s16 *)D_801BBB98 = 0;
        D_801BBBB8 = 8.0f;
        func_800058DC(arg0, func_80118768);
    }
}
