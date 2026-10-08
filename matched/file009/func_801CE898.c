#include "context.h"

extern void func_80005700(void);

typedef struct func_801CE898_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE898_StructInner;

typedef struct func_801CE898_StructOuter {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
} func_801CE898_StructOuter;

void func_801CE898(func_801CE898_StructOuter *arg0, s32 arg1) {
    func_801CE898_StructInner *temp_v0;

    temp_v0 = arg0->unkC;
    temp_v0->unk4C = temp_v0->unk4C + 1;
    func_80005700();
}
