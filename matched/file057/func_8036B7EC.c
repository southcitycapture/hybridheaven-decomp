#include "context.h"

typedef struct func_8036B7EC_Struct {
    u32 unk0;
    u8 pad[0xC - 4];
    s16 unkC;
} func_8036B7EC_Struct;

extern s32 func_80368E58(s32, s32, s16, u8);
extern func_8036B7EC_Struct *func_803698D0(void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

void func_8036B7EC(s32 arg0, s32 arg1) {
    void *var_a0;
    func_8036B7EC_Struct *temp_v0;

    if (arg0 != D_801BBCCC) {
        var_a0 = D_801BC03C;
    } else {
        var_a0 = D_801BC3D8;
    }
    temp_v0 = func_803698D0(var_a0);
    func_80368E58(arg0, arg1, temp_v0->unkC, (temp_v0->unk0 << 13) >> 30);
}
