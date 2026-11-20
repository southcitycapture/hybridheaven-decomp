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
extern func_802474E4_StructMid *D_801BBCD0;
extern u8 *D_8025C6F0;
extern u32 D_8025C708;
extern s32 func_8012A564(void *, s32);
extern void func_8012A7F4(void *, f32, f32, s32);

extern void func_8012AEE0(void *, s32);
extern f32 D_8025C70C;
extern f32 D_8025C710;
extern f32 D_8025C714;
extern f32 D_8025C718;

typedef struct func_80248B4C_StructN {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80248B4C_StructN;
typedef struct func_80248B4C_StructM {
    u8 pad0[0x30];
    func_80248B4C_StructN *unk30;
} func_80248B4C_StructM;
typedef struct func_80248B4C_StructA {
    u8 pad0[0x24];
    func_80248B4C_StructM *unk24;
    u8 pad28[0x18];
    f32 unk40;
    u8 pad44[0x4];
    f32 unk48;
} func_80248B4C_StructA;
typedef struct func_80248B4C_StructO {
    u8 pad0[0x22];
    u8 unk22;
} func_80248B4C_StructO;

void func_80248B4C(func_80248B4C_StructA *arg0, func_80248B4C_StructO **arg1) {
    if (D_8025C6F0 != 0) {
        if (func_8012A564(arg0, 0x41A00000) == 0) {
            func_802474E4_StructNode *n = D_801BBCD0->unk2C;
            func_8012A7F4(arg0, n->unk4, n->unkC, 0x100);
            func_8012AEE0(arg0, 0x40400000);
        }
        if (func_8012A564(arg0, 0x40A00000) != 0) {
            arg0->unk40 = 0.0f;
            arg0->unk48 = 0.0f;
        }
        if (arg0->unk24->unk30->unk4 <= -390.0f) {
            arg0->unk24->unk30->unk4 = -390.0f;
        }
        if (arg0->unk24->unk30->unk4 >= 390.0f) {
            arg0->unk24->unk30->unk4 = 390.0f;
        }
        if (arg0->unk24->unk30->unkC >= 390.0f) {
            arg0->unk24->unk30->unkC = 390.0f;
        }
        if (arg0->unk24->unk30->unkC <= -390.0f) {
            arg0->unk24->unk30->unkC = -390.0f;
        }
        D_8025C70C = arg0->unk24->unk30->unk4;
        D_8025C710 = arg0->unk24->unk30->unk8;
        D_8025C714 = arg0->unk24->unk30->unkC;
        D_8025C718 = (f32)arg0->unk24->unk30->unk12;
    } else {
        (*arg1)->unk22 = 0;
    }
    if (D_8025C708 != 0) {
        (*arg1)->unk22 = 1;
        return;
    }
    (*arg1)->unk22 = 0;
}
