#include "common.h"
extern u8 D_80254214[];
extern u8 D_8025422C[];
extern u8 D_802545D4[];
extern s32 D_8025A2E4;
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
struct func_8024D5DC_Struct_T { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_8024D5DC_Struct_P { u8 pad[0x2C]; struct func_8024D5DC_Struct_T *unk2C; };
struct func_8024D5DC_Struct_G {
    u8 pad[0xE0];
    struct func_8024D5DC_Struct_P *unkE0;
    u8 pad2[0x104];
    f32 unk1E8, unk1EC, unk1F0, unk1F4, unk1F8, unk1FC;
};
#define G (*(struct func_8024D5DC_Struct_G *)&D_801BBBF0)
extern void func_800058DC(void *, void *);
s32 func_800178E8();
extern void func_800179B0(void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8015115C(s32, void *);
extern s32 func_80151790(s32);
extern void func_8024DFA4();


typedef struct func_8024DB10_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024DB10_Struct;
extern void func_80017990(void *);
extern u8 D_80254220[];
extern u8 D_80254238[];
extern u8 D_802542F0[];
extern u8 D_8025438C[];
extern u8 D_80254470[];
extern u8 D_802544D4[];
extern u8 D_80259928[];

void func_8024DB10(func_8024DB10_Struct *arg0, s32 arg1) {
    if (func_80151790(D_8025A2E4) == 0 && func_800178E8() != 0) {
        switch (arg0->unk90++) {
        case 0:
            func_8015115C(D_8025A2E4, D_80254214);
            func_800179B0(D_802542F0);
            return;
        case 1:
            func_8015115C(D_8025A2E4, D_8025422C);
            func_80017990(D_8025438C);
            return;
        case 2:
            func_8015115C(D_8025A2E4, D_80254220);
            func_80017990(D_80254470);
            return;
        case 3:
            func_8015115C(D_8025A2E4, D_80254238);
            func_80017990(D_802544D4);
            return;
        case 4:
            G.unk1E8 = 593.6f;
            G.unk1EC = -120.0f;
            G.unk1F0 = 71.0f;
            G.unk1F4 = 584.1f;
            G.unk1F8 = -120.4f;
            G.unk1FC = 106.8f;
            func_8011AAF4(D_80259928, 0x205, arg0, 0, 1, 0.0f,
                         G.unk1E8, G.unk1EC, G.unk1F0, 0.0f,
                         G.unk1F4, G.unk1F8, G.unk1FC, 0.0f,
                         35.0f, -1, -1);
            func_800179B0(D_802545D4);
            func_8015115C(D_8025A2E4, D_8025422C);
            arg0->unk90 = 0;
            func_800058DC(arg0, func_8024DFA4);
            break;
        }
    }
}
