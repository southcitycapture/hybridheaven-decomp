#include "context.h"

struct func_80241F00_Obj {
    u8 pad0[0x4B];
    u8 unk4B;
};

struct func_80241F00_Mid {
    u8 pad0[0x30];
    struct func_80241F00_Obj *unk30;
};

struct func_80241F00_Arg1 {
    u8 pad0[0x14];
    struct func_80241F00_Mid *unk14;
    struct func_80241F00_Mid *unk18;
};

struct func_80241F00_Arg0 {
    u8 pad0[0x92];
    u16 unk92;
};

void func_80241F00(struct func_80241F00_Arg0 *arg0, struct func_80241F00_Arg1 *arg1) {
    struct func_80241F00_Obj *temp_a2;
    struct func_80241F00_Obj *temp_v1;
    s32 temp_v0;

    temp_v0 = arg0->unk92;
    if (temp_v0 != 0) {
        arg0->unk92 = (u16) (temp_v0 - 1);
        temp_v1 = arg1->unk14->unk30;
        temp_v1->unk4B = (u8) (temp_v1->unk4B - 6);
        temp_a2 = arg1->unk18->unk30;
        temp_a2->unk4B = (u8) (temp_a2->unk4B - 0xC);
        return;
    }
    arg1->unk14->unk30->unk4B = 0;
}
