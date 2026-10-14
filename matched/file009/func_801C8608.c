#include "context.h"

struct func_801C8608_Inner {
    u8 pad[0x18];
    u16 unk18;
};

struct func_801C8608_Outer {
    u8 pad[0x5C];
    struct func_801C8608_Inner *unk5C;
};

extern u16 D_801BCAE0;
extern u8 D_8013ADD4[];
extern u8 D_801C1970[];
extern u8 D_801E5010[];
extern u8 D_801EFBEC[];
extern u8 D_8021D8D0[];

void func_801C8608(struct func_801C8608_Outer *arg0, s32 arg1) {
    struct func_801C8608_Inner *temp_v1;
    s32 temp_v0;

    temp_v1 = arg0->unk5C;
    temp_v0 = temp_v1->unk18 & 0x3000;
    if (temp_v0 == 0) {
        goto case0;
    }
    if (temp_v0 == 0x1000) {
        goto case1000;
    }
    if (temp_v0 == 0x2000) {
        return;
    }
    if (temp_v0 != 0x3000) {
        goto deflt;
    }
    goto case3000;
case0:
    if (D_801BCAE0 & 0x40) {
        func_800058DC(arg0, D_801EFBEC);
        return;
    }
    func_800058DC(arg0, D_801E5010);
    return;
case1000:
    func_800058DC(arg0, D_8021D8D0);
    return;
case3000:
    func_800058DC(arg0, D_801C1970);
    return;
deflt:
    func_800058DC(arg0, D_8013ADD4);
}
