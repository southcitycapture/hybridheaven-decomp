#include "context.h"

extern void func_80010550(s32, s32);
extern void func_8013A5E8(s32, s32);

typedef struct func_8013ADD4_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_8013ADD4_Struct;

void func_8013ADD4(func_8013ADD4_Struct *arg0, s32 arg1) {
    s32 temp_a2;

    temp_a2 = arg0->unk5C;
    func_80010550(arg1, temp_a2);
    func_8013A7D4((func_8013A7D4_Arg0 *)arg1, (func_8013A7D4_Struct *)(temp_a2 + 0x1C));
    func_8013A5E8(arg1, 0);
}
