#include "context.h"

struct func_8024B444_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_8024B444_Sub {
    u8 pad[0x22];
    u8 unk22;
};

struct func_8024B444_Arg1 {
    u8 pad[0x18];
    struct func_8024B444_Sub *unk18;
};

extern void func_8024CCC4();
extern void func_80133980(s32 arg0);
extern s32 func_801516CC(s32 arg0);
extern void func_80151700(s32, s32, void *);
extern u8 D_8017BAD8[];
extern s32 D_8025DDE0;
extern void func_8024B524();

void func_8024B444(struct func_8024B444_Struct *arg0, struct func_8024B444_Arg1 *arg1) {
    s32 var_s0;

    func_8024CCC4();
    func_801C4058(arg0, 0xBE99999A, 0.0f, -0x22);
    if (arg0->unk3C++ >= 0x5A) {
        func_80133980(0x132);
        arg0->unk3C = 0;
        arg1->unk18->unk22 = 1;
        for (var_s0 = 0; var_s0 < func_801516CC(D_8025DDE0); var_s0++) {
            func_80151700(D_8025DDE0, var_s0 & 0xFF, D_8017BAD8);
        }
        func_800058DC((s32)arg0, func_8024B524);
    }
}
