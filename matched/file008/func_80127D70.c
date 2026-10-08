#include "common.h"

typedef struct func_80127D70_StructB {
    u8 pad0[0x24];
    s32 unk24;
} func_80127D70_StructB;

typedef struct func_80127D70_StructA {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    func_80127D70_StructB *unk30;
} func_80127D70_StructA;

typedef struct func_80127D70_StructD {
    u8 pad0[0x30];
    s32 unk30;
} func_80127D70_StructD;

typedef struct func_80127D70_StructC {
    u8 pad0[0x30];
    func_80127D70_StructD *unk30;
} func_80127D70_StructC;

typedef struct func_80127D70_StructArg {
    u8 pad0[0x24];
    func_80127D70_StructA *unk24;
    u8 pad1[0x68];
    u8 unk90;
} func_80127D70_StructArg;

extern void func_800058DC(void *, void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D814(void *, s32, s32, s32, s32);
extern s32 func_8012F41C(void *, s32, s32, s32, s32);
extern void func_80127E3C(void);

void func_80127D70(func_80127D70_StructArg *arg0, func_80127D70_StructC **arg1) {
    arg0->unk90 = 0xF8;
    func_8012C89C(arg0, 0, 3, 1);
    func_8012D814(arg0, 1, 4, 0x3F800000, 2);
    arg0->unk24->unk30->unk24 = 0x60012;
    (*arg1)->unk30->unk30 = func_8012F41C(arg0, 0xFF, 0xFF, 0xFF, 0x50) | 0x40000000 | 0x20000000;
    arg0->unk24->unk24 = 0x80000300;
    func_800058DC(arg0, func_80127E3C);
}
