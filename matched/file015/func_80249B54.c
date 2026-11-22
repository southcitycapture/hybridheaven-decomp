#include "common.h"

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
typedef struct func_8024AA38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8024AA38_Struct;
extern func_8024AA38_Struct D_80253088;
extern u8 D_80253164[];
extern u8 D_80258FEC[];
extern void func_800058DC(void *, void *);
extern s32 func_80010550(s32, s32);
extern void func_800179B0(void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8013A1B4();
void func_801C3C60(void *, s32);
struct func_802486B4_Node {
    u8 pad[0x2C];
    f32 *unk2C;
};
struct func_802486B4_Struct {
    u8 pad[0xE8];
    struct func_802486B4_Node *unkE8;
    u8 pad2[0xFC];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};
typedef struct func_80249854_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
} func_80249854_Sub;
typedef struct func_80249854_Inner {
    u8 pad[0x2C];
    func_80249854_Sub *unk2C;
} func_80249854_Inner;
typedef struct func_80249A84_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad60[0x9C - 0x60];
    s16 unk9C;
} func_80249A84_Struct;
void func_80249CF8(struct func_80249CF8_Obj *arg0, s32 arg1);
void func_80249B54(func_80249A84_Struct *arg0, func_80249854_Inner **arg1) {
    s32 t = arg0->unk5C;
    u16 *p = (u16 *)&arg0->unk9C;
    s32 first = (*p)++ == 0;
    if (first) {
        (*arg1)->unk2C->unk12 = 0;
    }
    if (func_80010550((s32)arg1, t) != 0 && func_800178E8() != 0) {
        struct func_802486B4_Struct *g = (struct func_802486B4_Struct *)&D_801BBBF0;
        g->unk1E8 = 109.699997f;
        g->unk1EC = (-193.899994f);
        g->unk1F0 = (-471.600006f);
        g->unk1F4 = 111.199997f;
        g->unk1F8 = (-188.199997f);
        g->unk1FC = (-429.200012f);
        func_8011AAF4(D_80258FEC, 0x359, arg0, 0, 1, 0.0f, g->unk1E8, g->unk1EC, g->unk1F0, 0.0f, g->unk1F4, g->unk1F8, g->unk1FC, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80253164);
        func_8013A1B4(arg1, D_80253088, 0xFFFFFF);
        func_800058DC(arg0, func_80249CF8);
        return;
    }
    func_801C3C60(arg0, 0x40A00000);
}
