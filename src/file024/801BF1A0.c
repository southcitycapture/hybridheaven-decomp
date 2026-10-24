#include "common.h"


extern void func_800058DC(s32, void *);
extern s32 D_801CFCF4;
extern void func_801BF1DC();

void func_801BF1A0(void) {
    func_800058DC(D_801CFCF4, func_801BF1DC);
}



void func_801BF1CC(s32 arg0, s32 arg1) {
    D_801CFCF4 = arg0;
}

extern u16 *D_801CFCF0;
void func_801BF248(s32 arg0, s32 arg1);
extern u8 D_80044090[];
extern s32 func_80005670(s32, void *);

extern void func_80002364(s32, s32, s32, s32);

void func_801BF1DC(void *arg0, s32 arg1) {
    func_80005670(arg0, D_80044090);
    D_801CFCF0 = (u16 *)((u8 *)arg0 + 0x90);
    *D_801CFCF0 = 0;
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC((s32)arg0, (void *)func_801BF248);
}


extern void func_80152238();
extern void func_801BF288();

void func_801BF248(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_801BF288);
    *D_801CFCF0 += 1;
    func_80152238();
}


extern void func_801170DC(s32);
extern void func_801C12B0(void);
extern void func_801BF2DC();

typedef struct func_801BF288_Struct {
    u8 pad[0x92];
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801BF288_Struct;

extern func_801BF288_Struct D_800892B0;

void func_801BF288(s32 arg0, s32 arg1) {
    func_801170DC(0x80);
    D_800892B0.unk92 = 0;
    D_800892B0.unk94 = 0;
    D_800892B0.unk96 = 0;
    D_800892B0.unk98 = 0;
    func_801C12B0();
    func_800058DC(arg0, func_801BF2DC);
}


extern u8 D_8008D5AC[];
extern u8 D_801CE700[];
extern u8 D_801CE70C[];
extern u8 D_801CE728[];
extern u8 D_801CE744[];
extern u8 D_801CE760[];
extern u8 D_801CE77C[];
extern u8 D_801CE798[];
extern u8 D_801CE7B4[];
extern u8 D_801CE7D4[];
extern u8 D_801CE7E4[];
extern u8 D_801CE7F4[];
extern u8 D_801CE800[];
extern u8 D_801CE80C[];
extern u8 D_801CE818[];
extern u8 D_801CE824[];
extern u8 D_801CE830[];
extern u8 D_801CE83C[];
extern u8 D_801CE848[];
extern u8 D_801CE854[];
extern u8 D_801CE860[];
extern u8 D_801CE86C[];
extern u8 D_801CE878[];
extern u8 D_801CE884[];
extern u8 D_801CE890[];
extern u8 D_801CE89C[];
extern void func_801BF630();
extern void func_8001B204();

void func_801BF2DC(s32 arg0, s32 arg1) {
    D_801CFCF0 = (u16 *)(arg0 + 0x90);
    if (D_8008D5AC[2] == 1) {
        func_8001B204(0, 0x8C, 0x50, D_801CE700);
        func_8001B204(2, 0x80, 0x60, D_801CE70C, 3, 2);
        func_8001B204(4, 0x80, 0x6C, D_801CE728, 3, 2);
        func_8001B204(6, 0x80, 0x78, D_801CE744, 3, 2);
        func_8001B204(8, 0x80, 0x84, D_801CE760, 3, 2);
        func_8001B204(0xA, 0x80, 0x90, D_801CE77C, 3, 2);
        func_8001B204(0xC, 0x80, 0x9C, D_801CE798, 3, 2);
        func_8001B204(0xD, 0x80, 0xA8, D_801CE7B4, 3, 2);
    } else {
        func_8001B204(0, 0x7D0, 0x19, D_801CE7D4, 2);
        func_8001B204(2, 0x74, 0x2C, D_801CE7E4);
        func_8001B204(3, 0x74, 0x3E, D_801CE7F4);
        func_8001B204(4, 0x74, 0x46, D_801CE800);
        func_8001B204(5, 0x74, 0x4E, D_801CE80C);
        func_8001B204(6, 0x74, 0x56, D_801CE818);
        func_8001B204(7, 0x74, 0x5E, D_801CE824);
        func_8001B204(8, 0x74, 0x66, D_801CE830);
        func_8001B204(9, 0x74, 0x6E, D_801CE83C);
        func_8001B204(0xA, 0x74, 0x76, D_801CE848);
        func_8001B204(0xB, 0x74, 0x7E, D_801CE854);
        func_8001B204(0xC, 0x74, 0x86, D_801CE860);
        func_8001B204(0xD, 0x74, 0x8E, D_801CE86C);
        func_8001B204(0xE, 0x74, 0x9E, D_801CE878);
        func_8001B204(0xF, 0x74, 0xA6, D_801CE884);
        func_8001B204(0x10, 0x74, 0xAE, D_801CE890);
        func_8001B204(0x11, 0x74, 0xBE, D_801CE89C);
    }
    D_801CFCF0[0] = 0;
    D_801CFCF0[1] = 0;
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC(arg0, func_801BF630);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801BF630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801BFFBC.s")


typedef struct func_801C01AC_S2 {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad2[0x32];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C01AC_S2;
typedef struct func_801C01AC_S1 {
    u8 pad[0x2C];
    func_801C01AC_S2 *unk2C;
} func_801C01AC_S1;
typedef struct func_801C01AC_S0 {
    u8 pad[0x24];
    func_801C01AC_S1 *unk24;
} func_801C01AC_S0;

extern f32 func_8001518C(f32);
extern f32 func_80029280(f32);
extern f64 D_801CEA90;
extern f64 D_801CEA98;
extern f64 D_801CEAA0;
extern f64 D_801CEAA8;
extern f64 D_801CEAB0;
extern f64 D_801CEAB8;

void func_801C01AC(func_801C01AC_S0 *arg0, func_801C01AC_S1 **arg1) {
    (*arg1)->unk2C->unk4A = (u32)((func_80029280(func_8001518C((f32)((f64)arg0->unk24->unk2C->unk12 * D_801CEA90 * D_801CEA98))) * 40.0f) + 180.0f);
    (*arg1)->unk2C->unk49 = (u32)((func_80029280(func_8001518C((f32)((f64)arg0->unk24->unk2C->unk10 * D_801CEAA0 * D_801CEAA8 + 120.0))) * 40.0f) + 180.0f);
    (*arg1)->unk2C->unk48 = (u32)((func_80029280(func_8001518C((f32)((f64)arg0->unk24->unk2C->unk14 * D_801CEAB0 * D_801CEAB8 + 240.0))) * 25.0f) + 50.0f);
    arg0->unk24->unk2C->unk12 += 2;
    arg0->unk24->unk2C->unk10 += 1;
    arg0->unk24->unk2C->unk14 += 4;
}


extern void func_801C0608();

extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_8012C784(void *, s32, s32);
extern u8 D_80164F30[];
extern u8 D_8017BA00[];
extern f32 D_801CEAC0;

typedef struct func_801C0500_Cam {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
} func_801C0500_Cam;

typedef struct func_801C0500_Props {
    u8 pad[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad2[0x8];
    void *unk30;
} func_801C0500_Props;

typedef struct func_801C0500_Holder {
    u8 pad[0x2C];
    func_801C0500_Props *unk2C;
} func_801C0500_Holder;

typedef struct func_801C0500_Owner {
    u8 pad[0x2C];
    func_801C0500_Cam *unk2C;
} func_801C0500_Owner;

typedef struct func_801C0500_Arg0 {
    u8 pad[0x24];
    func_801C0500_Owner *unk24;
} func_801C0500_Arg0;

void func_801C0500(void *arg0, void **arg1) {
    func_801C0500_Props *temp_v0;
    f32 temp_f0;

    func_80005E44(arg0, D_80164F30);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    temp_f0 = D_801CEAC0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk18 = temp_f0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk1C = temp_f0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk20 = temp_f0;
    func_8012C784(arg0, 0, 2);
    func_800058DC((s32) arg0, (void *) func_801C0608);
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk4 = 0.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk8 = 15.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unkC = -40.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk10 = 0x800;
    temp_v0 = ((func_801C0500_Holder *) *arg1)->unk2C;
    temp_v0->unk24 = temp_v0->unk24 | 0x4000;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk30 = (void *) D_8017BA00;
}


typedef struct func_801C0608_StructInner {
    u8 pad[0x4C];
    s8 unk4C;
} func_801C0608_StructInner;

typedef struct func_801C0608_StructOuter {
    u8 pad[0x2C];
    func_801C0608_StructInner *unk2C;
} func_801C0608_StructOuter;

typedef struct func_801C0608_StructArg0 {
    u8 pad[0x90];
    f32 unk90;
} func_801C0608_StructArg0;

extern u8 D_801CE930[];

void func_801C0608(func_801C0608_StructArg0 *arg0, func_801C0608_StructOuter **arg1) {
    func_8001B204(0, 0x80, 0x78, D_801CE930);
    arg0->unk90 = (f32) ((f64) arg0->unk90 + 0.5);
    (*arg1)->unk2C->unk4C = (s8) ((s32) arg0->unk90 % 128);
}


typedef struct func_801C0694_Props {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
} func_801C0694_Props;
typedef struct func_801C0694_Holder {
    u8 pad[0x2C];
    func_801C0694_Props *unk2C;
} func_801C0694_Holder;
typedef struct func_801C0694_Info {
    u8 pad[0x10];
    s32 unk10;
} func_801C0694_Info;
typedef struct func_801C0694_Struct {
    u8 pad0[0x24];
    func_801C0694_Holder *unk24;
    u8 pad28[4];
    u32 unk2C;
    u8 pad30[8];
    func_801C0694_Info *unk38;
} func_801C0694_Struct;

extern u8 D_8017B1F8[];
extern u8 D_8017B0A8[];
extern f32 D_801CEAC4;
extern f32 D_801CEAC8;
extern u8 func_801C08D4[];
extern u8 func_801C0A88[];
void func_801C0B24(s32 arg0, s32 arg1);

void func_801C0694(func_801C0694_Struct *arg0, func_801C0694_Holder **arg1) {
    s32 t;
    f32 k;
    func_80005E44(arg0, D_80164F30);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    k = D_801CEAC4;
    arg0->unk2C |= 0x20;
    (*arg1)->unk2C->unk18 = k;
    (*arg1)->unk2C->unk1C = k;
    (*arg1)->unk2C->unk20 = k;
    t = arg0->unk38->unk10;
    if (t == 0) goto c0;
    if (t == 1) goto c1;
    if (t != 2) return;
    goto c2;
c0:
    (*arg1)->unk2C->unk30 = (u32)D_8017B1F8 | 0x40000000;
    (*arg1)->unk2C->unk24 |= 0x5000;
    func_800058DC((s32)arg0, func_801C08D4);
    arg0->unk24->unk2C->unk4 = 0.0f;
    arg0->unk24->unk2C->unk8 = 13.0f;
    arg0->unk24->unk2C->unkC = -37.0f;
    arg0->unk24->unk2C->unk12 = 0x800;
    return;
c1:
    func_800058DC((s32)arg0, func_801C0A88);
    arg0->unk24->unk2C->unk4 = 0.0f;
    arg0->unk24->unk2C->unk8 = -13.0f;
    arg0->unk24->unk2C->unkC = -37.0f;
    arg0->unk24->unk2C->unk12 = -0x800;
    return;
c2:
    k = D_801CEAC8;
    (*arg1)->unk2C->unk18 = k;
    (*arg1)->unk2C->unk1C = k;
    (*arg1)->unk2C->unk20 = k;
    (*arg1)->unk2C->unk30 = (u32)D_8017B0A8 | 0x40000000;
    func_800058DC((s32)arg0, func_801C0B24);
    arg0->unk24->unk2C->unk4 = 10.0f;
    arg0->unk24->unk2C->unk8 = -30.0f;
    arg0->unk24->unk2C->unkC = 470.0f;
    arg0->unk24->unk2C->unk12 = 0x1000;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C08D4.s")


void func_801C09E4(u8 *arg0, u8 **arg1) {
    u8 *temp_v0;
    s16 temp_v1;

    temp_v0 = *(u8 **)(*(u8 **)(arg0 + 0x24) + 0x2C);
    temp_v1 = *(s16 *)(temp_v0 + 0x12);
    if ((temp_v1 & 0x1FFF) != 0x1000) {
        *(s16 *)(temp_v0 + 0x12) = temp_v1 + 0x10;
    }
    *(s8 *)(*(u8 **)(*arg1 + 0x2C) + 0x4C) = (s8) ((s32) *(f32 *)(arg0 + 0x90) % 128);
    *(s8 *)(*(u8 **)(*arg1 + 0x2C) + 0x4E) = (s8) ((s32) *(f32 *)(arg0 + 0x90) % 128);
    *(f32 *)(arg0 + 0x90) = (f32) ((f64) *(f32 *)(arg0 + 0x90) + 0.5);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C0A88.s")


typedef struct func_801C0AF8_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_801C0AF8_StructInner;

typedef struct func_801C0AF8_StructMid {
    u8 pad[0x2C];
    func_801C0AF8_StructInner *unk2C;
} func_801C0AF8_StructMid;

typedef struct func_801C0AF8_StructArg0 {
    u8 pad[0x24];
    func_801C0AF8_StructMid *unk24;
} func_801C0AF8_StructArg0;

void func_801C0AF8(func_801C0AF8_StructArg0 *arg0, s32 arg1) {
    func_801C0AF8_StructInner *temp_v0;
    s16 temp_v1;

    temp_v0 = arg0->unk24->unk2C;
    temp_v1 = temp_v0->unk12;
    if ((temp_v1 & 0x1FFF) != 0x1000) {
        temp_v0->unk12 = temp_v1 - 0x10;
    }
}


void func_801C0B24(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C0B30.s")


void func_801C0F64(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_801C0F98();

void func_801C0F70(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_801C0F98);
}


typedef struct func_801C0F98_Struct {
    u8 pad[0x90];
    f32 unk90;
} func_801C0F98_Struct;

extern u8 D_801CE978[];
extern u8 D_801CE994[];
extern u8 D_801CE9B0[];
extern u8 D_801CE9CC[];
extern void func_801C1034();

void func_801C0F98(func_801C0F98_Struct *arg0, s32 arg1) {
    arg0->unk90 = 150.0f;
    func_8001B204(1, 0x7D0, 0x50, D_801CE978);
    func_8001B204(2, 0x7D0, 0x5A, D_801CE994);
    func_8001B204(3, 0x7D0, 0x64, D_801CE9B0);
    func_8001B204(4, 0x7D0, 0x6E, D_801CE9CC);
    func_800058DC((s32)arg0, func_801C1034);
}


void func_801C1034(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_801C1040_Struct {
    u8 pad[0x10];
    struct func_801C1040_Struct *unk10;
    u8 pad2[0x1C];
    u8 *unk30;
} func_801C1040_Struct;

void func_801C1040(arg0, arg1, arg2)
s32 arg0;
s8 arg1;
s32 arg2;
{
    func_801C1040_Struct *p;
    u8 i;
    s32 n;

    p = (func_801C1040_Struct *)arg0;
    i = 0;
    n = *(u32 *)&arg2 & 0xFF;
    for (; i < n; ) {
        i++;
        p->unk30[0xB] = arg1;
        p = p->unk10;
    }
}


typedef struct func_801C1088_StructInner {
    u8 pad[0xB];
    u8 unkB;
} func_801C1088_StructInner;

typedef struct func_801C1088_StructOuter {
    u8 pad[0x30];
    func_801C1088_StructInner *unk30;
} func_801C1088_StructOuter;

s32 func_801C1088(s32 arg0, s8 arg1) {
    s16 var_v1;
    s32 ret;

    var_v1 = ((func_801C1088_StructOuter *)arg0)->unk30->unkB;
    var_v1 += arg1;
    if (var_v1 < 0) {
        var_v1 = 0;
        ret = 1;
    } else if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
        ret = 1;
    } else {
        ret = 0;
    }
    ((func_801C1088_StructOuter *)arg0)->unk30->unkB = var_v1;
    return ret;
}


u8 func_801C10DC(void *arg0, u8 arg1, s8 arg2) {
    u8 pad;
    u8 ret;
    s32 count;
    s32 i;
    void *p;

    count = arg1;
    p = arg0;
    i = 0;
    if (count > 0) {
        do {
            ret = func_801C1088((s32)p, arg2);
            i = (i + 1) & 0xFF;
            p = ((void **)p)[4];
        } while (i < count);
    }
    return ret;
}

extern s32 D_801CC8A8;

typedef struct func_801C1160_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1160_Struct;

extern void func_80145390(s32);
extern void func_801C258C();

s32 func_801C1160(void) {
    if (D_801CC8A8 != 0) {
        func_80145390(0x1800);
        ((func_801C1160_Struct *) D_801CC8A8)->unk3C = 0;
        func_800058DC(D_801CC8A8, func_801C258C);
        return 1;
    }
    return 0;
}


struct func_801C11BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

extern struct func_801C11BC_Struct D_801CC9D0;
extern s32 D_801BBC2C;
extern s32 D_801CC8A4;
s32 func_8012C4D0(s32, struct func_801C11BC_Struct, s32);

s32 func_801C11BC(arg0)
s8 arg0;
{
    if (D_801CC8A4 == 0) {
        D_801CC8A4 = func_8012C4D0(D_801BBC2C, D_801CC9D0, 3);
        if (D_801CC8A4 != 0) {
            ((s8 *)D_801CC8A4)[0x90] = arg0;
            return 1;
        }
    }
    return 0;
}

struct func_801C3410_Struct {
    u8 pad[0x90];
    s8 unk90;
};
void func_801C3410(struct func_801C3410_Struct *arg0, s32 *arg1);

s32 func_801C125C(s8 arg0) {
    if (D_801CC8A4 != 0) {
        ((struct func_801C3410_Struct *)D_801CC8A4)->unk90 = arg0;
        func_800058DC(D_801CC8A4, (void *)func_801C3410);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C12B0.s")

typedef struct func_801C3C14_Struct {
    u8 pad[0x2];
    u16 unk2;
    u16 unk4;
    u8 pad2[0x4];
    u16 unkA;
    u16 unkC;
    u8 pad3[0x3A2 - 0xE];
    u16 unk3A2;
    u8 pad4[0xEF2 - 0x3A4];
    u16 unkEF2;
} func_801C3C14_Struct;
extern func_801C3C14_Struct D_801BBBF0;

typedef struct func_801C1308_Struct {
    u8 pad[0x17];
    s8 unk17;
    s8 unk18;
    s8 unk19;
    s8 unk1A;
    u8 unk1B;
    u8 unk1C;
} func_801C1308_Struct;

void func_801C1308(void) {
    func_801C1308_Struct *p = (func_801C1308_Struct *)&D_801BBBF0;

    p->unk17 = 0;
    p->unk18 = 1;
    p->unk1A = 0;
    p->unk19 = 1;
    p->unk1B = 1;
    p->unk1C = 1;
}

extern u8 D_80089474[];
s32 func_801C1334(void) {
    return *(u16 *)(D_80089474 + 4);
}



u16 func_801C1340(void) {
    return *(u16 *)(D_80089474 + 0xC);
}

extern u8 D_801CC8CC;

extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);
extern void func_800208C4(s32);
extern void func_801C1508();
extern void *D_801CC8A0;
extern s32 D_801CC8AC;
extern s32 D_801CC8B0;
extern u8 D_801CC9BC[];
extern u8 D_801CC9E4[];
extern u8 D_801CCA0C[];
extern u8 D_801CEAE0[];
extern s32 D_801C11BC(s32);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_801C134C_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C134C_Struct;

void func_801C134C(void *arg0, s32 arg1) {
    f32 temp;
    f32 t;
    f32 z;
    f32 pad;
    f32 sp5C;
    f32 v;

    v = func_8001EAD0(0x266);
    temp = func_8001EB64(0x266);
    D_801CC8A0 = arg0;
    sp5C = v / temp;
    D_801C11BC(0x64);
    if (D_801CC8CC == 2) {
        func_80116E80(0x100);
        D_801CC8A8 = func_80005670((s32)arg0, D_801CC9BC);
        D_801CC8AC = func_80005670((s32)arg0, D_801CC9E4);
        D_801CC8B0 = func_80005670((s32)arg0, D_801CCA0C);
        t = 10.0f;
        z = 0.0f;
        v = (t < 0.0f) ? -t : t;
        func_8011AAF4(D_801CEAE0, 0x205, (s32)arg0, 0, 1, 3.0f, t, z, 2.0f, 3.0f, z, v * sp5C + z, 2.0f, z, 30.0f, -1, 0xFFFFFFFF);
        func_801C125C(-3);
        ((func_801C134C_Struct *)arg0)->unk3C = 0;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk17 = 0;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk18 = 1;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk19 = 1;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk1A = 0;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk1B = 1;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk1C = 1;
        func_80002364(0x0C000C0C, 0xA, 2, 0);
        func_800208C4(0x87);
        func_800058DC((s32)arg0, func_801C1508);
    }
}


typedef struct func_801C1508_StructB {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    u8 pad2[4];
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801C1508_StructB;
typedef struct func_801C1508_StructA {
    u8 pad[0x2C];
    func_801C1508_StructB *unk2C;
} func_801C1508_StructA;
typedef struct func_801C1508_StructP {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C1508_StructP;
extern func_801C1508_StructA *D_801BBCD8;
extern u8 D_801CEB18[];
extern f32 D_801CF260;
extern u8 func_801C1624[];
void func_801C1A30(s32 arg0, s32 arg1);

void func_801C1508(func_801C1508_StructP *arg0, s32 arg1) {
    func_801C1508_StructB *p;
    f32 t;

    if (func_801C1334() & 0xB000) {
        func_800058DC((s32)arg0, (void *)func_801C1A30);
    }
    func_8011AAF4(D_801CEB18, 0x219, (s32)arg0, 0, 1, 3.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk44 + D_801CF260, 3.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44 + D_801CF260, 0.0f, 30.0f, -1, -1);
    arg0->unk3C++;
    if (arg0->unk3C == 0x1C2) {
        func_801C11BC(3);
    }
    if (D_801CC8CC == 2) {
        func_800058DC((s32)arg0, (void *)func_801C1624);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1624.s")


typedef struct func_801C1764_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1764_Struct;

extern void func_801C17C8();

void func_801C1764(func_801C1764_Struct *arg0, s32 arg1) {
    if (func_801C1334() & 0xB000) {
        func_800058DC(arg0, func_801C1A30);
    }
    if (D_801CC8CC == 0) {
        arg0->unk3C = 0x30;
        func_800058DC(arg0, func_801C17C8);
    }
}


typedef struct func_801C17C8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C17C8_Struct;

extern u8 D_801CEB88[];
extern void func_801C184C();

void func_801C17C8(func_801C17C8_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_800058DC((s32) arg0, func_801C1A30);
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg0->unk3C = 0x384;
        func_8001B204(0, 0x7D0, 0xA2, D_801CEB88);
        func_800058DC((s32) arg0, func_801C184C);
    }
}


extern void func_80020718(s32);
extern void func_801C5A00();
extern void func_801C18FC();
extern void func_801C2050();
extern void func_801C27DC();
extern u8 D_801CEB9C[];

struct func_801C184C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_801C184C(struct func_801C184C_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_8001B204(0, 0x7D0, 0xA2, D_801CEB9C, 4);
        func_800058DC(D_801CC8A8, (void *) func_801C27DC);
        func_800058DC((s32) arg0, (void *) func_801C18FC);
        arg0->unk3C = 0x1E;
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        func_80020718(8);
        func_801C5A00();
        func_800058DC((s32) arg0, (void *) func_801C2050);
    }
}


extern u8 D_801CC8C4;
extern u16 D_80037754;
extern u8 D_801CEBB4[];
extern u8 D_801CEBC4[];
extern u8 D_801CEBD4[];
extern u8 D_801CEBE4[];
extern u8 D_801CEBF4[];
extern u8 D_801CEC04[];
extern u8 D_801CEC14[];
extern void func_801C1DB8();

typedef struct func_801C18FC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C18FC_Struct;

void func_801C18FC(func_801C18FC_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        arg0->unk3C = 0x384;
        func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 0xA) + 0x76), D_801CEBB4);
        func_8001B204(1, 0x7D0, 0x76, D_801CEBC4);
        func_8001B204(2, 0x7D0, 0x80, D_801CEBD4);
        func_8001B204(3, 0x7D0, 0x8A, D_801CEBE4);
        func_8001B204(4, 0x7D0, 0x94, D_801CEBF4);
        if (D_80037754 == 1) {
            func_8001B204(5, 0x7D0, 0x9E, D_801CEC04);
        } else {
            func_8001B204(5, 0x7D0, 0x9E, D_801CEC14, 6);
        }
        func_800058DC((s32) arg0, func_801C1DB8);
    }
}


extern void func_801C33C8();

extern void func_801C1A98();

typedef struct func_801C1A30_Struct {
    u8 pad[0x90];
    s8 unk90;
} func_801C1A30_Struct;

void func_801C1A30(s32 arg0, s32 arg1) {
    if (D_801CC8A4 == 0) {
        func_801C11BC(0x64);
    } else {
        ((func_801C1A30_Struct *) D_801CC8A4)->unk90 = 0x64;
        func_800058DC(D_801CC8A4, (void *) func_801C33C8);
    }
    func_800058DC(arg0, (void *) func_801C1A98);
}

extern s32 D_801CC8B4;
extern s32 D_801CC8B8;
extern u8 D_801CC9F8[];
void func_801C1BDC(s32 arg0, s32 arg1);
extern u8 D_801CCA20[];
extern u8 D_801CEC34[];

void func_801C1A98(s32 arg0, s32 arg1) {
    if (D_801CC8CC == 2) {
        func_8011AAF4(D_801CEC34, 0x280, arg0, 0, 1, 3.0f, 0.0f, 120.0f, -22.0f, 3.0f, 0.0f, 42.5f, 0.0f, 0.0f, 30.0f, -1, -1);
        if (D_801CC8B4 == 0) {
            D_801CC8B4 = func_80005670(arg0, D_801CC9F8);
        }
        if (D_801CC8B8 == 0) {
            D_801CC8B8 = func_80005670(arg0, D_801CCA20);
        }
        if (D_801CC8AC != 0) {
            func_80005700(D_801CC8AC);
        }
        if (D_801CC8B0 != 0) {
            func_80005700(D_801CC8B0);
        }
        func_800058DC(arg0, func_801C1BDC);
    }
}


extern s32 D_801CFD08;
extern s16 D_801CC8D0;
extern void func_801C1C44();
extern void func_801C28E4();

void func_801C1BDC(s32 arg0, s32 arg1) {
    func_800058DC(D_801CC8A8, &func_801C28E4);
    func_801C1040(D_801CFD08, -1, 5);
    func_801C125C(-0x64);
    D_801CC8D0 = 0;
    func_800058DC(arg0, &func_801C1C44);
}


void func_801C1D7C();
extern u8 D_801CEC6C[];
extern u8 D_801CEC7C[];
extern u8 D_801CEC8C[];
extern u8 D_801CEC9C[];
extern u8 D_801CECAC[];
extern u8 D_801CECBC[];
extern u8 D_801CECCC[];

void func_801C1C44(s32 arg0, s32 arg1) {
    u16 *p = (u16 *)&D_801CC8D0;

    *p = *p + 1;
    if (*p >= 0x1E) {
        func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 0xA) + 0x76), D_801CEC6C);
        func_8001B204(1, 0x7D0, 0x76, D_801CEC7C);
        func_8001B204(2, 0x7D0, 0x80, D_801CEC8C);
        func_8001B204(3, 0x7D0, 0x8A, D_801CEC9C);
        func_8001B204(4, 0x7D0, 0x94, D_801CECAC);
        if (D_80037754 == 1) {
            func_8001B204(5, 0x7D0, 0x9E, D_801CECBC);
        } else {
            func_8001B204(5, 0x7D0, 0x9E, D_801CECCC, 6);
        }
        func_800058DC(arg0, func_801C1D7C);
    }
}


typedef struct func_801C1D7C_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1D7C_Struct;


void func_801C1D7C(func_801C1D7C_Struct *arg0, s32 arg1) {
    if (D_801CC8CC == 0) {
        arg0->unk3C = 0x384;
        func_800058DC(arg0, func_801C1DB8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1DB8.s")


void func_801C2050(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

extern void func_80145348(u8 *, s32, s32);
extern void func_80146208(u8 *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_80006214(void *);
extern u8 func_801C220C[];

void func_801C205C(u8 *arg0, s32 *arg1) {
    s32 pad;
    u8 sp5B;
    u8 n;
    u8 i;

    n = D_80006214(arg0);
    for (i = 0; i < 4; i++) {
        func_80146208(arg0, &sp5B, 0x66, (s16)((i << 6) + 0x10), 0xBC, 0x40, 0x20, 0, 0, 0, 0x228, i + 0x15);
        func_80145348(arg0, 1, 0);
    }
    func_80146208(arg0, &sp5B, 0x66, (s16)((i << 6) + 0x10), 0xBC, 0x20, 0x20, 0, 0, 0, 0x228, i + 0x15);
    func_80145348(arg0, 1, 0);
    D_801CFD08 = arg1[n];
    n = D_80006214(arg0);
    for (i = 0; i < n; i++) {
        *(s16 *)((u8 *)arg1[i] + 0x28) = 0x100;
        func_801C1040(arg1[i], 0, 1);
    }
    *(s16 *)(arg0 + 0x3C) = 0;
    func_800058DC((s32)arg0, func_801C220C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C220C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C2280.s")

extern struct func_801C2684_Node *D_801CFD04;
typedef struct func_801C2684_Node {
    u8 pad[0x10];
    struct func_801C2684_Node *unk10;
} func_801C2684_Node;

typedef struct func_801C2518_StructA {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C2518_StructA;
typedef struct func_801C2518_StructB {
    u8 pad[0xB];
    u8 unkB;
} func_801C2518_StructB;
typedef struct func_801C2518_StructC {
    u8 pad[0x30];
    func_801C2518_StructB *unk30;
} func_801C2518_StructC;

void func_801C2518(func_801C2518_StructA *arg0, s32 arg1) {
    func_801C2518_StructC *p = (func_801C2518_StructC *)D_801CFD04;
    s16 b = p->unk30->unkB;
    if (arg0->unk3C >= 0xB5) {
        b = b + 3;
        if (b >= 0x100) {
            b = 0xFF;
        }
        func_801C1040((s32)p, (s8)b, 9);
        return;
    }
    arg0->unk3C = arg0->unk3C + 1;
}


extern void func_801453CC();
extern void func_801C2684();

typedef struct func_801C258C_Node {
    u8 pad[0x10];
    struct func_801C258C_Node *unk10;
} func_801C258C_Node;
typedef struct func_801C258C_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C258C_Arg0;

void func_801C258C(func_801C258C_Arg0 *arg0, s32 arg1) {
    func_801C258C_Node *n;
    u8 i;

    n = *(func_801C258C_Node **)((u8 *)&D_801CFCF4 + 0x10);
    func_801453CC((s32)n, 0x100, 0, 0xD, 1, 0xD, 1);
    n = n->unk10;
    i = 0;
    do {
        func_801453CC((s32)n, 0, 0, 0xD, 1, 0xD, 1);
        i++;
        n = n->unk10;
    } while (i < 8);
    func_801C10DC(*(void **)((u8 *)&D_801CFCF4 + 0xC), 0xC, 0x10);
    arg0->unk3C++;
    if (arg0->unk3C >= 0x10) {
        arg0->unk3C = 0;
        func_80145390(0x1800);
        func_800058DC((s32)arg0, (void *)func_801C2684);
    }
}



typedef struct func_801C2684_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C2684_Arg0;

extern func_801C2684_Node *D_801CFD00;
extern void func_801C27D0();

void func_801C2684(func_801C2684_Arg0 *arg0, s32 arg1) {
    u8 i;
    func_801C2684_Node *node;

    node = D_801CFD04;
    func_801453CC(node, 0x80, 0, 1, 0x1D, 1, 0x1E);
    node = node->unk10;
    i = 0;
    do {
        func_801453CC(node, 0, 0, 1, 0x1D, 1, 0x1E);
        i++;
        node = node->unk10;
    } while (i < 8);
    node = D_801CFD00;
    func_801453CC(node, 0x80, 1, 1, 0x1F, 0x1F, 0xD);
    node = node->unk10;
    i = 0;
    do {
        func_801453CC(node, 0, 1, 1, 0x1F, 0x1F, 0xD);
        i++;
        node = node->unk10;
    } while (i < 0xB);
    arg0->unk3C++;
    if (arg0->unk3C >= 0x20) {
        func_800058DC((s32) arg0, func_801C27D0);
    }
}


void func_801C27D0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_801C27DC_StructInner {
    u8 pad[2];
    s16 unk2;
} func_801C27DC_StructInner;
typedef struct func_801C27DC_StructOuter {
    u8 pad[0x30];
    func_801C27DC_StructInner *unk30;
} func_801C27DC_StructOuter;

void func_801C27DC(s32 arg0, func_801C27DC_StructOuter **arg1) {
    s16 unused[6];
    s16 value;
    s32 i;
    s32 j;
    s32 n;

    value = arg1[0]->unk30->unk2;
    if (value >= 0x15) {
        value -= 4;
    } else {
        value = 0x14;
        func_800058DC(arg0, func_801C28E4);
    }
    n = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            arg1[n++]->unk30->unk2 = value + i * 0x20;
        }
    }
    for (i = 0; i < 9; i++) {
        arg1[n++]->unk30->unk2 = value + 0x10;
    }
}

void func_801C2A38(s32 arg0, s32 arg1);
typedef struct func_801C28E4_S { u8 pad[0x30]; s16 *unk30; } func_801C28E4_S;
extern void func_80145310(void *, s32, s32);
void func_801C28E4(s32 arg0, func_801C28E4_S **arg1)
{
  func_801C28E4_S **p = arg1;
  s32 y;
  s32 i;
  func_801C2684_Node *n;
  for (y = 0x14; y < 0x74; y += 0x20)
  {
    p[0]->unk30[0] = 0x18;
    p[0]->unk30[1] = y;
    p[1]->unk30[0] = 0x58;
    p[1]->unk30[1] = y;
    p[2]->unk30[0] = 0x98;
    p[2]->unk30[1] = y;
    p[3]->unk30[0] = 0xD8;
    p[3]->unk30[1] = y;
    p += 4;
  }

  i = 0x20;
  for (y = 0x18; y < 0x138; y += i)
  {
    p[0]->unk30[0] = y;
    p[0]->unk30[1] = 0x24;
    p++;
  }

  n = D_801CFD04;
  for (i = 0; i < 9; i++)
  {
    func_80145310(n, 0x1D, 0x1E);
    n = n->unk10;
  }

  n = D_801CFD00;
  for (i = 0; i != 12; i++)
  {
    func_80145310(n, 0x1F, 0xD);
    n = n->unk10;
  }

  func_800058DC(arg0, func_801C2A38);
}


void func_801C2A38(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C2A44.s")


struct func_801C2D78_Struct_Inner {
    u8 pad[0x4D];
    u8 unk4D;
};

struct func_801C2D78_Struct_Mid {
    u8 pad[0x30];
    struct func_801C2D78_Struct_Inner *unk30;
};

struct func_801C2D78_Struct_Arg1 {
    u8 pad[0x8];
    struct func_801C2D78_Struct_Mid *unk8;
};

struct func_801C2D78_Struct_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_801C2D78(struct func_801C2D78_Struct_Arg0 *arg0, struct func_801C2D78_Struct_Arg1 *arg1)
{
  s32 temp_t7;
  ;
  if (((++arg0->unk3C) % 3) == 0)
  {
    struct func_801C2D78_Struct_Inner *temp_v0 = arg1->unk8->unk30;
    temp_v0->unk4D = (u8) (temp_v0->unk4D + 1);
  }
 ;
}

void func_801C2FDC(s32 arg0, s32 *arg1);

typedef struct func_801C2DB8_Row { f32 f[5]; } func_801C2DB8_Row;
typedef struct func_801C2DB8_Tab { func_801C2DB8_Row r[7]; } func_801C2DB8_Tab;
typedef struct func_801C2DB8_V { s32 a, b, c, d; } func_801C2DB8_V;
typedef struct func_801C2DB8_P {
    u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; u8 pad14[4];
    f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8]; s32 unk30;
} func_801C2DB8_P;
typedef struct func_801C2DB8_O { u8 pad[0x30]; func_801C2DB8_P *unk30; } func_801C2DB8_O;

extern func_801C2DB8_V D_80164F40;
extern func_801C2DB8_Tab D_801CCA48;
extern f32 D_801CF290;
extern s32 func_80126A0C(s32, s32, s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012D918(s32, s32, s32, u8, s32);
extern s32 func_8000C3B0(void *);
extern void func_801451C0(void *, s32);

void func_801C2DB8(s32 arg0, func_801C2DB8_O **A) {
    func_801C2DB8_V spE8;
    func_801C2DB8_Tab sp5C;
    f32 k;
    u8 i;

    spE8 = D_80164F40;
    sp5C = D_801CCA48;
    if (func_80126A0C(arg0, 0x74, 0) != 0) {
        i = 0;
        k = D_801CF290;
        do {
            func_80005E44((void *)arg0, &spE8);
            func_80006214((void *)arg0);
            func_8012C89C(arg0, i, 3, 4);
            func_8012D918(arg0, 0x228, 0x2F, i, 0);
            A[i]->unk30->unk24 = 0x12;
            A[i]->unk30->unk30 = func_8000C3B0(A[i]);
            A[i]->unk30->unk4 = sp5C.r[i].f[0];
            A[i]->unk30->unk8 = sp5C.r[i].f[1];
            A[i]->unk30->unkC = sp5C.r[i].f[2];
            A[i]->unk30->unk18 = sp5C.r[i].f[3];
            A[i]->unk30->unk1C = sp5C.r[i].f[4];
            A[i]->unk30->unk20 = k;
            A[i]->unk30->unk12 = 0x800;
            func_801451C0(A[i], 3);
            i++;
        } while (i < 7);
        func_80145390(0);
        func_800058DC(arg0, func_801C2FDC);
    }
}


extern void func_80145E78(s32, s32, s32);

void func_801C2FDC(s32 arg0, s32 *arg1) {
    func_801453CC(arg1[0], 0x1A0, 0, 3, 0x21, 0x22, 0x22);
    func_80145E78(arg1[1], 0xC0, 1);
    func_80145E78(arg1[2], 0xA0, 2);
    func_80145E78(arg1[3], 0, 2);
    func_80145E78(arg1[4], 0x80, 3);
    func_80145E78(arg1[5], 0, 3);
    func_80145E78(arg1[6], 0, 3);
}


typedef struct func_801C3090_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C3090_Sub;
typedef struct func_801C3090_Obj {
    u8 pad[0x30];
    func_801C3090_Sub *unk30;
} func_801C3090_Obj;
extern f32 D_801CF294;
void func_801C3288();

void func_801C3090(s32 arg0, func_801C3090_Obj **arg1) {
    func_801C2DB8_V sp60;
    u8 i;
    f32 k;

    sp60 = D_80164F40;
    for (i = 0, k = D_801CF294; i < 3; i++) {
        func_80005E44((void *)arg0, &sp60);
        func_80006214((void *)arg0);
        func_8012C89C(arg0, i, 0x228, 0x2A);
        arg1[i]->unk30->unk24 = 0x15;
        arg1[i]->unk30->unk30 = func_8000C3B0(arg1[i]);
        arg1[i]->unk30->unk4 = 0.0f;
        arg1[i]->unk30->unk8 = -(i * 0xA0);
        arg1[i]->unk30->unkC = 0.0f;
        arg1[i]->unk30->unk18 = k;
        arg1[i]->unk30->unk1C = k;
        arg1[i]->unk30->unk20 = k;
        arg1[i]->unk30->unk10 = 0;
        arg1[i]->unk30->unk12 = 0;
        arg1[i]->unk30->unk14 = 0;
        arg1[i]->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        arg1[i]->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        arg1[i]->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        arg1[i]->unk30->unk4F = 0x61;
    }
    func_800058DC(arg0, func_801C3288);
}


typedef struct func_801C3288_Sub {
    u8 pad[0x8];
    f32 unk8;
    u8 pad2[0x6];
    s16 unk12;
} func_801C3288_Sub;

typedef struct func_801C3288_Obj {
    u8 pad[0x30];
    func_801C3288_Sub *unk30;
} func_801C3288_Obj;

void func_801C3288(func_801C3288_Sub *arg0, func_801C3288_Obj **arg1) {
    s32 var_v0;
    s32 temp_t6;
    s32 temp_t0;
    func_801C3288_Obj **temp_v1;

    temp_t6 = 0xAA;
    temp_t0 = -0x136;
    var_v0 = 0;
    do {
        temp_v1 = (func_801C3288_Obj **) ((s32) arg1 + (var_v0 << 2));
        arg0 = (*temp_v1)->unk30;
        arg0->unk8 = arg0->unk8 + 0.625f;
        arg0 = (*temp_v1)->unk30;
        if ((f32) temp_t6 <= arg0->unk8) {
            arg0->unk8 = (f32) temp_t0;
            arg0 = (*temp_v1)->unk30;
        }
        var_v0 = (var_v0 + 1) & 0xFF;
        arg0->unk12 = (s16) (s32) ((f32) arg0->unk12 + 16.0f);
    } while (var_v0 < 3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3334.s")


typedef struct func_801C33C8_Struct {
    u8 pad[0x90];
    s8 unk90;
} func_801C33C8_Struct;


void func_801C33C8(func_801C33C8_Struct *arg0, s32 *arg1) {
    if (func_801C1088(*arg1, arg0->unk90) != 0) {
        D_801CC8CC = 2;
        return;
    }
    D_801CC8CC = 1;
}




void func_801C3410(struct func_801C3410_Struct *arg0, s32 *arg1) {
    if (func_801C1088(*arg1, arg0->unk90) != 0) {
        D_801CC8CC = 0;
        D_801CC8A4 = 0;
        func_80005700(arg0);
        return;
    }
    D_801CC8CC = 1;
}


extern void func_801C3934();

void func_801C346C(u8 *arg0, u8 **arg1) {
    u8 sp4F;

    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x40, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x27);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x50, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x60, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x70, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x80, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x90, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x29);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x40, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x27);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x50, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x60, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x70, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x80, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x90, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x29);
    func_80145348(arg0, 2, 0xF);
    for (sp4F = 0; sp4F < 0xC; sp4F++) {
        *(s16 *)(arg1[sp4F] + 0x28) = 0x100;
    }
    func_800058DC((s32)arg0, &func_801C3934);
}


void func_801C3934(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

extern u8 D_801CC8C8;

extern u8 D_801CED10[];
extern u8 D_801CED20[];
extern u8 D_801CED2C[];
extern u8 D_801CED38[];
extern u8 D_801CED44[];
extern u8 D_801CED48[];
extern u8 D_801CED4C[];
extern void func_801C3A40();

void func_801C3940(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CED10);
    func_8001B204(1, 0x7D0, 0x8A, D_801CED20);
    func_8001B204(2, 0x7D0, 0x94, D_801CED2C);
    func_8001B204(3, 0x7D0, 0x9E, D_801CED38);
    func_8001B204(4, 0, 0, D_801CED44);
    func_8001B204(5, 0, 0, D_801CED48);
    func_8001B204(6, 0, 0, D_801CED4C);
    func_800058DC(arg0, func_801C3A40);
}


extern u8 D_801CED50[];
extern u8 D_801C56B8[];
void func_801C3BA4();
void func_801C4C7C();
void func_801C56B8();

void func_801C3A40(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 2;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 2) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CED50);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        arg1 = D_801CC8C8;
        if (arg1 == 0) goto choice0;
        if (arg1 == 1) goto choice1;
        if (arg1 != 2) goto end;
        goto choice2;
choice0:
        func_80005670(arg0, D_80044090);
        func_800058DC(arg0, func_801C3BA4);
        goto end;
choice1:
        func_800058DC(arg0, func_801C4C7C);
        goto end;
choice2:
        func_800058DC(arg0, func_801C56B8);
        goto end;
    }
end:
    ;
}


extern s32 func_8013E770();
extern void func_801C3BD8();

void func_801C3BA4(s32 arg0, s32 arg1) {
    func_8013E770();
    func_800058DC(arg0, &func_801C3BD8);
}

extern s32 func_8013E794(void);
extern void func_801C3C14();

void func_801C3BD8(s32 arg0, s32 arg1) {
    if (func_8013E794() == 1) {
        func_800058DC(arg0, (void *) func_801C3C14);
    }
}

extern void func_800023A8(s32);
extern s32 func_8012FE50();


extern void func_801C3CD0();
extern void func_8012FFCC(s32);
extern void func_80133830();
extern void func_80133950();
extern void func_80133A70();
extern void func_8014AC60();
extern void func_80152240();

void func_801C3C14(s32 arg0, s32 arg1) {
    func_800023A8(0);
    func_80020718(8);
    D_801BBBF0.unkA = 0;
    D_801BBBF0.unkC = 0;
    func_8012FE50(0x15, (u16)(D_801BBBF0.unk4 = 0x104), 0, 1, 0);
    D_801BBBF0.unk3A2 = 0;
    D_801BBBF0.unk2 = 1;
    func_80133830();
    func_80133950();
    func_80133A70();
    func_8014AC60();
    D_801BBBF0.unkEF2 = 0;
    func_8012FFCC(0);
    func_801C1308();
    func_80152240();
    func_800058DC(arg0, &func_801C3CD0);
}


void func_801C3CD0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

extern s32 D_801CC8BC;
extern s32 func_80005700(s32);

extern void func_801C3D50();

void func_801C3CDC(s32 arg0, s32 arg1) {
    func_80005700(D_801CC8A8);
    func_80005700(D_801CC8B8);
    D_801CC8A8 = 0;
    D_801CC8B8 = 0;
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_80152240();
    func_800058DC(arg0, func_801C3D50);
}


extern s32 func_8013E7C0();
extern void func_801C3D84();

void func_801C3D50(s32 arg0, s32 arg1) {
    func_8013E7C0();
    func_800058DC(arg0, &func_801C3D84);
}

void func_801C40EC(s32 arg0, s32 arg1);
extern void func_80142570();
extern void func_800179B0(s32);

extern u8 func_8013E850();
extern void func_801C3E24();

void func_801C3D84(s32 arg0, s32 arg1) {
    u8 sp27;
    u8 temp_v0;

    temp_v0 = func_8013E850();
    sp27 = temp_v0;
    if (temp_v0 & 0xFF) {
        func_80142570();
        func_800179B0(0);
        if (sp27 == 1) {
            func_801C11BC(0xA);
            func_800058DC(arg0, &func_801C3E24);
        }
        if (sp27 == 2) {
            func_8012FE50(0x17, 0x73, 1, 1, 0);
            func_800058DC(arg0, &func_801C40EC);
        }
    }
}


typedef struct func_801C3E24_Struct { u8 b[11]; } func_801C3E24_Struct;
extern func_801C3E24_Struct D_801CCAD4;
extern u8 func_801C3F48[];
extern s32 func_8013EA54();
typedef struct func_801C3E24_S2 { u8 pad[0x28]; s16 unk28; } func_801C3E24_S2;

void func_801C3E24(s32 arg0, func_801C3E24_S2 **arg1) {
    u8 c;
    u8 v;
    func_801C3E24_Struct sp40;

    sp40 = D_801CCAD4;
    if (D_801CC8CC == 2) {
        if (func_8013EA54() == 0xFF) {
            func_8012FE50(0x15, 0x10D, 6, 1, 0);
            func_800058DC(arg0, func_801C40EC);
            return;
        }
        v = sp40.b[func_8013EA54() - 1];
        if (v != 0) {
            v = (v - 1) & 0xFF;
            func_80146208((u8 *)arg0, &c, 0x66, 0x20, 0x64, 0x100, 0x10, 0, 0, 0, 0x228, v + 0x1A);
            func_80006214((void *)arg0);
            (*arg1)->unk28 = 0x100;
        }
        func_800058DC(arg0, func_801C3F48);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3F48.s")


struct func_801C4018_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_801C4074();

void func_801C4018(struct func_801C4018_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_800058DC(arg0, func_801C4074);
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v0 != 0) {
        return;
    }
    func_800058DC(arg0, func_801C4074);
}

extern u16 D_801BBBF4;
extern void func_8014AD20();

void func_801C4074(s32 arg0, s32 arg1) {
    func_8012FE50(0x18, D_801BBBF4, 6, 1, 2);
    func_8014AD20();
    if (D_801CC8BC != 0) {
        func_80005700(D_801CC8BC);
        D_801CC8BC = 0;
    }
    func_800058DC(arg0, func_801C40EC);
}


void func_801C40EC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern u8 D_801CEDA4[];
extern u8 D_801CEDB8[];
extern u8 D_801CEDCC[];
extern u8 D_801CEDE0[];
extern u8 D_801CEDF4[];
extern u8 D_801CEE08[];
extern u8 D_801CEE0C[];
extern void func_801C4200();

void func_801C40F8(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEDA4);
    func_8001B204(1, 0x7D0, 0x8A, D_801CEDB8);
    func_8001B204(2, 0x7D0, 0x94, D_801CEDCC);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEDE0);
    func_8001B204(4, 0x7D0, 0xA8, D_801CEDF4);
    func_8001B204(5, 0, 0, D_801CEE08);
    func_8001B204(6, 0, 0, D_801CEE0C);
    func_80152240();
    func_800058DC(arg0, func_801C4200);
}


extern u8 D_801CEE10[];
void func_801C43B0();
void func_801C43BC();
void func_801C47D0();

void func_801C4200(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 3;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 3) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CEE10);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        if (D_801CC8C8 == 0) goto case0;
        if (D_801CC8C8 == 1) goto case1;
        if (D_801CC8C8 == 2) goto case2;
        if (D_801CC8C8 != 3) goto end;
        goto case3;
case0:
        func_800023A8(0);
        func_80020718(10);
        func_8012FE50(20, 190, 1, 1, 0);
        func_800058DC(arg0, func_801C43B0);
        return;
case1:
        func_800058DC(arg0, func_801C43BC);
        return;
case2:
        func_800023A8(0);
        func_80020718(8);
        func_800058DC(arg0, func_801C47D0);
        return;
case3:
        func_800058DC(arg0, func_801C56B8);
        return;
    }
end:
    ;
}


void func_801C43B0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern u8 D_801CEE24[];
extern u8 D_801CEE38[];
extern u8 D_801CEE44[];
extern u8 D_801CEE50[];
extern u8 D_801CEE5C[];
extern u8 D_801CEE60[];
extern u8 D_801CEE64[];
extern void func_801C44C4();

void func_801C43BC(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, 0x8A, D_801CEE24, 2);
    func_8001B204(1, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x94), D_801CEE38);
    func_8001B204(2, 0x7D0, 0x94, D_801CEE44);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEE50);
    func_8001B204(4, 0, 0, D_801CEE5C);
    func_8001B204(5, 0, 0, D_801CEE60);
    func_8001B204(6, 0, 0, D_801CEE64);
    func_800058DC(arg0, func_801C44C4);
}

