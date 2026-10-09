#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_802408F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80240904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80240918.s")


extern void *func_801505AC(s32);
extern void func_801C3B7C(void *);

void func_80240928(void) {
    u8 *temp_v0;

    temp_v0 = func_801505AC(6);
    temp_v0[0x92] = temp_v0[0x92] | 0x40;
    func_801C3B7C(func_801505AC(7));
}


s32 func_80133A24(s32);
s32 func_80126CC0(s32, void *);
void func_800058DC(s32, void *);
extern void func_80127014(void);
extern void func_802409B4(void);

void func_80240964(s32 arg0, s32 arg1) {
    if ((func_80133A24(0x147) == 0) && (func_80126CC0(arg0, func_80127014) != 0)) {
        func_800058DC(arg0, func_802409B4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_802409B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80240B80.s")


extern s32 func_802039B0();
extern void func_80240C38();

void func_80240C04(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_80240C38);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80240C38.s")


typedef struct func_80240C44_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80240C44_Struct;

extern s32 func_80126B14(void *, void *, u16, s32);
extern void func_80240C8C(void);

void func_80240C44(func_80240C44_Struct *arg0, s32 arg1) {
    if (func_80126B14(arg0, func_80127014, arg0->unk90, 0x2E) != 0) {
        func_800058DC((s32)arg0, func_80240C8C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80240C8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80240CE8.s")


typedef struct func_80240D34_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_80240D34_Struct;


void func_80240D34(func_80240D34_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800058DC((s32) arg0, func_80127014);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80240D6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80240DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80240E10.s")


typedef struct func_80240F94_Struct2 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_80240F94_Struct2;

typedef struct func_80240F94_Struct1 {
    u8 pad0[0x2C];
    func_80240F94_Struct2 *unk2C;
} func_80240F94_Struct1;

typedef struct func_80240F94_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80240F94_Struct0;

extern f32 D_8025BE00;
extern void func_80240FFC(void);

void func_80240F94(func_80240F94_Struct0 *arg0, func_80240F94_Struct1 **arg1) {
    if (arg0->unk92 != 0) {
        (*arg1)->unk2C->unk18 = 0.0f;
        (*arg1)->unk2C->unk1C = 0.0f;
        (*arg1)->unk2C->unk20 = D_8025BE00;
        arg0->unk92 = 0xC8;
        func_800058DC((s32) arg0, (void *) func_80240FFC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80240FFC.s")


typedef struct func_80241078_Struct {
    u8 pad[0x92];
    u16 unk92;
    u8 unk94;
} func_80241078_Struct;

extern void func_802410BC(void);

void func_80241078(func_80241078_Struct *arg0, s32 arg1) {
    arg0->unk94 = arg0->unk94 + 1;
    if (arg0->unk92 != 0) {
        arg0->unk92 = 0xA;
        func_800058DC((s32) arg0, (void *) func_802410BC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_802410BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_8024114C.s")


typedef struct func_80241184_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
} func_80241184_Struct;

extern u8 func_80126EAC[];
extern u8 func_802411D4[];

void func_80241184(func_80241184_Struct *arg0, s32 arg1) {
    if (arg0->unk92 != 0) {
        if (func_80126B14(arg0, func_80126EAC, arg0->unk90, 9) != 0) {
            func_800058DC((s32)arg0, func_802411D4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_802411D4.s")


typedef struct func_802415DC_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_802415DC_Struct0;

typedef struct func_802415DC_Struct2 {
    u8 pad0[0x4B];
    u8 unk4B;
} func_802415DC_Struct2;

typedef struct func_802415DC_Struct1 {
    u8 pad0[0x30];
    func_802415DC_Struct2 *unk30;
} func_802415DC_Struct1;

typedef struct func_802415DC_Struct3 {
    u8 pad0[0x18];
    func_802415DC_Struct1 *unk18;
} func_802415DC_Struct3;

extern void func_80241630(void);

void func_802415DC(func_802415DC_Struct0 *arg0, func_802415DC_Struct3 *arg1) {
    s32 temp_v0;
    u16 temp_t0;
    func_802415DC_Struct2 *temp_v0_2;

    temp_t0 = 0x14;
    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk18->unk30;
        temp_v0_2->unk4B += 0xC;
        return;
    }
    arg0->unk92 = temp_t0;
    func_800058DC((s32) arg0, func_80241630);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_802416A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_8024173C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_802418C4.s")

extern struct func_80242178_Struct D_801BBBF0;

typedef struct func_80241A54_Struct1 {
    u8 pad[0x30];
    u8 *unk30;
} func_80241A54_Struct1;

extern void func_80241AD4(void);

void func_80241A54(void *arg0, func_80241A54_Struct1 **arg1) {
    u8 *temp_v0;
    s32 temp_v0_2;
    s32 tmp;

    temp_v0 = (*arg1)->unk30;
    temp_v0[0x4B] = (u8) (temp_v0[0x4B] + 2);
    tmp = ((u8 *) &D_801BBBF0)[0xF21];
    if (tmp < 0xFF) {
        ((u8 *) &D_801BBBF0)[0xF20] = (u8) (((u8 *) &D_801BBBF0)[0xF20] + 1);
    }
    if (((u8 *) &D_801BBBF0)[0xF22] < 0xFF) {
        ((u8 *) &D_801BBBF0)[0xF21] = (u8) (tmp + 1);
    }
    temp_v0_2 = ((u8 *) arg0)[0x94];
    ((u8 *) arg0)[0x94] = (u8) (temp_v0_2 - 1);
    if (temp_v0_2 == 0) {
        func_800058DC((s32) arg0, func_80241AD4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241AD4.s")


extern s32 func_8001E978(s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_801BCC78;

void func_80241B70(void) {
    func_8001E978(D_801BCC78, 0, 0, 0, 0xF, 0, 2, 0);
}


extern void func_80020718(s32);
extern u8 *D_801BBCCC;
extern u8 func_80241C18[];

void func_80241BB8(s32 arg0, s32 arg1) {
    if (D_801BBCCC[0x63] != 0 && func_80126CC0(arg0, func_80127014) != 0) {
        func_80020718(0x54);
        func_800058DC(arg0, func_80241C18);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241C18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241CD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241D84.s")


extern u8 *D_801BCC90;

void func_80241DA4(void) {
    *(s32 *)(D_801BCC90 + 0x54) = 1;
}


void func_80241DB8(void) {
    func_801C3B7C(func_801505AC(0xA));
}

extern void func_8001F74C();

typedef struct func_80241DE0_Struct1 {
    u8 pad0[2];
    u16 unk2;
} func_80241DE0_Struct1;

typedef struct func_80241DE0_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x20 - 0x1C];
    void *unk20;
    u8 pad2[0x38 - 0x24];
    func_80241DE0_Struct1 *unk38;
} func_80241DE0_Struct;

typedef struct func_80241DE0_Struct2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80241DE0_Struct2;

extern func_80241DE0_Struct2 D_8024F768;
extern s32 D_801BCCF0;
extern void func_8012E5B0();
extern void func_8012E6BC();
extern void func_80241EB0();
extern s32 func_8012C4D0(s32, func_80241DE0_Struct2, s32);
extern void func_8013B570(s32, u16, s32, s32, void *);

void func_80241DE0(s32 arg0, s32 arg1) {
    func_80241DE0_Struct *self;

    self = (func_80241DE0_Struct *)arg0;
    func_8001F74C();
    if (func_80126CC0(arg0, &func_80127014) != 0) {
        D_801BCCF0 = func_8012C4D0(arg0, D_8024F768, 5);
        self->unk18 = (void *)func_8012E5B0;
        self->unk20 = (void *)func_8012E6BC;
        func_8013B570(arg0, self->unk38->unk2, 2, 4, (void *)func_80241EB0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241F08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241F48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80242048.s")


extern s16 D_801BBBF6;
extern void func_8012FE50(s32, s32, s32, s32, s32);

typedef struct func_80242080_Struct2 {
    u8 pad0[0x10];
    s16 unk10;
} func_80242080_Struct2;

typedef struct func_80242080_Struct1 {
    u8 pad0[0x30];
    func_80242080_Struct2 *unk30;
} func_80242080_Struct1;

typedef struct func_80242080_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80242080_Struct0;

void func_80242080(func_80242080_Struct0 *arg0, func_80242080_Struct1 **arg1) {
    s32 temp_a2;

    temp_a2 = arg0->unk92;
    if (temp_a2 != 0) {
        arg0->unk92 = temp_a2 - 1;
        arg1[0]->unk30->unk10 += 0xC0;
        arg1[1]->unk30->unk10 -= 0xC0;
        return;
    }
    D_801BBBF6 = 0x400;
    func_8012FE50(0x1E, 0x38, 6, 1, 1);
}

void func_80242178(s32 arg0, s32 arg1);

extern u8 D_8025C6FB;

typedef struct func_802420FC_Struct1 {
    u8 pad0[0x2];
    u16 unk2;
} func_802420FC_Struct1;

typedef struct func_802420FC_Struct0 {
    u8 pad0[0x18];
    void (*unk18)(void);
    u8 pad1[0x4];
    void (*unk20)(void);
    u8 pad2[0x14];
    func_802420FC_Struct1 *unk38;
} func_802420FC_Struct0;

void func_802420FC(func_802420FC_Struct0 *arg0, s32 arg1) {
    if (D_8025C6FB == 0x64 && func_80126CC0((s32)arg0, func_80127014) != 0) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_80242178);
    }
}


struct func_80242178_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0x1088 - 0x44];
    s32 unk1088;
    u8 pad2[0x10A0 - 0x108C];
    s32 unk10A0;
};

extern void func_80203830(s32, void *);
extern void func_8020394C();
extern u8 D_80257618[];
extern void func_802421D8();

void func_80242178(s32 arg0, s32 arg1) {
    func_8001F74C();
    func_80203830(arg0, D_80257618);
    D_801BBBF0.unk1088 = arg0;
    D_801BBBF0.unk10A0 = D_801BBBF0.unk40;
    func_8020394C();
    func_800058DC(arg0, func_802421D8);
}


extern void func_800208C4(s32);
extern void func_80242218(void);

void func_802421D8(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800208C4(0x4A);
        func_800058DC(arg0, func_80242218);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80242218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80242240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80242310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80242344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80242364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80242428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80242460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80242494.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80242524.s")


typedef struct func_80242560_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_80242560_Struct;

extern s32 func_80126944(void);
extern void func_80020744(s32);
extern void func_802425AC(void);

void func_80242560(func_80242560_Struct *arg0, void *arg1) {
    if (func_80126944() == 0) {
        func_80020744(7);
        arg0->unk90 = 0x18;
        func_800058DC(arg0, func_802425AC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_802425AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_8024260C.s")

