#include "context.h"

typedef struct func_80251750_StructA {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_80251750_StructA;

typedef struct func_80251750_StructB {
    u8 pad[0x22];
    u8 unk22;
} func_80251750_StructB;

typedef struct func_80251750_StructC {
    u8 pad[0x4C];
    u8 unk4C;
} func_80251750_StructC;

typedef struct func_80251750_StructD {
    u8 pad[0x30];
    func_80251750_StructC *unk30;
} func_80251750_StructD;

typedef struct func_80251750_StructE {
    u8 pad[0x10];
    func_80251750_StructD *unk10;
    func_80251750_StructB *unk14;
} func_80251750_StructE;

extern void func_8012C89C(void *, s32, s32, u16);
extern u16 D_80259488[];

void func_80251750(func_80251750_StructA *arg0, func_80251750_StructE *arg1) {
    s32 temp_hi;
    func_80251750_StructC *temp_v0;

    func_8012C89C(arg0, 5, 0x302, D_80259488[(s32) ((s32) arg0->unk90 / 15) % 5]);
    temp_hi = (s32) arg0->unk90 % 15;
    if (temp_hi == 0) {
        arg1->unk14->unk22 = 1;
    } else if (temp_hi == 1) {
        arg1->unk14->unk22 = 0;
    }
    temp_v0 = arg1->unk10->unk30;
    temp_v0->unk4C = (u8) (temp_v0->unk4C + 2);
    arg0->unk90 = (u16) (arg0->unk90 + 1);
    arg0->unk92 = (u16) (arg0->unk92 - 1);
}
