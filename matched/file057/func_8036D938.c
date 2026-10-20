#include "context.h"

struct func_8036D938_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
};

struct func_8036D938_StructState {
    u8 pad[0x30];
    u32 high : 1;
    u32 middle : 6;
    u32 low : 1;
    u32 rest : 24;
    u8 pad34[0x2DB - 0x34];
    u8 unk2DB;
};

extern s32 func_8036AA8C(void *);
extern s32 func_8036AB2C(void *);
extern void func_80011198(s32, s32);
extern void func_80365FE0(void *, s32);
extern void func_8036D9F8();

void func_8036D938(struct func_8036D938_StructArg *arg0, s32 arg1) {
    s32 sp24;
    struct func_8036D938_StructState *state;

    sp24 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        state = (struct func_8036D938_StructState *)D_801BC03C;
    } else {
        state = (struct func_8036D938_StructState *)D_801BC3D8;
    }
    if (func_8036AA8C(arg0) != 0) {
        if (func_8036AB2C(arg0) != 0) {
            func_80011198(arg1, sp24);
            func_800058DC((s32)arg0, func_8036D9F8);
            return;
        }
    }
    state->unk2DB = 0;
    state->low = 0;
    state->high = 0;
    func_80365FE0(arg0, arg1);
}
