#include "common.h"

typedef struct func_801D5FE0_StructInner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x63 - 0x28];
    u8 unk63;
} func_801D5FE0_StructInner;

typedef struct func_801D5FE0_StructOuter {
    u8 pad0[0xC];
    func_801D5FE0_StructInner *unkC;
} func_801D5FE0_StructOuter;

extern void func_800058DC(void *arg0, void *arg1);
extern void func_801D6024(void);

void func_801D5FE0(func_801D5FE0_StructOuter *arg0, s32 arg1) {
    func_801D5FE0_StructInner *temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0->unk63 != 0 && temp_v0->unk24 != 0) {
        func_800058DC(arg0, func_801D6024);
    }
}
