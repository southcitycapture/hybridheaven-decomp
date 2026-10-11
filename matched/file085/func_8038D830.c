#include "context.h"
void func_8038D744(struct func_8038D744_Struct *arg0, struct func_8038D744_Struct *arg1, struct func_8038D744_Struct *arg2);

struct func_8038D830_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern void func_800058DC(void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_8038D8A8(void);

void func_8038D830(struct func_8038D830_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

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
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    func_8038D744(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038D8A8);
}
