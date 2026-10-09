#include "common.h"


struct func_800243F0_Struct {
    u8 pad[0x18];
    s16 unk18;
    u8 pad2[0x1D - 0x1A];
    u8 unk1D;
};

extern u8 *D_800CBDA0;
extern struct func_800243F0_Struct *D_800CBDA4;

void func_800243F0(void) {
    D_800CBDA4->unk18 = (s16) (*D_800CBDA0 << 8);
    D_800CBDA0 += 1;
    D_800CBDA4->unk1D = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_8002442C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800244C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024614.s")


struct func_80024780_Struct {
    u8 pad0[0xD];
    u8 unkD;
    u8 pad1[0x25 - 0xE];
    u8 unk25;
};

extern s8 D_8004889C[];
extern void func_80024614(s8 *);

void func_80024780(void)
{
  int new_var;
  struct func_80024780_Struct *temp_v0;
  s8 *temp_a0;
  temp_v0 = D_800CBDA4;
  new_var = 8;
  temp_a0 = (s8 *) (D_8004889C + ((temp_v0->unk25 * new_var) - 0x240));
  temp_v0->unkD = temp_a0[0];
  temp_a0 = temp_a0 + 1;
  func_80024614(temp_a0);
}


extern void func_80024540(void);
extern void func_80024820(void);

void func_800247C8(void) {
    func_80024820();
    func_80024540();
}


extern void func_80024CF8(void);

void func_800247F0(void) {
    func_80024820();
    func_80024540();
    func_80024CF8();
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_8002487C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024ADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024C84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024D50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024EB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024EE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_8002507C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800250D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025150.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800252F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_8002538C.s")



void func_80025448(void) {
    D_800CBDA0 += 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800255FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800256FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025768.s")



void func_800257F8(void) {
    ((u8 *) D_800CBDA4)[0x8C] = 1;
    *(s16 *) ((u8 *) D_800CBDA4 + 0x8A) = *D_800CBDA0;
    D_800CBDA0 += 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025834.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025A38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025AF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025B10.s")



void func_80025B28(void) {
    ((u8 *) D_800CBDA4)[0x70] = 0;
    ((s32 *) D_800CBDA4)[0x74 / 4] = D_800CBDA0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025BD8.s")



void func_80025C90(void) {
    *((u8 *)D_800CBDA4 + 0xC) = *D_800CBDA0;
    D_800CBDA0 += 1;
}


extern u8 D_800CBAB4;
extern s8 D_800CBBD8;

void func_80025CBC(void) {
    if (D_800CBAB4 == 0xF) {
        D_800CBBD8 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025CDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025ED4.s")


extern void func_80026140(s32, u8, s32, s32);

void func_80026058(void) {
    u8 temp_a1;

    temp_a1 = *D_800CBDA0;
    D_800CBDA0 += 1;
    func_80026140(0, temp_a1, 0, 0);
}



void func_80026098(void) {
    u8 temp_a1;
    u8 temp_a2;

    temp_a1 = *D_800CBDA0++;
    temp_a2 = *D_800CBDA0++;
    func_80026140(1, temp_a1, temp_a2, 0);
}


extern void func_800261C4(s32);

void func_800260E0(void) {
    func_800261C4(2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80026100.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80026120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80026140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800261C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_8002622C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800262AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800262C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800262DC.s")

