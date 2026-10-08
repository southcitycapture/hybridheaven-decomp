#include "context.h"

typedef struct func_801CA6C8_Struct {
    u8 pad0[0x26];
    u8 unk26;
    u8 pad27;
    s16 unk28;
    s16 unk2A;
} func_801CA6C8_Struct;

extern void func_8001B194(u8, s16, s16, s32);
extern void func_8001B204(u8, s16, s16, void *, ...);
extern u8 D_801CF620[];

void func_801CA6C8(func_801CA6C8_Struct *arg0, s16 arg1, u8 arg2) {
    s16 temp_s0;
    s32 var_a3;

    temp_s0 = arg0->unk2A + arg1 + 0x78;
    if ((temp_s0 < 0x6B) || (temp_s0 >= 0xBA)) {
        func_8001B204(arg0->unk26, 0, 0, D_801CF620);
        return;
    }
    func_8001B204(arg0->unk26, arg0->unk28, temp_s0, (void *) ((u8 *) arg0 + 8), 0, (s32) arg2);
    var_a3 = 0;
    if (temp_s0 < 0x78) {
        var_a3 = (temp_s0 - 0x78) & 0xFF;
    }
    if ((temp_s0 + 0xD) >= 0xBA) {
        var_a3 = (temp_s0 - 0xAC) & 0xFF;
    }
    func_8001B194(arg0->unk26, arg0->unk28, temp_s0, var_a3);
}
