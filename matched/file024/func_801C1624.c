#include "common.h"
extern s32 D_801CC8B0;
extern s32 D_801CC8B4;
extern s32 D_801CC8B8;
extern u8 D_801CC9F8[];
extern s32 func_80005670(s32, void *);
extern s32 func_80005700(s32);
extern void func_800058DC(s32, void *);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
s32 func_801C1160(void);
s32 func_801C125C(s8 arg0);
s32 func_801C1334(void);
typedef struct func_801C1764_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1764_Struct;
void func_801C1764(func_801C1764_Struct *arg0, s32 arg1);
void func_801C1A30(s32 arg0, s32 arg1);

extern s32 D_801CC8AC;
extern u8 D_801CCA20[];
extern u8 D_801CEB50[];

void func_801C1624(s32 arg0, s32 arg1) {
    if (func_801C1334() & 0xB000) {
        func_800058DC(arg0, func_801C1A30);
    }
    func_80005700(D_801CC8AC);
    func_80005700(D_801CC8B0);
    D_801CC8AC = 0;
    D_801CC8B0 = 0;
    func_8011AAF4(D_801CEB50, 0x22B, arg0, 0, 1, 3.0f, 0.0f, 120.0f, -22.0f, 3.0f, 0.0f, 42.5f, 0.0f, 0.0f, 30.0f, -1, -1);
    D_801CC8B4 = func_80005670(arg0, D_801CC9F8);
    D_801CC8B8 = func_80005670(arg0, D_801CCA20);
    func_801C125C(-3);
    func_801C1160();
    func_800058DC(arg0, func_801C1764);
}
