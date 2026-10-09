#include "context.h"

typedef struct func_80016A9C_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0xC];
    s32 unk14;
    u8 pad18[0x10];
    s32 (*unk28)(struct func_80016A9C_Struct *, s32, s32);
} func_80016A9C_Struct;

extern void func_800166D4(s32, s32);

void func_80016A9C(func_80016A9C_Struct *arg0) {
    s32 var_s0;
    s32 var_s2;

    var_s2 = 0;
    if (arg0->unk4 > 0) {
        do {
            var_s0 = 0;
            if (arg0->unk0 > 0) {
                do {
                    if (arg0->unk14 == (arg0->unk28(arg0, var_s0, var_s2) & 0xFFFE)) {
                        func_800166D4(var_s0, var_s2);
                    }
                    var_s0 += 1;
                } while (var_s0 < arg0->unk0);
            }
            var_s2 += 1;
        } while (var_s2 < arg0->unk4);
    }
}
