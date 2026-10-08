#include "context.h"

typedef struct func_802438F8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802438F8_Struct;

extern void func_800058DC(void *, void *);
extern s32 func_800178E8(void);
extern s32 func_80017910(void);
extern void func_8015115C(s32, void *);
extern void func_8015122C(s32, void *, s32);
extern s32 func_80151790(s32);
extern u8 D_80244430[];
extern u8 D_8024443C[];
extern u8 D_80244448[];
extern s32 D_80246C70;
extern void func_802439B4(void);

void func_802438F8(func_802438F8_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_80151790(D_80246C70) == 0) {
        temp_v0 = arg0->unk3C;
        arg0->unk3C = temp_v0 + 1;
        if (temp_v0 == 0) {
            func_8015115C(D_80246C70, D_8024443C);
        }
    }
    if (func_80017910() != 0) {
        func_8015115C(D_80246C70, D_80244430);
        arg0->unk3C = 0;
    }
    if (func_800178E8() != 0) {
        func_8015122C(D_80246C70, D_80244448, 5);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_802439B4);
    }
}
