#include "context.h"

typedef struct func_8024E2BC_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024E2BC_Struct;

extern s32 D_8025A2E4;
extern u8 D_80254250[];
extern void func_8024E324();
extern void func_801514B0(s32, s32);
extern s32 func_80151790(s32);
extern void func_8015115C(s32, void *);

void func_8024E2BC(func_8024E2BC_Struct *arg0, s32 arg1) {
    func_801514B0(D_8025A2E4, 0x71);
    if (func_80151790(D_8025A2E4) == 0) {
        func_8015115C(D_8025A2E4, D_80254250);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024E324);
    }
}
