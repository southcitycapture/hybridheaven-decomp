#include "common.h"

extern struct func_801E4428_StructTop *D_801DAB14;
extern void D_8038BD88(f32, f32, s32);
extern void D_8038C158();
extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C();
struct func_801E2F04_StructE {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x12 - 0xC];
    s16 unk12;
};
struct func_801E2F04_StructB {
    u8 pad0[0x2C];
    struct func_801E2F04_StructE *unk2C;
};
struct func_801E2F04_StructA {
    u8 pad0[0x8];
    struct func_801E2F04_StructA *unk8;
    u8 pad1[0x24 - 0xC];
    struct func_801E2F04_StructB *unk24;
};
struct func_801E2F04_StructC {
    u8 pad0[0xC];
    s32 unkC;
};
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);
s32 func_801E2F04(s32 arg0, s32 arg1) {
    struct func_801E2F04_StructE *e;

    if ((((struct func_801E2F04_StructC *) func_801BF6B0(7))->unkC < 0x55) || (func_801C1B1C() == 0)) {
        return 0x2F;
    }
    e = ((struct func_801E2F04_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C;
    e->unk8 = e->unk8 + 1.0f;
    ((struct func_801E2F04_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0xC71;
    func_8038BE98(16.3999996f);
    func_8038BD50((-75.9000015f), 14.3000002f, 0x42C93333);
    D_8038BD88((-87.8000031f), 17.0f, 0x42EDCCCD);
    D_8038C158();
    return 0x30;
}
