#include "context.h"

struct func_801D85D0_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8 pad0C[4];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    u8 pad1C[0xC];
    f32 unk28;
};
extern f32 D_801DD660;
u16 func_8001EF38(f32, f32);

void func_801D85D0(u16 *arg0, u16 *arg1, u16 *arg2, f32 arg3, struct func_801D85D0_Struct *arg4) {
    *arg1 = func_8001EF38(-arg4->unk8, arg3);
    if (arg3 < D_801DD660) {
        if ((arg3 > 0.0f) || ((arg3 == 0.0f) && (*arg0 & 0x200))) {
            *arg0 = 0;
            *arg2 = func_8001EF38(-arg4->unk10, arg4->unk14);
            return;
        }
        *arg0 = 0x200;
        *arg2 = func_8001EF38(arg4->unk10, -arg4->unk14);
        return;
    }
    *arg0 = func_8001EF38(arg4->unk18 / arg3, arg4->unk28 / arg3);
    *arg2 = func_8001EF38(arg4->unk4 / arg3, arg4->unk0 / arg3);
}
