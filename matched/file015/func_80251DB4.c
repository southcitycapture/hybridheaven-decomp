#include "context.h"

extern void func_80005700(void);

struct func_80251DB4_Struct_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x4B - 0x10];
    u8 unk4B;
};

struct func_80251DB4_Struct_Node {
    u8 pad[0x30];
    struct func_80251DB4_Struct_Obj *unk30;
};

struct func_80251DB4_Struct_Arg0 {
    u8 pad[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
};

void func_80251DB4(struct func_80251DB4_Struct_Arg0 *arg0, struct func_80251DB4_Struct_Node **arg1) {
    (*arg1)->unk30->unk4 = (*arg1)->unk30->unk4 + arg0->unk40;
    (*arg1)->unk30->unk8 = (*arg1)->unk30->unk8 + arg0->unk44;
    (*arg1)->unk30->unkC = (*arg1)->unk30->unkC + arg0->unk48;
    (*arg1)->unk30->unk4B--;
    if ((s32) (*arg1)->unk30->unk4B <= 0) {
        func_80005700();
    }
}
