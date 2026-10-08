#include "common.h"

struct func_803833A8_Struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad1[0xA0];
    s16 unkB0;
};

extern void func_80005670(void *, void *, void *);
extern void func_80005700(void *);
extern u16 D_80089474[];
extern u8 D_80389B50[];

void func_803833A8(struct func_803833A8_Struct *arg0, s32 arg1) {
    if ((arg0->unkB0-- == 0) || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        func_80005670(arg0->unkC, D_80389B50, arg0);
        func_80005700(arg0);
    }
}
