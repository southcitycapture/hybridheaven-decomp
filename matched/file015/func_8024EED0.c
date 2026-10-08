#include "common.h"

struct func_8024EED0_Target {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_8024EED0_Ref {
    u8 pad[0x30];
    struct func_8024EED0_Target *unk30;
};

struct func_8024EED0_Pair {
    struct func_8024EED0_Ref *unk0;
    struct func_8024EED0_Ref *unk4;
};

extern s32 func_80133A24(s32);
extern void func_800058DC(s32, void *);
extern void func_8024EF28(void);

void func_8024EED0(s32 arg0, struct func_8024EED0_Pair *arg1) {
    if (func_80133A24(0x7B) != 0) {
        arg1->unk0->unk30->unk4B = 0;
        arg1->unk4->unk30->unk4B = 0;
        func_800058DC(arg0, func_8024EF28);
    }
}
