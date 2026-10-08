#include "common.h"

typedef struct func_80371994_Struct {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_80371994_Struct;

extern s32 func_801CE330(f32 a0, s32 a1, f32 a2, f32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, f32 a15, s32 a16);
extern void func_800058DC(void *a0, void *a1);
extern f32 D_8038B410;
extern void func_8037118C(void);

void func_80371994(func_80371994_Struct *arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fa0;

    temp_fv0 = arg0->unk6C;
    temp_fv1 = arg0->unk70;
    temp_fa0 = arg0->unk74;
    func_801CE330(temp_fa0, 0x33, temp_fv0, temp_fv1, temp_fa0, 0xFF, 0xFF, 0, 0xFF, 0x1E, 0x90, 0, 0x80, 1, 0x14, D_8038B410, 2);
    func_800058DC(arg0, func_8037118C);
}
