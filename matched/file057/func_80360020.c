#include "common.h"

extern void func_80020718(s32 arg0);

typedef struct func_80360020_Struct0 {
    u8 pad[0x36];
    u16 unk36;
} func_80360020_Struct0;

typedef struct func_80360020_Struct1 {
    u8 pad[0x2D9];
    u8 unk2D9;
} func_80360020_Struct1;

void func_80360020(func_80360020_Struct0 *arg0, func_80360020_Struct1 *arg1) {
    s32 var_a0;
    u16 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk36;
    if (temp_v0 == 0xF6 || temp_v0 == 0xF4 || temp_v0 == 0xF5) {
        var_a0 = 0x229;
    } else {
        temp_v0_2 = arg1->unk2D9;
        if ((s32) temp_v0_2 < 0xE || temp_v0_2 == 0x54 || temp_v0_2 == 0x55) {
            var_a0 = 0x3BA;
        } else {
            var_a0 = 0x3B6;
        }
    }
    func_80020718(var_a0);
}
