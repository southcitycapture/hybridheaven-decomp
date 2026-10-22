#include "common.h"

extern s32 D_801BCCF0;

typedef struct func_802408F0_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_802408F0_Struct;

void func_802408F0(void) {
    ((func_802408F0_Struct *)D_801BCCF0)->unk92 = 1;
}

typedef struct func_80240918_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_80240918_Struct;
extern func_80240918_Struct *D_801BCCF4;

void func_80240904(void) {
    D_801BCCF4->unk92 = 1;
}




void func_80240918(void) {
    D_801BCCF4->unk92 = 0;
}


extern void *func_801505AC(s32);
extern void func_801C3B7C(void *);

void func_80240928(void) {
    u8 *temp_v0;

    temp_v0 = func_801505AC(6);
    temp_v0[0x92] = temp_v0[0x92] | 0x40;
    func_801C3B7C(func_801505AC(7));
}


s32 func_80133A24(s32);
s32 func_80126CC0(s32, void *);
extern void func_800058DC(s32, void *);
extern u8 func_80127014[];
extern void func_802409B4();

void func_80240964(s32 arg0, s32 arg1) {
    if ((func_80133A24(0x147) == 0) && (func_80126CC0(arg0, func_80127014) != 0)) {
        func_800058DC(arg0, func_802409B4);
    }
}

/* line 3 only when compiled alone: context.h then already has func_80241DE0_Struct2 and the func_8012C4D0 prototype, which the real file declares later */
#if __LINE__ == 3
#define func_802409B4_Arg func_80241DE0_Struct2
#else
typedef struct func_802409B4_Arg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_802409B4_Arg;
extern s32 func_8012C4D0();
#endif

extern s32 func_80005670();
extern void func_8001F74C();
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_80203830(s32, void *);
void func_80240B80(s32 arg0, s32 arg1);
extern struct func_80242178_Struct D_801BBBF0;
extern func_802409B4_Arg D_8024F740;
extern func_802409B4_Arg D_8024F754;
extern u8 D_8024F718[];
extern u8 D_8024F72C[];
extern u8 D_8024FAC4[];

typedef struct func_802409B4_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
    u8 pad2[0x38 - 0x24];
    struct func_802409B4_Sub {
        u8 pad0[2];
        u16 unk2;
    } *unk38;
    u8 pad3[0x72 - 0x3C];
    u16 unk72;
} func_802409B4_Struct;

typedef struct func_802409B4_Obj {
    u8 pad0[0x35];
    u8 unk35;
    u8 pad1[0x90 - 0x36];
    u16 unk90;
} func_802409B4_Obj;

typedef struct func_802409B4_Globals {
    u8 pad0[0x40];
    s32 unk40;
    s32 unk44;
    u8 pad1[0x104 - 0x48];
    u16 unk104;
    u8 pad2[0x1088 - 0x106];
    s32 unk1088;
    u8 pad3[0x10A0 - 0x108C];
    s32 unk10A0;
    u8 pad4[0x10B8 - 0x10A4];
    void *unk10B8;
    u8 pad5[0x10D0 - 0x10BC];
    s32 unk10D0;
    u8 pad6[0x1100 - 0x10D4];
    s32 unk1100;
    s32 unk1104;
} func_802409B4_Globals;

#define G ((func_802409B4_Globals *)&D_801BBBF0)
#define O(x) ((func_802409B4_Obj *)(x))
void func_802409B4(func_802409B4_Struct *arg0, s32 arg1) {
    func_8001F74C();
    func_80203830((s32)arg0, D_8024FAC4);
    arg0->unk18 = func_8012E5B0;
    arg0->unk20 = func_8012E6BC;
    func_8013B570(arg0, arg0->unk38->unk2, 2, 3, func_80240B80);
    G->unk10B8 = arg0;
    G->unk10A0 = G->unk40;
    G->unk1088 = func_8012C4D0((s32)arg0, D_8024F740, 3);
    O(G->unk1088)->unk35 = G->unk104;
    G->unk104++;
    O(G->unk1088)->unk90 = arg0->unk72;
    G->unk10D0 = func_8012C4D0((s32)arg0, D_8024F754, 3);
    O(G->unk10D0)->unk90 = arg0->unk72;
    O(G->unk10D0)->unk35 = G->unk104;
    G->unk104++;
    G->unk1100 = func_80005670(G->unk44, D_8024F718);
    O(G->unk1100)->unk90 = arg0->unk72;
    O(G->unk1100)->unk35 = G->unk104;
    G->unk104++;
    G->unk1104 = func_80005670(arg0, D_8024F72C);
    O(G->unk1104)->unk35 = G->unk104;
    G->unk104++;
}

