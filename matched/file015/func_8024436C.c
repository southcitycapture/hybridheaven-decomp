#include "context.h"

typedef struct func_8024436C_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_8024436C_Struct;

extern func_80242F38_StructGlobal D_8025243C;
extern void func_8024443C(void);

void func_8024436C(func_8024436C_Struct *arg0, void **arg1) {
    s32 sp2C[1];

    sp2C[0] = arg0->unk5C;
    if ((arg0->unk90++ >= 0x14) && func_80011140(arg1, sp2C[0], D_8025243C, 0x14)) {
        func_8013A1B4(arg1, D_8025243C, 0xFFFFFF);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024443C);
    }
}
