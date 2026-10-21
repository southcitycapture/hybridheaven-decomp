#include "context.h"

#define B ((u8 *)&D_801BBBF0)

extern f32 D_80163B2C;
extern f32 D_80163B30;
extern f32 D_80163B34;
extern void func_80119F9C(s16 *, s16 *);
extern void func_8011A0F0(s16 *);
extern void func_8011A148(s16, s16, s16, f32 *, f32 *, f32 *);
extern void func_8011A724(s32);
extern void func_8011A878(f32, f32);
extern u8 D_801154A4[];
extern void func_8011AA0C(s32, void (*)(s32, s32), void (*)());

void func_801154A4(s32 arg0, s32 arg1) {
    s16 sp36;
    s16 sp34;
    s16 sp32;
    f32 *v;

    D_801BBBF0.unkE8->unk2C[9] = D_801BBBF0.unk29C;
    D_801BBBF0.unkE8->unk2C[10] = D_801BBBF0.unk2A0;
    if (B[0x2AD] != 0) {
        if (B[0x2B5] == 1) {
            func_8011A724(1);
            func_8011A7FC();
        } else if (B[0x2B5] == 2) {
            func_8011AA0C(arg0, func_8011547C, (void (*)())D_801154A4);
            return;
        } else {
            B[0x2AD] = 0;
            B[0x2B5] = 0;
        }
    }
    func_8011A0F0(&sp32);
    D_801BBBF0.unkE8->unk2C[15] = D_801BBBF0.unkE0->unk2C[1];
    D_801BBBF0.unkE8->unk2C[16] = D_801BBBF0.unkE0->unk2C[2];
    D_801BBBF0.unkE8->unk2C[17] = D_801BBBF0.unkE0->unk2C[3];
    func_8011A878(D_80163B2C, D_80163B34);
    v = D_801BBBF0.unkE0->unk2C;
    D_80163B2C = v[1];
    D_80163B30 = v[2];
    D_80163B34 = v[3];
    func_80119F9C(&sp36, &sp34);
    v = D_801BBBF0.unkE8->unk2C;
    func_8011A148(sp36, sp34, sp32, &v[18], &v[19], &v[20]);
}
