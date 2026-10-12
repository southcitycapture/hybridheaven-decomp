#include "context.h"

extern s32 func_801517CC(s32);
extern void func_801512CC(s32, s32, s32, s32);
extern void func_80151430(s32, s32);
extern void func_8015115C(s32, void *);
extern void func_8024C3D8();
extern s32 D_8025A2D4;
extern u8 D_80253968[];

typedef struct func_8024C350_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024C350_Struct;

void func_8024C350(func_8024C350_Struct *arg0, s32 arg1) {
    if (func_801517CC(D_8025A2D4) != 0) {
        func_801512CC(D_8025A2D4, 0x42DF999A, 0xC3020000, 0xC3554CCD);
        func_80151430(D_8025A2D4, 0x1000);
        func_8015115C(D_8025A2D4, D_80253968);
        arg0->unk90 = 0;
        func_800058DC(arg0, &func_8024C3D8);
    }
}
