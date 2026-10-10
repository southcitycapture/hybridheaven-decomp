#include "context.h"

/* unprototyped, compatible with context.h prototype; needed in-file before the later definition */
void func_80128E0C();

extern u8 D_8017B558[];

typedef struct func_80128D1C_StructO {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x8];
    s32 unk30;
} func_80128D1C_StructO;

typedef struct func_80128D1C_StructP {
    u8 pad0[0x30];
    func_80128D1C_StructO *unk30;
} func_80128D1C_StructP;

typedef struct func_80128D1C_StructB {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80128D1C_StructB;

typedef struct func_80128D1C_StructA {
    u8 pad0[0x30];
    func_80128D1C_StructB *unk30;
} func_80128D1C_StructA;

typedef struct func_80128D1C_Arg0 {
    u8 pad0[0x24];
    func_80128D1C_StructA *unk24;
    u8 pad1[0x14];
    u16 unk3C;
    u8 pad2[0x52];
    u8 unk90;
} func_80128D1C_Arg0;

void func_80128D1C(func_80128D1C_Arg0 *arg0, func_80128D1C_StructP **arg1) {
    s32 temp;
    func_80128D1C_StructO *obj;

    temp = arg0->unk3C;
    arg0->unk3C = temp - 1;
    if (temp == 0) {
        func_8012C89C(arg0, 0, 3, 3);
        obj = (*arg1)->unk30;
        obj->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) D_8017B558 | 0x40000000;
        arg0->unk24->unk30->unk4B = 0x80;
        arg0->unk24->unk30->unk48 = 0xFF;
        arg0->unk24->unk30->unk49 = 0x50;
        arg0->unk24->unk30->unk4A = 0;
        (*arg1)->unk30->unk18 = 0.0f;
        (*arg1)->unk30->unk1C = 0.0f;
        (*arg1)->unk30->unk20 = 0.0f;
        arg0->unk90 = 0x50;
        func_800058DC(arg0, func_80128E0C);
    }
}