void func_80240C04(s32 arg0);
extern s32 func_8020394C();
typedef struct func_80241DE0_Struct2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80241DE0_Struct2;
extern func_80241DE0_Struct2 D_8024F6A0;
extern u8 func_80240C04_dummy;

void func_80240B80(s32 arg0, s32 arg1) {
    if (func_8020394C() != 0) {
        func_8012C4D0(arg0, D_8024F6A0, 3);
        func_800058DC(arg0, func_80240C04);
    }
}


extern s32 func_802039B0();
extern void func_80240C38();

void func_80240C04(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_80240C38);
    }
}


void func_80240C38(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_80240C44_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80240C44_Struct;

extern s32 func_80126B14(void *, void *, u16, s32);
extern void func_80240C8C();

void func_80240C44(func_80240C44_Struct *arg0, s32 arg1) {
    if (func_80126B14(arg0, func_80127014, arg0->unk90, 0x2E) != 0) {
        func_800058DC((s32)arg0, func_80240C8C);
    }
}


typedef struct func_80240C8C_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
} func_80240C8C_Struct;

extern void func_80240CE8(void *arg0, s32 arg1);

void func_80240C8C(func_80240C8C_Struct *arg0, s32 arg1) {
    func_8001F74C();
    arg0->unk18 = func_8012E5B0;
    arg0->unk20 = func_8012E6BC;
    func_8013B570(arg0, 0x2E, 0, 4, func_80240CE8);
}

extern s32 D_801BCC78;
extern void func_80240D34();

void func_80240CE8(void *arg0, s32 arg1) {
    if (func_80133A24(0x147) != 0) {
        *(u16 *)((u8 *)arg0 + 0x92) = 8;
        D_801BCC78 = 0;
        func_800058DC((s32)arg0, (void *)func_80240D34);
    }
}


typedef struct func_80240D34_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_80240D34_Struct;


void func_80240D34(func_80240D34_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800058DC((s32) arg0, func_80127014);
    }
}


typedef struct func_80240D6C_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80240D6C_Struct;

extern void func_80240DB4();

void func_80240D6C(func_80240D6C_Struct *arg0, s32 arg1) {
    if (func_80126B14(arg0, func_80127014, arg0->unk90, 0x32) != 0) {
        func_800058DC((s32)arg0, func_80240DB4);
    }
}


typedef struct func_80240DB4_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
} func_80240DB4_Struct;

extern void func_80240E10(void *arg0, s32 arg1);

void func_80240DB4(func_80240DB4_Struct *arg0, s32 arg1) {
    func_8001F74C();
    arg0->unk18 = func_8012E5B0;
    arg0->unk20 = func_8012E6BC;
    func_8013B570(arg0, 0x32, 0, 4, func_80240E10);
}


