#include "context.h"

struct func_80024E0C_Struct {
    u8 pad[0x58];
    u16 unk58;
    u8 unk5A;
    u8 unk5B;
    s16 unk5C;
};

extern void func_80022A84(u8, s32, void **);
extern u8 D_800CBAB4;

void func_80024E0C(void) {
    s32 temp_a1;
    s32 var_v1;

    temp_a1 = ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58;
    ((struct func_80024E0C_Struct *) D_800CBDA4)->unk5B = (u8) (((struct func_80024E0C_Struct *) D_800CBDA4)->unk5B - 1);
    temp_a1 &= 0x8000;
    temp_a1 &= 0xFFFF;
    if (((struct func_80024E0C_Struct *) D_800CBDA4)->unk5B != 0) {
        var_v1 = ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 & 0x7FFF;
        var_v1 += ((struct func_80024E0C_Struct *) D_800CBDA4)->unk5C;
        if (var_v1 < 0) {
            var_v1 = 0;
        } else if (var_v1 >= 0x8000) {
            var_v1 = 0x7F00;
        }
        ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 = (u16) var_v1;
    } else {
        ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 = (u16) (((struct func_80024E0C_Struct *) D_800CBDA4)->unk5A << 8);
    }
    ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 = (u16) (temp_a1 | ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58);
    func_80022A84(D_800CBAB4, temp_a1, (void **) &D_800CBDA4);
}
