#include "context.h"
extern void func_803762E0();
extern s32 func_80010550();

struct func_80376218_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
};

struct func_80376218_Mid {
    u8 pad0[0x2C];
    struct func_80376218_Sub *unk2C;
};

struct func_80376218_Obj {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_80376218_Struct {
    u8 pad0[0x24];
    struct func_80376218_Mid *unk24;
    s32 unk28;
    s32 unk2C;
    u8 pad30[0x2C];
    struct func_80376218_Obj *unk5C;
    u8 pad60[0x14];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
};

struct func_80376218_Ptrs {
    u16 *unk0;
    s32 *unk4;
};

extern s32 func_8000522C(u16, s32);
extern void func_8012636C(void *, s32);
extern struct func_80376218_Ptrs *D_8017201C;

void func_80376218(struct func_80376218_Struct *arg0, s32 arg1) {
    struct func_80376218_Obj *sp24;
    struct func_80376218_Mid *temp_v1;

    sp24 = arg0->unk5C;
    func_80010550(arg1, sp24);
    func_8012636C(arg0, 0);
    sp24->unk78 = 1;
    arg0->unk2C = arg0->unk2C | 0xC00;
    arg0->unk74 = func_8000522C(*D_8017201C->unk0, *D_8017201C->unk4);
    temp_v1 = arg0->unk24;
    arg0->unk78 = temp_v1->unk2C->unk4;
    arg0->unk7C = temp_v1->unk2C->unk8;
    arg0->unk80 = temp_v1->unk2C->unkC;
    arg0->unk84 = 0;
    arg0->unk86 = temp_v1->unk2C->unk12;
    arg0->unk88 = 0;
    func_800058DC(arg0, &func_803762E0);
}
