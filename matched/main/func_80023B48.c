#include "context.h"

struct func_80023B48_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x45];
    u16 unk4C;
    u8 pad4E[0x2F];
    u8 unk7D;
    u8 pad7E[0x1C];
    u16 unk9A;
};

extern void *D_800CBDA4;

extern void func_80023BF4(void);
extern void func_80023D04(void);
extern void func_80024358(void);
extern void func_80025150(void);
extern void func_80025694(void);

void func_80023B48(void) {
    struct func_80023B48_Struct *temp_v0;

    temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    if (temp_v0->unk7D != 0) {
        func_80025694();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk9A != 0) {
        func_80025150();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk6 & 2) {
        func_80023BF4();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk4C != 0) {
        func_80024358();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk6 & 1) {
        func_80023D04();
    }
}
