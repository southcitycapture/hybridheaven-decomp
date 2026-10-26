#include "common.h"
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
extern void func_800058DC(void *, void *);
void func_80240C58(s32 arg0, s32 arg1);


struct func_80240C00_StructB {
    u8 pad[0x12];
    s16 unk12;
};
struct func_80240C00_StructA {
    u8 pad[0x30];
    struct func_80240C00_StructB *unk30;
};
struct func_80240C00_StructC {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad2[0x5E];
    u16 unk9C;
};

void func_80240C00(struct func_80240C00_StructC *arg0, struct func_80240C00_StructA **arg1) {
    arg0->unk9C = (s16)(arg0->unk9C + 0x2D) & 0x1FFF;
    (*arg1)->unk30->unk12 = arg0->unk9C;
    if (arg0->unk3C++ >= 0x5A) {
        func_800058DC(arg0, func_80240C58);
    }
}
