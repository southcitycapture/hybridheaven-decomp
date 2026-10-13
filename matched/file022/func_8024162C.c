#include "context.h"

typedef struct func_8024162C_Inner {
    u8 pad0[0x4B];
    u8 unk4B;
} func_8024162C_Inner;

typedef struct func_8024162C_Mid {
    u8 pad0[0x30];
    func_8024162C_Inner *unk30;
} func_8024162C_Mid;

typedef struct func_8024162C_Arg1 {
    u8 pad0[0x14];
    func_8024162C_Mid *unk14;
    func_8024162C_Mid *unk18;
} func_8024162C_Arg1;

typedef struct func_8024162C_Arg0 {
    u8 pad0[0x92];
    u16 unk92;
} func_8024162C_Arg0;

void func_8024162C(func_8024162C_Arg0 *arg0, func_8024162C_Arg1 *arg1) {
    s32 temp_v0;
    func_8024162C_Inner *temp_v1;
    func_8024162C_Inner *temp_a2;

    temp_v0 = arg0->unk92;
    if (temp_v0 != 0) {
        arg0->unk92 = temp_v0 - 1;
        temp_v1 = arg1->unk18->unk30;
        temp_v1->unk4B = temp_v1->unk4B - 0xC;
        temp_a2 = arg1->unk14->unk30;
        temp_a2->unk4B = temp_a2->unk4B - 6;
        return;
    }
    arg1->unk14->unk30->unk4B = 0;
}
