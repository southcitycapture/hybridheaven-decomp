#include "common.h"

typedef struct func_8037DCEC_Inner {
    u8 pad[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
} func_8037DCEC_Inner;

typedef struct func_8037DCEC_Outer {
    u8 pad[0x30];
    func_8037DCEC_Inner *unk30;
} func_8037DCEC_Outer;

void func_8037DCEC(s32 arg0, func_8037DCEC_Outer *arg1, u8 arg2) {
    u8 temp_v1;
    func_8037DCEC_Inner *temp_v0;

    arg1->unk30->unkE = arg2;
    temp_v0 = arg1->unk30;
    temp_v1 = temp_v0->unkE;
    temp_v0->unkD = temp_v1;
    arg1->unk30->unkC = temp_v1;
    arg1->unk30->unk9 = temp_v1;
    arg1->unk30->unkA = temp_v1;
    arg1->unk30->unk8 = temp_v1;
}
