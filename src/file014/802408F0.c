#include "common.h"

#define func_80240A68 func_80240A68__func_802408F0

typedef struct func_802408F0_StructC {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802408F0_StructC;
typedef struct func_802408F0_StructD {
    u8 pad0[0x30];
    func_802408F0_StructC *unk30;
} func_802408F0_StructD;
typedef struct func_802408F0_StructE {
    u16 *unk0;
    s32 *unk4;
} func_802408F0_StructE;
typedef struct func_802408F0_StructB {
    u8 pad0[0x10];
    u32 unk10;
} func_802408F0_StructB;
typedef struct func_802408F0_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x36 - 0x30];
    u16 unk36;
    func_802408F0_StructB *unk38;
    u8 pad2[0x74 - 0x3C];
    s32 unk74;
} func_802408F0_StructA;

extern void func_800058DC(void *, void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_80126EAC(void);
extern s32 func_80126CC0(void *, void *);
extern void func_8001F74C();
extern void func_80240A68();
extern u8 D_80164F40[];
extern u8 D_801BBBF0[];
extern s32 func_8000522C(u16, s32, void *);
extern s32 func_8000C3B0(void *);
extern void func_8012C784(void *, s32, s32);
extern func_802408F0_StructE *D_80171CEC[];

void func_802408F0(func_802408F0_StructA *arg0, func_802408F0_StructD **arg1) {
    func_802408F0_StructE *temp;

    func_8001F74C();
    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        func_80005F6C(arg0, &D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        func_8012C784(arg0, 0, ((u32) arg0->unk38->unk10 >> 0x10) & 0xFF);
        (*arg1)->unk30->unk24 = 0x13;
        (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
        (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
        (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
        (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
        (*arg1)->unk30->unk18 = 1.0f;
        (*arg1)->unk30->unk1C = 1.0f;
        (*arg1)->unk30->unk20 = 1.0f;
        temp = D_80171CEC[arg0->unk36];
        arg0->unk74 = func_8000522C(*temp->unk0, temp->unk4[((u32) arg0->unk38->unk10 >> 8) & 0xFF], D_801BBBF0);
        arg0->unk2C = 0xC00;
        func_800058DC(arg0, &func_80240A68);
    }
}
#undef func_80240A68

#define func_80240B24 func_80240B24__func_80240A68
#define func_80240BE4 func_80240BE4__func_80240A68
extern void func_80020744(s32);
extern void func_801268F4(s32);
extern s32 func_80133A24(s32);

typedef struct func_80240A68_StructB {
    u8 pad0[0x10];
    u32 unk10;
} func_80240A68_StructB;

typedef struct func_80240A68_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x38 - 0x30];
    func_80240A68_StructB *unk38;
    u8 pad2[0x3E - 0x3C];
    u8 unk3E;
} func_80240A68_StructA;

extern void func_80240B24();
extern void func_80240BE4();

void func_80240A68(func_80240A68_StructA *arg0, s32 arg1) {
    *(f32 *) (D_801BBBF0 + 0x390) = 0.0f;
    *(f32 *) (D_801BBBF0 + 0x394) = 0.0f;
    *(f32 *) (D_801BBBF0 + 0x398) = 0.0f;
    if ((arg0->unk38->unk10 >> 0x18) == 0) {
        if (func_80133A24(0x50) != 0) {
            func_800058DC(arg0, func_80240BE4);
            arg0->unk2C = 0xC60;
            arg0->unk3E = 0;
            func_801268F4(0);
        }
    } else if (func_80133A24(0x4F) != 0) {
        func_80020744(0x144);
        func_800058DC(arg0, func_80240B24);
        arg0->unk2C = 0xC20;
    }
}
#undef func_80240B24
#undef func_80240BE4

#define func_80240BD8 func_80240BD8__func_80240B24

typedef struct func_80240B24_StructC {
    u8 pad0[8];
    f32 unk8;
} func_80240B24_StructC;

typedef struct func_80240B24_StructB {
    u8 pad0[0x30];
    func_80240B24_StructC *unk30;
} func_80240B24_StructB;

typedef struct func_80240B24_StructA {
    u8 pad0[0x24];
    func_80240B24_StructB *unk24;
    u8 pad1[0x40 - 0x28];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_80240B24_StructA;

extern void func_80240BD8(s32 arg0, s32 arg1);
extern s32 func_8012AAE8(void *, s32, s32, s32, f32);

void func_80240B24(func_80240B24_StructA *arg0, s32 arg1) {
    if (func_8012AAE8(arg0, 0xC3C80000, 0xC30D0000, 0xC3910000, 0.5f) != 0) {
        *(f32 *) &D_801BBBF0[0x390] = arg0->unk40;
        *(f32 *) &D_801BBBF0[0x394] = arg0->unk44;
        *(f32 *) &D_801BBBF0[0x398] = arg0->unk48;
        return;
    }
    func_80020744(0x6AF);
    *(f32 *) &D_801BBBF0[0x390] = 0.0f;
    *(f32 *) &D_801BBBF0[0x394] = 0.0f;
    *(f32 *) &D_801BBBF0[0x398] = 0.0f;
    arg0->unk24->unk30->unk8 = -4000.0f;
    func_800058DC(arg0, &func_80240BD8);
}
#undef func_80240BD8


void func_80240BD8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/D_8024A270.s")

#define func_80240CD4 func_80240CD4__func_80240BE4
void func_80240CD4(s32 arg0, s32 arg1);

typedef struct func_80240BE4_Struct {
    u8 pad0[0x3E];
    u8 unk3E;
} func_80240BE4_Struct;

extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s16 D_801BBD84;
extern u8 D_8024A240[];

void func_80240BE4(func_80240BE4_Struct *arg0, s32 arg1) {
    if (func_8011AAF4(D_8024A240, 0x87, arg0, 0, 2, 4.0f, (-413.0f), -54.0f, -250.0f, 4.0f, -380.0f, -90.0f, (-311.0f), 0.0f, 35.0f, -1, -1) == 0) {
        arg0->unk3E = 0xA;
        D_801BBD84 = 2;
        func_80020744(0x145);
        func_800058DC(arg0, &func_80240CD4);
    }
}
#undef func_80240CD4


void func_80240CD4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

