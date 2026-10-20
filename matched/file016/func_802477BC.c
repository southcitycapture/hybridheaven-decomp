#include "context.h"

void func_802477BC(void *arg0, struct func_802473E0_Node **arg1)
{
    u8 *b = (u8 *)&D_801BBBF0;

    (*arg1)->unk30->unk4C = b[0xF32];
    (*arg1)->unk30->unk4D = b[0xF33];
    (*arg1)->unk30->unk4E = b[0xF34];
    (*arg1)->unk30->unk4F = b[0xF35];
    if (D_8024F518 >= 8) {
        if ((*arg1)->unk30->unk8 >= 160.0) {
            (*arg1)->unk30->unk8 = (*arg1)->unk30->unk8 - 200.0;
            (*arg1)->unk30->unkC = (*arg1)->unk30->unkC + 200.0;
        }
        (*arg1)->unk30->unk8 = (*arg1)->unk30->unk8 + 1.0;
        (*arg1)->unk30->unkC = (*arg1)->unk30->unkC - 1.0;
    }
    if (D_8024F518 >= 0xB) {
        func_80005700(arg0);
    }
}
