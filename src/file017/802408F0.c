#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802408F0.s")


struct func_80240AA8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_80133A24(u16);
extern s32 func_80126944(void);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_800058DC(void *, void *);
extern void func_80240B10();

void func_80240AA8(struct func_80240AA8_Struct *arg0, void *arg1) {
    if (func_80133A24(*(u16 *)((u8 *)arg0 + 0xA2)) != 0) {
        if (func_80126944() != 1) {
            arg0->unk3C = 0;
            func_801C3B2C(2);
            func_801C3B10(1);
            func_800058DC(arg0, func_80240B10);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240C00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240F50.s")


struct func_8024102C_Struct {
    s16 a;
    s16 pad0;
    s32 b;
    f32 c;
    s16 d;
    s16 pad1;
};

extern void func_801C2F0C(s32, void *);
extern s32 func_801C3044(void);
extern void func_80241094();

void func_8024102C(s32 arg0, s32 arg1) {
    u8 pad[0x10];
    struct func_8024102C_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0;
        sp18.b = 0x0168002D;
        sp18.d = 0x14;
        sp18.c = 1.0f;
        func_801C2F0C(3, &sp18);
        func_800058DC(arg0, &func_80241094);
    }
}


struct func_80241094_StructB {
    u8 pad[0x12];
    s16 unk12;
};

struct func_80241094_StructA {
    u8 pad[0x2C];
    struct func_80241094_StructB *unk2C;
};

struct func_80241094_StructC {
    u8 pad[0x9C];
    u16 unk9C;
};

struct func_80241094_StructD {
    s16 unk0;
    s32 unk4;
    f32 unk8;
};

extern struct func_80241094_StructA *D_801BBCD0;
extern s16 func_801FD284(s16, s16, s32);
extern void func_80241144(void);

void func_80241094(struct func_80241094_StructC *arg0, void *arg1) {
    u8 pad[0x14];
    struct func_80241094_StructD sp18;

    D_801BBCD0->unk2C->unk12 = func_801FD284(D_801BBCD0->unk2C->unk12, (s16) ((s16) (arg0->unk9C + 0x1000) & 0x1FFF), 0x3DCCCCCD);
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x0168002D;
        sp18.unk8 = 3.0f;
        func_801C2F0C(4, &sp18);
        func_800058DC(arg0, &func_80241144);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241144.s")


void func_802411EC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802411F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241358.s")


typedef struct func_802414B0_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
} func_802414B0_Struct;

typedef struct func_802414B0_StructLocal {
    f32 pos[3];
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    s16 e;
} func_802414B0_StructLocal;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801C2FF8(void);
extern void func_80241574();

void func_802414B0(void *arg0, void *arg1) {
    register func_802414B0_Struct *obj;
    func_802414B0_StructLocal loc;

    obj = arg0;
    if (func_801C2FF8() != 0) {
        loc.pos[0] = (func_8001EAD0(obj->unk9C) * 8.0f) + obj->unk90;
        loc.pos[1] = (func_8001EB64(obj->unk9C) * 8.0f) + obj->unk98;
        loc.a = 0x1100;
        loc.b = 0x0168003E;
        loc.d = 0;
        loc.e = 0x5A;
        loc.pos[2] = 0.0f;
        loc.c = 1.5f;
        func_801C2F0C(2, loc.pos);
        func_800058DC(obj, &func_80241574);
    }
}


struct func_80241574_Struct {
    s16 a;
    s16 pad0;
    s32 b;
    f32 c;
    s16 d;
    s16 pad1;
};

extern void func_802415DC();

void func_80241574(s32 arg0, s32 arg1) {
    u8 pad[0x10];
    struct func_80241574_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0;
        sp18.b = 0x0168002D;
        sp18.d = 0x14;
        sp18.c = 1.0f;
        func_801C2F0C(3, &sp18);
        func_800058DC(arg0, &func_802415DC);
    }
}


struct func_802415DC_StructB {
    u8 pad[0x12];
    s16 unk12;
};

struct func_802415DC_StructA {
    u8 pad[0x2C];
    struct func_802415DC_StructB *unk2C;
};

struct func_802415DC_StructC {
    u8 pad[0x9C];
    u16 unk9C;
};

struct func_802415DC_StructD {
    s16 unk0;
    s32 unk4;
    f32 unk8;
};

extern void func_8024168C();

void func_802415DC(struct func_802415DC_StructC *arg0, void *arg1) {
    u8 pad[0x14];
    struct func_802415DC_StructD sp18;

    D_801BBCD0->unk2C->unk12 = func_801FD284(D_801BBCD0->unk2C->unk12, (s16) ((s16) (arg0->unk9C + 0x1000) & 0x1FFF), 0x3DCCCCCD);
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x0168002D;
        sp18.unk8 = 3.0f;
        func_801C2F0C(4, &sp18);
        func_800058DC(arg0, &func_8024168C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_8024168C.s")


void func_80241784(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


struct func_80241790_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
};

struct func_80241790_Vals {
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
};

void *func_8012C4D0(s32, struct func_80241790_Vals, s32);
extern s32 D_801BBC2C;
extern struct func_80241790_Vals D_80258590;

void *func_80241790(f32 arg0, f32 arg1, f32 arg2, u16 arg3, u16 arg4, u16 arg5, u16 arg6, u16 arg7) {
    struct func_80241790_Struct *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80258590, 2);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
        temp_v0->unk9E = arg4;
        temp_v0->unkA0 = arg5;
        temp_v0->unkA2 = arg6;
        temp_v0->unkA4 = arg7;
        return temp_v0;
    }
    return NULL;
}


extern struct func_80241790_Vals D_802585A4;

void *func_80241854(f32 arg0, f32 arg1, f32 arg2, u16 arg3, u16 arg4, u16 arg5, u16 arg6) {
    struct func_80241790_Struct *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802585A4, 2);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
        temp_v0->unk9E = arg4;
        temp_v0->unkA0 = arg5;
        temp_v0->unkA2 = arg6;
        return temp_v0;
    }
    return NULL;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241A60.s")


extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern s32 func_8012C97C(s32, s32);
extern u8 D_80164F40[];
extern void func_80241C28(s32 arg0, s32 arg1);

void func_80241BC4(void *arg0, void *arg1) {
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    *(s32 *)((u8 *)arg0 + 0x2C) = 0xC00;
    *(s32 *)((u8 *)arg0 + 0x74) = func_8012C97C(0x2FA, 8);
    func_800058DC(arg0, func_80241C28);
}


void func_80241C28(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_80241C34_StructCmd {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80241C34_StructCmd;

typedef struct func_80241C34_StructSub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x14];
    s32 unk24;
    u8 pad2[0x8];
    s32 unk30;
    u8 pad3[0xC];
    u8 unk40[8];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80241C34_StructSub;

typedef struct func_80241C34_StructNode {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    func_80241C34_StructSub *unk30;
} func_80241C34_StructNode;

typedef struct func_80241C34_StructSelf {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0xC];
    s16 unk3C;
    u8 pad2[0x36];
    s32 unk74;
    u8 pad3[0x18];
    s16 unk90;
    u8 pad4[0x6];
    u8 unk98;
} func_80241C34_StructSelf;

typedef struct func_80241C34_StructCam {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_80241C34_StructCam;

typedef struct func_80241C34_StructCamOwner {
    u8 pad0[0x2C];
    func_80241C34_StructCam *unk2C;
} func_80241C34_StructCamOwner;

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);
extern void func_801FBB30(void);
extern void func_80020718(s32);
extern void func_8012C89C(void *, s32, s32, s32);
void func_802441AC(void);
extern struct func_802441AC_Struct D_801BBBF0;
extern u8 D_8017AD28[];
extern void func_8024245C();
extern u8 D_8017AF90[];
extern u8 D_8017B5A8[];
extern u8 D_802585E8[];
extern u8 D_80258688[];
extern u8 D_8025C324[];
extern f32 D_8025C6BC;
extern f32 D_8025C6C0;
extern f32 D_8025C6C4;
extern f32 D_8025C6C8;
extern f32 D_8025C6CC;
extern f32 D_8025C6D0;
extern f32 D_8025C6D4;
extern f32 D_8025C6D8;
extern f32 D_8025C6DC;
extern f32 D_8025C6E0;
extern f32 D_8025DDA0;
extern f32 D_8025DDA4;
extern f32 D_8025DDA8;

