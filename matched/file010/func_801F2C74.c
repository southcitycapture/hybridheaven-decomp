#include "context.h"
struct func_801F38B8_Node {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801F38B8_Mid {
    u8 pad0[0x2C];
    struct func_801F38B8_Node *unk2C;
};
struct func_801F38B8_Hi {
    u8 pad0[0x30];
    struct func_801F38B8_Node *unk30;
};
struct func_801F38B8_Lo {
    u8 pad0[0x24];
    struct func_801F38B8_Hi *unk24;
};
struct func_801F38B8_Obj {
    u8 pad0[0x64];
    struct func_801F38B8_Lo *unk64;
};
struct func_801F38B8_Base {
    u8 pad0[0xDC];
    struct func_801F38B8_Obj *unkDC;
    struct func_801F38B8_Mid *unkE0;
};
extern struct func_801F38B8_Base D_801BBBF0;

struct func_801F2C74_Struct3 { u8 pad0[0x8]; s16 unk8; u8 pad9[2]; u8 pad1[0x4]; u32 unk10; u8 pad2[4]; u32 unk18; };
struct func_801F2C74_Struct2 { u8 pad0[0x30]; struct func_801F38B8_Node *unk30; };
struct func_801F2C74_Struct1 { u8 pad0[0x24]; s32 unk24; u8 pad1[4]; u32 unk2C; };
struct func_801F2C74_Struct0 {
    u8 pad0[0x24];
    struct func_801F2C74_Struct4 *unk24;
    u8 pad28[4];
    u32 unk2C;
    u8 pad30[4];
    u16 unk34;
    u16 unk36;
    struct func_801F2C74_Struct3 *unk38;
    u8 pad3C[0x34];
    s32 unk70;
    s32 unk74;
    u8 pad78[0x18];
    s16 unk90;
    u8 pad92[0xE];
    f32 unkA0;
    f32 unkA4;
};
struct func_801F2C74_Struct4 { u8 pad0[0x30]; struct func_801F38B8_Node *unk30; };
struct func_801F2C74_Struct5 { u8 pad0[0x24]; s32 unk24; u8 pad28[8]; s32 unk30; u8 pad34[0x18]; u8 unk4C; u8 unk4D; u8 unk4E; u8 unk4F; };
struct func_801F2C74_Struct6 { struct func_801F2C74_Struct5 *pad0[0xC]; };
struct func_801F2C74_Struct7 { u8 pad0[0x30]; struct func_801F2C74_Struct5 *unk30; };

extern s32 func_8000522C(u16, s32);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, s32);
extern s32 func_8000C3B0(void *);
extern void func_8012636C(void *, s32);
extern void func_8012C89C(void *, s32, u32, s32);
extern u8 D_80164F40[];
extern u32 *D_80171CEC[];
extern s32 D_801BBCD0;
extern u8 func_801F2EB0[];

void func_801F2C74(struct func_801F2C74_Struct0 *arg0, struct func_801F2C74_Struct7 **arg1) {
    f64 base;
    f64 h;
    s32 d;
    s16 a;
    struct func_801F2C74_Struct3 *p;
    u32 *t;

    if (D_801BBCD0 != 0) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        arg0->unk2C |= 0xC20;
        func_8012636C(arg0, 0);
        p = arg0->unk38;
        h = 1.0 - 0.5;
        base = (f64)(f32)p->unk8 / 10.0 + 0.5;
        a = (s16)(s32)(((f64)(f32)(s16)(p->unk10 >> 16) + 0.5 - base) * h);
        if (a < 0) {
            d = -a;
        } else {
            d = a;
        }
        arg0->unkA0 = 0.0f;
        arg0->unkA4 = 0.0f;
        arg0->unk90 = (s32)((f64)d + base);
        arg0->unk24->unk30->unk8 = (f32)((f64)(f32)(s16)(p->unk10 >> 16) + 0.5);
        func_8012C89C(arg0, 0,arg0->unk38->unk18 >> 20, (arg0->unk38->unk18 >> 16) & 0xF);
        t = D_80171CEC[arg0->unk36];
        arg0->unk74 = func_8000522C(*(u16 *)t[0], ((s32 *)t[1] + ((arg0->unk38->unk18 >> 16) & 0xF))[1]);
        func_800062F8(*arg1, 0x80000C00);
        (*arg1)->unk30->unk24 = 0x13;
        (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
        func_800058DC((s32)arg0, func_801F2EB0);
    }
}
