#include "context.h"

typedef struct func_801D2F78_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D2F78_StructInner;

typedef struct func_801D2F78_StructOuter {
    u8 pad0[0xC];
    func_801D2F78_StructInner *unkC;
    u8 pad10[0x4C - 0x10];
    u16 unk4C;
    u16 unk4E;
} func_801D2F78_StructOuter;

void func_801D2F78(func_801D2F78_StructOuter *arg0, s32 *arg1) {
    if (!(arg0->unkC->unk4C & 0x8000)) {
        if ((s32) arg0->unk4C < (s32) arg0->unk4E) {
            return;
        }
    }
    func_801CE5B0((func_801CE5B0_Struct *) arg0, arg1);
    func_800058DC(arg0, (s32) func_801CE898);
}
