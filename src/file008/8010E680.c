#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010E680/func_8010E680.s")


extern void func_8011AA54(s32 arg0, void (*arg1)(void));
extern void func_8010E794();

void func_8010E76C(s32 arg0, s32 arg1) {
    func_8011AA54(arg0, func_8010E794);
}


extern u8 D_801BBBF0[];
extern f32 D_801637AC;
extern f32 D_801637B0;
extern f32 D_801637B4;
extern void func_8011A724(s32 arg0);
extern void func_8011A7FC(void);
extern void func_8011A878(f32 arg0, f32 arg1);
extern void func_8011AA0C(s32 arg0, void *arg1, void *arg2);
extern u8 D_8010E794[];

void func_8010E794(s32 arg0, s32 arg1) {
    void *temp_v0;

    *(f32 *)(*(s32 *)(*(s32 *)(D_801BBBF0 + 0xE8) + 0x2C) + 0x24) = *(f32 *)(D_801BBBF0 + 0x29C);
    *(f32 *)(*(s32 *)(*(s32 *)(D_801BBBF0 + 0xE8) + 0x2C) + 0x28) = *(f32 *)(D_801BBBF0 + 0x2A0);
    if (D_801BBBF0[0x2AD] != 0) {
        if (D_801BBBF0[0x2B5] == 1) {
            func_8011A724(1);
            func_8011A7FC();
            goto block_6;
        }
        if (D_801BBBF0[0x2B5] == 2) {
            func_8011AA0C(arg0, &func_8010E76C, D_8010E794);
            return;
        }
        D_801BBBF0[0x2AD] = 0;
        D_801BBBF0[0x2B5] = 0;
    }
block_6:
    func_8011A878(D_801637AC, D_801637B4);
    if (*(u16 *)(D_801BBBF0 + 0x2C) != 0x10) {
        temp_v0 = *(void **)(*(s32 *)(D_801BBBF0 + 0xE0) + 0x2C);
        D_801637AC = *(f32 *)((u8 *)temp_v0 + 0x4);
        D_801637B0 = *(f32 *)((u8 *)temp_v0 + 0x8);
        D_801637B4 = *(f32 *)((u8 *)temp_v0 + 0xC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010E680/func_8010E890.s")


extern s32 func_8011A3D4(void);
extern void func_8010F5CC(void);
extern void func_8011AA88(s32 arg0, void (*arg1)(void));
extern void func_8010EA78();

void func_8010EA34(s32 arg0, s32 arg1) {
    if (func_8011A3D4() == 0) {
        func_8010F5CC();
        func_8011AA88(arg0, func_8010EA78);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010E680/func_8010EA78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010E680/func_8010F5CC.s")

