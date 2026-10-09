#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80124ED0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_801251BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_801256C4.s")


typedef struct func_80125774_Struct {
    u8 pad0[0x42A0];
    u8 unk42A0;
    u8 pad1[3];
    s32 unk42A4;
    s32 unk42A8;
    u8 unk42AC;
    u8 unk42AD;
    u8 pad2[2];
    s32 unk42B0;
    s32 unk42B4;
    s32 unk42B8;
    s32 unk42BC;
    u8 unk42C0;
    u8 unk42C1;
    u8 pad3[2];
    s32 unk42C4;
    u8 unk42C8;
    u8 pad4[3];
    s32 unk42CC;
    u8 pad5[0x42EC - 0x42D0];
    u8 unk42EC;
} func_80125774_Struct;

extern func_80125774_Struct D_800892B0;

s32 func_80125774(s32 arg0) {
    if (D_800892B0.unk42A0 != 0) {
        return 0;
    }
    D_800892B0.unk42A0 = 1;
    D_800892B0.unk42A4 = 0;
    D_800892B0.unk42A8 = 0;
    D_800892B0.unk42AD = 0;
    D_800892B0.unk42B0 = 0;
    D_800892B0.unk42B4 = 0;
    D_800892B0.unk42B8 = 0;
    D_800892B0.unk42BC = 0;
    D_800892B0.unk42C4 = 0;
    D_800892B0.unk42CC = arg0;
    D_800892B0.unk42AC = 0;
    D_800892B0.unk42EC = 0;
    D_800892B0.unk42C1 = 0;
    D_800892B0.unk42C0 = 0;
    D_800892B0.unk42C8 = 0;
    return 1;
}


extern u8 D_8008D54C[];

void func_801257DC(void) {
    D_8008D54C[4] = 0;
    func_80125774(0);
    D_8008D54C[4] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80125808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80125968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80126198.s")


typedef struct func_801262D4_Struct {
    s32 unk0;
    s32 unk4;
    u16 unk8;
} func_801262D4_Struct;

extern s32 func_80005204(u16);
extern void func_80126198(s32, u16, ...);
extern func_801262D4_Struct *D_80175490[];

void func_801262D4(u16 arg0, u16 arg1) {
    func_801262D4_Struct *temp_v0;
    func_801262D4_Struct *sp24;
    s32 sp1C;

    temp_v0 = D_80175490[arg0];
    if (temp_v0 != NULL) {
        if (temp_v0->unk0 != 0) {
            sp24 = temp_v0;
            func_80126198(temp_v0->unk0, arg1);
        }
        if (temp_v0->unk8 != 0) {
            sp1C = temp_v0->unk4 & 0xFFFFFF;
            func_80126198(func_80005204(temp_v0->unk8) + sp1C, arg1, sp1C);
        }
    }
}


typedef struct func_80126360_Struct {
    u8 pad[0x2C];
    s32 unk2C;
    s32 unk30;
} func_80126360_Struct;

void func_80126360(func_80126360_Struct *arg0) {
    arg0->unk2C = 0;
    arg0->unk30 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_8012636C.s")


typedef struct func_801264D4_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    u16 unk12;
} func_801264D4_Sub;

typedef struct func_801264D4_Obj {
    u8 pad[0x2C];
    func_801264D4_Sub *unk2C;
    func_801264D4_Sub *unk30;
} func_801264D4_Obj;

extern func_801264D4_Obj *D_8008DA88[];

void func_801264D4(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, u16 arg5) {
    func_801264D4_Obj **temp_v0;
    func_801264D4_Sub *temp_a0;
    func_801264D4_Obj *temp_v1;

    temp_v0 = &D_8008DA88[arg1];
    temp_v1 = *temp_v0;
    temp_a0 = temp_v1->unk2C;
    if (temp_a0 != NULL) {
        temp_a0->unk4 = arg2;
        (*temp_v0)->unk2C->unk8 = arg3;
        (*temp_v0)->unk2C->unkC = arg4;
        (*temp_v0)->unk2C->unk12 = arg5;
        return;
    }
    temp_v1->unk30->unk4 = arg2;
    (*temp_v0)->unk30->unk8 = arg3;
    (*temp_v0)->unk30->unkC = arg4;
    (*temp_v0)->unk30->unk12 = arg5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80126570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_801266B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80126744.s")


typedef struct func_80126794_Struct {
    u8 pad[0x181];
    u8 unk181;
    u8 unk182;
    u16 unk184;
    u8 unk186;
    u8 unk187;
    u32 unk188;
} func_80126794_Struct;

extern func_80126794_Struct D_801BBBF0;

void func_80126794(void) {
    D_801BBBF0.unk181 = 0;
    D_801BBBF0.unk182 = 0;
    D_801BBBF0.unk184 = 0;
    D_801BBBF0.unk186 = 0;
    D_801BBBF0.unk187 = 0;
    D_801BBBF0.unk188 = 0;
}


extern void func_80017594(u16);
extern u16 func_80125808(u16);

s32 func_801267B8(u16 arg0, s32 arg1) {
    u16 temp_v0;
    u16 temp_v1;

    if (D_8008D54C[4] == 0) {
        func_80125774(arg1);
    }
    temp_v0 = func_80125808(arg0);
    temp_v1 = temp_v0;
    if (temp_v0 == 0) {
        return 0;
    }
    if (temp_v1 == 2) {
        func_80017594(arg0);
    }
    func_801257DC();
    return 1;
}


typedef struct func_80126820_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x181 - 6];
    u8 unk181;
    u8 unk182;
    u8 pad2[4];
    u8 unk187;
    u8 pad3[0x1114 - 0x188];
    u16 unk1114;
} func_80126820_Struct;

