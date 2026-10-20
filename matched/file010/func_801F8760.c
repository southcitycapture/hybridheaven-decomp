#include "context.h"

extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);
extern void func_80147734(f32 *, f32 *, f32 *);
extern u8 D_80218A0C[];
extern u8 func_801F8900[];

typedef struct func_801F8760_Struct {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
    u8 pad1[0x14];
    u16 unk3C;
} func_801F8760_Struct;

void func_801F8760(func_801F8760_Struct *arg0, s32 arg1) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;

    if (arg0->unk3C-- == 0) {
        func_801F4620((func_801F4620_Struct *)&sp74, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 90.0f);
        func_80130AA0(0, ((u16 *)arg0->unk24->unk2C)[9], 0, &sp74, &sp78, &sp7C);
        func_80130AA0(0, 0xFFBC, 0, &sp74, &sp78, &sp7C);
        func_801F4208((void *)arg0, (func_801F4208_Out *)&sp68);
        sp6C = D_801BBCD0->unk2C->unk8;
        func_80147734(&sp74, &sp68, &sp74);
        sp78 = sp78 + 6.0f;
        func_8011AAF4(D_80218A0C, 0x7B2, arg0, 0, 1, 3.0f, sp74, sp78, sp7C, 3.0f, sp68, sp6C - 2.0f, sp70, 0.0f, 50.0f, -1, -1);
        { extern void func_801479A8(); func_801479A8(arg0); }
        func_800058DC(arg0, (s32)func_801F8900);
    }
}
