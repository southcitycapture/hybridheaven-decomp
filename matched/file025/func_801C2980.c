#include "common.h"

typedef struct func_801C2980_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    s32 unk98;
    u16 unk9C;
    u8 pad9E[2];
    u16 unkA0;
} func_801C2980_Struct;

extern void *func_80005670(void *, void *);
extern void *D_8038D8CC;
extern u8 D_801DA23C[];

s32 func_801C2980(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s32 arg7, u16 arg8) {
    func_801C2980_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA23C);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk91 = arg1;
    temp_v0->unk92 = arg2;
    temp_v0->unk94 = arg3;
    temp_v0->unk95 = arg4;
    temp_v0->unk96 = arg5;
    temp_v0->unk97 = arg6;
    temp_v0->unk98 = arg7;
    temp_v0->unk9C = 0;
    temp_v0->unkA0 = arg8;
    return 1;
}
