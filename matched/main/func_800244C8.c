#include "context.h"

struct func_800244C8_Struct {
    u8 pad[0x18];
    u16 unk18;
    u8 unk1A[2];
    u8 unk1C;
    u8 unk1D;
    s16 unk1E;
};

void func_800244C8(void) {
    s32 var_v1;

    ((struct func_800244C8_Struct *) D_800CBDA4)->unk1D = (u8) (((struct func_800244C8_Struct *) D_800CBDA4)->unk1D - 1);
    if (((struct func_800244C8_Struct *) D_800CBDA4)->unk1D != 0) {
        var_v1 = ((struct func_800244C8_Struct *) D_800CBDA4)->unk18;
        var_v1 += ((struct func_800244C8_Struct *) D_800CBDA4)->unk1E;
        if (var_v1 < 0x100) {
            var_v1 = 0x100;
        } else if (var_v1 >= 0xFF01) {
            var_v1 = 0xFF00;
        }
        ((struct func_800244C8_Struct *) D_800CBDA4)->unk18 = (u16) var_v1;
        return;
    }
    ((struct func_800244C8_Struct *) D_800CBDA4)->unk18 = (u16) (((struct func_800244C8_Struct *) D_800CBDA4)->unk1C << 8);
}
