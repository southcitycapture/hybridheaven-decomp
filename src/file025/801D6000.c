#include "common.h"


extern void func_8013B570(s32, s32, s32, s32, s32);
extern s32 D_801DB880;
extern s32 D_801DB89C;
extern s32 D_801DB8A0;
extern s32 D_801DB8A8;
extern s32 D_801DB884;
extern s32 D_801E16F0;
extern void func_801D606C();

void func_801D6000(s32 arg0, s32 arg1) {
    D_801E16F0 = arg0;
    D_801DB89C = 0;
    D_801DB8A0 = 0;
    D_801DB8A8 = 1;
    D_801DB880 = 0;
    D_801DB884 = 0;
    func_8013B570(arg0, 0x36, 0, 4, (s32)func_801D606C);
}


struct func_801D606C_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_801D60C8();

void func_801D606C(struct func_801D606C_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x36, 0);
        func_800058DC(arg0, func_801D60C8);
        return;
    }
    func_800058DC(arg0, func_801D606C);
}

extern u8 D_801E16F8;
/* starting point: func_801D5C18 (file025), whose assembly is 97% the same as this function's */

struct func_801D60C8_Struct { s32 a; s32 b; s32 c; };
struct func_801D60C8_StructF { s32 a; s32 b; f32 c; };
struct func_801D60C8_Obj { u8 pad[0x5C]; u8 *unk5C; };

extern s32 func_801CC540();
extern void func_80006214(void *);
extern s32 func_80010550(s32, void *);
extern s32 func_80011140(s32, void *, struct func_801D60C8_Struct, u32);
extern void func_8013A28C(void *, struct func_801D60C8_Struct);
extern void func_801D63E0(void *);
extern void func_801D6514(void *);
extern u8 D_8008DA88[];
extern u8 D_801D60C8[];
extern u8 D_801BC025[];

void func_801D60C8(struct func_801D60C8_Obj *arg0, s32 arg1) {
    struct func_801D60C8_StructF *p;
    u8 *q;

    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D60C8);
        return;
    }
    if (D_801DB89C != 0) {
        func_80006214(arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D60C8_Struct *)D_801DB89C);
        q = arg0->unk5C;
        q[0x76] = 1;
        D_801DB89C = 0;
    }
    p = (struct func_801D60C8_StructF *)D_801DB8A0;
    if (p != 0) {
        if (func_80011140(arg1, arg0->unk5C, *(struct func_801D60C8_Struct *)p, (u32)p->c) != 0) {
            D_801DB8A0 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->unk5C) != 0) {
            D_801DB8A8 = 1;
        } else {
            D_801DB8A8 = 0;
        }
        *(struct func_801D60C8_Struct *)&D_801E16F8 = *(struct func_801D60C8_Struct *)(D_801BC025 + 3);
    }
    if (D_801DB880 != 0) {
        func_801D63E0(arg0);
    }
    if (D_801DB884 != 0) {
        func_801D6514(arg0);
    }
}



s32 func_801D62C0(void) {
    return D_801DB8A0 != 0;
}



s32 func_801D62D0(void) {
    if (D_801DB8A0 != 0) {
        return 0;
    }
    if (D_801DB89C != 0) {
        return 0;
    }
    return D_801DB8A8;
}


u8 *func_801D6310(void) {
    return &D_801E16F8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6000/func_801D631C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6000/func_801D637C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6000/func_801D63E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6000/func_801D6514.s")