#define GB(off) (((u8 *)&D_801BBBF0)[off])
#define CAM (((func_80241C34_StructCamOwner **)((u8 *)&D_801BBBF0 + 0xE0))[0]->unk2C)

void func_80241C34(func_80241C34_StructSelf *arg0, func_80241C34_StructNode **arg1) {
    func_80241C34_StructCmd sp70;

    sp70 = *(func_80241C34_StructCmd *)D_80164F40;
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000300;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000600;
    func_80005E44(arg0, &sp70);
    func_80006214(arg0);

    func_8012C89C(arg0, 0, 0x303, 0);
    arg1[0]->unk30->unk24 |= 0x400;
    arg1[0]->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    arg1[0]->unk30->unk4 = 0.0f;
    arg1[0]->unk30->unk8 = D_8025C6BC;
    arg1[0]->unk30->unkC = 0.0f;
    arg1[0]->unk30->unk4C = GB(0xF32);
    arg1[0]->unk30->unk4D = GB(0xF33);
    arg1[0]->unk30->unk4E = GB(0xF34);
    arg1[0]->unk30->unk4F = GB(0xF35);

    func_8012C89C(arg0, 1, 0x303, 1);
    arg1[1]->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    arg1[1]->unk30->unk24 |= 0x400;
    arg1[1]->unk30->unk4 = 0.0f;
    arg1[1]->unk30->unk8 = D_8025C6C0;
    arg1[1]->unk30->unkC = 0.0f;
    arg1[1]->unk30->unk4C = GB(0xF32);
    arg1[1]->unk30->unk4D = GB(0xF33);
    arg1[1]->unk30->unk4E = GB(0xF34);
    arg1[1]->unk30->unk4F = GB(0xF35);

    func_8012C89C(arg0, 2, 0x303, 3);
    arg1[2]->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    arg1[2]->unk30->unk24 |= 0x400;
    arg1[2]->unk30->unk4 = 0.0f;
    arg1[2]->unk30->unk8 = D_8025C6C4;
    arg1[2]->unk30->unkC = 0.0f;
    arg1[2]->unk30->unk4C = GB(0xF32);
    arg1[2]->unk30->unk4D = GB(0xF33);
    arg1[2]->unk30->unk4E = GB(0xF34);
    arg1[2]->unk30->unk4F = GB(0xF35);

    func_8012C89C(arg0, 3, 0x303, 4);
    func_8012CF8C(arg0, arg1[3]->unk30->unk40, 0x2F8, 0xF);
    arg1[3]->unk30->unk24 |= 0x4000;
    arg1[3]->unk30->unk30 = (s32)D_802585E8 | 0x40000000;
    arg1[3]->unk30->unk4 = 0.0f;
    arg1[3]->unk30->unk8 = D_8025C6C8;
    arg1[3]->unk30->unkC = 0.0f;
    arg1[3]->unk30->unk4C = 0;
    arg1[3]->unk30->unk4D = 0;
    arg1[3]->unk30->unk4E = 0xFF;
    arg1[3]->unk30->unk4F = 0xFF;

    func_8012C89C(arg0, 4, 0x304, 0);
    func_8012CF8C(arg0, arg1[4]->unk30->unk40, 0x2F8, 0x12);
    arg1[4]->unk30->unk24 |= 0x4100;
    arg1[4]->unk30->unk30 = (s32)D_80258688 | 0x40000000;
    arg1[4]->unk30->unk4 = 0.0f;
    arg1[4]->unk30->unk8 = D_8025C6CC;
    arg1[4]->unk30->unkC = 0.0f;
    arg1[4]->unk30->unk48 = 0xFF;
    arg1[4]->unk30->unk49 = 0xFF;
    arg1[4]->unk30->unk4A = 0xFF;
    arg1[4]->unk30->unk4B = 0x9A;
    arg1[4]->unk30->unk4C = 0;
    arg1[4]->unk30->unk4D = 0;
    arg1[4]->unk30->unk4E = 0xFF;
    arg1[4]->unk30->unk4F = 0xFF;

    func_8012C89C(arg0, 5, 0x2FA, 0xD);
    arg1[5]->unk30->unk30 = (s32)D_8017AD28 | 0x40000000;
    arg1[5]->unk30->unk24 |= 0x400;
    arg1[5]->unk30->unk4 = 0.0f;
    arg1[5]->unk30->unk8 = D_8025C6D0;
    arg1[5]->unk30->unkC = 0.0f;
    arg1[5]->unk30->unk4C = GB(0xF32);
    arg1[5]->unk30->unk4D = GB(0xF33);
    arg1[5]->unk30->unk4E = GB(0xF34);
    arg1[5]->unk30->unk4F = GB(0xF35);

    func_8012C89C(arg0, 6, 0x2FA, 9);
    arg1[6]->unk30->unk30 = (s32)D_8017AD28 | 0x40000000;
    arg1[6]->unk30->unk24 |= 0x400;
    arg1[6]->unk30->unk4C = GB(0xF32);
    arg1[6]->unk30->unk4D = GB(0xF33);
    arg1[6]->unk30->unk4E = GB(0xF34);
    arg1[6]->unk30->unk4F = GB(0xF35);
    arg1[6]->unk22 = 0;

    func_8012C89C(arg0, 7, 0x2FA, 0xB);
    arg1[7]->unk30->unk24 |= 0x100;
    arg1[7]->unk30->unk30 = (s32)D_8017B5A8 | 0x40000000;
    arg1[7]->unk30->unk4 = 162.0f;
    arg1[7]->unk30->unk8 = -1.0f;
    arg1[7]->unk30->unkC = 0.0f;
    arg1[7]->unk30->unk48 = 0xFF;
    arg1[7]->unk30->unk49 = 0xAF;
    arg1[7]->unk30->unk4A = 0;
    arg1[7]->unk30->unk4B = 0x80;
    arg1[7]->unk22 = 0;

    D_8025DDA0 = 0.0f;
    D_8025DDA4 = D_8025C6D4;
    D_8025DDA8 = 0.0f;
    arg0->unk2C = 0xC00;
    arg0->unk74 = func_8012C97C(0x303, 2);
    CAM->unk4 = -76.0f;
    CAM->unk8 = D_8025C6D8;
    CAM->unkC = 0.0f;
    CAM->unk12 = 0x800;
    arg0->unk3C = 0;
    arg0->unk90 = 0;
    arg0->unk98 = 0;
    func_801C3B2C(2);
    func_801C3B10(1);
    func_8011AAF4(D_8025C324, 0x214, arg0, 0, 1, 0.0f, -65.0f, D_8025C6DC, 15.0f, 0.0f, -76.0f, D_8025C6E0, 0.0f, 0.0f, 35.0f, -1, -1);
    func_802441AC();
    func_801FBB30();
    func_80020718(0x194);
    func_80020718(0x6C6);
    func_800058DC(arg0, func_8024245C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_8024245C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802425DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_8024278C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802428B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242D80.s")


struct func_80242EEC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_80243CC0(void *, s32);
extern void func_80242F50();

void func_80242EEC(struct func_80242EEC_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  s32 temp_v1;
  struct func_80242EEC_Struct *temp_a2;
  temp_a2 = arg0;
  temp_v0 = arg0->unk3C;
  arg0->unk3C = temp_v0 + 1;
  temp_v1 = (temp_v0 < 0x1E) ^ 1;
  if (temp_v1 != (temp_v1 * 0))
  {
    func_80020718(0x197);
    func_800058DC(temp_a2, func_80242F50);
  }
  func_80243CC0(temp_a2, arg1);
}


struct func_80242F50_Sub {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_80242F50_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_80242F50_Sub *unk30;
};

struct func_80242F50_Obj {
    u8 pad0[0x10];
    struct func_80242F50_Node *unk10;
    u8 pad1[0x8];
    struct func_80242F50_Node *unk1C;
};

struct func_80242F50_Self {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0xC];
    s16 unk3C;
};

extern void func_80242FD8();

void func_80242F50(struct func_80242F50_Self *arg0, struct func_80242F50_Obj *arg1) {
    struct func_80242F50_Node *temp_v1;
    void *temp_a2;

    temp_a2 = arg1;
    arg1->unk10->unk30->unk4B = (u8) (arg1->unk10->unk30->unk4B - 2);
    temp_v1 = arg1->unk10;
    if ((s32) temp_v1->unk30->unk4B < 2) {
        temp_v1->unk22 = 0;
        arg0->unk3C = 0;
        arg0->unk2C = 0x800;
        arg1->unk1C->unk22 = 1;
        func_800058DC(arg0, func_80242FD8);
    }
    func_80243CC0(arg0, temp_a2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243588.s")


extern void func_80243828();

struct func_802436EC_Struct2 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x14];
    s32 unk24;
    u8 pad2[0x8];
    s32 unk30;
    u8 pad3[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_802436EC_Struct1 {
    u8 pad0[0x30];
    struct func_802436EC_Struct2 *unk30;
};

struct func_802436EC_Struct3 {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

struct func_802436EC_Struct0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

void func_802436EC(struct func_802436EC_Struct3 *arg0, struct func_802436EC_Struct1 **arg1) {
    struct func_802436EC_Struct0 sp20;

    sp20 = *(struct func_802436EC_Struct0 *) D_80164F40;
    sp20.unk4 = 0x80000900;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x2FA, 7);
    (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x400;
    (*arg1)->unk30->unk30 = (s32) D_8017AD28 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk4C = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF32);
    (*arg1)->unk30->unk4D = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF33);
    (*arg1)->unk30->unk4E = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF34);
    (*arg1)->unk30->unk4F = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF35);
    func_800058DC(arg0, (void *) func_80243828);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243988.s")


struct func_80243C30_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

extern struct func_80241790_Vals D_802585D4;

void func_80243C30(f32 arg0, f32 arg1, f32 arg2) {
    struct func_80243C30_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802585D4, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243E48.s")


struct func_802441AC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad1[0xC7C];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    u8 unkF2C;
    u8 unkF2D;
    s8 unkF2E;
    u8 pad2[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};

extern f32 D_8025C79C;

void func_802441AC(void) {
    D_801BBBF0.unk29C = 5.0f;
    D_801BBBF0.unkF23 = 0xFF;
    D_801BBBF0.unkF20 = 0;
    D_801BBBF0.unkF21 = 0;
    D_801BBBF0.unkF22 = 0;
    D_801BBBF0.unkF24 = 0xB4;
    D_801BBBF0.unkF25 = 0xDC;
    D_801BBBF0.unkF26 = 0x14;
    D_801BBBF0.unkF27 = 0x1E;
    D_801BBBF0.unkF28 = -0x1E;
    D_801BBBF0.unkF29 = 0x14;
    D_801BBBF0.unkF2A = 0xFA;
    D_801BBBF0.unkF2B = 0x14;
    D_801BBBF0.unkF2C = 0x6E;
    D_801BBBF0.unkF2D = 0x50;
    D_801BBBF0.unkF2E = -0x46;
    D_801BBBF0.unkF32 = 0;
    D_801BBBF0.unkF33 = 0;
    D_801BBBF0.unkF34 = 0;
    D_801BBBF0.unkF35 = 0xB9;
    D_801BBBF0.unk2A0 = D_8025C79C;
}

