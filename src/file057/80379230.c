#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_80379230.s")


extern u8 D_8017E004[];

void func_80379410(u8 *arg0, u8 arg1) {
    s32 i;
    s32 j;
    u8 *p;

    i = 0;
    if (!arg1) {
        for (j = 0; j < 0x2D; j = (j + 1) & 0xFF) {
            p = arg0 + j;
            D_8017E004[j * 8 + 4] = p[0x338] & 0x7F;
        }
        return;
    }
    for (i = 0; i < 0x2D; i = (i + 1) & 0xFF) {
        p = arg0 + i;
        p[0x338] = D_8017E004[i * 8 + 4];
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_80379490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_803795D8.s")

void func_803796C8(void) {
}


void func_803796D0(u8 *arg0) {
    *(s16 *)(arg0 + 0xA0) = 0;
    arg0[0xA6] = arg0[0xA6] & 0xFFDF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_803796E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_803796EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_803797F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_80379904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037A884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037AAC0.s")

extern s32 func_800058DC(void *, void *);
void func_8037ACCC(void *arg0, s32 arg1);

struct func_8037AC58_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[0xB0 - 0x91];
    s16 unkB0;
};

extern void func_8037AAC0(void *, s32, s32, u8, u8 *);

void func_8037AC58(struct func_8037AC58_Struct *arg0, s32 arg1) {
    u8 sp27;
    u8 temp_a3;

    temp_a3 = arg0->unk90;
    if (temp_a3 == 0) {
        func_8037AAC0(arg0, 0x7C, 0x6E, 0, &sp27);
    } else {
        func_8037AAC0(arg0, 0x88, 0x6E, temp_a3, &sp27);
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, &func_8037ACCC);
}


extern void func_80005700();

void func_8037ACCC(void *arg0, s32 arg1) {
    if (((s16 *)arg0)[0x58]++ >= 0x1F) {
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037AD08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037ADF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037AED8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B0B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B188.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B23C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B530.s")


struct func_8037B5A0_Struct1 {
    u8 pad[0x44];
    s32 unk44;
};

struct func_8037B5A0_Struct0 {
    u16 *unk0;
    struct func_8037B5A0_Struct1 *unk4;
};

struct func_8037B5A0_Struct2 {
    u8 pad[0xC];
    void *unkC;
};

struct func_8037B5A0_Struct3 {
    u8 pad0[8];
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    s16 unk10;
    u8 pad12[6];
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u8 pad20[8];
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
    s16 unk2E;
    s16 unk30;
    s16 unk32;
    u8 pad34[8];
};

void func_80146088(void *a0, void *a1, s32 a2);

extern struct func_8037B5A0_Struct0 *D_80172574;
extern struct func_8037B5A0_Struct2 D_80181A84;

void func_8037B5A0(void *arg0, s16 arg1, s16 arg2, s32 arg3)
{
  struct func_8037B5A0_Struct3 sp24;
  sp24.unk0 = arg1;
  sp24.unk2 = arg2;
  sp24.unk30 = sp24.unk4 = sp24.unk28 = 0x28;
  sp24.unk32 = sp24.unk6 = sp24.unk2A = 8;
  sp24.unk8 = 0xFF;
  sp24.unk9 = 0xFF;
  sp24.unkA = 0xFF;
  sp24.unkB = 0xFF;
  sp24.unkC = 0xFF;
  sp24.unkD = 0;
  sp24.unkE = 0;
  sp24.unkF = 0xFF;
  sp24.unk10 = 0x66;
  sp24.unk18 = *D_80172574->unk0;
  sp24.unk1C = D_80172574->unk4->unk44;
  sp24.unk2E = 0;
  sp24.unk2C = 0;
  D_80181A84.unkC = &sp24.unk0;
  func_80146088(arg0, &D_80181A84, arg3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B72C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B9A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BA70.s")


extern s32 func_80236BA4(s32, void *);
extern u8 *D_8008DA88;
extern u8 D_801BCC21;

void func_8037BB28(u8 *arg0, u8 *arg1) {
    u8 *var_v0;
    u8 *temp_v0;
    s32 temp_v1;
    s32 temp_a0;

    arg1 = arg0;
    if (arg0[0x90] == 0) {
        var_v0 = *(u8 **)(arg0 + 0xA4) + 0x9E;
    } else {
        var_v0 = *(u8 **)(arg1 + 0xA4) + 0xA0;
    }
    if ((*(u16 *)var_v0 == 0) || (temp_v0 = *(u8 **)(D_8008DA88 + 0x30), temp_a0 = temp_v0[0xB]-- == 0, temp_a0 != 0) || (((s32) D_801BCC21 >= 0xA) && (D_801BCC21 != 0xF)) || (func_80236BA4(temp_a0, arg1) == 0)) {
        func_80005700(arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BBCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BD64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BEA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BFB8.s")


extern u8 D_801BBBF0[];

void func_8037C50C(void) {
    u8 *p = D_801BBBF0;

    p[0x71C] |= 0x10;
    p[0xAB8] |= 0x10;
}



void func_8037C530(void) {
    D_801BBBF0[0x71C] = D_801BBBF0[0x71C] & 0xEF;
    D_801BBBF0[0xAB8] = D_801BBBF0[0xAB8] & 0xEF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037C554.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037C778.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D5B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D68C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D93C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037DAE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037DC64.s")


typedef struct func_8037DCEC_Inner {
    u8 pad[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
} func_8037DCEC_Inner;

typedef struct func_8037DCEC_Outer {
    u8 pad[0x30];
    func_8037DCEC_Inner *unk30;
} func_8037DCEC_Outer;

void func_8037DCEC(s32 arg0, func_8037DCEC_Outer *arg1, u8 arg2) {
    u8 temp_v1;
    func_8037DCEC_Inner *temp_v0;

    arg1->unk30->unkE = arg2;
    temp_v0 = arg1->unk30;
    temp_v1 = temp_v0->unkE;
    temp_v0->unkD = temp_v1;
    arg1->unk30->unkC = temp_v1;
    arg1->unk30->unk9 = temp_v1;
    arg1->unk30->unkA = temp_v1;
    arg1->unk30->unk8 = temp_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037DD2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037DEE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E0A4.s")


struct func_8037E1C4_Entry {
    s16 unk0;
    s16 unk2;
    u8 pad4[7];
    u8 unkB;
};

struct func_8037E1C4_Table {
    u8 pad[0x30];
    struct func_8037E1C4_Entry *unk30;
};

struct func_8037E1C4_Obj {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x80];
    u8 unk90;
    u8 pad91[7];
    u8 unk98;
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[8];
    u8 unkA4;
    u8 padA5[4];
    u8 unkA9;
    u8 unkAA;
    u8 padAB[5];
    s16 unkB0;
};

extern void func_8001B204();
s32 func_8037D320(void *, u8);
extern u8 D_8038BC4C[];
extern u8 D_8038BC54[];
extern u8 D_8038BC5C[];
extern u8 D_8038BC60[];

void func_8037E1C4(struct func_8037E1C4_Obj *arg0, s32 arg1) {

    ((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unkB = (s8)((s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4);
    ((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unkB = (s8)((s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4);

    func_8001B204(arg0->unkA9, (s16)(((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unk0 + 0x468),
        (s16)((((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unk2 - arg0->unk9A) + 3), D_8038BC4C,
        (s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4, arg0->unk98, func_8037D320(arg0, arg0->unk90));

    func_8001B204(arg0->unkAA, (s16)(((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unk0 + 0x468),
        (s16)((((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unk2 - arg0->unk9B) + 3), D_8038BC54,
        (s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4, arg0->unk99, func_8037D320(arg0, (arg0->unk90 ^ 1) & 0xFF));

    arg0->unkB0 = (s16)(arg0->unkB0 - 1);
    if (arg0->unkB0 < 0) {
        func_8001B204(arg0->unkA9, 0, 0x64, D_8038BC5C);
        func_8001B204(arg0->unkAA, 0, 0x64, D_8038BC60);
        arg0->unkC[0xAE] = 1;
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E7E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E9B8.s")


struct func_8037EB58_Struct {
    u8 pad[0xA8];
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
};

extern s32 func_80006214(void *);
extern s32 func_8037E438(void *, s32, s32, u8, s32, s8 *, s32);
extern s32 func_8037EBD0;

void func_8037EB58(struct func_8037EB58_Struct *arg0, s32 arg1) {
    s8 sp37;
    u8 temp_a3;

    sp37 = 0;
    if (arg0->unkB0++ >= 9) {
        temp_a3 = arg0->unkA8;
        func_8037E438(arg0, 0x32, 0x50, temp_a3, temp_a3, &sp37, 0);
        func_80006214(arg0);
        arg0->unkB0 = 0;
        func_800058DC(arg0, &func_8037EBD0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037EBD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037EEC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037F170.s")


void func_8037F3D4(s32 arg0, s32 arg1) {
    if (D_801BCC21 == 0xE) {
        func_80005700(arg0);
    }
}

