#include "common.h"


struct func_8000F2B8_Sub {
    u8 pad0[0x62];
    u16 unk62;
};

struct func_8000F2B8_Obj {
    struct func_8000F2B8_Obj *unk0;
    u8 pad4[4];
    struct func_8000F2B8_Obj *unk8;
    u8 padC[0x20];
    struct func_8000F2B8_Sub *unk2C;
};

void func_8000F2B8(struct func_8000F2B8_Obj *arg0, u16 arg1, u8 arg2, u8 arg3)
{
    struct func_8000F2B8_Sub *sub;

    switch (arg2) {
    case 1:
        sub = arg0->unk2C;
        sub->unk62 = sub->unk62 | arg1;
        break;
    case 2:
        sub = arg0->unk2C;
        sub->unk62 = sub->unk62 & ~arg1;
        break;
    case 3:
        sub = arg0->unk2C;
        sub->unk62 = sub->unk62 ^ arg1;
        break;
    case 0:
    default:
        arg0->unk2C->unk62 = arg1;
        break;
    }
    if (arg0->unk8 != 0) {
        func_8000F2B8(arg0->unk8, arg1, arg2, 1);
    }
    if (arg3 != 0) {
        if (arg0->unk0 != 0) {
            func_8000F2B8(arg0->unk0, arg1, arg2, 1);
        }
    }
}
