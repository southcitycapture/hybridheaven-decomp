#include "common.h"
struct func_80246730_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x34D - 6];
    u8 unk34D;
    u8 pad34E[0x3A6 - 0x34E];
    u8 unk3A6;
    u8 unk3A7;
};
extern struct func_80246730_Struct D_801BBBF0;
extern s32 D_80248804;
extern void func_800058DC(void *, void (*)(void));
extern s32 func_800178E8(void);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_80151790(s32);
typedef struct func_80244874_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    u8 unk90;
} func_80244874_Obj;
void func_802458F0(func_80244874_Obj *arg0, s32 arg1);


typedef struct func_802456C8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802456C8_Struct;

typedef struct func_802456C8_StructCamera {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_802456C8_StructCamera;

extern u8 D_80248018[];
extern f64 D_80248728;
extern f64 D_80248730;
extern f32 D_80248738;
extern f32 D_8024873C;
extern f32 D_80248740;
extern f32 D_80248744;
extern f32 D_80248748;
extern f32 D_8024874C;

#define CAMERA ((func_802456C8_StructCamera *)&D_801BBBF0)

void func_802456C8(func_802456C8_Struct *arg0, s32 arg1) {
    s32 timer;
    f64 step;

    timer = arg0->unk3C;
    arg0->unk3C++;
    if (arg0->unk3C >= 0x1000) {
        arg0->unk3C -= 0x100;
    }
    func_8011AAF4(D_80248018, 0x7D2, arg0, 0, 1, 0.0f,
                  CAMERA->unk1E8, CAMERA->unk1EC, CAMERA->unk1F0,
                  0.0f, CAMERA->unk1F4, CAMERA->unk1F8, CAMERA->unk1FC,
                  0.0f, 25.5f, -1, -1);
    if (timer < 30) {
        CAMERA->unk1E8 += D_80248728;
        CAMERA->unk1EC += D_80248730;
        CAMERA->unk1F0 += 0.0f;
        CAMERA->unk1F4 += 0.0;
        CAMERA->unk1F8 += 0.0;
        CAMERA->unk1FC += 0.0;
    }
    if ((u32)(timer % 2) < 1U) {
        step = 0.5;
    } else {
        step = -0.5;
    }
    CAMERA->unk1EC += step;
    if (func_800178E8() && !func_80151790(D_80248804)) {
        CAMERA->unk1E8 = D_80248738;
        CAMERA->unk1EC = D_8024873C;
        CAMERA->unk1F0 = D_80248740;
        CAMERA->unk1F4 = D_80248744;
        CAMERA->unk1F8 = D_80248748;
        CAMERA->unk1FC = D_8024874C;
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void))func_802458F0);
    }
}
