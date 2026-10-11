#include "context.h"

struct func_8038D6FC_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern void func_800058DC(void *, void *);
extern void func_80229500(void *, void *, void *);
extern void func_8038D5C4(void *, void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8038D784[];

void func_8038D6FC(struct func_8038D6FC_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = D_801BC3D8;
    } else {
        var_a2 = D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    func_8038D5C4(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D784);
}
