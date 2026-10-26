#include "context.h"

typedef struct func_801ED14C_Struct0 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801ED14C_Struct0;

extern u8 *D_801DAB14;
extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern void func_801C0D04(s32, s32);
extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern s32 D_801F488C;
extern void func_8038D33C(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5);
extern s32 func_801D27D8(s32, s32);
extern f32 D_801F5998;
extern f32 D_801F599C;
extern u8 D_801F5A6C[];
extern u8 D_801F5A70[];

#define FUNC_801ED14C_OBJ ((func_801ED14C_Struct0 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 8) + 8) + 8) + 0x24) + 0x2C)))

s32 func_801ED14C(s32 arg0, s32 arg1) {
    extern s32 func_801D277C();
    func_801ED14C_Struct0 *p;
    f32 n;
    f32 d;

    if (D_801F488C == 0) goto case0;
    if (D_801F488C == 1) goto case1;
    if (D_801F488C == 2) goto case2;
    if (D_801F488C == 3) goto case3;
    return 9;
case0:
    if (func_801C0DE4(4, 2, 0x3F000000) != 0) {
        func_801C0EB0(4, 2);
        D_801F488C = 1;
    }
    d = 0.5f;
    n = (f32)(u32)(d * 30.0f);
    p = FUNC_801ED14C_OBJ;
    p->unk12 += -86.0f / n;
    goto end;
case1:
    p = FUNC_801ED14C_OBJ;
    d = (f32)2.0;
    n = (f32)(u32)(d * (f32)30.0);
    *(f32 *)D_801F5A6C = (31.5f - p->unk4) / n;
    *(f32 *)D_801F5A70 = (D_801F5998 -p->unkC) / n;
    func_801C0D04(4, 2);
    D_801F488C = 2;
    goto end;
case2:
    if (func_801C0DE4(4, 2, 0x40000000) != 0) {
        func_801C0EB0(4, 2);
        func_801CC4D8(2, 0x03200000, 0, 0, 15.0f);
        D_801F488C = 3;
    }
    FUNC_801ED14C_OBJ->unk4 += *(f32 *)D_801F5A6C;
    FUNC_801ED14C_OBJ->unkC += *(f32 *)D_801F5A70;
    if (func_801D27D8(0x01680003, 0x14) != 0 || func_801D27D8(0x01680003, 0x28) != 0) {
        p = FUNC_801ED14C_OBJ;
        func_8038D33C(p->unk4, p->unk8, *(s32 *)&p->unkC, 0x663, D_801F599C, 1.0f);
    }
    goto end;
case3:
    if (func_801D277C() == 0) {
        return 10;
    }
end:
    return 9;
}

#undef FUNC_801ED14C_OBJ
