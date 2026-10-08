#include "context.h"

typedef struct func_801280D4_StructQ {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x23];
    u8 unk4B;
} func_801280D4_StructQ;

typedef struct func_801280D4_StructP {
    u8 pad0[0x30];
    func_801280D4_StructQ *unk30;
} func_801280D4_StructP;

typedef struct func_801280D4_StructS {
    u8 pad0[0x30];
    void *unk30;
    u8 pad1[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_801280D4_StructS;

typedef struct func_801280D4_StructR {
    u8 pad0[0x30];
    func_801280D4_StructS *unk30;
} func_801280D4_StructR;

typedef struct func_801280D4_Arg0 {
    u8 pad0[0x24];
    func_801280D4_StructP *unk24;
    u8 pad1[0x14];
    u16 unk3C;
} func_801280D4_Arg0;

extern s8 func_8012C6B4(s32);
extern void func_80128208(void);
extern u8 D_8017B4F8[];

void func_801280D4(func_801280D4_Arg0 *arg0, func_801280D4_StructR **arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_8012C89C(arg0, 0, 3, 2);
        func_8012D814(arg0, 1, 4, 0x3F800000, 2);
        arg0->unk24->unk30->unk24 = 0x60300;
        (*arg1)->unk30->unk30 = D_8017B4F8;
        arg0->unk24->unk30->unk4B = 0xFF;
        (*arg1)->unk30->unk48 = func_8012C6B4(0x1F) + 0xE0;
        (*arg1)->unk30->unk49 = func_8012C6B4(0x1F) + 0xE0;
        (*arg1)->unk30->unk4A = func_8012C6B4(0x1F);
        (*arg1)->unk30->unk4C = func_8012C6B4(0x1F) + 0xE0;
        (*arg1)->unk30->unk4D = func_8012C6B4(0x1F);
        (*arg1)->unk30->unk4E = func_8012C6B4(0x1F);
        func_800058DC(arg0, func_80128208);
    }
}
