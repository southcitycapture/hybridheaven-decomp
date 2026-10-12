#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802408F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240BA0.s")


void func_80240C74(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


struct func_80240C80_Inner {
    s16 pad0;
    u16 unk2;
};

struct func_80240C80_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
    u8 pad2[0x14];
    struct func_80240C80_Inner *unk38;
};

extern s32 func_80126CC0(void *, void *);
extern void func_8001F74C();
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_80127014();
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_80240CF8();

void func_80240C80(void *arg0, s32 arg1) {
    struct func_80240C80_Struct *s;

    if (func_80126CC0(arg0, func_80127014) != 0) {
        func_8001F74C(arg0);
        s = arg0;
        s->unk18 = func_8012E5B0;
        s->unk20 = func_8012E6BC;
        func_8013B570(arg0, s->unk38->unk2, 2, 4, func_80240CF8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240CF8.s")

extern void func_800058DC(void *, void *);

struct func_80240E30_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0x196 - 0x44];
    u16 unk196;
    u8 pad2[0x1088 - 0x198];
    s32 unk1088;
    u8 pad3[0x10A0 - 0x108C];
    s32 unk10A0;
};

extern struct func_80240E30_Struct D_801BBBF0;
extern u8 D_80245DFC[];
extern void func_80240E94(u64 arg0);
void func_80203830(s32 arg0, void *arg1);

void func_80240E30(s32 arg0, s32 arg1) {
    if (D_801BBBF0.unk196 == 1) {
        func_80203830(arg0, D_80245DFC);
        D_801BBBF0.unk1088 = arg0;
        D_801BBBF0.unk10A0 = D_801BBBF0.unk40;
        func_800058DC(arg0, func_80240E94);
    }
}


s32 func_8020394C(u64 arg0);                          /* extern */
extern void func_80240ECC(s32 arg0);

void func_80240E94(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80240ECC);
    }
}


extern s32 func_802039B0();
extern void func_80240F00(s32 arg0, s32 arg1);

void func_80240ECC(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_80240F00);
    }
}


void func_80240F00(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80240F0C.s")


extern void func_80241070();

struct func_80241020_Struct {
    u8 pad0[0x192];
    u16 unk192;
    u16 unk194;
    u16 unk196;
};

void func_80241020(s32 arg0, s32 arg1) {
    func_8001F74C((void *) arg0);
    if (((struct func_80241020_Struct *) &D_801BBBF0)->unk196 == 1) {
        ((struct func_80241020_Struct *) &D_801BBBF0)->unk192 = 1;
        func_800058DC((void *) arg0, (void *) func_80241070);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241070.s")


extern void func_802410F4(s32 arg0, s32 arg1);

void func_802410C0(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_802410F4);
    }
}


void func_802410F4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241100.s")


extern s32 func_8001E978(s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_801BCC78;

void func_80241114(void) {
    func_8001E978(D_801BCC78, 0, 0, 0, 0xF, 0, 2, 0);
}


struct func_8024115C_Sub {
    u8 pad0[2];
    u16 unk2;
};

struct func_8024115C_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x14];
    struct func_8024115C_Sub *unk38;
};

extern void func_80020744(s32);
extern void func_802411D0();

void func_8024115C(struct func_8024115C_Struct *arg0, s32 arg1) {
    if (func_80126CC0(arg0, (void *)func_80127014) != 0) {
        arg0->unk18 = (void *)func_8012E5B0;
        arg0->unk20 = (void *)func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, (void *)func_802411D0);
        func_80020744(0x5C4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802411D0.s")


extern void func_80241374(s32 arg0);

void func_8024133C(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80241374);
    }
}

void func_802413A8(s32 arg0, s32 arg1);


void func_80241374(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_802413A8);
    }
}


