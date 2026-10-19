#include "context.h"

struct func_801E2FCC_Struct3 { u8 pad[0x4]; f32 f4; f32 f8; f32 fC; u8 pad2[0x2]; s16 s12; u8 pad3[4]; f32 f18; f32 f1C; f32 f20; u8 pad4[0xC]; void *p30; };
struct func_801E2FCC_Struct2 { u8 pad[0x2C]; struct func_801E2FCC_Struct3 *u2C; };
struct func_801E2FCC_Struct1 { struct func_801E2FCC_Struct2 *u0; struct func_801E2FCC_Struct2 *u4; };
struct func_801E2FCC_V { s32 a[4]; };
extern u8 D_8038D840[];
extern s32 D_8038D850;
extern struct func_801E2FCC_Struct1 *D_8038D854;
extern struct func_801E2FCC_V D_801E615C;
extern u8 D_8017AE98[];
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);

s32 func_801E2FCC(s32 arg0, s32 arg1) {
    struct func_801E2FCC_V sp18;
    sp18 = D_801E615C;
    func_80005E44(D_8038D850, D_8038D840);
    func_80005E44(D_8038D850, &sp18);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0x2DB, 0);
    func_8012C89C(D_8038D850, 1, 0x2DB, 1);
    D_8038D854->u0->u2C->f4 = 0.0f;
    D_8038D854->u0->u2C->f8 = 0.0f;
    D_8038D854->u0->u2C->fC = 0.0f;
    D_8038D854->u0->u2C->f18 = 1.0f;
    D_8038D854->u0->u2C->f1C = 1.0f;
    D_8038D854->u0->u2C->f20 = 1.0f;
    D_8038D854->u0->u2C->s12 = 0;
    D_8038D854->u0->u2C->p30 = D_8017AE98;
    D_8038D854->u4->u2C->f4 = 0.0f;
    D_8038D854->u4->u2C->f8 = 0.0f;
    D_8038D854->u4->u2C->fC = 0.0f;
    D_8038D854->u4->u2C->f18 = 1.0f;
    D_8038D854->u4->u2C->f1C = 1.0f;
    D_8038D854->u4->u2C->f20 = 1.0f;
    D_8038D854->u4->u2C->s12 = 0;
    D_8038D854->u4->u2C->p30 = D_8017AE98;
    return 2;
}
