#include "common.h"

typedef struct func_80358B50_Struct {
    u8 pad[0x30];
    u8 unk30;
} func_80358B50_Struct;

typedef struct func_80358B50_StructArg {
    u8 pad[0x6C];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
} func_80358B50_StructArg;

void func_800058DC(void *, void *);
void func_80020718(s32);
void func_801CE330(void *, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern f32 D_80389ED0;
extern func_80358B50_Struct *D_8038CC10;
void func_80358C2C(void);

void func_80358B50(func_80358B50_StructArg *arg0, s32 arg1) {
    s32 var_v0;

    if (D_8038CC10->unk30 == 0x21) {
        var_v0 = 0;
    } else {
        var_v0 = 0x60;
    }
    func_801CE330(arg0, 2, arg0->unk6C, arg0->unk70, arg0->unk74, 0xFF, var_v0, 0, 0xFF, 0xFF, var_v0, 0, 0, 0x1E, 0x5A, D_80389ED0, 9);
    func_80020718(0x10A);
    *(s16 *)((u8 *)D_8038CC10 + 0x4C) = 1;
    func_800058DC(arg0, func_80358C2C);
}
