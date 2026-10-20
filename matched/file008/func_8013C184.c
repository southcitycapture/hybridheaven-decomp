#include "context.h"

void func_8013C184(struct func_8013BFB8_Struct *arg0, u16 *arg1) {
    struct func_8013BFB8_Struct2 *temp_v1;
    u16 temp_v0;
    u16 temp_t7;

    temp_v1 = arg0->unk5C;
    if (temp_v1->unk9E != 0) {
        if (--temp_v1->unk9E == 0) {
            func_8012D844(arg0, arg1[0], arg1[2]);
        }
    } else if ((arg1[1] & 0x100) && (D_801BBC20 & 1)) {
        if (func_8012C6B4(0x2BC) < 0x14) {
            func_8012D844(arg0, arg1[0], arg1[3]);
            temp_v1->unk9E = func_8012C6B4(0xA) + 5;
        }
    }
}
