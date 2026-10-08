#include "context.h"

struct func_80241524_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_801C3044(void);
extern void func_8012C89C(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_8001E978(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern void func_80020718(s32 arg0);
extern void func_800058DC(void *arg0, void *arg1);
extern void func_802415B4(void);
extern s16 D_80089354;

void func_80241524(struct func_80241524_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_8012C89C(arg0, 0, 0x292, 3);
        D_80089354 = 0;
        func_8001E978(arg0, 0, 0, 0, 0x14, 0, 1, 0);
        arg0->unk3C = 0;
        func_80020718(0x153);
        func_800058DC(arg0, func_802415B4);
    }
}
