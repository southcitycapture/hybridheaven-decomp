#include "common.h"

struct func_80147174_Obj {
    u8 pad0[0xB];
    u8 unkB;
};

struct func_80147174_Struct {
    u8 pad0[0x10];
    struct func_80147174_Struct *unk10;
    u8 pad1[0x1C];
    struct func_80147174_Obj *unk30;
};

extern void func_80006088();

void func_80147174(struct func_80147174_Struct *arg0) {
    u8 sp1F;

    arg0->unk30->unkB = arg0->unk30->unkB - 0x14;
    sp1F = arg0->unk30->unkB;
    if (arg0->unk10 != NULL) {
        func_80147174(arg0->unk10);
    }
    if ((s32) sp1F < 0x14) {
        func_80006088(arg0);
    }
}