typedef struct func_80240E10_StructObj {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad1[0x30 - 0x28];
    u32 unk30;
    u8 pad2[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80240E10_StructObj;

typedef struct func_80240E10_StructEnt {
    u8 pad0[0x2C];
    func_80240E10_StructObj *unk2C;
} func_80240E10_StructEnt;

typedef struct func_80240E10_StructArg1 {
    func_80240E10_StructEnt *unk0;
    func_80240E10_StructEnt *unk4;
    u8 pad8[0x34 - 0x8];
    func_80240E10_StructEnt *unk34;
    func_80240E10_StructEnt *unk38;
    func_80240E10_StructEnt *unk3C;
    func_80240E10_StructEnt *unk40;
    func_80240E10_StructEnt *unk44;
    func_80240E10_StructEnt *unk48;
} func_80240E10_StructArg1;

typedef struct func_80240E10_StructCnt {
    u8 pad0[0xC];
    u16 unkC;
} func_80240E10_StructCnt;

extern u8 D_80254420[];
extern void func_80240F94();

void func_80240E10(void *arg0, s32 arg1)
{
  func_80240E10_StructArg1 *a1;
  func_80240E10_StructEnt **arr;
  func_80240E10_StructCnt *cnt;
  s32 i;
  a1 = (func_80240E10_StructArg1 *) arg1;
  arr = (func_80240E10_StructEnt **) arg1;
  cnt = *((func_80240E10_StructCnt **) (((u8 *) arg0) + 0x5C));
 i = 1; while (i < cnt->unkC) {
    arr[i]->unk2C->unk24 |= 0x100;
    arr[i]->unk2C->unk30 = ((u32) D_80254420) | 0x40000000;
    arr[i]->unk2C->unk48 = 0x3C;
    arr[i]->unk2C->unk49 = 0xFF;
    arr[i]->unk2C->unk4A = 0x3C;
    arr[i]->unk2C->unk4B = 0xB4;
    i++;
  }

  a1->unk4->unk2C->unk4B = 0xA2;
  a1->unk40->unk2C->unk4B = 0x7D;
  a1->unk34->unk2C->unk4B = a1->unk40->unk2C->unk4B;
  a1->unk44->unk2C->unk4B = 0x5A;
  a1->unk38->unk2C->unk4B = a1->unk44->unk2C->unk4B;
  a1->unk48->unk2C->unk4B = 0x36;
  if (!arr)
  {
  }
  a1->unk3C->unk2C->unk4B = a1->unk48->unk2C->unk4B;
  a1->unk0->unk2C->unk18 = 0.0f;
  a1->unk0->unk2C->unk1C = 0.0f;
  a1->unk0->unk2C->unk20 = 0.0f;
  func_800058DC((s32) arg0, (void *) func_80240F94);
}


typedef struct func_80240F94_Struct2 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_80240F94_Struct2;

typedef struct func_80240F94_Struct1 {
    u8 pad0[0x2C];
    func_80240F94_Struct2 *unk2C;
} func_80240F94_Struct1;

typedef struct func_80240F94_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80240F94_Struct0;

extern f32 D_8025BE00;
extern void func_80240FFC();

void func_80240F94(func_80240F94_Struct0 *arg0, func_80240F94_Struct1 **arg1) {
    if (arg0->unk92 != 0) {
        (*arg1)->unk2C->unk18 = 0.0f;
        (*arg1)->unk2C->unk1C = 0.0f;
        (*arg1)->unk2C->unk20 = D_8025BE00;
        arg0->unk92 = 0xC8;
        func_800058DC((s32) arg0, (void *) func_80240FFC);
    }
}

extern void func_80241078();

extern f64 D_8025BE08;

typedef struct func_80240FFC_Struct {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
} func_80240FFC_Struct;

typedef struct func_80240FFC_Outer {
    u8 pad0[0x2C];
    func_80240FFC_Struct *unk2C;
} func_80240FFC_Outer;

void func_80240FFC(u8 *arg0, func_80240FFC_Outer **arg1) {
    s32 temp_v0;
    f64 temp_f0;
    func_80240FFC_Struct *temp_v0_2;

    temp_v0 = *(u16 *)(arg0 + 0x92);
    *(u16 *)(arg0 + 0x92) = (u16) (temp_v0 - 1);
    if (temp_v0 != 0) {
        temp_v0_2 = (*arg1)->unk2C;
        temp_f0 = D_8025BE08;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + temp_f0);
        return;
    }
    *(u16 *)(arg0 + 0x92) = 0;
    func_800058DC((s32)arg0, func_80241078);
}


typedef struct func_80241078_Struct {
    u8 pad[0x92];
    u16 unk92;
    u8 unk94;
} func_80241078_Struct;

extern void func_802410BC();

void func_80241078(func_80241078_Struct *arg0, s32 arg1) {
    arg0->unk94 = arg0->unk94 + 1;
    if (arg0->unk92 != 0) {
        arg0->unk92 = 0xA;
        func_800058DC((s32) arg0, (void *) func_802410BC);
    }
}


typedef struct func_802410BC_S2 {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x4];
    f32 unk20;
} func_802410BC_S2;
typedef struct func_802410BC_S1 {
    u8 pad0[0x2C];
    func_802410BC_S2 *unk2C;
} func_802410BC_S1;
typedef struct func_802410BC_S3 {
    u8 pad0[0x22];
    u8 unk22;
} func_802410BC_S3;
typedef struct func_802410BC_S0 {
    u8 pad0[0x24];
    func_802410BC_S3 *unk24;
    u8 pad1[0x6A];
    u16 unk92;
} func_802410BC_S0;
extern f64 D_8025BE10;
extern s32 D_801BCCC0;
extern void func_8024114C();

