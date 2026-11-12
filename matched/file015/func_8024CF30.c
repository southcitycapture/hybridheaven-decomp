#include "common.h"
extern u8 D_80253968[];
extern u8 D_80253974[];
extern s32 D_8025A2D4;
struct func_8024C5B4_Struct {
    u8 pad[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    s32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};
extern struct func_8024C5B4_Struct D_801BBBF0;
typedef struct func_8024C8F0_Struct {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad2[0xF20 - 0x200];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    u8 unkF27;
    u8 unkF28;
} func_8024C8F0_Struct;
#define G ((func_8024C8F0_Struct *)&D_801BBBF0)
extern void func_800058DC(void *, void *);
extern s32 func_800178E8(void);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8015115C(s32, void *);
extern void func_801511C4(s32, void *, s32);
extern s32 func_80151790(s32);
typedef struct func_8024CDE8_Struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_8024CDE8_Struct;
typedef struct func_8024D134_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024D134_Struct;
void func_8024D134(func_8024D134_Struct *arg0, s32 arg1);

extern void func_80017990(void *);
extern u8 D_8025398C[];
extern u8 D_80253998[];
extern u8 D_802539A4[];
extern u8 D_80253ED4[];
extern u8 D_80253F68[];
extern u8 D_8025401C[];
extern u8 D_802540D0[];
extern f32 D_80259814;
extern f32 D_80259818;
extern f32 D_8025981C;
extern f32 D_80259820;
extern f32 D_80259824;
extern f32 D_80259828;

void func_8024CF30(func_8024CDE8_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if ((func_80151790(D_8025A2D4) == 0) && (func_800178E8() != 0)) {
        temp_v0 = arg0->unk92++;
        switch (temp_v0) {
        case 0:
            func_8015115C(D_8025A2D4, D_8025398C);
            func_80017990(D_80253ED4);
            return;
        case 1:
            func_8015115C(D_8025A2D4, D_80253998);
            func_80017990(D_80253F68);
            return;
        case 2:
            func_801511C4(D_8025A2D4, D_80253968, 0x14);
            func_80017990(D_8025401C);
            return;
        case 3:
            func_8015115C(D_8025A2D4, D_802539A4);
            func_80017990(D_802540D0);
            return;
        case 4:
            G->unk1E8 = D_80259814;
            G->unk1EC = D_80259818;
            G->unk1F0 = D_8025981C;
            G->unk1F4 = D_80259820;
            G->unk1F8 = D_80259824;
            G->unk1FC = D_80259828;
            func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/a03_s08provdemo1.c", 0x321, arg0, 0, 1,
                0.0f, G->unk1E8, G->unk1EC, G->unk1F0, 0.0f, G->unk1F4, G->unk1F8,
                G->unk1FC, 0.0f, 35.0f, -1, -1);
            func_801511C4(D_8025A2D4, D_80253974, 0xA);
            func_800058DC(arg0, func_8024D134);
            break;
        }
    }
}
