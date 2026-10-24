#include "context.h"

struct func_802526DC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_802526DC_Sub {
    u8 pad[0x22];
    u8 unk22;
};

struct func_802526DC_Arg1 {
    u8 pad[0x1C];
    struct func_802526DC_Sub *unk1C;
};

extern void func_801C4058(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80133980(s32 arg0);
extern void func_800058DC(void *arg0, void *arg1);
extern s32 func_801516CC(s32 arg0);
extern void func_80151700(s32, u8, void *);
extern u8 D_8017BAD8[];
extern void func_802527C0();

void func_802526DC(struct func_802526DC_Struct *arg0, struct func_802526DC_Arg1 *arg1) {
    s32 var_s0;

    func_802538A4((func_802538A4_Struct *)arg0, (s32)arg1);
    func_801C4058(arg0, 0xBCA3D70A, 0xBE19999A, 0);
    if (arg0->unk3C++ >= 0x5A) {
        func_80133980(0x132);
        arg0->unk3C = 0;
        arg1->unk1C->unk22 = 1;
        for (var_s0 = 0; var_s0 < func_801516CC(D_8025DE10); var_s0++) {
            func_80151700(D_8025DE10, var_s0, D_8017BAD8);
        }
        func_800058DC(arg0, func_802527C0);
    }
}
