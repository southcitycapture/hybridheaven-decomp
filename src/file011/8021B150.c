#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021B150.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021B1A8.s")


extern void func_800172F4();
extern void func_80016E40(s32);
extern void func_800058DC(void *obj, void *fn);
extern void func_8021B240();

void func_8021B200(s32 arg0, s32 arg1) {
    func_800172F4();
    func_80016E40(0x36FC0);
    func_800058DC((void *)arg0, func_8021B240);
}


extern s32 func_80126A0C(s32, s32, s32);
extern void func_8021B280();

void func_8021B240(s32 arg0, s32 arg1) {
    if (func_80126A0C(arg0, 0x39, 1) != 0) {
        func_800058DC((void *)arg0, func_8021B280);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021B280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021B560.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021B790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021B870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021BD00.s")


extern void func_8021B790();
extern void func_8021BE30();
extern u8 D_801BBBF0[];

void func_8021BDE0(u8 *arg0, s32 arg1) {
    func_8021B790();
    if (D_801BBBF0[0x299] != 0) {
        arg0[0x90] = 0;
        D_801BBBF0[0x1031] = 4;
        func_800058DC(arg0, func_8021BE30);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021BE30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021BF74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021C198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021C4C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021C928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021C934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021CC30.s")


extern s8 D_801BCC21;
extern void func_8021BF74(void);

typedef struct func_8021CD9C_Struct {
    u8 pad[0xB0];
    s16 unkB0;
} func_8021CD9C_Struct;

void func_8021CD9C(func_8021CD9C_Struct *arg0, void *arg1) {
    arg0->unkB0 = arg0->unkB0 - 1;
    if (arg0->unkB0 < 0) {
        D_801BCC21 = 5;
        func_800058DC(arg0, func_8021BF74);
    }
}


typedef struct func_8021CDE8_Struct {
    u8 pad0[0x9B];
    u8 unk9B;
    u8 pad1[0xAE - 0x9C];
    u8 unkAE;
    u8 unkAF;
    s16 unkB0;
} func_8021CDE8_Struct;

extern void func_80020744();
extern void func_80126E88(s32);
extern void func_8021D264(void);

void func_8021CDE8(func_8021CDE8_Struct *arg0, s32 arg1) {
    func_8021CDE8_Struct *temp = arg0;

    if (arg0->unkAE != 0 && arg0->unkAF == 0 && arg0->unk9B == 0) {
        arg0->unkB0 = arg0->unkB0 - 1;
        if (arg0->unkB0 < 0) {
            arg0->unkB0 = 0x1E;
            func_80020744(7);
            func_80126E88(0x125);
            D_801BCC21 = 0xE;
            func_800058DC(temp, func_8021D264);
        }
    }
}


extern void func_8021CEF4();

void func_8021CE7C(func_8021CDE8_Struct *arg0, s32 arg1) {
    if (arg0->unkAE != 0 && arg0->unkAF == 0 && arg0->unk9B == 0) {
        arg0->unkB0 = arg0->unkB0 - 1;
        if (arg0->unkB0 < 0) {
            func_80126E88(0x125);
            func_800058DC(arg0, func_8021CEF4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021CEF4.s")


typedef struct func_8021CF50_StructArg {
    u8 pad0[0xA0];
    f32 unkA0;
    f32 unkA4;
    s32 unkA8;
    s16 unkAC;
    u8 padAE[0xB0 - 0xAE];
    s16 unkB0;
    u8 padB2[0xB3 - 0xB2];
    u8 unkB3;
} func_8021CF50_StructArg;

typedef struct func_8021CF50_StructGlobal {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0x818 - 0x2E];
    s32 unk818;
    u8 pad2[0xEF0 - 0x81C];
    u16 unkEF0;
} func_8021CF50_StructGlobal;


void func_80020744(s32);
void func_801FA1C4();
void func_80231D84(f32, f32, s32, s16, s32);
void func_80232278();
void func_802322E8();
void func_8037865C();

void func_8021CF50(func_8021CF50_StructArg *arg0, s32 arg1) {
    ((func_8021CF50_StructGlobal *) D_801BBBF0)->unkEF0 = ((func_8021CF50_StructGlobal *) D_801BBBF0)->unkEF0 | 0x10;
    if ((((u32) (((func_8021CF50_StructGlobal *) D_801BBBF0)->unk818 * 2) >> 0x1E) == 3) && (arg0->unkB3 != 0)) {
        if ((((func_8021CF50_StructGlobal *) D_801BBBF0)->unk2C != 5) && (((((func_8021CF50_StructGlobal *) D_801BBBF0)->unk2C != 0xA) != ((func_8021CF50_StructGlobal *) D_801BBBF0)->unk2C) != 0xB)) {
            func_80231D84(arg0->unkA0, arg0->unkA4, arg0->unkA8, arg0->unkAC, 1);
        }
        func_8037865C();
        func_80232278();
        func_802322E8();
        func_80020744(7);
        D_801BCC21 = 0xE;
        arg0->unkB0 = 0x1E;
        func_801FA1C4();
        func_800058DC(arg0, func_8021D264);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021D034.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021D040.s")


struct func_8021D1A8_Struct {
    u8 pad0[0xA4];
    s16 unkA4;
    u8 pad1[0xA];
    s16 unkB0;
};

extern s32 func_80005700(void *);
extern s32 func_8012FE50(s32, u16, s32, s32, s32);
extern u16 D_801BBBF4;

void func_8021D1A8(struct func_8021D1A8_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    arg0->unkB0 = arg0->unkB0 + 1;
    if (arg0->unkB0 >= 0x1F) {
        temp_v0 = arg0->unkA4 & 0x7F;
        if (temp_v0 == 0) {
            func_8012FE50(0xB, D_801BBBF4, 5, 5, 0);
        } else if (temp_v0 == 1) {
            func_8012FE50(0xE, 0xC0, 1, 1, 0);
        } else {
            func_8012FE50(0xE, 0x73, 1, 1, 0);
        }
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021D264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021D36C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021D53C.s")


extern void func_8021D664();

void func_8021D624(s32 arg0, s32 arg1) {
    func_800172F4();
    func_80016E40(0x1A000);
    func_800058DC((void *)arg0, (void *)func_8021D664);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021D664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021D6A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021D72C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021D768.s")


extern s32 func_8013EB2C(void);
extern void func_80142570(void);
extern void func_8021D84C(void);

void func_8021D808(s32 arg0, s32 arg1) {
    if (func_8013EB2C() != 0) {
        func_80142570();
        func_800058DC(arg0, func_8021D84C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021D84C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021D8B8.s")

