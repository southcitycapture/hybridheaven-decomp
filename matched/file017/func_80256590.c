#include "common.h"

typedef struct func_80256590_StructB {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x3F];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256590_StructB;

typedef struct func_80256590_StructA {
    u8 pad0[0x30];
    func_80256590_StructB *unk30;
} func_80256590_StructA;

s32 func_80133A24(s32);
void func_80005700(s32, void **);
extern u8 *D_8025DE20;
extern u8 D_801BBBF0[];

void func_80256590(s32 arg0, void **arg1) {
    (*(func_80256590_StructA **)arg1)->unk30->unk8 = *(f32 *)(D_8025DE20 + 0x9C) + 43.0f;
    (*(func_80256590_StructA **)arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*(func_80256590_StructA **)arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*(func_80256590_StructA **)arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    if (func_80133A24(0x13A) != 0) {
        (*(func_80256590_StructA **)arg1)->unk30->unk4B -= 2;
        if ((*(func_80256590_StructA **)arg1)->unk30->unk4B < 2) {
            func_80005700(arg0, arg1);
        }
    }
}
