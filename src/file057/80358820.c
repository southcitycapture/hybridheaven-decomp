#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80358820.s")


typedef struct func_80358964_StructA {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x4C - 0x31];
    s16 unk4C;
} func_80358964_StructA;

typedef struct func_80358964_StructArg {
    u8 pad0[0x6C];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
} func_80358964_StructArg;

void func_800058DC(void *arg0, void *arg1);
void func_80020718(s32 arg0);
s32 func_801CE3F8(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, f32 arg15, s32 arg16);
void func_80358A40(void);
extern f32 D_80389EC8;
extern func_80358964_StructA *D_8038CC10;

void func_80358964(func_80358964_StructArg *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    if (D_8038CC10->unk30 == 0xD) {
        var_v0 = 0xD0;
        var_v1 = 0xFF;
    } else {
        var_v0 = 0xFF;
        var_v1 = 0x40;
    }
    func_801CE3F8(arg0, 4, arg0->unk6C, arg0->unk70, arg0->unk74, 0, var_v0, var_v1, 0xFF, 0, var_v0, var_v1, 0, 7, 0xA, D_80389EC8, 0xC);
    func_80020718(0x110);
    D_8038CC10->unk4C = 1;
    func_800058DC(arg0, func_80358A40);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80358A40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80358A80.s")


typedef struct func_80358B50_Struct {
    u8 pad[0x30];
    u8 unk30;
} func_80358B50_Struct;

typedef struct func_80358B50_StructArg {
    u8 pad[0x6C];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
} func_80358B50_StructArg;

void func_800058DC(void *, void *);
void func_80020718(s32);
void func_801CE330(void *, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern f32 D_80389ED0;
void func_80358C2C(void);

void func_80358B50(func_80358B50_StructArg *arg0, s32 arg1) {
    s32 var_v0;

    if (D_8038CC10->unk30 == 0x21) {
        var_v0 = 0;
    } else {
        var_v0 = 0x60;
    }
    func_801CE330(arg0, 2, arg0->unk6C, arg0->unk70, arg0->unk74, 0xFF, var_v0, 0, 0xFF, 0xFF, var_v0, 0, 0, 0x1E, 0x5A, D_80389ED0, 9);
    func_80020718(0x10A);
    *(s16 *)((u8 *)D_8038CC10 + 0x4C) = 1;
    func_800058DC(arg0, func_80358C2C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80358C2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80358C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035908C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359194.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803591DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803593F0.s")


struct func_80359520_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

void func_80005700(void);

void func_80359520(struct func_80359520_Struct *arg0, s32 arg1) {
    if (arg0->unk4C >= arg0->unk4E + 0x8002) {
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359560.s")


typedef struct func_80359674_StructInner {
    u8 pad0[0x7C];
    s32 unk7C;
    u16 unk80;
    u16 unk82;
    u8 pad1[0x94 - 0x84];
    s32 unk94;
    u16 unk98;
    u16 unk9A;
} func_80359674_StructInner;

typedef struct func_80359674_StructOuter {
    u8 pad0[0x5C];
    func_80359674_StructInner *unk5C;
} func_80359674_StructOuter;

void func_80359674(func_80359674_StructOuter *arg0, s32 arg1) {
    func_80359674_StructInner *temp_v0;

    temp_v0 = arg0->unk5C;
    temp_v0->unk94 = temp_v0->unk7C;
    temp_v0->unk98 = temp_v0->unk80;
    temp_v0->unk9A = temp_v0->unk82;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803596BC.s")


extern void func_801DB6B8(void *, s32, s32);
extern s8 D_801BCC25;
extern u8 D_801E4070[];
extern void func_80359858();

void func_803597DC(void *arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)arg0 + 0x5C);
    func_801DB6B8(arg0, arg1, 0);
    if (((u8 *)D_801E4070 == *(u8 **)(temp_v0 + 0x7C)) && (*(u16 *)(temp_v0 + 0x80) == 0)) {
        *(u16 *)((u8 *)D_8038CC10 + 0x4C) = *(u16 *)((u8 *)D_8038CC10 + 0x4C) | 0x8000;
        D_801BCC25 = 0;
        func_800058DC(arg0, func_80359858);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359858.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035991C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359B54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359CD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359DAC.s")


extern void func_80359F54(void);

void func_80359F08(void *arg0, s32 arg1) {
    func_80358964_StructA *temp_v0;
    s32 temp_v1;

    temp_v0 = D_8038CC10;
    temp_v1 = (u16) temp_v0->unk4C;
    if (temp_v1 >= 5) {
        temp_v0->unk4C = (u16) (temp_v1 | 0x8000);
        D_801BCC25 = 0;
        func_800058DC(arg0, &func_80359F54);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359F54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A380.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A3D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A428.s")


typedef struct func_8035A434_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
} func_8035A434_Struct;

s32 func_8035A380(u8, void *);
s32 func_8035A3D8(u8, void *);

s32 func_8035A434(void *arg0) {
    func_8035A434_Struct *s = arg0;

    if (s->unk2D8 == 0xC) {
        return func_8035A380(s->unk2D9, arg0);
    }
    if (s->unk2D8 == 0x13) {
        return func_8035A3D8(s->unk2D9, arg0);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A5B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A7F4.s")


void func_8035A7F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_8035A8F0(s32 arg0, s32 arg1) {
    func_8035A7F4(arg0, arg1, 0xC, 9);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A938.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A9E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035AA14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035AA44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035ABAC.s")


typedef struct func_8035AF30_Struct {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
    u8 pad1[0x6C - 0x50];
    s32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad2[0x7C - 0x78];
    u8 unk7C;
    u8 pad3[0x80 - 0x7D];
    f32 unk80;
    f32 unk84;
    f32 unk88;
    u8 pad4[0x90 - 0x8C];
    void *unk90;
} func_8035AF30_Struct;

extern void func_80006214(void *);
extern void func_8035A490(f32 *, void *, void *, s32, f32, f32);
extern u8 D_8008DA88[];

void func_8035AF30(func_8035AF30_Struct *arg0, s32 arg1) {
    f32 sp2C[3];
    extern void func_80005700();

    if (arg0->unk4C >= arg0->unk4E) {
        if ((void *) arg0 == (void *) D_8038CC10) {
            D_8038CC10 = 0;
        }
        func_80005700(arg0);
        return;
    }
    if (!arg0->unk7C) {
        func_80006214(arg0->unk90);
        func_8035A490(sp2C, arg0->unk90, D_8008DA88, arg0->unk6C, arg0->unk70, arg0->unk74);
        func_80006214(arg0);
        arg0->unk80 = sp2C[0];
        arg0->unk84 = sp2C[1];
        arg0->unk88 = sp2C[2];
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035AFEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B0E0.s")


struct func_8035B234_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

extern s32 D_8038CC14;

void func_8035B234(struct func_8035B234_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk4C >= (s32) (arg0->unk4E | 0x8000)) {
        D_8038CC14 = 0;
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B650.s")


typedef struct func_8035B820_Struct {
    u8 pad[0x3E];
    u16 unk3E;
} func_8035B820_Struct;

void func_8035B820(func_8035B820_Struct *arg0, s32 arg1) {
    if (arg0->unk3E++ >= 0x1F) {
        arg0->unk3E = 0;
        func_800058DC(arg0, (void *) func_8035B234);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B9AC.s")


struct func_8035BCCC_Struct {
    u8 pad0[0x3E];
    u16 unk3E;
    u8 pad1[0xC];
    u16 unk4C;
};

extern void func_8035B9AC(void);

void func_8035BCCC(struct func_8035BCCC_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  if (((u8 *) D_8038CC14)[0x31] == 1)
  {
    func_80020718(0x108);
    ((u8 *) D_8038CC14)[0x31] = 2;
    arg0->unk3E = 0;
    func_800058DC(arg0, (void *) func_8035B9AC);
    return;
  }
  temp_v0 = arg0->unk3E;
  arg0->unk3E = (u16) (temp_v0 + 1);
  if ((temp_v0 >= 0x29) != (((temp_v0 >= 0x29) != 0) * 0))
  {
    arg0->unk4C = (u16) (arg0->unk4C + 1);
    func_800058DC(arg0, (void *) func_8035B234);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035BD6C.s")


struct func_8035BF98_Struct0 {
    u8 pad[0x3E];
    u16 unk3E;
};

struct func_8035BF98_Struct1 {
    u8 pad[0x31];
    u8 unk31;
};

extern void func_8012C6B4(s32);
extern void func_8035BD6C(void);

void func_8035BF98(struct func_8035BF98_Struct0 *arg0, s32 arg1)
{
  func_8012C6B4(2);
  func_8012C6B4(0x14);
  if (((struct func_8035BF98_Struct1 *) D_8038CC14)->unk31 == 1)
  {
    func_80020718(0x109);
    arg0->unk3E = 0;
    ((struct func_8035BF98_Struct1 *) D_8038CC14)->unk31 = 2;
    func_800058DC(arg0, func_8035BD6C);
  }
  else
  {
    s32 temp_v1;
    s32 temp_v0;
    temp_v0 = arg0->unk3E;
    temp_v1 = (temp_v0 < 0x1F) ^ 1;
    arg0->unk3E = temp_v0 + 1;
    if (!temp_v1)
    {
    }
    if (temp_v1)
    {
      func_800058DC(arg0, func_8035B234);
    }
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C11C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C4C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C7E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C910.s")


extern void func_80011198(void *arg0, s32 arg1, void *arg2, s32 arg3);
extern void func_8035C9D0(void);

void func_8035C98C(void *arg0, void *arg1)
{
  s32 temp_a3;
  void *temp_a0;
  u8 *new_var;
  u8 *new_var2;
  temp_a0 = arg1;
  temp_a3 = *((s32 *) (((u8 *) arg0) + 0x5C));
  new_var = ((u8 *) arg0) + 0x5C;
  new_var2 = new_var;
  func_80011198(temp_a0, temp_a3 ^ 0, arg0, *((s32 *) new_var2));
  func_800058DC(arg0, func_8035C9D0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C9D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035CDA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035D3C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035D660.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035D9FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035DB6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035DD80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035DF74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035DF80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035E290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035E438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035E89C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035EF60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035F224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035F544.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035F6B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035F8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035F994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035FCF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035FEC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035FEC8.s")


void func_8035FEC8(u8 arg0, void *arg1);
extern u8 D_80385E6C[];

void *func_8035FF0C(u8 arg0) {
    func_8035FEC8(arg0, D_80385E6C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035FF38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035FFA8.s")


extern void func_80020718(s32 arg0);

typedef struct func_80360020_Struct0 {
    u8 pad[0x36];
    u16 unk36;
} func_80360020_Struct0;

typedef struct func_80360020_Struct1 {
    u8 pad[0x2D9];
    u8 unk2D9;
} func_80360020_Struct1;

void func_80360020(func_80360020_Struct0 *arg0, func_80360020_Struct1 *arg1) {
    s32 var_a0;
    u16 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk36;
    if (temp_v0 == 0xF6 || temp_v0 == 0xF4 || temp_v0 == 0xF5) {
        var_a0 = 0x229;
    } else {
        temp_v0_2 = arg1->unk2D9;
        if ((s32) temp_v0_2 < 0xE || temp_v0_2 == 0x54 || temp_v0_2 == 0x55) {
            var_a0 = 0x3BA;
        } else {
            var_a0 = 0x3B6;
        }
    }
    func_80020718(var_a0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803602D4.s")


typedef struct func_80360394_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80360394_Struct;

typedef struct func_80360394_Quad {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80360394_Quad;

extern func_80360394_Quad D_803863EC;
void func_8013A334(void *, s32, s32, u16);

void func_80360394(void *arg0, func_80360394_Struct *arg1, s32 arg2, u8 arg3) {
    s32 val;
    func_80360394_Quad local;

    val = arg1->unk5C;
    local = D_803863EC;
    func_8013A334(arg0, arg2, val, ((u16 *) &local)[arg3]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360400.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8036048C.s")


typedef struct func_80360588_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360588_Struct;

extern void func_80360400(func_80360588_Struct *arg0, s32 arg1, s32 arg2);
extern void func_8036048C(s32 arg0, s32 arg1, func_80360588_Struct arg2);

void func_80360588(s32 arg0, s32 arg1) {
    func_80360588_Struct sp24;

    func_80360400(&sp24, arg0, arg1);
    func_8036048C(arg0, arg1, sp24);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803605E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360AA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360EF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360F9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8036104C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8036153C.s")


extern void func_8036153C(void);
extern void func_8036CA40(void);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

void func_803618B0(s32 arg0) {
    u8 *var_v0;

    if (arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if (var_v0[0x2D8] == 8) {
        func_8036CA40();
        return;
    }
    func_8036153C();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80361910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80361B50.s")


typedef struct func_80361B7C_StructA {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[2];
    u8 unk2DB;
} func_80361B7C_StructA;

typedef struct func_80361B7C_StructB {
    u8 pad0[0x7C];
    s32 unk7C;
    s16 unk80;
    u8 pad1[2];
    u8 unk84;
} func_80361B7C_StructB;

typedef struct func_80361B7C_StructC {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[4];
    s32 unk1C;
} func_80361B7C_StructC;

void func_80361B7C(func_80361B7C_StructA *arg0, func_80361B7C_StructB *arg1, func_80361B7C_StructC *arg2) {
    arg1->unk80 = 2;
    if (arg0->unk2D8 == 0xD && arg0->unk2DB != 0) {
        arg1->unk7C = arg2->unk1C;
        arg1->unk84 = 4;
        return;
    }
    arg1->unk7C = arg2->unk14;
    arg1->unk84 = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80361BCC.s")


extern s32 func_80010550(s32, s32);
extern void func_800112B0(s32, s32, s32, void *);
extern void func_80362234(void);

void func_803621A8(u8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 sp24;
    u8 *sp1C;

    temp_a2 = *(s32 *)(arg0 + 0x5C);
    if ((s32)arg0 == D_801BBCCC) {
        sp1C = D_801BC03C;
    } else {
        sp1C = D_801BC3D8;
    }
    sp24 = temp_a2;
    func_800112B0(arg1, temp_a2 + 0x22, temp_a2, arg0);
    if (func_80010550(arg1, sp24) != 0) {
        func_800058DC(arg0, func_80362234);
    }
    sp1C[0x392] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362234.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803622EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8036265C.s")


void *func_8035FF0C(u8);

u8 func_803626E0(s32 arg0) {
    u8 *var_v1;
    s32 temp_v0;
    u8 var_v1_2;

    if (arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    temp_v0 = var_v1[0x2D8];
    if (temp_v0 == 0 || temp_v0 == 1 || temp_v0 == 0xA || temp_v0 == 9) {
        var_v1_2 = ((u8 *)func_8035FF0C(var_v1[0x2D9]))[3];
    } else {
        var_v1_2 = 4;
    }
    return var_v1_2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803628B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362A54.s")


/* context.h declares D_801BC03C / D_801BC3D8 as u8 arrays, so access
   their fields through offsets instead of a struct type. */
extern u8 D_801BBBF0[];
extern void func_8022C0A0(s32 arg0);
extern void func_80231CEC(s32 arg0);
extern void func_80360818(s32 arg0, s32 arg1);

void func_80362DF4(s32 arg0, s32 arg1) {
    u8 *var_v1;
    u8 *var_v0;

    if (arg0 == *(s32 *) &D_801BBBF0[0xDC]) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (arg0 != *(s32 *) &D_801BBBF0[0xDC]) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    var_v1[0x392] = 0;
    if (var_v0[0x394] != 0) {
        if (arg0 == *(s32 *) &D_801BBBF0[0xDC]) {
            D_801BBBF0[0x1030] = 0;
        } else {
            D_801BBBF0[0x1030] = 1;
        }
        func_8022C0A0(arg0);
        if (var_v1[0x2D9] < 0xE) {
            var_v1[0x2D8] = 0;
        } else {
            var_v1[0x2D8] = 1;
        }
        var_v1[0x2DD] = 1;
        func_80231CEC(arg0);
        func_80360818(arg0, arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80363018.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80363204.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80363340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80363904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803639F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80363D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80363FFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80364024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80364174.s")