void func_801C45C8(s32 arg0, s32 arg1);
struct func_801C56B8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern u8 D_801CEE68[];

void func_801C44C4(s32 arg0, s32 arg1) {
    if ((func_801C1340() & 0x800) && (D_801CC8C8 == 1)) {
        D_801CC8C8 = 0;
    }
    if ((func_801C1340() & 0x400) && (D_801CC8C8 == 0)) {
        D_801CC8C8 = 1;
    }
    func_8001B204(1, 0x7D0, (s16) (D_801CC8C8 * 10 + 0x94), D_801CEE68);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, func_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        func_80020718(8);
        func_80152CF8(D_801CC8C8);
        func_800058DC(arg0, func_801C45C8);
    }
}


extern void func_801C4640();

void func_801C45C8(s32 arg0, s32 arg1) {
    func_800023A8(0);
    func_80005700(D_801CC8A8);
    func_80005700(D_801CC8B8);
    D_801CC8A8 = 0;
    D_801CC8B8 = 0;
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_800058DC(arg0, &func_801C4640);
}


extern s32 func_80140368();
extern void func_801C4674();

void func_801C4640(s32 arg0, s32 arg1) {
    func_80140368();
    func_800058DC(arg0, &func_801C4674);
}

void func_801C47C4(s32 arg0, s32 arg1);

