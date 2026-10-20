#include "context.h"

typedef struct func_8024A120_Sub {
    u8 pad[4];
    f32 unk4;
} func_8024A120_Sub;

typedef struct func_8024A120_Node {
    u8 pad[0x2C];
    func_8024A120_Sub *unk2C;
} func_8024A120_Node;

typedef struct func_8024A120_Obj {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x3C];
    u16 unk9C;
} func_8024A120_Obj;

typedef struct func_8024A120_G {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_8024A120_G;

#define GG ((func_8024A120_G *)&D_801BBBF0)

extern f32 D_802591C8;
extern f32 D_802591CC;
extern f32 D_802591D0;
extern f32 D_802591D4;
extern f32 D_802591D8;
extern f32 D_802591DC;
extern func_8024AA38_Struct D_802530B8;
extern void func_8024A224();

void func_8024A120(func_8024A120_Obj *arg0, func_8024A120_Node **arg1) {
    s32 t;

    t = arg0->unk5C;
    if (arg0->unk9C++ == 0) {
        (*arg1)->unk2C->unk4 = 112.5f;
    }
    if (func_80010550((s32)arg1, t) != 0) {
        GG->unk1E8 = D_802591C8;
        GG->unk1EC = D_802591CC;
        GG->unk1F0 = D_802591D0;
        GG->unk1F4 = D_802591D4;
        GG->unk1F8 = D_802591D8;
        GG->unk1FC = D_802591DC;
        func_8013A1B4(arg1, D_802530B8, 0xFFFFFF);
        arg0->unk9C = 0;
        func_800058DC(arg0, func_8024A224);
    }
}
