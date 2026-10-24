#include "context.h"

extern func_8012F490_StructArgs D_80178CC8;

void *func_8012FA20(s32 arg0, s32 arg1) {
    func_8012F490_StructObj *temp;

    if (arg1 == 0) goto case0;
    if (arg1 != 1) goto def;
    goto case1;
case0:
    temp = D_8012C4D0(arg0, D_80178CC8, 3);
    if (temp != NULL) {
        ((u8 *)temp)[0x90] = 0;
    }
    temp = D_8012C4D0(arg0, D_80178CC8, 3);
    if (temp != NULL) {
        ((u8 *)temp)[0x90] = 2;
    }
    return temp;
case1:
    temp = D_8012C4D0(arg0, D_80178CC8, 3);
    if (temp != NULL) {
        ((u8 *)temp)[0x90] = 1;
    }
    temp = D_8012C4D0(arg0, D_80178CC8, 3);
    if (temp != NULL) {
        ((u8 *)temp)[0x90] = 2;
    }
    return temp;
def:
    return NULL;
}
