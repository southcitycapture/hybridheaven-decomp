#include "context.h"

struct func_80374D3C_StructXform {
    u8 pad[0x60];
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    f32 unk78;
};

extern u8 D_8038B604[];
extern void func_80374BAC(void);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_800058DC(s32, void (*)(void));

void func_80374D3C(s32 arg0, s32 arg1) {
    struct func_80374D3C_StructXform *xf;

    xf = (struct func_80374D3C_StructXform *)D_801BCC24.unkE4;
    if (func_8011AAF4(D_8038B604, 0x214, arg0, 0, 2, 1.0f, xf->unk60, xf->unk64, xf->unk68, 1.0f, xf->unk6C, xf->unk70, xf->unk74, 1.0f, xf->unk78, 1, 0) == 0) {
        func_800058DC(arg0, func_80374BAC);
    }
}