void func_801266B8(u16 arg0, u16 arg1);

s32 func_80126820(u16 arg0) {
    u16 temp_a1;

    temp_a1 = arg0;
    ((func_80126820_Struct *) &D_801BBBF0)->unk1114 = temp_a1;
    if ((((func_80126820_Struct *) &D_801BBBF0)->unk182 != 0) || (((func_80126820_Struct *) &D_801BBBF0)->unk187 != 0)) {
        return 0;
    }
    ((func_80126820_Struct *) &D_801BBBF0)->unk182 = 1;
    ((func_80126820_Struct *) &D_801BBBF0)->unk181 = 1;
    func_801266B8(((func_80126820_Struct *) &D_801BBBF0)->unk4, temp_a1);
    return 1;
}


s32 func_80126880(u16 arg0) {
    if ((D_801BBBF0.unk182 != 0) || (D_801BBBF0.unk187 != 0)) {
        return 0;
    }
    D_801BBBF0.unk187 = 1;
    D_801BBBF0.unk186 = 1;
    D_801BBBF0.unk184 = arg0;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_801268CC.s")


typedef struct func_801268F4_Struct {
    u8 pad[0x18E];
    u16 unk18E;
    u16 unk190;
    u16 unk192;
    u16 unk194;
    u16 unk196;
} func_801268F4_Struct;

s32 func_801268F4(s32 arg0) {
    if (((func_801268F4_Struct *)&D_801BBBF0)->unk18E == 0) {
        ((func_801268F4_Struct *)&D_801BBBF0)->unk18E = 1;
        ((func_801268F4_Struct *)&D_801BBBF0)->unk190 = 1;
        ((func_801268F4_Struct *)&D_801BBBF0)->unk192 = 1;
        ((func_801268F4_Struct *)&D_801BBBF0)->unk196 = 0;
        return 1;
    }
    return 0;
}


extern s8 D_801BBF90;

s32 func_80126930(s32 arg0) {
    s32 *p = &arg0;
    D_801BBF90 = arg0;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80126944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80126950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_8012695C.s")


extern s16 func_80020EA0(s32);
extern s16 D_801BBBFE;
extern s16 D_801BBC00;
extern s16 D_801BBC02;
extern s16 D_801BBC04;

s32 func_80126968(void) {
    D_801BBBFE = func_80020EA0(0);
    D_801BBC00 = func_80020EA0(1);
    D_801BBC02 = func_80020EA0(2);
    D_801BBC04 = func_80020EA0(3);
    return 1;
}


extern void func_800208C4(u16);

s32 func_801269C0(void) {
    func_800208C4(D_801BBBFE);
    func_800208C4(D_801BBC00);
    func_800208C4(D_801BBC02);
    func_800208C4(D_801BBC04);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80126A0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80126B14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80126CC0.s")


extern void func_8001769C(s32);

void func_80126E88(s32 arg0) {
    s32 *p = &arg0;
    func_8001769C(arg0 & 0xFFFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80126EAC.s")


extern void func_80005700(void *);
extern u16 **D_80171CEC[];
extern s8 D_801BBD76;

struct func_80126F4C_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x90 - 0x38];
    s16 unk90;
};

void func_80126F4C(struct func_80126F4C_Struct *arg0, struct func_80126F4C_Struct *arg1) {
    s16 temp_v0;
    s32 temp_a0;
    u16 *var_v0;

    arg1 = arg0;
    D_801BBD76 = 1;
    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        var_v0 = D_80171CEC[arg1->unk36][0];
        temp_a0 = *var_v0 & 0x0FFFFFFF & 0xFFFF;
        if (temp_a0 != 0) {
            func_80126E88(temp_a0);
            var_v0 = D_80171CEC[arg1->unk36][0];
        }
        temp_a0 = var_v0[1] & 0x0FFFFFFF & 0xFFFF;
        if (temp_a0 != 0) {
            func_80126E88(temp_a0);
        }
        func_80005700(arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80127014.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_801270C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_801271E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80127374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80127430.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_801276CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_801277B0.s")


extern s32 func_80005F6C(s32, void *);
extern s32 func_80006214(s32);
extern s32 func_800058DC(s32, void *);
extern u8 D_80164F30[];
extern void func_80127918(void);

void func_801277BC(s32 arg0, s32 arg1) {
    func_80005F6C(arg0, D_80164F30);
    func_80006214(arg0);
    func_800058DC(arg0, func_80127918);
}


typedef struct func_80127800_Struct {
    s16 unk0;
    u8 pad2[2];
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
    u8 pad24[4];
    void *unk28;
} func_80127800_Struct;

typedef struct func_80127800_Mid {
    u8 pad[0x2C];
    func_80127800_Struct *unk2C;
} func_80127800_Mid;

typedef struct func_80127800_Obj {
    u8 pad[0x24];
    func_80127800_Mid *unk24;
} func_80127800_Obj;

typedef struct func_80127800_Globals {
    u8 pad[0x112];
    s16 unk112;
    s16 unk114;
    s16 unk116;
    s16 unk118;
    s16 unk11A;
    s16 unk11C;
} func_80127800_Globals;

extern f32 D_8018CC10;
extern u8 D_3000210[];

void func_80127800(void *arg0, func_80127800_Mid **arg1) {
    f32 temp;

    func_80005F6C((s32) arg0, D_80164F30);
    func_80006214((s32) arg0);
    if (1) {
        temp = D_8018CC10;
    }
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk0 = 0x73;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk28 = D_3000210;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk4 = (f32) ((func_80127800_Globals *) &D_801BBBF0)->unk112;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk8 = (f32) ((func_80127800_Globals *) &D_801BBBF0)->unk114;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unkC = (f32) ((func_80127800_Globals *) &D_801BBBF0)->unk116;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk10 = ((func_80127800_Globals *) &D_801BBBF0)->unk118;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk12 = ((func_80127800_Globals *) &D_801BBBF0)->unk11A;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk14 = ((func_80127800_Globals *) &D_801BBBF0)->unk11C;
    (*arg1)->unk2C->unk18 = temp;
    (*arg1)->unk2C->unk1C = temp;
    (*arg1)->unk2C->unk20 = temp;
    func_800058DC((s32) arg0, (void *) func_80127918);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80127918.s")


typedef struct func_80127924_StructB {
    u8 pad0[0x30];
    void *unk30;
} func_80127924_StructB;

typedef struct func_80127924_StructA {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    func_80127924_StructB *unk30;
} func_80127924_StructA;

extern u8 D_80164F40[];
extern u8 D_8017B768[];
extern u8 func_8012798C[];

void func_80127924(s32 arg0, func_80127924_StructA **arg1) {
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    (*arg1)->unk30->unk30 = D_8017B768;
    (*arg1)->unk24 = -3;
    func_800058DC(arg0, func_8012798C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_8012798C.s")

