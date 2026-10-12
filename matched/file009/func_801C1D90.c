#include "context.h"
typedef struct func_801C1EE0_StructB00 {
    s32 unk0;
    s16 unk4;
    u16 unk6;
    f32 unk8;
} func_801C1EE0_StructB00;
extern void func_800058DC();
extern func_801C1EE0_StructB00 D_801E0B00;

typedef struct func_801C1D90_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_801C1D90_StructInner;

typedef struct func_801C1D90_StructArg {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    func_801C1D90_StructInner *unk5C;
} func_801C1D90_StructArg;

extern s32 func_80010550();
extern void func_801C1E2C(void *arg0, s32 arg1);

void func_801C1D90(func_801C1D90_StructArg *arg0, s32 arg1) {
    func_801C1D90_StructInner *temp_a1;
    s32 temp_t7;
    extern void func_800058DC();

    temp_t7 = arg0->unk2C;
    temp_a1 = arg0->unk5C;
    arg0->unk2C &= ~0x80;
    arg0->unk2C |= 0x20;
    arg0->unk44 = 0.0f;
    arg0->unk40 = 0.0f;
    arg0->unk48 = 0.0f;
    D_801E0B00.unk0 = 0x01680041;
    D_801E0B00.unk4 = 0;
    D_801E0B00.unk6 = 0x1100;
    D_801E0B00.unk8 = 1.0f;
    temp_a1->unk78 = 1;
    func_80010550(arg1, temp_a1, arg0, arg1);
    func_800058DC(arg0, &func_801C1E2C);
}
