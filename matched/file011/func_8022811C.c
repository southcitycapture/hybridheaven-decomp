#include "context.h"

struct func_8022811C_Inner {
    s16 unk0;
    s16 unk2;
    s16 unk4;
};

struct func_8022811C_Outer {
    u8 pad[0x30];
    struct func_8022811C_Inner *unk30;
};

struct func_8022811C_Glob {
    u8 pad[0xE];
    u8 unkE;
    u8 unkF;
};

extern void func_80227D44(void *arg0, void *arg1, void *arg2);
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern struct func_8022811C_Glob D_801BEC68;

void func_8022811C(void *arg0, struct func_8022811C_Outer **arg1) {
    struct func_8022811C_Inner *temp_v0;
    struct func_8022811C_Inner *sp18;

    temp_v0 = arg1[D_801BEC68.unkE]->unk30;
    sp18 = arg1[D_801BEC68.unkF]->unk30;
    func_80227D44(arg0, arg1, D_801BC03C);
    func_80227D44(arg0, arg1, D_801BC3D8);
    temp_v0->unk0 = 0x100 - temp_v0->unk4;
    sp18->unk0 = temp_v0->unk0 - sp18->unk4;
}