extern s32 func_801403F8();
extern void func_80152D0C();
extern void func_80152D3C();
extern void func_80152D4C();
extern void func_80152F7C();
extern s32 func_80153008();
void func_801C4674(s32 arg0, s32 arg1) {
    u8 sp27;

    if ((sp27 = func_801403F8()) == 1) {
        func_80142570();
        func_800179B0(0);
        if (D_801CC8BC != 0) {
            func_80005700(D_801CC8BC);
            D_801CC8BC = 0;
        }
        if (func_8013EA54() < 3) {
            func_80152D0C(0);
        } else {
            func_80152D0C(1);
        }
        if (func_8013EA54() == 0xFF) {
            func_80152D3C(1);
        } else {
            func_80152D3C(0);
        }
        if (D_801CC8C8 == 0) {
            func_80152D4C();
        }
        func_80152F7C();
        func_80020718(0xA);
        arg1 = func_80153008();
        func_8012FE50(0x20, arg1 & 0xFFFF, 1, 1, 0);
        func_800058DC(arg0, func_801C47C4);
    }
    if (sp27 == 2) {
        func_8012FE50(0x17, 0x73, 1, 1, 0);
        func_800058DC(arg0, func_801C47C4);
    }
}


void func_801C47C4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_801C4840();

void func_801C47D0(s32 arg0, s32 arg1) {
    func_80005700(D_801CC8A8);
    func_80005700(D_801CC8B8);
    D_801CC8A8 = 0;
    D_801CC8B8 = 0;
    D_801CC8BC = func_80005670(arg0, D_80044090);
    func_800058DC(arg0, func_801C4840);
}

