#include "context.h"

struct func_801FB374_Struct {
    u8 pad0[0x90];
    u8 unk90;
};

struct func_801FB374_Arg1 {
    s32 unk0;
    s32 unk4;
};

extern s32 func_80126A0C(void *, s32, s32);
extern void func_80116E80(s32);
extern void func_80145310(s32, s32, s32);
extern void func_80146208(void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_801FB488(void);

void func_801FB374(struct func_801FB374_Struct *arg0, struct func_801FB374_Arg1 *arg1) {
    u8 sp47;

    if (func_80126A0C(arg0, 0x112, 0) != 0) {
        func_80116E80(0x200);
        func_80146208(arg0, &sp47, 0x66, 0x78, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 0);
        func_80146208(arg0, &sp47, 0x66, 0xB8, 0x96, 0x10, 0x20, 0, 0, 0xFF, 0x20D, 1);
        func_80145310(arg1->unk0, 0, 0);
        func_80145310(arg1->unk4, 0, 0);
        arg0->unk90 = 0;
        func_800058DC((s32)arg0, (void *)func_801FB488);
    }
}
