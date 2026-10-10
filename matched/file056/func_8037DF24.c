#include "context.h"

typedef struct func_8037DF24_Struct {
    u8 pad0[0x10];
    struct func_8037DF24_Struct *unk10;
    u8 pad1[0x83];
    s8 unk97;
} func_8037DF24_Struct;

extern void func_80145310(void *, s32, s32);
extern s32 D_8038A9B0;
extern s32 D_8038A9B4;

void func_8037DF24(func_8037DF24_Struct *arg0) {
    s8 var_s2;
    func_8037DF24_Struct *var_s0;
    func_8037DF24_Struct *var_s1;

    var_s0 = (func_8037DF24_Struct *)D_8038A9B0;
    var_s1 = (func_8037DF24_Struct *)D_8038A9B4;
    var_s2 = 0;
    do {
        if (var_s2 == arg0->unk97) {
            func_80145310(var_s0, 0x10, 0x11);
            func_80145310(var_s1, 1, 0);
        } else {
            func_80145310(var_s0, 2, 0);
            func_80145310(var_s1, 2, 0);
        }
        var_s2 += 1;
        var_s0 = var_s0->unk10;
        var_s1 = var_s1->unk10;
    } while (var_s2 < 4);
}
