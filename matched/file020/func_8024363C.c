#include "context.h"
struct func_802436C0_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};
void func_802436C0(struct func_802436C0_Struct *arg0, s32 arg1);

extern s32 D_80246C70;
extern u8 D_80244430[];
extern void func_8015115C(s32, void *);
extern void func_800058DC(void *, void *);
extern s32 func_801517CC(s32);
extern void func_801512CC(s32, s32, f32, s32);
extern void func_80151430(s32, s32);

void func_8024363C(void *arg0, s32 arg1) {
    if (func_801517CC(D_80246C70) != 0) {
        func_801512CC(D_80246C70, 0xC3A18CCD, 0.0, 0x43F2199A);
        func_80151430(D_80246C70, 0xD55);
        func_8015115C(D_80246C70, D_80244430);
        func_800058DC(arg0, &func_802436C0);
    }
}
