#include "context.h"

typedef struct func_803775C0_Struct {
    u8 pad0[0x18];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    s16 unk1C;
} func_803775C0_Struct;

extern void func_8014B4A0(u16, f32 *);
extern void func_8014C138(u16);
extern void func_80377644(void);

void func_803775C0(s32 arg0, s32 arg1) {
    func_803775C0_Struct sp30;

    func_8014B4A0(D_801BBBF0.unk8, (f32 *)&sp30.unk10);
    *(f32 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0x4) = sp30.unk10;
    *(f32 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0xC) = sp30.unk18;
    *(s16 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0x12) = sp30.unk1C;
    func_8014C138(D_801BBBF0.unk8);
    func_800058DC(arg0, (void *)func_80377644);
}