extern void func_8012FE50(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s16 D_801BBBF6;

void func_802413A8(s32 arg0, s32 arg1) {
    D_801BBBF6 = 1;
    func_8012FE50(0x1E, 0x54, 6, 1, 1);
}


typedef struct func_802413F0_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_802413F0_Struct;

extern s32 func_80126B14(void *, void *, u16, s32);
extern void func_80241438();

void func_802413F0(func_802413F0_Struct *arg0, s32 arg1) {
    if (func_80126B14(arg0, func_80127014, arg0->unk90, 0x32) != 0) {
        func_800058DC((s32)arg0, func_80241438);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241438.s")


void func_80241494(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_802414A0_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_802414A0_Struct;

extern void func_802414E8();

void func_802414A0(func_802414A0_Struct *arg0, s32 arg1) {
    if (func_80126B14(arg0, func_80127014, arg0->unk90, 0x31) != 0) {
        func_800058DC((s32)arg0, func_802414E8);
    }
}


typedef struct func_802414E8_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
} func_802414E8_Struct;

extern void func_80241544(void *arg0, s32 arg1);

void func_802414E8(func_802414E8_Struct *arg0, s32 arg1) {
    func_8001F74C();
    arg0->unk18 = func_8012E5B0;
    arg0->unk20 = func_8012E6BC;
    func_8013B570(arg0, 0x31, 0, 4, func_80241544);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241544.s")


typedef struct func_802416C8_Struct2 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_802416C8_Struct2;

typedef struct func_802416C8_Struct1 {
    u8 pad0[0x2C];
    func_802416C8_Struct2 *unk2C;
} func_802416C8_Struct1;

typedef struct func_802416C8_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_802416C8_Struct0;

extern f32 D_80256F98;
extern void func_80241730();

void func_802416C8(func_802416C8_Struct0 *arg0, func_802416C8_Struct1 **arg1) {
    if (arg0->unk92 != 0) {
        (*arg1)->unk2C->unk18 = 0.0f;
        (*arg1)->unk2C->unk1C = 0.0f;
        (*arg1)->unk2C->unk20 = D_80256F98;
        arg0->unk92 = 0xC8;
        func_800058DC((s32) arg0, (void *) func_80241730);
    }
}


typedef struct func_80241730_Struct1 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241730_Struct1;

typedef struct func_80241730_Struct3 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
} func_80241730_Struct3;

typedef struct func_80241730_Struct2 {
    u8 pad0[0x2C];
    func_80241730_Struct3 *unk2C;
} func_80241730_Struct2;

extern f64 D_80256FA0;
extern void func_802417AC();

void func_80241730(func_80241730_Struct1 *arg0, func_80241730_Struct2 **arg1) {
    s32 temp_v0;
    f64 temp_f0;
    func_80241730_Struct3 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_f0 = D_80256FA0;
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + temp_f0);
        return;
    }
    arg0->unk92 = 0;
    func_800058DC(arg0, func_802417AC);
}


typedef struct func_802417AC_Struct {
    u8 pad[0x92];
    u16 unk92;
    u8 unk94;
} func_802417AC_Struct;

extern void func_802417F0();

void func_802417AC(func_802417AC_Struct *arg0, s32 arg1) {
    arg0->unk94 = arg0->unk94 + 1;
    if (arg0->unk92 != 0) {
        arg0->unk92 = 0xA;
        func_800058DC((s32) arg0, (void *) func_802417F0);
    }
}

/* starting point: func_80240F14 (file022), whose assembly is 100% the same as this function's */

extern f64 D_80256FA8;

struct func_802417F0_Inner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_802417F0_Arg0 {
    u8 pad[0x24];
    struct func_802417F0_Inner *unk24;
    u8 pad2[0x92 - 0x28];
    u16 unk92;
};

struct func_802417F0_Vec {
    u8 pad[0x18];
    f32 unk18;
    u8 pad2[0x20 - 0x1C];
    f32 unk20;
};

struct func_802417F0_Obj {
    u8 pad[0x2C];
    struct func_802417F0_Vec *unk2C;
};

void func_802417F0(struct func_802417F0_Arg0 *arg0, struct func_802417F0_Obj **arg1) {
    f64 temp_f0;
    struct func_802417F0_Vec *temp_v1;

    if (arg0->unk92 != 0) {
        temp_f0 = D_80256FA8;
        arg0->unk92 = arg0->unk92 - 1;
        temp_v1 = (*arg1)->unk2C;
        temp_v1->unk18 = (f32) ((f64) temp_v1->unk18 - temp_f0);
        temp_v1 = (*arg1)->unk2C;
        temp_v1->unk20 = (f32) ((f64) temp_v1->unk20 - temp_f0);
        return;
    }
    arg0->unk24->unk22 = 0;
}


typedef struct func_80241854_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
} func_80241854_Struct;

