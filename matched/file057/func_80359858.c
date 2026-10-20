#include "context.h"

extern void func_801CBE90(void *, void *);

typedef struct func_80359858_StructArg {
    u8 pad[0x5C];
    u8 *unk5C;
} func_80359858_StructArg;

typedef struct func_80359858_StructFlags {
    u8 pad[0x30];
    u8 top : 1;
    u8 mid : 6;
    u8 bottom : 1;
    u8 high : 1;
    u8 middle : 4;
    u8 low : 3;
    u8 pad32[0x324 - 0x32];
    void *unk324;
} func_80359858_StructFlags;

typedef struct func_80359858_StructWord {
    u32 word;
} func_80359858_StructWord;

void func_80359858(func_80359858_StructArg *arg0, void *arg1) {
    u8 *sp24;
    func_80359858_StructFlags *var_v0;

    sp24 = arg0->unk5C;
    if (arg0 == (void *)D_801BBCCC) {
        var_v0 = (func_80359858_StructFlags *)D_801BC03C;
    } else {
        var_v0 = (func_80359858_StructFlags *)D_801BC3D8;
    }
    *(func_80359858_StructWord *)((u8 *)var_v0 + 0x30) = *(func_80359858_StructWord *)((u8 *)var_v0 + 0x34);
    *(func_80359858_StructWord *)((u8 *)var_v0 + 0x38) = *(func_80359858_StructWord *)((u8 *)var_v0 + 0x3C);
    var_v0->low = 0;
    var_v0->top = 0;
    var_v0->bottom = 0;
    var_v0->high = 0;
    func_80359698(arg0, arg1);
    func_801CBE90(arg0, arg1);
    func_800113D0(arg1, sp24 + 0x22);
    func_800058DC(arg0, var_v0->unk324);
}
