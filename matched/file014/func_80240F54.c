#include "context.h"
extern void func_800058DC(void *, void *);
extern s32 func_80126CC0(void *, void *);
extern void func_8012C89C(void *, s32, s32, s32);
void func_8024101C(s32 arg0, s32 arg1);

extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_80126EAC(void);
extern u8 D_80164F40[];
extern f32 D_8024A33C;
extern f32 D_8024A340;

void func_80240F54(func_80240D74_StructA *arg0, s32 arg1) {
    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        arg0->unk24->unk30->unk4 = -151.0f;
        arg0->unk24->unk30->unk8 = D_8024A33C;
        arg0->unk24->unk30->unkC = D_8024A340;
        arg0->unk24->unk30->unk12 = 0;
        func_8012C89C(arg0, 0, 0x23B, 0);
        func_800058DC(arg0, &func_8024101C);
    }
}
