#include "context.h"

typedef struct func_80242D48_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80242D48_Struct;

extern struct func_80243290_StructTriple D_802520E0;
extern void func_80242DCC(void);

void func_80242D48(func_80242D48_Struct *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x1E) {
        func_8013A1B4((void **) arg1, D_802520E0, 0xFFFFFF);
        arg0->unk90 = 0;
        func_800058DC(arg0, &func_80242DCC);
    }
}
