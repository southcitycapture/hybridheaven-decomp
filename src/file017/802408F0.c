#include "common.h"

extern f32 D_8025C2C4;
extern f32 D_8025C6B8;
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
extern f32 D_8025C6E4;
extern f32 D_8025C6E8;
extern f32 D_8025C700;
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;
extern f32 D_8025C728;
extern f32 D_8025C72C;
extern f32 D_8025C744;
extern f32 D_8025C750;
extern f32 D_8025C760;
extern f32 D_8025C76C;
extern f32 D_8025C798;
extern f32 D_8025C79C;
extern f32 D_8025DDA0;
extern f32 D_8025DDA4;
extern f32 D_8025DDA8;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32);
extern f64 D_8025C748;
extern f64 D_8025C758;
extern f64 D_8025C770;
extern f64 D_8025C788;
extern f64 D_8025C790;
extern s16 func_801FD284(s16, s16, s32);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 D_801BBC2C;
extern s32 func_8001EF38(f32, f32);
extern s32 func_80126944(void);
extern s32 func_8012C97C(s32, s32);
extern s32 func_80133A24(u16);
extern s32 func_801C2FF8(void);
extern s32 func_801C3044(void);
extern s32 func_801C3D20(f32, f32, f32);
extern s32 func_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_80164F40[];
extern u8 D_8017AD28[];
extern u8 D_8017AF90[];
extern u8 D_8017B5A8[];
extern u8 D_802585E8[];
extern u8 D_80258688[];
extern u8 D_8025C1F4[];
extern u8 D_8025C228[];
extern u8 D_8025C324[];
extern u8 D_8025C35C[];
extern u8 D_8025C404[];
extern u8 D_8025C474[];
extern u8 D_8025C4AC[];
extern u8 D_8025C4E4[];
extern u8 D_8025C51C[];
extern u8 D_8025C554[];
extern u8 D_8025C58C[];
extern u8 D_8025C66C[];
extern u8 func_80240F50[];
extern u8 func_802425DC[];
extern u8 func_802428B8[];
extern u8 func_80243290[];
extern u8 func_80243988[];
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80133980(u16);
extern void func_801C2F0C(s32, void *);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801C419C(void *, f32, f32, s32, f32);
extern void func_801FBB30(void);
extern void func_80240B10();
extern void func_80240C00();
extern void func_80241094();
extern void func_80241144(void);
extern void func_802414B0(void *arg0, void *arg1);
extern void func_80241574();
extern void func_802415DC();
extern void func_8024168C();
extern void func_80241784(s32, s32);
extern void func_80241BC4();
extern void func_80241C28(s32 arg0, s32 arg1);
extern void func_80241C34();
extern void func_8024245C();
extern void func_80242C3C();
extern void func_80242F50();
extern void func_80242FD8();
extern void func_80243828();
extern void func_80243C30(f32, f32, f32);
extern void func_80243CC0(void *, s32);
extern void func_80243E48(void *, void *);
extern void func_802441AC(void);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802408F0.s")


struct func_80240AA8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};


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


struct func_80240B10_Struct {
    u8 pad0[0x74];
    s32 unk74;
    u8 pad1[0x18];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
};


