#include "common.h"


struct func_80241420_Copy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct func_80241420_Obj {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_80241420_Node {
    u8 pad0[0x30];
    struct func_80241420_Obj *unk30;
};

extern void func_800058DC(s32, void *);
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012CF8C(s32, void *, s32, s32);
extern struct func_80241420_Copy D_80164F40;
extern u8 D_80248318[];
extern void func_80241534(void);

void func_80241420(s32 arg0, struct func_80241420_Node **arg1) {
    struct func_80241420_Copy sp20;

    sp20 = D_80164F40;
    sp20.unk4 = 0x80000C00;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x238, 3);
    func_8012CF8C(arg0, (u8 *) (*arg1)->unk30 + 0x40, 0x238, 4);
    (*arg1)->unk30->unk30 = (s32) D_80248318 | 0x40000000;
    (*arg1)->unk30->unk24 |= 0x4000;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    func_800058DC(arg0, func_80241534);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241420/func_80241534.s")

