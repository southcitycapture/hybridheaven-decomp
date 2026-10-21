#include "context.h"

extern void func_801CBE90(void *, void *);

typedef union func_80359F54_Flags {
    s32 word;
    struct {
        u8 bit7 : 1;
        u8 rest0 : 6;
        u8 bit0 : 1;
        u8 bit15 : 1;
        u8 rest1 : 4;
        u8 low3 : 3;
        u8 pad[2];
    } b;
} func_80359F54_Flags;

typedef struct func_80359F54_StructState {
    u8 pad[0x30];
    func_80359F54_Flags f30;
    func_80359F54_Flags f34;
    func_80359F54_Flags f38;
    func_80359F54_Flags f3C;
    u8 pad40[0x324 - 0x40];
    void *ptr324;
} func_80359F54_StructState;

void func_80359F54(void *arg0, s32 arg1) {
    void *other;
    void *sp2C;
    u8 *inner;
    func_80359F54_StructState *state;

    if (arg0 != ((func_8035991C_Globals *)D_801BBBF0)->unkDC) {
        other = ((func_8035991C_Globals *)D_801BBBF0)->unkDC;
    } else {
        other = ((func_8035991C_Globals *)D_801BBBF0)->unkEC;
    }
    inner = *(u8 **)((u8 *)other + 0x5C);
    if (arg0 == ((func_8035991C_Globals *)D_801BBBF0)->unkDC) {
        state = (func_80359F54_StructState *)D_801BC03C;
    } else {
        state = (func_80359F54_StructState *)D_801BC3D8;
    }
    state->f30 = state->f34;
    state->f38 = state->f3C;
    state->f30.b.low3 = 0;
    state->f30.b.bit7 = 0;
    state->f30.b.bit0 = 0;
    state->f30.b.bit15 = 0;
    sp2C = other;
    func_80006214(other);
    func_801CBE90(sp2C, D_8008DA88);
    func_800113D0(D_8008DA88, inner + 0x22);
    func_80006214(arg0);
    func_800058DC(arg0, state->ptr324);
}
