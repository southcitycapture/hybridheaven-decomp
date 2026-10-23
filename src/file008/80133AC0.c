#include "common.h"


extern s32 func_80126CC0(s32, void *);
extern void func_800058DC(s32, void *);
extern u8 func_80126EAC[];
extern u8 func_80133B00[];

void func_80133AC0(s32 arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_80133B00);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133AC0/func_80133B00.s")


void func_80135320(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern u8 D_801BBBF0[];

typedef struct func_8013532C_Inner {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x4C - 0x16];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8013532C_Inner;

typedef struct func_8013532C_Mid {
    u8 pad0[0x30];
    func_8013532C_Inner *unk30;
} func_8013532C_Mid;

typedef struct func_8013532C_Arg0 {
    u8 pad0[0x24];
    func_8013532C_Mid *unk24;
    u8 pad28[0x90 - 0x28];
    s32 unk90;
    s32 unk94;
    s32 unk98;
} func_8013532C_Arg0;

void func_8013532C(func_8013532C_Arg0 *arg0, func_8013532C_Mid **arg1) {
    func_8013532C_Inner *temp_v0;

    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk10 = (s16) (temp_v0->unk10 + arg0->unk90);
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk12 = (s16) (temp_v0->unk12 + arg0->unk94);
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk14 = (s16) (temp_v0->unk14 + arg0->unk98);
}


typedef struct func_801353C0_StructInner {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_801353C0_StructInner;

typedef struct func_801353C0_StructMid {
    u8 pad[0x2C];
    func_801353C0_StructInner *unk2C;
} func_801353C0_StructMid;

typedef struct func_801353C0_StructData {
    u8 pad[0x14];
    s32 unk14;
} func_801353C0_StructData;

typedef struct func_801353C0_StructObj {
    u8 pad[0x24];
    func_801353C0_StructMid *unk24;
    u8 pad28[0x10];
    func_801353C0_StructData *unk38;
    u8 pad3C[0x20];
    s32 unk5C;
} func_801353C0_StructObj;

extern void func_80010550(s32, s32, func_801353C0_StructObj *, s32);

void func_801353C0(func_801353C0_StructObj *arg0, s32 arg1) {
    s32 temp = arg0->unk5C;
    func_80010550(arg1, temp, arg0, arg1);
    arg0->unk24->unk2C->unk10 = (s16)((u32)arg0->unk38->unk14 >> 16);
    arg0->unk24->unk2C->unk14 = (s16)(arg0->unk38->unk14 & 0xFFFF);
}


typedef struct func_80135420_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80135420_Sub;

typedef struct func_80135420_Mid {
    u8 pad0[0x30];
    func_80135420_Sub *unk30;
} func_80135420_Mid;

typedef struct func_80135420_Inner {
    u8 pad0[0x10];
    u32 unk10;
} func_80135420_Inner;

typedef struct func_80135420_Obj {
    u8 pad0[0x24];
    func_80135420_Mid *unk24;
    u8 pad28[0x38 - 0x28];
    func_80135420_Inner *unk38;
} func_80135420_Obj;


void func_80135420(func_80135420_Obj *arg0, s32 arg1) {
    arg0->unk24->unk30->unk4 = (f32) *(s16 *) (D_801BBBF0 + ((((u32) arg0->unk38->unk10 >> 0x10) & 0xFF) * 2) + 0x11E);
    arg0->unk24->unk30->unk8 = (f32) *(s16 *) (D_801BBBF0 + ((((u32) arg0->unk38->unk10 >> 0x10) & 0xFF) * 2) + 0x130);
    arg0->unk24->unk30->unkC = (f32) *(s16 *) (D_801BBBF0 + ((((u32) arg0->unk38->unk10 >> 0x10) & 0xFF) * 2) + 0x142);
}


typedef struct func_801354CC_Inner {
    u8 pad0[0x14];
    u32 unk14;
} func_801354CC_Inner;

typedef struct func_801354CC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x38 - 0x30];
    func_801354CC_Inner *unk38;
} func_801354CC_Struct;

s32 func_80133A24(u32, void *);                     /* extern */

void func_801354CC(func_801354CC_Struct *arg0, s32 arg1) {
    if (func_80133A24((u32) arg0->unk38->unk14 >> 0x10, arg0) != 0) {
        arg0->unk2C = arg0->unk2C | 0x800;
        return;
    }
    arg0->unk2C = 0;
}


void func_80020718(s32 arg0);
extern void func_8013557C();

typedef struct func_80135520_Struct {
    u8 pad0[0x10];
    s16 unk10;
} func_80135520_Struct;

typedef struct func_80135520_Obj {
    u8 pad0[0x24];
    struct {
        u8 pad0[0x30];
        func_80135520_Struct *unk30;
    } *unk24;
} func_80135520_Obj;