extern s32 D_801CC8C0;
void func_801C48A4(s32 arg0, s32 arg1);

extern void func_80140600();
extern u8 D_801CCA34[];

void func_801C4840(s32 arg0, s32 arg1) {
    func_80140600();
    D_801CC8C0 = func_80005670(arg0, D_801CCA34);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC(arg0, func_801C48A4);
}


extern s32 func_801406A4();
extern void func_801C4954();

void func_801C48A4(s32 arg0, s32 arg1) {
    if (func_801406A4() & 0xFF) {
        func_80142570();
        func_800179B0(0);
        if (D_801CC8BC != 0) {
            func_80005700(D_801CC8BC);
            D_801CC8BC = 0;
        }
        if (D_801CC8C0 != 0) {
            func_80005700(D_801CC8C0);
            D_801CC8C0 = 0;
        }
        func_800023A8(0);
        func_8012FE50(0x17, 0x73, 1, 1, 0);
        func_800058DC(arg0, func_801C4954);
    }
}


void func_801C4954(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern u8 D_801BBF0A[];
extern u8 D_801CEE74[];
extern u8 D_801CEE80[];
extern u8 D_801CEE8C[];
extern u8 D_801CEE98[];
extern u8 D_801CEEA4[];
extern u8 D_801CEEA8[];
extern u8 D_801CEEAC[];
extern void func_801C4AA8();

void func_801C4960(s32 arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    if (D_801BBF0A[0x32] == 0) {
        var_v0 = 2;
        var_v1 = 6;
        D_801CC8C8 = 0;
    } else {
        var_v0 = 6;
        var_v1 = 2;
        D_801CC8C8 = 1;
    }
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEE74);
    func_8001B204(1, 0x7D0, 0x8A, D_801CEE80, var_v0);
    func_8001B204(2, 0x7D0, 0x94, D_801CEE8C, var_v1);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEE98);
    func_8001B204(4, 0, 0, D_801CEEA4);
    func_8001B204(5, 0, 0, D_801CEEA8);
    func_8001B204(6, 0, 0, D_801CEEAC);
    func_800058DC(arg0, func_801C4AA8);
}


