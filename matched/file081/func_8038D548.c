#include "context.h"

struct func_8038D548_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern s32 D_801BBCCC;
struct func_8038D5C0_StructObj;
void func_8038D5C0(struct func_8038D5C0_StructObj *arg0, void *arg1);

void func_8038D548(struct func_8038D548_Struct *arg0, s32 arg1) {
    void *var_a1;
    void *var_a2;
    extern void func_8038D45C();

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
    func_8038D45C(arg0, var_a1, var_a2);
    func_800058DC((s32)arg0, (void *)func_8038D5C0);
}
