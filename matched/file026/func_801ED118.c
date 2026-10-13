#include "context.h"
extern f32 D_801FD478;
extern void func_801CC4D8(s32, s32, s32, s32, f32);

struct func_801ED118_Struct0 {
    u8 pad0[8];
    struct func_801ED118_Struct0 *unk8;
    u8 pad1[0x18];
    struct func_801ED118_Struct0 *unk24;
    u8 pad2[4];
    struct func_801ED118_Struct1 *unk2C;
};
struct func_801ED118_Struct1 {
    u8 pad0[0x12];
    s16 unk12;
};

s32 func_801ED118(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x034BCFA0) != 0) {
        func_801CC470(1, 0x02A80000, 0, 0x1000, 6.0f);
        func_801CC4D8(1, 0x01B8000E, 0, 0, 24.0f);
        D_801FD478 = (f32) ((struct func_801ED118_Struct0 *) &func_801DAAF0)->unk24->unk8->unk8->unk24->unk2C->unk12 * 90.0f * 0.00048828125f;
        return 0xC;
    }
    return 0xB;
}
