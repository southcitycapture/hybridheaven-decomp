#include "context.h"

struct func_80015A64_Struct;
struct func_80016058_Struct;
void func_80015A64(s32 arg0, struct func_80015A64_Struct *arg1);
void func_80016058(struct func_80016058_Struct *arg0);
s32 *func_80016BA0(u32 arg0, s32 *arg1);
s32 func_80016B6C(s32 arg0, s32 arg1);

typedef struct func_800158C0_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[8];
    s32 unk10;
    u8 pad14[8];
    s32 unk1C;
    s32 unk20;
    void (*unk24)(struct func_800158C0_Struct *, s32, s32, s32);
    s32 (*unk28)(struct func_800158C0_Struct *, s32, s32);
} func_800158C0_Struct;

s32 func_800158C0(s32 arg0, s32 arg1, func_800158C0_Struct *arg2) {
    s32 temp_s5;
    s32 temp_lo;
    s32 i, j, k;
    s32 v;
    s32 pad2;
    s32 sp40;

    sp40 = 0;
    D_8008DFB0 = (u8 *)arg1;
    arg2->unk1C = (s32)D_8008DFB0;
    temp_s5 = (arg2->unk0 + 1) & ~1;
    temp_lo = arg2->unk4 * temp_s5;
    if (arg2->unk10 == 1) {
        k = (temp_lo / 2) + (temp_lo & 1);
        arg2->unk20 = (arg2->unk1C + k + 7) & ~7;
        func_80015A64(0x10, (struct func_80015A64_Struct *)arg2);
    }
    D_8008DFB4 = (s32)func_80016BA0((temp_lo / 8) + 1, &sp40);
    func_80016058((struct func_80016058_Struct *)arg2);
    k = 0;
    for (i = 0; i < arg2->unk4; i++) {
        for (j = 0; j < temp_s5; j++) {
            if (func_80016B6C(D_8008DFB4, k++) != 0) {
                v = arg2->unk28(arg2, j, i);
            }
            arg2->unk24(arg2, j, i, v);
        }
    }
    if (sp40 != 0) {
        func_8001F540(D_8008DFB4);
    }
    return arg1;
}
