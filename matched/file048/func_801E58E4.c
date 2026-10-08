#include "common.h"

struct func_801E58E4_Hdr {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_801E58E4_Q {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_801E58E4_S {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0xC];
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
};

struct func_801E58E4_R {
    u8 pad0[0x30];
    struct func_801E58E4_S *unk30;
};

struct func_801E58E4_P {
    u8 pad0[0x18];
    struct func_801E58E4_Q *unk18;
    struct func_801E58E4_R *unk1C;
};

extern void *func_801BF6B0();
extern void func_801E560C();
extern struct func_801E58E4_P *D_8038D8D0;
extern f32 D_801EA53C;

s32 func_801E58E4(s32 arg0, s32 arg1) {
    if (((struct func_801E58E4_Hdr *) func_801BF6B0(0))->unkC >= 7) {
        D_8038D8D0->unk18->unk22 = 0;
        D_8038D8D0->unk1C->unk30->unk4B = 0x7F;
        D_8038D8D0->unk1C->unk30->unk1C = D_801EA53C;
        D_8038D8D0->unk1C->unk30->unk4 = 0.0f;
        D_8038D8D0->unk1C->unk30->unk8 = 1.5f;
        D_8038D8D0->unk1C->unk30->unkC = 0.0f;
        return 5;
    }
    func_801E560C();
    return 4;
}
