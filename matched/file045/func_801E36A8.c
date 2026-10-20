#include "context.h"
struct func_801E36A8_C { u8 pad[4]; f32 unk4; };
struct func_801E36A8_B { u8 pad[0x2C]; struct func_801E36A8_C *unk2C; };
struct func_801E36A8_A { u8 pad[0x24]; struct func_801E36A8_B *unk24; };

s32 func_801E36A8(s32 arg0, s32 arg1) {
    ((struct func_801E36A8_A *)func_801DAAF0.unk24->unk8)->unk24->unk2C->unk4 = 5120.0f;
    func_801CC470(0, 0x0168003F, 0, 0x1100, 1.0f);
    return 0xB;
}
