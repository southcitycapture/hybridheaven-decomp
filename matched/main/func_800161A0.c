#define HH_CAT2(a, b) a##b
#define HH_CAT(a, b) HH_CAT2(a, b)
#define func_800158C0 HH_CAT(func_800158C0_, __LINE__)
#include "context.h"
#undef func_800158C0

typedef struct func_800161A0_Struct {
    u8 pad[0x24];
    void (*unk24)(struct func_800161A0_Struct *, s32, s32, s32);
} func_800161A0_Struct;

s32 func_800161A0(func_800161A0_Struct *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    while (1) {
        temp_v0 = func_80016D50(2);
        switch ((u32)temp_v0) {
        case 1:
            arg1 -= 1;
            arg2 += 1;
            arg0->unk24(arg0, arg1, arg2, arg3);
            break;
        case 2:
            arg2 += 1;
            arg0->unk24(arg0, arg1, arg2, arg3);
            break;
        case 3:
            arg1 += 1;
            arg2 += 1;
            arg0->unk24(arg0, arg1, arg2, arg3);
            break;
        case 0:
            if (func_80016CE4() == 0) {
                return;
            }
            if (func_80016CE4() != 0) {
                arg1 += 2;
            } else {
                arg1 -= 2;
            }
            arg0->unk24(arg0, arg1, ++arg2, arg3);
            break;
        }
    }
}
