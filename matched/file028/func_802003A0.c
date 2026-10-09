#include "context.h"

struct func_802003A0_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_802003A0_Struct2 {
    u8 pad0[0x2C];
    struct func_802003A0_Struct3 *unk2C;
};

struct func_802003A0_Struct1 {
    u8 pad0[8];
    struct func_802003A0_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_802003A0_Struct2 *unk24;
};

extern f32 D_80208DF4;
extern f32 D_80208DF8;
extern f32 D_80208DFC;

#define FUNC_802003A0_ROOT ((struct func_802003A0_Struct1 *)D_801DAB14)

s32 func_802003A0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA4CB80) != 0) {
        FUNC_802003A0_ROOT->unk8->unk8->unk8->unk24->unk2C->unk4 = D_80208DF4;
        FUNC_802003A0_ROOT->unk8->unk8->unk8->unk24->unk2C->unk8 = D_80208DF8;
        FUNC_802003A0_ROOT->unk8->unk8->unk8->unk24->unk2C->unkC = D_80208DFC;
        FUNC_802003A0_ROOT->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(2, 0x03480016, 0, 0x1000, 4.0f);
        return 5;
    }
    return 4;
}