void func_802410BC(func_802410BC_S0 *arg0, func_802410BC_S1 **arg1) {
    f64 k;
    if (arg0->unk92 != 0) {
        k = D_8025BE10;
        arg0->unk92 = arg0->unk92 - 1;
        (*arg1)->unk2C->unk18 = (f64)(*arg1)->unk2C->unk18 - k;
        (*arg1)->unk2C->unk20 = (f64)(*arg1)->unk2C->unk20 - k;
    } else {
        arg0->unk24->unk22 = 0;
        D_801BCCC0 = 0;
        arg0->unk92 = 0x80;
        func_800058DC((s32)arg0, (void *)func_8024114C);
    }
}


typedef struct func_8024114C_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_8024114C_Struct;


void func_8024114C(func_8024114C_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800058DC((s32) arg0, func_80127014);
    }
}


typedef struct func_80241184_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
} func_80241184_Struct;

extern u8 func_80126EAC[];
extern u8 func_802411D4[];

void func_80241184(func_80241184_Struct *arg0, s32 arg1) {
    if (arg0->unk92 != 0) {
        if (func_80126B14(arg0, func_80126EAC, arg0->unk90, 9) != 0) {
            func_800058DC((s32)arg0, func_802411D4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_802411D4.s")


typedef struct func_802415DC_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_802415DC_Struct0;

typedef struct func_802415DC_Struct2 {
    u8 pad0[0x4B];
    u8 unk4B;
} func_802415DC_Struct2;

typedef struct func_802415DC_Struct1 {
    u8 pad0[0x30];
    func_802415DC_Struct2 *unk30;
} func_802415DC_Struct1;

typedef struct func_802415DC_Struct3 {
    u8 pad0[0x18];
    func_802415DC_Struct1 *unk18;
} func_802415DC_Struct3;

extern void func_80241630();

void func_802415DC(func_802415DC_Struct0 *arg0, func_802415DC_Struct3 *arg1) {
    s32 temp_v0;
    u16 temp_t0;
    func_802415DC_Struct2 *temp_v0_2;

    temp_t0 = 0x14;
    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk18->unk30;
        temp_v0_2->unk4B += 0xC;
        return;
    }
    arg0->unk92 = temp_t0;
    func_800058DC((s32) arg0, func_80241630);
}

struct func_802416A8_Struct0 {
    u8 pad[0x92];
    u16 unk92;
};
struct func_802416A8_Struct1 {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x4];
    f32 unk20;
};
struct func_802416A8_Struct2 {
    u8 pad0[0x14];
    struct func_802416A8_Struct3 *unk14;
};
struct func_802416A8_Struct3 {
    u8 pad0[0x30];
    struct func_802416A8_Struct1 *unk30;
};
void func_802416A8(struct func_802416A8_Struct0 *arg0, struct func_802416A8_Struct2 *arg1);
extern void func_80020744(s32);

extern f64 D_8025BE38;

typedef struct func_80241630_Struct4 {
    u8 pad0[0x1C];
    f32 unk1C;
} func_80241630_Struct4;

typedef struct func_80241630_Struct3 {
    u8 pad0[0x30];
    func_80241630_Struct4 *unk30;
} func_80241630_Struct3;

typedef struct func_80241630_Struct2 {
    u8 pad0[0x14];
    func_80241630_Struct3 *unk14;
} func_80241630_Struct2;

typedef struct func_80241630_Struct {
    u8 pad0[0x92];
    u16 unk92;
} func_80241630_Struct;

void func_80241630(func_80241630_Struct *arg0, func_80241630_Struct2 *arg1) {
    s32 temp_v0;
    func_80241630_Struct4 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + D_8025BE38);
        return;
    }
    arg0->unk92 = 0x14;
    func_80020744(0x234);
    func_800058DC((s32) arg0, &func_802416A8);
}

extern s8 D_801BCC25;





/* D_801BCC25 + 0x9B is 0x801BCCC0, so the pointer sits at +0x9C from D_801BCC24 (4-byte aligned) */
struct func_802416A8_Globals {
    u8 pad[0x9C];
    struct func_802416A8_Struct0 *unk9C;
};

extern struct func_802416A8_Globals D_801BCC24;
extern f64 D_8025BE40;
extern void func_8024173C();

