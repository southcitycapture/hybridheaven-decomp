#include "context.h"
void func_80363018(void *arg0, s32 arg1);

typedef struct func_80362EC8_StructA {
    u8 pad0[0x2];
    u16 unk2;
} func_80362EC8_StructA;

typedef struct func_80362EC8_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    s32 unk5C;
    u8 pad2[0x68 - 0x60];
    func_80362EC8_StructA *unk68;
} func_80362EC8_Struct;

void func_80362EC8(func_80362EC8_Struct *arg0, s32 arg1) {
    s32 sp24;
    func_80362EC8_StructA *temp_a3;
    u8 *var_v0;
    s32 temp_v1;

    sp24 = arg0->unk5C;
    temp_a3 = arg0->unk68;
    if ((s32)arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if (arg0->unk36 == 0x11D) {
        var_v0[0x32] = (var_v0[0x32] & 0xFFFC) | 2;
        var_v0[0x32] = var_v0[0x32] & 0x1F;
        var_v0[0x32] = var_v0[0x32] & 0xF3;
        func_800058DC(arg0, func_80222708);
        return;
    }
    var_v0[0x328] = 0;
    var_v0[0x2E8] = 0;
    var_v0[0x2DE] = 0;
    *(f32 *)(var_v0 + 0x2EC) = 1.0f;
    func_803602D4((s32)arg0, arg1);
    temp_v1 = temp_a3->unk2;
    if (temp_v1 & 1) {
        var_v0[0x32] = var_v0[0x32] & 0xFFF3;
    } else if (temp_v1 & 8) {
        var_v0[0x32] = (var_v0[0x32] & 0xFFF3) | 4;
    } else if (temp_v1 & 4) {
        var_v0[0x32] = (var_v0[0x32] & 0xFFF3) | 8;
    } else {
        var_v0[0x32] = (var_v0[0x32] & 0xFF) | 0xC;
    }
    func_80011198((void *)arg1, sp24, arg0, (s32)temp_a3);
    func_800058DC(arg0, func_80363018);
}
