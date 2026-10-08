#include "common.h"

struct func_801E4D04_StructInner {
    u8 pad[0x22];
    u8 flag;
};

struct func_801E4D04_StructOuter {
    u8 pad[0xC];
    struct func_801E4D04_StructInner *unkC;
};

extern struct func_801E4D04_StructOuter *D_8038D8D0;
extern void func_801E4BCC();

s32 func_801E4D04(s32 arg0, s32 arg1) {
    D_8038D8D0->unkC->flag = 1;
    func_801E4BCC();
    return 3;
}
