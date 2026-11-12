#include "common.h"
extern u8 D_80253980[];
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
extern void func_800179B0(void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8015115C(s32, void *);
extern s32 func_80151790(s32);
void func_8024C824(s32 arg0, s32 arg1);

extern void func_80017990(void *);
extern u8 D_80253998[];
extern u8 D_802539BC[];
extern u8 D_80253A64[];
extern u8 D_80253BA8[];
extern u8 D_80253C60[];
extern u8 D_80253D50[];
extern f32 D_80259758;
extern f32 D_8025975C;
extern f32 D_80259760;
extern f32 D_80259764;
extern f32 D_80259768;
extern f32 D_8025976C;
extern f32 D_80259770;

typedef struct func_8024C630_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_8024C630_Struct;

void func_8024C630(func_8024C630_Struct *arg0, s32 arg1) {
    u16 temp_v0;

    if (func_80151790(D_8025A2D4) == 0) {
        if (func_800178E8() != 0) {
            temp_v0 = arg0->unk92;
            arg0->unk92 = temp_v0 + 1;
            do { } while (0);
            switch (temp_v0) {
            case 0:
                func_8015115C(D_8025A2D4, D_80253980);
                func_800179B0(D_802539BC);
                break;
            case 1:
                func_8015115C(D_8025A2D4, D_80253998);
                func_800179B0(D_80253A64);
                break;
            case 2:
                func_8015115C(D_8025A2D4, D_80253998);
                func_80017990(D_80253BA8);
                break;
            case 3:
                func_8015115C(D_8025A2D4, D_80253998);
                func_80017990(D_80253C60);
                break;
            case 4:
                G->unk1E8 = D_80259758;
                G->unk1EC = D_8025975C;
                G->unk1F0 = D_80259760;
                G->unk1F4 = D_80259764;
                G->unk1F8 = D_80259768;
                G->unk1FC = D_8025976C;
                func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/a03_s08provdemo1.c", 0x23C,
                    arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, G->unk1F0, 0.0f,
                    G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, D_80259770, -1, -1);
                func_800179B0(D_80253D50);
                func_800058DC(arg0, &func_8024C824);
                break;
            }
        }
    }
}
