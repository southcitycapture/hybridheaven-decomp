#include "context.h"

typedef struct func_80024278_Struct {
    u8 pad0[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[0x52 - 0x4E];
    u16 unk52;
} func_80024278_Struct;

void func_80024278(void) {
    ((func_80024278_Struct *) D_800CBDA4)->unk49 = 2;
    if (((func_80024278_Struct *) D_800CBDA4)->unk52 != 0) {
        ((func_80024278_Struct *) D_800CBDA4)->unk4A = 0;
        ((func_80024278_Struct *) D_800CBDA4)->unk4C = ((func_80024278_Struct *) D_800CBDA4)->unk52;
        func_80023D04();
    }
}
