#include "context.h"

struct func_800242C8_Struct {
    u8 pad0[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[8];
    u16 unk56;
};

void func_800242C8(void) {
    ((struct func_800242C8_Struct *) D_800CBDA4)->unk49 = 3;
    ((struct func_800242C8_Struct *) D_800CBDA4)->unk4A = 0;
    ((struct func_800242C8_Struct *) D_800CBDA4)->unk4C = ((struct func_800242C8_Struct *) D_800CBDA4)->unk56;
    func_80023D04();
}
