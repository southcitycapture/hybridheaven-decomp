#include "common.h"

typedef struct func_8024AA38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8024AA38_Struct;
extern func_8024AA38_Struct D_802530B8;
struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};
extern struct func_8024A434_StructBBF0 D_801BBBF0;
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
extern void func_800058DC(void *, void *);
extern s32 func_80010550(s32, s32);
extern void func_8013A1B4();
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
extern void func_8024A224();
void func_8024A120(func_8024A120_Obj *arg0, func_8024A120_Node **arg1) {
    s32 t;

    t = arg0->unk5C;
    if (arg0->unk9C++ == 0) {
        (*arg1)->unk2C->unk4 = 112.5f;
    }
    if (func_80010550((s32)arg1, t) != 0) {
        GG->unk1E8 = 114.400002f;
        GG->unk1EC = (-190.699997f);
        GG->unk1F0 = (-425.0f);
        GG->unk1F4 = 118.400002f;
        GG->unk1F8 = (-188.600006f);
        GG->unk1FC = (-438.700012f);
        func_8013A1B4(arg1, D_802530B8, 0xFFFFFF);
        arg0->unk9C = 0;
        func_800058DC(arg0, func_8024A224);
    }
}
