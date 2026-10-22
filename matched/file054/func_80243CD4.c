#include "context.h"

extern u8 D_8024687C[];
extern u8 D_80247DC0[];
extern f64 D_80248540;
extern f64 D_80248548;
extern f64 D_80248550;
extern f64 D_80248558;
extern f64 D_80248560;
extern f64 D_80248568;
extern f32 D_80248570;
extern f32 D_80248574;
extern f32 D_80248578;
extern f32 D_8024857C;
extern f32 D_80248580;
void func_802465F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
extern void func_80244014();
extern void func_80246730(void);
typedef struct func_80243CD4_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    u8 unk90;
} func_80243CD4_Struct;
#define F80243CD4(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_80243CD4(func_80243CD4_Struct *arg0, s32 arg1) {
    s32 sp54;
    s32 m;
    extern s32 func_80151790();

    sp54 = arg0->unk3C++;
    if (func_80151790(D_80248804, arg0) == 0) {
        arg0->unk90 = 1;
        func_801511C4(D_80248800, D_8024687C, 10);
    }
    m = sp54 % 16;
    if (m == 0) goto c0;
    if (m == 4) goto c4;
    if (m == 8) goto c8;
    if (m != 12) goto end;
    if (1) goto c12;
c0:
    func_802465F8(23.0f, 13.0f, -13.0f, 0.5f);
    if (1) goto end;
c4:
    func_802465F8(-13.0f, 13.0f, -13.0f, 0.5f);
    if (1) goto end;
c8:
    func_802465F8(21.0f, 52.0f, -16.0f, 0.4f);
    if (1) goto end;
c12:
    func_802465F8(0.0f, 56.0f, 10.0f, 0.5f);
end:
    D_8011AAF4(D_80247DC0, 0x60E, arg0, 0, 1, 0.0f, F80243CD4(0x1E8), F80243CD4(0x1EC), F80243CD4(0x1F0), 0.0f, F80243CD4(0x1F4), F80243CD4(0x1F8), F80243CD4(0x1FC), 0.0f, 35.0f, -1, -1);
    F80243CD4(0x1E8) = F80243CD4(0x1E8) + D_80248540;
    F80243CD4(0x1EC) = F80243CD4(0x1EC) + D_80248548;
    F80243CD4(0x1F0) = F80243CD4(0x1F0) + D_80248550;
    F80243CD4(0x1F4) = F80243CD4(0x1F4) + D_80248558;
    F80243CD4(0x1F8) = F80243CD4(0x1F8) + D_80248560;
    F80243CD4(0x1FC) = F80243CD4(0x1FC) + D_80248568;
    F80243CD4(0x1EC) = (!(sp54 % 2) ? 0.5 : -0.5) + F80243CD4(0x1EC);
    if (sp54 >= 0x2D) {
        F80243CD4(0x1E8) = D_80248570;
        F80243CD4(0x1EC) = D_80248574;
        F80243CD4(0x1F0) = -126.0f;
        F80243CD4(0x1F4) = D_80248578;
        F80243CD4(0x1F8) = D_8024857C;
        F80243CD4(0x1FC) = D_80248580;
        func_8015115C(D_80248800, D_8024687C);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void))func_80244014);
    }
}