extern u8 D_801CEEB0[];
extern u8 D_801CEEBC[];
extern u8 D_801CEEC8[];
extern u8 D_801CEED4[];
extern u8 D_801CEEE0[];

void func_801C4AA8(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 2;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 2) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 0xA + 0x8A), D_801CEEB0);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        if (D_801CC8C8 == 0) goto c0;
        if (D_801CC8C8 == 1) goto c1;
        if (D_801CC8C8 != 2) goto end;
        if (1) goto c2;
c0:
        func_80020718(5);
        func_8001B204(1, 0x7D0, 0x8A, D_801CEEBC, 2);
        func_8001B204(2, 0x7D0, 0x94, D_801CEEC8, 6);
        D_801BBF0A[0x32] = 0;
        goto end;
c1:
        func_80020718(6);
        func_8001B204(1, 0x7D0, 0x8A, D_801CEED4, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEEE0, 2);
        D_801BBF0A[0x32] = 1;
        goto end;
c2:
        func_800058DC(arg0, (void *)func_801C56B8);
    }
end:
    return;
}


extern u8 D_801BBC0D;
extern u8 D_801CEEEC[];
extern u8 D_801CEEF8[];
extern u8 D_801CEF04[];
extern u8 D_801CEF10[];
extern u8 D_801CEF1C[];
extern u8 D_801CEF28[];
extern u8 D_801CEF34[];
extern u8 D_801CEF40[];
extern u8 D_801CEF4C[];
extern u8 D_801CEF58[];
extern u8 D_801CEF64[];
extern u8 D_801CEF70[];
extern u8 D_801CEF74[];
extern void func_801C4E90();

