#include "common.h"
typedef struct func_802474E4_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_802474E4_StructNode;
typedef struct func_802474E4_StructMid {
    u8 pad0[0x2C];
    func_802474E4_StructNode *unk2C;
} func_802474E4_StructMid;
extern struct func_802474E4_StructMid *D_801BBCD0;
extern u8 D_80258FE0[];
typedef struct func_80249A58_StructTbl {
    u8 unk0;
    u8 pad1[0x13];
} func_80249A58_StructTbl;
extern struct func_80249A58_StructTbl D_8025C728[];
extern void func_80005700(void *);
extern s32 func_800062F8(void *, s32);
extern s32 func_8012C6B4(s32);
extern s32 func_8012C89C(void *, s32, s32, s32);
typedef struct func_802491C4_StructNode {
    u8 pad[4];
    f32 x, y;
    s32 z;
} func_802491C4_StructNode;
typedef struct func_802491C4_StructMid {
    u8 pad[0x30];
    func_802491C4_StructNode *node;
} func_802491C4_StructMid;
typedef struct func_802491C4_Struct {
    u8 pad[0x24];
    func_802491C4_StructMid *mid;
    u8 pad28[0x70];
    u16 kind;
} func_802491C4_Struct;
void func_802491C4(func_802491C4_Struct *arg0);
extern void func_8037BB4C(s16, f32, f32, s16);


typedef struct func_8024BCE4_Fx {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12, unk14;
    u8 pad16[2];
    f32 unk18, unk1C, unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E;
} func_8024BCE4_Fx;
typedef struct func_8024BCE4_Obj {
    u8 pad0[0x30];
    func_8024BCE4_Fx *unk30;
} func_8024BCE4_Obj;
typedef struct func_8024BCE4_A0 {
    u8 pad0[0x24];
    func_8024BCE4_Obj *unk24;
    u8 pad28[0x68];
    s16 unk90, unk92, unk94, unk96;
} func_8024BCE4_A0;
extern void D_8012D8C8(void *, s32, s32, f32, s32, s32);
typedef struct func_8024BCE4_Tbl {
    u8 unk0;
    u8 pad1[0x13];
} func_8024BCE4_Tbl;
extern const f64 D_8025C648;
extern const f64 D_8025C650;
extern const f64 D_8025C658;
extern const f64 D_8025C660;
extern const f64 D_8025C668;
extern const f64 D_8025C670;
extern const f64 D_8025C680;
extern const f64 D_8025C688;
extern const f32 D_8025C678;
extern const f32 D_8025C690;
extern s16 D_8025C7E2;
#define D_8025C648 0.4
#define D_8025C650 0.05
#define D_8025C658 0.005
#define D_8025C660 0.05
#define D_8025C668 0.01
#define D_8025C670 (0.02 / 2.0)
#define D_8025C680 (0.8 / 2.0)
#define D_8025C688 0.04
#define D_8025C678 0.1f
#define D_8025C690 0.2f

