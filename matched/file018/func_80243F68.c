#include "context.h"

struct func_80243F68_Leaf {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
};
struct func_80243F68_Mid {
    u8 pad0[0x2C];
    struct func_80243F68_Leaf *unk2C;
};
struct func_80243F68_Obj {
    u8 pad0[0x24];
    struct func_80243F68_Mid *unk24;
    u8 pad28[4];
    s32 unk2C;
    u8 pad30[0x5C - 0x30];
    struct func_80242C60_Sub *unk5C;
};
struct func_80243F68_Inner {
    u8 pad0[0xC];
    u16 unkC;
    u8 pad0E[0x78 - 0xE];
    s16 unk78;
};
struct func_80243F68_Ent {
    u8 pad0[0x2C];
    u8 *unk2C;
};
extern f32 func_8002FC20(f32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u16 D_801BBC20;
extern u8 D_801BC3D8[];
extern u8 D_8025BECC[];
extern struct func_80242C60_Cfg D_80258DE0;
extern struct func_80242C60_Cfg D_80258DEC;
extern void func_802442FC();
extern void func_80244418();

void func_80243F68(struct func_80243F68_Obj *arg0, s32 arg1)
{
    struct func_80243F68_Inner *s0;
    f32 sp68[3];
    f32 sp64;
    s32 i;
#define v ((struct func_80243F68_Leaf *)i)

    s0 = (struct func_80243F68_Inner *)arg0->unk5C;
    i = (s32)arg0->unk24->unk2C;
    sp64 = func_8002FC20(v->unk4 * v->unk4 + v->unkC * v->unkC);
    func_8013A334(sp68, arg1, s0, 6);
    func_8011AAF4(D_8025BECC, 0x35D, arg0, 0, 1, 4.0f,
                  ((struct func_80243F68_Leaf *)(i = (s32)arg0->unk24->unk2C))->unk4 / sp64 * -100.0f + v->unk4, 230.0f,
                  v->unkC / sp64 * -100.0f + v->unkC, 4294967296.0f,
                  sp68[0], sp68[1], sp68[2], 0.0f, 35.0f, -1, -1);
    D_8025C704 = 0;
    D_8025C6FA = 1;
    if (arg1) {
    }
    if (D_801BBC20 & 2) {
        for (i = 1; i < s0->unkC; i++) {
            ((struct func_80243F68_Ent **)arg1)[i]->unk2C[0x49] = 0xFF;
            ((struct func_80243F68_Ent **)arg1)[i]->unk2C[0x4A] = 0xFF;
        }
    } else {
        for (i = 1; i < s0->unkC; i++) {
            ((struct func_80243F68_Ent **)arg1)[i]->unk2C[0x49] = 0xB4;
            ((struct func_80243F68_Ent **)arg1)[i]->unk2C[0x4A] = 0x64;
        }
    }
    if (*(s32 *)&D_8025C6E4 < (u8)D_8025C6FC) {
        if (func_8012CE9C(arg1, s0, D_80258DEC, 10) != 0) return;
        if (func_80010550(arg1, s0) == 0) return;
        s0->unk78 = 1;
        arg0->unk2C &= ~0x80;
        *(s16 *)(D_801BC3D8 + 0x3B2) = 0;
        for (i = 1; i < s0->unkC; i++) {
            ((struct func_80243F68_Ent **)arg1)[i]->unk2C[0x49] = 0xFF;
            ((struct func_80243F68_Ent **)arg1)[i]->unk2C[0x4A] = 0xFF;
        }
        func_800058DC(arg0, func_80244418);
        return;
    }
    if (func_8012CE9C(arg1, s0, D_80258DE0, 10) != 0) return;
    if (func_80010550(arg1, s0) == 0) return;
    s0->unk78 = 1;
    arg0->unk2C &= ~0x80;
    for (i = 1; i < s0->unkC; i++) {
        ((struct func_80243F68_Ent **)arg1)[i]->unk2C[0x49] = 0xFF;
        ((struct func_80243F68_Ent **)arg1)[i]->unk2C[0x4A] = 0xFF;
    }
    func_800058DC(arg0, func_802442FC);
}
