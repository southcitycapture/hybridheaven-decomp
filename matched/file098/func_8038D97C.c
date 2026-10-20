#include "context.h"

typedef struct func_8038D97C_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038D97C_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_8038DA0C();
extern s32 func_80229500();
extern s32 func_8038D800(func_8038D800_StructA *arg0, func_8038D800_StructB *arg1, func_8038D800_StructC *arg2);
extern void func_800058DC(void *a, void *b);

void func_8038D97C(func_8038D97C_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = &D_801BC03C;
    } else {
        var_a1 = &D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = &D_801BC3D8;
    } else {
        var_a2 = &D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    arg0->unkA0 = 99;
    func_8038D800(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038DA0C);
}