void func_801C4C7C(s32 arg0, s32 arg1) {
    if (D_801BBC0D != 0) {
        if (D_801BBC0D != 1) {
            if (D_801BBC0D == 2) {
                func_8001B204(1, 0x7D0, 0x8A, D_801CEEEC, 2);
                func_8001B204(2, 0x7D0, 0x94, D_801CEEF8, 6);
                func_8001B204(3, 0x7D0, 0x9E, D_801CEF04, 6);
                D_801CC8C8 = 0;
            }
        } else {
            func_8001B204(1, 0x7D0, 0x8A, D_801CEF10, 6);
            func_8001B204(2, 0x7D0, 0x94, D_801CEF1C, 2);
            func_8001B204(3, 0x7D0, 0x9E, D_801CEF28, 6);
            D_801CC8C8 = 1;
        }
    } else {
        func_8001B204(1, 0x7D0, 0x8A, D_801CEF34, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEF40, 6);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEF4C, 2);
        D_801CC8C8 = 2;
    }
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEF58);
    func_8001B204(4, 0x7D0, 0xA8, D_801CEF64);
    func_8001B204(5, 0, 0, D_801CEF70);
    func_8001B204(6, 0, 0, D_801CEF74);
    func_800058DC(arg0, func_801C4E90);
}


