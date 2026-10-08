#include "context.h"

struct func_801E66F4_Struct {
    u8 pad0[0x4];
    f32 unk4;
    struct func_801E66F4_Struct *unk8;
    u8 pad_c[0x18];
    struct func_801E66F4_Struct *unk24;
    u8 pad_28[0x4];
    struct func_801E66F4_Struct *unk2C;
};

extern void func_801C78C0(void);
extern f32 D_801E9990;

void func_801E66F4(void) {
    func_801C78C0();
    D_801E9990 = ((struct func_801E66F4_Struct *)func_801DAAF0)->unk24->unk8->unk8->unk8->unk24->unk2C->unk4;
}