extern u8 func_80126EAC[];
extern u8 func_802418A4[];

void func_80241854(func_80241854_Struct *arg0, s32 arg1) {
    if (arg0->unk92 != 0) {
        if (func_80126B14(arg0, func_80126EAC, arg0->unk90, 9) != 0) {
            func_800058DC((s32)arg0, func_802418A4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_802418A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241C8C.s")


typedef struct func_80241CE0_Struct1 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241CE0_Struct1;

typedef struct func_80241CE0_Struct3 {
    u8 pad0[0x1C];
    f32 unk1C;
} func_80241CE0_Struct3;

typedef struct func_80241CE0_Struct2 {
    u8 pad0[0x30];
    func_80241CE0_Struct3 *unk30;
} func_80241CE0_Struct2;

typedef struct func_80241CE0_Struct4 {
    u8 pad0[0x14];
    func_80241CE0_Struct2 *unk14;
} func_80241CE0_Struct4;

extern f64 D_80256FC0;
extern void func_80241D58();

void func_80241CE0(func_80241CE0_Struct1 *arg0, func_80241CE0_Struct4 *arg1) {
    s32 temp_v0;
    func_80241CE0_Struct3 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + D_80256FC0);
        return;
    }
    arg0->unk92 = 0x14;
    func_80020744(0x234);
    func_800058DC((s32) arg0, func_80241D58);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241DEC.s")


struct func_80241F00_Obj {
    u8 pad0[0x4B];
    u8 unk4B;
};

struct func_80241F00_Mid {
    u8 pad0[0x30];
    struct func_80241F00_Obj *unk30;
};

struct func_80241F00_Arg1 {
    u8 pad0[0x14];
    struct func_80241F00_Mid *unk14;
    struct func_80241F00_Mid *unk18;
};

struct func_80241F00_Arg0 {
    u8 pad0[0x92];
    u16 unk92;
};

void func_80241F00(struct func_80241F00_Arg0 *arg0, struct func_80241F00_Arg1 *arg1) {
    struct func_80241F00_Obj *temp_a2;
    struct func_80241F00_Obj *temp_v1;
    s32 temp_v0;

    temp_v0 = arg0->unk92;
    if (temp_v0 != 0) {
        arg0->unk92 = (u16) (temp_v0 - 1);
        temp_v1 = arg1->unk14->unk30;
        temp_v1->unk4B = (u8) (temp_v1->unk4B - 6);
        temp_a2 = arg1->unk18->unk30;
        temp_a2->unk4B = (u8) (temp_a2->unk4B - 0xC);
        return;
    }
    arg1->unk14->unk30->unk4B = 0;
}


typedef struct func_80241F50_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x14];
    struct func_80241F50_StructB *unk38;
} func_80241F50_Struct;

typedef struct func_80241F50_StructB {
    u8 pad0[2];
    u16 unk2;
} func_80241F50_StructB;

extern u8 func_80241FBC[];

void func_80241F50(func_80241F50_Struct *arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80127014) != 0) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_80241FBC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80241FBC.s")


extern void func_80242044();

void func_8024201C(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_80242044);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/802408F0/func_80242044.s")



void func_802421B0(s32 arg0, s32 arg1) {
    func_80020744(7);
    func_8012FE50(0xF, 0x5A, 6, 2, 2);
}

