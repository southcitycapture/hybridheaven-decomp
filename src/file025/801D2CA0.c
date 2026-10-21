#include "common.h"


extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern s32 D_801DB334;
extern s32 D_801DB338;
extern s32 D_801DB33C;
extern void func_801D2CF4();

void func_801D2CA0(s32 arg0, s32 arg1) {
    D_801DB334 = 0;
    D_801DB338 = 0;
    D_801DB33C = 1;
    func_8013B570(arg0, 0x2F, 0, 4, &func_801D2CF4);
}

struct func_801D2CF4_Struct { u8 pad[0x24]; s32 unk24; };
extern void func_801D2D3C();
extern u8 D_801D2CF4[];

void func_801D2CF4(struct func_801D2CF4_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_800058DC(arg0, (void (*)(void))func_801D2D3C);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D2CF4);
}

extern u8 D_801E1460;
struct func_801D2F8C_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801D2F8C_Struct D_801E1470;
/* starting point: func_801D6D98 (file025), whose assembly is 97% the same as this function's */

struct func_801D2D3C_StructA { s32 a, b, c; };
struct func_801D2D3C_StructB { s32 a, b; f32 c; };
struct func_801D2D3C_StructP { u8 pad[0x5C]; s32 u5C, u60, u64; };
struct func_801D2D3C_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D2D3C_StructR { u8 pad[4]; struct func_801D2D3C_StructS *u4; };
struct func_801D2D3C_StructS { u8 pad[0x2C]; struct func_801D2D3C_StructP *u2C; };
struct func_801D2D3C_StructT { u8 pad[0x5C]; struct func_801D2D3C_StructQ *u5C; };
void func_80006214();
extern s32 func_801CC540();
extern s32 func_80010550(void *, void *);
extern s32 func_80011140(void *, void *, struct func_801D2D3C_StructB, u32);
extern void func_8013A28C(void *, struct func_801D2D3C_StructA);
extern u8 D_8008DA88[];
extern u8 D_801D2D3C[];
extern u8 D_801BC025[];

void func_801D2D3C(struct func_801D2D3C_StructT *arg0, struct func_801D2D3C_StructR *arg1) {
    struct func_801D2D3C_StructB *p;
    struct func_801D2D3C_StructQ *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, D_801D2D3C);
        return;
    }
    if (D_801DB334 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D2D3C_StructA *)D_801DB334);
        q = arg0->u5C;
        q->u76 = 1;
        D_801DB334 = 0;
    }
    p = (struct func_801D2D3C_StructB *)D_801DB338;
    if (p != 0) {
        if (func_80011140(arg1, arg0->u5C, *p, (u32)p->c) != 0) {
            D_801DB338 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->u5C) != 0) {
            D_801DB33C = 1;
        } else {
            D_801DB33C = 0;
        }
        *(struct func_801D2D3C_StructA *)&D_801E1470 = *(struct func_801D2D3C_StructA *)&arg1->u4->u2C->u5C;
        *(struct func_801D2D3C_StructA *)&D_801E1460 = *(struct func_801D2D3C_StructA *)&D_801BC025[3];
    }
}



s32 func_801D2F30(void) {
    return D_801DB338 != 0;
}



s32 func_801D2F40(void) {
    if (D_801DB338 != 0) {
        return 0;
    }
    if (D_801DB334 != 0) {
        return 0;
    }
    return D_801DB33C;
}


u8 *func_801D2F80(void) {
    return &D_801E1460;
}




s32 func_801D2F8C(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1470.unk0) {
        return 0;
    }
    return D_801E1470.unk4 == arg1;
}

