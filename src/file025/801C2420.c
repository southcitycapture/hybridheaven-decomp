#include "common.h"


extern s32 func_800045E8(u32);
extern void func_80004ADC(u16, s32);
extern s32 func_80017064(u16);
extern u16 **D_80171CF0[];

typedef struct func_801C2420_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[4];
    s32 unkC;
    s32 unk10;
} func_801C2420_Struct;

s32 func_801C2420(s32 arg0, func_801C2420_Struct *arg1) {
    u16 id;
    u16 ***volatile p;

    id = (*(&D_80171CF0[arg0])[-1])[0] & 0x0FFFFFFF;
    p = &D_80171CF0[arg0];
    if (func_80017064(id) == -1) {
        if (id) {
            arg1->unk0 = id;
            func_80004ADC(id, arg1->unkC = func_800045E8(id));
        }
    }
    id = (*p[-1])[1] & 0x0FFFFFFF;
    if (func_80017064(id) == -1) {
        if (id) {
            arg1->unk4 = id;
            func_80004ADC(id, arg1->unk10 = func_800045E8(id));
        }
    }
    return 1;
}


extern void func_8001F540(s32);
#define func_801C288C func_801C288C__decl40
extern void func_801C288C(s32);

typedef struct func_801C250C_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
    s32 unk10;
} func_801C250C_Struct;

s32 func_801C250C(func_801C250C_Struct *arg0) {
    if (arg0->unkC != 0) {
        func_801C288C(arg0->unk0);
        func_8001F540(arg0->unkC);
        arg0->unkC = 0;
    }
    if (arg0->unk10 != 0) {
        func_801C288C(arg0->unk4);
        func_8001F540(arg0->unk10);
        arg0->unk10 = 0;
    }
    return 1;
}
#undef func_801C288C


extern void func_801C27BC(s32, s32, s32);

void func_801C2570(s32 arg0, s32 arg1) {
    func_801C27BC(arg0, arg1, 0);
}



void func_801C2590(s32 arg0, s32 arg1) {
    func_801C27BC(arg0, arg1, 1);
}


typedef struct func_801C25B0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C25B0_Struct;

s32 func_801C25B0(func_801C25B0_Struct *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0->unk8 != 0) {
        func_801C288C(arg0->unk0);
        func_8001F540(arg0->unk8);
        arg0->unk4 = 0;
        arg0->unk8 = 0;
        return 1;
    }
    return var_v0;
}


typedef struct func_801C2608_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801C2608_Struct;

void func_801C2608(s32 arg0, func_801C2608_Struct *arg1) {
    s32 i;

    for (i = 0; i < arg0; i++) {
        arg1[i].unk0 = -1;
        arg1[i].unk4 = -1;
        arg1[i].unkC = 0;
        arg1[i].unk10 = 0;
    }
}


typedef struct func_801C26C4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C26C4_Struct;

void func_801C26C4(s32 arg0, func_801C26C4_Struct *arg1) {
    s32 i;

    for (i = 0; i < arg0; i++) {
        arg1[i].unk0 = -1;
        arg1[i].unk4 = 0;
        arg1[i].unk8 = 0;
    }
}

void *func_80002A04(s32 arg0, struct func_80002A04_Struct *arg1);

void func_801C276C(s32 arg0, struct func_80002A04_Struct *arg1) {
    func_80002A04(arg0, arg1);
}


void func_801C278C(s32 arg0, s32 arg1, s32 arg2)
{
  u32 var_v0;
  if (arg0 == 0)
  {
    var_v0 = 0;
    do
    {
      var_v0 += 1;
      if (!var_v0)
      {
      }
    }
    while (var_v0 != 3);
    while (1)
    {
      var_v0 = var_v0 + 1;
    }

  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2420/func_801C27BC.s")


extern s32 func_800173E4(s32);
extern void func_800177BC(s32);

s32 func_801C288C(s32 arg0) {
    s32 temp_v0;

    if (arg0 != -1) {
        temp_v0 = func_80017064(arg0);
        if (temp_v0 == -1) {
            func_800177BC(temp_v0);
            return 0;
        }
        if (func_800173E4(temp_v0) == -1) {
            return 0;
        }
    }
    return 1;
}

typedef struct func_801C28F0_Struct { s32 a,b,c,d; } func_801C28F0_Struct;
extern func_801C28F0_Struct D_801D9FD8;
extern u32 D_801D9F30[];
void func_801C28F0(func_801C28F0_Struct *arg0) {
    D_801D9FD8 = *arg0;
    D_801D9FD8.a *= 4;
    D_801D9FD8.b *= 4;
    D_801D9FD8.c = 0x80;
    D_801D9FD8.d = 0x80;
    D_801D9F30[0x26] = 0xF2000000 | ((D_801D9FD8.a & 0xFFF) << 12) | (D_801D9FD8.b & 0xFFF), D_801D9F30[0x27] = ((D_801D9FD8.c & 0xFFF) << 12) | (D_801D9FD8.d & 0xFFF);
}

