#include "context.h"

extern s32 D_801BBCCC;
extern u8 func_80386420[];
extern void func_80011198(s32 arg0, void *arg1);
extern void func_80223260();
void func_8022321C(s32 arg0, s32 arg1);

struct func_8022310C_Var {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8022310C_Obj {
    u8 pad0[0x7C];
    void *unk7C;
    u16 unk80;
};

void func_8022310C(s32 arg0, s32 arg1) {
    struct func_8022310C_Var *var_v1;
    struct func_8022310C_Obj *sp18;
    u32 temp_v0;

    if (arg0 == D_801BBCCC) {
        var_v1 = (struct func_8022310C_Var *) &D_801BC03C;
    } else {
        var_v1 = (struct func_8022310C_Var *) &D_801BC3D8;
    }
    sp18 = (struct func_8022310C_Obj *) ((struct func_8021F9C8_Actor *) arg0)->unk5C;
    func_80011198(arg1, sp18);
    if (((u32) (var_v1->unk30 << 0xB) >> 0x1E) != 0) {
        func_802237B0(arg0, 1);
        if ((u32) (var_v1->unk30 << 0xB) >> 0x1E == 2) {
            sp18->unk7C = (void *) (func_80386420 + 0x60);
        } else if ((u32) (var_v1->unk30 << 0xB) >> 0x1E == 3) {
            sp18->unk7C = (void *) (func_80386420 + 0x50);
        } else {
            sp18->unk7C = (void *) (func_80386420 + 0x30);
        }
        sp18->unk80 = 2;
        func_800058DC(arg0, (void *) func_8022321C);
        return;
    }
    func_800058DC(arg0, (void *) func_80223260);
}
