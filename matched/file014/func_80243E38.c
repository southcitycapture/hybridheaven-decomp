#include "context.h"
extern void func_8013A334(f32 *, s32, void *, s32);
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
extern func_802455D8_Mid *D_801BBCD0;
extern void func_80127430(f32, f32, s32, s32, f32, f32);
struct func_80243E38_Struct { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; };
struct func_80243E38_Mid { u8 pad0[0x2C]; struct func_80243E38_Struct *unk2C; };
struct func_80243E38_Obj { u8 pad0[0x18]; struct func_80243E38_Mid *unk18; u8 pad1[0x8]; struct func_80243E38_Mid *unk24; u8 pad2[0x8]; s32 unk30; u8 pad3[0x28]; struct func_80246478_Child *unk5C; u8 pad4[0x34]; s16 unk94; };
extern void func_80010454(s32, void *, s32);
extern s32 func_8012CF10(s32, void *, struct func_802438E4_Table, s32, s32);
extern s32 func_8012C6B4(s32);
extern void func_8037BB4C(s16, f32, f32, s16);
extern f32 D_8024AAE0;
extern f32 D_8024AAE4;
extern s16 D_8024AB46;
extern struct func_802438E4_Table D_8024850C;
extern u8 func_80244988[];
extern u8 func_802448C8[];
extern u8 func_8024412C[];
extern u16 D_801BBBF4;

void func_80243E38(struct func_80243E38_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *sp54;
    f32 sp48[3];
    struct func_80243E38_Struct *s;
    f32 a, b, c, t;

    sp54 = arg0->unk5C;
    if (func_80242890() == 0) {
        if (arg0->unk30 & 0x10) {
            sp54->unk78 = 1;
            s = arg0->unk24->unk2C;
            func_80127430(s->unk4, s->unk8, *(s32 *)&s->unkC, 0x337, D_8024AAE0, 1.0f);
            func_800058DC(arg0, func_80244988);
            return;
        }
        if (arg0->unk30 & 0x80) {
            sp54->unk78 = 1;
            if (func_80133A24(0x4F) != 0 && D_801BBBF4 == 0x10) {
                func_800058DC(arg0, func_80244988);
                return;
            }
            func_800058DC(arg0, func_802448C8);
            return;
        }
        func_8013A334(sp48, arg1, sp54, 0xC);
        if (arg0->unk94 != 0) {
            s = ((struct func_80243E38_Mid *)D_801BBCD0)->unk2C;
            t = s->unk8;
            if (t < sp48[1]) a = -(t - sp48[1]); else a = t - sp48[1];
            t = s->unk4;
            if (t < sp48[0]) b = -(t - sp48[0]); else b = t - sp48[0];
            t = s->unkC;
            if (t < sp48[2]) c = -(t - sp48[2]); else c = t - sp48[2];
            if (c * 1.0f + (b + a) < 30.0f) {
                arg0->unk94 = 0;
                s = arg0->unk24->unk2C;
                func_80127430(s->unk4, s->unk8, *(s32 *)&s->unkC, 0x6BD, D_8024AAE4, 1.0f);
                func_8037BB4C(arg0->unk24->unk2C->unk12 + 0x800, 2.0f, 2.0f, D_8024AB46);
            }
        }
        func_80010454(arg1, sp54, 0xE3F001);
        if (func_8012CF10(arg1, sp54, D_8024850C, 0xA, 0x1C0FFE) == 0) {
            func_80010454(arg1, sp54, 0x1C0FFE);
            func_80010550(arg1, sp54);
            if (((u8 *)((struct func_80243E38_Obj *)arg1)->unk18->unk2C)[0x6A] != 0) {
                sp54->unk78 = 1;
                arg0->unk94 = func_8012C6B4(0x40) + 0x10;
                func_800058DC(arg0, func_8024412C);
            }
        }
    }
}
