#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_80241580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_802416D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_80241834.s")


extern void func_800058DC(void *arg0, void *arg1);
extern s32 func_801C3DC8(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5);
extern f32 D_8024A578;
extern void func_80241960(void);

void func_802418D8(void *arg0, s32 arg1) {
    s32 *temp_v0;

    temp_v0 = ((s32 **)arg0)[0x24 / 4][0x30 / 4];
    if (func_801C3DC8(arg0, ((s32 *)arg0)[0x90 / 4], ((s32 *)arg0)[0x94 / 4], ((s32 *)arg0)[0x98 / 4], ((f32 *)temp_v0)[1], ((f32 *)temp_v0)[2] + 3.0f, ((f32 *)temp_v0)[3], D_8024A578, 35.0f) == 0) {
        func_800058DC(arg0, func_80241960);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_80241960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_802419CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_80241D64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_802420B0.s")


extern void func_800179B0(void *);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(s32);
extern void func_80242390(void);
extern u8 D_80248404[];
extern u8 D_8024A468[];

void func_802422C0(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_8024A468, 0x1EA, arg0, 0, 2, 1.5f, 35.0f, 5.0f, 280.0f, 0.0f, 35.0f, 5.0f, 310.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_80133980(0x68);
        func_800179B0(D_80248404);
        func_800058DC(arg0, func_80242390);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_80242390.s")


extern s32 func_801C3044();
extern void func_801C2F0C(s32, s16 *);
extern void func_8024252C();

struct func_802424C0_Struct {
    s16 a;
    s16 b;
    s32 c;
    f32 d;
    s16 e;
    u8 pad[0x10];
};

void func_802424C0(s32 arg0, s32 arg1) {
    struct func_802424C0_Struct sp;

    if (func_801C3044() == 0) {
        sp.a = 0x1000;
        sp.c = 0x01680041;
        sp.e = 0xF;
        sp.d = 1.0f;
        func_801C2F0C(3, &sp.a);
        func_800058DC(arg0, func_8024252C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_8024252C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_802426D0.s")


typedef struct func_802426DC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
} func_802426DC_Struct;

extern s32 func_80133A24(s32);
extern s32 func_8012C97C(s32, s32);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern u8 D_80164F40[];
extern void func_8024276C(void);

void func_802426DC(func_802426DC_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x68) != 0) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = 0.0f;
        arg0->unk7C = 0.0f;
        arg0->unk80 = 0.0f;
        arg0->unk74 = func_8012C97C(0x23A, 4);
        arg0->unk2C = 0x800;
        func_800058DC(arg0, func_8024276C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_8024276C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_80242778.s")