void func_8024BCE4(func_8024BCE4_A0 *arg0, func_8024BCE4_Obj **arg1) {
    s32 i;
    func_802491C4((func_802491C4_Struct *)arg0);
    if (arg1[1]->unk30->unk18 < D_8025C648) {
        arg1[1]->unk30->unk18 += D_8025C650;
        arg1[1]->unk30->unk1C += D_8025C650;
        arg1[1]->unk30->unk20 += D_8025C650;
    }
    arg1[0]->unk30->unk18 += D_8025C658;
    arg1[0]->unk30->unk1C += D_8025C658;
    arg1[0]->unk30->unk20 += D_8025C658;
    if (arg1[0]->unk30->unk4B >= 0x11) {
        arg1[0]->unk30->unk4B -= 0x10;
        arg1[0]->unk30->unk12 -= 0x300;
    } else {
        arg1[0]->unk30->unk4B = 0;
    }
    arg1[2]->unk30->unk18 += D_8025C668;
    arg1[2]->unk30->unk1C += D_8025C668;
    arg1[2]->unk30->unk20 += D_8025C668;
    if (arg1[2]->unk30->unk4B >= 0x11) {
        arg1[2]->unk30->unk4B -= 0x10;
        arg1[2]->unk30->unk10 = 0;
        arg1[2]->unk30->unk12 += 0x800;
        arg1[2]->unk30->unk14 = 0;
    } else {
        arg1[2]->unk30->unk4B = 0;
    }
    if (arg1[3]->unk30->unk18 < 3.0) {
        arg1[3]->unk30->unk18 += D_8025C660;
        arg1[3]->unk30->unk1C += D_8025C660;
        arg1[3]->unk30->unk20 += D_8025C660;
    }
    if (arg1[3]->unk30->unk4B >= 9) {
        arg1[3]->unk30->unk4B -= 7;
    } else {
        arg1[3]->unk30->unk4B = 0;
    }
    for (i = 6; i < 0xB; i++) {
        arg1[i]->unk30->unk8 -= 0.5;
    }
    if (arg0->unk94++ % 3 == 0) {
        i = arg0->unk96;
        func_8012C89C(arg0, i, 3, 4);
        D_8012D8C8(arg0, 0x3D0, 7, i * D_8025C670, 2, i);
        arg1[i]->unk30->unk24 = 0x60300;
        arg1[i]->unk30->unk30 = (s32)D_80258FE0 | 0x40000000;
        func_800062F8(arg1[i], 0x800005FF);
        arg1[i]->unk30->unk18 = D_8025C678;
        arg1[i]->unk30->unk1C = D_8025C678;
        arg1[i]->unk30->unk20 = D_8025C678;
        arg1[i]->unk30->unk48 = 0xFF;
        arg1[i]->unk30->unk49 = 0xFF;
        arg1[i]->unk30->unk4A = 0xFF;
        arg1[i]->unk30->unk4B = arg1[3]->unk30->unk4B;
        arg1[i]->unk30->unk4C = 0xFF;
        arg1[i]->unk30->unk4D = 0;
        arg1[i]->unk30->unk4E = 0;
        arg1[i]->unk30->unk4 = arg1[1]->unk30->unk4 + ((f32)func_8012C6B4(0xC8) - 100.0) / 5.0;
        arg1[i]->unk30->unk8 = (arg1[1]->unk30->unk8 + 10.0f) + ((f32)func_8012C6B4(0xC8) - 100.0) / 5.0;
        arg1[i]->unk30->unkC = arg1[1]->unk30->unkC + ((f32)func_8012C6B4(0xC8) - 100.0) / 5.0;
        arg0->unk96++;
        if (arg0->unk96 == 0xB) {
            arg0->unk96 = 6;
        }
    }
    if (arg0->unk92 == 0) {
        arg0->unk92++;
        if (arg1[5]->unk30->unk4B >= 0x21) {
            arg1[5]->unk30->unk4B -= 4;
            arg1[1]->unk30->unk4B -= 4;
        } else {
            arg1[1]->unk30->unk4B = 0;
            arg1[5]->unk30->unk4B = 0;
        }
        if ((D_801BBCD0->unk2C->unk4 - arg1[5]->unk30->unk4) * (D_801BBCD0->unk2C->unk4 - arg1[5]->unk30->unk4) +
            (D_801BBCD0->unk2C->unkC - arg1[5]->unk30->unkC) * (D_801BBCD0->unk2C->unkC - arg1[5]->unk30->unkC) < 100.0f) {
            func_8037BB4C(arg0->unk24->unk30->unk12, 2.0f, 2.0f, D_8025C7E2);
        }
    } else {
        arg0->unk92--;
        if (arg0->unk92 < 0x38) {
            if (arg1[5]->unk30->unk1C < D_8025C680) {
                arg1[5]->unk30->unk1C += D_8025C688;
            }
        }
        if ((D_801BBCD0->unk2C->unk4 - arg1[5]->unk30->unk4) * (D_801BBCD0->unk2C->unk4 - arg1[5]->unk30->unk4) +
            (D_801BBCD0->unk2C->unkC - arg1[5]->unk30->unkC) * (D_801BBCD0->unk2C->unkC - arg1[5]->unk30->unkC) < 400.0f) {
            func_8037BB4C(arg0->unk24->unk30->unk12, 2.0f, 2.0f, D_8025C7E2);
        }
        if (arg0->unk92 == 0x38) {
            func_8012C89C(arg0, 5, 0x3D0, 0xB);
            D_8012D8C8(arg0, 0x3D0, 0xA, 0.5f, 1, 5);
            arg1[5]->unk30->unk24 = 0x80300;
            arg1[5]->unk30->unk30 = (s32)D_80258FE0 | 0x40000000;
            func_800062F8(arg1[5], 0x80000600);
            arg1[5]->unk30->unk18 = D_8025C690;
            arg1[5]->unk30->unk1C = 0.0f;
            arg1[5]->unk30->unk20 = D_8025C690;
            arg1[5]->unk30->unk48 = 0xFF;
            arg1[5]->unk30->unk49 = 0xFF;
            arg1[5]->unk30->unk4A = 0xFF;
            arg1[5]->unk30->unk4B = 0xFF;
            arg1[5]->unk30->unk4C = 0xFF;
            arg1[5]->unk30->unk4D = 0;
            arg1[5]->unk30->unk4E = 0;
            arg1[5]->unk30->unk4 = arg1[1]->unk30->unk4;
            arg1[5]->unk30->unk8 = arg1[1]->unk30->unk8;
            arg1[5]->unk30->unkC = arg1[1]->unk30->unkC;
        }
    }
    if (arg1[5]->unk30->unk4B == 0) {
        func_80005700(arg0);
        ((func_8024BCE4_Tbl *)D_8025C728)[arg0->unk90].unk0 = 0;
    }
}