extern u8 D_801CEF78[];
extern u8 D_801CEF84[];
extern u8 D_801CEF90[];
extern u8 D_801CEF9C[];
extern u8 D_801CEFA8[];
extern u8 D_801CEFB4[];
extern u8 D_801CEFC0[];
extern u8 D_801CEFCC[];
extern u8 D_801CEFD8[];
extern u8 D_801CEFE4[];
extern u8 D_801C3940[];

void func_801C4E90(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 3;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 3) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CEF78);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C3940);
    }
    if (func_801C1334() & 0xB000) {
        if (D_801CC8C8 == 0) goto c0;
        if (D_801CC8C8 == 1) goto c1;
        if (D_801CC8C8 == 2) goto c2;
        if (D_801CC8C8 != 3) goto end;
        goto c3;
c0:
        func_8001B204(1, 0x7D0, 0x8A, D_801CEF84, 2);
        func_8001B204(2, 0x7D0, 0x94, D_801CEF90, 6);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEF9C, 6);
        D_801BBC0D = 2;
        goto end;
c1:
        func_8001B204(1, 0x7D0, 0x8A, D_801CEFA8, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEFB4, 2);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEFC0, 6);
        D_801BBC0D = 1;
        goto end;
c2:
        func_8001B204(1, 0x7D0, 0x8A, D_801CEFCC, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEFD8, 6);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEFE4, 2);
        D_801BBC0D = 0;
        goto end;