void func_802416A8(struct func_802416A8_Struct0 *arg0, struct func_802416A8_Struct2 *arg1) {
    u32 temp_v0;
    struct func_802416A8_Struct1 *temp_v0_2;
    f64 temp_f0;
    u16 one;

    one = 1;
    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_f0 = D_8025BE40;
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk20 = (f32) ((f64) temp_v0_2->unk20 + temp_f0);
        return;
    }
    D_801BCC24.unk9C->unk92 = one;
    func_800058DC((s32) arg0, (void *) func_8024173C);
    arg0->unk92 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_8024173C.s")


typedef struct func_80241854_Struct0 {
    u8 pad[0x92];
    u16 unk92;
} func_80241854_Struct0;

typedef struct func_80241854_Struct3 {
    u8 pad[0x4B];
    u8 unk4B;
} func_80241854_Struct3;

typedef struct func_80241854_Struct2 {
    u8 pad[0x30];
    func_80241854_Struct3 *unk30;
} func_80241854_Struct2;

typedef struct func_80241854_Struct1 {
    u8 pad[0x14];
    func_80241854_Struct2 *unk14;
    func_80241854_Struct2 *unk18;
} func_80241854_Struct1;

void func_80241854(func_80241854_Struct0 *arg0, func_80241854_Struct1 *arg1) {
    s32 temp_a2;
    func_80241854_Struct3 *temp_v0;
    func_80241854_Struct3 *temp_v1;

    extern void func_800058DC();

    temp_a2 = arg0->unk92;
    if (temp_a2 != 0) {
        arg0->unk92 = (u16) (temp_a2 - 1);
        temp_v0 = arg1->unk18->unk30;
        temp_v0->unk4B = (u8) (temp_v0->unk4B - 0xC);
        temp_v1 = arg1->unk14->unk30;
        temp_v1->unk4B = (u8) (temp_v1->unk4B - 6);
        return;
    }
    arg1->unk14->unk30->unk4B = 0;
    func_800058DC(arg0, &func_80126EAC, temp_a2, arg1);
}

extern u8 D_80164F40[];

