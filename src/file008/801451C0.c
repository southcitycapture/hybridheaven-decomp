#include "common.h"


extern u8 D_801819E8[];

typedef struct func_801451C0_StructA {
    u8 pad0[0x2A];
    u16 unk2A;
    u8 pad1[4];
    void *unk30;
} func_801451C0_StructA;

typedef struct func_801451C0_StructB {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801451C0_StructB;

typedef struct func_801451C0_StructC {
    u8 pad0[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
} func_801451C0_StructC;

void func_801451C0(func_801451C0_StructA *arg0, u8 arg1) {
    s32 idx;
    u8 *entry;

    idx = arg1;
    if (arg0->unk2A == 0xC) {
        entry = &D_801819E8[idx * 4];
        ((func_801451C0_StructB *) arg0->unk30)->unk48 = entry[0];
        ((func_801451C0_StructB *) arg0->unk30)->unk49 = entry[1];
        ((func_801451C0_StructB *) arg0->unk30)->unk4A = entry[2];
        ((func_801451C0_StructB *) arg0->unk30)->unk4B = entry[3];
        return;
    }
    if (arg0->unk2A == 0xD) {
        entry = &D_801819E8[idx * 4];
        ((func_801451C0_StructC *) arg0->unk30)->unk8 = entry[0];
        ((func_801451C0_StructC *) arg0->unk30)->unk9 = entry[1];
        ((func_801451C0_StructC *) arg0->unk30)->unkA = entry[2];
        ((func_801451C0_StructC *) arg0->unk30)->unkB = entry[3];
    }
}


typedef struct func_80145268_Obj {
    u8 pad0[0xC];
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    u8 pad1[0x3C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80145268_Obj;

typedef struct func_80145268_Struct {
    u8 pad0[0x2A];
    u16 unk2A;
    u8 pad1[4];
    func_80145268_Obj *unk30;
} func_80145268_Struct;

void func_80145268(s32 arg0, u8 arg1) {
    func_80145268_Struct *a0 = (func_80145268_Struct *) arg0;
    u8 *temp_v0;

    arg1 = arg1 & 0xFF;
    if (a0->unk2A == 0xC) {
        temp_v0 = (arg1 * 4) + D_801819E8;
        a0->unk30->unk4C = temp_v0[0];
        a0->unk30->unk4D = temp_v0[1];
        a0->unk30->unk4E = temp_v0[2];
        a0->unk30->unk4F = temp_v0[3];
        return;
    }
    if (a0->unk2A == 0xD) {
        temp_v0 = (arg1 * 4) + D_801819E8;
        a0->unk30->unkC = temp_v0[0];
        a0->unk30->unkD = temp_v0[1];
        a0->unk30->unkE = temp_v0[2];
        a0->unk30->unkF = temp_v0[3];
    }
}



void func_80145310(func_801451C0_StructA *arg0, u8 arg1, u8 arg2) {
    func_801451C0(arg0, arg1);
    func_80145268((s32)arg0, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_80145348.s")


extern s16 D_801BEC88[];

void func_80145390(s32 arg0) {
    s32 *temp_ptr;
    s32 var_v0;

    temp_ptr = &arg0;
    arg0 = (s16)arg0;
    for (var_v0 = 0; var_v0 < 5; var_v0 = (var_v0 + 1) & 0xFF) {
        D_801BEC88[var_v0] = arg0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_801453CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_80145E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_80146088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_801460C8.s")


typedef struct func_80146178_Struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 pad0[4];
    s16 unkC;
    s16 unkE;
} func_80146178_Struct;

typedef struct func_80146178_Global {
    u8 pad0[0xC];
    func_80146178_Struct *unkC;
} func_80146178_Global;

extern func_80146178_Global D_80181A84;
extern s32 func_80146088();

void func_80146178(s32 arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, u16 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11) {
    u8 pad[0x28];
    func_80146178_Struct sp1C;

    sp1C.unk0 = arg3;
    sp1C.unk2 = arg4;
    sp1C.unk4 = arg5;
    sp1C.unk6 = arg6;
    sp1C.unk8 = arg8;
    sp1C.unk9 = arg9;
    sp1C.unkA = arg10;
    sp1C.unkB = arg11;
    sp1C.unkC = arg7 & 2;
    sp1C.unkE = 0;
    D_80181A84.unkC = &sp1C;
    func_80146088(arg1, &D_80181A84, arg2, arg4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_80146208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_8014646C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_801465A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_8014677C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_80146894.s")


extern f32 D_801BEC60[];

f32 func_80146A9C(s16 *arg0, u8 arg1)
{
  f32 *temp_v0;
  float new_var;
  f32 temp_fa0;
  temp_v0 = &D_801BEC60[arg1];
  ;
  new_var = ((f32) arg0[1]) - (*temp_v0);
  *temp_v0 = (*temp_v0) + (new_var / (1.0f / 0.125f));
  return *temp_v0;
}

extern u8 D_801819E4;


void func_80146AE4(s32 arg0) {
    s32 *p = &arg0;
    D_801819E4 = arg0;
}

extern u8 D_801819E0;


void func_80146AF4(s32 arg0) {
    s32 *p = &arg0;
    D_801819E0 = arg0;
}


extern void func_80020744(s32 arg0);

void func_80146B04(void) {
    func_80020744(0x648);
    func_80146AE4(1);
}

extern u16 D_801BBC1C;

extern s32 func_80126944(void);

void func_80146B2C(u8 arg0) {
    if (D_801819E4 != 1 && (D_801BBC1C == 4 || D_801BBC1C == 5) && func_80126944() == 1) {
        if (arg0 == 1 && D_801819E0 == 0) {
            func_80020744(0x57C);
            func_80146AF4(1);
            return;
        }
        if (arg0 == 0 && D_801819E0 == 1) {
            func_80020744(0x648);
            func_80146AF4(0);
        }
    }
}


typedef struct func_80146BE0_Obj {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    s8 unk4C;
    s8 unk4D;
    s8 unk4E;
} func_80146BE0_Obj;

typedef struct func_80146BE0_Struct {
    u8 pad0[0x30];
    func_80146BE0_Obj *unk30;
} func_80146BE0_Struct;

void func_80146BE0(s16 arg0, func_80146BE0_Struct *arg1) {
    if (arg0 >= 0x800) {
        func_801451C0((void *) arg1, 0x1C);
    } else if (arg0 >= 0x400 && arg0 < 0x800) {
        func_80146B2C(0);
        func_801451C0((void *) arg1, 5);
    } else if (arg0 >= 0 && arg0 < 0x400) {
        func_80146B2C(1);
        func_801451C0((void *) arg1, 3);
    }
    arg1->unk30->unk4C = arg1->unk30->unk48 / 2;
    arg1->unk30->unk4D = arg1->unk30->unk49 / 2;
    arg1->unk30->unk4E = arg1->unk30->unk4A / 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_80146CD4.s")


struct func_801470E8_Obj {
    u8 pad0[0x22];
    u8 unk22;
};

void func_801470E8(struct func_801470E8_Obj **arg0, u8 arg1, u8 arg2, u8 arg3) {
    s8 var_v0;

    for (var_v0 = arg1; var_v0 < arg1 + arg2; var_v0++) {
        arg0[var_v0]->unk22 = arg3;
    }
}


typedef struct func_80147148_Node {
    u8 pad0[0x10];
    struct func_80147148_Node *unk10;
    u8 pad1[0xE];
    u8 unk22;
} func_80147148_Node;

void func_80147148(func_80147148_Node *arg0, s8 arg1) {
    s8 var_v0;

    var_v0 = arg1;
    if (arg0 != NULL) {
        do {
            arg0->unk22 = var_v0;
            arg0 = arg0->unk10;
        } while (arg0 != NULL);
    }
}


struct func_80147174_Obj {
    u8 pad0[0xB];
    u8 unkB;
};

struct func_80147174_Struct {
    u8 pad0[0x10];
    struct func_80147174_Struct *unk10;
    u8 pad1[0x1C];
    struct func_80147174_Obj *unk30;
};

extern void func_80006088();

void func_80147174(struct func_80147174_Struct *arg0) {
    u8 sp1F;

    arg0->unk30->unkB = arg0->unk30->unkB - 0x14;
    sp1F = arg0->unk30->unkB;
    if (arg0->unk10 != NULL) {
        func_80147174(arg0->unk10);
    }
    if ((s32) sp1F < 0x14) {
        func_80006088(arg0);
    }
}


struct func_801471DC_Node {
    u8 pad0[0x10];
    struct func_801471DC_Node *unk10;
};

void func_801471DC(struct func_801471DC_Node *arg0) {
    if (arg0 != NULL) {
        do {
            func_80006088(arg0);
            arg0 = arg0->unk10;
        } while (arg0 != NULL);
    }
}



s32 func_80147218(void *arg0) {
    s32 temp_a1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x24);
    if (temp_a1 != 0) {
        func_801471DC(temp_a1);
        return 1;
    }
    return 0;
}


struct func_80147250_Obj {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};

struct func_80147250_Struct {
    u8 pad0[0x2C];
    struct func_80147250_Obj *unk2C;
    struct func_80147250_Obj *unk30;
};

void func_80147250(struct func_80147250_Struct *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    struct func_80147250_Obj *temp_v0;

    temp_v0 = arg0->unk2C;
    if (temp_v0 != NULL) {
        temp_v0->unk48 = arg1;
        arg0->unk2C->unk49 = arg2;
        arg0->unk2C->unk4A = arg3;
        arg0->unk2C->unk4B = arg4;
        return;
    }
    arg0->unk30->unk48 = arg1;
    arg0->unk30->unk49 = arg2;
    arg0->unk30->unk4A = arg3;
    arg0->unk30->unk4B = arg4;
}


typedef struct func_801472C0_Obj {
    u8 pad0[0x4C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801472C0_Obj;

typedef struct func_801472C0_Struct {
    u8 pad0[0x2C];
    func_801472C0_Obj *unk2C;
    func_801472C0_Obj *unk30;
} func_801472C0_Struct;

void func_801472C0(func_801472C0_Struct *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    if (arg0->unk2C != NULL) {
        arg0->unk2C->unk4C = arg1;
        arg0->unk2C->unk4D = arg2;
        arg0->unk2C->unk4E = arg3;
        arg0->unk2C->unk4F = arg4;
        return;
    }
    arg0->unk30->unk4C = arg1;
    arg0->unk30->unk4D = arg2;
    arg0->unk30->unk4E = arg3;
    arg0->unk30->unk4F = arg4;
}


typedef struct func_80147330_StructNode {
    u8 pad[0x10];
    struct func_80147330_StructNode *unk10;
} func_80147330_StructNode;

typedef struct func_80147330_StructArg {
    u8 pad[0x24];
    func_80147330_StructNode *unk24;
} func_80147330_StructArg;

extern u16 D_80089474[];

void func_80147330(func_80147330_StructArg *arg0) {
    func_80147330_StructNode *var_v0;
    u8 var_v1;

    var_v0 = arg0->unk24;
    var_v1 = 0;
    if ((D_80089474[1] & 0x10) && (var_v0 != NULL)) {
        do {
            var_v0 = var_v0->unk10;
            var_v1++;
        } while (var_v0 != NULL);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_80147370.s")

extern s32 D_801BEC98[];

struct func_801473F4_Struct0;
struct func_801473F4_Struct1;
struct func_801473F4_Struct2;
struct func_801473F4_Struct3;

struct func_801473F4_Struct0 {
    u8 pad0[0x24];
    struct func_801473F4_Struct1 *unk24;
    u8 pad1[0x34];
    struct func_801473F4_Struct3 *unk5C;
};

struct func_801473F4_Struct3 {
    u8 pad0[0x4];
    s32 *unk4;
};

struct func_801473F4_Struct1 {
    u8 pad0[0x10];
    struct func_801473F4_Struct1 *unk10;
    u8 pad1[0x18];
    struct func_801473F4_Struct2 *unk2C;
};

struct func_801473F4_Struct2 {
    u8 pad0[0x24];
    s32 unk24;
};

void func_801473F4(struct func_801473F4_Struct0 *arg0) {
    struct func_801473F4_Struct3 *var_v0;
    s32 *var_v1;
    u8 var_a2;
    struct func_801473F4_Struct1 *var_a1;

    var_v0 = arg0->unk5C;
    var_v1 = var_v0->unk4;
    var_a1 = arg0->unk24;
    var_a2 = 0;
    if (var_a1 != NULL) {
        do {
            if (var_v1[var_a2] >= 0) {
                D_801BEC98[var_a2] = var_a1->unk2C->unk24;
            }
            var_a1 = var_a1->unk10;
            var_a2++;
        } while (var_a1 != NULL);
    }
}


struct func_80147450_Sub {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x08];
    s32 unk30;
};

struct func_80147450_Obj {
    u8 pad0[0x10];
    struct func_80147450_Obj *unk10;
    u8 pad1[0x18];
    struct func_80147450_Sub *unk2C;
};

struct func_80147450_Flags {
    s32 pad0;
    s32 *unk4;
};

struct func_80147450_Top {
    u8 pad0[0x24];
    struct func_80147450_Obj *unk24;
    u8 pad1[0x34];
    struct func_80147450_Flags *unk5C;
};

s32 func_8000C3B0(void *);                          /* extern */
s32 func_80147370(void *, s32, s32, s32, s32);      /* extern */

void func_80147450(struct func_80147450_Top *arg0)
{
  struct func_80147450_Obj *var_s0;
  struct func_80147450_Flags *temp_v0;
  s32 *temp_s2;
  u32 var_s1;
  var_s0 = arg0->unk24;
  var_s1 = 0;
  temp_v0 = arg0->unk5C;
  temp_s2 = temp_v0->unk4;
  if (var_s0 != 0)
  {
    do
    {
      if (temp_s2[var_s1] >= 0)
      {
        var_s0->unk2C->unk24 = D_801BEC98[var_s1];
        if (1 == (var_s1 ^ 0))
        {
          var_s0->unk2C->unk30 = func_8000C3B0(var_s0) | 0x40000000;
        }
        else
        {
          var_s0->unk2C->unk30 = func_8000C3B0(var_s0);
        }
      }
      var_s0 = var_s0->unk10;
      var_s1 = (var_s1 + 1) & 0xFF;
    }
    while (var_s0 != 0);
  }
  func_80147370(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
}


struct func_8014753C_Inner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[8];
    s32 unk30;
};

struct func_8014753C_Node {
    u8 pad0[0x10];
    struct func_8014753C_Node *unk10;
    u8 pad1[0x18];
    struct func_8014753C_Inner *unk2C;
};

struct func_8014753C_Table {
    u8 pad0[4];
    s32 *unk4;
};

struct func_8014753C_Arg0 {
    u8 pad0[0x24];
    struct func_8014753C_Node *unk24;
    u8 pad1[0x34];
    struct func_8014753C_Table *unk5C;
};

void func_8014753C(struct func_8014753C_Arg0 *arg0, s32 arg1)
{
  struct func_8014753C_Node *var_a2;
  int new_var;
  struct func_8014753C_Table *temp_v0;
  s32 *temp_v1;
  u32 var_a3;
  temp_v0 = arg0->unk5C;
  temp_v1 = temp_v0->unk4;
  var_a2 = arg0->unk24;
  var_a3 = 0;
  if (var_a2 != 0)
  {
    new_var = 0;
    do
    {
      if (temp_v1[var_a3] >= new_var)
      {
        var_a2->unk2C->unk24 |= 0x100;
        var_a2->unk2C->unk30 = arg1;
      }
      var_a2 = var_a2->unk10;
      var_a3 = (var_a3 + 1) & 0xFF;
    }
    while (var_a2 != 0);
  }
}



s32 func_80147598(void) {
    if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_801475C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_801476E0.s")


void func_80147734(f32 *arg0, f32 *arg1, f32 *arg2) {
    arg2[0] = arg1[0] + arg0[0];
    arg2[1] = arg1[1] + arg0[1];
    arg2[2] = arg1[2] + arg0[2];
}


void func_801475C8(f32);

void func_80147768(void *arg0, f32 arg1) {
    func_801475C8(arg1);
    ((f32 *) arg0)[0] = ((f32 *) arg0)[0] * arg1;
    ((f32 *) arg0)[1] = ((f32 *) arg0)[1] * arg1;
    ((f32 *) arg0)[2] = ((f32 *) arg0)[2] * arg1;
}


typedef struct func_801477C4_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801477C4_Struct;

void func_801477C4(func_801477C4_Struct *arg0, f32 arg1) {
    arg0->unk0 = arg0->unk0 * arg1;
    arg0->unk4 = arg0->unk4 * arg1;
    arg0->unk8 = arg0->unk8 * arg1;
}


void func_801477F8(s32 arg0, s32 arg1, s32 arg2)
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


extern u8 D_8017B768[];
extern u32 D_801816B0[];

struct func_80147828_Inner {
    u8 pad0[0x34];
    u32 unk34;
};

struct func_80147828_Node {
    u8 pad0[0x10];
    struct func_80147828_Node *unk10;
    u8 pad1[0x18];
    struct func_80147828_Inner *unk2C;
};

struct func_80147828_Owner {
    u8 pad0[0x24];
    struct func_80147828_Node *unk24;
};

s32 func_80147828(struct func_80147828_Owner *arg0, u8 arg1, u8 arg2, u8 arg3) {
    struct func_80147828_Node *var_v1;
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v1 = arg0->unk24;
        if (var_v1 != NULL) {
            do {
                if (var_v0 == arg2) {
                    var_v1->unk2C->unk34 = D_801816B0[arg1] | 0x40000000;
                }
                if (var_v0 == arg3) {
                    var_v1->unk2C->unk34 = (u32) D_8017B768 | 0x40000000;
                }
                var_v1 = var_v1->unk10;
                var_v0++;
            } while (var_v1 != NULL);
        }
        return 1;
    }
    return 0;
}


typedef struct func_801478D4_Inner {
    u8 pad0[0xC];
    u16 unkC;
} func_801478D4_Inner;

typedef struct func_801478D4_Struct {
    u8 pad0[0x5C];
    func_801478D4_Inner *unk5C;
} func_801478D4_Struct;

s32 func_801478D4(func_801478D4_Struct *arg0, u8 arg1) {
    func_801478D4_Inner *inner;

    if (arg0 != NULL) {
        inner = arg0->unk5C;
        if (func_80147828((struct func_80147828_Owner *) arg0, arg1, 0, (inner->unkC - 1) & 0xFF) != 0) {
            return 1;
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_80147924.s")


struct func_801479A8_Sub {
    u8 pad0[0x34];
    s32 unk34;
};

struct func_801479A8_Node {
    u8 pad0[0x10];
    struct func_801479A8_Node *unk10;
    u8 pad1[0x18];
    struct func_801479A8_Sub *unk2C;
};

struct func_801479A8_Arg {
    u8 pad0[0x24];
    struct func_801479A8_Node *unk24;
};

s32 func_801479A8(struct func_801479A8_Arg *arg0) {
    struct func_801479A8_Node *var_v0;

    if (arg0 != NULL) {
        var_v0 = arg0->unk24;
        if (var_v0 != NULL) {
            do {
                var_v0->unk2C->unk34 = 0;
                var_v0 = var_v0->unk10;
            } while (var_v0 != NULL);
        }
        return 1;
    }
    return 0;
}


struct func_801479E0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct func_801479E0_Obj {
    u8 pad[0x10];
    s32 unk10;
    u8 pad2[0x7C];
    s32 unk90;
};

void *func_8012C4D0(s32, struct func_801479E0_Struct, s32);
extern struct func_801479E0_Struct D_80181A70;
extern s32 D_801BBC2C;

s32 func_801479E0(s32 arg0) {
    struct func_801479E0_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80181A70, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk10 = 1;
        return 1;
    }
    return 0;
}


void func_80005700(s32 arg0);
s32 func_800058B8(s32 arg0);

s32 func_80147A6C(void) {
    s32 temp_v0;

    temp_v0 = func_800058B8(1);
    if (temp_v0 != 0) {
        func_80005700(temp_v0);
        return 1;
    }
    return 0;
}


extern u8 D_80181590[];

void func_80147AA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_v0;

    if (&arg0 == NULL) {
        arg0 = 0;
    }
    if (&arg1 == NULL) {
        arg1 = 0;
    }
    if (&arg2 == NULL) {
        arg2 = 0;
    }
    if (&arg3 == NULL) {
        arg3 = 0;
    }
    arg0 = arg0 & 0xFF;
    temp_v0 = D_80181590 + arg0 * 24;
    temp_v0[4] = arg1;
    temp_v0[0] = arg1;
    temp_v0[5] = arg2;
    temp_v0[1] = arg2;
    temp_v0[6] = arg3;
    temp_v0[2] = arg3;
}


void func_80147AF0(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    u8 *temp_v0;

    temp_v0 = (u8 *)((arg0 * 0x18) + D_80181590);
    temp_v0[0xC] = arg1;
    temp_v0[0x8] = arg1;
    temp_v0[0xD] = arg2;
    temp_v0[0x9] = arg2;
    temp_v0[0xE] = arg3;
    temp_v0[0xA] = arg3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_80147B38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801451C0/func_80147BB0.s")



struct func_80147C28_Struct {
    u8 pad0[0x10];
    s8 unk10;
    s8 unk11;
    s8 unk12;
};

void func_80147C28(s32 arg0, s8 arg1, s8 arg2, s8 arg3) {
    struct func_80147C28_Struct *temp_v0;

    if (&arg0 == NULL) {
        arg0 = 0;
    }
    if (&arg1 == NULL) {
        arg1 = 0;
    }
    if (&arg2 == NULL) {
        arg2 = 0;
    }
    if (&arg3 == NULL) {
        arg3 = 0;
    }
    arg0 = arg0 & 0xFF;
    temp_v0 = (struct func_80147C28_Struct *) (D_80181590 + arg0 * 24);
    temp_v0->unk10 = arg1;
    temp_v0->unk11 = arg2;
    temp_v0->unk12 = arg3;
}


extern void func_800058DC(void *a0, void *a1);
extern void func_80005E44(void *a0, void *a1);
extern void func_80006214(void *a0);
extern u8 D_80164F40[];
extern u8 D_801815F0[];
extern void func_80147D48(s32 arg0, s32 arg1);

struct func_80147C7C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct func_80147C7C_Arg0 {
    u8 pad0[0x90];
    s32 unk90;
};

struct func_80147C7C_Node {
    u8 pad0[0x30];
    void *unk30;
};

struct func_80147C7C_Arg1 {
    struct func_80147C7C_Node *unk0;
    struct func_80147C7C_Node *unk4;
};

void func_80147C7C(struct func_80147C7C_Arg0 *arg0, struct func_80147C7C_Arg1 *arg1) {
    struct func_80147C7C_Struct sp20;

    sp20 = *(struct func_80147C7C_Struct *) D_80164F40;
    sp20.unk4 = arg0->unk90 + 1;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    ((struct func_80147C7C_Node *) arg1->unk0->unk30)->unk30 = D_801815F0;
    sp20.unk4 = arg0->unk90 - 1;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    ((struct func_80147C7C_Node *) arg1->unk4->unk30)->unk30 = D_8017B768;
    func_800058DC(arg0, (void *) func_80147D48);
}


void func_80147D48(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

