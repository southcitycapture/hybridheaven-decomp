#include "context.h"

struct func_802503CC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_802503CC_Sub {
    u8 pad[0x22];
    u8 unk22;
};

struct func_802503CC_Arg1 {
    u8 pad[0x1C];
    struct func_802503CC_Sub *unk1C;
};

extern void func_80251574();
extern void func_801C4058(void *, s32, f32, s32);
extern void func_80133980(s32 arg0);
extern s32 func_801516CC(s32 arg0);
extern void func_80151700(s32, s32, void *);
extern u8 D_8017BAD8[];
extern s32 D_8025DE00;
extern u8 func_802504AC[];

void func_802503CC(struct func_802503CC_Struct *arg0, struct func_802503CC_Arg1 *arg1) {
    s32 var_s0;

    func_80251574();
    func_801C4058(arg0, 0xBE99999A, 0.0f, -0x22);
    if (arg0->unk3C++ >= 0x5A) {
        func_80133980(0x132);
        arg0->unk3C = 0;
        arg1->unk1C->unk22 = 1;
        for (var_s0 = 0; var_s0 < func_801516CC(D_8025DE00); var_s0++) {
            func_80151700(D_8025DE00, var_s0 & 0xFF, D_8017BAD8);
        }
        func_800058DC(arg0, func_802504AC);
    }
}
