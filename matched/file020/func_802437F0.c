#include "context.h"
typedef struct func_802438F8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802438F8_Struct;
void func_802438F8(func_802438F8_Struct *arg0, s32 arg1);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

extern void func_800179B0(void *);
extern u8 D_802444D0[];
extern u8 D_80246B18[];
extern f32 D_80246BFC;
extern f32 D_80246C00;
extern f32 D_80246C04;
extern f32 D_80246C08;
extern f32 D_80246C0C;

struct func_802437F0_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_802437F0(struct func_802437F0_Struct *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 0x3C) {
        func_800179B0(D_802444D0);
        func_8011AAF4(D_80246B18, 0x1C2, (s32)arg0, 0, 1, 0.0f, D_80246BFC, D_80246C00, D_80246C04, 0.0f, D_80246C08, 12.5f, D_80246C0C, 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        func_8015115C(D_80246C70, D_80244430);
        func_800058DC(arg0, func_802438F8);
    }
}
