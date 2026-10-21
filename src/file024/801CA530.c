#include "common.h"


typedef struct func_801CA530_Struct {
    u8 pad[0x8E];
    u16 unk8E;
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
    u16 unk98;
    u16 unk9A;
} func_801CA530_Struct;

extern func_801CA530_Struct D_8017DC40;

s32 func_801CA530(void) {
    func_801CA530_Struct *p = &D_8017DC40;
    return (p->unk9A + p->unk8E + p->unk90 + p->unk92 + p->unk94 + p->unk96 + p->unk98) & 0xFFFF;
}


extern u16 D_8017DCDC;
extern u16 D_8017DDA4;

s32 func_801CA574(void) {
    return (D_8017DCDC + D_8017DDA4) & 0xFFFF;
}


extern u16 D_8017DCCE[];

u16 func_801CA590(s32 arg0) {
    s32 *p = &arg0;
    arg0 &= 0xFF;
    return D_8017DCCE[arg0];
}


typedef struct func_801CA5AC_Struct {
    u8 pad[4];
    u8 value;
    u8 pad5;
} func_801CA5AC_Struct;

extern func_801CA5AC_Struct D_80183CE0[];
extern s32 D_80184140[];

s32 func_801CA5AC(void) {
    u8 best;
    u8 selected;
    u8 i;
    u8 value;

    best = 0;
    for (i = 0; i < 0x55; i++) {
        value = D_80183CE0[i].value;
        if (value >= best) {
            selected = i;
            best = value;
        }
    }
    return D_80184140[selected];
}


extern u16 D_8017DCA6;

u16 func_801CA618(void) {
    return D_8017DCA6;
}


extern u16 D_8017DCC2;

u16 func_801CA624(void) {
    return D_8017DCC2;
}


extern u8 D_8017DCC6;

u8 func_801CA630(void) {
    return D_8017DCC6;
}

