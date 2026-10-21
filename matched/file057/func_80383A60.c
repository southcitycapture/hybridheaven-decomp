#include "context.h"

extern f32 func_8001EAD0(s16);

struct func_80383A60_Struct2 {
    u8 pad0[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
};
struct func_80383A60_Struct1 {
    u8 pad0[0x30];
    struct func_80383A60_Struct2 *unk30;
};
struct func_80383A60_Struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x99];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
};

#define ABSSIN(v, o) \
    if (func_8001EAD0((s16)(o->unkB0 << 7)) < 0.0f) { \
        v = -func_8001EAD0((s16)(o->unkB0 << 7)); \
    } else { \
        v = func_8001EAD0((s16)(o->unkB0 << 7)); \
    }
#define TBL ((struct func_80383A60_Struct1 **)D_8008DA88)
#define E1(o) TBL[1 + o->unkA9]->unk30
#define E2(o) TBL[19 + o->unkA9 * 2]->unk30
#define E3(o) TBL[20 + o->unkA9 * 2]->unk30

void func_80383A60(struct func_80383A60_Struct *arg0, s32 arg1) {
    f32 v;
    u32 t;

    if (arg0->unkA9 == 6) {
        func_80005700(arg0);
    }
    func_80006214(arg0->unkC);
    if (arg0->unkB0 < 0x21) {
        ABSSIN(v, arg0);
        E1(arg0)->unk8 = (u32)(255.0f - v * 255.0f);
        ABSSIN(v, arg0);
        E1(arg0)->unk9 = (u32)(255.0f - v * 80.0f);
        E1(arg0)->unkA = 0xFF;
    }
    if (arg0->unkB0 < 0x11) {
        ABSSIN(v, arg0);
        E2(arg0)->unk9 = (u32)(v * 120.0f + 40.0f);
        ABSSIN(v, arg0);
        E2(arg0)->unkA = (u32)(v * 191.0f + 63.0f);
        ABSSIN(v, arg0);
        t = (u32)(v * 191.0f + 63.0f);
        E3(arg0)->unkA = t;
        E3(arg0)->unk9 = t;
        E3(arg0)->unk8 = t;
    }
    arg0->unkB0 = arg0->unkB0 + 1;
    if (arg0->unkB0 >= 0x21) {
        func_80005700(arg0);
    }
}
