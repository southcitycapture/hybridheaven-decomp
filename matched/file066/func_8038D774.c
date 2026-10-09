#include "context.h"

typedef struct func_8038D774_Struct {
    u8 pad0[0x0C];
    s32 unkC;
    u8 pad10[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
    u8 pad94[0xA8 - 0x94];
    u8 unkA8;
} func_8038D774_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_8038D7F0();
extern void func_800058DC(void *, void *);
extern void func_8038D664(void *, void *, void *);

void func_8038D774(func_8038D774_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

    var_a1 = (D_801BBCCC == arg0->unkC) ? D_801BC03C : D_801BC3D8;
    var_a2 = (D_801BBCCC == arg0->unkC) ? D_801BC3D8 : D_801BC03C;
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    arg0->unkA8 = 0;
    func_8038D664(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7F0);
}
