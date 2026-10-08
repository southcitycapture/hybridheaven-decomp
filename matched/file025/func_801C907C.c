#include "context.h"

struct func_801C907C_Inner {
    u8 pad[0x30];
    s32 unk30;
};

struct func_801C907C_Outer {
    u8 pad[0x30];
    struct func_801C907C_Inner *unk30;
};

extern s32 D_801DA788;
extern s32 D_801D94A8;
extern s32 D_801D9528;
extern s32 D_801D95A8;
void func_80005E44(s32 arg0, s32 *arg1);
void func_80006214(s32 arg0);
s32 func_80001060(void);
s32 func_801302CC(void);
void func_800058DC(s32 arg0, void (*arg1)(void));
void func_801C9140(void);

void func_801C907C(s32 arg0, struct func_801C907C_Outer **arg1) {
    func_80005E44(arg0, &D_801DA788);
    func_80006214(arg0);
    if (func_80001060() != 0) {
        if (func_801302CC() != 0) {
            (*arg1)->unk30->unk30 = (s32) &D_801D95A8 | 0x40000000;
        } else {
            (*arg1)->unk30->unk30 = (s32) &D_801D9528 | 0x40000000;
        }
    } else {
        (*arg1)->unk30->unk30 = (s32) &D_801D94A8 | 0x40000000;
    }
    func_800058DC(arg0, func_801C9140);
}
