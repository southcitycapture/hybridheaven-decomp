#include "context.h"
typedef struct func_801F63E0_Struct2 { u8 pad0[4]; s32 unk4; u8 pad1[4]; s32 unkC; } func_801F63E0_Struct2;
extern s32 func_801F5630();
extern func_801F63E0_Struct3 D_8021AFF8;
extern void func_801F474C();
extern void func_801F74FC();
extern s32 D_8012CE9C(s32, s32, func_801F63E0_Struct3, s32);

void func_801F63E0(struct func_801F6008_Struct *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C;
    func_801F63E0_Struct2 *v;

    sp2C = arg0->unk5C;
    if (func_801F5630() && func_801F55EC((void *)arg0)) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F74FC);
        return;
    }
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((void *)arg0, (f32)arg0->unkAE)) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((void *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    if (func_801F55EC((void *)arg0)) {
        if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFF8, 10) == 0) {
            v = (func_801F63E0_Struct2 *)D_801BBCD0->unk2C;
            func_801F474C(arg0, *(s16 *)((u8 *)arg0 + 0x90), v->unk4, v->unkC);
            func_80010550(arg1, sp2C);
        }
    }
}
