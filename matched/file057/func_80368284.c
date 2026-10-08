#include "common.h"

typedef struct func_80368284_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80368284_Struct;

void func_8013A334(func_80368284_Struct *, s32, s32, u16);
void func_802254F8(s32, s32, s32);
void func_802266CC(s32, u16);
void func_80371A40(s32, func_80368284_Struct);

void func_80368284(s32 arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4, u16 arg5) {
    func_80368284_Struct sp1C;

    ((u8 *)arg3)[0x2FA] = 1;
    func_8013A334(&sp1C, arg1, arg2, arg4);
    func_80371A40(arg0, sp1C);
    func_802266CC(arg0, arg5);
    func_802254F8(arg0, 0x14, 4);
}