typedef struct func_802418C4_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802418C4_StructB;
typedef struct func_802418C4_StructA {
    u8 pad0[0x30];
    func_802418C4_StructB *unk30;
} func_802418C4_StructA;
typedef struct func_802418C4_StructC {
    u8 pad[0x92];
    u16 unk92;
    u8 unk94;
} func_802418C4_StructC;
extern void func_80005F6C(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
struct func_80241A54_Struct1;
extern void func_802425AC();
extern void func_80241EB0();
void func_80241A54(void *arg0, struct func_80241A54_Struct1 **arg1);
extern void func_800062F8(func_802418C4_StructA *, s32);
extern u8 D_802544C0[];
extern f32 D_8025BE58;
extern f32 D_8025BE5C;

void func_802418C4(func_802418C4_StructC *arg0, func_802418C4_StructA **arg1) {
    f32 k;

    if (arg0->unk92 != 0) {
        func_8001F74C();
        func_80005F6C((s32)arg0, D_80164F40);
        func_80006214((s32)arg0);
        func_8012C89C((s32)arg0, 0, 9, 2);
        func_800062F8(*arg1, 0x80000A00);
        k = D_8025BE58;
        (*arg1)->unk30->unk24 |= 0x60300;
        (*arg1)->unk30->unk30 = (s32)D_802544C0 | 0x40000000;
        (*arg1)->unk30->unk4 = 199.0f;
        (*arg1)->unk30->unk8 = D_8025BE5C;
        (*arg1)->unk30->unkC = -230.0f;
        (*arg1)->unk30->unk18 = k;
        (*arg1)->unk30->unk1C = k;
        (*arg1)->unk30->unk20 = k;
        (*arg1)->unk30->unk48 = 0xFF;
        (*arg1)->unk30->unk49 = 0xFF;
        (*arg1)->unk30->unk4A = 0xFF;
        (*arg1)->unk30->unk4B = 0;
        (*arg1)->unk30->unk4C = 0xFF;
        (*arg1)->unk30->unk4D = 0xDC;
        (*arg1)->unk30->unk4E = 0;
        arg0->unk94 = 0x50;
        func_800058DC((s32)arg0, func_80241A54);
    }
}


typedef struct func_80241A54_Struct1 {
    u8 pad[0x30];
    u8 *unk30;
} func_80241A54_Struct1;

extern void func_80241AD4();

void func_80241A54(void *arg0, func_80241A54_Struct1 **arg1) {
    u8 *temp_v0;
    s32 temp_v0_2;
    s32 tmp;

    temp_v0 = (*arg1)->unk30;
    temp_v0[0x4B] = (u8) (temp_v0[0x4B] + 2);
    tmp = ((u8 *) &D_801BBBF0)[0xF21];
    if (tmp < 0xFF) {
        ((u8 *) &D_801BBBF0)[0xF20] = (u8) (((u8 *) &D_801BBBF0)[0xF20] + 1);
    }
    if (((u8 *) &D_801BBBF0)[0xF22] < 0xFF) {
        ((u8 *) &D_801BBBF0)[0xF21] = (u8) (tmp + 1);
    }
    temp_v0_2 = ((u8 *) arg0)[0x94];
    ((u8 *) arg0)[0x94] = (u8) (temp_v0_2 - 1);
    if (temp_v0_2 == 0) {
        func_800058DC((s32) arg0, func_80241AD4);
    }
}


extern void func_80005700();

void func_80241AD4(func_802418C4_StructC *arg0, func_802418C4_StructA **arg1) {
    u8 *g;

    arg0->unk94 = arg0->unk94 + 1;
    (*arg1)->unk30->unk48 = ((arg0->unk94 & 1) * 4) + 0xFB;
    (*arg1)->unk30->unk49 = ((arg0->unk94 & 1) * 4) + 0xFB;
    (*arg1)->unk30->unk4A = ((arg0->unk94 & 1) * 4) + 0xFB;
    if (arg0->unk92 == 0) {
        g = (u8 *)&D_801BBBF0;
        g[0xF20] = g[0xF36];
        g[0xF21] = g[0xF37];
        func_80005700();
    }
}


extern s32 func_8001E978(s32, s32, s32, s32, s32, s32, s32, s32);

void func_80241B70(void) {
    func_8001E978(D_801BCC78, 0, 0, 0, 0xF, 0, 2, 0);
}


extern void func_80020718(s32);
extern u8 *D_801BBCCC;
extern u8 func_80241C18[];

void func_80241BB8(s32 arg0, s32 arg1) {
    if (D_801BBCCC[0x63] != 0 && func_80126CC0(arg0, func_80127014) != 0) {
        func_80020718(0x54);
        func_800058DC(arg0, func_80241C18);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241C18.s")


extern void func_80241CD4();

void func_80241CA0(s32 arg0, s32 arg1) {
    func_8020394C();
    func_800058DC(arg0, &func_80241CD4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/802408F0/func_80241CD4.s")


void func_80241D84(void) {
    *(s16 *)((u8 *)*(s32 *)((u8 *)&D_801BBBF0 + 0x1100) + 0x90) = 1;
    *(s32 *)((u8 *)*(s32 *)((u8 *)&D_801BBBF0 + 0x10A0) + 0x54) = 0;
}


extern u8 *D_801BCC90;

void func_80241DA4(void) {
    *(s32 *)(D_801BCC90 + 0x54) = 1;
}


void func_80241DB8(void) {
    func_801C3B7C(func_801505AC(0xA));
}


typedef struct func_80241DE0_Struct1 {
    u8 pad0[2];
    u16 unk2;
} func_80241DE0_Struct1;

typedef struct func_80241DE0_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x20 - 0x1C];
    void *unk20;
    u8 pad2[0x38 - 0x24];
    func_80241DE0_Struct1 *unk38;
} func_80241DE0_Struct;


extern func_80241DE0_Struct2 D_8024F768;

void func_80241DE0(s32 arg0, s32 arg1) {
    func_80241DE0_Struct *self;

    self = (func_80241DE0_Struct *)arg0;
    func_8001F74C();
    if (func_80126CC0(arg0, &func_80127014) != 0) {
        D_801BCCF0 = func_8012C4D0(arg0, D_8024F768, 5);
        self->unk18 = (void *)func_8012E5B0;
        self->unk20 = (void *)func_8012E6BC;
        func_8013B570(arg0, self->unk38->unk2, 2, 4, (void *)func_80241EB0);
    }
}


extern u8 D_80255FFC[];
extern void func_80241F08();

void func_80241EB0(s32 arg0, s32 arg1) {
    u8 *base;

    func_80203830(arg0, D_80255FFC);
    base = (u8 *) &D_801BBBF0;
    *(s32 *) (base + 0x1088) = arg0;
    *(s32 *) (base + 0x10A0) = *(s32 *) (base + 0x40);
    func_8020394C();
    func_800058DC(arg0, &func_80241F08);
}


extern void func_80241F3C();

void func_80241F08(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_80241F3C);
    }
}


void func_80241F3C(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_80241F48_Struct2 {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80241F48_Struct2;

typedef struct func_80241F48_Struct1 {
    u8 pad0[0x30];
    func_80241F48_Struct2 *unk30;
} func_80241F48_Struct1;

typedef struct func_80241F48_Struct0 {
    func_80241F48_Struct1 *unk0;
    func_80241F48_Struct1 *unk4;
} func_80241F48_Struct0;

extern f32 D_8025BE60;
extern f32 D_8025BE64;
extern void func_80242048();

void func_80241F48(s32 arg0, func_80241F48_Struct0 *arg1) {
    func_80005F6C(arg0, D_80164F40);
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x3C8, 2);
    arg1->unk0->unk30->unk4 = 50.0f;
    arg1->unk0->unk30->unk8 = D_8025BE60;
    arg1->unk0->unk30->unkC = -20.0f;
    func_8012C89C(arg0, 1, 0x3C8, 3);
    arg1->unk4->unk30->unk4 = 50.0f;
    arg1->unk4->unk30->unk8 = D_8025BE64;
    arg1->unk4->unk30->unkC = 20.0f;
    func_800058DC(arg0, func_80242048);
}

extern void func_80242080();

typedef struct func_80242048_Struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_80242048_Struct;

void func_80242048(func_80242048_Struct *arg0, s32 arg1) {
    if (arg0->unk90 != 0) {
        arg0->unk92 = 8;
        func_800058DC((s32)arg0, (void *)func_80242080);
    }
}


extern s16 D_801BBBF6;
extern void func_8012FE50(s32, s32, s32, s32, s32);

typedef struct func_80242080_Struct2 {
    u8 pad0[0x10];
    s16 unk10;
} func_80242080_Struct2;

typedef struct func_80242080_Struct1 {
    u8 pad0[0x30];
    func_80242080_Struct2 *unk30;
} func_80242080_Struct1;

typedef struct func_80242080_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80242080_Struct0;

void func_80242080(func_80242080_Struct0 *arg0, func_80242080_Struct1 **arg1) {
    s32 temp_a2;

    temp_a2 = arg0->unk92;
    if (temp_a2 != 0) {
        arg0->unk92 = temp_a2 - 1;
        arg1[0]->unk30->unk10 += 0xC0;
        arg1[1]->unk30->unk10 -= 0xC0;
        return;
    }
    D_801BBBF6 = 0x400;
    func_8012FE50(0x1E, 0x38, 6, 1, 1);
}

void func_80242178(s32 arg0, s32 arg1);

extern u8 D_8025C6FB;

typedef struct func_802420FC_Struct1 {
    u8 pad0[0x2];
    u16 unk2;
} func_802420FC_Struct1;

typedef struct func_802420FC_Struct0 {
    u8 pad0[0x18];
    void (*unk18)(void);
    u8 pad1[0x4];
    void (*unk20)(void);
    u8 pad2[0x14];
    func_802420FC_Struct1 *unk38;
} func_802420FC_Struct0;

void func_802420FC(func_802420FC_Struct0 *arg0, s32 arg1) {
    if (D_8025C6FB == 0x64 && func_80126CC0((s32)arg0, func_80127014) != 0) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_80242178);
    }
}


