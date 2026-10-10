#include "context.h"

struct func_8002420C_Struct {
    u8 pad0[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[0x50 - 0x4E];
    u16 unk50;
    u8 pad52[0x54 - 0x52];
    u16 unk54;
};

extern void func_80024278(void);

void func_8002420C(void) {
    if (((struct func_8002420C_Struct *) D_800CBDA4)->unk54 != 0) {
        ((struct func_8002420C_Struct *) D_800CBDA4)->unk49 = 1;
        ((struct func_8002420C_Struct *) D_800CBDA4)->unk4A = ((struct func_8002420C_Struct *) D_800CBDA4)->unk4A - ((struct func_8002420C_Struct *) D_800CBDA4)->unk54;
        ((struct func_8002420C_Struct *) D_800CBDA4)->unk4C = ((struct func_8002420C_Struct *) D_800CBDA4)->unk50;
        func_80023D04();
        return;
    }
    func_80024278();
}
