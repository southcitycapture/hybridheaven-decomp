#include "context.h"

extern void func_80023D04(void);
extern void func_8002420C(void);

struct func_80024180_Struct {
    u8 pad[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u16 unk4E;
};

void func_80024180(void) {
    ((struct func_80024180_Struct *) D_800CBDA4)->unk4C = 0;
    if (((struct func_80024180_Struct *) D_800CBDA4)->unk4E != 0) {
        ((struct func_80024180_Struct *) D_800CBDA4)->unk4A = 0x20;
        func_80023D04();
        ((struct func_80024180_Struct *) D_800CBDA4)->unk49 = 0;
        ((struct func_80024180_Struct *) D_800CBDA4)->unk4A = 0x100;
        ((struct func_80024180_Struct *) D_800CBDA4)->unk4C = ((struct func_80024180_Struct *) D_800CBDA4)->unk4E;
        func_80023D04();
        return;
    }
    ((struct func_80024180_Struct *) D_800CBDA4)->unk4A = 0x100;
    func_80023D04();
    func_8002420C();
}
