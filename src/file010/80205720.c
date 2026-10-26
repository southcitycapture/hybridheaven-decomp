#include "common.h"

extern void func_800058DC(void *arg0, void *arg1);

struct func_80205720_Inner {
    u8 pad[0x10];
    u32 unk10;
};

struct func_80205720_Struct {
    u8 pad[0x38];
    struct func_80205720_Inner *unk38;
};

extern void func_80005700(void *);
extern s32 func_80133A24(u32, void *);
#define func_8020577C func_8020577C__decl
extern u8 func_8020577C[];

void func_80205720(struct func_80205720_Struct *arg0, void *arg1) {
    void **pa1;

    pa1 = &arg1;
    if (func_80133A24(arg0->unk38->unk10 >> 0x10, *pa1) != 0) {
        func_80005700(arg0);
        return;
    }
    func_800058DC(arg0, func_8020577C);
}

#undef func_8020577C
#define D_80164F40 D_80164F40__func_8020577C
#define D_80217978 D_80217978__func_8020577C
#define D_802179D8 D_802179D8__func_8020577C
#define func_80005E44 func_80005E44__func_8020577C
#define func_80006214 func_80006214__func_8020577C
#define func_80126CC0 func_80126CC0__func_8020577C
#define func_80126EAC func_80126EAC__func_8020577C
#define func_8012C89C func_8012C89C__func_8020577C
#define func_8012C97C func_8012C97C__func_8020577C
#define func_80205A60 func_80205A60__func_8020577C

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
#undef D_80164F40
#undef D_80217978
#undef D_802179D8
#undef func_80005E44
#undef func_80006214
#undef func_80126CC0
#undef func_80126EAC
#undef func_8012C89C
#undef func_8012C97C
#undef func_80205A60
#define func_8020577C func_8020577C__decl

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80205720/func_80205A60.s")


struct func_80206118_Struct2 { u8 pad[0x4B]; u8 unk4B; };
struct func_80206118_Struct1 { u8 pad[0x22]; u8 unk22; u8 pad2[0x30 - 0x23]; struct func_80206118_Struct2 *unk30; };
struct func_80206118_Struct0 { u8 pad[0x2C]; s32 unk2C; };

extern void func_80206180();

void func_80206118(void *arg0, void **arg1) {
    struct func_80206118_Struct2 *temp_v0;

    temp_v0 = ((struct func_80206118_Struct1 *) *arg1)->unk30;
    temp_v0->unk4B = temp_v0->unk4B - 4;
    if (((struct func_80206118_Struct1 *) *arg1)->unk30->unk4B < 8) {
        ((struct func_80206118_Struct0 *) arg0)->unk2C &= ~0x800;
        ((struct func_80206118_Struct1 *) *arg1)->unk22 = 0;
        func_800058DC(arg0, func_80206180);
    }
}


void func_80206180(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

