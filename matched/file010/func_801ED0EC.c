#include "context.h"

typedef struct func_801ED0EC_StructGlobal {
    u8 pad[0xE0];
    func_801E74DC_Outer *unkE0;
} func_801ED0EC_StructGlobal;

typedef struct func_801ED0EC_Sub {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_801ED0EC_Sub;

typedef struct func_801ED0EC_Arg2 {
    u8 pad[0x1C];
    func_801ED0EC_Sub unk1C;
} func_801ED0EC_Arg2;

void func_801ED0EC(func_801E74DC_Arg0 *arg0, s32 arg1, func_801ED0EC_Arg2 *arg2, u16 arg3)
{
    func_801ED0EC_Sub *temp;
    func_801E74DC_Inner *inner;

    temp = &arg2->unk1C;
    if (arg2->unk1C.unk0 == 0x01680022) {
        if (arg3 == 0) {
            return;
        }
        {
            temp->unk0 = 0x0168003E;
            temp->unk4 = 0;
            temp->unk6 = 0;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)temp);
            inner = ((func_801ED0EC_StructGlobal *)&D_801BBBF0)->unkE0->unk2C;
            inner->unk12 = inner->unk12 + 0x1000;
            inner = ((func_801ED0EC_StructGlobal *)&D_801BBBF0)->unkE0->unk2C;
            inner->unk12 = inner->unk12 & 0x1FFF;
            func_80010550(arg1, arg2);
        }
    } else {
        temp->unk0 = 0x01680022;
        temp->unk4 = 0;
        temp->unk6 = 0;
        func_8013A28C(arg1, *(func_801E74DC_Sub *)temp);
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        arg0->unk2C |= 0x80;
    }
}
