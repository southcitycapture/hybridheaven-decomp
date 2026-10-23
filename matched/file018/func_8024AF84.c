#include "context.h"

typedef struct func_8024AF84_StructIn {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_8024AF84_StructIn;
typedef struct func_8024AF84_StructObj {
    u8 pad0[0x30];
    func_8024AF84_StructIn *unk30;
} func_8024AF84_StructObj;
typedef struct func_8024AF84_StructA0 {
    u8 pad0[0x44];
    f32 unk44;
    u8 pad48[0x92 - 0x48];
    s16 unk92;
    s16 unk94;
    u8 pad96[4];
    s16 unk9A;
} func_8024AF84_StructA0;
typedef struct func_8024AF84_StructG {
    u8 pad0[0xE0];
    struct { u8 pad0[0x2C]; func_8024AF84_StructIn *unk2C; } *unkE0;
} func_8024AF84_StructG;

typedef struct func_8024AF84_StructA1 {
    func_8024AF84_StructObj *objs[11];
} func_8024AF84_StructA1;

void func_8024AF84(func_8024AF84_StructA0 *arg0, func_8024AF84_StructA1 *arg1) {
    func_8024AF84_StructIn *x;
    s32 i;

    i = 6;
loop:
    i++;
    x = arg1->objs[i - 1]->unk30;
    x->unk4C -= 0x1E;
    x = arg1->objs[i - 1]->unk30;
    x->unk4E += 0x1E;
    if (i < 11) goto loop;
    if (arg0->unk9A == 0) {
        D_8025C71C = arg1->objs[0]->unk30->unk4;
        D_8025C720 = arg1->objs[0]->unk30->unk8;
        D_8025C724 = arg1->objs[0]->unk30->unkC;
    }
    if (0.0f < arg0->unk44) {
        if (!(arg0->unk94++ & 1)) {
            i = arg0->unk92;
            func_8012C89C(arg0, i, 3, 4);
            arg1->objs[i]->unk30->unk24 = 0x60300;
            arg1->objs[i]->unk30->unk30 = (u32)D_80258FE0 | 0x40000000;
            func_800062F8(arg1->objs[i], 0x80000600);
            func_8012D8C8(arg0, 0x3D0, 7, 0x3EE66666, 2, i);
            arg1->objs[i]->unk30->unk18 = 0.5f;
            arg1->objs[i]->unk30->unk1C = 0.5f;
            arg1->objs[i]->unk30->unk20 = 0.5f;
            arg1->objs[i]->unk30->unk48 = 0xFF;
            arg1->objs[i]->unk30->unk49 = 0xFF;
            arg1->objs[i]->unk30->unk4A = 0xFF;
            arg1->objs[i]->unk30->unk4B = 0xFF;
            arg1->objs[i]->unk30->unk4C = 0xFF;
            arg1->objs[i]->unk30->unk4D = 0;
            arg1->objs[i]->unk30->unk4E = 0;
            arg1->objs[i]->unk30->unk4 = arg1->objs[0]->unk30->unk4;
            arg1->objs[i]->unk30->unk8 = arg1->objs[0]->unk30->unk8;
            arg1->objs[i]->unk30->unkC = arg1->objs[0]->unk30->unkC;
            arg0->unk92 = arg0->unk92 + 1;
            if (arg0->unk92 == 0xB) {
                arg0->unk92 = 2;
            }
        }
    } else {
        if (D_8025C7E8 != 0) {
            arg1->objs[1]->unk30->unk4 = 0.0f;
            arg1->objs[1]->unk30->unk8 = 200.0f;
            arg1->objs[1]->unk30->unkC = (f32)(arg0->unk9A * 0x28);
            arg1->objs[1]->unk30->unk10 = 0x1800;
            arg1->objs[1]->unk30->unk12 = 0;
            arg1->objs[1]->unk30->unk14 = 0;
        } else {
            arg1->objs[1]->unk30->unk4 = ((func_8024AF84_StructG *)&D_801BBBF0)->unkE0->unk2C->unk4;
            arg1->objs[1]->unk30->unk8 = 200.0f;
            arg1->objs[1]->unk30->unkC = ((func_8024AF84_StructG *)&D_801BBBF0)->unkE0->unk2C->unkC;
            arg1->objs[1]->unk30->unk10 = 0x1800;
            arg1->objs[1]->unk30->unk12 = 0;
            arg1->objs[1]->unk30->unk14 = 0;
        }
        func_80248D34((void *)arg0);
        func_800058DC(arg0, func_8024B2FC);
    }
}
