#include "context.h"
extern void func_80005700(void *);

typedef struct func_80128028_StructArg {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x5C];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
} func_80128028_StructArg;

typedef struct func_80128028_StructB {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80128028_StructB;

typedef struct func_80128028_StructA {
    u8 pad0[0x30];
    func_80128028_StructB *unk30;
} func_80128028_StructA;

void func_80128028(func_80128028_StructArg *arg0, func_80128028_StructA **arg1) {
    func_80128028_StructB *temp_v0;

    if ((arg0->unk30 & 0x20) || (temp_v0 = (*arg1)->unk30, ((s32) temp_v0->unk4B < (s32) arg0->unk93))) {
        func_80005700(arg0);
        return;
    }
    temp_v0->unk48 = (u8) (temp_v0->unk48 - arg0->unk90);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk49 = (u8) (temp_v0->unk49 - arg0->unk91);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4A = (u8) (temp_v0->unk4A - arg0->unk92);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - arg0->unk93);
}
