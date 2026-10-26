#include "common.h"
#include "common.h"
typedef struct func_80251820_Ctx { u8 pad0[0x92]; u16 unk92; } func_80251820_Ctx;
typedef struct func_80251820_Args { s32 unk0; } func_80251820_Args;
typedef struct func_80251820_Node { u8 pad0[0x22]; u8 unk22; } func_80251820_Node;
extern u8 D_801BBBF0[];
extern s32 func_80005670();
extern void func_800058DC(void *, void *);
extern f32 func_8001EAD0();
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern void func_801C2F0C(s32, void *);
void func_80256308(s32 arg0, s32 arg1);


typedef struct func_80256034_Pos { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80256034_Pos;
typedef struct func_80256034_Mid { u8 pad0[0x2C]; func_80256034_Pos *unk2C; } func_80256034_Mid;
typedef struct func_80256034_G { u8 pad0[0xE0]; func_80256034_Mid *unkE0; } func_80256034_G;
typedef struct func_80256034_Cmd { s16 a; s32 b; f32 c; s16 d; } func_80256034_Cmd;

extern f32 func_8001EB64(s16);
#define func_8001EAD0 func_8001EAD0__func_80256034
extern f32 func_8001EAD0(s16);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern u8 D_8025DB6C[];
extern u8 D_80259734[];
extern u8 D_80259748[];

void func_80256034(func_80251820_Ctx *arg0, func_80251820_Node **arg1) {
    s16 a;
    s32 i;
    f32 s;
    f32 r;
    func_80256034_Cmd cmd;
    s32 t;
    s32 padA;
    s32 padB;
    f32 v;
    f32 ang;
    f32 pad2;

    t = arg0->unk92++;
    func_8011AAF4(D_8025DB6C, 0x57F, arg0, 0, 2, 0.25f, -60.0f, 20.0f, 17.0f, 4294967296.0f, -83.0f, 10.0f, -6.0f, 0.0f, 55.0f, -1, -1);
    if (t == 8) {
        func_80005670(arg0, D_80259734);
        func_80005670(arg0, D_80259748);
    }
    (*arg1)->unk22 = 0;
    if (t == 0x72) {
        func_80133980(0x13C);
        for (i = 0; i != 0x20; i++) {
            ang = func_8012C6B4(0x2000);
            r = func_8012C6B4(0x1F4) / 100.0;
            pad2 = func_8001EAD0(a = ang), s = func_8001EB64(a);
#define func_80256034_P (((func_80256034_G *)D_801BBBF0)->unkE0->unk2C)
            v = func_8012C6B4(0x28) / 10.0 + 4.0;
            func_80380F94(pad2 * r + func_80256034_P->unk4, func_80256034_P->unk8 + 12.0f, s * r + func_80256034_P->unkC, 0.0f, v, 0.0f, 8);
#undef func_80256034_P
        }
    }
    if (t >= 0xB4) {
        cmd.a = 0x1100;
        cmd.b = 0x0348007A;
        cmd.d = 0xF;
        cmd.c = 10.0f;
        func_801C2F0C(5, &cmd);
        func_80133980(0x13D);
        func_800058DC(arg0, func_80256308);
    }
}
