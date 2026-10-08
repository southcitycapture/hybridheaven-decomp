#include "common.h"

struct func_80242064_Struct {
    u8 pad[0x94];
    s16 unk94;
};

extern s32 func_800178E8();
extern void func_80017990(void *);
extern void func_80020744(s32);
extern void func_800058DC(void *, void *);
extern void func_802420C4();
extern s16 D_801BBD84;
extern u8 D_802458E0[];

void func_80242064(struct func_80242064_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_80017990(D_802458E0);
        func_80020744(0x3DF);
        D_801BBD84 = 1;
        arg0->unk94 = 0xF;
        func_800058DC(arg0, func_802420C4);
    }
}
