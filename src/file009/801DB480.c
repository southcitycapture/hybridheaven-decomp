#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DB480/func_801DB480.s")


typedef struct func_801DB6B8_StructA {
    u8 pad[0x10];
    f32 unk10;
    u8 pad2[0x1C];
    u32 unk30;
} func_801DB6B8_StructA;

void func_801DB480(s32 arg0, s32 arg1, f32 arg2, s32 arg3);
extern s32 D_801BBCCC;
extern func_801DB6B8_StructA D_801BC03C;
extern func_801DB6B8_StructA D_801BC3D8;

void func_801DB6B8(s32 arg0, s32 arg1, u8 arg2) {
    func_801DB6B8_StructA *var_v0;
    s32 var_a3;
    f64 var_dbl;
    f32 var_fv0;

    if (arg0 == D_801BBCCC) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    if (arg2) {
        var_fv0 = (f32) (f64) var_v0->unk10;
    } else {
        var_dbl = 1.0;
        var_fv0 = (f32) var_dbl;
    }
    if (((u32) (var_v0->unk30 << 9) >> 0x1E) == 3) {
        var_a3 = 1;
    } else {
        var_a3 = 0;
    }
    func_801DB480(arg0, arg1, var_fv0, var_a3);
}


void func_801DB74C(f32 arg0, f32 *arg1, f32 *arg2) {
    if (*arg1 < arg0) {
        *arg1 = arg0;
        return;
    }
    if (arg0 < *arg2) {
        *arg2 = arg0;
    }
}

#define func_801DB868_StructObj func_801DB868_StructObj__func_801DB788
#define func_801DB868_StructVec func_801DB868_StructVec__func_801DB788
typedef struct func_801DB868_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_801DB868_StructVec;
typedef struct func_801DB868_StructObj {
    u8 pad[0xC];
    u16 unkC;
    u8 pad2[0x74 - 0xE];
    u8 unk74;
    u8 pad3[0xB0 - 0x75];
    func_801DB868_StructVec unkB0;
    func_801DB868_StructVec unkBC;
    func_801DB868_StructVec unkC8;
    func_801DB868_StructVec unkD4;
} func_801DB868_StructObj;

void func_801DB788(func_801DB868_StructVec arg0, func_801DB868_StructObj *arg1, f32 arg2, f32 arg3, s32 arg4)
{
  f32 sp2C;
  f32 sp28;
  f32 sp24;
  f32 sp20;
  u8 *p = (u8 *) arg1;
  sp2C = arg0.x - (*((f32 *) (p + 0xA4)));
  sp28 = arg0.z - (*((f32 *) (p + 0xAC)));
  sp24 = (sp2C * arg3) + (sp28 * arg2);
  func_801DB74C(sp24, (f32 *) (p + 0xB0), (f32 *) (p + 0xBC));
  sp20 = ((-sp2C) * arg2) + (sp28 * arg3);
  sp2C = sp24;
  func_801DB74C(sp20, (f32 *) (p + 0xB8), (f32 *) (p + 0xC4));
  if (((u8) arg4) != 0)
  {
    func_801DB74C(arg0.y, (f32 *) (p + 0xCC), (f32 *) (p + 0xD8));
    func_801DB74C(sp2C, (f32 *) (p + 0xC8), (f32 *) (p + 0xD4));
    func_801DB74C(sp20, (f32 *) (p + 0xD0), (f32 *) (p + 0xDC));
  }
}
#undef func_801DB868_StructObj
#undef func_801DB868_StructVec


typedef struct func_801DB868_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_801DB868_StructVec;

typedef struct func_801DB868_StructModel {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[0xA4 - 0x14];
    func_801DB868_StructVec unkA4;
} func_801DB868_StructModel;

typedef struct func_801DB868_StructElem {
    u8 pad[0x18];
    s32 unk18;
    s32 unk1C;
    u8 pad2[2];
    u8 unk22;
    u8 pad3[0x2C - 0x23];
    func_801DB868_StructModel *unk2C;
} func_801DB868_StructElem;

