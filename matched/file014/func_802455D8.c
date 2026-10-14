#include "context.h"

typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_802455D8_Sub;

typedef struct {
    u8 pad0[0x2C];
    func_802455D8_Sub *unk2C;
} func_802455D8_Mid;

typedef struct {
    u8 pad0[0x10];
    u32 unk10;
} func_802455D8_Info;

typedef struct {
    u8 pad0[0x24];
    func_802455D8_Mid *unk24;
    u8 pad1[0x10];
    func_802455D8_Info *unk38;
    u8 pad2[0x20];
    struct func_80246478_Child *unk5C;
    u8 pad3[0x3C];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
} func_802455D8_Obj;

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 pad3;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
} func_802455D8_Params;

typedef struct {
    u8 pad0[0x194];
    s16 unk194;
    u8 pad1[0x29E];
    u8 unk434;
} func_802455D8_State;

extern void func_8013A334(f32 *, s32, void *, s32);
extern s32 func_8011AAF4(void *, s32, void *, u8, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_801084C4(f32, f32, f32, f32, f32, f32);
extern void func_801178E4(f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
extern void func_80243820();
extern func_802455D8_Params D_80163FEC;
extern func_802455D8_Params D_80164404;
extern func_802455D8_Params D_80164698;
extern func_802455D8_State D_801BBBF0;
extern func_802455D8_Mid *D_801BBCD0;
extern u8 D_8024A78C[];
extern u8 D_8024A7C4[];
extern u8 D_8024A7FC[];
extern u8 D_8024A834[];
extern u8 D_8024A86C[];
extern u8 D_8024A8A4[];

void func_802455D8(func_802455D8_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *child;
    f32 vec[3];
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    u32 kind;

    child = arg0->unk5C;
    func_8013A334(vec, arg1, child, 6);
    if ((arg0->unk38->unk10 >> 0x18) != 2) {
        func_8011AAF4(D_8024A78C, 0x496, arg0, 0, 1, 4294967296.0f, arg0->unk9C, arg0->unk9E, arg0->unkA0, 3.0f, vec[0], vec[1], vec[2], 0.0f, 35.0f, -1, -1);
    }
    if (func_8012CE9C(arg1, child, D_802484DC, 0xA) == 0) {
        D_801BBBF0.unk194 = 2;
        D_801BBBF0.unk434 = 4;
        func_800058DC(arg0, func_80243820);
        child->unk78 = 1;
        kind = arg0->unk38->unk10 >> 0x18;
        if (kind == 3) goto L3;
        if (kind == 5) goto L5;
        if (kind != 7) goto Ldef;
        goto L7;
L3:
        if (func_8011AAF4(D_8024A7C4, 0x4AC, arg0, D_80163FEC.unk1, D_80163FEC.unk2, D_80163FEC.unk4, D_80163FEC.unk8, D_80163FEC.unkC, D_80163FEC.unk10, D_80163FEC.unk14, D_80163FEC.unk18, D_80163FEC.unk1C, D_80163FEC.unk20, D_80163FEC.unk24, D_80163FEC.unk28, -1, -1) != 0) {
            return;
        }
        return;
L5:
        if (func_8011AAF4(D_8024A7FC, 0x4BD, arg0, D_80164404.unk1, D_80164404.unk2, D_80164404.unk4, D_80164404.unk8, D_80164404.unkC, D_80164404.unk10, D_80164404.unk14, D_80164404.unk18, D_80164404.unk1C, D_80164404.unk20, D_80164404.unk24, D_80164404.unk28, -1, -1) != 0) {
            return;
        }
        return;
L7:
        if (func_8011AAF4(D_8024A834, 0x4CE, arg0, D_80164698.unk1, D_80164698.unk2, D_80164698.unk4, D_80164698.unk8, D_80164698.unkC, D_80164698.unk10, D_80164698.unk14, D_80164698.unk18, D_80164698.unk1C, D_80164698.unk20, D_80164698.unk24, D_80164698.unk28, -1, -1) != 0) {
            return;
        }
        return;
Ldef:
        {
            if (func_801084C4(D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 15.0, D_801BBCD0->unk2C->unkC, arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, arg0->unk24->unk2C->unkC) != 0) {
                func_801178E4(&sp74, &sp70, &sp6C, &sp68, &sp64, &sp60);
                if (func_8011AAF4(D_8024A86C, 0x4DD, arg0, 2, 1, 4294967296.0f, sp74, sp70, sp6C, 4.0f, sp68, sp64, sp60, 0.0f, 35.0f, -1, -1) != 0) {
                    return;
                }
            } else {
                func_8011AAF4(D_8024A8A4, 0x4E5, arg0, 2, 1, 4294967296.0f, arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, arg0->unk24->unk2C->unkC, 4.0f, D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 15.0, D_801BBCD0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
            }
        }
    }
}
