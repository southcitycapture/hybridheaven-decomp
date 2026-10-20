#include "context.h"

struct func_80024A1C_Struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x49 - 0x23];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[4];
    u16 unk52;
};

#define OBJ ((struct func_80024A1C_Struct *)D_800CBDA4)

void func_80024A1C(void) {
    u16 temp_a0;
    s32 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    if (temp_v0 == 0) {
        OBJ->unk52 = 0;
        if ((OBJ->unk22 == 0) && (OBJ->unk49 == 2)) {
            OBJ->unk4C = 0x7FFF;
        }
    } else {
        temp_a0 = OBJ->unk52;
        OBJ->unk52 = *(u16 *)(D_800481FE + -(temp_v0 * 2)) + 1;
        if ((OBJ->unk22 == 0) && (OBJ->unk49 == 2)) {
            OBJ->unk4C = OBJ->unk52;
            if (temp_a0 == 0) {
                OBJ->unk4A = 0;
            }
        }
    }
}
