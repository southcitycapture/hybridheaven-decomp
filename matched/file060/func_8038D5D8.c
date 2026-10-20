#include "context.h"

struct func_8038D5D8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_8038D660_StructA;
void func_8038D660(struct func_8038D660_StructA *arg0, s32 arg1);
extern void func_80229500();
extern s32 D_801BBCCC;

void func_8038D5D8(struct func_8038D5D8_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;
    extern void func_800058DC();

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
    func_8038D4F4((void *)arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D660);
}
