#include "common.h"


struct func_801C9910_Struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1;
    s16 unk24;
    s16 unk26;
    u8 unk28;
    u8 unk29;
    u8 unk2A;
};

extern void func_8001B194(u8, s16, s16, s32);
extern void func_8001B204();
extern u8 D_801CF3F0[];

void func_801C9910(struct func_801C9910_Struct *arg0, f32 arg1) {
    s16 var_a3;
    s16 sp2C;

    sp2C = (s16) ((s32) ((f32) (arg0->unk26 + 0x78) - arg1));
    if (sp2C < -0x14) {
        if (arg0->unk2A == 1) {
            arg0->unk2A = 2;
            func_8001B204(arg0->unk22, 0, 0, D_801CF3F0);
        }
    } else if (sp2C < 0xF0) {
        if (arg0->unk2A == 0) {
            arg0->unk2A = 1;
            func_8001B204(arg0->unk22, arg0->unk24, sp2C, (u8 *) arg0 + 4, arg0->unk28, arg0->unk29);
        }
        var_a3 = 0;
        if (sp2C < 8) {
            var_a3 = (u8) (sp2C - 8);
        }
        if (sp2C + 0xD >= 0xEF) {
            var_a3 = (u8) (sp2C - 0xE1);
        }
        func_8001B194(arg0->unk22, arg0->unk24, sp2C, var_a3);
    }
}

void func_800058DC(void *arg0, void *arg1);
void func_8001A804();

extern void func_80116E80(s32);
extern u8 D_801CF3F4[];
extern void func_801C9AB4(void);

void func_801C9A24(s32 arg0, s32 arg1) {
    func_80116E80(0x100);
    func_8001A804(5, D_801CF3F4, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, 1, 0, 0, 0, 1);
    func_800058DC((void *) arg0, (void *) func_801C9AB4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C9910/func_801C9AB4.s")


typedef struct func_801C9C44_Struct {
    void (*fn)(struct func_801C9C44_Struct *, s32);
    u8 pad[0x28];
} func_801C9C44_Struct;

extern void func_801C9D0C(void);
extern func_801C9C44_Struct D_801CD238;
extern func_801C9C44_Struct *D_801CFDD4;
extern f32 D_801CF614;
extern f32 D_801CFDD0;

void func_801C9C44(s32 arg0, s32 arg1)
{
  s32 var_s0;
  s32 *var_s2;
  var_s2 = (s32 *) (&D_801CFDD0);
 D_801CFDD4 = &D_801CD238; var_s0 = 0; do { D_801CFDD4->fn(D_801CFDD4, *var_s2);
    var_s0 += 1;
    D_801CFDD4 = (func_801C9C44_Struct *) (((u8 *) D_801CFDD4) + 0x2C);
  }
  while (var_s0 != 0x64);
  D_801CFDD0 += 1.0f;
  if (D_801CF614 <= D_801CFDD0)
  {
    func_800058DC(arg0, func_801C9D0C);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C9910/func_801C9D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C9910/func_801C9DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C9910/func_801C9DF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C9910/func_801C9F24.s")


struct func_801CA284_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern u8 D_801CF5B4[];
extern u8 D_801CF5DC[];
extern void func_801CA358(void);

void func_801CA284(struct func_801CA284_Struct *arg0, s32 arg1) {
    if (arg0->unk3C < 6) {
        arg0->unk3C = 0;
    } else {
        arg0->unk3C = arg0->unk3C - 6;
    }
    func_8001A804(5, D_801CF5B4, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, arg0->unk3C, 0, 0, 0, arg0->unk3C);
    if (arg0->unk3C == 0) {
        func_8001A804(5, D_801CF5DC, 0, 0, 0, 0, 0);
        func_800058DC(arg0, func_801CA358);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C9910/func_801CA358.s")

extern s32 D_801CD234;
void func_801CA45C(s32 arg0, s32 arg1);

extern s32 func_80005670();
extern u8 D_80044090[];
extern u8 D_801CF5EC[];

struct func_801CA398_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_801CA398(struct func_801CA398_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C + 6;
    if (temp_v0 >= 0x100) {
        arg0->unk3C = 0xFF;
        D_801CD234 = func_80005670(arg0, D_80044090);
        func_800058DC(arg0, func_801CA45C);
    } else {
        arg0->unk3C = (u16) temp_v0;
    }
    func_8001A804(5, D_801CF5EC, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, arg0->unk3C, 0, 0, 0, arg0->unk3C);
}


extern void func_80142570();
extern void func_8013EA94();
extern s8 D_801BBBF0;
extern void func_801CA4A4();

void func_801CA45C(s32 arg0, s32 arg1) {
    func_80142570();
    func_8013EA94();
    D_801BBBF0 = 1;
    func_800058DC((void *) arg0, func_801CA4A4);
}


extern s32 func_8013EB2C();
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80005700(s32);
extern void func_801CA520();

void func_801CA4A4(s32 arg0, s32 arg1) {
    if (func_8013EB2C() != 0) {
        func_80142570();
        func_8012FE50(0x23, 0xC4, 1, 1, 0);
        if (D_801CD234 != 0) {
            func_80005700(D_801CD234);
            D_801CD234 = 0;
        }
        func_800058DC((void *)arg0, &func_801CA520);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C9910/func_801CA520.s")

