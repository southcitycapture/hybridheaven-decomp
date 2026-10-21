#include "context.h"

typedef struct func_8024CA74_In {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x38];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_8024CA74_In;
typedef struct func_8024CA74_Obj {
    u8 pad0[0x30];
    func_8024CA74_In *unk30;
} func_8024CA74_Obj;
typedef struct func_8024CA74_K {
    u8 pad0[0x5C];
    s32 unk5C;
} func_8024CA74_K;
typedef struct func_8024CA74_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0x3];
    func_8024CA74_K *unk94;
    u8 pad98[0xE];
    u16 unkA6;
} func_8024CA74_Struct;

extern void func_80006214(void *);
extern void func_8013A334(f32 *, void *, s32, u8);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 D_8008DA88[];
extern s32 D_80006214(void *);
extern f32 D_8025D030;

void func_8024CA74(func_8024CA74_Struct *arg0, func_8024CA74_Obj **arg1) {
    s32 flag;
    f32 v[3];
    f32 sp4C;
    s32 pad1;
    s32 pad2;
    f32 zero;
    f32 sp3C;
    f32 sp38;
    func_8024CA74_In *p;
    extern s32 func_8012C6B4();

    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    func_80006214(arg0->unk94);
    func_8013A334(v, D_8008DA88, arg0->unk94->unk5C, arg0->unk90);
    D_80006214(arg0);
    (*arg1)->unk30->unk4 = v[0];
    (*arg1)->unk30->unk8 = v[1] + 4.0;
    (*arg1)->unk30->unkC = v[2];
    flag = arg0->unk90 == (arg0->unkA6 % 32);
    arg0->unkA6++;
    if (flag) {
        sp4C = func_8012C6B4(0x2000);
        sp3C = func_8001EAD0((s16)sp4C);
        sp38 = func_8001EB64((s16)sp4C);
        p = (*arg1)->unk30;
        zero = 0.0f;
        func_80380F94((f64)sp3C + (f64)p->unk4, p->unk8, (f64)sp38 + (f64)p->unkC, zero, D_8025D030, zero, 5);
    }
    if (func_80133A24(0x132) != 0) {
        (*arg1)->unk30->unk4B -= 2;
        if ((*arg1)->unk30->unk4B < 0x14) {
            func_80005700(arg0);
        }
    } else {
        p = (*arg1)->unk30;
        if (p->unk4B < 0xC4) {
            p->unk4B += 4;
        }
    }
}
