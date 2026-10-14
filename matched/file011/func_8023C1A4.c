#include "context.h"




extern void func_801170DC(s32);
extern void func_80005700(void *);
extern s32 D_8023E544;

void func_8023C1A4(struct func_8023C1A4_Struct *arg0, s32 arg1) {
    s16 sp2E;
    s16 temp_v1;
    struct func_8023C1A4_StructA *temp_v0;

    func_801453CC((s32) arg0->unk24, 0x300, 4, 1, 3, 3, 0x21);
    temp_v0 = arg0->unk24;
    if (temp_v0 != NULL) {
        temp_v1 = temp_v0->unk30->unkB;
        sp2E = temp_v1;
    }
    temp_v1 = sp2E - 0x19;
    if (temp_v1 > 0) {
        temp_v0->unk30->unkB = temp_v1;
        return;
    }
    D_8023E544 = 0;
    func_801170DC(4);
    func_80005700(arg0);
}
