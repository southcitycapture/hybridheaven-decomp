#include "context.h"

typedef struct func_80235D48_Inner {
    u8 pad[0xC];
    u16 unkC;
} func_80235D48_Inner;

typedef struct func_80235D48_Struct {
    u8 pad[0x94];
    func_80235D48_Inner *unk94;
    u8 pad2[0xA4 - 0x98];
    s8 unkA4;
    s8 unkA5;
} func_80235D48_Struct;

s32 func_80235D48(arg0)
func_80235D48_Struct *arg0;
{
    func_80235D48_Inner *inner;
    s8 a3 = 0;
    s8 a2 = 0;
    s32 v;
    extern void func_802358A0();
    inner = arg0->unk94;
    v = inner->unkC;
    if (v & 0x800) {
        a3 = 1;
        if (arg0->unkA5 > 0) {
            a2 = -1;
        }
    } else if (v & 0x400) {
        a3 = 1;
        if (arg0->unkA5 < arg0->unkA4 - 1) {
            a2 = 1;
        }
    }
    if (a2 != 0) {
        func_80020744(0x300);
    }
    arg0->unkA5 = arg0->unkA5 + a2;
    func_802358A0(arg0);
    return a3;
}
