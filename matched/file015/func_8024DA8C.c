#include "common.h"

struct func_8024DA8C_Struct {
    u8 pad[0x90];
    s16 unk90;
};

extern void func_800058DC(void *, void *);
extern void func_801339D0(s32);
extern s32 func_80133A24(s32);
extern void func_801511C4(s32, void *, s32);
extern void func_801512CC(s32, s32, s32, s32);
extern void func_8024DB10(void);
extern u8 D_80254214[];
extern s32 D_8025A2E4;

void func_8024DA8C(struct func_8024DA8C_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_801511C4(D_8025A2E4, D_80254214, 0x14);
        func_801512CC(D_8025A2E4, 0x4413B333, 0xC3020000, 0x42DD6666);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024DB10);
    }
}
