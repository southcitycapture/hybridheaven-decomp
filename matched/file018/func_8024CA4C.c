#include "common.h"
extern u8 D_80258FE0[];
extern s32 func_800062F8(void *, s32);
extern s32 func_8012C6B4(s32);
s32 func_80245010(s32 arg0);
typedef struct func_802474E4_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_802474E4_StructNode;
typedef struct func_80248E34_StructB {
    u8 pad0[0x30];
    func_802474E4_StructNode *unk30;
} func_80248E34_StructB;
typedef struct func_80248E34_StructA {
    u8 pad0[0x24];
    func_80248E34_StructB *unk24;
} func_80248E34_StructA;
void func_80248E34(func_80248E34_StructA *arg0);


typedef struct func_8024CA4C_Sub {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    s16 f10;
    s16 f12;
    s16 f14;
    u8 pad16[2];
    f32 f18;
    f32 f1C;
    f32 f20;
    s32 f24;
    u8 pad28[8];
    s32 f30;
    u8 pad34[0x14];
    u8 b48;
    u8 b49;
    u8 b4A;
    u8 b4B;
    u8 b4C;
    u8 b4D;
    u8 b4E;
} func_8024CA4C_Sub;

typedef struct func_8024CA4C_Obj {
    u8 pad0[0x30];
    func_8024CA4C_Sub *p;
} func_8024CA4C_Obj;

typedef struct func_8024CA4C_Arg0 {
    u8 pad0[0x92];
    s16 s92;
    s16 s94;
    s16 s96;
} func_8024CA4C_Arg0;

extern void D_8012C89C(void *, s32, s32, s32);
extern void D_8012D8C8(void *, s32, s32, f32, s32, s32);

void func_8024CA4C(func_8024CA4C_Arg0 *arg0, func_8024CA4C_Obj **arg1) {
    s32 i;

    if (func_80245010((s32)arg0) != 0) {
        return;
    }
    func_80248E34((void *)arg0);
    if (arg1[0]->p->b4B >= 0x11) {
        arg1[0]->p->f18 = arg1[0]->p->f18 + 0.005;
        arg1[0]->p->f1C = arg1[0]->p->f1C + 0.005;
        arg1[0]->p->f20 = arg1[0]->p->f20 + 0.005;
        arg1[0]->p->b4B -= 8;
        arg1[0]->p->f12 -= 0x300;
    } else {
        arg1[0]->p->b4B = 0;
    }
    if (arg1[2]->p->b4B >= 0x11) {
        arg1[2]->p->f18 = arg1[2]->p->f18 + 0.01;
        arg1[2]->p->f1C = arg1[2]->p->f1C + 0.01;
        arg1[2]->p->f20 = arg1[2]->p->f20 + 0.01;
        arg1[2]->p->b4B -= 8;
        arg1[2]->p->f10 = 0;
        arg1[2]->p->f12 += 0x800;
        arg1[2]->p->f14 = 0;
    } else {
        arg1[2]->p->b4B = 0;
    }
    if (arg0->s94++ % 3 == 0) {
        i = arg0->s96;
        D_8012C89C(arg0, i, 3, 4);
        D_8012D8C8(arg0, 0x3D0, 7, i * 1e-2, 2, i);
        arg1[i]->p->f24 = 0x60300;
        arg1[i]->p->f30 = (s32)D_80258FE0 | 0x40000000;
        func_800062F8(arg1[i], 0x800005FF);
        arg1[i]->p->f18 = 0.4f;
        arg1[i]->p->f1C = 0.4f;
        arg1[i]->p->f20 = 0.4f;
        arg1[i]->p->b48 = 0xFF;
        arg1[i]->p->b49 = 0xFF;
        arg1[i]->p->b4A = 0xFF;
        arg1[i]->p->b4B = arg1[3]->p->b4B;
        arg1[i]->p->b4C = 0xFF;
        arg1[i]->p->b4D = 0;
        arg1[i]->p->b4E = 0;
        arg1[i]->p->f4 = arg1[1]->p->f4 + ((f32)func_8012C6B4(200) - 100.0) / 5.0;
        arg1[i]->p->f8 = (arg1[1]->p->f8 + 10.0f) + ((f32)func_8012C6B4(200) - 100.0) / 5.0 + 40.0;
        arg1[i]->p->fC = arg1[1]->p->fC + ((f32)func_8012C6B4(200) - 100.0) / 5.0;
        arg0->s96 += 1;
        if (arg0->s96 == 0xB) {
            arg0->s96 = 6;
        }
    }
    if (arg0->s92-- == 0) {
        arg0->s92 += 1;
        arg1[5]->p->f18 = arg1[5]->p->f18 - (arg1[5]->p->f18 - 1.26) / 30.0;
        arg1[5]->p->f1C = arg1[5]->p->f1C - (arg1[5]->p->f1C - 0.525) / 30.0;
        arg1[5]->p->f8 = (142.0 - arg1[5]->p->f8) / 30.0 + arg1[5]->p->f8;
        arg1[5]->p->b4B = 0xFF;
        return;
    }
    if (arg0->s92 < 0x38) {
        if (arg1[5]->p->f1C < 2.0) {
            arg1[5]->p->f1C = arg1[5]->p->f1C + 0.2;
            arg1[5]->p->f18 = arg1[5]->p->f18 + 0.2;
        }
    }
    if (arg0->s92 == 0x38) {
        D_8012C89C(arg0, 5, 0x3D0, 0xB);
        D_8012D8C8(arg0, 0x3D0, 0xA, 0.5f, 1, 5);
        arg1[5]->p->f24 = 0x80300;
        arg1[5]->p->f30 = (s32)D_80258FE0 | 0x40000000;
        func_800062F8(arg1[5], 0x80000600);
        arg1[5]->p->f18 = 0.2f;
        arg1[5]->p->f1C = 0.0f;
        arg1[5]->p->f20 = 0.2f;
        arg1[5]->p->b48 = 0xFF;
        arg1[5]->p->b49 = 0xFF;
        arg1[5]->p->b4A = 0xFF;
        arg1[5]->p->b4B = 0xFF;
        arg1[5]->p->b4C = 0xFF;
        arg1[5]->p->b4D = 0;
        arg1[5]->p->b4E = 0xFF;
        arg1[5]->p->f4 = arg1[1]->p->f4;
        arg1[5]->p->f8 = arg1[1]->p->f8;
        arg1[5]->p->fC = arg1[1]->p->fC;
    }
}
