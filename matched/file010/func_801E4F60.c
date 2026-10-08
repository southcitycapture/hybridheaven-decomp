#include "common.h"

typedef struct func_801E4F60_Struct {
    u8 pad[0x54];
    s32 unk54;
} func_801E4F60_Struct;

extern void func_801C4A5C(void *, s32, s32);
extern func_801E4F60_Struct *D_801BBCCC;

void func_801E4F60(u16 arg0) {
    s32 temp_a2;
    func_801E4F60_Struct *temp_a0;

    temp_a2 = arg0;
    temp_a0 = D_801BBCCC;
    temp_a0->unk54 = temp_a2;
    func_801C4A5C(temp_a0, 0, temp_a2);
}
