#include "context.h"
extern struct func_801FCB44_Struct *D_8038D8D0;

struct func_801F6698_StructA {
    u8 pad[0x14];
    u8 *unk14;
};

struct func_801F6698_StructB {
    u8 pad[0x22];
    u8 unk22;
};

s32 func_801F6698(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        ((struct func_801F6698_StructB *)((struct func_801F6698_StructA *)D_8038D8D0)->unk14)->unk22 = 0;
        return 3;
    }
    return 2;
}
