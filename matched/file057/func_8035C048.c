#include "context.h"
typedef struct func_8035C11C_Inner {
    u8 pad0[0x7C];
    void *unk7C;
    u16 unk80;
    u16 unk82;
} func_8035C11C_Inner;
typedef struct func_8035C11C_Obj {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    func_8035C11C_Inner *unk5C;
} func_8035C11C_Obj;
void func_8035C11C(func_8035C11C_Obj *arg0, s32 arg1);
extern s32 func_80224AC4();

typedef struct func_8035C048_StructInner {
    u8 pad[0x22];
    u16 unk22;
} func_8035C048_StructInner;

typedef struct func_8035C048_StructArg {
    u8 pad[0x5C];
    func_8035C048_StructInner *unk5C;
} func_8035C048_StructArg;

typedef struct func_8035C048_StructFlags {
    u8 pad[0x30];
    u8 high30 : 1;
    u8 rest30 : 6;
    u8 low30 : 1;
    u8 high31 : 1;
    u8 rest31 : 4;
    u8 low31 : 3;
} func_8035C048_StructFlags;

void func_8035C048(func_8035C048_StructArg *arg0, void *arg1) {
    func_8035C048_StructInner *inner;
    func_8035C048_StructFlags *flags;

    inner = arg0->unk5C;
    if (arg0 == (void *)D_801BBCCC) {
        flags = (func_8035C048_StructFlags *)D_801BC03C;
    } else {
        flags = (func_8035C048_StructFlags *)D_801BC3D8;
    }
    func_80224AC4(arg0, 0);
    D_801BCC25 = 0;
    flags->low31 = 0;
    flags->high30 = 1;
    flags->low30 = 1;
    flags->high31 = 1;
    D_8038CC10 = NULL;
    D_8038CC14 = 0;
    {
        extern void func_80011198();
        func_80011198(arg1, inner);
    }
    if (inner->unk22 & 1) {
        func_800113D0(arg1, &inner->unk22);
    }
    func_800058DC(arg0, (void *)func_8035C11C);
}
