#include "common.h"

extern void D_8038BD88(f32, f32, s32);
struct func_801E6850_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801E6850_StructB {
    u8 pad0[0x2C];
    struct func_801E6850_StructC *unk2C;
};
struct func_801E6850_StructA {
    u8 pad0[8];
    struct func_801E6850_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E6850_StructB *unk24;
};
struct func_801E6850_StructRoot {
    u8 pad0[0x24];
    struct func_801E6850_StructA *unk24;
};
extern struct func_801E6850_StructRoot func_801DAAF0;
extern void func_8038BD50(f32, f32, s32);
s32 func_801E318C(s32 arg0, s32 arg1) {
    func_8038BD50((16.200000762939453f), (6.099999904632568f), 0xC1C73333);
    D_8038BD88((-6.199999809265137f), (15.300000190734863f), 0xC1FB3333);
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *) &func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = (-38.79999923706055f);
    return 0x42;
}
