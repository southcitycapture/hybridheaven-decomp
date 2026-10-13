#include "context.h"

struct func_8024F030_StructInner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_8024F030_Struct {
    u8 pad0[4];
    struct func_8024F030_StructInner *unk4;
};

extern void func_8024F078();

void func_8024F030(s32 arg0, struct func_8024F030_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8024F078);
    }
}
