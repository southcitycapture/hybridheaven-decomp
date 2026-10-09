#include "context.h"

struct func_801DAE70_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801DAE70_StructB {
    u8 pad0[0x2C];
    struct func_801DAE70_StructC *unk2C;
};

struct func_801DAE70_StructA {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad34[0xE0 - 0x34];
    struct func_801DAE70_StructB *unkE0;
    u8 padE4[0x198 - 0xE4];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
};

extern s8 D_801E4A90;
extern void func_800058DC(s32, void *);
extern void func_801DAEE8(void);

void func_801DAE70(s32 a0, s32 a1) {
    struct func_801DAE70_StructA *a;

    D_801E4A90 = 0;
    a = (struct func_801DAE70_StructA *) D_801BBBF0;
    a->unkE0->unk2C->unk4 = a->unk198;
    a->unkE0->unk2C->unk8 = a->unk19C;
    a->unkE0->unk2C->unkC = a->unk1A0;
    a->unkE0->unk2C->unk12 = a->unk32;
    func_800058DC(a0, func_801DAEE8);
}
