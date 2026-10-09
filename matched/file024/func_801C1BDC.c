#include "context.h"
extern s32 D_801CC8A8;
extern void func_800058DC(s32, void *);

extern s32 D_801CFD08;
extern s16 D_801CC8D0;
extern void func_801C1040(s32, s32, s32);
extern void func_801C125C(s32);
extern void func_801C1C44(void);
extern void func_801C28E4(void);

void func_801C1BDC(s32 arg0, s32 arg1) {
    func_800058DC(D_801CC8A8, &func_801C28E4);
    func_801C1040(D_801CFD08, -1, 5);
    func_801C125C(-0x64);
    D_801CC8D0 = 0;
    func_800058DC(arg0, &func_801C1C44);
}
