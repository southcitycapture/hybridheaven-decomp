#include "common.h"

struct func_8038D6DC_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x88];
    s16 unk98;
};

void func_800058DC(void *, void *);
void func_80229500(void *, void *, void *);
void func_8038D5F8(void *, void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8038D76C[];

void func_8038D6DC(struct func_8038D6DC_Struct *arg0, void *arg1) {
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
    func_8038D5F8(arg0, var_a1, var_a2);
    arg0->unk98 = 5;
    func_800058DC(arg0, func_8038D76C);
}
