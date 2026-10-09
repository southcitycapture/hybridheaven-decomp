#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803757E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80375A04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80375B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80375F98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803760D8.s")


struct func_80376160_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1C[0x4];
    void *unk20;
    u8 pad24[0x14];
    struct func_80376160_Inner *unk38;
};

struct func_80376160_Inner {
    u8 pad0[0x2];
    u16 unk2;
    u8 pad4[0xC];
    u32 unk10;
};

extern void func_80126968(void);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_80376218(void);

void func_80376160(struct func_80376160_Struct *arg0, s32 arg1) {
    struct func_80376160_Inner *temp_v1;
    u32 temp_v0;

    temp_v1 = arg0->unk38;
    temp_v0 = temp_v1->unk10 >> 0x18;
    if (temp_v0 == 0 || temp_v0 == 1 || temp_v0 == 2 || temp_v0 == 3) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        if ((temp_v1->unk10 >> 0x18) == 2) {
            func_8013B570(arg0, temp_v1->unk2, 2, 3, func_80376218);
            func_80126968();
            return;
        }
        func_8013B570(arg0, temp_v1->unk2, 2, 4, func_80376218);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80376218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803762E0.s")


extern void func_800058DC(void *, void *);
extern s32 func_803757E0(void *, s32, s32, s32);
extern s32 func_8012A94C(void *, s32);
extern void func_803764BC(void);

struct func_8037644C_Sub {
    u8 pad[0x10];
    u32 unk10;
};

struct func_8037644C_Obj {
    u8 pad[0x78];
    s16 unk78;
};

struct func_8037644C_Struct {
    u8 pad0[0x38];
    struct func_8037644C_Sub *unk38;
    u8 pad3C[0x20];
    struct func_8037644C_Obj *unk5C;
};

void func_8037644C(struct func_8037644C_Struct *arg0, s32 arg1) {
    struct func_8037644C_Obj *sp1C;

    sp1C = arg0->unk5C;
    if (func_803757E0(arg0, arg1, 1, (arg0->unk38->unk10 >> 8) & 0xFF) == 0 && func_8012A94C(arg0, 0x80) == 0) {
        sp1C->unk78 = 1;
        func_800058DC(arg0, (void *) func_803764BC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803764BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803768AC.s")


struct func_803769FC_Sub {
    u8 pad0[0xC];
    s16 unkC;
    u8 pad2[2];
    u32 unk10;
};

struct func_803769FC_Obj2 {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_803769FC_Obj {
    u8 pad0[0x38];
    struct func_803769FC_Sub *unk38;
    u8 pad3C[0x20];
    struct func_803769FC_Obj2 *unk5C;
};

extern s32 func_8012A774(void *, s16, s32);
extern s16 D_801BBD84;
extern void func_80376A80(void);

void func_803769FC(struct func_803769FC_Obj *arg0, s32 arg1) {
    struct func_803769FC_Obj2 *sp1C;

    sp1C = arg0->unk5C;
    if (func_803757E0(arg0, arg1, 1, (arg0->unk38->unk10 >> 8) & 0xFF) == 0) {
        if (func_8012A774(arg0, arg0->unk38->unkC, 0x80) != 0) {
            sp1C->unk78 = 1;
            D_801BBD84 = 2;
            func_800058DC(arg0, &func_80376A80);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80376A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80376ADC.s")


extern s32 func_80005700(s32);
extern s32 func_80149330(u8);
extern u8 D_80389EE0;

void func_80376B44(s32 arg0, s32 arg1) {
    if (func_80149330(D_80389EE0) != 0) {
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80376B80.s")


struct func_80376C24_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    s32 unk5C;
};

extern void func_80010550(s32, s32);
extern void func_80011198(s32, s32);
extern void func_80011258(s32, s32);
extern s32 func_8014C0A8(u16);
extern u16 D_801BBBF8;
extern void func_80376CA8(void);

void func_80376C24(struct func_80376C24_Struct *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1);
    if (func_8014C0A8(D_801BBBF8) == 0) {
        arg0->unk2C &= ~0x80;
        func_80011258(arg1, temp_a1 + 0x22);
        func_80011198(arg1, temp_a1);
        func_800058DC(arg0, func_80376CA8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80376CA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80376DC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80376F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803770A8.s")


typedef struct func_80377140_Struct {
    u8 pad[6];
    u16 unk6;
    u16 unk8;
} func_80377140_Struct;

extern func_80377140_Struct D_801BBBF0;
extern u16 D_803787A4[];
extern u8 D_803887E4[];
extern void func_803771A4();
extern void func_8013EA94();

void func_80377140(s32 arg0, s32 arg1) {
    if (D_803887E4[0] == 0) {
        func_8013EA94();
        D_801BBBF0.unk6 = D_803787A4[D_801BBBF0.unk8];
        func_800058DC((void *) arg0, (void *) func_803771A4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803771A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803771E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_8037741C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80377478.s")


typedef struct func_803775C0_Struct {
    u8 pad0[0x18];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    s16 unk1C;
} func_803775C0_Struct;

extern void func_8014B4A0(u16, f32 *);
extern void func_8014C138(u16);
extern void func_80377644(void);

void func_803775C0(s32 arg0, s32 arg1) {
    func_803775C0_Struct sp30;

    func_8014B4A0(D_801BBBF0.unk8, (f32 *)&sp30.unk10);
    *(f32 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0x4) = sp30.unk10;
    *(f32 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0xC) = sp30.unk18;
    *(s16 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0x12) = sp30.unk1C;
    func_8014C138(D_801BBBF0.unk8);
    func_800058DC(arg0, (void *)func_80377644);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80377644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_8037769C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_8037775C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_8037797C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80377AF0.s")


void func_80377B18(void *arg0, s32 arg1) {
    if (((u16 *) arg0)[0x2C / 2] > 0) {
        func_80005700((s32) arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80377B48.s")


struct func_80377BA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 pad10[0x1C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x38];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
    u8 unk80;
    u8 unk81;
    u8 unk82;
    u8 unk83;
    u8 unk84;
    u8 unk85;
    u8 unk86;
    u8 unk87;
    s32 unk88;
    s32 unk8C;
    u16 unk90;
    u16 unk92;
    u8 unk94;
    u8 unk95;
};

extern void *func_80005670(s32, void *);
extern s32 *func_80377B48(u8);
extern struct func_80377BA0_Struct D_80388800;

void func_80377BA0(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, u8 arg19, u8 arg20, u8 arg21, u16 arg22)
{
  struct func_80377BA0_Struct *temp_v0_2;
  s32 *temp_v0;
  temp_v0 = func_80377B48(arg1);
  D_80388800.unkC = *temp_v0;
  temp_v0_2 = func_80005670(arg0, &D_80388800);
  temp_v0_2->unk30 = 0;
  temp_v0_2->unk2C = 0;
  if (((!temp_v0_2) && (!temp_v0_2)) != 0)
  {
  }
  temp_v0_2->unk6C = arg2;
  temp_v0_2->unk70 = arg3;
  temp_v0_2->unk74 = arg4;
  temp_v0_2->unk78 = arg5;
  temp_v0_2->unk79 = arg6;
  temp_v0_2->unk7A = arg7;
  temp_v0_2->unk7B = arg8;
  temp_v0_2->unk7C = arg9;
  temp_v0_2->unk7D = arg10;
  temp_v0_2->unk7E = arg11;
  temp_v0_2->unk7F = arg12;
  temp_v0_2->unk80 = arg13;
 temp_v0_2->unk81 = arg14; temp_v0_2->unk82 = arg15;
  temp_v0_2->unk83 = arg16;
  temp_v0_2->unk84 = arg17;
  temp_v0_2->unk85 = arg18;
  temp_v0_2->unk86 = arg19;
  temp_v0_2->unk87 = arg20;
  temp_v0_2->unk88 = temp_v0[1];
  temp_v0_2->unk8C = temp_v0[0];
  temp_v0_2->unk90 = arg22;
  temp_v0_2->unk92 = 0;
  temp_v0_2->unk94 = arg21;
  temp_v0_2->unk95 = arg1;
}



void func_80377CBC(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u16 arg14) {
    func_80377BA0(arg0, arg1 & 0xFF, arg2, arg3, arg4, (s32) arg5, (s32) arg6, (s32) arg7, (s32) arg8, (s32) arg9, (s32) arg10, (s32) arg11, (s32) arg12, 0, 0, 0, 0, 0, 0, 0, 0, (s32) arg13, (s32) arg14);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80377D68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80377FC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80378010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80378034.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80378064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80378190.s")

void func_80378330(void) {
}

