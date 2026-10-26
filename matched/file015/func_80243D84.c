#include "context.h"
extern f32 D_80258744;
extern f32 D_80258748;
extern f32 D_8025874C;
extern f32 D_80258750;
extern s32 func_801C3044(void);
extern void func_801C2F0C(s32, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_80243D84_StructG {
    u8 pad0[0x1E8];
    f32 f1E8;
    f32 f1EC;
    f32 f1F0;
    f32 f1F4;
    f32 f1F8;
    f32 f1FC;
} func_80243D84_StructG;
#define G ((func_80243D84_StructG *)D_801BBBF0)

void func_80243D84(func_80243CF8_Struct *arg0, s32 arg1) {
    func_80243CF8_StructLocal sp;
    s32 t;

    if (func_801C3044() != 0) {
        return;
    }
    t = arg0->unk3C++;
    if (t == 0) goto L0;
    if (t == 1) goto L1;
    if (t == 2) goto L2;
    if (t != 3) goto end;
    goto L3;
L0:
    sp.sp20 = 0x1000;
    sp.sp24 = 0x04100044;
    sp.sp28 = 6.0f;
    func_801C2F0C(4, &sp.sp20);
    return;
L1:
    sp.sp20 = 0x1000;
    sp.sp24 = 0x04100026;
    sp.sp2C = 0xA;
    sp.sp28 = 1.0f;
    func_801C2F0C(3, &sp.sp20);
    return;
L2:
    sp.sp20 = 0x1000;
    sp.sp24 = 0x04100026;
    sp.sp28 = 6.0f;
    func_801C2F0C(4, &sp.sp20);
    return;
L3:
    G->f1E8 = -64.5f;
    G->f1EC = D_80258744;
    G->f1F0 = D_80258748;
    G->f1F4 = D_8025874C;
    G->f1F8 = 15.5f;
    G->f1FC = D_80258750;
    func_8011AAF4((void *)"/hdisk1/u/nu64/rz011_usa/main/game/source/a03_s03elevatordemo.c", 0x26D, arg0, 0, 1, 0.0f, G->f1E8, G->f1EC, G->f1F0, 0.0f, G->f1F4, G->f1F8, G->f1FC, 0.0f, 35.0f, -1, -1);
    func_80133980(0x73);
    func_800058DC(arg0, (void *)func_80243F64);
end:;
}
#undef G
