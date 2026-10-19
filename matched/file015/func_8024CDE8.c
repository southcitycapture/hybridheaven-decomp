#include "context.h"
typedef struct func_8024CDE8_Struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_8024CDE8_Struct;
extern void func_80006214(void *);
extern void func_800179B0(void *);
extern void func_8024CF30();
extern u8 D_80259690[];
extern u8 D_80253980[];
extern u8 D_80253E2C[];
extern f32 D_802597E8;
extern f32 D_802597EC;
extern f32 D_802597F0;
extern f32 D_802597F4;
extern f32 D_802597F8;
extern f32 D_802597FC;

void func_8024CDE8(func_8024CDE8_Struct *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x3C) {
        *(f32 *)&D_801BBBF0.unk1E8 = D_802597E8;
        *(f32 *)&D_801BBBF0.unk1EC = D_802597EC;
        *(f32 *)&D_801BBBF0.unk1F0 = D_802597F0;
        D_801BBBF0.unk1F4 = D_802597F4;
        D_801BBBF0.unk1F8 = D_802597F8;
        D_801BBBF0.unk1FC = D_802597FC;
        func_8011AAF4(D_80259690, 0x2E8, arg0, 0, 1, 0.0f, *(f32 *)&D_801BBBF0.unk1E8, *(f32 *)&D_801BBBF0.unk1EC, *(f32 *)&D_801BBBF0.unk1F0, 0.0f, D_801BBBF0.unk1F4, D_801BBBF0.unk1F8, D_801BBBF0.unk1FC, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80253E2C);
        func_8015115C(D_8025A2D4, D_80253980);
        arg0->unk92 = 0;
        func_80006214(arg0);
        func_800058DC(arg0, func_8024CF30);
    }
}
