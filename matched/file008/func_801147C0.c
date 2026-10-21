#include "context.h"
typedef struct { u8 pad0[0x4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[8]; f32 unk18; f32 unk1C; f32 unk20; } func_801147C0_S4;
typedef struct { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; func_801147C0_S4 *unk30; } func_801147C0_S5;
typedef struct { u8 pad0[4]; func_801147C0_S5 *unk4; } func_801147C0_S1;
extern u8 D_80163A70[], D_80163A80[];
extern s16 D_80163A18;
extern f32 D_8018848C;
extern void func_800023A8();
extern void func_80002364();
extern void func_8012C89C();
extern void func_801149C4();
extern void func_801152B8(void);
extern void func_80006214(void *);
extern void func_8011A724(s32);
extern void func_8011AA0C(s32, void (*)(s32, s32), void (*)());
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_8011A7FC();
void func_80114980(s32 arg0, s32 arg1);
void func_801147C0(func_80113148_StructO *arg0, func_801147C0_S1 *arg1) {
    func_801147C0_S4 *t;
    func_80005E44(arg0, D_80163A70);
    func_80005E44(arg0, D_80163A80);
    func_80006214(arg0);
    D_801BBBF0.unkE8 = (D_801BBBF0.unkE4 = D_801BBBF0.unk54 = arg0)->unk24;
    arg1->unk4->unk22 = 0;
    func_8011A724(0);
    D_80163A18 = 0;
    func_800023A8(3);
    func_80002364(0xC000, 0xA, 0, 3);
    func_8012C89C(arg0, 1, 0xCA, 1);
    arg1->unk4->unk30->unk20 = D_8018848C;
    t = arg1->unk4->unk30;
    t->unk1C = t->unk20;
    arg1->unk4->unk30->unk18 = t->unk20;
    arg1->unk4->unk30->unk4 = D_801BBBF0.unkE8->unk2C[15];
    arg1->unk4->unk30->unk8 = D_801BBBF0.unkE8->unk2C[16];
    arg1->unk4->unk30->unkC = D_801BBBF0.unkE8->unk2C[17];
    D_801BBBF0.unkE8->unk2C[9] = D_801BBBF0.unk29C;
    D_801BBBF0.unkE8->unk2C[10] = D_801BBBF0.unk2A0;
    if (((u8 *)&D_801BBBF0)[0x2B5] == 1) {
        func_801152B8();
        func_8011A7FC();
        func_800058DC(arg0, func_801149C4);
        return;
    }
    if (((u8 *)&D_801BBBF0)[0x2B5] == 2) {
        func_8011AA0C((s32)arg0, func_80114980, func_801149C4);
        return;
    }
    func_800058DC(arg0, func_801149C4);
}
