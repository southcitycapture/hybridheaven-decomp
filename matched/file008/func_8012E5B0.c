#include "context.h"
extern u8 D_801BCC21;
s32 func_80126944(void);
extern void func_8012B7C0(s32);
extern void func_8012E774();

struct func_8012E5B0_Struct {
    u8 pad[0x24];
    s32 unk24;
    u8 pad2[0x34];
    s32 unk5C;
};

extern void func_8012DF38(s32, s32);
extern void func_801DE7EC(void *, s32);

void func_8012E5B0(struct func_8012E5B0_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012DF38(arg1, arg0->unk5C);
        if (func_80126944() != 1 || D_801BCC21 == 5 || D_801BCC21 == 7 || D_801BCC21 == 8 || D_801BCC21 == 0xA || D_801BCC21 == 0xB) {
            func_8012B7C0((s32)arg0);
            func_8012E774((s32)arg0);
            func_8013C608((s32)arg0);
            func_801DE7EC(arg0, arg0->unk5C);
        }
    }
}
