#include "common.h"
struct func_8024D2A4_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024D2A4_Top {
    u8 pad[0xDC];
    struct func_8024D2A4_Sub *unkDC;
};
extern struct func_8024D2A4_Top D_801BBBF0;
extern void func_800058DC(void *, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_801C2F0C(s32, f32 *);
extern void func_8024D898();

extern u8 D_80259890[];
extern u8 D_802598D0[];
extern f64 D_80259A88;
extern f64 D_80259A90;
extern void func_801FBB20();
struct func_8024D5DC_Struct_P { u8 pad[0x2C]; struct func_8024D5DC_Struct_T *unk2C; };
struct func_8024D5DC_Struct_T { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_8024D5DC_Struct_G {
    u8 pad[0xE0];
    struct func_8024D5DC_Struct_P *unkE0;
    u8 pad2[0x104];
    f32 unk1E8, unk1EC, unk1F0, unk1F4, unk1F8, unk1FC;
};
#define G (*(struct func_8024D5DC_Struct_G *)&D_801BBBF0)

void func_8024D5DC(void *arg0, s32 arg1) {
    G.unk1E8 += (G.unkE0->unk2C->unk4 - G.unk1E8) * 0.2;
    G.unk1EC += ((G.unkE0->unk2C->unk8 + 20.0f) - G.unk1EC) * 0.2;
    G.unk1F0 += ((G.unkE0->unk2C->unkC - 40.0f) - G.unk1F0) * 0.2;
    G.unk1F4 += (G.unkE0->unk2C->unk4 - G.unk1F4) * 0.3;
    G.unk1F8 += ((G.unkE0->unk2C->unk8 + 17.0f) - G.unk1F8) * 0.3;
    G.unk1FC += (G.unkE0->unk2C->unkC - G.unk1FC) * 0.3;
    func_8011AAF4(D_80259890, 0x16F, arg0, 0, 1, 0.0f, G.unk1E8, G.unk1EC, G.unk1F0, 0.0f, G.unk1F4, G.unk1F8, G.unk1FC, 0.0f, 35.0f, -1, -1);
    if ((s32)((G.unkE0->unk2C->unk4 < G.unk1E8) ? -(G.unkE0->unk2C->unk4 - G.unk1E8) : (G.unkE0->unk2C->unk4 - G.unk1E8)) == 0) {
        func_8011AAF4(D_802598D0, 0x175, arg0, 2, 1, 0.0f, G.unk1E8, G.unk1EC, G.unk1F0, 0.0f, G.unk1F4, G.unk1F8, G.unk1FC, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_800058DC(arg0, func_8024D898);
    }
}
