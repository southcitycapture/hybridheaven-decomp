#include "common.h"


extern u8 D_801BBE1A[];

struct func_802237B0_Struct {
    u8 pad0[0x74];
    u8 unk74;
};

struct func_802237B0_Arg {
    u8 pad0[0x5C];
    struct func_802237B0_Struct *unk5C;
};

void func_802237B0(struct func_802237B0_Arg *arg0, u8 arg1) {
    struct func_802237B0_Struct *temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->unk5C;
    temp_v1 = temp_v0->unk74;
    if (temp_v1 == 0 || temp_v1 == 2) {
        D_801BBE1A[6] = arg1;
        return;
    }
    D_801BBE1A[7] = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802237EC.s")

typedef struct func_80225664_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x30 - 0x14];
    s32 unk30;
} func_80225664_Struct;
extern func_80225664_Struct D_801BC03C;
extern func_80225664_Struct D_801BC3D8;
extern s32 D_801BBCCC;
void func_8022696C(void);

struct func_8022397C_Bits {
    u32 a:1;
    u32 b:7;
    u32 c:5;
    u32 d:3;
};
struct func_8022397C_S {
    u8 pad0[0x30];
    u8 a30:1;
    u8 m30:6;
    u8 b30:1;
    u8 m31:5;
    u8 l31:3;
    u8 pad32[0x324 - 0x32];
    s32 unk324;
};
struct func_8022397C_T {
    u8 pad0[0x2C];
    void *unk2C;
    u8 pad30[0x90 - 0x30];
    void *unk90;
    s32 unk94;
    void *unk98;
    void *unk9C;
};
struct func_8022397C_P {
    u8 pad0[0x1C];
    s32 unk1C;
    u8 pad20[0x5C - 0x20];
    struct func_802237B0_Struct *unk5C;
    u8 pad60[0x68 - 0x60];
    s32 unk68;
};
void *func_80005670(void *arg0, void *arg1);
extern void *func_80242E58(void *);
extern void func_800058DC(void *, void *);
extern u8 D_801BCC21;
extern u8 D_8023E3C4[];
extern u8 func_802208B0[];

void func_8022397C(struct func_8022397C_P *arg0) {
    struct func_802237B0_Struct *sp34;
    s32 sp30;
    u8 padB[4];
    void *sp28;
    u8 padA[4];
    struct func_8022397C_T *sp20;
    struct func_8022397C_S *s0;
    struct func_8022397C_T *v;

    sp34 = arg0->unk5C;
    sp30 = arg0->unk68;
    if ((s32)arg0 == D_801BBCCC) {
        s0 = (struct func_8022397C_S *)&D_801BC03C;
    } else {
        s0 = (struct func_8022397C_S *)&D_801BC3D8;
    }
    if ((s32)arg0 != D_801BBCCC) {
        sp28 = &D_801BC03C;
    } else {
        sp28 = &D_801BC3D8;
    }
    sp20 = NULL;
    func_8022696C();
    s0->unk324 = arg0->unk1C;
    func_802237B0((void *)arg0, 0);
    if (sp34->unk74 == 2) {
        sp20 = func_80242E58(arg0);
    }
    v = func_80005670(*(void **)sp34, D_8023E3C4);
    if (v != NULL) {
        if (sp20 != NULL) {
            sp20->unk2C = v;
        }
        D_801BCC21 = 6;
        s0->l31 = 4;
        s0->a30 = 1;
        s0->b30 = 0;
        v->unk90 = sp34;
        v->unk94 = sp30;
        v->unk98 = s0;
        v->unk9C = sp28;
        func_800058DC(arg0, func_802208B0);
    }
}


extern f32 D_8023EF68;

