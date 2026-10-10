#include "context.h"
/* context.h line 122 declares this with a typedef defined later; same pointer type, declared early. */
extern struct func_801E4428_StructTop *D_801DAB14;

struct func_801E2F04_StructC {
    u8 pad0[0xC];
    s32 unkC;
};

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

extern void *func_801BF6B0(s32);
extern s32 func_801C1B1C();
extern void D_8038C158();
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EA158;
extern f32 D_801EA15C;
extern f32 D_801EA160;
extern f32 D_801EA164;

s32 func_801E2F04(s32 arg0, s32 arg1) {
    struct func_801E2F04_StructE *e;

    if ((((struct func_801E2F04_StructC *) func_801BF6B0(7))->unkC < 0x55) || (func_801C1B1C() == 0)) {
        return 0x2F;
    }
    e = ((struct func_801E2F04_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C;
    e->unk8 = e->unk8 + 1.0f;
    ((struct func_801E2F04_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0xC71;
    func_8038BE98(D_801EA158);
    func_8038BD50(D_801EA15C, D_801EA160, 0x42C93333);
    D_8038BD88(D_801EA164, 17.0f, 0x42EDCCCD);
    D_8038C158();
    return 0x30;
}
