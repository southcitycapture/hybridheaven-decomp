#include "context.h"
extern u8 D_80163B1C[];
extern void func_80006214(void *);
void func_801154A4(s32 arg0, s32 arg1);
void func_8011547C(s32 arg0, s32 arg1);
extern void func_8011A724(s32);
extern void func_8011AA0C(s32, void (*)(s32, s32), void (*)());

void func_80115390(s32 arg0, s32 arg1) {
    func_80005E44((void *)arg0, D_80163B1C);
    func_80006214((void *)arg0);
    D_801BBBF0.unkE4 = D_801BBBF0.unk54 = (func_80113148_StructO *)arg0;
    D_801BBBF0.unkE8 = D_801BBBF0.unkE4->unk24;
    func_8011A724(0);
    D_801BBBF0.unkE8->unk2C[9] = D_801BBBF0.unk29C;
    D_801BBBF0.unkE8->unk2C[10] = D_801BBBF0.unk2A0;
    if (((u8 *)&D_801BBBF0)[0x2B5] == 1) {
        func_8011A7FC();
        func_800058DC((void *)arg0, func_801154A4);
        return;
    }
    if (((u8 *)&D_801BBBF0)[0x2B5] == 2) {
        func_8011AA0C(arg0, func_8011547C, func_801154A4);
        return;
    }
    func_800058DC((void *)arg0, func_801154A4);
}