f32 func_80223AB8(u8 arg0) {
    s32 temp_a0;

    temp_a0 = arg0;
    if ((temp_a0 == 0) || (temp_a0 == 1)) {
        return 1.0f;
    }
    if ((temp_a0 == 4) || (temp_a0 == 5)) {
        return D_8023EF68;
    }
    if ((temp_a0 == 2) || (temp_a0 == 3)) {
        return 0.5f;
    }
    return 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223CB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223D0C.s")


s16 func_8001EF38(f32, f32);
f32 func_8002FC20(f32, f32);
f32 func_80223D0C(void *, s16);

struct func_80223DD0_Struct {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80223DD0_Struct2 {
    f32 unk0;
    f32 unk4;
};

s32 func_80223DD0(struct func_80223DD0_Struct *arg0, struct func_80223DD0_Struct *arg1, struct func_80223DD0_Struct2 *arg2, struct func_80223DD0_Struct2 *arg3, f32 arg4, f32 arg5) {
    f32 sp2C;
    u8 pad[4];
    f32 temp_fv0;
    f32 temp_fa1;
    f32 sp1C;
    s16 temp_v0;
    f32 t2;

    temp_fv0 = (arg1->unk4 + arg3->unk0) - (arg0->unk4 + arg2->unk0);
    temp_fa1 = (arg1->unkC + arg3->unk4) - (arg0->unkC + arg2->unk4);
    sp1C = func_8002FC20((temp_fv0 * temp_fv0) + (temp_fa1 * temp_fa1), temp_fa1);
    temp_v0 = func_8001EF38(temp_fv0, temp_fa1);
    sp2C = func_80223D0C(arg2, (s16) (temp_v0 - arg0->unk12));
    t2 = func_80223D0C(arg3, (s16) ((temp_v0 - arg1->unk12) + 0x1000));
    if (((sp2C * arg4) + (t2 * arg5)) < sp1C) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223ED4.s")

extern struct func_802253B8_Struct D_801BBBF0;
struct func_80224B64_Globals {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};
struct func_802253B8_Struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0xDC - 0x2E];
    s32 unkDC;
};

struct func_802242D0_StructC {
    u8 pad[0x12];
    s16 angle;
};
struct func_802242D0_StructB {
    u8 pad[0x2C];
    struct func_802242D0_StructC *unk2C;
};
struct func_802242D0_StructA {
    u8 pad[0x24];
    struct func_802242D0_StructB *unk24;
};

s32 func_802242D0(struct func_802242D0_StructA *arg0) {
    u8 *var_v1;
    s16 temp_a0;
    s16 var_v0;
    s16 angle;
    s32 temp_a2;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0_2;
    s32 var_v0_3;

    if (arg0 == (void *)D_801BBBF0.unkDC) {
        var_v1 = (u8 *)&D_801BC03C;
    } else {
        var_v1 = (u8 *)&D_801BC3D8;
    }
    angle = arg0->unk24->unk2C->angle;
    if (arg0 == (void *)D_801BBBF0.unkDC) {
        var_v0 = ((struct func_80224B64_Globals *)&D_801BBBF0)->unkB98;
    } else {
        var_v0 = ((struct func_80224B64_Globals *)&D_801BBBF0)->unkB98 + 0x1000;
    }
    temp_a0 = var_v0 - angle;
    temp_a2 = temp_a0 & 0x1000;
    if (temp_a2 != 0) {
        var_a1 = temp_a0 & 0x1FFF;
        var_v0_2 = var_a1 - 0x2000;
    } else {
        var_a1 = temp_a0 & 0x1FFF;
        var_v0_2 = var_a1;
    }
    var_a0 = var_v0_2 < 0
        ? -(temp_a2 ? var_a1 - 0x2000 : var_a1)
        : (temp_a2 ? var_a1 - 0x2000 : var_a1);
    if (var_a0 < (*(s16 *)(var_v1 + 0x310) / 2)) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802243B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_8022474C.s")

struct func_80224B64_Inner {
    u8 pad0[0x9C];
    u8 unk9C;
};
struct func_80224B64_Outer {
    u8 pad0[0x5C];
    struct func_80224B64_Inner *unk5C;
};

extern s32 func_8022474C(s32, s16);

s32 func_80224AC4(s32 arg0, u8 arg1)
{
  s32 var_a0;
  s32 var_v0;
  s16 angle;
  struct func_80224B64_Inner *var_v1;
  if (arg0 != D_801BBBF0.unkDC)
  {
    var_v1 = ((struct func_80224B64_Outer *) D_801BBBF0.unkDC)->unk5C;
  }
  else
  {
    var_v1 = ((struct func_80224B64_Outer *) ((struct func_80224B64_Globals *) (&D_801BBBF0))->unkEC)->unk5C;
  }
  var_a0 = (arg0 == D_801BBBF0.unkDC) ? (0) : (0x1000);
  var_v0 = (arg1) ? (0x1000) : (0);
  angle = ((s16) ((var_v0 + (((struct func_80224B64_Globals *) (&D_801BBBF0))->unkB98 & 0xFFFFFFFFu)) + var_a0)) & 0x1FFF;
  if (var_v1->unk9C == 2)
  {
    return 0;
  }
  return func_8022474C(arg0, angle);
}





s32 func_802243B4(s32 arg0, s16 arg1);

s32 func_80224B64(s32 arg0) {
    struct func_80224B64_Inner *var_v1;
    s16 var_v0;
    s16 arg1;

    if (arg0 != ((struct func_80224B64_Globals *) &D_801BBBF0)->unkDC) {
        var_v1 = ((struct func_80224B64_Outer *) ((struct func_80224B64_Globals *) &D_801BBBF0)->unkDC)->unk5C;
    } else {
        var_v1 = ((struct func_80224B64_Outer *) ((struct func_80224B64_Globals *) &D_801BBBF0)->unkEC)->unk5C;
    }
    if (arg0 == ((struct func_80224B64_Globals *) &D_801BBBF0)->unkDC) {
        var_v0 = 0;
    } else {
        var_v0 = 0x1000;
    }
    arg1 = (s16) (((s16) (var_v0 + ((struct func_80224B64_Globals *) &D_801BBBF0)->unkB98)) & 0x1FFF);
    if (var_v1->unk9C == 2) {
        return 0;
    }
    return func_802243B4(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80224BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80224E00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80224F5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_8022518C.s")




s32 func_802253B8(s32 arg0) {
    if ((arg0 == D_801BBBF0.unkDC) && (D_801BBBF0.unk2C != 0xF)) {
        return 0;
    }
    if ((D_801BBBF0.unk2C == 0xA) || (D_801BBBF0.unk2C == 0xB)) {
        return 1;
    }
    return 0x80;
}


s32 func_80151870(s32);

s32 func_80225410(s32 arg0) {
    s32 temp_v0;
    s32 temp_a0;

    temp_v0 = func_802253B8(arg0);
    temp_a0 = temp_v0 & 0xFF;
    if (!(temp_v0 & 0x80)) {
        return func_80151870(temp_a0) & 0xFF;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225450.s")


s32 func_801518D4(s32, u8, u16);                    /* extern */

s32 func_802254F8(s32 arg0, u16 arg1, u8 arg2) {
    s32 temp_v0;

    temp_v0 = func_802253B8(arg0);
    if (!(temp_v0 & 0x80)) {
        return func_801518D4(temp_v0 & 0xFF, arg2, arg1) & 0xFF;
    }
    return 0;
}


extern void func_80225450(s32 a0, s32 a1);

void func_80225540(s32 a0) {
    func_80225450(a0, 0);
}


extern s32 *D_8023C8D0[];

s32 func_80225560(void *arg0, u8 arg1) {
    u8 *var_v1;

    var_v1 = *(u8 **)((u8 *)arg0 + 0x5C);
    arg1 = arg1;
    if (arg1 >= 0x26) {
        arg1 = 0;
    }
    return D_8023C8D0[var_v1[0x75]][arg1];
}



s32 func_8022559C(s32 arg0) {
    s32 *row;
    u16 var_v0;
    u8 var_a0;

    for (var_v0 = 0; var_v0 < 0xA; var_v0++) {
        row = (s32 *) D_8023C8D0[var_v0];
        for (var_a0 = 0; var_a0 < 0x26; var_a0++) {
            if (arg0 == row[var_a0]) {
                return var_a0;
            }
        }
    }
    return 0xFF;
}



s32 func_8022560C(u8 *arg0) {
    s32 *row;
    s32 var_a1;
    s32 val;

    row = (s32 *)D_8023C8D0[arg0[0x75]];
    val = *(s32 *)(arg0 + 0x1C);
    var_a1 = 0;
    do {
        if (val == row[var_a1]) {
            return var_a1;
        }
        var_a1 = (var_a1 + 1) & 0xFF;
    } while (var_a1 < 0x26);
    return 0xFF;
}



typedef struct func_80225664_Local {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_80225664_Local;


void *func_80225664(void *arg0, s32 arg1, s32 arg2) {
    func_80225664_Struct *var_v0;
    func_80225664_Local sp;

    if (arg1 == D_801BBCCC) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    sp.unk0 = arg2;
    sp.unk4 = 0;
    sp.unk8 = var_v0->unk10;
    sp.unk6 = 0;
    if (((u32) (var_v0->unk30 << 9) >> 0x1E) == 3) {
        sp.unk6 = 0x10;
    }
    *(func_80225664_Local *) arg0 = sp;
    return arg0;
}


void func_802256E4(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *unused;
  unused = &arg2;
 do { } while (0);
  func_80225664(arg0, arg1, func_80225560(arg1, arg2 ^ 0));
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802257F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225930.s")


extern f64 D_8023EFE0;
extern f64 D_8023EFE8;

struct func_80225A68_Struct {
    u8 pad0[0x68];
    f32 unk68;
    f32 unk6C;
    u8 pad70[4];
    u8 unk74;
};
struct func_80225A68_Arg {
    u8 pad0[0x5C];
    struct func_80225A68_Struct *unk5C;
};

u8 func_80225A68(struct func_80225A68_Arg *arg0) {
    struct func_80225A68_Struct *s = arg0->unk5C;
    if (s->unk74 == 0) {
        return 3;
    }
    if (s->unk68 < s->unk6C) {
        return (u32)(s->unk6C + D_8023EFE0);
    }
    return (u32)(s->unk68 + D_8023EFE8);
}


extern f64 D_8023EFF0;

typedef struct func_80225BF0_StructInner {
    u8 pad0[0x68];
    f32 unk68;
    u8 pad6C[0x74 - 0x6C];
    u8 unk74;
} func_80225BF0_StructInner;

typedef struct func_80225BF0_Struct {
    u8 pad0[0x5C];
    func_80225BF0_StructInner *unk5C;
} func_80225BF0_Struct;

s32 func_80225BF0(func_80225BF0_Struct *arg0) {
    func_80225BF0_StructInner *temp_v1;

    temp_v1 = arg0->unk5C;
    if (temp_v1->unk74 == 0) {
        return 3;
    }
    return (u32) ((f64) temp_v1->unk68 + D_8023EFF0) & 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225CB4.s")

struct func_80225F58_B { u8 pad[0x2C]; s32 unk2C; };
struct func_80225F58_A { u8 pad[0x24]; struct func_80225F58_B *unk24; u8 pad2[0x4C-0x28]; u8 unk4C; u8 pad3; u8 unk4E; };
extern s32 func_80225930(s32, s16, s16);
extern u8 func_80225CB4(struct func_80225F58_A *, f32);

s32 func_80225F58(struct func_80225F58_A *arg0, f32 arg1) {
    s32 sp2C;
    u8 sp2B;

    sp2C = arg0->unk24->unk2C;
    sp2B = arg0->unk4E;
    arg0->unk4E = func_80225CB4(arg0, arg1);
    arg0->unk4C = func_80225BF0((void *)arg0);
    if (func_80225930(sp2C, sp2B, arg0->unk4E) != 0) {
        return 2;
    }
    if (func_80225930(sp2C, -sp2B, (s16)-arg0->unk4E) != 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80226010.s")


extern s32 func_802257F4(s32, s16, s16);

struct func_802260C8_StructInner {
    u8 pad[0x2C];
    s32 unk2C;
};
struct func_802260C8_Struct {
    u8 pad[0x24];
    struct func_802260C8_StructInner *unk24;
    u8 pad28[0x4C - 0x28];
    u8 unk4C;
    u8 pad4D;
    u8 unk4E;
};

s32 func_802260C8(struct func_802260C8_Struct *arg0) {
    s32 inner;
    u8 first;
    u8 second;

    first = arg0->unk4C;
    second = arg0->unk4E;
    inner = arg0->unk24->unk2C;
    arg0->unk4E = first;
    arg0->unk4C = second;
    if (func_802257F4(inner, (s16) first, arg0->unk4C)) {
        return 1;
    }
    if (func_802257F4(inner, (s16) -first, (s16) -arg0->unk4C)) {
        return 2;
    }
    if (func_80225930(inner, (s16) second, arg0->unk4E)) {
        return 1;
    }
    if (func_80225930(inner, (s16) -second, (s16) -arg0->unk4E)) {
        return 2;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802261CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802264D0.s")


extern void func_802264D0(s32 a0, u16 a1);

void func_802266CC(s32 arg0, u16 arg1) {
    s32 var_a0;

    if (arg0 != D_801BBBF0.unkDC) {
        var_a0 = D_801BBBF0.unkDC;
    } else {
        var_a0 = ((struct func_80224B64_Globals *)&D_801BBBF0)->unkEC;
    }
    func_802264D0(var_a0, arg1);
}


typedef struct func_80226710_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_80226710_StructVec;

typedef struct func_80226710_StructC {
    u8 pad0[0x4];
    f32 x;
    f32 y;
    f32 z;
} func_80226710_StructC;

typedef struct func_80226710_StructB {
    u8 pad0[0x2C];
    func_80226710_StructC *unk2C;
} func_80226710_StructB;

typedef struct func_80226710_StructA {
    u8 pad0[0x24];
    func_80226710_StructB *unk24;
} func_80226710_StructA;

extern void func_801DC9C4(func_80226710_StructVec v, u16 w, f32 f);

void func_80226710(func_80226710_StructA *arg0, u16 arg1, f32 arg2) {
    func_80226710_StructC *temp_v0;
    func_80226710_StructVec sp20;

    temp_v0 = arg0->unk24->unk2C;
    sp20.x = temp_v0->x;
    sp20.y = temp_v0->y;
    sp20.z = temp_v0->z;
    func_801DC9C4(sp20, arg1, arg2);
}


typedef struct func_80226780_StructInner {
    u8 pad0[0x6C];
    u16 unk6C;
    u8 pad6E[0x70 - 0x6E];
    void *unk70;
} func_80226780_StructInner;

typedef struct func_80226780_StructTail {
    u8 pad0[0x74];
    u8 unk74;
} func_80226780_StructTail;

typedef struct func_80226780_StructOuter {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80226780_StructTail *unk5C;
} func_80226780_StructOuter;

extern u16 D_801BBC1C;
extern u8 D_8023C8F8[];

void func_80226780(func_80226780_StructOuter *arg0) {
    func_80226780_StructInner *temp_v0;
    func_80226780_StructTail *temp_v1;

    temp_v1 = arg0->unk5C;
    if ((D_801BBC1C != 0xA) && (temp_v1->unk74 == 3) && (arg0->unk36 == 0x11B)) {
        temp_v0 = func_80005670(arg0, D_8023C8F8);
        if (temp_v0 != NULL) {
            temp_v0->unk6C = 0;
            temp_v0->unk70 = arg0;
        }
    }
}


typedef struct func_802267E8_Bits {
    u32 a:1;
    u32 b:2;
    u32 pad:8;
    u32 c:2;
    u32 rest:19;
} func_802267E8_Bits;
void func_8022693C(s32 arg0, s32 arg1);

void func_802267E8(u8 *arg0, s32 arg1) {
    u16 *p;
    s32 pad;

    p = (u16 *)(arg0 + 0x6C);

    if (((D_801BCC21 >= 10) && (D_801BCC21 != 0xF)) || (*(s16 *)((u8 *)&D_801BC3D8 + 2) <= 0) || (((func_802267E8_Bits *)((u8 *)&D_801BC3D8 + 0x30))->b != 0) || (*(s16 *)((u8 *)&D_801BC03C + 2) <= 0) || (((func_802267E8_Bits *)((u8 *)&D_801BC03C + 0x30))->b != 0)) {
        func_800058DC(arg0, func_8022693C);
    }
    if (D_801BCC21 == 7) {
        u8 t;

        t = *((u8 *)&D_801BC03C + 0x2D9);
        if (t != 0xB && t != 0xD && t != 0xE && t != 0x12 && t != 0x11 && t != 0x14) {
            *(u16 *)(arg0 + 0x6C) = 0;
        }
    }
    if (D_801BCC21 == 5) {
        if (((func_802267E8_Bits *)((u8 *)&D_801BC3D8 + 0x30))->c == 0) {
            *p = *p + 1;
            if (*p >= 0x12D) {
                func_80226710(*(void **)(arg0 + 0xC), 0x507, 1.0f);
                *p = 0;
            }
        }
    }
}


extern void func_80005700(s32 arg0, s32 arg1);

void func_8022693C(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}


void func_8022695C(s32 arg0) {

}


void func_80226964(s32 arg0) {

}


void func_8022696C(void) {
}