void func_80240B10(struct func_80240B10_Struct *arg0, void *arg1) {
    s32 angle;

    angle = (s16)(arg0->unk9C + 0x1000) & 0x1FFF;
    if (func_801C3DC8(arg0, func_8001EAD0(angle) * 30.0f + arg0->unk90, arg0->unk94 + 17.0f,
                       func_8001EB64(angle) * 30.0f + arg0->unk98, arg0->unk90, arg0->unk94 + 15.0f, arg0->unk98,
                       D_8025C2C4, 35.0f) == 0) {
        arg0->unk74 = 0;
        func_80020718(0x14C);
        func_800058DC(arg0, func_80240C00);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240C00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240C58.s")

typedef struct func_80240DEC_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
} func_80240DEC_Struct;

void func_80240DEC(func_80240DEC_Struct *arg0, s32 arg1) {
    s32 t;

    if (func_801C3D20(func_8001EAD0(arg0->unk9C) * 5.0f + arg0->unk90, func_8001EB64(arg0->unk9C) * 5.0f + arg0->unk98, 8.0f) != 0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        t = (s16)(*(u16 *)&arg0->unk9C + 0x2AA) & 0x1FFF;
        func_8011AAF4(D_8025C1F4, 0xEE, arg0, 0, 1, 0.0f, func_8001EAD0(t) * 20.0f + arg0->unk90, arg0->unk94 + 30.0f, func_8001EB64(t) * 20.0f + arg0->unk98, 0.0f, arg0->unk90, arg0->unk94 + 5.0f, arg0->unk98, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_80240F50);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240F50.s")


struct func_8024102C_Struct {
    s16 a;
    s16 pad0;
    s32 b;
    f32 c;
    s16 d;
    s16 pad1;
};


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

struct func_80241358_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
};
void func_80241358(struct func_80241358_Struct *arg0, void *arg1) {
    s32 t;
    if (func_801C3D20(func_8001EAD0(arg0->unk9C) * 5.0f + arg0->unk90, func_8001EB64(arg0->unk9C) * 5.0f + arg0->unk98, 6.0f) != 0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        t = arg0->unk9C & 0x1FFF;
        func_8011AAF4(D_8025C228, 0x17E, arg0, 0, 1, 0.0f, func_8001EAD0(t) * 25.0f + arg0->unk90, arg0->unk94 + 20.0f, func_8001EB64(t) * 25.0f + arg0->unk98, 0.0f, arg0->unk90, arg0->unk94 + 15.0f, arg0->unk98, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_802414B0);
    }
}


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


struct func_8024168C_Obj {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

struct func_8024168C_Owner {
    u8 pad[0x2C];
    struct func_8024168C_Obj *unk2C;
};


void func_8024168C(void *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_8011AAF4((u8 *)&D_8025C79C - 0x540, 0x1C3, arg0, 2, 1, 0.0f, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk30, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk34, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk38, 0.0f, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk3C, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk40, ((struct func_8024168C_Owner *)*(void **)((u8 *)&D_801BBCD0 + 8))->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        func_80133980(*(u16 *)((u8 *)arg0 + 0xA2));
        func_8012D918(arg0, 0x2F8, 9, 0, 0);
        func_801C2F0C(1, 0);
        func_80020718(0x14E);
        func_800058DC(arg0, (void *)func_80241784);
    }
}


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


void func_80241A60(void *arg0, s32 arg1) {
    D_8025DDA0 = 0.0f;
    D_8025DDA4 = D_8025C6B8;
    D_8025DDA8 = 0.0f;
    func_80243C30(-182.0f, 95.0f, 0.0f);
    func_80243C30(-140.0f, 95.0f, 40.0f);
    func_80243C30(-102.0f, 95.0f, 80.0f);
    func_80243C30(-22.0f, 95.0f, 80.0f);
    func_80243C30(-2.0f, 95.0f, 40.0f);
    func_80243C30(30.0f, 95.0f, 0.0f);
    func_80243C30(55.0f, 95.0f, -40.0f);
    func_80243C30(75.0f, 95.0f, -80.0f);
    func_80243C30(155.0f, 95.0f, -80.0f);
    func_80243C30(195.0f, 95.0f, -40.0f);
    func_80243C30(234.0f, 95.0f, 0.0f);
    if (func_80133A24(0x13D) == 0) {
        func_800058DC(arg0, func_80241BC4);
        return;
    }
    func_800058DC(arg0, func_80241C34);
}



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

extern struct func_802441AC_Struct D_801BBBF0;

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



struct func_8024245C_Struct { s16 a; s16 pad; s32 b; f32 c; };

void func_8024245C(u8 *arg0, u8 *arg1) {
    u8 pad[20];
    struct func_8024245C_Struct sp60;
    s32 sp5C;

    sp5C = (*(u16 *)(arg0 + 0x3C))++;
    func_80243CC0(arg0, (s32)arg1);
    func_80243E48(arg0, arg1);
    if (sp5C == 3) {
        sp60.a = 0x1100;
        sp60.b = 0x04100043;
        sp60.c = 5.0f;
        func_801C2F0C(4, &sp60);
    }
    if (sp5C >= 0x96) {
        func_8011AAF4(D_8025C35C, 0x258, arg0, 0, 1, 0.0f, 55.0f, D_8025C6E4, 84.0f, 0.0f, -35.0f, D_8025C6E8, -39.0f, 0.0f, 55.0f, -1, -1);
        *(u8 *)(*(u8 **)(arg1 + 0x14) + 0x22) = 0;
        *(u16 *)(arg0 + 0x3C) = 0;
        sp60.a = 0x1100;
        sp60.b = 0x01B80026;
        sp60.c = 3.0f;
        func_801C2F0C(4, &sp60);
        func_802441AC();
        func_80020718(0x195);
        func_80020718(0x6C5);
        func_800058DC(arg0, func_802425DC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802425DC.s")


struct func_8024278C_SB { u8 pad[0x22]; u8 b22; };
struct func_8024278C_SC { u8 pad[8]; f32 f8; };
struct func_8024278C_SD { u8 pad[0x30]; struct func_8024278C_SC *p30; };
struct func_8024278C_SA { struct func_8024278C_SD *p0; u8 pad[0x10]; struct func_8024278C_SB *p14; };
struct func_8024278C_SE { u8 pad[0x2C]; struct func_8024278C_SC *p2C; };
struct func_8024278C_S0 { u8 pad[0x3C]; u16 u3C; };

void func_8024278C(struct func_8024278C_S0 *arg0, struct func_8024278C_SA *arg1)
{
  int sp5C;
  sp5C = arg0->u3C;
  arg0->u3C = arg0->u3C + 1;
  func_80243CC0(arg0, (s32) arg1);
  func_80243E48(arg0, arg1);
  if (sp5C == 0)
  {
    arg1->p14->b22 = 1;
  }
  if (sp5C >= 0xB4)
  {
    func_8011AAF4(D_8025C404, 0x2AA, arg0, 0, 1, 0.0f, 235.0f, 250.0f, D_8025C700, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 55.0f, -1, -1);
    arg1->p0->p30->f8 = -450.0f;
    ((struct func_8024278C_SE *) D_801BBCD0)->p2C->f8 = -450.0f;
    func_802441AC();
    func_80020718(0x6C5);
    func_800058DC(arg0, func_802428B8);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802428B8.s")


struct func_80242A5C_StructSelf { u8 pad[0x3C]; u16 unk3C; };
struct func_80242A5C_StructSub { u8 pad[8]; f32 unk8; };
struct func_80242A5C_StructNode {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_80242A5C_StructSub *unk30;
};
struct func_80242A5C_StructObj {
    struct func_80242A5C_StructNode *unk0;
    u8 pad[0x10];
    struct func_80242A5C_StructNode *unk14;
    struct func_80242A5C_StructNode *unk18;
};

void func_80242A5C(struct func_80242A5C_StructSelf *arg0, struct func_80242A5C_StructObj *arg1) {
    arg0->unk3C++;
    func_80243CC0(arg0, (s32)arg1);
    func_80243E48(arg0, arg1);
    if (D_8011AAF4(D_8025C474, 0x2F3, arg0, 0, 2, 0.25f, 59.0f, D_8025C71C, 10.0f, 4294967296.0f, 69.0f, D_8025C720, -10.0f, 0.0f, 55.0f, -1, -1) == 0) {
        func_8011AAF4(D_8025C4AC, 0x2F7, arg0, 0, 1, 0.0f, 0.0f, D_8025C724, 900.0f, 0.0f, -7.0f, D_8025C728, -197.0f, 0.0f, 55.0f, -1, -1);
        arg1->unk18->unk22 = 1;
        arg1->unk14->unk22 = 0;
        arg1->unk0->unk30->unk8 = D_8025C72C;
        ((struct func_80242A5C_StructSub *)D_801BBCD0->unk2C)->unk8 = arg1->unk0->unk30->unk8;
        func_802441AC();
        arg0->unk3C = 0;
        func_80020718(0x6C5);
        func_800058DC(arg0, func_80242C3C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242C3C.s")

struct func_80242EEC_Struct;
extern void func_80242EEC(struct func_80242EEC_Struct *, s32);
struct func_80242D80_SA { u8 pad[0x30]; struct func_80242D80_SB *p30; };
struct func_80242D80_SB { u8 pad[8]; f32 f8; };
struct func_80242D80_SC { u8 pad[0x3C]; s16 s3C; u8 pad2[0x56]; f32 f94; };
struct func_80242D80_SD { u8 pad[0x2C]; struct func_80242D80_SB *p2C; };

void func_80242D80(struct func_80242D80_SC *arg0, struct func_80242D80_SA **arg1) {
    f32 v;
    arg1[0]->p30->f8 = arg1[0]->p30->f8 + arg0->f94;
    func_8011AAF4(D_8025C4E4, 0x34C, arg0, 0, 1, 0.0f, -153.0f, D_8025C744, -206.0f, 0.0f, 0.0f, arg1[0]->p30->f8, 0.0f, 0.0f, 55.0f, -1, -1);
    if (arg0->f94 > 0.5) {
        arg0->f94 = arg0->f94 - D_8025C748;
    }
    v = arg1[0]->p30->f8;
    if (v >= -360.0f) {
        arg1[0]->p30->f8 = -360.0f;
        arg0->s3C = 0;
        func_800058DC(arg0, func_80242EEC);
        v = arg1[0]->p30->f8;
    }
    ((struct func_80242D80_SD *)D_801BBCD0)->p2C->f8 = v;
    func_80243CC0(arg0, (s32)arg1);
}


struct func_80242EEC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};


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


struct func_80242FD8_S2 { u8 pad[4]; f32 f4; };
struct func_80242FD8_S1 { u8 pad[0x30]; struct func_80242FD8_S2 *p30; };
struct func_80242FD8_S3 { u8 pad[0x1C]; struct func_80242FD8_S1 *p1C; };
struct func_80242FD8_Sp { s16 a; s16 pad; s32 b; f32 c; s16 d; u8 pad2[0xE]; };

void func_80242FD8(u16 *arg0, struct func_80242FD8_S3 *arg1) {
    s32 v;
    struct func_80242FD8_S2 *p;
    struct func_80242FD8_Sp sp;

    v = arg0[0x3C / 2]++;
    if (v == 0x1E) {
        func_8011AAF4(D_8025C51C, 0x38A, arg0, 0, 1, 0.0f, 36.0f, -310.0f, -115.0f, 0.0f, 83.0f, D_8025C750, -50.0f, 0.0f, 55.0f, -1, -1);
    }
    if (v >= 0x3C) {
        p = arg1->p1C->p30;
        p->f4 = p->f4 - D_8025C758;
        p = arg1->p1C->p30;
        if (p->f4 <= 0.0f) {
            p->f4 = 0.0f;
        }
        if (v == 0x78) {
            sp.a = 0x1100;
            sp.b = 0x0348005E;
            sp.d = 0xA;
            sp.c = 6.0f;
            func_801C2F0C(5, &sp);
        } else if (v == 0x96) {
            func_8011AAF4(D_8025C554, 0x39C, arg0, 0, 1, 0.0f, 160.0f, -316.0f, 0.0f, 0.0f, 69.0f, -342.0f, -2.0f, 0.0f, 30.0f, -1, -1);
        } else if (v == 0xC3) {
            func_8011AAF4(D_8025C58C, 0x3A1, arg0, 0, 1, 0.0f, 80.0f, -340.0f, 0.0f, 0.0f, 65.0f, D_8025C760, 0.0f, 0.0f, 20.0f, -1, -1);
            arg0[0x3C / 2] = 0;
            func_800058DC(arg0, func_80243290);
        }
    }
    func_80243CC0(arg0, (s32)arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243290.s")


struct func_80243588_StructSelf {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_80243588_StructGlobal {
    u8 pad0[4];
    u16 unk4;
    u16 unk6;
    u8 pad1[0x39E];
    u8 unk3A6;
    u8 unk3A7;
};

void func_80243588(struct func_80243588_StructSelf *arg0, s32 arg1)
{
    s32 timer;

    timer = arg0->unk3C++;
    if (timer >= 30) {
        if (timer == 30) {
            func_8011AAF4(D_8025C66C, 0x401, arg0, 0, 1,
                0.0f, 32.0f, D_8025C76C, 1.0f, 0.0f, 84.0f,
                -336.0f, 1.0f, 0.0f, 55.0f, -1, -1);
        } else {
            func_801C419C(arg0, 0.12f, 0.0f, 0, 55.0f);
        }
    }
    if (timer == 165) {
        func_80020718(10);
    }
    if (timer == 180) {
        ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk4 = 50;
        ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk6 = 1;
        ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk3A6 = 1;
        ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk3A7 = 1;
        func_8012FE50(16,
            ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk4,
            ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk3A6,
            ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk3A7, 2);
    }
}



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


typedef struct func_80243828_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_80243828_Struct;


void func_80243828(func_80243828_Struct *arg0, s32 arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;

    sp3C = arg0->unk90 - D_8025DDA0;
    sp38 = arg0->unk94 - D_8025DDA4;
    sp34 = arg0->unk98 - D_8025DDA8;
    sp30 = func_8002FC20(sp3C * sp3C + sp38 * sp38 + sp34 * sp34);
    if ((f64) sp30 < D_8025C770) {
        arg0->unk40 = ((f64) sp3C * 8.0) / (f64) sp30;
        arg0->unk44 = ((f64) sp38 * 12.0) / (f64) sp30;
        arg0->unk48 = ((f64) sp34 * 8.0) / (f64) sp30;
        func_80380F94(arg0->unk90, arg0->unk94, arg0->unk98, 0, 0.0f, 0.0f, 0xF);
        arg0->unk3C = 0;
        if (*(u8 *)&arg0->unk98 == 0) {
            *(u8 *)&arg0->unk98 = 1;
            func_80020718(0x196);
        }
        func_800058DC(arg0, func_80243988);
    }
}

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


struct func_80243CC0_S2 { u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[0x30]; u8 b40[0xC]; u8 b4C; u8 b4D; };
struct func_80243CC0_S1 { u8 pad[0x30]; struct func_80243CC0_S2 *p30; };
struct func_80243CC0_S3 { struct func_80243CC0_S1 *a[5]; };
struct func_80243CC0_S0 { u8 pad[0x78]; f32 f78; f32 f7C; f32 f80; s16 s84; s16 s86; s16 s88; u8 pad8A[6]; u16 u90; };

void func_80243CC0(void *a0, s32 a1) {
    struct func_80243CC0_S0 *arg0 = a0;
    struct func_80243CC0_S3 *arg1 = (struct func_80243CC0_S3 *)a1;
    struct func_80243CC0_S2 *t;
    s32 v;

    arg0->f78 = arg1->a[0]->p30->f4;
    arg0->f7C = arg1->a[0]->p30->f8;
    arg0->f80 = arg1->a[0]->p30->fC;
    arg0->s84 = 0;
    arg0->s86 = 0;
    arg0->s88 = 0;
    D_8025DDA0 = arg1->a[0]->p30->f4;
    D_8025DDA4 = arg1->a[0]->p30->f8;
    D_8025DDA8 = arg1->a[0]->p30->fC;
    arg1->a[1]->p30->f8 = arg1->a[0]->p30->f8;
    arg1->a[2]->p30->f8 = arg1->a[0]->p30->f8;
    arg1->a[3]->p30->f8 = arg1->a[0]->p30->f8;
    arg1->a[4]->p30->f8 = arg1->a[0]->p30->f8;
    v = arg0->u90 % 90;
    if (!(v % 2)) {
        func_8012CF8C(arg0, arg1->a[3]->p30->b40, 0x2F8, 0xF);
    } else {
        func_8012CF8C(arg0, arg1->a[3]->p30->b40, 0x2F8, 0xE);
    }
    t = arg1->a[4]->p30;
    t->b4C = t->b4C + 1;
    t = arg1->a[4]->p30;
    t->b4D = t->b4D + 1;
}


struct func_80243E48_StructP { u8 pad[4]; f32 unk4; f32 unk8; };
struct func_80243E48_StructM { u8 pad[0x30]; struct func_80243E48_StructP *unk30; };
struct func_80243E48_StructA { u8 pad[0x14]; struct func_80243E48_StructM *unk14; };

void func_80243E48(void *arg0, void *argp) {
    struct func_80243E48_StructA *arg1 = argp;
    struct func_80243E48_StructP *p;
    f32 b;
    f32 a;
    f32 v;
    f32 d;
    f32 fv;
    s32 r;

    p = arg1->unk14->unk30;
    p->unk8 = (f32)((f64)p->unk8 - D_8025C788);
    p = arg1->unk14->unk30;
    fv = p->unk8;
    if ((f64)fv < D_8025C790) {
        p->unk8 = D_8025C798;
        p = arg1->unk14->unk30;
        fv = p->unk8;
    }
    r = func_8001EF38(fv - CAM->unk8, p->unk4 - CAM->unk4) << 16;
    GB(0xF2C) = 0x6E;
    GB(0xF2D) = (s32)(func_8001EAD0(r >> 16) * 80.0f);
    *(s8 *)&GB(0xF2E) = -0x46;
    a = CAM->unk8;
    fv = arg1->unk14->unk30->unk8;
    b = fv;
    if (a < b) {
        d = -(a - b);
    } else {
        d = a - b;
    }
    v = (f32)(1.0 - ((f64)d / 200.0));
    if ((f64)v < 0.0) {
        v = 0.0f;
    }
    if ((f64)v > 1.0) {
        v = 1.0f;
    }
    GB(0xF29) = (u32)(20.0f * v);
    GB(0xF2A) = (u32)(255.0f * v);
    GB(0xF2B) = (u32)(20.0f * v);
    GB(0xF20) = (u32)(64.0f * v);
    GB(0xF21) = (u32)(64.0f * v);
    GB(0xF22) = (u32)(64.0f * v);
}


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

