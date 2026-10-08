#include "context.h"

struct func_802410C8_Struct {
    u8 pad[0x90];
    u8 unk90;
};

extern s32 func_800178E8(void);
extern void func_800179B0(void *);
extern void func_8015122C(s32, void *, s32);
extern void func_80241128(void);
extern u8 D_802468D0[];
extern u8 D_80246A30[];
extern s32 D_80248804;

void func_802410C8(struct func_802410C8_Struct *arg0, void *arg1) {
    if (func_800178E8() != 0) {
        func_800179B0(D_80246A30);
        func_8015122C(D_80248804, D_802468D0, 5);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80241128);
    }
}
