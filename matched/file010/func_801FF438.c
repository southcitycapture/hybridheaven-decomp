#include "context.h"

typedef struct func_801FF438_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_801FF438_Struct;

extern void func_80005700();
extern void *func_8012C4D0(s32, func_801FF438_Struct, s32);
extern s32 D_801BBC2C;
extern func_801FF438_Struct D_80217724;

s32 func_801FF438(u8 *arg0, s32 arg1) {
    s32 pad;
    u16 sp2A;

    if (arg0 != NULL) {
        sp2A = arg0[0x9F];
        func_80005700();
        ((u8 *) func_8012C4D0(D_801BBC2C, D_80217724, 3))[0x9F] = sp2A;
        return 1;
    }
    return 0;
}
