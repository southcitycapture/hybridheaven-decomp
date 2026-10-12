#include "context.h"

extern void func_8000659C();
extern void func_80006414();
extern u8 D_8008942C[];

struct func_800062F8_Inner {
    u8 pad0[8];
    void *unk8;
};

struct func_800062F8_Struct {
    struct func_800062F8_Struct *unk0;
    struct func_800062F8_Struct *unk4;
    u8 pad8[4];
    struct func_800062F8_Inner *unkC;
    u8 pad10[0x14];
    s32 unk24;
};

void func_800062F8(struct func_800062F8_Struct *arg0, s32 arg1) {
    struct func_800062F8_Inner *temp_v0;

    if ((arg0->unk4 != NULL) || (arg0->unk0 != NULL)) {
        func_8000659C(arg0);
        temp_v0 = arg0->unkC;
        arg0->unk24 = arg1;
        if (temp_v0 == NULL) {
            func_80006414(D_8008942C, arg0);
            return;
        }
        func_80006414(temp_v0->unk8, arg0);
    }
}