void func_80135520(func_80135520_Obj *arg0, s32 arg1) {
    func_80135520_Struct *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk10 = temp_v0->unk10 - 4;
    if (func_80126944() == 1) {
        func_80020718(0x6B4);
        func_800058DC((s32) arg0, func_8013557C);
    }
}


typedef struct func_8013557C_Struct30 {
    u8 pad0[0x10];
    s16 unk10;
} func_8013557C_Struct30;

typedef struct func_8013557C_Struct24 {
    u8 pad0[0x30];
    func_8013557C_Struct30 *unk30;
} func_8013557C_Struct24;

typedef struct func_8013557C_Obj {
    u8 pad0[0x24];
    func_8013557C_Struct24 *unk24;
} func_8013557C_Obj;

s32 func_801FC720(s32, s32, s32);

void func_8013557C(func_8013557C_Obj *arg0, s32 arg1) {
    func_8013557C_Struct30 *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk10 = temp_v0->unk10 - 4;
    if (func_80126944() == 0) {
        func_801FC720(0x1F9, 3, 0);
        func_800058DC((s32) arg0, &func_80135520);
    }
}


typedef struct func_801355D8_Struct {
    u8 pad0[0x14];
    u32 unk14;
} func_801355D8_Struct;

typedef struct func_801355D8_Obj {
    u8 pad0[0x36];
    u16 unk36;
    func_801355D8_Struct *unk38;
    u8 pad3c[0x74 - 0x3C];
    s32 unk74;
} func_801355D8_Obj;

s32 func_80126944();                                /* extern */
s32 func_8012C97C(s32, s32);                        /* extern */
extern u8 D_801BCC21;

void func_801355D8(func_801355D8_Obj *arg0, s32 arg1) {
    s32 var_v0;

    if ((func_80126944() == 1 && D_801BCC21 == 0xE) || func_80126944() != 1) {
        var_v0 = func_8012C97C(arg0->unk36 - 1, (arg0->unk38->unk14 >> 16) & 0xFF);
    } else {
        var_v0 = func_8012C97C(arg0->unk36 - 1, (arg0->unk38->unk14 >> 8) & 0xFF);
    }
    arg0->unk74 = var_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133AC0/func_80135678.s")


typedef struct func_8013581C_Sub {
    u8 pad0[0x8];
    f32 unk8;
} func_8013581C_Sub;

typedef struct func_8013581C_Mid {
    u8 pad0[0x30];
    func_8013581C_Sub *unk30;
} func_8013581C_Mid;

typedef struct func_8013581C_Inner {
    u8 pad0[0x8];
    s16 unk8;
    u8 padA[0x18 - 0xA];
    u32 unk18;
} func_8013581C_Inner;

typedef struct func_8013581C_Obj {
    u8 pad0[0x38];
    func_8013581C_Inner *unk38;
    u8 pad3C[0x5C - 0x3C];
    s16 unk5C;
} func_8013581C_Obj;

void func_8013581C(func_8013581C_Obj *arg0, func_8013581C_Mid **arg1) {
    s32 hi;
    f32 t;
    f32 r;
    f32 base;

    hi = (arg0->unk38->unk18 >> 16) & 0xFF;
    t = (f32)(arg0->unk38->unk18 & 0xFF);
    r = (arg0->unk5C + 1.0) / ((f64)(u32)hi + 1.0);
    base = (f32)arg0->unk38->unk8 / 10.0;
    (*arg1)->unk30->unk8 = (t - base) * r + base;
    arg0->unk5C = arg0->unk5C + 1;
    if (arg0->unk5C >= hi) {
        arg0->unk5C = 0;
    }
}


typedef struct func_801358FC_Sub {
    u8 pad0[0x12];
    s16 unk12;
} func_801358FC_Sub;

typedef struct func_801358FC_Node {
    u8 pad0[0x30];
    func_801358FC_Sub *unk30;
} func_801358FC_Node;

typedef struct func_801358FC_Inner {
    u8 pad0[0x18];
    u32 unk18;
} func_801358FC_Inner;

typedef struct func_801358FC_Obj {
    u8 pad0[0x38];
    func_801358FC_Inner *unk38;
} func_801358FC_Obj;

void func_801358FC(func_801358FC_Obj *arg0, func_801358FC_Node **arg1) {
    s32 temp_v0;
    func_801358FC_Sub *temp_v1;

    temp_v0 = (arg0->unk38->unk18 >> 0x10) & 0xFF;
    if (temp_v0 != 0) {
        temp_v1 = (*arg1)->unk30;
        temp_v1->unk12 = (s16) (temp_v1->unk12 + (0x2000 / temp_v0));
        temp_v1 = (*arg1)->unk30;
        temp_v1->unk12 = (s16) (temp_v1->unk12 & 0x1FFF);
    }
}

