#include "context.h"
extern u8 D_801D2A0C[];

void func_801D2A0C(struct func_801D2A0C_StructT *arg0, struct func_801D2A0C_StructR *arg1) {
    struct func_801D24D8_StructB *p;
    struct func_801D2A0C_StructQ *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D2A0C);
        return;
    }
    if (D_801DB314 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D24D8_StructA *)D_801DB314);
        q = arg0->u5C;
        q->u76 = 1;
        D_801DB314 = 0;
    }
    p = (struct func_801D24D8_StructB *)D_801DB318;
    if (p != 0) {
        if (func_80011140(arg1, arg0->u5C, *p, (u32)p->c) != 0) {
            D_801DB318 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->u5C) != 0) {
            D_801DB31C = 1;
        } else {
            D_801DB31C = 0;
        }
        *(struct func_801D24D8_StructA *)&D_801E1450 = *(struct func_801D24D8_StructA *)&arg1->u4->u2C->u5C;
        *(struct func_801D24D8_StructA *)&D_801E1440 = *(struct func_801D24D8_StructA *)&D_801BC025[3];
    }
}
