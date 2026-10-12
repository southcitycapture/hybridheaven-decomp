#include "context.h"

struct func_8024DEC4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_8024DEC4_Sub {
    u8 pad[0x22];
    u8 unk22;
};

struct func_8024DEC4_Arg1 {
    u8 pad[0x1C];
    struct func_8024DEC4_Sub *unk1C;
};

extern void func_8024F0B0();
extern void func_801C4058(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80133980(s32 arg0);
extern void func_800058DC(void *arg0, void *arg1);
extern s32 func_801516CC(s32 arg0);
extern void func_80151700(s32, s32, void *);
extern u8 D_8017BAD8[];
extern s32 D_8025DDF0;
extern void func_8024DFA8();

void func_8024DEC4(struct func_8024DEC4_Struct *arg0, struct func_8024DEC4_Arg1 *arg1) {
    s32 var_s0;

    func_8024F0B0();
    func_801C4058(arg0, 0x3ECCCCCD, 0x3DCCCCCD, -0x16);
    if (arg0->unk3C++ >= 0x5A) {
        func_80133980(0x132);
        arg0->unk3C = 0;
        arg1->unk1C->unk22 = 1;
        for (var_s0 = 0; var_s0 < func_801516CC(D_8025DDF0); var_s0++) {
            func_80151700(D_8025DDF0, var_s0 & 0xFF, D_8017BAD8);
        }
        func_800058DC(arg0, func_8024DFA8);
    }
}