struct func_80242178_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0x1088 - 0x44];
    s32 unk1088;
    u8 pad2[0x10A0 - 0x108C];
    s32 unk10A0;
};

extern u8 D_80257618[];
extern void func_802421D8(s32 arg0);

void func_80242178(s32 arg0, s32 arg1) {
    func_8001F74C();
    func_80203830(arg0, D_80257618);
    D_801BBBF0.unk1088 = arg0;
    D_801BBBF0.unk10A0 = D_801BBBF0.unk40;
    func_8020394C();
    func_800058DC(arg0, func_802421D8);
}


extern void func_800208C4(s32);
extern void func_80242218();

void func_802421D8(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800208C4(0x4A);
        func_800058DC(arg0, func_80242218);
    }
}



void func_80242218(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_80127014);
}


extern void func_80126968(void);
extern u8 D_80257D5C[];
extern s32 D_80203830(s32, void *);
void func_80242310(s32 arg0, s32 arg1);

typedef struct func_80242240_Struct1 {
    u8 pad[2];
    u16 unk2;
} func_80242240_Struct1;

typedef struct func_80242240_Struct0 {
    u8 pad0[0x18];
    void (*unk18)(void);
    u8 pad1[4];
    void (*unk20)(void);
    u8 pad2[0x14];
    func_80242240_Struct1 *unk38;
} func_80242240_Struct0;

