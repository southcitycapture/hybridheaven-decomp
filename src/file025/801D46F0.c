#include "common.h"


extern void func_8013B570(s32, s32, s32, s32, s32);
extern s32 D_801DB590;
extern s32 D_801DB5A8;
extern s32 D_801DB5AC;
extern s32 D_801DB5B4;
extern s32 D_801DB5B8;
extern s32 D_801E1600;
extern void func_801D475C();

void func_801D46F0(s32 arg0, s32 arg1) {
    D_801E1600 = arg0;
    D_801DB5A8 = 0;
    D_801DB5AC = 0;
    D_801DB5B4 = 1;
    D_801DB590 = 0;
    D_801DB5B8 = 0;
    func_8013B570(arg0, 0x30, 0, 4, (s32)func_801D475C);
}


struct func_801D475C_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_801D47B8();

void func_801D475C(struct func_801D475C_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x30, 0);
        func_800058DC(arg0, func_801D47B8);
        return;
    }
    func_800058DC(arg0, func_801D475C);
}

extern u8 D_801E1608;

typedef struct { s32 a, b, c; } func_801D47B8_Struct3;
typedef struct { f32 x, y, z; } func_801D47B8_StructF;
typedef struct { u8 pad[0x76]; u8 unk76; } func_801D47B8_StructB;
typedef struct { u8 pad[0x5C]; func_801D47B8_StructB *p; } func_801D47B8_StructA;
extern s32 func_801CC540();
extern s32 func_80010550(s32, void *);
extern s32 func_80011140(s32, void *, func_801D47B8_StructF, u32);
extern void func_8013A28C(void *, func_801D47B8_Struct3);
extern void func_801D4AF8(void *);
extern u8 D_8008DA88[];
extern u8 D_801BC025[];
extern u8 D_801D47B8[];
extern void func_80006214();
void func_801D4C58(s32 arg0);

void func_801D47B8(func_801D47B8_StructA *arg0, s32 arg1) {
    void *f;

    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D47B8);
        return;
    }
    if (D_801DB5A8 != 0) {
        func_80006214(arg0);
        func_8013A28C(D_8008DA88, *(func_801D47B8_Struct3 *)D_801DB5A8);
        f = arg0->p;
        ((func_801D47B8_StructB *)f)->unk76 = 1;
        D_801DB5A8 = 0;
    }
    f = (void *)D_801DB5AC;
    if (f != 0) {
        if (func_80011140(arg1, arg0->p, *(func_801D47B8_StructF *)f, (u32)((func_801D47B8_StructF *)f)->z) != 0) {
            D_801DB5AC = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->p) != 0) {
            D_801DB5B4 = 1;
        } else {
            D_801DB5B4 = 0;
        }
        *(func_801D47B8_Struct3 *)&D_801E1608 = *(func_801D47B8_Struct3 *)(D_801BC025 + 3);
    }
    if (D_801DB590 != 0) {
        func_801D4AF8(arg0);
    }
    if (D_801DB5B8 != 0) {
        func_801D4C58((s32)arg0);
    }
}



s32 func_801D49B0(void) {
    return D_801DB5AC != 0;
}



s32 func_801D49C0(void) {
    if (D_801DB5AC != 0) {
        return 0;
    }
    if (D_801DB5A8 != 0) {
        return 0;
    }
    return D_801DB5B4;
}


u8 *func_801D4A00(void) {
    return &D_801E1608;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D46F0/func_801D4A0C.s")


extern void func_801C3370(s32, s32, s32, u8, s32, s32, s32, s32);

void func_801D4A6C(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg0 != 0) {
        func_80006214(D_801E1600);
        func_801C3370(D_801E1600, arg1, arg2, arg3, (s32) arg4, 0, arg5, 0);
        D_801DB5B8 = 1;
        return;
    }
    D_801DB5B8 = 0;
}



s32 func_801D4AE8(void) {
    return D_801DB5B8 == 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D46F0/func_801D4AF8.s")


extern s32 func_801C354C(s32);

void func_801D4C58(s32 arg0) {
    func_80006214();
    D_801DB5B8 = func_801C354C(arg0) == 0;
}

