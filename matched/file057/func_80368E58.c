#include "context.h"

typedef struct func_80368E58_S16 { s32 w[4]; } func_80368E58_S16;
typedef struct func_80368E58_Struct { s32 a; s32 b; s32 c; } func_80368E58_Struct;
typedef struct func_80368E58_StructV { s32 pad0; u8 pad4[0x2C]; u32 pad30:9; u32 f:2; u32 g:2; u32 rest:19; } func_80368E58_StructV;
typedef struct func_80368E58_Obj { u8 pad[0x12]; s16 unk12; } func_80368E58_Obj;
extern func_80368E58_Struct D_80387258;
extern func_80368E58_S16 D_80387264;
extern void func_80224E00(s32, s16, s16);
extern void func_802256E4(void *, s32, s32);
extern void func_8013A28C(s32, func_80368E58_Struct);
extern void func_8036265C();
extern s32 D_801BBCCC;
extern struct func_80369094_Struct D_801BC03C;
extern struct func_80369094_Struct D_801BC3D8;
extern void func_800058DC(s32, void *);
void func_803690F8(s32 arg0, s32 arg1);

void func_80368E58(arg0, arg1, arg2, arg3)
s32 arg0;
s32 arg1;
s16 arg2;
u8 arg3;
{
    func_80368E58_Struct *sp54;
    func_80368E58_StructV *v;
    s32 pad;
    func_80368E58_Struct sp40;
    func_80368E58_S16 sp30;
    s32 pad2;
    s16 a1;

    sp54 = (func_80368E58_Struct *)((func_80367C30_Struct *)arg0)->unk5C;
    pad = D_801BBCCC;
    if (arg0 == pad) {
        v = (func_80368E58_StructV *)&D_801BC03C;
    } else {
        v = (func_80368E58_StructV *)&D_801BC3D8;
    }
    sp40 = D_80387258;
    sp30 = D_80387264;
    if (v->f == 3) {
        a1 = -arg2;
    } else {
        a1 = arg2;
    }
    (*(func_80368E58_Obj **)((u8 *)*(s32 **)arg1 + 0x2C))->unk12 += a1;
    (*(func_80368E58_Obj **)((u8 *)*(s32 **)arg1 + 0x2C))->unk12 &= 0x1FFF;
    func_80224E00(arg0, a1, arg2);
    v->g = arg3;
    if (v->g == 0) {
        func_802256E4(&sp40, arg0, 0);
    } else {
        *(s32 *)&sp40 = sp30.w[v->g];
        if (v->f == 3) {
            ((u16 *)&sp40)[3] ^= 0x10;
        }
    }
    *(func_80368E58_Struct *)((u8 *)sp54 + 0x1C) = sp40;
    func_8013A28C(arg1, *(func_80368E58_Struct *)((u8 *)sp54 + 0x1C));
    func_80010550((void *)arg1, (s32)sp54);
    if (v->g == 0) {
        func_800058DC(arg0, func_8036265C);
        return;
    }
    v->f = 0;
    func_800058DC(arg0, func_803690F8);
}