void func_80242240(func_80242240_Struct0 *arg0, s32 arg1) {
    register struct func_80242178_Struct *globals;
    if ((D_801BBCCC[0x63] != 0) &&
        (func_80133A24(0x145) == 0) &&
        (func_80126CC0((s32)arg0, func_80127014) != 0)) {
        func_80126968();
        func_8001F74C(arg0);
        func_8013B570(arg0, arg0->unk38->unk2, 2, 3, func_80242310);
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        D_80203830((s32)arg0, D_80257D5C);
        globals = &D_801BBBF0;
        globals->unk1088 = (s32)arg0;
        globals->unk10A0 = globals->unk40;
    }
}


extern void func_80242344();

void func_80242310(s32 arg0, s32 arg1) {
    func_8020394C();
    func_800058DC(arg0, &func_80242344);
}


void func_80242344(s32 arg0, struct func_802039B0_Struct *arg1) {
    func_802039B0(arg0, arg1);
}

extern f32 D_8025BE68;
extern u8 D_80258BE4[];
extern void func_801268F4(s32);
void func_80242428(u64 arg0);

typedef struct func_80242364_StructB {
    u8 pad[0x2C];
    f32 *unk2C;
} func_80242364_StructB;
typedef struct func_80242364_StructA {
    u8 pad[0x63];
    u8 unk63;
} func_80242364_StructA;
typedef struct func_80242364_Struct {
    u8 pad[0xDC];
    func_80242364_StructA *unkDC;
    func_80242364_StructB *unkE0;
} func_80242364_Struct;

void func_80242364(s32 arg0, s32 arg1) {
    f32 *p;
    f32 x, y, z;

    if (((func_80242364_Struct *)&D_801BBBF0)->unkDC->unk63 != 0) {
        p = ((func_80242364_Struct *)&D_801BBBF0)->unkE0->unk2C;
        x = D_8025BE68 - p[1];
        y = 300.0f - p[2];
        z = 276.0f - p[3];
        if (!((x * x + y * y + z * z) > 400.0f)) {
            func_801268F4(0);
            func_80203830(arg0, D_80258BE4);
            func_800058DC(arg0, (void *)func_80242428);
        }
    }
}


extern void func_80242460();

void func_80242428(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80242460);
    }
}


extern void func_80242494();

void func_80242460(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_80242494);
    }
}


typedef struct func_80242494_S2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80242494_S2;
typedef struct func_80242494_S1 {
    u8 pad0[0x2C];
    func_80242494_S2 *unk2C;
} func_80242494_S1;
extern func_80242494_S1 *D_801BBCD0;
extern f32 D_8025BE6C;

void func_80242494(s32 arg0, s32 arg1) {
    func_80242494_S2 *p;
    f32 a;
    f32 b;
    f32 c;

    p = D_801BBCD0->unk2C;
    a = D_8025BE6C - p->unk4;
    b = 300.0f - p->unk8;
    c = 276.0f - p->unkC;
    if (!(a * a + b * b + c * c < 1600.0f)) {
        func_800058DC(arg0, func_80242364);
    }
}

extern void func_80242560();

void func_80242524(s32 arg0, s32 arg1) {
    if (func_80126944() == 1) {
        func_800058DC(arg0, (void *) func_80242560);
    }
}


typedef struct func_80242560_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_80242560_Struct;

extern s32 func_80126944(void);

void func_80242560(func_80242560_Struct *arg0, void *arg1) {
    if (func_80126944() == 0) {
        func_80020744(7);
        arg0->unk90 = 0x18;
        func_800058DC(arg0, func_802425AC);
    }
}

void func_8024260C(s32 arg0, s32 arg1);

typedef struct func_802425AC_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_802425AC_Struct;

void func_802425AC(func_802425AC_Struct *arg0, void *arg1)
{
  u16 temp_v0;
  void *new_var;
  temp_v0 = arg0->unk90;
  arg0->unk90 = temp_v0 - 1;
  if (!temp_v0)
  {
    func_80020744(0x6B9);
    new_var = (void *) func_8024260C;
    func_800208C4(0x4A & 0xFFFFu);
    func_800208C4(0x53);
    func_800058DC((s32) arg0, new_var);
  }
}


void func_8024260C(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

