#include "common.h"


void func_80113140(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80113140/func_80113148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80113140/func_801133D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80113140/func_80113AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80113140/func_80114728.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80113140/func_80114758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80113140/func_801147C0.s")


extern s32 func_8011A3D4(void);
extern void func_801152B8(void);
extern void func_8011AA88(s32 arg0, void (*arg1)(void));
extern void func_801149C4();

void func_80114980(s32 arg0, s32 arg1) {
    if (func_8011A3D4() == 0) {
        func_801152B8();
        func_8011AA88(arg0, func_801149C4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80113140/func_801149C4.s")


typedef struct {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801152B8_Struct1;

typedef struct {
    u8 pad0[0x2C];
    func_801152B8_Struct1 *unk2C;
} func_801152B8_Struct0;

extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32, f32);
extern s16 D_80163A10;
extern s16 D_80163A14;
extern f32 D_80163A1C;
extern func_801152B8_Struct0 *D_801BBCD8;

void func_801152B8(void) {
    f32 a;
    f32 b;
    f32 c;
    f32 r;
    func_801152B8_Struct1 *p;

    p = D_801BBCD8->unk2C;
    a = p->unk3C - p->unk30;
    b = p->unk40 - p->unk34;
    c = p->unk44 - p->unk38;
    r = func_8002FC20(a * a + c * c, a);
    D_80163A10 = func_8001EF38(c, a) & 0x1FFF;
    if (func_8001EF38(b, r) & 0x1000) {
        D_80163A14 = (func_8001EF38(b, r) & 0x1FFF) - 0x2000;
    } else {
        D_80163A14 = func_8001EF38(b, r) & 0x1FFF;
    }
    D_80163A1C = r;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80113140/func_80115390.s")


extern void func_8011AA54(s32 arg0, void (*arg1)(void));
extern void func_801154A4();

void func_8011547C(s32 arg0, s32 arg1) {
    func_8011AA54(arg0, func_801154A4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80113140/func_801154A4.s")

