#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_802450B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_802453F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_8024573C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80245A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80245DCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80245F8C.s")


struct func_802461CC_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_801C3044();
extern void func_801C2F0C();
extern void func_800058DC(void *, void *);
extern void func_80246214();

void func_802461CC(struct func_802461CC_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80246214);
    }
}


typedef struct func_80246214_StructGlobal {
    u8 pad[0xA2];
    u16 unkA2;
} func_80246214_StructGlobal;

typedef struct func_80246214_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_80246214_StructObj;

extern func_80246214_StructGlobal *D_8025DDB0;
extern void func_80246284(s32 arg0, s32 arg1);
extern s32 func_80126944(void);
extern s32 func_80133A24(u16);

void func_80246214(func_80246214_StructObj *arg0, s32 arg1)
{
  s32 temp_v1;
  s32 temp_v0;
  if (func_80133A24(D_8025DDB0->unkA2) == 0)
  {
    return;
  }
  if (func_80126944() == 1)
  {
    return;
  }
  temp_v0 = arg0->unk3C;
  temp_v1 = temp_v0 >= 0x1E;
  arg0->unk3C = temp_v0 + 1;
  if (temp_v1 != (temp_v1 * 0))
  {
    func_800058DC(arg0, func_80246284);
  }
}


void func_80246284(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80246290.s")

void func_80246BD4(void);

extern void *func_801505AC(s32 arg0);

typedef struct func_80246B40_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_80246B40_StructObj;

typedef struct func_80246B40_StructSub {
    u8 pad[0x91];
    u8 unk91;
} func_80246B40_StructSub;

void func_80246B40(func_80246B40_StructObj *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    func_80246B40_StructSub *temp_v0_2;
    func_80246B40_StructSub *temp_v0_3;

    temp_v0 = arg0->unk3C;
    temp_v1 = arg0->unk3C < 2;
    arg0->unk3C = temp_v0 + 1;
    if (!temp_v1) {
        if (func_80133A24(0x11E) != 0) {
            temp_v0_2 = func_801505AC(4);
            temp_v0_2->unk91 = temp_v0_2->unk91 | 0x40;
        }
        if (func_80133A24(0x11F) != 0) {
            temp_v0_3 = func_801505AC(2);
            temp_v0_3->unk91 = temp_v0_3->unk91 | 0x40;
        }
        func_800058DC(arg0, &func_80246BD4);
    }
}


void func_80241910(f32 a, f32 b, f32 c);
extern void func_80246DE0();

void func_80246BD4(void) {
    func_80246DE0();
    func_80241910(0.0f, -100.0f, 0.0f);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80246C0C.s")


extern void func_8012D918(s32, s32, s32, s32, s32);

struct func_80246DE0_Target {
    u8 pad[0x4C];
    u8 unk4C;
};

struct func_80246DE0_Node {
    u8 pad[0x30];
    struct func_80246DE0_Target *unk30;
};

struct func_80246DE0_Args {
    u8 pad[4];
    struct func_80246DE0_Node *unk4;
    struct func_80246DE0_Node *unk8;
    struct func_80246DE0_Node *unkC;
};

void func_80246DE0(s32 arg0, struct func_80246DE0_Args *arg1) {
    struct func_80246DE0_Target *temp_a2;
    struct func_80246DE0_Target *temp_v0;
    struct func_80246DE0_Target *temp_v1;

    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk4C = temp_v0->unk4C + 1;
    temp_v1 = arg1->unk8->unk30;
    temp_v1->unk4C = temp_v1->unk4C + 2;
    temp_a2 = arg1->unkC->unk30;
    temp_a2->unk4C = temp_a2->unk4C - 2;
    if (func_80133A24(0x11C) == 0) {
        func_8012D918(arg0, 0x2F8, 1, 4, 0);
    } else {
        func_8012D918(arg0, 0x2F8, 0, 4, 0);
    }
    if (func_80133A24(0x11D) == 0) {
        func_8012D918(arg0, 0x2F8, 1, 5, 0);
        return;
    }
    func_8012D918(arg0, 0x2F8, 0, 5, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80246EC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_802471F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80247530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_802476F0.s")


struct func_80247930_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern void func_80247978();

void func_80247930(struct func_80247930_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80247978);
    }
}


typedef struct func_80247978_StructGlobal {
    u8 pad[0xA2];
    u16 unkA2;
} func_80247978_StructGlobal;

typedef struct func_80247978_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_80247978_StructObj;

extern func_80247978_StructGlobal *D_8025DDC0;
extern void func_802479E8(s32 arg0, s32 arg1);

void func_80247978(func_80247978_StructObj *arg0, s32 arg1)
{
  s32 temp_v1;
  s32 temp_v0;
  if (func_80133A24(D_8025DDC0->unkA2) == 0)
  {
    return;
  }
  if (func_80126944() == 1)
  {
    return;
  }
  temp_v0 = arg0->unk3C;
  temp_v1 = temp_v0 >= 0x1E;
  arg0->unk3C = temp_v0 + 1;
  if (temp_v1 != (temp_v1 * 0))
  {
    func_800058DC(arg0, func_802479E8);
  }
}


void func_802479E8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

