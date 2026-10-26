#include "common.h"


struct func_80380F94_Vec { s32 a; s32 b; s32 c; s32 d; s32 e; };
struct func_80380F94_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x40 - 0x3E];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x90 - 0x4C];
    u8 unk90;
    u8 pad3[0x94 - 0x91];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
};


s32 func_80380F94(f32 arg0, f32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    struct func_80380F94_Struct *p;
extern s32 func_80005C70();
extern struct func_80380F94_Struct *func_8012C4D0(s32, struct func_80380F94_Vec, s32);
    extern s32 D_801BBC2C;
    extern struct func_80380F94_Vec D_80388D70;

    if (func_80005C70() < 0x21) {
        return 0;
    }
    p = (struct func_80380F94_Struct *)func_8012C4D0(D_801BBC2C, D_80388D70, 4);
    if (p != NULL) {
        p->unk94 = arg0;
        p->unk98 = arg1;
        p->unk9C = *(f32 *)&arg2;
        p->unk40 = arg3;
        p->unk44 = arg4;
        p->unk48 = arg5;
        p->unk90 = *((u8 *)&arg6 + 3);
        p->unk3C = 0;
        p->unkA0 = 0;
        p->unkA2 = 0;
        p->unkA4 = 0;
        return 1;
    }
    return 0;
}