c3:
        func_800058DC(arg0, func_801C3940);
    }
end:
    return;
}


extern u16 func_80001060();
extern s32 func_801302CC();
extern s32 func_80130290();
extern void func_801C5378();
extern u16 D_801CFD0E;
extern u8 D_801CEFF0[];
extern u8 D_801CEFF4[];
extern u8 D_801CEFF8[];
extern u8 D_801CF008[];
extern u8 D_801CF01C[];
extern u8 D_801CF024[];
extern u8 D_801CF034[];
extern u8 D_801CF048[];
extern u8 D_801CF050[];
extern u8 D_801CF060[];
extern u8 D_801CF074[];
extern u8 D_801CF07C[];
extern u8 D_801CF084[];

void func_801C5108(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    if (func_801302CC() != 0) {
        D_801CC8C8 = 1;
    } else if (func_80130290() != 0) {
        D_801CC8C8 = 0;
    } else {
        D_801CC8C8 = 2;
    }
    func_8001B204(0, 0x6B, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEFF0);
    func_8001B204(1, 0, 0, D_801CEFF4);
    D_801CFD0E = func_80001060();
    if (func_801302CC() != 0) {
        D_801CFD0E = 2;
    }
    if (D_801CFD0E == 0) goto case0;
    if (D_801CFD0E == 1) goto case1;
    if (D_801CFD0E != 2) goto done;
    goto case2;
case0:
    func_8001B204(2, 0x73, 0x8A, D_801CEFF8, 6);
    func_8001B204(3, 0x73, 0x94, D_801CF008, 6);
    func_8001B204(4, 0x73, 0x9E, D_801CF01C, 2);
    goto done;
case1:
    func_8001B204(2, 0x73, 0x8A, D_801CF024, 2);
    func_8001B204(3, 0x73, 0x94, D_801CF034, 6);
    func_8001B204(4, 0x73, 0x9E, D_801CF048, 6);
    goto done;
case2:
    func_8001B204(2, 0x73, 0x8A, D_801CF050, 6);
    func_8001B204(3, 0x73, 0x94, D_801CF060, 2);
    func_8001B204(4, 0x73, 0x9E, D_801CF074, 6);
done:
    func_8001B204(5, 0x73, 0xA8, D_801CF07C);
    func_8001B204(6, 0, 0, D_801CF084);
    func_800058DC(arg0, func_801C5378);
}


extern void func_80130254(s32);
extern s32 func_80130264(void);
extern s16 D_80037750;
extern u8 D_801CF088[];
extern u8 D_801CF08C[];
extern u8 D_801CF09C[];
extern u8 D_801CF0B0[];
extern u8 D_801CF0B8[];
extern u8 D_801CF0C8[];
extern u8 D_801CF0DC[];
extern u8 D_801CF0E4[];
extern u8 D_801CF0F4[];
extern u8 D_801CF108[];
void func_801C56AC(s32 arg0, s32 arg1);

void func_801C5378(s32 arg0, s32 arg1) {
    s32 selection;
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 3;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 3) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x6B, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CF088);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, func_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
      do {
        selection = D_801CC8C8;
        if (selection == 0) goto choice0;
        if (selection == 1) goto choice1;
        if (selection == 2) goto choice2;
        if (selection != 3) goto def;
        goto choice3;
        choice0: {
            func_8001B204(2, 0x73, 0x8A, D_801CF08C, 2);
            func_8001B204(3, 0x73, 0x94, D_801CF09C, 6);
            func_8001B204(4, 0x73, 0x9E, D_801CF0B0, 6);
            D_801CFD0E = 1;
            break;
        } choice1: {
            func_8001B204(2, 0x73, 0x8A, D_801CF0B8, 6);
            func_8001B204(3, 0x73, 0x94, D_801CF0C8, 2);
            func_8001B204(4, 0x73, 0x9E, D_801CF0DC, 6);
            D_801CFD0E = 2;
            break;
        } choice2: {
            func_8001B204(2, 0x73, 0x8A, D_801CF0E4, 6);
            func_8001B204(3, 0x73, 0x94, D_801CF0F4, 6);
            func_8001B204(4, 0x73, 0x9E, D_801CF108, 2);
            D_801CFD0E = 0;
            break;
        } choice3: {
            if (((D_801CFD0E == 1) && func_80130290()) ||
                ((D_801CFD0E == 2) && func_801302CC()) ||
                ((D_801CFD0E == 0) && !func_80130264())) {
                func_800058DC(arg0, func_801C56B8);
                return;
            }
            if (D_801CFD0E == 2) {
                func_80130254(1);
                D_801CFD0E = 1;
            } else {
                func_80130254(0);
            }
            D_80037750 = D_801CFD0E + 1;
            func_800058DC(arg0, func_801C56AC);
            break;
        }
      } while (0);
    }
def:;
}


void func_801C56AC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern u8 D_801CF110[];
extern u8 D_801CF120[];
extern u8 D_801CF130[];
extern u8 D_801CF140[];
extern u8 D_801CF150[];
extern u8 D_801CF160[];
extern u8 D_801CF170[];


void func_801C56B8(struct func_801C56B8_Struct *arg0, s32 arg1) {
    arg0->unk3C = 0x384;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 0xA) + 0x76), D_801CF110);
    func_8001B204(1, 0x7D0, 0x76, D_801CF120);
    func_8001B204(2, 0x7D0, 0x80, D_801CF130);
    func_8001B204(3, 0x7D0, 0x8A, D_801CF140);
    func_8001B204(4, 0x7D0, 0x94, D_801CF150);
    if (D_80037754 == 1) {
        func_8001B204(5, 0x7D0, 0x9E, D_801CF160);
    } else {
        func_8001B204(5, 0x7D0, 0x9E, D_801CF170, 6);
    }
    func_800058DC(arg0, func_801C1DB8);
}


extern void func_801C5824();

void func_801C57D8(s32 arg0, s32 arg1) {
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_801C11BC(0x64);
    func_800058DC(arg0, &func_801C5824);
}

void func_801C5910(s32 arg0, s32 arg1);

extern void func_8013EF54();
extern u8 D_801CF190[];

void func_801C5824(s32 arg0, s32 arg1) {
    if (D_801CC8CC == 2) {
        func_8011AAF4(&D_801CF190, 0x833, arg0, 0, 1, 3.0f, 0.0f, 120.0f, -22.0f, 3.0f, 0.0f, 42.5f, 0.0f, 0.0f, 30.0f, -1, -1);
        func_8013EF54();
        D_801CC8B4 = func_80005670(arg0, D_801CC9F8);
        func_801C125C(-0x14);
        func_800058DC(arg0, (void *)func_801C5910);
    }
}


extern void func_801C5944();

void func_801C5910(s32 arg0, s32 arg1) {
    if (D_801CC8CC == 0) {
        func_800058DC(arg0, func_801C5944);
    }
}


extern s32 func_8013EFF0();
extern void func_801C59F4();

void func_801C5944(s32 arg0, s32 arg1) {
    s32 sp24;

    sp24 = func_8013EFF0();
    if (sp24 == 1) {
        func_80142570();
        func_800179B0(0);
        func_8012FE50(0x20, 0xC0, 1, 1, 0);
        func_800058DC(arg0, func_801C59F4);
    }
    if (sp24 == 2) {
        func_80142570();
        func_800179B0(0);
        func_8012FE50(0x17, 0x73, 1, 1, 0);
        func_800058DC(arg0, func_801C59F4);
    }
}


void func_801C59F4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_800023EC(void);

typedef struct func_801C5A00_StructEntry {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
} func_801C5A00_StructEntry;

typedef struct func_801C5A00_StructState {
    u8 pad[4];
    u16 unk4;
    u8 pad6[0x172];
    u16 unk178;
} func_801C5A00_StructState;

extern func_801C5A00_StructEntry D_801CC988[];

void func_801C5A00(void) {
    u16 temp_t8;
    u16 var_t0;
    func_801C5A00_StructEntry *temp_v0;

    var_t0 = ((func_801C5A00_StructState *)&D_801BBBF0)->unk178;
    if ((s32)var_t0 >= 4) {
        var_t0 = ((func_801C5A00_StructState *)&D_801BBBF0)->unk178 = 0;
    }
    temp_v0 = &D_801CC988[var_t0];
    func_8012FE50(temp_v0->unk1, D_801BBBF0.unk4 = temp_v0->unk2, temp_v0->unk5, 1, (s32)temp_v0->unk6);
    ((func_801C5A00_StructState *)&D_801BBBF0)->unk178++;
    func_80133830();
    func_80133950();
    func_80133A70();
    func_801C1308();
    func_80152240();
    func_800023EC();
}