typedef struct func_801DB868_StructObj {
    u8 pad[0xC];
    u16 unkC;
    u8 pad2[0x74 - 0xE];
    u8 unk74;
    u8 pad3[0xB0 - 0x75];
    func_801DB868_StructVec unkB0;
    func_801DB868_StructVec unkBC;
    func_801DB868_StructVec unkC8;
    func_801DB868_StructVec unkD4;
} func_801DB868_StructObj;

typedef struct func_801DB868_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 pad2[0x1031 - 0xE0];
    u8 unk1031;
} func_801DB868_StructGlobal;

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
s32 func_80126944(void);
void func_8013A334(func_801DB868_StructVec *, func_801DB868_StructElem **, func_801DB868_StructObj *, u16);
#define func_801DB788 func_801DB788__decl102
void func_801DB788(func_801DB868_StructVec, func_801DB868_StructObj *, f32, f32, s32);
void func_802261CC(s32, func_801DB868_StructElem **);
extern func_801DB868_StructGlobal D_801BBBF0;

void func_801DB868(func_801DB868_StructElem **arg0, func_801DB868_StructObj *arg1) {
    func_801DB868_StructVec v;
    f32 c;
    f32 s;
    s16 angle;
    s32 i;
    s32 flag;
    u8 *p;
    s32 id;
    s16 raw;
    s32 pad;

    raw = arg0[0]->unk2C->unk12;
    angle = -raw;
    c = func_8001EAD0(angle);
    s = func_8001EB64(angle);
    arg1->unkB0.x = arg1->unkB0.y = arg1->unkB0.z = 0.0f;
    arg1->unkD4 = arg1->unkC8 = arg1->unkBC = arg1->unkB0;
    for (i = 7; i < arg1->unkC; i++) {
        if (arg0[i]->unk22 != 0) {
            if (arg0[i]->unk1C == 0) {
                arg1->unkB0.x = arg1->unkB0.y = arg1->unkB0.z = 0.0f;
                arg1->unkD4 = arg1->unkC8 = arg1->unkBC = arg1->unkB0;
                return;
            }
            func_8013A334(&v, arg0, arg1, i);
            if (i == 9 || i == 12 || i == 15 || i == 18 || i == 19 || i == 20 || i == 21) {
                flag = 0;
            } else {
                flag = 1;
            }
            func_801DB788(v, arg1, c, s, flag);
        }
    }
    func_8013A334(&v, arg0, arg1, 26);
    func_801DB788(v, arg1, c, s, 1);
    func_8013A334(&v, arg0, arg1, 27);
    func_801DB788(v, arg1, c, s, 1);
    v = arg0[9]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 0);
    v = arg0[12]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 0);
    v = arg0[15]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 0);
    v = arg0[18]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 0);
    v = arg0[6]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 1);
    v = arg0[1]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 1);
    if (arg1->unkC >= 24) {
        v = arg0[24]->unk2C->unkA4;
        func_801DB788(v, arg1, c, s, 0);
    }
    if (func_80126944() == 1 && arg1->unk74 != 4 && D_801BBBF0.unk1031 > 0 && D_801BBBF0.unk1031 < 14) {
        id = arg0[0]->unk18;
        if (id == D_801BBBF0.unkDC) {
            p = (u8 *)&D_801BC03C;
        } else {
            p = (u8 *)&D_801BC3D8;
        }
        p[0x392] = 6;
        func_802261CC(id, arg0);
    }
}
#undef func_801DB788


extern void *D_801E15B8[];

struct func_801DBE94_Inner {
    u8 pad[0x75];
    u8 unk75;
};

struct func_801DBE94_Struct {
    u8 pad[0x5C];
    struct func_801DBE94_Inner *unk5C;
};

s32 func_801DBE94(struct func_801DBE94_Struct *arg0, u8 arg1) {
    struct func_801DBE94_Inner *temp_v0;
    u8 var_v1;

    arg1 &= 0xFF;
    temp_v0 = arg0->unk5C;
    if (arg1 >= 3) {
        arg1 = 0;
    }
    var_v1 = temp_v0->unk75;
    if (var_v1 >= 0xA) {
        temp_v0->unk75 = 0;
        var_v1 = temp_v0->unk75;
    }
    return ((s32 *) D_801E15B8[var_v1])[arg1];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DB480/D_801E3BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DB480/func_801DBEE4.s")

