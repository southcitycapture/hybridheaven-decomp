#include "common.h"

extern u8 D_80244430[];
extern u8 D_802444D0[];
extern const u8 D_80246B18[];
extern s32 D_80246C70;
extern void func_800058DC(void *, void *);
extern void func_800179B0(void *);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8015115C(s32, void *);
struct func_802437F0_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
typedef struct func_802438F8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802438F8_Struct;
void func_802438F8(func_802438F8_Struct *arg0, s32 arg1);
void func_802437F0(struct func_802437F0_Struct *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 0x3C) {
        func_800179B0(D_802444D0);
        func_8011AAF4(D_80246B18, 0x1C2, (s32)arg0, 0, 1, 0.0f, (-301.600006f), 11.3999996f, 505.100006f, 0.0f, (-321.600006f), 12.5f, 482.200012f, 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        func_8015115C(D_80246C70, D_80244430);
        func_800058DC(arg0, func_802438F8);
    }
}
