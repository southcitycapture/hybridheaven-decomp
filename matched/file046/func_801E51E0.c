#include "context.h"
extern struct func_801E4D04_StructOuter *D_8038D8D0;
extern void func_801C1000(s32, s32);

extern s32 D_801EA824[];

struct func_801E51E0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x3B];
    u8 unk4B;
};

struct func_801E51E0_StructB {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_801E51E0_StructC *unk30;
};

struct func_801E51E0_StructA {
    u8 pad0[0x18];
    struct func_801E51E0_StructB *unk18;
};

s32 func_801E51E0(s32 arg0, s32 arg1) {
    ((struct func_801E51E0_StructA *)D_8038D8D0)->unk18->unk30->unk4 = 0.0f;
    ((struct func_801E51E0_StructA *)D_8038D8D0)->unk18->unk30->unk8 = 0.0f;
    ((struct func_801E51E0_StructA *)D_8038D8D0)->unk18->unk30->unkC = 100.0f;
    ((struct func_801E51E0_StructA *)D_8038D8D0)->unk18->unk30->unk4B = 0;
    ((struct func_801E51E0_StructA *)D_8038D8D0)->unk18->unk22 = 1;
    D_801EA824[0] = 0;
    D_801EA824[1] = 0;
    D_801EA824[2] = 0x1F;
    D_801EA824[3] = 0x1F;
    func_801C1000(3, 6);
    return 9;
}
