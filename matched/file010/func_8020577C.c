#define func_8020577C func_8020577C_ctx
#include "context.h"
#undef func_8020577C

struct func_8020577C_Struct1 { u8 pad[0x30]; struct func_8020577C_Struct2 *unk30; };
struct func_8020577C_Struct2 {
    u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; s16 unk10; s16 unk12; s16 unk14;
    u8 pad1[0x24 - 0x16]; u32 unk24; u8 pad2[0x30 - 0x28]; u32 unk30;
    u8 pad3[0x48 - 0x34]; u8 unk48; u8 unk49; u8 unk4A; u8 unk4B; u8 unk4C; u8 unk4D; u8 unk4E;
};
struct func_8020577C_Src { u8 pad[6]; s16 unk6; s16 unk8; s16 unkA; s16 unkC; u8 pad2[2]; u32 unk10; };
struct func_8020577C_Obj {
    u8 pad[0x2C]; u32 unk2C; u8 pad2[0x38 - 0x30]; struct func_8020577C_Src *unk38;
    s16 unk3C; u8 pad4[0x74 - 0x3E]; s32 unk74; f32 unk78; f32 unk7C; f32 unk80;
    s16 unk84; s16 unk86; s16 unk88;
};
extern s32 func_80126CC0(void *, void *);
struct func_8020577C_V { s32 a, b, c, d; };
extern void func_80126EAC();
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012C97C(s32, s32);
extern struct func_8020577C_V D_80164F40;
extern u8 D_80217978[];
extern u8 D_802179D8[];
extern void func_80205A60();

void func_8020577C(struct func_8020577C_Obj *arg0, struct func_8020577C_Struct1 **arg1) {
    struct func_8020577C_V sp20;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp20 = D_80164F40;
        sp20.b = 0x80000400;
        func_80005E44(arg0, &sp20);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x4DA, 0);
        (*arg1)->unk30->unk24 |= 0x300;
        (*arg1)->unk30->unk30 = (u32)D_80217978 | 0x40000000;
        (*arg1)->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
        (*arg1)->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
        (*arg1)->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
        (*arg1)->unk30->unk10 = 0;
        (*arg1)->unk30->unk12 = arg0->unk38->unkC;
        (*arg1)->unk30->unk14 = 0;
        (*arg1)->unk30->unk48 = D_802179D8[(arg0->unk38->unk10 & 0xFFFF) * 4];
        (*arg1)->unk30->unk49 = D_802179D8[(arg0->unk38->unk10 & 0xFFFF) * 4 + 1];
        (*arg1)->unk30->unk4A = D_802179D8[(arg0->unk38->unk10 & 0xFFFF) * 4 + 2];
        (*arg1)->unk30->unk4B = 0xFF;
        (*arg1)->unk30->unk4C = (*arg1)->unk30->unk48;
        (*arg1)->unk30->unk4D = (*arg1)->unk30->unk49;
        (*arg1)->unk30->unk4E = (*arg1)->unk30->unk4A;
        arg0->unk2C |= 0x800;
        arg0->unk74 = func_8012C97C(0x4DA, 1);
        arg0->unk78 = (f32)arg0->unk38->unk6 / 10.0;
        arg0->unk7C = (f32)arg0->unk38->unk8 / 10.0;
        arg0->unk80 = (f32)arg0->unk38->unkA / 10.0;
        arg0->unk84 = 0;
        arg0->unk86 = arg0->unk38->unkC;
        arg0->unk88 = 0;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80205A60);
    }
}
