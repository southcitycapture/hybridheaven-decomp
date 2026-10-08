#include "common.h"

extern void func_800058DC(void *a0, void *a1);
extern void func_80005E44(void *a0, void *a1);
extern void func_80006214(void *a0);
extern u8 D_80164F40[];
extern u8 D_8017B768[];
extern u8 D_801815F0[];
extern void func_80147D48(void);

struct func_80147C7C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct func_80147C7C_Arg0 {
    u8 pad0[0x90];
    s32 unk90;
};

struct func_80147C7C_Node {
    u8 pad0[0x30];
    void *unk30;
};

struct func_80147C7C_Arg1 {
    struct func_80147C7C_Node *unk0;
    struct func_80147C7C_Node *unk4;
};

void func_80147C7C(struct func_80147C7C_Arg0 *arg0, struct func_80147C7C_Arg1 *arg1) {
    struct func_80147C7C_Struct sp20;

    sp20 = *(struct func_80147C7C_Struct *) D_80164F40;
    sp20.unk4 = arg0->unk90 + 1;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    ((struct func_80147C7C_Node *) arg1->unk0->unk30)->unk30 = D_801815F0;
    sp20.unk4 = arg0->unk90 - 1;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    ((struct func_80147C7C_Node *) arg1->unk4->unk30)->unk30 = D_8017B768;
    func_800058DC(arg0, (void *) func_80147D48);
}
